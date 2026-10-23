// FUN_00642bc0 @ 642bc0 size=88

int __thiscall FUN_00642bc0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x96) != '\0') {
    FUN_00657820(*(undefined4 *)(param_1 + 0x10));
    return 1;
  }
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 4))(param_2);
    if (*(char *)(*(int *)(param_1 + 0x1c) + 0x96) != '\0') {
      iVar1 = 1;
    }
  }
  return iVar1;
}


