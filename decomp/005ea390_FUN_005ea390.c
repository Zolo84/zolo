// FUN_005ea390 @ 5ea390 size=443

undefined4 * __thiscall FUN_005ea390(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ce70a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ed47c;
  param_1[2] = &PTR_LAB_007ed478;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed474;
  pvVar2 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0xe6,0x1fe,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x35] = uVar3;
  param_1[0x2f] = 0;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00433570(s_gfx_interface_button_sort_alphab_0085b4e8,0,0xffffffff);
  }
  piVar5 = param_1 + 0x30;
  local_4._0_1_ = 0;
  *piVar5 = iVar4;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_sort_land_b_0085cd94,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_sort_air_bm_0085cd70,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x32] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_sort_naval__0085cd4c,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x33] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_sort_bomb_b_0085cd28,0,0xffffffff);
  }
  param_1[0x34] = uVar3;
  iVar4 = 5;
  do {
    iVar1 = *piVar5;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
    *(undefined1 *)(iVar1 + 0x68) = 1;
  } while (iVar4 != 0);
  ExceptionList = local_c;
  return param_1;
}


