// FUN_0052b940 @ 52b940 size=70

uint __thiscall FUN_0052b940(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))();
  if ((char)uVar1 != '\0') {
    uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x2aa) + 4))();
    if (0 < (int)uVar1) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0xa0) + 0x20))(param_2,param_3);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}


