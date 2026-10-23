// FUN_0049f030 @ 49f030 size=785

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_0049f030(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  float10 fVar15;
  int local_8;
  int local_4;
  
  iVar10 = param_2;
  if (param_3 != 0) {
    FUN_004e9370(param_3);
    cVar11 = FUN_004ea200(param_1);
    if (cVar11 == '\0') {
      return 0;
    }
  }
  local_4 = 0;
  local_8 = 0;
  if (param_2 == 9) {
    piVar8 = *(int **)(DAT_00d0ca90 + 0x3b7e);
    while (piVar8 != (int *)0x0) {
      piVar3 = (int *)piVar8[2];
      piVar4 = (int *)*piVar8;
      cVar11 = (**(code **)(*piVar4 + 0x10))();
      piVar8 = piVar3;
      if ((cVar11 != '\0') && (*(int *)((int)piVar4 + 0x5a) == 9)) {
        local_4 = local_4 + (piVar4[0xe] - piVar4[0xd]) + piVar4[0xc];
      }
    }
    puVar9 = *(undefined4 **)(param_1 + 0xe8a4);
    while (puVar9 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)puVar9[2];
      iVar12 = FUN_004e9370(*puVar9);
      puVar9 = puVar5;
      if (_DAT_007e3380 < *(float *)(*(int *)(iVar12 + 0x1ea) + 0x10)) {
        local_8 = __ftol();
      }
    }
    if (*(int *)(param_1 + 0xe316) <= local_8 + local_4) {
      return 0;
    }
  }
  iVar12 = 0;
  bVar14 = param_2 == 10;
  param_2 = 0;
  if (bVar14) {
    piVar8 = *(int **)(DAT_00d0ca90 + 0x3b7e);
    while (piVar8 != (int *)0x0) {
      piVar3 = (int *)piVar8[2];
      piVar4 = (int *)*piVar8;
      cVar11 = (**(code **)(*piVar4 + 0x10))();
      piVar8 = piVar3;
      if ((cVar11 != '\0') && (*(int *)((int)piVar4 + 0x5a) == 10)) {
        iVar12 = iVar12 + (piVar4[0xe] - piVar4[0xd]) + piVar4[0xc];
      }
    }
    puVar9 = *(undefined4 **)(param_1 + 0xe8a4);
    while (puVar9 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)puVar9[2];
      iVar13 = FUN_004e9370(*puVar9);
      puVar9 = puVar5;
      if (_DAT_007e3380 < *(float *)(*(int *)(iVar13 + 0x1ee) + 0x10)) {
        param_2 = __ftol();
      }
    }
    fVar15 = (float10)FUN_004d0d40(10);
    if (fVar15 <= (float10)(param_2 + iVar12)) {
      return 0;
    }
  }
  if (param_3 == 0) goto LAB_0049f32c;
  iVar12 = FUN_004e9370(param_3);
  if ((*(int *)(iVar12 + 0x182) < 1) && (iVar10 == 2)) {
    return 0;
  }
  if ((*(int *)(iVar12 + 0x46a) == 0) && (iVar10 == 7)) {
    return 0;
  }
  fVar15 = (float10)FUN_004ecea0();
  if ((fVar15 < (float10)_DAT_007e6f18) && (iVar10 == 1)) {
    return 0;
  }
  if (iVar10 == 9) {
    if (0 < local_8) {
      fVar1 = *(float *)(*(int *)(iVar12 + 0x1ea) + 0x10);
LAB_0049f258:
      if (fVar1 < (float)_DAT_007e46d8) {
        return 0;
      }
    }
  }
  else if ((iVar10 == 10) && (0 < param_2)) {
    fVar1 = *(float *)(*(int *)(iVar12 + 0x1ee) + 0x10);
    goto LAB_0049f258;
  }
  piVar8 = *(int **)(param_1 + 0x3b7e);
  while (piVar8 != (int *)0x0) {
    piVar3 = (int *)piVar8[2];
    piVar4 = (int *)*piVar8;
    cVar11 = (**(code **)(*piVar4 + 0x10))();
    piVar8 = piVar3;
    if ((((cVar11 != '\0') && (*(int *)((int)piVar4 + 0x16) == param_3)) &&
        (*(int *)((int)piVar4 + 0x5a) == iVar10)) &&
       (iVar13 = piVar4[0xc], iVar6 = piVar4[0xd], iVar7 = piVar4[0xe],
       fVar1 = *(float *)(&DAT_008eff64 + iVar10 * 4),
       fVar2 = *(float *)(*(int *)(iVar12 + 0x1c6 + iVar10 * 4) + 0x10),
       fVar15 = (float10)FUN_004d0d40(iVar10),
       fVar15 < (float10)((float)((iVar7 - iVar6) + 1 + iVar13) * fVar1 + fVar2))) {
      return 0;
    }
  }
  fVar1 = *(float *)(&DAT_008eff64 + iVar10 * 4);
  fVar2 = *(float *)(*(int *)(iVar12 + 0x1c6 + iVar10 * 4) + 0x10);
  fVar15 = (float10)FUN_004d0d40(iVar10);
  if (fVar15 + (float10)_DAT_007e4098 < (float10)(fVar2 + fVar1)) {
    return 0;
  }
LAB_0049f32c:
  return *(undefined1 *)(param_1 + 0xe321 + iVar10);
}


