// FUN_00500d70 @ 500d70 size=1438

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00500d70(int *param_1,undefined4 param_2,float param_3,int *param_4,char param_5,int param_6)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int *piVar11;
  float10 extraout_ST0;
  float10 fVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  float local_14;
  
  piVar11 = param_4;
  if ((char)param_4[0x58] == '\0') {
    if (*(char *)((int)param_4 + 0x15f) == '\0') {
      if (((*(char *)((int)param_4 + 0x161) != '\0') && (param_5 == '\0')) &&
         ((*(int *)(param_6 + 0x74) == 7 || (*(int *)(param_6 + 0x74) == 8)))) {
        (**(code **)(*param_4 + 0x14))();
      }
    }
    else {
      iVar6 = FUN_0051c480();
      if ((*(uint *)(iVar6 + 0x1e) >> 4 & 1) != 0) {
        iVar6 = param_4[0x1b];
        FUN_0051c480();
        FUN_0050a580();
        (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
      }
    }
  }
  iVar6 = __ftol();
  fVar12 = (float10)_DAT_007e4088;
  iVar7 = _rand();
  if (iVar7 % 100 < (int)ROUND((float)((extraout_ST0 - (float10)iVar6) * fVar12))) {
    iVar6 = iVar6 + 1;
  }
  fVar2 = (float)param_4[0x1f];
  while ((0 < iVar6 &&
         ((_DAT_007e3380 < (float)piVar11[0x3b] - (float)piVar11[0x1f] ||
          (_DAT_007e3380 < (float)piVar11[0x3d] - (float)piVar11[0x20]))))) {
    if (*(char *)((int)piVar11 + 0x15e) == '\0') {
LAB_00500f14:
      iVar8 = DAT_00877274;
      iVar7 = DAT_0087726c;
      cVar5 = FUN_004fcbb0(SUB42((float)piVar11[0x45] * param_3,0));
      if (cVar5 != '\0') {
        iVar9 = _rand();
        param_4 = (int *)((float)(iVar9 % iVar7) + _DAT_00877268);
        iVar7 = _rand();
        param_2 = (float)(iVar7 % iVar8) + _DAT_00877270;
        if (*(char *)((int)piVar11 + 0x161) == '\0') {
          if (*(char *)((int)piVar11 + 0x15f) != '\0') {
            if (*(int *)(param_1[0x1b] + 0x264) == 10) {
              param_4 = (int *)(_DAT_00dc1754 * (float)param_4);
              param_2 = _DAT_008774ac * param_2;
            }
            else {
              param_4 = (int *)(_DAT_008774b4 * (float)param_4);
              param_2 = _DAT_00dc175c * param_2;
            }
          }
        }
        else {
          iVar7 = _rand();
          if ((float)(iVar7 % 100) < _DAT_00877414) {
            param_2 = _DAT_00877418 * param_2;
          }
        }
        if (*(char *)((int)piVar11 + 0x15e) != '\0') {
          param_4 = (int *)(_DAT_00dc16b4 * (float)param_4);
          param_2 = _DAT_00dc16b8 * param_2;
        }
        fVar12 = (float10)(**(code **)(*param_1 + 0x18))();
        param_2 = (float)(fVar12 * (float10)param_2);
        fVar12 = (float10)(**(code **)(*param_1 + 0x18))();
        fVar1 = (float)(fVar12 * (float10)(float)param_4);
        if ((char)piVar11[0x58] == '\0') {
          if (*(char *)((int)piVar11 + 0x15f) == '\0') {
            fVar4 = (float)piVar11[0x3b] - (float)piVar11[0x1f];
            if (_DAT_007e3380 < fVar4) {
              param_2 = _DAT_00dc16b0 * param_2;
              param_4 = (int *)(_DAT_00dc16ac * fVar1);
              if (fVar4 - param_2 < _DAT_007e34e0) {
                param_4 = (int *)((float)piVar11[0x3d] - (float)piVar11[0x20]);
                param_2 = fVar4;
              }
              fVar4 = param_2;
              if ((param_5 == '\0') &&
                 (((*(int *)(param_6 + 0x74) == 7 || (*(int *)(param_6 + 0x74) == 8)) &&
                  (cVar5 = (**(code **)(*piVar11 + 0x14))(), cVar5 != '\0')))) {
                fVar1 = (float)piVar11[0x3d] - (float)piVar11[0x20];
                if (fVar1 - (float)param_4 < _DAT_00dc174c) {
                  if (fVar1 <= _DAT_00dc174c) {
                    param_4 = (int *)0x0;
                  }
                  else {
                    param_4 = (int *)(fVar1 - _DAT_00dc174c);
                  }
                }
                param_2 = 0.0;
                fVar4 = param_2;
              }
              goto LAB_0050120a;
            }
          }
          else {
            iVar7 = (**(code **)(*(int *)piVar11[0x1b] + 0x10))();
            fVar4 = *(float *)(iVar7 + 0x29e) / _DAT_00877278;
            if (_DAT_007e3374 <= fVar4) {
              param_2 = param_2 / fVar4;
            }
            local_14 = (float)piVar11[0x3b] - (float)piVar11[0x1f];
            if (_DAT_007e3380 < local_14) {
              fVar4 = _DAT_00dc16a8 * param_2;
              param_4 = (int *)(_DAT_00dc16a4 * fVar1);
              if (local_14 - fVar4 < _DAT_007e34e0) goto LAB_0050104e;
LAB_0050120a:
              piVar11[0x1f] = (int)(fVar4 + (float)piVar11[0x1f]);
              piVar11[0x20] = (int)((float)param_4 + (float)piVar11[0x20]);
            }
          }
        }
        else {
          local_14 = (float)piVar11[0x3b] - (float)piVar11[0x1f];
          if (_DAT_007e3380 < local_14) {
            param_4 = (int *)(_DAT_00dc169c * fVar1);
            fVar4 = _DAT_00dc16a0 * param_2;
            if (local_14 - _DAT_00dc16a0 * param_2 < _DAT_007e34e0) {
LAB_0050104e:
              param_4 = (int *)((float)piVar11[0x3d] - (float)piVar11[0x20]);
              fVar4 = local_14;
            }
            goto LAB_0050120a;
          }
        }
        puVar10 = (undefined2 *)FUN_00447250();
        uVar13 = *puVar10;
        uVar14 = (undefined2)((uint)*(undefined4 *)(puVar10 + 1) >> 0x10);
        FUN_004b7e10(uVar13,uVar14);
        FUN_0049a190(uVar13,uVar14);
      }
    }
    else {
      iVar7 = (int)ROUND((float)piVar11[0xb7] + (float)piVar11[0xb7]);
      if (iVar7 < 2) {
        iVar7 = 2;
      }
      iVar8 = _rand();
      if (iVar8 % 100 <= iVar7) goto LAB_00500f14;
    }
    iVar6 = iVar6 + -1;
  }
  if (DAT_00dc191a == '\0') {
    return;
  }
  fVar2 = (float)piVar11[0x1f] - fVar2;
  if (fVar2 <= _DAT_007e3380) {
    return;
  }
  if ((param_1[0x1b] == 0) || (iVar6 = FUN_00522770(), iVar6 == 0)) {
    if (param_1[0x16] == 0) {
      iVar6 = param_1[0x17];
    }
    else {
      iVar6 = (&DAT_0089cad8)[param_1[0x16]];
    }
    if (iVar6 != 0) goto LAB_005012b6;
  }
  else {
    iVar6 = FUN_00522770();
LAB_005012b6:
    if (iVar6 != 0) goto LAB_005012bf;
  }
  iVar6 = DAT_00d0ca90;
LAB_005012bf:
  iVar6 = *(int *)(iVar6 + 6);
  piVar11 = (int *)piVar11[0xb];
  do {
    if (piVar11 == (int *)0x0) {
      piVar11 = operator_new(8);
      piVar11[1] = (int)fVar2;
      *piVar11 = iVar6;
      FUN_004eea30((short)piVar11);
      return;
    }
    piVar3 = (int *)*piVar11;
    piVar11 = (int *)piVar11[2];
  } while (*piVar3 != iVar6);
  piVar3[1] = (int)(fVar2 + (float)piVar3[1]);
  return;
}


