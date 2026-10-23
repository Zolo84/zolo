// FUN_006926d0 @ 6926d0 size=156

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006926d0(float param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = (int)param_1;
  param_1 = (float)*(int *)((int)param_1 + 0x19e) * _DAT_007e4088;
  iVar2 = FUN_004ece90();
  if (iVar2 != 0) {
    iVar2 = FUN_004ece90();
    param_1 = *(float *)(iVar2 + 0x10) * _DAT_007e4090 + param_1;
  }
  iVar2 = FUN_004ece80();
  if (iVar2 != 0) {
    iVar2 = FUN_004ece80();
    param_1 = *(float *)(iVar2 + 0x10) * _DAT_007e4090 + param_1;
  }
  fVar3 = (float10)FUN_004ed140();
  return (float10)*(float *)(iVar1 + 0x20a) + (float10)*(float *)(iVar1 + 0x20a) +
         (float10)*(float *)(iVar1 + 0x202) * (float10)_DAT_007e4090 +
         (float10)*(float *)(iVar1 + 0x1fe) * (float10)_DAT_007e4090 +
         fVar3 * (float10)_DAT_007e682c + (float10)param_1 + (float10)*(float *)(iVar1 + 0x206);
}


