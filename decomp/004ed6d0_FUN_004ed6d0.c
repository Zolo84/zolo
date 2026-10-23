// FUN_004ed6d0 @ 4ed6d0 size=85

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004ed6d0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16a) < 0) {
    return (float10)_DAT_007e3380;
  }
  iVar1 = *(int *)(DAT_00ab27b4 + param_2 * 0x4b2 + 0x16a);
  if (iVar1 < 0) {
    return (float10)_DAT_007e3380;
  }
  return (float10)*(float *)(DAT_00abc51c +
                            (*(int *)(DAT_00abc934 + *(int *)(param_1 + 0x16a) * 4) + iVar1) * 4);
}


