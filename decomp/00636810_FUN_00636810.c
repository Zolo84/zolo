// FUN_00636810 @ 636810 size=1298

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_00636810(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float local_1c;
  
  DAT_00d01aac = 0;
  fVar2 = *(float *)(*(int *)(param_1 + 0xca + param_2 * 4) + 0xa0) * _DAT_007e68d0;
  switch(param_2) {
  case 0:
    iVar12 = *(int *)(param_1 + 0x90);
    fVar2 = *(float *)(iVar12 + 0x3950);
    if (DAT_00dc18c1 != '\0') {
      fVar1 = *(float *)(iVar12 + 0x3a88);
      fVar3 = *(float *)(iVar12 + 0x3a70);
      fVar4 = *(float *)(iVar12 + 0x3ab8);
      fVar17 = (float10)FUN_0049dd20();
      fVar15 = (float10)FUN_0049c570();
      iVar12 = *(int *)(param_1 + 0x90);
      fVar5 = *(float *)(iVar12 + 0x3ab8);
      fVar6 = *(float *)(iVar12 + 0x3a88);
      fVar7 = *(float *)(iVar12 + 0x3950);
      fVar8 = *(float *)(iVar12 + 0x3a70);
      fVar16 = (float10)FUN_0049dd70();
      fVar16 = (float10)FUN_0049c570((double)(fVar6 - fVar8),(double)fVar5,(double)fVar16);
      dVar22 = (double)-fVar16;
      dVar23 = (double)-fVar7;
      fVar16 = (float10)FUN_0049dd20();
      dVar19 = (double)fVar16;
      dVar18 = (double)(float)(((((float10)(float)(fVar17 - (float10)fVar2) - fVar15) +
                                (float10)fVar1) - (float10)fVar3) + (float10)fVar4);
      uVar13 = FUN_0042b6c9(s_DEL_SLIDER_CONSUMER3_00861010);
      FUN_007a630a(&DAT_00d01aac,uVar13,dVar18,dVar19,dVar23,dVar22);
      return &DAT_00d01aac;
    }
    fVar1 = *(float *)(iVar12 + 0x3a88);
    fVar3 = *(float *)(iVar12 + 0x3a70);
    fVar17 = (float10)FUN_0049dd20();
    fVar15 = (float10)FUN_0049c570();
    iVar12 = *(int *)(param_1 + 0x90);
    fVar4 = *(float *)(iVar12 + 0x3a88);
    fVar5 = *(float *)(iVar12 + 0x3a70);
    fVar6 = *(float *)(iVar12 + 0x3950);
    fVar16 = (float10)FUN_0049dd70();
    dVar22 = (double)fVar16;
    dVar23 = (double)(fVar4 - fVar5);
    fVar16 = (float10)FUN_0049c570(dVar23,dVar22);
    dVar19 = (double)-fVar16;
    dVar18 = (double)-fVar6;
    fVar16 = (float10)FUN_0049dd20();
    dVar21 = (double)fVar16;
    dVar20 = (double)(float)((((float10)(float)(fVar17 - (float10)fVar2) - fVar15) + (float10)fVar1)
                            - (float10)fVar3);
    goto LAB_00636beb;
  case 1:
    iVar12 = FUN_0044ab40();
    local_1c = 0.0;
    piVar14 = *(int **)(DAT_00d0ca90 + 0x3b7e);
    fVar1 = _DAT_007e3374;
    if (*(int **)(DAT_00d0ca90 + 0x3b7e) != (int *)0x0) {
      do {
        piVar9 = (int *)piVar14[2];
        iVar10 = *piVar14;
        cVar11 = FUN_004f2390();
        if ((cVar11 == '\0') && (*(char *)(iVar10 + 0x3c) == '\0')) {
          local_1c = *(float *)(iVar10 + 0x28) + local_1c;
        }
        piVar14 = piVar9;
      } while (piVar9 != (int *)0x0);
      fVar1 = _DAT_007e3374;
      if (_DAT_007e3380 < local_1c) {
        fVar1 = ((float)iVar12 * fVar2) / local_1c;
      }
    }
    dVar22 = (double)(fVar1 * _DAT_007e4088);
    uVar13 = FUN_0042b6c9();
    FUN_007a630a(&DAT_00d01aac,uVar13,dVar22);
    return &DAT_00d01aac;
  case 2:
    if (DAT_00dc18c0 == '\0') {
      dVar22 = (double)*(float *)(DAT_00d0ca90 + 0x3a74);
      dVar23 = (double)*(float *)(DAT_00d0ca90 + 0x3a8c);
      dVar19 = (double)(*(float *)(*(int *)(param_1 + 0x90) + 0x39f0) -
                       *(float *)(DAT_00d0ca90 + 0x3a74));
      fVar17 = (float10)FUN_0049b210(fVar2,0);
      dVar18 = (double)fVar17;
      uVar13 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00d01aac,uVar13,dVar18,dVar19,dVar23,dVar22);
      return &DAT_00d01aac;
    }
    if (DAT_00dc1540 == '\0') {
      fVar1 = *(float *)(*(int *)(param_1 + 0x90) + 0x39f0) - *(float *)(DAT_00d0ca90 + 0x3a74);
    }
    else {
      fVar1 = *(float *)(*(int *)(param_1 + 0x90) + 0x3998);
    }
    dVar22 = (double)*(float *)(DAT_00d0ca90 + 0x3b64);
    dVar23 = (double)*(float *)(DAT_00d0ca90 + 0x3abc);
    dVar19 = (double)*(float *)(DAT_00d0ca90 + 0x3a74);
    dVar18 = (double)*(float *)(DAT_00d0ca90 + 0x3a8c);
    dVar21 = (double)fVar1;
    fVar17 = (float10)FUN_0049b210(fVar2,0);
    dVar20 = (double)fVar17;
LAB_00636beb:
    uVar13 = FUN_0042b6c9();
    FUN_007a630a(&DAT_00d01aac,uVar13,dVar20,dVar21,dVar18,dVar19,dVar23,dVar22);
    return &DAT_00d01aac;
  case 3:
    iVar12 = FUN_0044ab40();
    fVar1 = *(float *)(*(int *)(param_1 + 0x90) + 0x39f4);
    fVar3 = _DAT_007e3374;
    if (_DAT_007e3380 < fVar1) {
      fVar3 = ((float)iVar12 * fVar2) / fVar1;
    }
    dVar22 = (double)*(float *)(*(int *)(param_1 + 0x90) + 0x39f8);
    fVar3 = fVar3 * _DAT_007e4088;
    break;
  case 4:
    iVar12 = FUN_0044ab40();
    fVar1 = *(float *)(*(int *)(param_1 + 0x90) + 0x3a00);
    fVar3 = _DAT_007e3374;
    if (_DAT_007e3380 < fVar1) {
      fVar3 = ((float)iVar12 * fVar2) / fVar1;
    }
    dVar22 = *(double *)(*(int *)(param_1 + 0x90) + 0x3a04);
    fVar3 = fVar3 * _DAT_007e4088;
    break;
  default:
    goto switchD_00636847_default;
  }
  dVar23 = (double)fVar3;
  uVar13 = FUN_0042b6c9();
  FUN_007a630a(&DAT_00d01aac,uVar13,dVar23,dVar22);
switchD_00636847_default:
  return &DAT_00d01aac;
}


