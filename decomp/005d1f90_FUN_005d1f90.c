// FUN_005d1f90 @ 5d1f90 size=147

undefined4 __thiscall FUN_005d1f90(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_00428ee0(param_1 + 0x2e);
  if (((iVar1 != 0) && (iVar1 + -8 != 0)) && (*(int *)(DAT_00d0ca90 + 0x21e62) != 4)) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x50))();
    uVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 4))(param_2);
    if (*(char *)(*(int *)(param_1 + 0x38) + 0x96) != '\0') {
      FUN_0064eb40(iVar1 + -8);
      FUN_0064eba0(0);
      (**(code **)(*(int *)(DAT_00d0ca90 + 0x21eb0) + 0x14))();
      FUN_0064c090(0x13);
    }
  }
  return uVar2;
}


