//! Stacks that events make and unmake, and the undeployed pool going onto
//! the map (`re/units-events/units-events.md` §1–§2).
//!
//! **Stacks.** [`World::create_stack`] puts a new empty stack on the map
//! (`add_corps`, a new corps or fleet of the AI); [`World::destroy_stack`]
//! takes one off (`delete_unit`, an emptied stack after
//! `remove_division`): what it carries goes with it, its leader goes back
//! to his country, nothing is refunded. Stacks are never removed from
//! [`World::units`], only emptied and taken off the map, so that indices
//! stay valid ([`World::stack_exists`]).
//!
//! **The pool.** What production finishes ([`crate::production`]) and
//! what `add_division` makes ([`World::add_pool_division`]) waits in the
//! country's undeployed pool ([`crate::Country::undeployed`]). A unit
//! that joins a stack from the pool ([`World::deploy_into`], message
//! 0x6B) loses half its organisation. Nothing goes onto the map by itself
//! for a human; for the AI ([`Deployment`]):
//! * ships, aircraft and brigades (`0x6791D0`,
//!   [`World::deploy_naval_air`]) as soon as one of its production series
//!   finishes (`0x478A95`) and whenever its economy agent runs, every
//!   `rand() % 2 + 1` days (`0x679FD0`): each
//!   joins the first of its stacks of the same class in the capital's
//!   region where it may be placed ([`World::can_deploy`], `0x49FC40`), a
//!   fleet of the same role and an air group of the same kind; else a new
//!   fleet in the first port of its provinces or a new air group in the
//!   first province of the capital's region that has an air base;
//! * land divisions when its military agent runs (`0x691120` → `0x695700`,
//!   [`World::deploy_land`]): daily at war, else every `rand() % 7 + 1`
//!   days. They join its stack in the capital's region nearest the capital
//!   that holds no garrison, or a new corps in the capital; a garrison
//!   always starts a new corps (which the next ones join). A country whose
//!   military a human controls
//!   instead puts each unit in a new stack in its capital
//!   ([`World::deploy_simple`]).
//!
//! **Regions** (`province+0x482`, supply.md §0) are the land provinces of
//! one controller connected through regular links ([`World::region`]). The
//! "continent" of a region (`vt0()+0x6C`, tested by `0x4CC9C0`) is not
//! traced: here it is the landmass, the land provinces connected through
//! regular links whoever holds them ([`DeployMap`]).
//!
//! Not modelled: units recalled to the pool or redeployed strategically
//! (destination `+0x14C`, arrival date `+0x60`, origin `+0x148`, and the
//! daily pass over them, §2.3, §2.6): every pool unit here is new; dormant
//! divisions (`+0x154`); the human's deployment screen; the AI's theatres
//! other than the capital's region (`C+0xE880`, which only matter for
//! units with an origin); the supply test of `0x4E9FB0` (a province of the
//! capital's region counts as supplied); the fleet AI's role
//! (`S+0x1F4.vt+0x104`, taken as "carries transports"); automatic names.

use crate::movement::MoveContext;
use crate::production::Undeployed;
use crate::{Rng, System, UnitState, World};
use dh_data::unitdb::DIVISION_TYPES;
use dh_data::{Branch, Brigade, TypeId, Unit, UnitDb};
use std::collections::{BTreeMap, HashSet, VecDeque};
use std::sync::Arc;

/// The ID type of stacks and divisions made in game (`0x428EB0` takes it
/// from the global word `0x88F26C`, not traced; a fixed one here).
pub const UNIT_ID_TYPE: i64 = 1;

/// Real types (`+0x134`) the deployment rules name.
const GARRISON: usize = 9;
const MULTI_ROLE: usize = 12;
const INTERCEPTOR: usize = 13;
const STRATEGIC_BOMBER: usize = 14;
const TACTICAL_BOMBER: usize = 15;
const NAVAL_BOMBER: usize = 16;
const LIGHT_CRUISER: usize = 22;
const DESTROYER: usize = 25;
const TRANSPORT: usize = 30;

/// The real type (`+0x134`) of a division type: its index in
/// [`DIVISION_TYPES`] (a type of `division_types.txt` is taken as its own
/// real type).
pub fn real_type(kind: &str) -> Option<usize> {
    DIVISION_TYPES.iter().position(|t| *t == kind)
}

/// Air groups that take a new air division (`0x4EF9D0`, `0x4EF830`,
/// `0x4EFB10`, `0x4EFAD0`, 🔎): fighters, strategic, tactical and naval
/// bombers; any other kind never joins one.
fn air_family(kind: &str) -> Option<u8> {
    match real_type(kind)? {
        MULTI_ROLE | INTERCEPTOR => Some(0),
        STRATEGIC_BOMBER => Some(1),
        TACTICAL_BOMBER => Some(2),
        NAVAL_BOMBER => Some(3),
        _ => None,
    }
}

impl Undeployed {
    /// A brigade waiting to be attached (`+0x162`).
    pub fn is_brigade(&self) -> bool {
        matches!(self, Undeployed::Brigade { .. })
    }

    /// Its type.
    pub fn kind(&self) -> &str {
        match self {
            Undeployed::Division(d) => &d.kind,
            Undeployed::Brigade { brigade, .. } => &brigade.kind,
        }
    }

    /// Its class (`+0x15F` land, `+0x160` air, `+0x161` naval): its
    /// model's; `None` for a type `db/units` lacks.
    pub fn branch(&self, units: &UnitDb) -> Option<Branch> {
        match self {
            Undeployed::Division(d) => units.divisions.get(&d.kind).map(|c| c.branch),
            Undeployed::Brigade { brigade, .. } => {
                units.brigades.get(&brigade.kind).map(|c| c.branch)
            }
        }
    }
}

/// A land region (`province+0x482`): the land provinces of `controller`
/// connected through regular links, listed in the order of the flood fill
/// (`0x4C93A1`; assumed depth first from the lowest province ID).
#[derive(Debug, Clone, PartialEq)]
pub struct Region {
    pub controller: String,
    pub provinces: Vec<u32>,
    set: HashSet<u32>,
}

