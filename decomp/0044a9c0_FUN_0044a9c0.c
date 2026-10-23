// FUN_0044a9c0 @ 44a9c0 size=213

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0044a9c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_00dc196c == 1) {
    if (((param_1 != param_2) && (param_1 != 0)) && (param_2 != 0)) {
      if (param_2 < param_1) {
        return (float10)*(float *)(DAT_00d77b1e +
                                  ((*(int *)(DAT_00d77b2e + param_2 * 4) - param_2) + param_1) * 4);
      }
      return (float10)*(float *)(DAT_00d77b1e +
                                ((*(int *)(DAT_00d77b2e + param_1 * 4) - param_1) + param_2) * 4);
    }
  }
  else if (param_1 != param_2) {
    uVar2 = *(int *)(DAT_00ab27b4 + 0x3fa + param_1 * 0x4b2) -
            *(int *)(DAT_00ab27b4 + 0x3fa + param_2 * 0x4b2);
    iVar3 = *(int *)(DAT_00ab27b4 + 0x3fe + param_1 * 0x4b2) -
            *(int *)(DAT_00ab27b4 + 0x3fe + param_2 * 0x4b2);
    iVar1 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    if (0x3a80 < iVar1) {
      uVar2 = 0x7500 - iVar1;
    }
    return SQRT((float10)(int)(iVar3 * iVar3 + uVar2 * uVar2)) * (float10)_DAT_007e543c *
           (float10)_DAT_007e5438;
  }
  return (float10)_DAT_007e3380;
}


