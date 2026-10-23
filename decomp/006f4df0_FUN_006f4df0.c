// FUN_006f4df0 @ 6f4df0 size=200

undefined4 * __thiscall FUN_006f4df0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dab83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee230(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007f8210;
  param_1[2] = &PTR_LAB_007f820c;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086b5f8,0,0xffffffff);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)((int)param_1 + 0x16) = uVar2;
  FUN_00415d40();
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEOPT_OK_0086f88c,*(undefined4 *)((int)param_1 + 0x16),uVar2);
  *(undefined4 *)(*(int *)((int)param_1 + 0x16) + 0x88) = 0xd;
  (**(code **)(**(int **)((int)param_1 + 0x16) + 0x18))(0xffffff9c,0xffffff9c);
  ExceptionList = unaff_ESI;
  return param_1;
}