impl Region {
    pub fn contains(&self, p: u32) -> bool {
        self.set.contains(&p)
    }
}

/// The map as deployment reads it: the provinces and each one's landmass
/// (the "continent" of its region, see the module notes; 0 for water).
pub struct DeployMap {
    pub ctx: Arc<MoveContext>,
    landmass: Vec<u32>,
}

impl DeployMap {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        let n = ctx.provinces.len();
        let mut landmass = vec![0u32; n];
        let land = |p: u32| ctx.province(p).is_some_and(|i| !i.is_water());
        let mut next = 0;
        for start in 0..n as u32 {
            if landmass[start as usize] != 0 || !land(start) {
                continue;
            }
            next += 1;
            landmass[start as usize] = next;
            let mut queue = VecDeque::from([start]);
            while let Some(p) = queue.pop_front() {
                for l in ctx.regular_neighbours(p) {
                    let q = l.to as usize;
                    if q < n && landmass[q] == 0 && land(l.to) {
                        landmass[q] = next;
                        queue.push_back(l.to);
                    }
                }
            }
        }
        DeployMap { ctx, landmass }
    }

    /// The landmass of a province (0 for water or an unknown province).
    pub fn landmass(&self, p: u32) -> u32 {
        self.landmass.get(p as usize).copied().unwrap_or(0)
    }
}

impl World {
    /// A new ID (`0x428EB0`) for a stack or a division.
    pub fn new_unit_id(&mut self) -> TypeId {
        self.new_id(UNIT_ID_TYPE)
    }

    /// A new empty stack of `owner` (`0x461E00` / `0x4620A0` / `0x461F50`
    /// → `0x4469B0`, `0x446D30`, `0x446FC0`): appended to the units and
    /// placed in `province` (`0x508670`), a fleet or air group with its
    /// base there; returns its index.
    pub fn create_stack(
        &mut self,
        owner: &str,
        branch: Branch,
        province: Option<u32>,
        name: &str,
    ) -> usize {
        let unit = Unit {
            branch,
            id: Some(self.new_unit_id()),
            name: name.to_owned(),
            location: province,
            home: None,
            base: province.filter(|_| branch != Branch::Land),
            control: None,
            leader: None,
            divisions: Vec::new(),
            carried: Vec::new(),
            raw: Default::default(),
        };
        self.units.push(UnitState::new(owner, unit));
        self.units.len() - 1
    }

    /// Whether stack `i` is on the map (not destroyed and not gone with its
    /// country).
    pub fn stack_exists(&self, i: usize) -> bool {
        self.units.get(i).is_some_and(|u| u.unit.location.is_some())
    }

    /// The stack on the map with this ID.
    pub fn stack_by_id(&self, id: TypeId) -> Option<usize> {
        (0..self.units.len()).find(|&i| self.stack_exists(i) && self.units[i].unit.id == Some(id))
    }

    /// Destroys stack `i` (`0x449860` without a killer, §1.1): the units it
    /// carries go with it, it leaves its battles and its leader goes back
    /// to his country; no manpower comes back. The stack is emptied and
    /// taken off the map.
    pub fn destroy_stack(&mut self, i: usize) {
        let Some(u) = self.units.get_mut(i) else {
            return;
        };
        u.unit.divisions.clear();
        u.unit.carried.clear();
        u.route.clear();
        u.unit.location = None;
        if let Some(id) = u.unit.leader.take() {
            if let Some(l) = self.leaders.get_mut(&id) {
                if l.unit == Some(i) {
                    l.unit = None;
                }
            }
        }
        for b in &mut self.battles {
            b.attackers.retain(|&x| x != i);
            for s in &mut b.sides {
                s.stacks.retain(|&x| x != i);
                if s.commander == Some(i) {
                    s.commander = None;
                }
            }
        }
    }

    /// The experience of a new unit of `tag` (`0x478610`, `0x479E20`):
    /// `max(0, (MODIFIER_MP_EXPERIENCE − 1) · 100)`.
    pub fn new_unit_experience(&self, tag: &str) -> f32 {
        let Some(c) = self.countries.get(tag) else {
            return 0.0;
        };
        ((self.policies.factor("MODIFIER_MP_EXPERIENCE", &c.policy) - 1.0) * 100.0).max(0.0)
    }

    /// A division as `add_division` makes it in the pool of `tag` (message
    /// 0x6A, `0x479E20`, §1.3): type `kind`, model `model`, a brigade of
    /// type `brigade` of the newest model `tag` may build, strength
    /// `min(cap, 100)` of a maximum of the type's cap
    /// ([`crate::production::STRENGTH_PERCENT`]), full organisation and the
    /// policy's experience. Nothing is paid. Returns its index in the
    /// pool.
    pub fn add_pool_division(
        &mut self,
        ctx: &MoveContext,
        tag: &str,
        kind: &str,
        model: i64,
        brigade: Option<&str>,
        name: &str,
    ) -> Option<usize> {
        let c = self.countries.get(tag)?;
        let brigades = brigade
            .map(|b| Brigade {
                kind: b.to_owned(),
                model: Some(c.newest_model(b)),
            })
            .into_iter()
            .collect();
        let cap = f64::from(crate::production::STRENGTH_PERCENT);
        let mut d = dh_data::Division {
            id: Some(self.new_unit_id()),
            name: name.to_owned(),
            kind: kind.to_owned(),
            model: Some(model),
            strength: Some(cap.min(100.0)),
            max_strength: Some(cap),
            organisation: None,
            experience: Some(f64::from(self.new_unit_experience(tag))),
            brigades,
            locked: false,
            no_supplies: false,
            no_fuel: false,
            raw: Default::default(),
        };
        d.organisation = Some(f64::from(self.max_org(ctx, tag, &d)));
        let pool = &mut self.countries.get_mut(tag)?.undeployed;
        pool.push(Undeployed::Division(d));
        Some(pool.len() - 1)
    }

