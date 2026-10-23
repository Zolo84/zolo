// FUN_005d5df0 @ 5d5df0 size=144

undefined4 __thiscall FUN_005d5df0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00428460(param_1 + 0x36);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -0xc;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x2e) + 4))(param_2);
  if (*(char *)(*(int *)(param_1 + 0x2e) + 0x96) != '\0') {
    FUN_00449290(param_1 + 0x3c);
    FUN_0050b500();
    FUN_00461a90();
    if (*(int *)(iVar1 + 0x5e) != 0) {
      (**(code **)(*DAT_00d0ca90 + 0x49c))((short)*(int *)(iVar1 + 0x5e));
      FUN_00652f50();
    }
  }
  return uVar2;
}


