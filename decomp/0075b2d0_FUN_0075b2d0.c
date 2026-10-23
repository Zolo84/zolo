// FUN_0075b2d0 @ 75b2d0 size=59

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0075b2d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 200)];
  fVar2 = (float10)*(float *)(param_1 + 0x16) * (float10)_DAT_00dc177c;
  if (iVar1 != 0) {
    fVar2 = fVar2 * (float10)*(float *)(*(int *)(iVar1 + 0x244) + 0x56);
    if (*(int *)(param_1 + 0xd8) != 0) {
      fVar2 = fVar2 * (float10)*(float *)(iVar1 + 0x119d0 +
                                         *(int *)(*(int *)(*(int *)(param_1 + 0xd8) + 0x18) + 0x7e)
                                         * 8);
    }
  }
  return fVar2;
}


