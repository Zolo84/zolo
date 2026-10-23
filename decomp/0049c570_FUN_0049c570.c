// FUN_0049c570 @ 49c570 size=86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0049c570(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (_DAT_007e3380 < *(float *)(param_1 + 0x39c8)) {
    uVar1 = *(undefined4 *)(param_1 + 6);
    fVar3 = (float10)FUN_00586a70(0xb,0,param_1);
    iVar2 = FUN_00451250(uVar1);
    return (float10)iVar2 * (float10)(float)fVar3;
  }
  return (float10)_DAT_007e3380;
}


