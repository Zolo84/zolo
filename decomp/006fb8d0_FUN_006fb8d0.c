// FUN_006fb8d0 @ 6fb8d0 size=113

void __fastcall FUN_006fb8d0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f83ac;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f8360;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f835c;
  iVar1 = param_1[0x1b];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_006ed760();
  ExceptionList = local_c;
  return;
}


