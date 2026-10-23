// thunk_FUN_006fb8d0 @ 6cc990 size=5

void __fastcall thunk_FUN_006fb8d0(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_007db298;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f83ac;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f8360;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f835c;
  iVar1 = param_1[0x1b];
  uStack_4 = 0;
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  uStack_4 = 0xffffffff;
  FUN_006ed760();
  ExceptionList = pvStack_c;
  return;
}


