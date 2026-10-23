// FUN_004fd510 @ 4fd510 size=65

float10 __fastcall FUN_004fd510(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = *(float *)(param_1 + 0xf8);
  if (*(int *)(param_1 + 0x5c) != 0) {
    fVar2 = *(float *)(*(int *)(*(int *)(param_1 + 0x5c) + 0x244) + 0x3e);
    fVar3 = (float10)FUN_0044c830(param_1,2);
    return (float10)fVar2 * (float10)fVar1 * fVar3;
  }
  return (float10)fVar1;
}


