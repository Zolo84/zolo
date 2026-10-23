// FUN_0043e0c0 @ 43e0c0 size=72

undefined4 __thiscall FUN_0043e0c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x60) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 0x60) + 0x96) != '\0') {
    return 1;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 100) + 4))(param_2);
  if (iVar1 == 1) {
    return 1;
  }
  uVar2 = FUN_00442310(param_2);
  return uVar2;
}


