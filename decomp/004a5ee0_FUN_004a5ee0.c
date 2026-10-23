// FUN_004a5ee0 @ 4a5ee0 size=195

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004a5ee0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00451250(*(undefined4 *)(param_1 + 6));
  if (iVar1 == 0) {
    return (float10)_DAT_007e3380;
  }
  if (((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] != 0) && (*(char *)(param_1 + 0x12d2) == '\0')) {
    return (float10)_DAT_007e3380;
  }
  fVar2 = ((float10)*(float *)(param_1 + 0x37d6) - (float10)_DAT_007e681c) * (float10)_DAT_007e6f30;
  if (fVar2 <= (float10)_DAT_007e6858) {
    if (fVar2 < (float10)_DAT_007e3380) {
      fVar2 = (float10)_DAT_007e3380;
    }
  }
  else {
    fVar2 = (float10)_DAT_007e6858;
  }
  fVar2 = (float10)*(float *)(param_1 + 0x13c44) + fVar2 + (float10)iVar1 * (float10)_DAT_007e6f34;
  if (fVar2 <= (float10)_DAT_007e3380) {
    return (float10)_DAT_007e3380;
  }
  if ((float10)_DAT_007e4088 < fVar2) {
    fVar2 = (float10)_DAT_007e4088;
  }
  return fVar2;
}


