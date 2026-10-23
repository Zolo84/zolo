// FUN_004a60a0 @ 4a60a0 size=475

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004a60a0(int param_1,int param_2,char param_3,char param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = (&DAT_0089cad8)[param_2];
  fVar1 = _DAT_007e3380;
  if (iVar4 == 0) goto LAB_004a6202;
  cVar3 = FUN_0044a690(*(undefined4 *)(param_1 + 6));
  if ((((cVar3 != '\0') || (DAT_00d610dc == '\x01')) ||
      (*(char *)(*(int *)(param_1 + 6) + 0x34ac + iVar4) != '\0')) ||
     (cVar3 = FUN_005861a0(*(undefined4 *)(iVar4 + 6)), cVar3 != '\0')) {
    return 100;
  }
  iVar4 = FUN_004a5c40(0xc,param_2);
  if ((float)iVar4 == (float)_DAT_007e3348) {
    return 0;
  }
  if ((param_3 == '\0') && (param_4 == '\0')) {
    fVar1 = (float)iVar4 * _DAT_007e40b8;
    cVar3 = FUN_0044b280(param_2);
    if (cVar3 == '\0') {
      iVar4 = FUN_0044dc80(6);
      fVar1 = (float)iVar4 * _DAT_007e6f50 + fVar1 + *(float *)(param_1 + 0x13c70);
      goto LAB_004a6202;
    }
    fVar1 = fVar1 - _DAT_007e3374;
  }
  else {
    if (iVar4 < 0x33) {
      fVar2 = (float)iVar4 * (float)_DAT_007e6f48;
    }
    else {
      fVar2 = (float)(iVar4 + -0x32) * (float)_DAT_007e6f40 + (float)_DAT_007e6f38;
    }
    cVar3 = FUN_0044b280(param_2);
    fVar1 = _DAT_007e3374;
    if ((cVar3 == '\0') && (*(char *)(param_2 + 0xe8d6 + param_1) == '\0')) {
      iVar4 = FUN_0044dc80(6);
      fVar1 = (float)iVar4 * _DAT_007e6f50;
    }
    fVar1 = fVar1 + fVar2;
    if (param_4 != '\0') {
      fVar1 = fVar1 + *(float *)(param_1 + 0x13c6c);
      goto LAB_004a6202;
    }
    if (param_3 != '\0') {
      fVar1 = fVar1 + *(float *)(param_1 + 81000);
      goto LAB_004a6202;
    }
  }
  fVar1 = fVar1 + *(float *)(param_1 + 0x13c70);
LAB_004a6202:
  fVar1 = _DAT_00dc17c4 + fVar1;
  if (fVar1 <= _DAT_007e3380) {
    return 0;
  }
  if (fVar1 <= _DAT_007e4090) {
    return (int)ROUND(fVar1);
  }
  return 10;
}


