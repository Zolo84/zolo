// FUN_00413a00 @ 413a00 size=165

undefined4 __thiscall FUN_00413a00(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9a5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426f50(param_2);
  local_4 = 0;
  param_1 = param_1 + 0x105;
  iVar1 = 0x100;
  do {
    FUN_004271a0(param_1 + -1,1);
    FUN_004271a0(param_1,1);
    FUN_004271a0(param_1 + 1,1);
    param_1 = param_1 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_c;
  return 1;
}


