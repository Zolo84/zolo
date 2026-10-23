// FUN_0044ac70 @ 44ac70 size=118

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0044ac70(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar2 = (*(float *)(param_1 + 0x39bc) - *(float *)(param_1 + 0x3adc)) * _DAT_007e34c0;
  fVar1 = *(float *)(param_1 + 0x39c0) - *(float *)(param_1 + 0x3ae4);
  fVar1 = fVar1 + fVar1;
  fVar3 = (float10)*(float *)(param_1 + 0x39b8) - (float10)*(float *)(param_1 + 0x3ae0);
  if ((float10)fVar2 < fVar3) {
    fVar3 = (float10)fVar2;
  }
  if ((float10)fVar1 < fVar3) {
    fVar3 = (float10)fVar1;
  }
  if (fVar3 < (float10)_DAT_007e3380) {
    fVar3 = (float10)_DAT_007e3380;
  }
  return fVar3;
}


