// FUN_00702830 @ 702830 size=121

void __fastcall FUN_00702830(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db9a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f857c;
  local_4 = 0;
  FUN_007a77fa(*(undefined4 *)((int)param_1 + 0x16));
  FUN_0072bb40();
  *param_1 = &PTR_LAB_007f85f0;
  iVar2 = param_1[1];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = local_c;
  return;
}


