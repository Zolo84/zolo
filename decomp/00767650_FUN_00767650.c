// FUN_00767650 @ 767650 size=35

undefined4 __thiscall FUN_00767650(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00766fd0(param_2);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xba) = iVar1;
    return 1;
  }
  return 0;
}


