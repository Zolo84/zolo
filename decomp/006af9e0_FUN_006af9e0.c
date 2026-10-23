// FUN_006af9e0 @ 6af9e0 size=138

void __fastcall FUN_006af9e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5ea6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f7154;
  local_4 = 1;
  FUN_00527230();
  param_1[0x16] = &PTR_LAB_007f3a6c;
  iVar2 = param_1[0x17];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_4 = 0xffffffff;
  FUN_00527230();
  ExceptionList = local_c;
  return;
}


