// FUN_004e6dd0 @ 4e6dd0 size=539

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_004e6dd0(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  piVar7 = param_2;
  iVar6 = 0;
  if (((char)param_2[0x58] != '\0') || (*(char *)((int)param_2 + 0x161) != '\0')) {
    iVar6 = __ftol();
  }
  iVar9 = DAT_00877240;
  if (0 < iVar6) {
    param_2[0x21] = param_2[0x21] + 1;
    iVar9 = DAT_0087723c;
  }
  iVar6 = _rand();
  if (iVar6 % 100 < iVar9) {
    return (int *)(iVar6 / 100);
  }
  iVar6 = _rand();
  fVar3 = (float)(iVar6 % DAT_0087729c) + _DAT_00877298;
  iVar6 = _rand();
  fVar4 = (float)(iVar6 % DAT_008772a4) + _DAT_008772a0;
  if (*(char *)((int)param_2 + 0x161) == '\0') {
    fVar3 = _DAT_00dc16d8 * fVar3;
LAB_004e6f03:
    if (param_3 != '\0') {
      param_2 = (int *)0x0;
      fVar4 = (float)param_2;
      goto LAB_004e6f67;
    }
  }
  else {
    fVar3 = _DAT_008772a8 * fVar3;
    if (param_3 != '\0') {
      cVar5 = (**(code **)(*param_2 + 0x14))();
      if (((cVar5 != '\0') &&
          (fVar2 = (float)param_2[0x3d] - (float)param_2[0x20], fVar2 - fVar3 < _DAT_00dc174c)) &&
         (fVar3 = _DAT_007e3380, _DAT_00dc174c < fVar2)) {
        fVar3 = fVar2 - _DAT_00dc174c;
      }
      goto LAB_004e6f03;
    }
  }
  fVar2 = ((float)param_2[0x3b] - (float)param_2[0x1f]) - (float)param_2[0x1f];
  if ((_DAT_007e3380 < fVar2) && (fVar4 = _DAT_00dc16dc * fVar4, fVar2 - fVar4 < _DAT_007e34e0)) {
    fVar3 = (float)param_2[0x3d] - (float)param_2[0x20];
    fVar4 = fVar2;
  }
LAB_004e6f67:
  param_2 = (int *)fVar4;
  piVar7[0x1f] = (int)((float)param_2 + (float)piVar7[0x1f]);
  piVar7[0x20] = (int)(fVar3 + (float)piVar7[0x20]);
  piVar8 = (int *)(uint)DAT_00dc191a;
  if ((DAT_00dc191a != 0) && (piVar8 = (int *)0x0, _DAT_007e3380 < (float)param_2)) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x3d8) + 6);
    piVar7 = (int *)piVar7[0xb];
    while (piVar7 != (int *)0x0) {
      piVar8 = (int *)piVar7[2];
      piVar1 = (int *)*piVar7;
      piVar7 = piVar8;
      if (*piVar1 == iVar6) {
        piVar1[1] = (int)((float)param_2 + (float)piVar1[1]);
        return piVar8;
      }
    }
    piVar7 = operator_new(8);
    *piVar7 = iVar6;
    piVar7[1] = (int)param_2;
    piVar8 = (int *)FUN_004eea30(piVar7);
  }
  return piVar8;
}


