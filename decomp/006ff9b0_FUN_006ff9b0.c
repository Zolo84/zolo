// FUN_006ff9b0 @ 6ff9b0 size=245

undefined4 * __fastcall FUN_006ff9b0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db706;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f852c;
  pvVar1 = operator_new(0x7e);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_searchpanel_bmp_0086cc18);
  }
  local_4 = 0xffffffff;
  param_1[1] = uVar2;
  pvVar1 = operator_new(0x56);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_0088ebf8;
    uVar2 = DAT_00bd1bac;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar2 = FUN_00437e60(0,0,0x226,100,uVar3,uVar2,puVar4);
  }
  local_4 = 0xffffffff;
  param_1[2] = uVar2;
  FUN_00438950(&DAT_0083baf4);
  param_1[3] = 0;
  *(undefined1 *)(param_1[2] + 0x3b) = 0;
  FUN_004388d0();
  uVar2 = FUN_0042b6c9(s_PASSWORDBOX_00870078);
  param_1[3] = uVar2;
  ExceptionList = local_c;
  return param_1;
}


