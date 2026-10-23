// FUN_0060b150 @ 60b150 size=1367

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0060b150(float param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  char cVar9;
  int iVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 extraout_ST0;
  float10 fVar19;
  float10 extraout_ST0_00;
  float10 fVar20;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar21;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar6 = (int)param_1;
  fVar2 = *(float *)((int)param_1 + 0x3906);
  fVar3 = *(float *)((int)param_1 + 0x390a);
  local_c = *(float *)((int)param_1 + 0x390e);
  local_10 = *(float *)((int)param_1 + 0x3912);
  local_14 = *(float *)((int)param_1 + 0x3916);
  iVar10 = FUN_004a60a0(*(undefined4 *)((int)param_1 + 6),0,0);
  if (iVar10 < 10) {
    fVar16 = (float10)fVar3;
    fVar17 = (float10)local_14;
    fVar18 = (float10)local_10;
    iVar12 = 0;
    iVar14 = -iVar10 + 10;
    cVar9 = *(char *)(DAT_00893530 + 0x16);
    iVar13 = *(int *)(DAT_00d0ca90 + 6);
    piVar4 = *(int **)(DAT_00d0ca90 + 0x3654);
    do {
      piVar7 = piVar4;
      iVar15 = cVar9 + iVar13;
      while (piVar7 != (int *)0x0) {
        piVar1 = piVar7 + 2;
        iVar5 = *piVar7;
        piVar7 = (int *)*piVar1;
        if (*(int *)(iVar5 + 0x1c) != 0) {
          iVar15 = iVar15 + *(int *)(*(int *)(iVar5 + 0x1c) + 0xe);
        }
      }
      iVar5 = -iVar10 + 0xb;
      if (_DAT_007e681c <=
          (float)((*(int *)(((iVar12 + 10) % 0x1a) * 4 + 0x85ead0) * iVar15 + DAT_0085eb38) % 100))
      {
        iVar15 = __ftol();
        fVar19 = (float10)(iVar14 - iVar15 % iVar5) * (float10)_DAT_007e40b0 +
                 (float10)_DAT_007e3374;
        fVar21 = extraout_ST0_00;
        fVar8 = extraout_ST1_00;
        fVar20 = fVar16;
      }
      else {
        iVar15 = __ftol();
        fVar19 = (float10)_DAT_007e3374 -
                 (float10)(iVar14 - iVar15 % iVar5) * (float10)_DAT_007e40b0;
        fVar21 = extraout_ST0;
        fVar8 = extraout_ST1;
        fVar20 = fVar16;
      }
      fVar16 = fVar17;
      fVar17 = fVar18;
      fVar18 = fVar8;
      switch(iVar12) {
      case 0:
        fVar20 = fVar19 * fVar20;
        break;
      case 1:
        fVar16 = fVar19 * fVar16;
        break;
      case 2:
        fVar21 = fVar19 * fVar21;
        break;
      case 3:
        fVar18 = fVar19 * fVar18;
        break;
      case 4:
        fVar17 = fVar19 * fVar17;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 5);
    local_c = (float)fVar21;
    local_10 = (float)fVar18;
    local_14 = (float)fVar17;
    param_1 = (float)fVar20;
  }
  else {
    fVar20 = (float10)fVar2;
    fVar16 = (float10)fVar3;
    param_1 = fVar2;
  }
  if ((float10)_DAT_007e6868 <= fVar16) {
    piVar4 = *(int **)(iVar6 + 0x3b7e);
    param_1 = 0.0;
    local_18 = 0.0;
    local_20 = 0.0;
    local_14 = 0.0;
    local_1c = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      cVar9 = (**(code **)(*(int *)*piVar4 + 0x14))();
      if (cVar9 == '\0') {
        cVar9 = (**(code **)(*(int *)*piVar4 + 0x18))();
        piVar7 = (int *)*piVar4;
        if (cVar9 == '\0') {
          cVar9 = (**(code **)(*piVar7 + 0x10))();
          if (cVar9 == '\0') {
            cVar9 = (**(code **)(*(int *)*piVar4 + 0x1c))();
            if (cVar9 != '\0') {
              local_c = *(float *)(*piVar4 + 0x42) * *(float *)(*piVar4 + 0x28) + local_c;
            }
          }
          else {
            local_10 = *(float *)(*piVar4 + 0x42) * *(float *)(*piVar4 + 0x28) + local_10;
          }
        }
        else if (_DAT_007e3380 < *(float *)((int)piVar7 + 0x42)) {
          if (*(int *)((&DAT_00dbf99a)[*(int *)((int)piVar7 + 0x5a)] + 0x18) == 0) {
            param_1 = (float)piVar7[10] * *(float *)((int)piVar7 + 0x42) + param_1;
          }
          else {
            fVar2 = (float)piVar7[10] * *(float *)((int)piVar7 + 0x42);
            if (*(int *)((&DAT_00dbf99a)[*(int *)((int)piVar7 + 0x5a)] + 0x18) != 2)
            goto LAB_0060b425;
            local_1c = fVar2 + local_1c;
          }
        }
      }
      else {
        iVar6 = *piVar4;
        iVar13 = *(int *)(iVar6 + 0x5a);
        if (((iVar13 == 4) || (iVar13 == 5)) || (iVar13 == 3)) {
          local_18 = *(float *)(iVar6 + 0x42) * *(float *)(iVar6 + 0x28) + local_18;
        }
        else {
          cVar9 = FUN_004f3f80();
          if (cVar9 == '\0') {
            if ((iVar13 == 0xc) || (iVar13 == 0xd)) {
              fVar2 = *(float *)(iVar6 + 0x42) * *(float *)(iVar6 + 0x28);
LAB_0060b425:
              local_20 = fVar2 + local_20;
            }
            else {
              cVar9 = FUN_004f3f50();
              if (cVar9 == '\0') {
                cVar9 = FUN_004f3fa0();
                if (cVar9 != '\0') {
                  local_1c = *(float *)(iVar6 + 0x42) * *(float *)(iVar6 + 0x28) + local_1c;
                }
              }
              else {
                local_14 = *(float *)(iVar6 + 0x42) * *(float *)(iVar6 + 0x28) + local_14;
              }
            }
          }
          else {
            param_1 = *(float *)(iVar6 + 0x42) * *(float *)(iVar6 + 0x28) + param_1;
          }
        }
      }
    }
    if (iVar10 < 10) {
      iVar13 = -iVar10 + 10;
      iVar12 = 0;
      cVar9 = *(char *)(DAT_00893530 + 0x16);
      iVar6 = *(int *)(DAT_00d0ca90 + 6);
      piVar4 = *(int **)(DAT_00d0ca90 + 0x3654);
      do {
        piVar7 = piVar4;
        iVar14 = cVar9 + iVar6;
        while (piVar7 != (int *)0x0) {
          piVar1 = piVar7 + 2;
          iVar15 = *piVar7;
          piVar7 = (int *)*piVar1;
          if (*(int *)(iVar15 + 0x1c) != 0) {
            iVar14 = iVar14 + *(int *)(*(int *)(iVar15 + 0x1c) + 0xe);
          }
        }
        iVar15 = -iVar10 + 0xb;
        if (_DAT_007e681c <=
            (float)((*(int *)(((iVar12 + 10) % 0x1a) * 4 + 0x85ead0) * iVar14 + DAT_0085eb38) % 100)
           ) {
          iVar14 = __ftol();
          fVar2 = (float)(iVar13 - iVar14 % iVar15) * _DAT_007e40b0 + _DAT_007e3374;
        }
        else {
          iVar14 = __ftol();
          fVar2 = _DAT_007e3374 - (float)(iVar13 - iVar14 % iVar15) * _DAT_007e40b0;
        }
        switch(iVar12) {
        case 0:
          param_1 = fVar2 * param_1;
          break;
        case 1:
          local_18 = fVar2 * local_18;
          break;
        case 2:
          local_20 = fVar2 * local_20;
          break;
        case 3:
          local_14 = fVar2 * local_14;
          break;
        case 4:
          local_1c = fVar2 * local_1c;
          break;
        case 5:
          local_10 = fVar2 * local_10;
          break;
        case 6:
          local_c = fVar2 * local_c;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 7);
    }
    fVar2 = param_1;
    if (param_1 < local_18) {
      fVar2 = local_18;
    }
    uVar11 = param_1 < local_18;
    if (fVar2 < local_20) {
      uVar11 = 3;
      fVar2 = local_20;
    }
    if (fVar2 < local_14) {
      uVar11 = 2;
      fVar2 = local_14;
    }
    if (fVar2 < local_1c) {
      uVar11 = 4;
      fVar2 = local_1c;
    }
    if (fVar2 < local_10) {
      uVar11 = 5;
      fVar2 = local_10;
    }
    if (fVar2 < local_c) {
      uVar11 = 6;
    }
  }
  else {
    uVar11 = 10;
    if (param_1 < local_c) {
      fVar20 = (float10)local_c;
      uVar11 = 9;
    }
    if (fVar20 < (float10)local_10) {
      fVar20 = (float10)local_10;
      uVar11 = 8;
    }
    if (fVar20 < (float10)local_14) {
      return 7;
    }
  }
  return uVar11;
}


