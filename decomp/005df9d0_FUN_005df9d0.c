// FUN_005df9d0 @ 5df9d0 size=93

undefined4 __thiscall FUN_005df9d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x11a) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x11a) + 0x20))(param_2,param_3);
    return uVar1;
  }
  if (*(int **)(param_1 + 0x11e) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x11e) + 0x20))(param_2,param_3);
    return uVar1;
  }
  if (*(int **)(param_1 + 0x122) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x122) + 0x20))(param_2,param_3);
    return uVar1;
  }
  return 0;
}


