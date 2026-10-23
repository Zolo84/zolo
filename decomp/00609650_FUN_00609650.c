// FUN_00609650 @ 609650 size=173

undefined4 * __thiscall
FUN_00609650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0003;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef0dc;
  param_1[2] = &PTR_LAB_007ef0d8;
  param_1[0x10] = param_4;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  uVar1 = FUN_007a8d6d(param_3);
  param_1[0xe] = uVar1;
  uVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  param_1[0xf] = uVar1;
  *(undefined1 *)((int)param_1 + 0x36) = param_5;
  pvVar2 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00414c80(s_gfx_interface_hl_diplomaticactio_0085e96c);
  }
  param_1[0x11] = uVar1;
  ExceptionList = local_c;
  return param_1;
}


