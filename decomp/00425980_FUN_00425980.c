// FUN_00425980 @ 425980 size=35

int __thiscall FUN_00425980(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x10) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x78))(param_2),
     *(int *)(*(int *)(param_1 + 0x10) + 4) == 9)) {
    return iVar1;
  }
  return param_1;
}


