// FUN_004e8540 @ 4e8540 size=908

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004e8540(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0x3d4) == 0) {
    return 0;
  }
  iVar9 = *(int *)(param_1 + 0x3d8);
  if (iVar9 == 0) {
    return 0;
  }
  if (*(int *)(iVar9 + 6) == 0x157) {
    iVar9 = *(int *)(param_1 + 0x3d4);
  }
  fVar4 = *(float *)(iVar9 + 0x234) + *(float *)(param_1 + 0x21e);
  cVar6 = (**(code **)(*(int *)(iVar9 + 0xe8b2) + 0x24))(*(undefined4 *)(param_1 + 0x12));
  if (cVar6 == '\0') {
    fVar4 = fVar4 + _DAT_007e3374;
    if (*(int *)(param_1 + 0x3d4) != iVar9) {
      iVar8 = FUN_0044d810();
      iVar7 = FUN_0044d810();
      uVar10 = iVar8 - iVar7 >> 0x1f;
      fVar4 = (float)(int)((iVar8 - iVar7 ^ uVar10) - uVar10) + fVar4 + _DAT_007e3374;
      cVar6 = FUN_0044d880();
      if (cVar6 == '\0') {
        cVar6 = FUN_0044d860();
        if (cVar6 != '\0') {
          iVar8 = FUN_0044d810();
          fVar4 = (float)(iVar8 + -6) * _DAT_007e3650 + fVar4;
        }
      }
      else {
        iVar8 = FUN_0044d810();
        fVar4 = (float)(3 - iVar8) * _DAT_007e384c + fVar4;
      }
    }
    iVar8 = *(int *)(iVar9 + 0x244);
    fVar4 = fVar4 * *(float *)(iVar8 + 0x7e);
    if (*(int *)(param_1 + 0x284) != 6) {
      switch(*(undefined4 *)(param_1 + 0x28c)) {
      case 1:
      case 5:
      case 8:
      case 0xf:
      case 0x16:
      case 0x1a:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x3b:
      case 0x3c:
      case 0x44:
      case 0x45:
      case 0x4e:
        break;
      default:
        goto switchD_004e8673_caseD_2;
      }
    }
  }
  else {
    iVar8 = *(int *)(iVar9 + 0x244);
    fVar4 = *(float *)(iVar8 + 0x7a) * fVar4;
  }
  fVar1 = _DAT_007e685c;
  if (fVar4 < _DAT_007e685c) {
    fVar1 = fVar4;
  }
  fVar4 = fVar4 - fVar1;
switchD_004e8673_caseD_2:
  fVar4 = fVar4 * *(float *)(iVar8 + 0x5e);
  *(undefined4 *)(param_1 + 0x22a) = 0;
  if (_DAT_007e3380 < fVar4) {
    piVar5 = *(int **)(*(int *)(param_1 + 0x1c2) + 4);
    while (piVar5 != (int *)0x0) {
      piVar2 = (int *)piVar5[2];
      iVar8 = *piVar5;
      piVar5 = piVar2;
      if ((*(int *)(iVar8 + 0x248) == iVar9) ||
         (cVar6 = FUN_0044b300(*(undefined4 *)(iVar9 + 6)), cVar6 != '\0')) {
        fVar1 = _DAT_007e3374;
        if (*(int *)(iVar8 + 0x264) == 7) {
          fVar1 = *(float *)(*(int *)(iVar8 + 0x248) + 0xe37c) * _DAT_0087748c;
        }
        piVar2 = *(int **)(iVar8 + 0x26);
        while (piVar2 != (int *)0x0) {
          piVar3 = (int *)piVar2[2];
          iVar8 = *piVar2;
          piVar2 = piVar3;
          if (*(char *)(iVar8 + 0x15f) != '\0') {
            *(float *)(param_1 + 0x22a) =
                 *(float *)(iVar8 + 0x2d8) * *(float *)(iVar8 + 0xec) * fVar1 * _DAT_007e543c +
                 *(float *)(param_1 + 0x22a);
          }
        }
      }
    }
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x290)) {
      local_10 = 0;
      do {
        iVar8 = DAT_00ab27b4 + *(int *)(local_10 + *(int *)(param_1 + 0x298)) * 0x4b2;
        iVar7 = *(int *)(iVar8 + 0x254);
        if ((iVar7 != 8) && (iVar7 != 9)) {
          piVar5 = *(int **)(*(int *)(iVar8 + 0x1c2) + 4);
          while (piVar5 != (int *)0x0) {
            piVar2 = (int *)piVar5[2];
            iVar8 = *piVar5;
            piVar5 = piVar2;
            if ((*(int *)(iVar8 + 0x248) == iVar9) ||
               (cVar6 = FUN_0044b300(*(undefined4 *)(iVar9 + 6)), cVar6 != '\0')) {
              fVar1 = _DAT_007e3374;
              if (*(int *)(iVar8 + 0x264) == 7) {
                fVar1 = *(float *)(*(int *)(iVar8 + 0x248) + 0xe37c);
                fVar1 = fVar1 + fVar1;
              }
              piVar2 = *(int **)(iVar8 + 0x26);
              while (piVar2 != (int *)0x0) {
                piVar3 = (int *)piVar2[2];
                iVar8 = *piVar2;
                piVar2 = piVar3;
                if (*(char *)(iVar8 + 0x15f) != '\0') {
                  *(float *)(param_1 + 0x22a) =
                       *(float *)(iVar8 + 0x2d8) * *(float *)(iVar8 + 0xec) * fVar1 * _DAT_007e8118
                       + *(float *)(param_1 + 0x22a);
                }
              }
            }
          }
        }
        local_14 = local_14 + 1;
        local_10 = local_10 + 0xc;
      } while (local_14 < *(int *)(param_1 + 0x290));
    }
  }
  iVar9 = (int)ROUND(fVar4);
  *(int *)(param_1 + 0x226) = iVar9;
  iVar8 = __ftol();
  if (iVar8 < iVar9) {
    *(int *)(param_1 + 0x226) = iVar8;
  }
  if (*(int *)(param_1 + 0x226) < 0) {
    *(undefined4 *)(param_1 + 0x226) = 0;
  }
  iVar9 = *(int *)(param_1 + 0x226) - (int)ROUND(*(float *)(param_1 + 0x22a));
  *(int *)(param_1 + 0x222) = iVar9;
  if (iVar9 < 0) {
    *(undefined4 *)(param_1 + 0x222) = 0;
  }
  return *(undefined4 *)(param_1 + 0x222);
}


