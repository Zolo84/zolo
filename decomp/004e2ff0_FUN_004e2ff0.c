// FUN_004e2ff0 @ 4e2ff0 size=1954

undefined4 * __fastcall FUN_004e2ff0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bff74;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007e3858;
  param_1[2] = &PTR_LAB_007e386c;
  local_4 = 1;
  FUN_00428000();
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e4068;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007e8054;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xc] = &PTR_FUN_007e8020;
  local_4._0_1_ = 4;
  FUN_00442b90();
  *(undefined4 *)((int)param_1 + 0x14a) = 0;
  *(undefined4 *)((int)param_1 + 0x14e) = 0;
  *(undefined4 *)((int)param_1 + 0x152) = 0;
  *(undefined1 *)((int)param_1 + 0x156) = 0;
  *(undefined ***)((int)param_1 + 0x146) = &PTR_FUN_007e5258;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x56] = &PTR_LAB_007e4b04;
  *(undefined4 *)((int)param_1 + 0x172) = 0;
  *(undefined4 *)((int)param_1 + 0x176) = 0;
  *(undefined4 *)((int)param_1 + 0x17a) = 0;
  *(undefined1 *)((int)param_1 + 0x17e) = 0;
  *(undefined ***)((int)param_1 + 0x16e) = &PTR_FUN_007e5258;
  *(undefined2 *)((int)param_1 + 0x3c6) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined1 *)((int)param_1 + 0x3c3) = 0;
  *(undefined1 *)((int)param_1 + 0x3c2) = 0;
  *(undefined2 *)(param_1 + 0xf3) = 0;
  *(undefined1 *)((int)param_1 + 0x3ca) = 0;
  *(undefined1 *)((int)param_1 + 0x3c9) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  *(undefined2 *)((int)param_1 + 0x3d2) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)((int)param_1 + 0x3cf) = 0;
  *(undefined1 *)((int)param_1 + 0x3ce) = 0;
  *(undefined4 *)((int)param_1 + 0x49a) = 0;
  *(undefined4 *)((int)param_1 + 0x49e) = 0;
  *(undefined4 *)((int)param_1 + 0x4a2) = 0;
  *(undefined1 *)((int)param_1 + 0x4a6) = 0;
  *(undefined ***)((int)param_1 + 0x496) = &PTR_LAB_007e378c;
  *param_1 = &PTR_LAB_007e8008;
  param_1[2] = &PTR_LAB_007e8004;
  param_1[3] = &PTR_LAB_007e7fec;
  local_4._0_1_ = 8;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_FUN_007e7fe4;
  puVar5 = (undefined4 *)((int)param_1 + 0x1c6);
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = &DAT_008eff90;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x482) = 0;
  *(undefined4 *)((int)param_1 + 0x1aa) = 0;
  param_1[0xa6] = 0;
  param_1[0xb] = 0;
  param_1[0xe9] = 0;
  FUN_004e3c30();
  param_1[0x95] = 0;
  pvVar1 = operator_new(0x94);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00416810(s_gfx_map_storm_bmp_008480ec);
  }
  *(int **)((int)param_1 + 0x422) = piVar2;
  local_4 = CONCAT31(local_4._1_3_,8);
  (**(code **)(*piVar2 + 0x34))(0x13);
  pvVar1 = operator_new(0x94);
  puStack_8._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00416810(s_gfx_map_snow_bmp_008480d8);
  }
  *(int **)((int)param_1 + 0x42e) = piVar2;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
  (**(code **)(*piVar2 + 0x34))(0x13);
  pvVar1 = operator_new(0x94);
  pvStack_c._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00416810(s_gfx_map_blizzard_bmp_008480c0);
  }
  *(int **)((int)param_1 + 0x426) = piVar2;
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,8);
  (**(code **)(*piVar2 + 0x34))(0x13);
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00416810(s_gfx_map_rain_bmp_008480ac);
  }
  *(int **)((int)param_1 + 0x42a) = piVar2;
  (**(code **)(*piVar2 + 0x34))(0x13);
  iVar6 = *(int *)((int)param_1 + 0x42a);
  *(undefined4 *)(iVar6 + 0x22) = 0;
  *(undefined4 *)(iVar6 + 0x26) = 5;
  *(undefined1 *)(iVar6 + 0x67) = 0;
  iVar6 = *(int *)((int)param_1 + 0x42e);
  *(undefined4 *)(iVar6 + 0x22) = 0;
  *(undefined4 *)(iVar6 + 0x26) = 5;
  *(undefined1 *)(iVar6 + 0x67) = 0;
  iVar6 = *(int *)((int)param_1 + 0x426);
  *(undefined4 *)(iVar6 + 0x22) = 0;
  *(undefined4 *)(iVar6 + 0x26) = 5;
  *(undefined1 *)(iVar6 + 0x67) = 0;
  iVar6 = *(int *)((int)param_1 + 0x422);
  *(undefined4 *)(iVar6 + 0x22) = 0;
  *(undefined4 *)(iVar6 + 0x26) = 5;
  *(undefined1 *)(iVar6 + 0x67) = 0;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_weather_terrain_bmp_00848090);
  }
  *(undefined4 *)((int)param_1 + 0x1a6) = uVar3;
  uVar3 = FUN_00413d60(s_weather_terrain_palette_bmp_00848074);
  FUN_00415f20(uVar3);
  (**(code **)(**(int **)((int)param_1 + 0x1a6) + 0x34))(3);
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined4 *)((int)param_1 + 0x432) = 0;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_harbour_bmp_00848060);
  }
  *(undefined4 *)((int)param_1 + 0x436) = uVar3;
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  (**(code **)(**(int **)((int)param_1 + 0x436) + 0x34))(4);
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_airfield_bmp_00848030);
  }
  *(undefined4 *)((int)param_1 + 0x43a) = uVar3;
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  (**(code **)(**(int **)((int)param_1 + 0x43a) + 0x34))(2);
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_coastal_fortification_bm_0084800c);
  }
  *(undefined4 *)((int)param_1 + 0x43e) = uVar3;
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_fortification_bmp_00847ff0);
  }
  *(undefined4 *)((int)param_1 + 0x442) = uVar3;
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_victory_point_bmp_00847fd4);
  }
  *(undefined4 *)((int)param_1 + 0x446) = uVar3;
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_antiair_bmp_00847fc0);
  }
  *(undefined4 *)((int)param_1 + 0x44a) = uVar3;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_nuke_bmp_00847fac);
  }
  *(undefined4 *)((int)param_1 + 0x44e) = uVar3;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_radar_bmp_00847f98);
  }
  *(undefined4 *)((int)param_1 + 0x452) = uVar3;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_rocket_bmp_00847f84);
  }
  *(undefined4 *)((int)param_1 + 0x456) = uVar3;
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  uVar3 = FUN_00413d60(s_buildings_palette_bmp_00848048);
  FUN_00415f20(uVar3);
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_interface_map_circle_bmp_00847f64);
  }
  *(undefined4 *)((int)param_1 + 0x1a2) = uVar3;
  uVar3 = FUN_00413d60(s_map_circle_palette_bmp_00847f4c);
  FUN_00415f20(uVar3);
  (**(code **)(**(int **)((int)param_1 + 0x1a2) + 0x34))(2);
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_map_beach_bmp_00847f38);
  }
  *(undefined4 *)((int)param_1 + 0x45a) = uVar3;
  uVar3 = FUN_00413d60(s_beach_palette_bmp_00847f24);
  FUN_00415f20(uVar3);
  (**(code **)(**(int **)((int)param_1 + 0x45a) + 0x34))(0x30);
  pvVar4 = operator_new(0x94);
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00416810(s_gfx_interface_map_supply_bmp_00847f04);
  }
  *(undefined4 *)((int)param_1 + 0x45e) = uVar3;
  uVar3 = FUN_00413d60(s_production_palette_bmp_00847eec);
  FUN_00415f20(uVar3);
  *(undefined4 *)((int)param_1 + 0x136) = 0;
  *(undefined4 *)((int)param_1 + 0x48a) = 0;
  *(undefined4 *)((int)param_1 + 0x48e) = 0;
  *(undefined4 *)((int)param_1 + 0x492) = 0;
  param_1[0xeb] = 0;
  puVar5 = operator_new(0x14);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    *puVar5 = &PTR_FUN_007e4c84;
  }
  *(undefined4 **)((int)param_1 + 0x1c2) = puVar5;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  ExceptionList = pvVar1;
  return param_1;
}


