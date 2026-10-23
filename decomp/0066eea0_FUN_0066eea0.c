// FUN_0066eea0 @ 66eea0 size=262

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0066eea0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_00dc196c != 1) {
    iVar2 = FUN_004e9370(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0xc));
    iVar1 = *(int *)(iVar2 + 0x3f2);
    iVar2 = *(int *)(iVar2 + 0x3f6);
    FUN_00669ff0();
    iVar3 = FUN_0051b230();
    uVar5 = iVar1 - *(int *)(iVar3 + 0x3f2);
    uVar6 = iVar2 - *(int *)(iVar3 + 0x3f6);
    iVar1 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
    if (0x3a80 < iVar1) {
      uVar5 = 0x7500 - iVar1;
    }
    uVar4 = (int)uVar6 >> 0x1f;
    return (float10)(int)(((uVar6 ^ uVar4) - uVar4) +
                         ((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) *
           (float10)_DAT_007e5438;
  }
  iVar1 = FUN_004e9370(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0xc));
  iVar1 = *(int *)(iVar1 + 0x12);
  FUN_00669ff0();
  iVar2 = FUN_0051b230();
  iVar2 = *(int *)(iVar2 + 0x12);
  if (((iVar1 != iVar2) && (iVar1 != 0)) && (iVar2 != 0)) {
    if (iVar2 < iVar1) {
      return (float10)*(float *)(DAT_00d77b1e +
                                ((*(int *)(DAT_00d77b2e + iVar2 * 4) - iVar2) + iVar1) * 4) *
             (float10)_DAT_007e4088;
    }
    return (float10)*(float *)(DAT_00d77b1e +
                              ((*(int *)(DAT_00d77b2e + iVar1 * 4) - iVar1) + iVar2) * 4) *
           (float10)_DAT_007e4088;
  }
  return (float10)_DAT_007e3380;
}