    /// Message 0x6B for a pool unit (`0x47A1F0`, §2.2): entry `index` of
    /// `tag`'s pool joins `stack`. A division loses half its organisation
    /// (`max(0, 0.5 · org)`; an unset one counts as its maximum) and in a
    /// land stack the stack's dig-in moves towards the newcomer's 0 by its
    /// share (`S+0x29E += (0 − S+0x29E) / (n + 1)`, 🔎); a brigade goes to
    /// the first division of the stack that takes it (`0x4A4000`), and
    /// stays in the pool when none does. Nothing checks the province.
    /// Returns whether the unit joined.
    pub fn deploy_into(
        &mut self,
        ctx: &MoveContext,
        tag: &str,
        index: usize,
        stack: usize,
    ) -> bool {
        let Some(entry) = self
            .countries
            .get(tag)
            .and_then(|c| c.undeployed.get(index))
            .cloned()
        else {
            return false;
        };
        if !self.stack_exists(stack) {
            return false;
        }
        match entry {
            Undeployed::Division(mut d) => {
                let org = d
                    .organisation
                    .map_or_else(|| self.max_org(ctx, tag, &d), |o| o as f32);
                d.organisation = Some(f64::from((0.5 * f64::from(org)).max(0.0) as f32));
                let s = &mut self.units[stack];
                if s.unit.branch == Branch::Land {
                    let n = s.unit.divisions.len() as f64;
                    let dig = f64::from(s.dig_in);
                    s.dig_in = ((0.0 - dig) / (n + 1.0) + dig) as f32;
                }
                s.unit.divisions.push(d);
            }
            Undeployed::Brigade { brigade, .. } => {
                let k = self.units[stack]
                    .unit
                    .divisions
                    .iter()
                    .position(|d| accepts(&ctx.units, d, &brigade.kind));
                let Some(k) = k else {
                    return false;
                };
                self.units[stack].unit.divisions[k].brigades.push(brigade);
            }
        }
        self.countries
            .get_mut(tag)
            .unwrap()
            .undeployed
            .remove(index);
        true
    }

    /// The land region of province `p` ([`Region`]); `None` for water or a
    /// province nobody controls.
    pub fn region(&self, ctx: &MoveContext, p: u32) -> Option<Region> {
        let land = |q: u32| ctx.province(q).is_some_and(|i| !i.is_water());
        if !land(p) {
            return None;
        }
        let controller = self.controller.get(&p)?.clone();
        let same = |q: u32| land(q) && self.controller.get(&q) == Some(&controller);
        let mut set = HashSet::from([p]);
        let mut queue = VecDeque::from([p]);
        while let Some(q) = queue.pop_front() {
            for l in ctx.regular_neighbours(q) {
                if same(l.to) && set.insert(l.to) {
                    queue.push_back(l.to);
                }
            }
        }
        let start = *set.iter().min().unwrap();
        let mut provinces = Vec::with_capacity(set.len());
        let mut seen = HashSet::new();
        let mut stack = vec![start];
        while let Some(q) = stack.pop() {
            if !seen.insert(q) {
                continue;
            }
            provinces.push(q);
            let next: Vec<u32> = ctx
                .regular_neighbours(q)
                .map(|l| l.to)
                .filter(|&n| set.contains(&n) && !seen.contains(&n))
                .collect();
            stack.extend(next.into_iter().rev());
        }
        Some(Region {
            controller,
            provinces,
            set,
        })
    }

    /// The region of `tag`'s capital (`0x44E190`).
    pub fn capital_region(&self, ctx: &MoveContext, tag: &str) -> Option<Region> {
        let capital = self.countries.get(tag)?.capital?;
        self.region(ctx, capital)
    }

    /// `0x44B240`: `holder` is at war with `tag` and has no
    /// non-aggression pact with it.
    fn enemy_of(&self, holder: &str, tag: &str) -> bool {
        self.at_war(holder, tag)
            && !self.has_treaty(dh_data::diplomacy::TreatyKind::NonAggression, holder, tag)
    }

    /// `0x4A2ED0(C, P, 0)` (§2.4): province `p` is friendly to `tag`: nobody
    /// controls it (its other test, `0x4ECF70`, is not traced: taken as
    /// passed), `tag` controls it, nobody owns it, `tag` has military access
    /// to its controller, the controller is `tag`'s puppet, or both are in
    /// one alliance.
    pub fn friendly_to(&self, tag: &str, p: u32) -> bool {
        let Some(k) = self.controller.get(&p) else {
            return true;
        };
        if k == tag || !self.owner.contains_key(&p) || self.has_access(tag, k) {
            return true;
        }
        if self
            .countries
            .get(k)
            .is_some_and(|c| c.sovereign.as_deref() == Some(tag))
        {
            return true;
        }
        let a = self.diplomacy.alliance_of(tag);
        a.is_some() && a == self.diplomacy.alliance_of(k)
    }

    /// `0x49FC40` (§2.4) for a new unit (no origin): whether pool unit `u`
    /// of `tag` may be placed in province `p` (joining `stack`): `p` is land
    /// that `tag` owns, friendly and not held by an enemy, on the landmass
    /// of `tag`'s capital; a ship needs a port and a naval base there, an
    /// aircraft an air base and room in an air group (`combat[58]`
    /// divisions at most); a brigade needs a stack with a division that
    /// takes it.
    pub fn can_deploy(
        &self,
        map: &DeployMap,
        tag: &str,
        u: &Undeployed,
        p: u32,
        stack: Option<usize>,
    ) -> bool {
        let ctx = &map.ctx;
        if self
            .controller
            .get(&p)
            .is_some_and(|k| self.enemy_of(k, tag))
        {
            return false;
        }
        let Some(info) = ctx.province(p) else {
            return false;
        };
        if info.is_water() || !self.friendly_to(tag, p) {
            return false;
        }
        if u.is_brigade() && stack.is_none() {
            return false;
        }
        // A new unit: the capital's continent and an own province.
        let capital = self.countries.get(tag).and_then(|c| c.capital);
        let capital_land = capital.filter(|&c| {
            ctx.province(c).is_some_and(|i| !i.is_water()) && self.controller.contains_key(&c)
        });
        if let Some(c) = capital_land {
            if self.controller.contains_key(&p) && map.landmass(p) != map.landmass(c) {
                return false;
            }
        }
        if self.owner.get(&p).is_none_or(|o| o != tag) {
            return false;
        }
        match u.branch(&ctx.units) {
            Some(Branch::Naval) => {
                if !info.port || self.building_level(p, NAVAL_BASE) <= 0.0 {
                    return false;
                }
            }
            Some(Branch::Air) => {
                if self.building_level(p, AIR_BASE) <= 0.0 {
                    return false;
                }
                let full = stack.is_some_and(|s| {
                    let s = &self.units[s].unit;
                    s.branch == Branch::Air
                        && s.divisions.len() >= self.params.max_air_stack as usize
                });
                if full && !u.is_brigade() {
                    return false;
                }
            }
            _ => {}
        }
        if let (Undeployed::Brigade { brigade, .. }, Some(s)) = (u, stack) {
            let divisions = &self.units[s].unit.divisions;
            return divisions
                .iter()
                .any(|d| accepts(&ctx.units, d, &brigade.kind));
        }
        true
    }

