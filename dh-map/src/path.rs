//! Shortest paths over the province graph. Edge costs and passability come
//! from the caller, so land movement, naval routing and AI estimates can all
//! plug in the rules they need.

use crate::{Adjacency, Link};
use std::cmp::Ordering;
use std::collections::BinaryHeap;

/// A path found by [`shortest_path`]: provinces from start to goal inclusive.
#[derive(Debug, Clone, PartialEq)]
pub struct Path {
    pub provinces: Vec<u32>,
    pub cost: f32,
}

#[derive(Clone, Copy, PartialEq)]
struct Entry {
    estimate: f32,
    cost: f32,
    province: u32,
}

impl Eq for Entry {}

impl Ord for Entry {
    fn cmp(&self, other: &Self) -> Ordering {
        // Min-heap on the estimate; ties broken by province id for determinism.
        other
            .estimate
            .total_cmp(&self.estimate)
            .then_with(|| other.province.cmp(&self.province))
    }
}

impl PartialOrd for Entry {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

/// A* from `start` to `goal`. `edge_cost(from, link)` returns the cost of
/// crossing a link or `None` when it may not be used; `heuristic(p)` must not
/// overestimate the remaining cost (use `|_| 0.0` for plain Dijkstra).
pub fn shortest_path(
    adjacency: &Adjacency,
    start: u32,
    goal: u32,
    mut edge_cost: impl FnMut(u32, &Link) -> Option<f32>,
    mut heuristic: impl FnMut(u32) -> f32,
) -> Option<Path> {
    let n = adjacency.province_count();
    if start as usize >= n || goal as usize >= n {
        return None;
    }
    let mut best = vec![f32::INFINITY; n];
    let mut previous = vec![u32::MAX; n];
    let mut open = BinaryHeap::new();
    best[start as usize] = 0.0;
    open.push(Entry {
        estimate: heuristic(start),
        cost: 0.0,
        province: start,
    });
    while let Some(Entry { cost, province, .. }) = open.pop() {
        if province == goal {
            let mut provinces = vec![goal];
            while *provinces.last().unwrap() != start {
                provinces.push(previous[*provinces.last().unwrap() as usize]);
            }
            provinces.reverse();
            return Some(Path { provinces, cost });
        }
        if cost > best[province as usize] {
            continue; // stale heap entry
        }
        for link in adjacency.neighbours(province) {
            let Some(step) = edge_cost(province, link) else {
                continue;
            };
            let next = cost + step;
            let to = link.to as usize;
            if to < n && next < best[to] {
                best[to] = next;
                previous[to] = province;
                open.push(Entry {
                    estimate: next + heuristic(link.to),
                    cost: next,
                    province: link.to,
                });
            }
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::AdjKind;

    /// 1 – 2 – 3 – 4 plus a direct impassable 1 – 4 and a long 1 – 3 detour.
    fn graph() -> Adjacency {
        let edges: &[(u32, u32, AdjKind)] = &[
            (1, 2, AdjKind::Normal),
            (2, 3, AdjKind::River),
            (3, 4, AdjKind::Normal),
            (1, 4, AdjKind::Impassable),
            (1, 3, AdjKind::Normal),
        ];
        let mut lists = vec![Vec::new(); 5];
        for &(a, b, kind) in edges {
            lists[a as usize].push(Link {
                to: b,
                kind,
                through: None,
            });
            lists[b as usize].push(Link {
                to: a,
                kind,
                through: None,
            });
        }
        Adjacency::from_lists(lists)
    }

    fn land_cost(from: u32, link: &Link) -> Option<f32> {
        match link.kind {
            AdjKind::Impassable => None,
            _ if (from, link.to) == (1, 3) || (from, link.to) == (3, 1) => Some(5.0),
            AdjKind::River => Some(1.5),
            _ => Some(1.0),
        }
    }

    #[test]
    fn finds_cheapest_passable_route() {
        let adj = graph();
        let p = shortest_path(&adj, 1, 4, land_cost, |_| 0.0).unwrap();
        assert_eq!((p.provinces.as_slice(), p.cost), (&[1, 2, 3, 4][..], 3.5));
        let direct = shortest_path(&adj, 1, 4, |_, _| Some(1.0), |_| 0.0).unwrap();
        assert_eq!(direct.provinces, [1, 4]);
        assert_eq!(
            shortest_path(&adj, 2, 2, land_cost, |_| 0.0)
                .unwrap()
                .provinces,
            [2]
        );
        assert!(shortest_path(&adj, 1, 4, |_, _| None, |_| 0.0).is_none());
        assert!(shortest_path(&adj, 1, 99, land_cost, |_| 0.0).is_none());
    }
}
