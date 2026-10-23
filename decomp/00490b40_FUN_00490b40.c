// FUN_00490b40 @ 490b40 size=117

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00490b40(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0xe);
  *(float *)(param_1 + 0xe360 + iVar1 * 4) =
       *(float *)(*(int *)(param_2 + 4) + 0x12) + *(float *)(param_1 + 0xe360 + iVar1 * 4);
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0xe);
  if (*(float *)(param_1 + 0xe360 + iVar1 * 4) < _DAT_007e5dd0) {
    *(undefined4 *)(param_1 + 0xe360 + iVar1 * 4) = 0x3d4ccccd;
  }
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0xe);
  if (_DAT_007e4090 < *(float *)(param_1 + 0xe360 + iVar1 * 4)) {
    *(undefined4 *)(param_1 + 0xe360 + iVar1 * 4) = 0x41200000;
  }
  return 3;
}


