// FUN_005e65d0 @ 5e65d0 size=3115

undefined4 * __thiscall FUN_005e65d0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ce538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  FUN_00519460();
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  param_1[0x95] = &PTR_LAB_007ed36c;
  *param_1 = &PTR_FUN_007ed2f4;
  param_1[2] = &PTR_LAB_007ed2f0;
  local_4._0_1_ = 2;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_FUN_007ed2ec;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00415020();
  }
  local_4._0_1_ = 2;
  param_1[0x5c] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00415020();
  }
  local_4._0_1_ = 2;
  param_1[0x5d] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_amph_penalty_bmp_0085c870);
  }
  local_4._0_1_ = 2;
  param_1[0x60] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_base_proximity_bmp_0085c84c);
  }
  local_4._0_1_ = 2;
  param_1[0x61] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_Blizzard_bmp_0085c830);
  }
  local_4._0_1_ = 2;
  param_1[0x62] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_Carrier_doctrine_b_0085c80c);
  }
  local_4._0_1_ = 2;
  param_1[99] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_dissent_bmp_0085c7f0);
  }
  local_4._0_1_ = 2;
  param_1[100] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_division_penalty_b_0085c7cc);
  }
  local_4._0_1_ = 2;
  param_1[0x65] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_dugin_modifier_bmp_0085c7a8);
  }
  local_4._0_1_ = 2;
  param_1[0x66] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_encirclement_penal_0085c780);
  }
  local_4._0_1_ = 2;
  param_1[0x67] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0xd;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_envelopment_penalt_0085c758);
  }
  local_4._0_1_ = 2;
  param_1[0x68] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0xe;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_forest_bmp_0085c73c);
  }
  local_4._0_1_ = 2;
  param_1[0x69] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0xf;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_fort_modifier_bmp_0085c71c);
  }
  local_4._0_1_ = 2;
  param_1[0x6a] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_frozen_bmp_0085c700);
  }
  local_4._0_1_ = 2;
  param_1[0x6b] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x11;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_HQ_nearby_bmp_0085c6e4);
  }
  local_4._0_1_ = 2;
  param_1[0x6c] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x12;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_jungle_bmp_0085c6c8);
  }
  local_4._0_1_ = 2;
  param_1[0x6d] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x13;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_Leader_bonus_bmp_0085c6a8);
  }
  local_4._0_1_ = 2;
  param_1[0x6e] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x14;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_marsh_bmp_0085c690);
  }
  local_4._0_1_ = 2;
  param_1[0x6f] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x15;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_mountain_bmp_0085c674);
  }
  local_4._0_1_ = 2;
  param_1[0x70] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x16;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_hills_modifier_bmp_0085c650);
  }
  local_4._0_1_ = 2;
  param_1[0x71] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x17;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_muddy_bmp_0085c638);
  }
  local_4._0_1_ = 2;
  param_1[0x72] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x18;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_night_modifier_bmp_0085c614);
  }
  local_4._0_1_ = 2;
  param_1[0x73] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x19;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_paratroop_penalty__0085c5f0);
  }
  local_4._0_1_ = 2;
  param_1[0x74] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x1a;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_rain_bmp_0085c5d8);
  }
  local_4._0_1_ = 2;
  param_1[0x75] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x1b;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_river_penalty_bmp_0085c5b8);
  }
  local_4._0_1_ = 2;
  param_1[0x76] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x1c;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_snow_bmp_0085c5a0);
  }
  local_4._0_1_ = 2;
  param_1[0x77] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x1d;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_storm_modifier_bmp_0085c57c);
  }
  local_4._0_1_ = 2;
  param_1[0x78] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x1e;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_urban_bmp_0085c564);
  }
  local_4._0_1_ = 2;
  param_1[0x79] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x1f;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_shore_bombard_bmp_0085c544);
  }
  local_4._0_1_ = 2;
  param_1[0x7a] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x20;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_night_flyer_bmp_0085c524);
  }
  local_4._0_1_ = 2;
  param_1[0x7b] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x21;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_offensive_doctrine_0085c4fc);
  }
  local_4._0_1_ = 2;
  param_1[0x7c] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x22;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_defensive_doctrine_0085c4d4);
  }
  local_4._0_1_ = 2;
  param_1[0x7d] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x23;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_superior_tactitian_0085c4ac);
  }
  local_4._0_1_ = 2;
  param_1[0x7e] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x24;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_stacking_penalty_b_0085c488);
  }
  local_4._0_1_ = 2;
  param_1[0x7f] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x25;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_difficulty_bmp_0085c468);
  }
  local_4._0_1_ = 2;
  param_1[0x80] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x26;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_lack_of_supplies_b_0085c444);
  }
  local_4._0_1_ = 2;
  param_1[0x81] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x27;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_desert_bmp_0085c428);
  }
  local_4._0_1_ = 2;
  param_1[0x82] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x28;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_weather_eq_bmp_0085c408);
  }
  local_4._0_1_ = 2;
  param_1[0x83] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x29;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_cos_defence_bmp_0085c3e8);
  }
  local_4._0_1_ = 2;
  param_1[0x84] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x2a;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_panzer_leader_bmp_0085c3c8);
  }
  local_4._0_1_ = 2;
  param_1[0x85] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x2b;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_commando_bmp_0085c3ac);
  }
  local_4._0_1_ = 2;
  param_1[0x86] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x2c;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_seawolf_bmp_0085c390);
  }
  local_4._0_1_ = 2;
  param_1[0x87] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x2d;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_surprise_penalty_b_0085c36c);
  }
  local_4._0_1_ = 2;
  param_1[0x88] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x2e;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_radar_station_bmp_0085c34c);
  }
  local_4._0_1_ = 2;
  param_1[0x89] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x2f;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_combined_arms_bmp_0085c32c);
  }
  local_4._0_1_ = 2;
  param_1[0x8a] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x30;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_better_combined_ar_0085c304);
  }
  local_4._0_1_ = 2;
  param_1[0x8b] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x31;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_multiple_bmp_0085c2e8);
  }
  local_4._0_1_ = 2;
  param_1[0x8c] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x32;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_experience_bmp_0085c2c8);
  }
  local_4._0_1_ = 2;
  param_1[0x8d] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x33;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_intercept_bmp_0085c2ac);
  }
  local_4._0_1_ = 2;
  param_1[0x8e] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x34;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_mission_efficiency_0085c284);
  }
  local_4._0_1_ = 2;
  param_1[0x8f] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x35;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_aircombat_bmp_0085c268);
  }
  param_1[0x90] = uVar2;
  ppuVar4 = &PTR_s_gfx_interface_ill_battle_event_c_0085bf88;
  puVar3 = param_1 + 0x55;
  do {
    local_4._0_1_ = 2;
    pvVar1 = operator_new(0x7e);
    local_4._0_1_ = 0x36;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00414c80(*ppuVar4);
    }
    *puVar3 = uVar2;
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
    local_4._0_1_ = 2;
  } while ((int)ppuVar4 < 0x85bfa4);
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x37;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433660();
  }
  local_4._0_1_ = 2;
  param_1[0x92] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 0x38;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433660();
  }
  local_4._0_1_ = 2;
  param_1[0x93] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x39;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_battle_bar_bmp_0085c248);
  }
  local_4._0_1_ = 2;
  param_1[0x94] = uVar2;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 0x3a;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0x60,0x118,0,0);
  }
  local_4._0_1_ = 2;
  param_1[0x5e] = uVar2;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 0x3b;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0x60,0x118,0,0);
  }
  local_4._0_1_ = 2;
  param_1[0x5f] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x3c;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_combat_unit_bmp_0085c224);
  }
  local_4._0_1_ = 2;
  param_1[0x54] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 0x3d;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00415020();
  }
  local_4._0_1_ = 2;
  param_1[0x53] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,0x3e);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_combat_event_bm_0085c200);
  }
  param_1[0x91] = uVar2;
  param_1[0x31] = 0;
  ExceptionList = local_c;
  return param_1;
}


