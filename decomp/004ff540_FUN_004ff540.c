// FUN_004ff540 @ 4ff540 size=1480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004ff540(int *param_1,undefined4 param_2,float param_3,int param_4,char param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  float10 extraout_ST0;
  float10 fVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  float local_18;
  float local_c;
  float local_8;
  
  iVar7 = __ftol();
  fVar14 = (float10)_DAT_007e4088;
  iVar8 = _rand();
  if (iVar8 % 100 < (int)ROUND((float)((extraout_ST0 - (float10)iVar7) * fVar14))) {
    iVar7 = iVar7 + 1;
  }
  fVar2 = *(float *)(param_4 + 0x7c);
  iVar8 = *(int *)(*(int *)(param_4 + 0x5c) + 6);
  while ((0 < iVar7 &&
         ((_DAT_007e3380 < *(float *)(param_4 + 0xec) - *(float *)(param_4 + 0x7c) ||
          (_DAT_007e3380 < *(float *)(param_4 + 0xf4) - *(float *)(param_4 + 0x80)))))) {
    iVar12 = DAT_00877260;
    local_c = (float)DAT_00877254;
    if ((((char)param_1[0x58] == '\0') &&
        (((*(char *)((int)param_1 + 0x161) != '\0' || (*(char *)((int)param_1 + 0x15f) == '\0')) ||
         ((float)param_1[0xb5] < _DAT_007e681c)))) &&
       ((*(char *)(param_4 + 0x160) != '\0' ||
        (((*(char *)(param_4 + 0x161) == '\0' && (*(char *)(param_4 + 0x15f) != '\0')) &&
         (_DAT_007e681c <= *(float *)(param_4 + 0x2d4))))))) {
      iVar12 = DAT_00877264;
      local_c = (float)DAT_00877258;
    }
    if (*(char *)(param_4 + 0x160) == '\0') {
      if (param_5 == '\0') {
        fVar1 = *(float *)(param_4 + 0x2d0);
      }
      else {
        fVar1 = *(float *)(param_4 + 0x2cc);
      }
    }
    else {
      fVar1 = *(float *)(param_4 + 0x2d8);
    }
    if (DAT_00dc1749 == '\0') {
      uVar15 = SUB42(fVar1 * param_3,0);
    }
    else {
      uVar15 = SUB42(fVar1 / param_3,0);
    }
    cVar6 = FUN_004fcbb0(uVar15);
    if (cVar6 != '\0') {
      iVar9 = _rand();
      local_8 = (float)(iVar9 % (int)local_c) + _DAT_00877250;
      iVar9 = _rand();
      bVar13 = DAT_00dc1748 == '\0';
      local_c = (float)(iVar9 % iVar12) + _DAT_0087725c;
      if (*(int *)(param_6 + 0x5e) != 0) {
        uVar15 = (undefined2)CONCAT31((int3)((uint)iVar12 >> 8),param_5 == '\0');
        fVar14 = (float10)FUN_004c1890(uVar15);
        local_c = (float)(fVar14 * (float10)local_c);
        fVar14 = (float10)FUN_004c1980(uVar15);
        local_8 = (float)(fVar14 * (float10)local_8);
        if (DAT_00dc1748 == '\0') {
          bVar13 = **(int **)(param_6 + 0x5e) != 6;
        }
      }
      if (*(char *)(param_4 + 0x15f) != '\0') {
        if ((_DAT_007e3374 <= _DAT_00877290) ||
           (*(float *)(*(int *)(*(int *)(param_6 + 0x78) + 0x1d2) + 0x14) <= _DAT_00877294)) {
          if ((_DAT_0087728c < _DAT_007e3374) && (cVar6 = FUN_004e4830(), cVar6 != '\0'))
          goto LAB_004ff809;
        }
        else {
          fVar1 = _DAT_00877290;
          if (((_DAT_0087728c < _DAT_007e3374) &&
              (cVar6 = FUN_004e4830(), fVar1 = _DAT_00877290, cVar6 != '\0')) &&
             (_DAT_0087728c <= _DAT_00877290)) {
LAB_004ff809:
            fVar1 = _DAT_0087728c;
          }
          local_8 = fVar1 * local_8;
        }
      }
      fVar14 = (float10)(**(code **)(*param_1 + 0x18))();
      local_c = (float)(fVar14 * (float10)local_c);
      fVar14 = (float10)(**(code **)(*param_1 + 0x18))();
      local_8 = (float)(fVar14 * (float10)local_8);
      if ((*(int *)(param_4 + 0x134) == 10) && (bVar13)) {
        local_c = _DAT_007e3380;
      }
      fVar1 = *(float *)(param_4 + 0xec) - *(float *)(param_4 + 0x7c);
      if (*(char *)(param_4 + 0x160) == '\0') {
        if (_DAT_007e3380 < fVar1) {
          local_c = local_c * _DAT_00dc1694;
          local_8 = _DAT_00dc1690 * local_8;
          if ((fVar1 - local_c < DAT_00dc1698) && (iVar8 != 0x157)) {
            local_c = _DAT_007e3380;
            if (DAT_00dc1698 < fVar1) {
              local_c = fVar1 - DAT_00dc1698;
            }
            local_8 = *(float *)(param_4 + 0xf4) - *(float *)(param_4 + 0x80);
          }
          if (fVar1 - local_c < _DAT_007e34e0) goto LAB_004ff9f8;
          goto LAB_004ffa07;
        }
      }
      else if (_DAT_007e3380 < fVar1) {
        if (_DAT_00dc1684 <= _DAT_007e3380) {
          if (_DAT_00dc1684 == _DAT_007e3380) {
            local_c = local_c * _DAT_00dc168c;
          }
          else if (_DAT_00dc1684 == _DAT_007e3d28) {
            if ((float)param_1[0x3d] <= _DAT_007e3380) {
              local_8 = 0.0;
              local_c = _DAT_007e3380;
            }
            else {
              fVar3 = (float)param_1[0x3d];
              local_18 = (float)param_1[0x3e];
              if (param_1[0x17] != 0) {
                fVar4 = *(float *)(*(int *)(param_1[0x17] + 0x244) + 0x3e);
                fVar14 = (float10)FUN_0044c830((short)param_1,2);
                local_18 = (float)((float10)fVar4 * (float10)local_18 * fVar14);
              }
              local_c = ((fVar3 * _DAT_00dc168c) / local_18) * local_c;
            }
          }
        }
        else {
          local_c = (((float)param_1[0x3d] * _DAT_00dc168c) / _DAT_00dc1684) * local_c;
        }
        local_8 = _DAT_00dc1688 * local_8;
        if (fVar1 - local_c < _DAT_007e34e0) {
LAB_004ff9f8:
          local_8 = *(float *)(param_4 + 0xf4) - *(float *)(param_4 + 0x80);
          local_c = fVar1;
        }
LAB_004ffa07:
        *(float *)(param_4 + 0x7c) = local_c + *(float *)(param_4 + 0x7c);
        *(float *)(param_4 + 0x80) = local_8 + *(float *)(param_4 + 0x80);
      }
      puVar10 = (undefined2 *)FUN_00447250();
      uVar15 = *puVar10;
      uVar16 = (undefined2)((uint)*(undefined4 *)(puVar10 + 1) >> 0x10);
      FUN_004b7e10(uVar15,uVar16);
      FUN_0049a190(uVar15,uVar16);
    }
    iVar7 = iVar7 + -1;
  }
  if (DAT_00dc191a == '\0') {
    return;
  }
  fVar2 = *(float *)(param_4 + 0x7c) - fVar2;
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
    if (iVar7 != 0) goto LAB_004ffab0;
  }
  else {
    iVar7 = FUN_00522770();
LAB_004ffab0:
    if (iVar7 != 0) goto LAB_004ffab9;
  }
  iVar7 = DAT_00d0ca90;
LAB_004ffab9:
  iVar7 = *(int *)(iVar7 + 6);
  piVar11 = *(int **)(param_4 + 0x2c);
  do {
    if (piVar11 == (int *)0x0) {
      piVar11 = operator_new(8);
      piVar11[1] = (int)fVar2;
      *piVar11 = iVar7;
      FUN_004eea30((short)piVar11);
      return;
    }
    piVar5 = (int *)*piVar11;
    piVar11 = (int *)piVar11[2];
  } while (*piVar5 != iVar7);
  piVar5[1] = (int)(fVar2 + (float)piVar5[1]);
  return;
}


