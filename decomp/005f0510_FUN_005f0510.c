// FUN_005f0510 @ 5f0510 size=470

undefined4 * __thiscall FUN_005f0510(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ceafa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ed61c;
  param_1[2] = &PTR_LAB_007ed618;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed614;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe0,0x1f8,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_manpow_0085d720,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x33] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_combat_0085d6f8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x35] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_resour_0085d6d0,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_alphab_0085b4e8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x32] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_indust_0085d6a8,0,0xffffffff);
  }
  param_1[0x34] = uVar2;
  *(undefined1 *)(param_1[0x33] + 0x68) = 1;
  *(undefined1 *)(param_1[0x35] + 0x68) = 1;
  *(undefined1 *)(param_1[0x31] + 0x68) = 1;
  *(undefined1 *)(param_1[0x32] + 0x68) = 1;
  *(undefined1 *)(param_1[0x34] + 0x68) = 1;
  param_1[0x2f] = 0;
  ExceptionList = local_c;
  return param_1;
}


