// FUN_006ee4e0 @ 6ee4e0 size=402

void __fastcall FUN_006ee4e0(undefined4 param_1)

{
  void *pvVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007da54c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_00d4181c != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)*DAT_00d4181c)(1,param_1);
  }
  pvVar1 = operator_new(0x7e);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_00d4181c = (undefined4 *)0x0;
  }
  else {
    DAT_00d4181c = (undefined4 *)FUN_00414c80(s_gfx_interface_frontend_btn_front_0086f400);
  }
  uStack_4 = 0xffffffff;
  FUN_00415420();
  *(undefined4 *)(*(int *)((int)DAT_00d4181c + 0x62) + 0x238) = 5;
  if (DAT_00d41820 != (undefined4 *)0x0) {
    (**(code **)*DAT_00d41820)(1);
  }
  pvVar1 = operator_new(0x7e);
  uStack_4 = 1;
  if (pvVar1 == (void *)0x0) {
    DAT_00d41820 = (undefined4 *)0x0;
  }
  else {
    DAT_00d41820 = (undefined4 *)FUN_00414c80(s_gfx_interface_frontend_btn_front_0086f3cc);
  }
  uStack_4 = 0xffffffff;
  FUN_00415420();
  *(undefined4 *)(*(int *)((int)DAT_00d41820 + 0x62) + 0x238) = 5;
  if (DAT_00d41824 != (undefined4 *)0x0) {
    (**(code **)*DAT_00d41824)(1);
  }
  pvVar1 = operator_new(0x7e);
  uStack_4 = 2;
  if (pvVar1 == (void *)0x0) {
    DAT_00d41824 = (undefined4 *)0x0;
  }
  else {
    DAT_00d41824 = (undefined4 *)FUN_00414c80(s_gfx_interface_frontend_box_doubl_0086f398);
  }
  uStack_4 = 0xffffffff;
  FUN_00415420();
  *(undefined4 *)(*(int *)((int)DAT_00d41824 + 0x62) + 0x238) = 5;
  if (DAT_00d41828 != (undefined4 *)0x0) {
    (**(code **)*DAT_00d41828)(1);
  }
  pvVar1 = operator_new(0x7e);
  uStack_4 = 3;
  if (pvVar1 == (void *)0x0) {
    DAT_00d41828 = (undefined4 *)0x0;
  }
  else {
    DAT_00d41828 = (undefined4 *)FUN_00414c80(s_gfx_interface_frontend_box_tripl_0086f364);
  }
  uStack_4 = 0xffffffff;
  FUN_00415420();
  *(undefined4 *)(*(int *)((int)DAT_00d41828 + 0x62) + 0x238) = 5;
  ExceptionList = pvStack_c;
  return;
}


