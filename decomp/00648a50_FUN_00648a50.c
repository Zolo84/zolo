// FUN_00648a50 @ 648a50 size=220

undefined4 * __thiscall FUN_00648a50(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2756;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  local_4 = 1;
  *param_1 = &PTR_FUN_007f04a4;
  param_1[2] = &PTR_LAB_007f04a0;
  *(undefined4 *)((int)param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 4) = 1;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_dot_red_bmp_00866374);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x1a) = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_dot_pink_bmp_00866358);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)param_1 + 0x1e) = uVar2;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  FUN_00648c30(0);
  ExceptionList = local_c;
  return param_1;
}


