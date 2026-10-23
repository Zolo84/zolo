// FUN_005197b0 @ 5197b0 size=1452

undefined4 * __fastcall FUN_005197b0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1def;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00432d40();
  local_4._0_1_ = 1;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_LAB_007e4068;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007e4b94;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  local_4._0_1_ = 3;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  *(undefined4 *)((int)param_1 + 0xd2) = 0xa4;
  *(undefined2 *)((int)param_1 + 0x116) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x113) = 0;
  *(undefined1 *)((int)param_1 + 0x112) = 0;
  FUN_005075f0();
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x47] = &PTR_LAB_007e8b04;
  *(undefined2 *)((int)param_1 + 0x132) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((int)param_1 + 0x12f) = 0;
  *(undefined1 *)((int)param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x136) = 0;
  *(undefined1 *)((int)param_1 + 0x135) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x13a) = 0;
  *(undefined4 *)((int)param_1 + 0x13e) = 0;
  *(undefined1 *)((int)param_1 + 0x17a) = 0;
  *(undefined1 *)((int)param_1 + 0x17b) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)((int)param_1 + 0x17d) = 0;
  *(undefined1 *)((int)param_1 + 0x17e) = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)((int)param_1 + 0x186) = 0;
  FUN_00509d30();
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x7e] = &PTR_LAB_007e8ad4;
  *(undefined4 *)((int)param_1 + 0x21a) = 0;
  *(undefined4 *)((int)param_1 + 0x21e) = 0;
  *(undefined2 *)((int)param_1 + 0x226) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)((int)param_1 + 0x223) = 0;
  *(undefined1 *)((int)param_1 + 0x222) = 0;
  *(undefined2 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)((int)param_1 + 0x22a) = 0;
  *(undefined1 *)((int)param_1 + 0x229) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x232) = 0;
  *(undefined4 *)((int)param_1 + 0x236) = 0;
  *(undefined4 *)((int)param_1 + 0x23a) = 0;
  *(undefined1 *)((int)param_1 + 0x23e) = 0;
  *(undefined ***)((int)param_1 + 0x22e) = &PTR_LAB_007e378c;
  param_1[0x93] = 0;
  *(undefined1 *)((int)param_1 + 0x251) = 1;
  *(undefined1 *)((int)param_1 + 0x252) = 1;
  *(undefined1 *)((int)param_1 + 0x253) = 1;
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined1 *)((int)param_1 + 0x256) = 0;
  *(undefined1 *)((int)param_1 + 0x255) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  local_4._0_1_ = 7;
  param_1[0x97] = 0;
  FUN_0050b570();
  *(undefined1 **)((int)param_1 + 0x21a) = &LAB_00521a70;
  *param_1 = &PTR_FUN_007e8a0c;
  param_1[2] = &PTR_LAB_007e8a08;
  param_1[5] = &PTR_LAB_007e89f4;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_007e89ec;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007e89bc;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined4 *)((int)param_1 + 0x216) = 0;
  *(undefined4 *)((int)param_1 + 0x142) = 0;
  *(undefined4 *)((int)param_1 + 0x146) = 0xa4;
  *(undefined4 *)((int)param_1 + 0x176) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)((int)param_1 + 0x21e) = 0;
  *(undefined1 *)((int)param_1 + 0x25a) = 1;
  pvVar1 = operator_new(0xa8);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0052b990(param_1);
  }
  local_4._0_1_ = 7;
  *(undefined4 *)((int)param_1 + 0x156) = uVar2;
  param_1[0x90] = 0;
  pvVar1 = operator_new(0x94);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00416730();
  }
  *(undefined4 *)((int)param_1 + 0x15a) = uVar2;
  param_1[0x95] = DAT_00d61388;
  local_4._0_1_ = 7;
  *(undefined2 *)(param_1 + 0x96) = DAT_00d6138c;
  pvVar1 = operator_new(0x40);
  local_4._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0040cf70(param_1);
  }
  local_4._0_1_ = 7;
  param_1[0x7c] = uVar2;
  (**(code **)(param_1[0x65] + 0xc))();
  FUN_0050a020(param_1);
  *(undefined4 *)((int)param_1 + 0x14a) = 0;
  *(undefined4 *)((int)param_1 + 0x212) = 0;
  *(undefined1 *)((int)param_1 + 0x187) = 0;
  DAT_00adf13c = DAT_00adf13c + 1;
  pvVar1 = operator_new(0x94);
  local_4._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00416810(s_gfx_map_hoi_counter_strip_bmp_0084aeb4);
  }
  *(int **)((int)param_1 + 0x15e) = piVar3;
  local_4 = CONCAT31(local_4._1_3_,7);
  (**(code **)(*piVar3 + 0x34))(DAT_0087769c);
  (**(code **)(**(int **)((int)param_1 + 0x15e) + 0x38))(0);
  *(undefined4 *)(*(int *)((int)param_1 + 0x15e) + 0x82) = 0xffffffff;
  pvVar1 = operator_new(0x94);
  pvStack_c._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00416810(s_gfx_map_hoi_counter_size_bmp_0084ae94);
  }
  *(int **)((int)param_1 + 0x172) = piVar3;
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,7);
  (**(code **)(*piVar3 + 0x34))(4);
  (**(code **)(**(int **)((int)param_1 + 0x172) + 0x38))();
  uVar2 = FUN_00413d60(s_counter_bmp_0083c640);
  FUN_00415f20(uVar2);
  *(undefined4 *)(*(int *)((int)param_1 + 0x172) + 0x82) = 0xffffffff;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00416810(s_gfx_map_direction_counter_bmp_0084ae74);
  }
  *(int **)((int)param_1 + 0x166) = piVar3;
  (**(code **)(*piVar3 + 0x34))(8);
  (**(code **)(**(int **)((int)param_1 + 0x166) + 0x38))(0);
  *(undefined4 *)(*(int *)((int)param_1 + 0x166) + 0x82) = 0xffffffff;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00416810(s_gfx_map_direction_counter_retrea_0084ae4c);
  }
  *(int **)((int)param_1 + 0x16e) = piVar3;
  (**(code **)(*piVar3 + 0x34))(8);
  (**(code **)(**(int **)((int)param_1 + 0x16e) + 0x38))(0);
  *(undefined4 *)(*(int *)((int)param_1 + 0x16e) + 0x82) = 0xffffffff;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00416810(s_gfx_map_defense_bmp_0084ae38);
  }
  *(int *)((int)param_1 + 0x16a) = iVar4;
  *(undefined4 *)(iVar4 + 0x82) = 0xffffffff;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00416810(s_gfx_map_direction_counter_battle_0084ae10);
  }
  *(int **)((int)param_1 + 0x162) = piVar3;
  (**(code **)(*piVar3 + 0x34))(8);
  (**(code **)(**(int **)((int)param_1 + 0x162) + 0x38))(0);
  *(undefined4 *)(*(int *)((int)param_1 + 0x162) + 0x82) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x185) = 0;
  pvVar1 = operator_new(0x94);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00416730();
  }
  *(undefined4 *)((int)param_1 + 0x152) = uVar2;
  puVar5 = param_1 + 0xd;
  for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  ExceptionList = (void *)0x1;
  return param_1;
}


