// FUN_00620d60 @ 620d60 size=97

undefined4 __thiscall FUN_00620d60(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004355a0(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xca) + 0x3c))(param_2,param_3);
    return uVar2;
  }
  if (*(int **)(param_1 + 0xce) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xce) + 0x2c))(param_2,param_3);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(int **)(param_1 + 0xce) + 0x44))(param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}


