// FUN_0049ea70 @ 49ea70 size=88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0049ea70(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = _DAT_007e3380;
  switch(param_2) {
  case 0:
    return (float10)*(float *)(param_1 + 0x39b4);
  case 1:
    return (float10)*(float *)(param_1 + 0x39bc);
  case 2:
    return (float10)*(float *)(param_1 + 0x39b8);
  case 3:
    return (float10)*(float *)(param_1 + 0x39c0);
  case 4:
    return (float10)*(float *)(param_1 + 0x39c8);
  case 5:
    fVar1 = *(float *)(param_1 + 0x39c4);
  }
  return (float10)fVar1;
}


