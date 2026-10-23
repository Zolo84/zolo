// FUN_0040b940 @ 40b940 size=1114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0040b940(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,int param_6)

{
  int *piVar1;
  bool bVar2;
  float10 fVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  unkbyte10 extraout_ST0;
  float10 extraout_ST0_00;
  unkbyte10 extraout_ST0_01;
  float10 extraout_ST0_02;
  unkbyte10 extraout_ST0_03;
  float10 fVar12;
  
  if (param_2 - param_4 < 0x3a99) {
    if (param_2 - param_4 < -15000) {
      param_4 = param_4 + -0x7500;
    }
  }
  else {
    param_4 = param_4 + 0x7500;
  }
  *(int *)(param_1 + 0x9e) = param_2;
  *(undefined4 *)(param_1 + 0xa2) = param_3;
  piVar1 = (int *)(param_1 + 0xa6);
  *piVar1 = param_4;
  *(undefined4 *)(param_1 + 0xaa) = param_5;
  iVar9 = *(int *)(param_1 + 0xaa);
  iVar8 = *piVar1;
  *(int *)(param_1 + 0xec) = param_6;
  fVar12 = (float10)fpatan((float10)(iVar9 - *(int *)(param_1 + 0xa2)),
                           (float10)(iVar8 - *(int *)(param_1 + 0x9e)));
  *(double *)(param_1 + 0xd2) = (double)fVar12;
  if (param_6 == 0) {
    fVar10 = fVar12 - (float10)_DAT_007e3438;
    if (fVar10 < (float10)_DAT_007e33f8) {
      fVar10 = fVar10 + (float10)_DAT_007e33f0;
      goto LAB_0040ba32;
    }
    if (fVar10 <= (float10)_DAT_007e33e8) goto LAB_0040ba32;
  }
  else {
    fVar10 = fVar12 - (float10)*(double *)(param_6 + 0xd2);
    if (fVar10 < (float10)_DAT_007e33f8) {
      fVar10 = fVar10 + (float10)_DAT_007e33f0;
      goto LAB_0040ba32;
    }
    if (fVar10 <= (float10)_DAT_007e33e8) goto LAB_0040ba32;
  }
  fVar10 = fVar10 - (float10)_DAT_007e33f0;
LAB_0040ba32:
  fVar3 = (float10)_DAT_007e3348;
  fcos(fVar12);
  *(bool *)(param_1 + 0xea) = fVar3 <= fVar10;
  iVar5 = __ftol();
  fsin((float10)*(double *)(param_1 + 0xd2));
  iVar5 = *(int *)(param_1 + 0x9e) + iVar5;
  *(int *)(param_1 + 0x9e) = iVar5;
  iVar6 = __ftol();
  iVar6 = *(int *)(param_1 + 0xa2) + iVar6;
  iVar8 = iVar8 - iVar5;
  iVar9 = iVar9 - iVar6;
  *(int *)(param_1 + 0xa2) = iVar6;
  fVar12 = (float10)fpatan((float10)iVar9,(float10)iVar8);
  *(double *)(param_1 + 0xd2) = (double)fVar12;
  if (iVar8 == 0) {
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    fVar11 = (float10)iVar9;
  }
  else if (iVar9 == 0) {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    fVar11 = (float10)iVar8;
  }
  else {
    fVar11 = (float10)fsin(fVar12);
    fVar11 = (float10)iVar9 / fVar11;
  }
  *(double *)(param_1 + 0xe2) = (double)fVar11;
  dVar4 = *(double *)(param_1 + 0xe2) * _DAT_007e3428;
  bVar2 = _DAT_007e3420 <= dVar4;
  *(double *)(param_1 + 0xda) = dVar4;
  if (bVar2) {
    if (_DAT_007e3418 < dVar4) {
      *(undefined4 *)(param_1 + 0xda) = 0;
      *(undefined4 *)(param_1 + 0xde) = 0x40440000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xda) = 0;
    *(undefined4 *)(param_1 + 0xde) = 0x40380000;
  }
  *(undefined4 *)(param_1 + 0xc6) = *(undefined4 *)(param_1 + 0x9e);
  *(undefined4 *)(param_1 + 0xca) = *(undefined4 *)(param_1 + 0xa2);
  *(undefined4 *)(param_1 + 0xbe) = *(undefined4 *)(param_1 + 0x9e);
  *(undefined4 *)(param_1 + 0xc2) = *(undefined4 *)(param_1 + 0xa2);
  if (fVar3 <= fVar10) {
    fcos(fVar12 + (float10)_DAT_007e3410);
    iVar9 = __ftol();
    fsin(extraout_ST0);
    *(int *)(param_1 + 0xbe) = *(int *)(param_1 + 0xbe) + iVar9;
    iVar9 = __ftol();
    fVar12 = (float10)_DAT_007e3408;
    *(int *)(param_1 + 0xc2) = *(int *)(param_1 + 0xc2) + iVar9;
    fVar12 = (extraout_ST0_00 - fVar12) - (float10)_DAT_007e3400;
  }
  else {
    fcos((fVar12 + (float10)_DAT_007e3408) - (float10)_DAT_007e3400);
    iVar9 = __ftol();
    fsin(extraout_ST0_01);
    *(int *)(param_1 + 0xbe) = *(int *)(param_1 + 0xbe) + iVar9;
    iVar9 = __ftol();
    fVar12 = (float10)_DAT_007e3408;
    *(int *)(param_1 + 0xc2) = *(int *)(param_1 + 0xc2) + iVar9;
    fVar12 = (extraout_ST0_02 - fVar12) + (float10)_DAT_007e3400;
  }
  fcos(fVar12);
  iVar9 = __ftol();
  fsin(extraout_ST0_03);
  *(int *)(param_1 + 0xc6) = *(int *)(param_1 + 0xc6) + iVar9;
  iVar9 = __ftol();
  *(int *)(param_1 + 0xca) = *(int *)(param_1 + 0xca) + iVar9;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  pvVar7 = operator_new(0x58);
  *(void **)(param_1 + 0xce) = pvVar7;
  if (*(char *)(param_1 + 0xea) != '\0') {
    FUN_00403080(param_1 + 0x9e,piVar1,0x40000000,0x3ff0c152);
    return;
  }
  FUN_00403080(piVar1,param_1 + 0x9e,0x40000000,0x3ff0c152);
  return;
}