    /// The level of building `b` in province `p`: the scenario's
    /// ([`World::province_buildings`]) and what production added there
    /// ([`World::buildings_built`]).
    pub fn building_level(&self, p: u32, b: usize) -> f32 {
        let of = |m: &BTreeMap<u32, [f32; 11]>| m.get(&p).map_or(0.0, |l| l[b]);
        of(&self.province_buildings) + of(&self.buildings_built)
    }

    /// The AI's deployment of ships, aircraft and brigades (`0x6791D0`,
    /// §2.5) for `tag`: each one in pool order joins the first stack of
    /// `tag` of its class standing in the capital's region where it may be
    /// placed ([`World::can_deploy`]) — a fleet whose role matches (a
    /// transport is for a transport group, a destroyer or light cruiser is
    /// one when `rand()` is odd, the others never; a fleet carrying
    /// transports is taken as one), an air group of the same kind.
    /// Without one a ship starts a fleet in the first province of `tag`
    /// (by ID) with a port that it controls (without the placement check),
    /// an aircraft an air group in the first province of the capital's
    /// region where it may be placed; a brigade waits. Land units are left
    /// to [`World::deploy_land`].
    pub fn deploy_naval_air(&mut self, map: &DeployMap, tag: &str, rng: &mut Rng) {
        let ctx = map.ctx.clone();
        let region = self.capital_region(&ctx, tag);
        let mut i = 0;
        while let Some(u) = self.countries.get(tag).and_then(|c| c.undeployed.get(i)) {
            let u = u.clone();
            let branch = u.branch(&ctx.units);
            if !matches!(branch, Some(Branch::Naval | Branch::Air)) {
                i += 1;
                continue;
            }
            let naval = branch == Some(Branch::Naval);
            let flag = match (&u, real_type(u.kind())) {
                (Undeployed::Division(_), Some(TRANSPORT)) => true,
                (Undeployed::Division(_), Some(DESTROYER | LIGHT_CRUISER)) => rng.rand15() % 2 == 1,
                _ => false,
            };
            let fits = |w: &World, s: usize| {
                let x = &w.units[s];
                let Some(p) = x.unit.location else {
                    return false;
                };
                x.owner == tag
                    && x.unit.branch == branch.unwrap()
                    && region.as_ref().is_some_and(|r| r.contains(p))
                    && w.can_deploy(map, tag, &u, p, Some(s))
                    && if naval {
                        let transports = x
                            .unit
                            .divisions
                            .iter()
                            .any(|d| real_type(&d.kind) == Some(TRANSPORT));
                        transports == flag
                    } else {
                        air_family(u.kind()).is_some_and(|f| {
                            !x.unit.divisions.is_empty()
                                && x.unit
                                    .divisions
                                    .iter()
                                    .all(|d| air_family(&d.kind) == Some(f))
                        })
                    }
            };
            let mut stack = (0..self.units.len()).find(|&s| fits(self, s));
            if stack.is_none() && !u.is_brigade() {
                let p = if naval {
                    self.provinces_owned_by(tag).find(|&p| {
                        ctx.province(p).is_some_and(|i| i.port)
                            && self.controller.get(&p).is_some_and(|k| k == tag)
                    })
                } else {
                    region.as_ref().and_then(|r| {
                        r.provinces
                            .iter()
                            .copied()
                            .find(|&p| self.can_deploy(map, tag, &u, p, None))
                    })
                };
                stack = p.map(|p| self.create_stack(tag, branch.unwrap(), Some(p), ""));
            }
            match stack {
                Some(s) if self.deploy_into(&ctx, tag, i, s) => {}
                _ => i += 1,
            }
        }
    }

    /// The AI's deployment of land divisions (`0x695700`, §2.5) for `tag`,
    /// in its capital's region when `tag` controls the capital: the pool's
    /// land divisions join its stack in that region nearest the capital
    /// (by the distance from the stack's province, or the next on its route,
    /// to the capital; the first of the nearest) that holds no garrison
    /// (`0x5253A0`); a garrison, or a division with no such stack, starts a
    /// new corps in the capital, which the next ones then join.
    pub fn deploy_land(&mut self, map: &DeployMap, tag: &str) {
        let ctx = map.ctx.clone();
        let Some(capital) = self.countries.get(tag).and_then(|c| c.capital) else {
            return;
        };
        let Some(region) = self.region(&ctx, capital).filter(|r| r.controller == tag) else {
            return;
        };
        let candidates: Vec<usize> = self.countries[tag]
            .undeployed
            .iter()
            .enumerate()
            .filter(|(_, u)| !u.is_brigade() && u.branch(&ctx.units) == Some(Branch::Land))
            .map(|(i, _)| i)
            .collect();
        if candidates.is_empty() {
            return;
        }
        let mut best: Option<(f32, usize)> = None;
        for (s, x) in self.units.iter().enumerate() {
            let Some(p) = x.unit.location else {
                continue;
            };
            if x.owner != tag
                || x.unit.branch != Branch::Land
                || !region.contains(p)
                || x.unit
                    .divisions
                    .iter()
                    .any(|d| real_type(&d.kind) == Some(GARRISON))
            {
                continue;
            }
            let from = x.route.front().copied().unwrap_or(p);
            let d = ctx.distance(from, capital).unwrap_or(f32::MAX);
            if best.is_none_or(|(b, _)| d < b) {
                best = Some((d, s));
            }
        }
        let mut target = best.map(|(_, s)| s);
        let mut removed = 0;
        for i in candidates {
            let index = i - removed;
            let kind = self.countries[tag].undeployed[index].kind().to_owned();
            // A new corps in the capital, which `tag` controls (the
            // region's); were it refused, a garrison would join the stack
            // found.
            if (real_type(&kind) == Some(GARRISON) || target.is_none())
                && self.friendly_to(tag, capital)
            {
                target = Some(self.create_stack(tag, Branch::Land, Some(capital), ""));
            }
            let Some(s) = target else {
                continue;
            };
            if self.deploy_into(&ctx, tag, index, s) {
                removed += 1;
            }
        }
    }

