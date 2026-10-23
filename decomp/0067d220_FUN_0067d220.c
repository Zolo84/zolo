// FUN_0067d220 @ 67d220 size=1638

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0067d220(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  int *piVar17;
  bool bVar18;
  undefined4 uVar19;
  int *local_2c;
  int local_24;
  float local_20 [2];
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;
  
  uVar7 = *(uint *)(param_1 + 10);
  if ((*(char *)(*(int *)(uVar7 + 0x120) + 0xb6) != '\0') ||
     (local_14 = (&DAT_0089cad8)[param_2], local_14 == 0)) goto LAB_0067d87b;
  local_10 = param_1;
  iVar6 = FUN_005862f0(param_2);
  uVar7 = 0;
  if (((iVar6 == 0) || (uVar7 = FUN_0049ed40(param_2), (char)uVar7 != '\0')) ||
     ((((piVar17 = *(int **)(*(int *)(param_1 + 10) + 0x3350), piVar17 != (int *)0x0 &&
        (((cVar5 = (**(code **)(*piVar17 + 0x14))(), cVar5 != '\0' ||
          (cVar5 = (**(code **)(*piVar17 + 0x18))(), cVar5 != '\0')) ||
         (cVar5 = (**(code **)(*piVar17 + 0x1c))(), cVar5 != '\0')))) &&
       (piVar17 = *(int **)(local_14 + 0x3350), piVar17 != (int *)0x0)) &&
      (((uVar7 = (**(code **)(*piVar17 + 0x14))(), (char)uVar7 != '\0' ||
        (uVar7 = (**(code **)(*piVar17 + 0x18))(), (char)uVar7 != '\0')) ||
       (uVar7 = (**(code **)(*piVar17 + 0x1c))(), (char)uVar7 != '\0')))))) goto LAB_0067d87b;
  local_2c = *(int **)(*(int *)(iVar6 + 0x22) + 0x22);
  iVar9 = *local_2c;
  uVar8 = FUN_006a9d50();
  cVar5 = (**(code **)(iVar9 + 0x24))(uVar8);
  if (cVar5 != '\0') {
    local_2c = *(int **)(*(int *)(iVar6 + 0x26) + 0x22);
  }
  uVar7 = FUN_00584c90();
  if ((uVar7 == param_2) || (uVar7 = FUN_00584c90(), uVar7 == param_2)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  iVar9 = FUN_006a9d50();
  iVar10 = FUN_00584c90();
  if (iVar10 == iVar9) {
LAB_0067d37f:
    local_5 = '\0';
    uVar8 = 0;
  }
  else {
    iVar9 = FUN_006a9d50();
    iVar10 = FUN_00584c90();
    if (iVar10 == iVar9) goto LAB_0067d37f;
    local_5 = '\x01';
    uVar8 = FUN_006a9d50();
  }
  uVar19 = 0;
  uVar7 = -(uint)bVar18 & param_2;
  uVar11 = FUN_006a9d50(uVar8,uVar7,0);
  uVar12 = FUN_0058bcc0(uVar11,uVar8,uVar7,uVar19);
  iVar9 = local_10;
  uVar7 = uVar12;
  if (((bVar18) || (uVar7 = CONCAT31((int3)(uVar12 >> 8),local_5), local_5 != '\0')) ||
     ((iVar10 = *(int *)(*(int *)(*(int *)(local_10 + 10) + 0x12da) + 0x3b30), iVar10 != 0 &&
      (uVar7 = iVar10 * 0xb + 0xb, *(char *)(*(int *)(local_14 + 0x12da) + uVar7 * 4) != '\0'))))
  goto LAB_0067d87b;
  local_18 = uVar12;
  iVar13 = FUN_00468230();
  iVar14 = FUN_0042e060(local_20,iVar6 + 0x1c);
  iVar10 = DAT_00893530;
  local_20[0] = (float)((int)*(char *)(iVar14 + 2) + *(short *)(iVar14 + 4) * 0xc);
  if ((int)uVar12 < -9) {
    piVar17 = *(int **)(*(int *)(iVar9 + 10) + 0x3350);
    if ((piVar17 == (int *)0x0) ||
       (((uVar7 = (**(code **)(*piVar17 + 0x14))(), (char)uVar7 == '\0' &&
         (uVar7 = (**(code **)(*piVar17 + 0x18))(), (char)uVar7 == '\0')) &&
        (uVar7 = (**(code **)(*piVar17 + 0x1c))(), (char)uVar7 == '\0')))) {
      iVar13 = 100 - iVar13;
      if ((int)local_18 < -0x32) {
        iVar13 = __ftol();
      }
      iVar13 = iVar13 + (int)ROUND(local_20[0] * _DAT_007e4090);
      iVar6 = FUN_006a9d50();
      iVar6 = (&DAT_0089cad8)[iVar6];
      if (iVar6 != 0) {
        local_20[0] = 0.0;
        local_24 = 0;
        puVar3 = *(undefined4 **)(iVar6 + 0xe8b6);
        while (puVar3 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar3[2];
          iVar9 = FUN_004e9370(*puVar3);
          puVar3 = puVar1;
          if ((*(int *)(iVar9 + 0x3d4) == iVar6) &&
             (local_20[0] = (float)((int)local_20[0] + 1), *(int *)(iVar9 + 0x3d8) != iVar6)) {
            local_24 = __ftol();
          }
        }
        if (0x62 < (int)ROUND(((float)local_24 * _DAT_007e4088) / (float)(int)local_20[0])) {
          iVar13 = iVar13 + 200;
        }
      }
      iVar6 = _rand();
      uVar7 = iVar13 / 2;
      if (iVar6 % 100 < (int)uVar7) {
        uVar7 = FUN_0067dff0(param_2,0,0,0);
        return uVar7;
      }
    }
    goto LAB_0067d87b;
  }
  if ((int)uVar12 < 10) {
    uVar15 = _rand();
    uVar15 = uVar15 & 0x80000003;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
    }
    uVar7 = (((int)*(short *)(iVar10 + 0x18) - (int)*(short *)(iVar6 + 0x1a)) * 0xc -
            (int)*(char *)(iVar6 + 0x18)) + (int)*(char *)(iVar10 + 0x16);
    uVar12 = local_18;
    if ((int)uVar7 < (int)(uVar15 + 6)) goto LAB_0067d87b;
  }
  bVar18 = (float)(int)local_18 + (float)iVar13 <= _DAT_007e681c;
  local_c = 100 - (int)ROUND((float)iVar13);
  if (0x32 < (int)uVar12) {
    local_c = local_c + uVar12;
  }
  if (uVar12 == 100) {
    local_c = 100;
  }
  fVar16 = _DAT_007e34c0;
  if (*(char *)(param_2 + 0xe8d6 + *(int *)(local_10 + 10)) != '\0') {
    fVar16 = _DAT_007e6800;
  }
  if (0x18 < (((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(iVar6 + 0x1a)) * 0xc -
             (int)*(char *)(iVar6 + 0x18)) + (int)*(char *)(DAT_00893530 + 0x16)) {
    local_20[0] = (float)(int)ROUND(fVar16 * local_20[0]);
    local_c = local_c + (int)local_20[0];
  }
  iVar9 = 0;
  iVar6 = (&DAT_0089cad8)[param_2];
  if (iVar6 == 0) {
    fVar16 = 0.0;
  }
  else {
    local_20[0] = 0.0;
    puVar3 = *(undefined4 **)(iVar6 + 0xe892);
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[2];
      iVar10 = FUN_004e9370(*puVar3);
      puVar3 = puVar1;
      if ((*(int *)(iVar10 + 0x3d4) == iVar6) &&
         (iVar9 = iVar9 + 1, *(int *)(iVar10 + 0x3d8) != iVar6)) {
        local_20[0] = (float)__ftol();
      }
    }
    fVar16 = (float)(int)ROUND(((float)(int)local_20[0] * _DAT_007e4088) / (float)iVar9);
    local_20[0] = fVar16;
  }
  iVar6 = local_10;
  bVar4 = false;
  if ((int)fVar16 < 99) {
    if (((int)local_18 < 1) ||
       (*(float *)(*(int *)(local_10 + 10) + 0x11836) <=
        *(float *)(local_14 + 0x11836) * _DAT_007e34c0)) {
      piVar17 = *(int **)(*(int *)(local_10 + 10) + 0x3350);
      if ((piVar17 != (int *)0x0) &&
         (((cVar5 = (**(code **)(*piVar17 + 0x14))(), cVar5 != '\0' ||
           (cVar5 = (**(code **)(*piVar17 + 0x18))(), cVar5 != '\0')) ||
          (cVar5 = (**(code **)(*piVar17 + 0x1c))(), cVar5 != '\0')))) {
        iVar9 = FUN_00584c90();
        iVar10 = FUN_006a9d50();
        if (iVar9 == iVar10) goto LAB_0067d622;
      }
    }
    else {
LAB_0067d622:
      bVar4 = true;
    }
  }
  else {
    local_c = local_c + 1000;
  }
  iVar9 = FUN_004a0750();
  if ((*(int *)(iVar9 + 0x3d8) != local_14) || (bVar4)) {
    local_c = local_c + -500;
  }
  if (bVar18) {
    local_c = local_c + 5;
  }
  local_18 = 0;
  local_20[0] = 0.0;
  piVar17 = *(int **)(*(int *)(*(int *)(iVar6 + 10) + 0x120) + 0xb1a);
  if (piVar17 != (int *)0x0) {
    do {
      piVar2 = (int *)piVar17[2];
      puVar3 = (undefined4 *)*piVar17;
      iVar6 = FUN_004e9370(*puVar3);
      if (((*(int *)(iVar6 + 0x3d4) != 0) &&
          (cVar5 = (**(code **)(*local_2c + 0x24))(*(undefined4 *)(*(int *)(iVar6 + 0x3d4) + 6)),
          cVar5 != '\0')) &&
         (local_20[0] = (float)((int)local_20[0] + 1),
         *(int *)(iVar6 + 0x3d4) == *(int *)(iVar6 + 0x3d8))) {
        local_18 = local_18 + puVar3[1];
      }
      piVar17 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (0 < (int)local_20[0]) {
      local_c = local_c - (int)local_18 / (int)local_20[0];
    }
  }
  piVar17 = *(int **)(*(int *)(local_10 + 10) + 0x3350);
  if ((piVar17 == (int *)0x0) ||
     ((((uVar7 = (**(code **)(*piVar17 + 0x14))(), (char)uVar7 == '\0' &&
        (uVar7 = (**(code **)(*piVar17 + 0x18))(), (char)uVar7 == '\0')) &&
       (uVar7 = (**(code **)(*piVar17 + 0x1c))(), (char)uVar7 == '\0')) || (0x31 < local_c)))) {
    iVar6 = _rand();
    uVar7 = local_c / 2;
    if (iVar6 % 100 < (int)uVar7) {
      uVar7 = FUN_0067d890(param_2,0,0,bVar18);
      return uVar7;
    }
  }
LAB_0067d87b:
  return uVar7 & 0xffffff00;
}


