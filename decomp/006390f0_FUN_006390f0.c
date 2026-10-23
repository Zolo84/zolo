// FUN_006390f0 @ 6390f0 size=100

undefined4 __thiscall FUN_006390f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x5c) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x96) != '\0') {
    FUN_0075a550(DAT_00d0ca90);
    return 1;
  }
  (**(code **)(**(int **)(param_1 + 0x60) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 0x60) + 0x96) != '\0') {
    return 1;
  }
  uVar1 = FUN_00442310(param_2);
  return uVar1;
}


