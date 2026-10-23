// FUN_005f5210 @ 5f5210 size=131

undefined4 __thiscall FUN_005f5210(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x86) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x86) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x86) + 0x4c))(param_2,param_3);
      return uVar2;
    }
  }
  if (*(int **)(param_1 + 0x82) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x82) + 0x20))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x82) + 0x4c))(param_2,param_3);
      return uVar2;
    }
  }
  cVar1 = FUN_004355a0(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x7e) + 0x40))(param_2,param_3);
    return uVar2;
  }
  return 0;
}


