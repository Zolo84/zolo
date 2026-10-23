// FUN_0049b530 @ 49b530 size=369

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0049b530(int param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = (int)param_2;
  fVar1 = (*(float *)(param_1 + 0x3a60 + (int)param_2 * 4) -
          *(float *)(param_1 + 0x3ac0 + (int)param_2 * 4)) +
          *(float *)(param_1 + 0x3a48 + (int)param_2 * 4);
  if (*(float *)(param_1 + 0x3a90 + (int)param_2 * 4) < _DAT_007e3380) {
    fVar1 = fVar1 - *(float *)(param_1 + 0x3a90 + (int)param_2 * 4);
  }
  param_2 = fVar1;
  fVar4 = (float10)FUN_00442c00(iVar3);
  if (fVar4 < (float10)_DAT_007e3380) {
    fVar4 = (float10)FUN_00442c00(iVar3);
    param_2 = (float)((float10)param_2 - fVar4);
  }
  if (iVar3 == 1) {
    return (float10)*(float *)(param_1 + 0x398c) + (float10)param_2;
  }
  if (iVar3 == 2) {
    return (float10)*(float *)(param_1 + 0x3994) + (float10)param_2;
  }
  if (iVar3 == 3) {
    return (float10)*(float *)(param_1 + 0x3990) + (float10)param_2;
  }
  if (iVar3 == 0) {
    return (float10)*(float *)(param_1 + 0x39a8) + (float10)*(float *)(param_1 + 0x39a4) +
           (float10)param_2;
  }
  if (iVar3 == 5) {
    return (float10)*(float *)(param_1 + 0x39ac) + (float10)*(float *)(param_1 + 0x39a0) +
           (float10)param_2;
  }
  if (iVar3 != 4) {
    return (float10)param_2;
  }
  fVar1 = *(float *)(param_1 + 0x3950);
  if (_DAT_007e3380 < *(float *)(param_1 + 0x39c8)) {
    uVar2 = *(undefined4 *)(param_1 + 6);
    fVar4 = (float10)FUN_00586a70(0xb,0,param_1);
    iVar3 = FUN_00451250(uVar2);
    return (float10)iVar3 * (float10)(float)fVar4 + (float10)fVar1 + (float10)param_2;
  }
  return (float10)_DAT_007e3380 + (float10)fVar1 + (float10)param_2;
}


