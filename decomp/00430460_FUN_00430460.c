// FUN_00430460 @ 430460 size=122

void __fastcall FUN_00430460(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007ba41e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007e4020;
  local_4 = 0;
  FUN_0053a726();
  param_1[0x159] = &PTR_LAB_007e3ff0;
  iVar2 = param_1[0x15a];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  ExceptionList = local_c;
  return;
}


