// FUN_00620ec0 @ 620ec0 size=252

undefined4 * __thiscall FUN_00620ec0(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1009;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_007ef6c8;
  param_1[2] = &PTR_LAB_007ef6c4;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(param_2 + 0xc);
  local_4 = 0;
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x10);
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_dbl_arrow_bmp_008600a0);
  }
  local_4._0_1_ = 0;
  param_1[0xd] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_kryss_bmp_00860088);
  }
  local_4._0_1_ = 0;
  param_1[0xe] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00414c80(s_gfx_interface_bar_resource_count_00860060);
  }
  param_1[0xf] = piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar3 + 0x34))(10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  ExceptionList = param_1;
  return param_1;
}


