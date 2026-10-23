// FUN_005d8510 @ 5d8510 size=434

undefined4 * __thiscall FUN_005d8510(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd8fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ece44;
  param_1[2] = &PTR_LAB_007ece40;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ece3c;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_reorg_bmp_0085b720,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x32] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_merge_bmp_0085b700,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x33] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_offensive_b_0085b6dc,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar2;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe8,0x1b8,0,0);
  }
  param_1[0x2f] = uVar2;
  local_4._0_1_ = 0;
  *(undefined4 *)(param_1[0x33] + 0x88) = 0x67;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_hr_bmp_0085b46c);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00433570(s_gfx_interface_button_convoy_bmp_0085b6bc,0,0xffffffff);
  }
  param_1[0x34] = iVar3;
  *(undefined4 *)(iVar3 + 0x88) = 0x6c;
  ExceptionList = local_c;
  return param_1;
}


