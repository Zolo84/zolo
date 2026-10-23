// FUN_005f2a00 @ 5f2a00 size=425

undefined4 * __thiscall FUN_005f2a00(undefined4 *param_1,int param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cecba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_007ed838;
  param_1[2] = &PTR_LAB_007ed834;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(param_2 + 0xc);
  local_4 = 0;
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x10);
  param_1[0x14] = param_3;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_area_btn_pl_0085d8e8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0xd] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_area_btn_mi_0085d8b8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0xe] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_area_btn_pl_0085d8e8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0xf] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_area_btn_mi_0085d888,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x10] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_escort_bmp_0085d86c);
  }
  local_4._0_1_ = 0;
  param_1[0x12] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00414c80(s_gfx_interface_transport_bmp_0085d850);
    param_1[0x13] = uVar2;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[0x13] = 0;
  ExceptionList = local_c;
  return param_1;
}


