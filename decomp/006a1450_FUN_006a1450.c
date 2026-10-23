// FUN_006a1450 @ 6a1450 size=1063

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006a1450(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  float fVar12;
  float10 fVar13;
  float fStack_4;
  
  iVar5 = FUN_0051b230();
  if ((*(int *)(iVar5 + 0x254) != 8) && (*(int *)(iVar5 + 0x254) != 9)) {
    uVar6 = FUN_0051b230();
    cVar4 = FUN_0049ee30(uVar6);
    if (cVar4 == '\0') {
      return 0;
    }
  }
  iVar5 = (**(code **)(param_1[0x2c] + 4))();
  if (iVar5 < 1) {
    return 1;
  }
  cVar4 = FUN_005177f0();
  if (cVar4 == '\0') {
    iVar5 = FUN_0051b230();
    if (*(int *)(iVar5 + 0x254) == 8) {
      iVar5 = param_1[0x2d];
      do {
        if (iVar5 == 0) goto LAB_006a151a;
        puVar7 = (undefined4 *)FUN_00498700(&fStack_4,0);
        cVar4 = (**(code **)(*(int *)(*(int *)*puVar7 + 0x22e) + 8))();
      } while ((cVar4 != '\0') ||
              (iVar9 = *(int *)(param_2 + 0xc), iVar8 = FUN_0051c0c0(), iVar8 != iVar9));
    }
    else {
LAB_006a151a:
      piVar10 = (int *)param_1[0x2d];
      do {
        if (piVar10 == (int *)0x0) {
          return 1;
        }
        iVar5 = *piVar10;
        piVar10 = (int *)piVar10[2];
      } while (*(int *)(iVar5 + 0x2ae) != 0);
    }
  }
  cVar4 = FUN_005177f0();
  if (cVar4 != '\0') {
    piVar10 = *(int **)(*(int *)(param_2 + 0x2aa) + 4);
    while (piVar10 != (int *)0x0) {
      piVar1 = (int *)piVar10[2];
      iVar5 = *piVar10;
      iVar9 = (**(code **)(*(int *)(iVar5 + 0x11c) + 4))();
      if (iVar9 != 0) {
        return 0;
      }
      cVar4 = (**(code **)(*(int *)(iVar5 + 0x22e) + 8))();
      piVar10 = piVar1;
      if (cVar4 == '\0') {
        return 0;
      }
    }
    piVar10 = *(int **)(*(int *)(param_2 + 0x2aa) + 4);
    if (piVar10 == (int *)0x0) {
      return 0;
    }
    while( true ) {
      piVar1 = (int *)piVar10[2];
      iVar5 = *piVar10;
      if (*(int **)(iVar5 + 500) != param_1) {
        return 1;
      }
      iVar9 = *(int *)(iVar5 + 0x294);
      if ((iVar9 < 1) || (*(int *)(iVar5 + 0xc) == iVar9)) {
        iVar9 = *(int *)(iVar5 + 0x298);
      }
      if (iVar9 < 1) {
        return 1;
      }
      iVar9 = FUN_004e9370(iVar9);
      if (*(int *)(iVar9 + 0x254) == 8) {
        return 1;
      }
      if (*(int *)(iVar9 + 0x254) == 9) break;
      if (*(int *)(iVar9 + 0x3dc) < 1) {
        return 1;
      }
      if (*(int *)(iVar9 + 0x3dc) < 1) {
        return 1;
      }
      if ((*(char *)(iVar5 + 0x29c) != '\0') &&
         (fVar13 = (float10)FUN_0051a210(), fVar13 < (float10)_DAT_007e3834)) {
        (**(code **)(*param_1 + 0x1ac))(iVar5);
        piVar10 = (int *)(**(code **)(*param_1 + 0xe0))();
        (**(code **)(*piVar10 + 0x1a8))(iVar5);
        return 1;
      }
      piVar10 = piVar1;
      if (piVar1 == (int *)0x0) {
        return 0;
      }
    }
    return 1;
  }
  iVar5 = FUN_00516cc0();
  if (0 < iVar5) {
    iVar5 = FUN_0051b230();
    if ((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) {
      piVar10 = (int *)param_1[0x2d];
      while (piVar10 != (int *)0x0) {
        piVar1 = (int *)piVar10[2];
        cVar4 = (**(code **)(*(int *)(*piVar10 + 0x22e) + 8))();
        piVar10 = piVar1;
        if ((cVar4 == '\0') &&
           (iVar5 = *(int *)(param_2 + 0xc), iVar9 = FUN_0051c0c0(), iVar9 == iVar5)) {
          return 0;
        }
      }
    }
  }
  iVar5 = 0;
  piVar10 = *(int **)(param_2 + 0x26);
  while (piVar10 != (int *)0x0) {
    piVar1 = (int *)piVar10[2];
    iVar9 = *piVar10;
    if (_DAT_007e67e0 <
        ((*(float *)(iVar9 + 0xf0) - *(float *)(iVar9 + 0xec)) * _DAT_007e4088) /
        *(float *)(iVar9 + 0xf0)) {
      return 1;
    }
    iVar8 = FUN_0051b230();
    if (((*(int *)(iVar8 + 0x254) != 8) && (*(int *)(iVar8 + 0x254) != 9)) &&
       (fVar12 = *(float *)(iVar9 + 0xf4) + _DAT_007e46cc, fVar13 = (float10)FUN_004fd510(),
       (float10)fVar12 < fVar13)) {
      return 1;
    }
    iVar8 = FUN_0051b230();
    piVar10 = piVar1;
    if ((*(int *)(iVar8 + 0x254) == 8) || (*(int *)(iVar8 + 0x254) == 9)) {
      fStack_4 = *(float *)(iVar9 + 0xf4);
      fVar13 = (float10)FUN_004fd510();
      if ((float10)fStack_4 < fVar13 * (float10)_DAT_007e5438) {
        return 1;
      }
    }
  }
  iVar9 = FUN_0051b230();
  if (*(int *)(iVar9 + 0x254) != 8) {
    return 0;
  }
  bVar2 = false;
  bVar3 = false;
  fStack_4 = 0.0;
  iVar9 = FUN_0051b230();
  if (0 < *(int *)(iVar9 + 0x290)) {
    do {
      iVar9 = FUN_0051b230();
      iVar9 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar9 + 0x298) + iVar5));
      if (((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) &&
         (*(int *)(iVar9 + 0x3d8) != 0)) {
        iVar8 = *(int *)(*(int *)(iVar9 + 0x3d8) + 0x12da);
        iVar11 = FUN_006a9d50();
        if (*(char *)(iVar8 + (iVar11 + 1) * 0x2c) != '\0') {
          bVar2 = true;
        }
        iVar9 = *(int *)(*(int *)(iVar9 + 0x3d8) + 0x3350);
        iVar8 = FUN_006a9d50();
        if (iVar9 == *(int *)((&DAT_0089cad8)[iVar8] + 0x3350)) {
          bVar3 = true;
        }
      }
      fVar12 = (float)((int)fStack_4 + 1);
      iVar5 = iVar5 + 0xc;
      fStack_4 = fVar12;
      iVar9 = FUN_0051b230();
    } while ((int)fVar12 < *(int *)(iVar9 + 0x290));
    if (!bVar2) {
      return 0;
    }
    if (bVar3) {
      return 0;
    }
    return 1;
  }
  return 0;
}


