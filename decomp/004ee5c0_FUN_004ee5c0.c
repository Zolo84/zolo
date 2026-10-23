// FUN_004ee5c0 @ 4ee5c0 size=71

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ee5c0(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_004d0d40(*(undefined4 *)(param_1 + 0x18));
  if ((float10)param_2 <= fVar1) {
    fVar1 = (float10)param_2;
  }
  else {
    fVar1 = (float10)FUN_004d0d40(*(undefined4 *)(param_1 + 0x18));
  }
  *(float *)(param_1 + 0x14) = (float)fVar1;
  if (fVar1 < (float10)_DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