    /// The deployment of a country whose military a human controls
    /// (`0x6A8420`, §2.5): every division of the pool starts a stack of its
    /// own in the capital (a ship only when the capital has a port; the
    /// game takes the base of the capital's region, `+0x52`, not traced).
    pub fn deploy_simple(&mut self, map: &DeployMap, tag: &str) {
        let ctx = map.ctx.clone();
        let Some(capital) = self.countries.get(tag).and_then(|c| c.capital) else {
            return;
        };
        let port = ctx.province(capital).is_some_and(|i| i.port);
        let mut i = 0;
        while let Some(u) = self.countries.get(tag).and_then(|c| c.undeployed.get(i)) {
            let branch = u.branch(&ctx.units);
            let ok = !u.is_brigade()
                && match branch {
                    Some(Branch::Naval) => port,
                    Some(_) => true,
                    None => false,
                };
            if !ok {
                i += 1;
                continue;
            }
            let s = self.create_stack(tag, branch.unwrap(), Some(capital), "");
            if !self.deploy_into(&ctx, tag, i, s) {
                i += 1;
            }
        }
    }
}

/// Where a division is: in a stack (stack, position) or in a country's
/// pool (country, position).
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DivisionAt {
    Stack(usize, usize),
    Pool(String, usize),
}

impl World {
    /// The division with this ID (the registry, `0x428EE0`), in a stack on
    /// the map or in a pool.
    pub fn find_division(&self, id: TypeId) -> Option<DivisionAt> {
        for (s, u) in self.units.iter().enumerate() {
            if u.unit.location.is_none() {
                continue;
            }
            if let Some(k) = u.unit.divisions.iter().position(|d| d.id == Some(id)) {
                return Some(DivisionAt::Stack(s, k));
            }
        }
        for (tag, c) in &self.countries {
            let at = c.undeployed.iter().position(|u| match u {
                Undeployed::Division(d) => d.id == Some(id),
                Undeployed::Brigade { .. } => false,
            });
            if let Some(k) = at {
                return Some(DivisionAt::Pool(tag.clone(), k));
            }
        }
        None
    }

    /// The division of `tag` named `name` as `remove_division` looks it up
    /// when its event fires (`0x70D71E`, §1.4): the first one in its stacks
    /// (in order), and over that the first one in its pool. The names are
    /// compared as `_stricmp` does (`0x7A8430`): ASCII letters in either
    /// case.
    pub fn division_named(&self, tag: &str, name: &str) -> Option<TypeId> {
        if name.is_empty() {
            return None;
        }
        let same = |d: &dh_data::Division| d.name.eq_ignore_ascii_case(name);
        let pool = self
            .countries
            .get(tag)?
            .undeployed
            .iter()
            .find_map(|u| match u {
                Undeployed::Division(d) if same(d) => d.id,
                _ => None,
            });
        pool.or_else(|| {
            self.units
                .iter()
                .filter(|u| u.owner == tag && u.unit.location.is_some())
                .find_map(|u| u.unit.divisions.iter().find(|d| same(d)))
                .and_then(|d| d.id)
        })
    }

    /// KILL_DIVISION 0x6C without a refund (`0x47AA40`): the division
    /// leaves its stack or pool for good. Returns the stack it left.
    pub fn kill_division(&mut self, at: DivisionAt) -> Option<usize> {
        match at {
            DivisionAt::Stack(s, k) => {
                self.units[s].unit.divisions.remove(k);
                Some(s)
            }
            DivisionAt::Pool(tag, k) => {
                if let Some(c) = self.countries.get_mut(&tag) {
                    c.undeployed.remove(k);
                }
                None
            }
        }
    }
}

/// Building slots of naval and air bases ([`dh_data::production::BUILDINGS`]).
const NAVAL_BASE: usize = 7;
const AIR_BASE: usize = 6;

/// Whether division `d` takes a brigade of type `kind` (`0x4A4000`, 🔎): its
/// type allows it and a slot is free.
fn accepts(units: &UnitDb, d: &dh_data::Division, kind: &str) -> bool {
    units.divisions.get(&d.kind).is_some_and(|c| {
        c.allowed_brigades.iter().any(|b| b == kind) && d.brigades.len() < c.max_brigades
    })
}

/// The AI's deployment as a [`System`] (§2.5). Each day, for every
/// country that exists and that no human plays ([`World::player`]), in tag
/// order: ships, aircraft and brigades when its production finished a
/// series ([`World::deploy_requests`]) and when its economy agent runs
/// (`0x679FD0`: it first schedules its next run `rand() % 2 + 1` days
/// later; the flag `[0x87B5F0]` it tests is always set,
/// units-events-verify §7d); land divisions when its military agent runs
/// (`0x691120`: then again the next day at war, else `rand() % 7 + 1` days
/// later). Both agents first run on the first day (when the game starts
/// them is not traced). Add it after [`crate::Economy`], so that the
/// day's production comes first.
pub struct Deployment {
    pub map: DeployMap,
    /// Countries whose military a human controls (`0x6A8420`): their land
    /// routine is [`World::deploy_simple`].
    pub human_control: std::collections::BTreeSet<String>,
    /// The day (hours since the start / 24) each agent runs next.
    economy_due: BTreeMap<String, u64>,
    military_due: BTreeMap<String, u64>,
}

