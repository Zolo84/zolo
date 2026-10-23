// FUN_0043ff60 @ 43ff60 size=57

void __thiscall FUN_0043ff60(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    return;
  }
  do {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_00415d30(param_2);
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


