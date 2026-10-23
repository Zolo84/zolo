// FUN_004672f0 @ 4672f0 size=82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004672f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_0044c5b0(param_2,param_3);
  iVar2 = FUN_0044c630(param_2);
  fVar3 = ((float10)*(float *)(iVar2 + 0xc) + (float10)*(float *)(iVar1 + 0xc)) *
          (float10)*(float *)(param_1 + 0x127bc + param_2 * 0x18) *
          (float10)*(float *)(*(int *)(param_1 + 0x244) + 0x76);
  if (fVar3 < (float10)_DAT_007e3380) {
    fVar3 = (float10)_DAT_007e3380;
  }
  return fVar3;
}