impl Deployment {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        Deployment {
            map: DeployMap::new(ctx),
            human_control: Default::default(),
            economy_due: BTreeMap::new(),
            military_due: BTreeMap::new(),
        }
    }

    /// The days on which the agents of `tag` run next: economy, military.
    pub fn due(&self, tag: &str) -> (Option<u64>, Option<u64>) {
        (
            self.economy_due.get(tag).copied(),
            self.military_due.get(tag).copied(),
        )
    }
}

impl System for Deployment {
    fn name(&self) -> &str {
        "deployment"
    }

    fn on_day(&mut self, world: &mut World, rng: &mut Rng) {
        let today = world.hour / 24;
        let requests = std::mem::take(&mut world.deploy_requests);
        for tag in world.alive() {
            if world.player.as_deref() == Some(tag.as_str()) {
                continue;
            }
            if requests.contains(&tag) {
                world.deploy_naval_air(&self.map, &tag, rng);
            }
            if self.economy_due.get(&tag).is_none_or(|&d| d <= today) {
                let d = u64::from(rng.rand15() % 2 + 1);
                self.economy_due.insert(tag.clone(), today + d);
                world.deploy_naval_air(&self.map, &tag, rng);
            }
            if self.military_due.get(&tag).is_none_or(|&d| d <= today) {
                if self.human_control.contains(&tag) {
                    world.deploy_simple(&self.map, &tag);
                } else {
                    world.deploy_land(&self.map, &tag);
                }
                let d = if world.diplomacy.in_war(&tag) {
                    1
                } else {
                    u64::from(rng.rand15() % 7 + 1)
                };
                self.military_due.insert(tag, today + d);
            }
        }
    }
}

#[cfg(test)]
pub(crate) mod tests {
    use super::*;
    use crate::movement::{terrain, ProvinceInfo, UnitModifiers};
    use crate::Country;
    use dh_data::unitdb::{BrigadeClass, DivisionClass, Model};
    use dh_data::{Division, GameDate};
    use dh_map::{AdjKind, Adjacency, Link};

    fn model(org: f64) -> Model {
        Model {
            stats: [
                ("defaultorganisation".to_owned(), org),
                ("manpower".to_owned(), 1.0),
                ("cost".to_owned(), 5.0),
                ("buildtime".to_owned(), 100.0),
            ]
            .into_iter()
            .collect(),
        }
    }

    /// Provinces 1 - 2 - 3 - 4 - 6 in a row on land, 5 sea next to 2, 3
    /// and the island 7. Ports in 2, 3 and 7. Divisions: infantry (two
    /// models, organisation 30 and 40, artillery allowed), militia,
    /// garrison, heavy cruiser, transport, destroyer, interceptor and
    /// tactical bomber; artillery brigades.
    pub(crate) fn ctx() -> MoveContext {
        let link = |to| Link {
            to,
            kind: AdjKind::Normal,
            through: None,
        };
        // Army positions 100 pixels apart by ID.
        let land = |p: i64, port| {
            Some(ProvinceInfo {
                infra: 1.0,
                port,
                army_pos: (p * 100, 0),
                ..Default::default()
            })
        };
        let sea = Some(ProvinceInfo {
            terrain: terrain::OCEAN,
            ..Default::default()
        });
        let mut units = UnitDb::default();
        let class = |name: &str, branch, models: Vec<Model>, allowed: &[&str]| DivisionClass {
            name: name.into(),
            branch,
            models,
            allowed_brigades: allowed.iter().map(|b| b.to_string()).collect(),
            max_brigades: 1,
        };
        let divisions = [
            (
                "infantry",
                Branch::Land,
                vec![model(30.0), model(40.0)],
                &["artillery"][..],
            ),
            ("militia", Branch::Land, vec![model(20.0)], &[][..]),
            ("garrison", Branch::Land, vec![model(10.0)], &[][..]),
            ("heavy_cruiser", Branch::Naval, vec![model(50.0)], &[][..]),
            ("transport", Branch::Naval, vec![model(50.0)], &[][..]),
            ("destroyer", Branch::Naval, vec![model(50.0)], &[][..]),
            ("interceptor", Branch::Air, vec![model(50.0)], &[][..]),
            ("tactical_bomber", Branch::Air, vec![model(50.0)], &[][..]),
        ];
        for (name, branch, models, allowed) in divisions {
            units
                .divisions
                .insert(name.into(), class(name, branch, models, allowed));
        }
        units.brigades.insert(
            "artillery".into(),
            BrigadeClass {
                name: "artillery".into(),
                branch: Branch::Land,
                models: vec![model(0.0), model(0.0)],
            },
        );
        MoveContext {
            adjacency: Adjacency::from_lists(vec![
                vec![],
                vec![link(2)],
                vec![link(1), link(3), link(5)],
                vec![link(2), link(4), link(5)],
                vec![link(3), link(6)],
                vec![link(2), link(3), link(7)],
                vec![link(4)],
                vec![link(5)],
            ]),
            provinces: vec![
                None,
                land(1, false),
                land(2, true),
                land(3, true),
                land(4, false),
                sea,
                land(6, false),
                land(7, true),
            ],
            terrain_move: [1.0; 12],
            modifiers: UnitModifiers::default(),
            units,
            airdist: None,
        }
    }

    /// GER (capital 1) owns and controls 1–4 and 7, FRA 6. A naval base in
    /// 3, air bases in 4 and 7.
    pub(crate) fn world() -> World {
        let mut w = World::empty(GameDate::new(1936, 1, 1));
        for tag in ["GER", "FRA"] {
            w.countries.insert(tag.into(), Country::new(tag));
        }
        w.countries.get_mut("GER").unwrap().capital = Some(1);
        for (p, tag) in [
            (1, "GER"),
            (2, "GER"),
            (3, "GER"),
            (4, "GER"),
            (6, "FRA"),
            (7, "GER"),
        ] {
            w.owner.insert(p, tag.into());
            w.controller.insert(p, tag.into());
        }
        w.province_buildings.insert(3, {
            let mut b = [0.0; 11];
            b[NAVAL_BASE] = 10.0;
            b
        });
        for p in [4, 7] {
            let b = w.province_buildings.entry(p).or_insert([0.0; 11]);
            b[AIR_BASE] = 2.0;
        }
        w
    }

