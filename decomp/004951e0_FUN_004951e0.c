// FUN_004951e0 @ 4951e0 size=84

undefined4 FUN_004951e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00428ee0(*(int *)(param_1 + 4) + 0x4e);
  if ((iVar1 != 0) && (iVar1 != 8)) {
    FUN_00585690(*(int *)(param_1 + 4) + 0xe);
  }
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x21e3c) + 4))(param_1);
  (**(code **)(**(int **)(DAT_00d0ca90 + 0x21e40) + 4))(param_1);
  return 0;
}


