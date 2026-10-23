// FUN_00467290 @ 467290 size=82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00467290(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_0044c3d0(param_2,param_4);
  iVar2 = FUN_0044c620(param_2);
  fVar3 = ((float10)*(float *)(iVar2 + 0xc) + (float10)*(float *)(iVar1 + 0xc)) *
          (float10)*(float *)(param_1 + 0x11a9c + param_2 * 0x18) *
          (float10)*(float *)(*(int *)(param_1 + 0x244) + 0x76);
  if (fVar3 < (float10)_DAT_007e3380) {
    fVar3 = (float10)_DAT_007e3380;
  }
  return fVar3;
}


