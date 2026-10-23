// FUN_00677510 @ 677510 size=1485

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00677510(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  float10 fVar19;
  int local_30;
  float *local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  iVar15 = *(int *)(param_1 + 10);
  iVar10 = *(int *)(iVar15 + 0x120);
  local_10 = _DAT_007e3380;
  local_18 = _DAT_007e3380;
  if (0 < DAT_0087769c) {
    pfVar16 = (float *)(iVar10 + 0x5b0);
    piVar11 = &DAT_00dbd1a2;
    iVar14 = DAT_0087769c;
    do {
      iVar17 = *piVar11;
      if (iVar17 < 0xc) {
        local_10 = local_10 + *pfVar16;
      }
      else if ((iVar17 < 0x15) || (iVar17 == 0x8c)) {
        local_18 = local_18 + *pfVar16;
      }
      piVar11 = piVar11 + 1;
      pfVar16 = pfVar16 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  local_10 = local_10 * _DAT_007e543c;
  bVar3 = 0 < *(int *)(iVar15 + 0x117e8);
  local_18 = local_18 * _DAT_007e543c;
  bVar4 = 0 < *(int *)(iVar15 + 0x117ec);
  local_14 = (_DAT_007e3374 - local_18) - local_10;
  if (!bVar3) {
    if (bVar4) {
      local_18 = local_14 * _DAT_007e6800 + local_18;
      local_14 = local_14 * _DAT_007e4094;
    }
    local_10 = local_14 + local_10;
    local_14 = 1e-06;
  }
  if (!bVar4) {
    if (bVar3) {
      local_14 = local_18 * _DAT_007e6800 + local_14;
      local_18 = local_18 * _DAT_007e4094;
    }
    local_10 = local_18 + local_10;
    local_18 = 1e-06;
  }
  iVar15 = 0;
  iVar14 = 0;
  local_20 = 0.0;
  local_30 = 0;
  if (0 < DAT_0087769c) {
    piVar13 = &DAT_00dbd1a2;
    piVar11 = (int *)(param_1 + 0x48);
    iVar17 = DAT_0087769c;
    do {
      iVar2 = *piVar13;
      if (iVar2 < 0xc) {
        iVar15 = iVar15 + *piVar11;
      }
      else if ((iVar2 < 0x15) || (iVar2 == 0x8c)) {
        iVar14 = iVar14 + *piVar11;
      }
      piVar13 = piVar13 + 1;
      piVar11 = piVar11 + 1;
      iVar17 = iVar17 + -1;
      local_30 = iVar14;
      local_20 = (float)iVar15;
    } while (iVar17 != 0);
  }
  local_28 = *(float **)(param_1 + 0x44);
  iVar15 = (int)local_28 - local_30;
  if ((int)local_28 < 1) {
    local_28 = (float *)0x1;
  }
  fVar5 = (float)(int)local_28;
  local_1c = (float)(int)local_20 / fVar5;
  local_28 = (float *)((float)local_30 / fVar5);
  local_20 = (float)(iVar15 - (int)local_20) / fVar5;
  if (local_20 <= _DAT_007e68cc) {
    local_20 = 1e-06;
  }
  if ((float)local_28 <= _DAT_007e68cc) {
    local_28 = (float *)0x358637bd;
  }
  if (local_1c <= _DAT_007e68cc) {
    local_1c = 1e-06;
  }
  FUN_006a9d50();
  bVar7 = false;
  bVar8 = false;
  bVar9 = false;
  if (bVar4) {
    if (bVar3) {
      local_1c = local_1c / local_10;
      fVar5 = (float)local_28 / local_18;
      if ((fVar5 < local_1c) || (local_20 / local_14 < local_1c)) {
        if ((_DAT_007e408c < local_18) && ((fVar5 <= local_20 / local_14 && (fVar5 <= local_1c)))) {
          bVar8 = true;
          goto LAB_00677802;
        }
        if ((_DAT_007e408c < local_14) &&
           ((local_20 / local_14 <= fVar5 && (local_20 / local_14 <= local_1c)))) {
          bVar9 = true;
          goto LAB_00677802;
        }
      }
    }
    else if ((_DAT_007e408c < local_18) && ((float)local_28 / local_18 < local_1c / local_10)) {
      bVar8 = true;
      goto LAB_00677802;
    }
  }
  else if (((bVar3) && (_DAT_007e408c < local_14)) && (local_20 / local_14 < local_1c / local_10)) {
    bVar9 = true;
    goto LAB_00677802;
  }
  bVar7 = true;
LAB_00677802:
  fVar19 = (float10)FUN_00468560();
  if ((float10)_DAT_007e34e0 < fVar19) {
    bVar7 = true;
    bVar9 = false;
    bVar8 = false;
  }
  if ((*(char *)(iVar10 + 0x36a) != '\0') && (iVar15 = 0, 0 < DAT_0087769c)) {
    puVar12 = (undefined4 *)(param_1 + 0x278);
    do {
      *puVar12 = 0;
      iVar15 = iVar15 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar15 < DAT_0087769c);
  }
  cVar1 = *(char *)(DAT_00dbd62e + 0x4ad0 + *(int *)(param_1 + 10));
  local_30 = 0;
  iVar15 = DAT_0087769c;
  if (0 < DAT_0087769c) {
    local_28 = (float *)(iVar10 + 0x5b0);
    do {
      iVar14 = local_30;
      do {
        if (((*(char *)(*(int *)(param_1 + 10) + 0x4ad0 + iVar14) != '\0') &&
            (((iVar17 = (&DAT_00dbd1a2)[iVar14], iVar17 < 0x15 || (iVar17 == 0x8c)) || (bVar3)))) &&
           ((iVar17 < 0xc || (((0x14 < iVar17 && (iVar17 != 0x8c)) || (bVar4)))))) {
          if (iVar14 != 0x8c) {
            if (*(char *)(iVar10 + 0x36a) == '\0') {
              fVar5 = (float)(int)ROUND(*local_28) + *(float *)(param_1 + 0x278 + iVar14 * 4);
            }
            else {
              fVar5 = *local_28 * (float)_DAT_007e46d8 * (float)*(int *)(param_1 + 0x44) +
                      *(float *)(param_1 + 0x278 + iVar14 * 4);
            }
            *(float *)(param_1 + 0x278 + iVar14 * 4) = fVar5;
            iVar15 = DAT_0087769c;
          }
          break;
        }
        iVar17 = DAT_00dbd62e;
        if (iVar14 < iVar15) {
          iVar17 = (&DAT_00dbd3d2)[iVar14];
        }
        iVar14 = iVar17;
      } while ((cVar1 != '\0') || (iVar17 != DAT_00dbd62e));
      local_30 = local_30 + 1;
      local_28 = local_28 + 1;
    } while (local_30 < iVar15);
  }
  iVar17 = 0;
  iVar14 = 0x8c;
  if (0 < iVar15) {
    pfVar16 = (float *)(param_1 + 0x278);
    piVar11 = &DAT_00dbd1a2;
    pfVar18 = (float *)(iVar10 + 0x5b0);
    fVar5 = _DAT_007e3d28;
    do {
      if (((((bVar7) && (*piVar11 < 0xc)) ||
           (((bVar8 && (iVar15 = *piVar11, 0xb < iVar15)) && ((iVar15 < 0x15 || (iVar15 == 0x8c)))))
           ) || ((bVar9 && ((0x14 < *piVar11 && (*piVar11 != 0x8c)))))) &&
         ((_DAT_007e46cc <= *pfVar18 &&
          ((fVar6 = (float)(int)pfVar16[-0x8c], fVar6 <= *pfVar16 &&
           (*(char *)(iVar17 + 0x4ad0 + *(int *)(param_1 + 10)) != '\0')))))) {
        if (*(char *)(iVar10 + 0x36a) == '\0') {
          if (fVar6 < _DAT_007e3374) {
            fVar6 = _DAT_007e3374;
          }
          if (fVar5 <= *pfVar16 / fVar6) {
            iVar14 = iVar17;
            fVar5 = *pfVar16 / fVar6;
          }
        }
        else if (fVar5 <= *pfVar16 - fVar6) {
          iVar14 = iVar17;
          fVar5 = *pfVar16 - fVar6;
        }
      }
      iVar17 = iVar17 + 1;
      piVar11 = piVar11 + 1;
      pfVar18 = pfVar18 + 1;
      pfVar16 = pfVar16 + 1;
    } while (iVar17 < DAT_0087769c);
    iVar15 = DAT_0087769c;
    if (iVar14 != 0x8c) {
      return iVar14;
    }
  }
  if (*(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x9ce) != _DAT_007e3374) {
    if (*(char *)(iVar10 + 0x36a) == '\0') {
      iVar10 = 0;
      if (0 < iVar15) {
        puVar12 = (undefined4 *)(param_1 + 0x4a8);
        do {
          *puVar12 = 0;
          iVar10 = iVar10 + 1;
          puVar12 = puVar12 + 1;
        } while (iVar10 < DAT_0087769c);
        return iVar14;
      }
    }
    else if ((*(char *)(*(int *)(param_1 + 10) + 0x4ad0) != '\0') &&
            (_DAT_007e3380 < *(float *)(iVar10 + 0x5b0))) {
      return 0;
    }
  }
  return iVar14;
}