    fn division(kind: &str, org: f64) -> Division {
        let doc = dh_text::script::parse_str(&format!("d = {{ type = {kind} }}"));
        let mut d = Division::from_block(doc.root.get_block("d").unwrap()).unwrap();
        d.organisation = Some(org);
        d
    }

    fn pool<'a>(w: &'a mut World, tag: &str) -> &'a mut Vec<Undeployed> {
        &mut w.countries.get_mut(tag).unwrap().undeployed
    }

    fn kinds(w: &World, s: usize) -> Vec<&str> {
        w.units[s]
            .unit
            .divisions
            .iter()
            .map(|d| d.kind.as_str())
            .collect()
    }

    #[test]
    fn regions_follow_the_controller_and_landmasses_the_land() {
        let map = DeployMap::new(Arc::new(ctx()));
        let mut w = world();
        let r = w.region(&map.ctx, 2).unwrap();
        // Depth first from the lowest ID; the island and FRA's 6 apart.
        assert_eq!(
            (r.controller.as_str(), r.provinces.as_slice()),
            ("GER", &[1, 2, 3, 4][..])
        );
        assert!(w.region(&map.ctx, 5).is_none(), "sea");
        w.controller.insert(3, "FRA".into());
        assert_eq!(w.region(&map.ctx, 4).unwrap().provinces, [4]);
        assert_eq!(w.capital_region(&map.ctx, "GER").unwrap().provinces, [1, 2]);
        assert_eq!(map.landmass(1), map.landmass(6));
        assert_ne!(map.landmass(1), map.landmass(7));
        assert_eq!(map.landmass(5), 0);
    }

    #[test]
    fn where_new_units_may_go() {
        let map = DeployMap::new(Arc::new(ctx()));
        let mut w = world();
        let inf = Undeployed::Division(division("infantry", 30.0));
        let ship = Undeployed::Division(division("heavy_cruiser", 0.0));
        let plane = Undeployed::Division(division("interceptor", 0.0));
        let can = |w: &World, u: &Undeployed, p, s| w.can_deploy(&map, "GER", u, p, s);
        assert!(can(&w, &inf, 1, None) && can(&w, &inf, 4, None));
        // Water; another country's province; another landmass.
        assert!(!can(&w, &inf, 5, None) && !can(&w, &inf, 6, None) && !can(&w, &inf, 7, None));
        // Owned but held by an enemy.
        w.controller.insert(2, "FRA".into());
        w.add_war("FRA", "GER");
        assert!(!can(&w, &inf, 2, None));
        // Ships: a port with a naval base (3), not a port without one (2).
        w.controller.insert(2, "GER".into());
        w.diplomacy.wars.clear();
        assert!(can(&w, &ship, 3, None) && !can(&w, &ship, 2, None) && !can(&w, &ship, 1, None));
        // Aircraft: an air base, and an air group with room.
        assert!(can(&w, &plane, 4, None) && !can(&w, &plane, 1, None));
        let group = w.create_stack("GER", Branch::Air, Some(4), "Luftflotte");
        assert!(can(&w, &plane, 4, Some(group)));
        w.units[group].unit.divisions = vec![division("interceptor", 0.0); 4];
        assert!(!can(&w, &plane, 4, Some(group)));
        // A brigade needs a stack with a division that takes it.
        let art = Undeployed::Brigade {
            name: "artillery".into(),
            brigade: Brigade {
                kind: "artillery".into(),
                model: Some(0),
            },
        };
        assert!(!can(&w, &art, 1, None));
        let corps = w.create_stack("GER", Branch::Land, Some(1), "");
        w.units[corps].unit.divisions = vec![division("militia", 0.0)];
        assert!(!can(&w, &art, 1, Some(corps)));
        w.units[corps]
            .unit
            .divisions
            .push(division("infantry", 0.0));
        assert!(can(&w, &art, 1, Some(corps)));
    }

    /// The heavy cruiser joins the fleet in 3 (no transports, the role of
    /// a ship that is not a transport, destroyer or light cruiser); the
    /// transport has no transport group and starts a fleet in the first
    /// port, 2, which has no naval base; the interceptor starts an air
    /// group in 4, the first province of the capital's region with an air
    /// base; the tactical bomber does not join that fighter group and
    /// starts one of its own; the land division waits.
    #[test]
    fn ships_and_aircraft_join_stacks_or_start_their_own() {
        let map = DeployMap::new(Arc::new(ctx()));
        let mut w = world();
        let fleet = w.create_stack("GER", Branch::Naval, Some(3), "Kriegsmarine");
        w.units[fleet].unit.divisions = vec![division("destroyer", 30.0)];
        *pool(&mut w, "GER") = vec![
            Undeployed::Division(division("heavy_cruiser", 40.0)),
            Undeployed::Division(division("infantry", 30.0)),
            Undeployed::Division(division("transport", 0.0)),
            Undeployed::Division(division("interceptor", 0.0)),
            Undeployed::Division(division("tactical_bomber", 0.0)),
        ];
        let n = w.units.len();
        w.deploy_naval_air(&map, "GER", &mut Rng::new(1));
        assert_eq!(kinds(&w, fleet), ["destroyer", "heavy_cruiser"]);
        assert_eq!(w.units[fleet].unit.divisions[1].organisation, Some(20.0));
        let new: Vec<(Branch, Option<u32>, Vec<&str>)> = (n..w.units.len())
            .map(|s| {
                (
                    w.units[s].unit.branch,
                    w.units[s].unit.location,
                    kinds(&w, s),
                )
            })
            .collect();
        assert_eq!(
            new,
            [
                (Branch::Naval, Some(2), vec!["transport"]),
                (Branch::Air, Some(4), vec!["interceptor"]),
                (Branch::Air, Some(4), vec!["tactical_bomber"]),
            ]
        );
        assert_eq!(w.units[n].unit.base, Some(2));
        let left: Vec<&str> = w.countries["GER"]
            .undeployed
            .iter()
            .map(|u| u.kind())
            .collect();
        assert_eq!(left, ["infantry"]);
        // The next transport does not join that transport group: a fleet
        // must stand where a ship may be placed (a naval base), so it
        // starts another fleet in 2.
        *pool(&mut w, "GER") = vec![Undeployed::Division(division("transport", 0.0))];
        w.deploy_naval_air(&map, "GER", &mut Rng::new(1));
        assert_eq!(w.units.len(), n + 4);
        // With a naval base in 2 the group takes it.
        w.province_buildings.entry(2).or_insert([0.0; 11])[NAVAL_BASE] = 1.0;
        *pool(&mut w, "GER") = vec![Undeployed::Division(division("transport", 0.0))];
        w.deploy_naval_air(&map, "GER", &mut Rng::new(1));
        assert_eq!(w.units.len(), n + 4);
        assert_eq!(kinds(&w, n), ["transport", "transport"]);
    }

    /// Land divisions join the stack of the capital's region nearest the
    /// capital that holds no garrison; a garrison starts a new corps in the
    /// capital, which the divisions after it join.
    #[test]
    fn land_divisions_join_the_stack_nearest_the_capital() {
        let map = DeployMap::new(Arc::new(ctx()));
        let mut w = world();
        let far = w.create_stack("GER", Branch::Land, Some(4), "far");
        let near = w.create_stack("GER", Branch::Land, Some(2), "near");
        let guard = w.create_stack("GER", Branch::Land, Some(1), "guard");
        w.units[guard].unit.divisions = vec![division("garrison", 10.0)];
        let abroad = w.create_stack("GER", Branch::Land, Some(7), "island");
        *pool(&mut w, "GER") = vec![
            Undeployed::Division(division("infantry", 30.0)),
            Undeployed::Division(division("garrison", 10.0)),
            Undeployed::Division(division("heavy_cruiser", 0.0)),
            Undeployed::Division(division("militia", 20.0)),
        ];
        w.units[near].dig_in = 3.0;
        w.deploy_land(&map, "GER");
        assert!(kinds(&w, far).is_empty() && kinds(&w, abroad).is_empty());
        assert_eq!(kinds(&w, near), ["infantry"]);
        assert_eq!(w.units[near].unit.divisions[0].organisation, Some(15.0));
        // A newcomer brings the dig-in down by its share.
        assert_eq!(w.units[near].dig_in, 0.0);
        let corps = w.units.len() - 1;
        assert_eq!(w.units[corps].unit.location, Some(1));
        assert_eq!(kinds(&w, corps), ["garrison", "militia"]);
        let left: Vec<&str> = w.countries["GER"]
            .undeployed
            .iter()
            .map(|u| u.kind())
            .collect();
        assert_eq!(left, ["heavy_cruiser"]);
        // Without the capital nothing goes.
        w.controller.insert(1, "FRA".into());
        *pool(&mut w, "GER") = vec![Undeployed::Division(division("infantry", 30.0))];
        w.deploy_land(&map, "GER");
        assert_eq!(w.countries["GER"].undeployed.len(), 1);
    }

    #[test]
    fn destroying_a_stack_sends_its_leader_home() {
        let mut w = world();
        let s = w.create_stack("GER", Branch::Land, Some(1), "corps");
        w.units[s].unit.divisions = vec![division("infantry", 30.0)];
        let mut l = crate::LeaderState::built_in("GER", Branch::Land);
        l.id = Some(7);
        w.leaders.insert(7, l);
        assert!(w.assign_leader(7, s));
        assert_eq!(
            (w.units[s].unit.leader, w.leaders[&7].unit),
            (Some(7), Some(s))
        );
        w.battles.push(crate::Battle::new(2, vec![s], 0));
        w.destroy_stack(s);
        assert!(!w.stack_exists(s) && w.units[s].unit.divisions.is_empty());
        assert_eq!((w.units[s].unit.leader, w.leaders[&7].unit), (None, None));
        assert!(w.battles[0].attackers.is_empty());
        assert_eq!(w.leaders[&7].country, "GER");
    }

    /// The AI's agents: ships at once when a series finishes, land units
    /// on the military agent's day (daily at war).
    #[test]
    fn the_deployment_system_runs_the_agents() {
        let ctx = Arc::new(ctx());
        let mut sim = crate::Simulation::new(world(), 3);
        sim.add_system(Deployment::new(ctx));
        sim.run_hours(24);
        let d = sim.system::<Deployment>().unwrap();
        let (economy, military) = d.due("GER");
        assert!((2..=3).contains(&economy.unwrap()));
        assert!((2..=8).contains(&military.unwrap()));
        let fleet = sim
            .world
            .create_stack("GER", Branch::Naval, Some(3), "fleet");
        *pool(&mut sim.world, "GER") = vec![
            Undeployed::Division(division("infantry", 30.0)),
            Undeployed::Division(division("heavy_cruiser", 0.0)),
        ];
        sim.world.deploy_requests.push("GER".into());
        sim.world.add_war("FRA", "GER");
        // The military agent runs on its day, then daily at war.
        let day = military.unwrap();
        sim.run_hours(24);
        assert_eq!(kinds(&sim.world, fleet), ["heavy_cruiser"]);
        assert!(sim.world.deploy_requests.is_empty());
        while sim.world.hour / 24 < day {
            assert_eq!(sim.world.countries["GER"].undeployed.len(), 1);
            sim.run_hours(24);
        }
        assert!(sim.world.countries["GER"].undeployed.is_empty());
        assert_eq!(
            sim.system::<Deployment>().unwrap().due("GER").1,
            Some(day + 1)
        );
        // A human's pool stays.
        sim.world.player = Some("GER".into());
        *pool(&mut sim.world, "GER") = vec![Undeployed::Division(division("militia", 30.0))];
        sim.run_hours(24 * 3);
        assert_eq!(sim.world.countries["GER"].undeployed.len(), 1);
    }
}
