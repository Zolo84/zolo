// FUN_00501fe0 @ 501fe0 size=1158

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00501fe0(int *param_1,undefined4 param_2,float param_3,int *param_4,char param_5,int param_6)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float10 fVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int *piVar11;
  float10 extraout_ST0;
  undefined2 uVar12;
  undefined2 uVar13;
  
  piVar11 = param_4;
  if (((((param_5 == '\0') || (*(char *)(param_6 + 0x9b) == '\0')) && ((char)param_4[0x58] == '\0'))
      && ((*(char *)((int)param_4 + 0x15f) == '\0' && (*(char *)((int)param_4 + 0x15e) == '\0'))))
     && ((param_5 == '\0' && ((*(int *)(param_6 + 0x74) == 7 || (*(int *)(param_6 + 0x74) == 8))))))
  {
    (**(code **)(*param_4 + 0x14))();
  }
  iVar7 = __ftol();
  fVar4 = (float10)_DAT_007e4088;
  iVar8 = _rand();
  if (iVar8 % 100 < (int)ROUND((float)((extraout_ST0 - (float10)iVar7) * fVar4))) {
    iVar7 = iVar7 + 1;
  }
  fVar2 = (float)param_4[0x1f];
  iVar8 = DAT_00877280;
  iVar5 = DAT_00877288;
  while ((DAT_00877280 = iVar8, DAT_00877288 = iVar5, 0 < iVar7 &&
         ((_DAT_007e3380 < (float)piVar11[0x3b] - (float)piVar11[0x1f] ||
          (_DAT_007e3380 < (float)piVar11[0x3d] - (float)piVar11[0x20]))))) {
    if ((char)piVar11[0x58] == '\0') {
      if (*(char *)((int)piVar11 + 0x15f) == '\0') {
        cVar6 = (**(code **)(*param_1 + 0x14))();
        if (cVar6 == '\0') {
          fVar1 = (float)piVar11[0xb8];
        }
        else {
          fVar1 = (float)piVar11[0x45];
        }
      }
      else {
        fVar1 = (float)piVar11[0xb3];
      }
    }
    else {
      cVar6 = (**(code **)(*param_1 + 0x14))();
      if (cVar6 == '\0') {
        fVar1 = (float)piVar11[0xb6];
      }
      else {
        fVar1 = (float)piVar11[0x45];
      }
    }
    cVar6 = FUN_004fcbb0(SUB42(fVar1 * param_3,0));
    if (cVar6 != '\0') {
      iVar9 = _rand();
      param_2 = (float)(iVar9 % iVar8) + _DAT_0087727c;
      iVar8 = _rand();
      param_4 = (int *)((float)(iVar8 % iVar5) + _DAT_00877284);
      if (*(char *)((int)piVar11 + 0x15e) != '\0') {
        param_2 = _DAT_00dc16cc * param_2;
        param_4 = (int *)(_DAT_00dc16d0 * (float)param_4);
      }
      if ((*(char *)((int)piVar11 + 0x161) != '\0') &&
         (iVar8 = _rand(), (float)(iVar8 % 100) < _DAT_0087741c)) {
        param_4 = (int *)(_DAT_00877420 * (float)param_4);
      }
      if (param_6 != 0) {
        if (((*(int *)(param_6 + 0x74) == 7) || (*(int *)(param_6 + 0x74) == 8)) &&
           (param_5 == '\0')) {
          param_4 = (int *)0x0;
        }
        cVar6 = (**(code **)(*param_1 + 0x14))();
        if (((cVar6 != '\0') && ((*(int *)(param_6 + 0x74) == 7 || (*(int *)(param_6 + 0x74) == 8)))
            ) && (param_5 != '\0')) {
          param_4 = (int *)(_DAT_00877410 * (float)param_4);
        }
      }
      fVar1 = (float)piVar11[0x3b] - (float)piVar11[0x1f];
      if ((char)piVar11[0x58] == '\0') {
        if (_DAT_007e3380 < fVar1) {
          param_4 = (int *)(_DAT_00dc16c8 * (float)param_4);
          param_2 = _DAT_00dc16c4 * param_2;
          if (fVar1 - (float)param_4 < _DAT_007e34e0) {
            param_2 = (float)piVar11[0x3d] - (float)piVar11[0x20];
            param_4 = (int *)fVar1;
          }
          if (((param_5 == '\0') &&
              ((*(int *)(param_6 + 0x74) == 7 || (*(int *)(param_6 + 0x74) == 8)))) &&
             (cVar6 = (**(code **)(*piVar11 + 0x14))(), cVar6 != '\0')) {
            fVar1 = (float)piVar11[0x3d] - (float)piVar11[0x20];
            if (fVar1 - param_2 < _DAT_00dc174c) {
              if (fVar1 <= _DAT_00dc174c) {
                param_2 = 0.0;
              }
              else {
                param_2 = fVar1 - _DAT_00dc174c;
              }
            }
            param_4 = (int *)0x0;
          }
          goto LAB_00502364;
        }
      }
      else if (_DAT_007e3380 < fVar1) {
        param_4 = (int *)(_DAT_00dc16c0 * (float)param_4);
        param_2 = _DAT_00dc16bc * param_2;
        if (fVar1 - (float)param_4 < _DAT_007e34e0) {
          param_2 = (float)piVar11[0x3d] - (float)piVar11[0x20];
          param_4 = (int *)fVar1;
        }
LAB_00502364:
        piVar11[0x1f] = (int)((float)param_4 + (float)piVar11[0x1f]);
        piVar11[0x20] = (int)(param_2 + (float)piVar11[0x20]);
      }
      puVar10 = (undefined2 *)FUN_00447250();
      uVar12 = *puVar10;
      uVar13 = (undefined2)((uint)*(undefined4 *)(puVar10 + 1) >> 0x10);
      FUN_004b7e10(uVar12,uVar13);
      FUN_0049a190(uVar12,uVar13);
    }
    iVar7 = iVar7 + -1;
    iVar8 = DAT_00877280;
    iVar5 = DAT_00877288;
  }
  if (DAT_00dc191a == '\0') {
    return;
  }
  fVar2 = (float)piVar11[0x1f] - fVar2;
  if (fVar2 <= _DAT_007e3380) {
    return;
  }
  if ((param_1[0x1b] == 0) || (iVar7 = FUN_00522770(), iVar7 == 0)) {
    if (param_1[0x16] == 0) {
      iVar7 = param_1[0x17];
    }
    else {
      iVar7 = (&DAT_0089cad8)[param_1[0x16]];
    }
    if (iVar7 != 0) goto LAB_0050240e;
  }
  else {
    iVar7 = FUN_00522770();
LAB_0050240e:
    if (iVar7 != 0) goto LAB_00502417;
  }
  iVar7 = DAT_00d0ca90;
LAB_00502417:
  iVar7 = *(int *)(iVar7 + 6);
  piVar11 = (int *)piVar11[0xb];
  do {
    if (piVar11 == (int *)0x0) {
      piVar11 = operator_new(8);
      piVar11[1] = (int)fVar2;
      *piVar11 = iVar7;
      FUN_004eea30((short)piVar11);
      return;
    }
    piVar3 = (int *)*piVar11;
    piVar11 = (int *)piVar11[2];
  } while (*piVar3 != iVar7);
  piVar3[1] = (int)(fVar2 + (float)piVar3[1]);
  return;
}


