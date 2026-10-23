// FUN_004a4c80 @ 4a4c80 size=196

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a4c80(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  if ((*(int *)(param_4 + 0x254) == 8) || (*(int *)(param_4 + 0x254) == 9)) {
    return (float10)_DAT_007e6f20;
  }
  iVar2 = FUN_00527cb0(param_1);
  if ((float)iVar2 <= _DAT_007e34e0) {
    return (float10)_DAT_007e6f20;
  }
  _DAT_008ca0f8 =
       *(float *)(param_3 + 0x2c) * *(float *)(param_2 + 0xc) +
       *(float *)(param_3 + 0x28) * *(float *)(param_2 + 0x10);
  cVar1 = FUN_00455130();
  if (cVar1 == '\0') {
    fVar3 = ((float10)_DAT_008ca0f8 -
            ((float10)*(float *)(param_2 + 0x24) * (float10)*(float *)(param_3 + 0x1c)) /
            (float10)*(float *)(*(int *)(param_1 + 0x120) + 0x264)) *
            (float10)*(float *)(*(int *)(param_1 + 0x120) + 0x268);
    _DAT_008ca0f8 = (float)fVar3;
    return fVar3;
  }
  fVar3 = (float10)_DAT_008ca0f8 -
          (float10)*(float *)(param_2 + 0x24) * (float10)*(float *)(param_3 + 0x1c);
  _DAT_008ca0f8 = (float)fVar3;
  return fVar3;
}


