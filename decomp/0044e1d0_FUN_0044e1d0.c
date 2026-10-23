// FUN_0044e1d0 @ 44e1d0 size=62

undefined4 __fastcall FUN_0044e1d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a0750();
  if (*(int *)(iVar1 + 0x3d8) == param_1) {
    iVar1 = FUN_004e9370(*(undefined4 *)(param_1 + 0x117de));
    return *(undefined4 *)(iVar1 + 0x482);
  }
  iVar1 = FUN_004e9370(*(undefined4 *)(param_1 + 0x117f0));
  return *(undefined4 *)(iVar1 + 0x482);
}


