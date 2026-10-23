// FUN_006392d0 @ 6392d0 size=153

undefined4 * __thiscall FUN_006392d0(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1d53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414c80(s_gfx_interface_tc_icons_bmp_008612e0);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef9d0;
  param_1[2] = &PTR_LAB_007ef9cc;
  FUN_00415b90(0x6d);
  FUN_00415b50(param_2);
  *(undefined1 *)((int)param_1 + 0x82) = param_3;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_tc_icon_overlay_bm_008612bc);
  }
  *(undefined4 *)((int)param_1 + 0x7e) = uVar2;
  ExceptionList = local_c;
  return param_1;
}


