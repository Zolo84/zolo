// FUN_004a5fb0 @ 4a5fb0 size=235

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004a5fb0(int param_1)

{
  float fVar1;
  float10 fVar2;
  int local_4;
  
  local_4 = FUN_00451250(*(undefined4 *)(param_1 + 6));
  if (10 < local_4) {
    local_4 = 10;
  }
  fVar1 = (float)local_4 * _DAT_007e3844;
  fVar2 = ((float10)_DAT_007e681c - (float10)*(float *)(param_1 + 0x37da)) * (float10)_DAT_007e67d8;
  if (fVar2 <= (float10)_DAT_007e4090) {
    if (fVar2 < (float10)_DAT_007e3380) {
      fVar2 = (float10)_DAT_007e3380;
    }
  }
  else {
    fVar2 = (float10)_DAT_007e4090;
  }
  if (((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] != 0) && (*(char *)(param_1 + 0x12d2) == '\0')) {
    fVar1 = _DAT_007e3380;
  }
  fVar2 = ((float10)*(float *)(param_1 + 0x13c40) +
           (float10)*(float *)(*(int *)(param_1 + 0x244) + 0xae) + fVar2 + (float10)fVar1) -
          (float10)*(float *)(param_1 + 0x234) * (float10)_DAT_007e40b8;
  if ((float10)_DAT_007e3380 <= fVar2) {
    if ((float10)_DAT_007e4088 < fVar2) {
      fVar2 = (float10)_DAT_007e4088;
    }
    return fVar2;
  }
  return (float10)_DAT_007e3380;
}


