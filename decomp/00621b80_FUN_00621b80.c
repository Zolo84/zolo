// FUN_00621b80 @ 621b80 size=142

undefined4 * __thiscall
FUN_00621b80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1053;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef718;
  param_1[2] = &PTR_LAB_007ef714;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  *(undefined4 *)((int)param_1 + 0x32) = param_3;
  *(undefined1 *)((int)param_1 + 0x36) = param_4;
  *(undefined1 *)(param_1 + 0xb) = 1;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_hl_production_bmp_008600cc);
  }
  param_1[0xe] = uVar2;
  ExceptionList = local_c;
  return param_1;
}


