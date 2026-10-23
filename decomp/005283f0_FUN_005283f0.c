// FUN_005283f0 @ 5283f0 size=45

void __thiscall FUN_005283f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_00419440(param_2,param_3);
  }
  return;
}


