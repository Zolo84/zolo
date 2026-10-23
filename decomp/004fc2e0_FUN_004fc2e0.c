// FUN_004fc2e0 @ 4fc2e0 size=2187

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fc2e0(int *param_1,char param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  void *pvVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  bool bVar19;
  float10 fVar20;
  float10 extraout_ST0;
  float fStack_174;
  int iStack_16c;
  undefined4 uStack_168;
  uint uStack_160;
  float fStack_150;
  undefined2 uStack_14c;
  undefined4 uStack_14a;
  int aiStack_134 [37];
  int aiStack_a0 [37];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c150a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar5 = FUN_0042e980();
  if (cVar5 == '\0') {
    ExceptionList = local_c;
    return;
  }
  if ((param_2 != '\0') && (_DAT_007e3380 < (float)param_1[0x20])) {
    if (((char)param_1[0x58] == '\0') || (param_3 == 0)) {
      fVar1 = _DAT_008773f8;
      if ((*(char *)((int)param_1 + 0x15f) == '\0') &&
         (fVar1 = _DAT_007e4090, *(char *)((int)param_1 + 0x161) != '\0')) {
        fVar1 = _DAT_00877400;
      }
    }
    else {
      iVar15 = *(int *)(param_3 + 0x74);
      fVar1 = _DAT_00877404;
      if (((iVar15 != 6) && (fVar1 = _DAT_008773f4, iVar15 != 4)) &&
         (fVar1 = _DAT_007e4090, iVar15 == 5)) {
        fVar1 = _DAT_008773fc;
      }
    }
    if ((float)param_1[0x3d] < fVar1) {
      fVar1 = (float)param_1[0x3d];
    }
    if (((float)param_1[0x3d] - (float)param_1[0x20] < fVar1) &&
       (param_1[0x20] = (int)((float)param_1[0x3d] - fVar1),
       (float)param_1[0x3d] - fVar1 < _DAT_007e3380)) {
      param_1[0x20] = 0;
    }
  }
  uVar6 = (**(code **)(*param_1 + 0xc))((double)(float)param_1[0x1f],(double)(float)param_1[0x20]);
  FUN_00405ad0(s__s_lost___1f_strength_and___1f_o_0084950c,uVar6);
  if (((float)param_1[0x20] <= _DAT_007e3380) && ((float)param_1[0x1f] <= _DAT_007e3380))
  goto LAB_004fcb48;
  if ((DAT_00dc191a != '\0') && (_DAT_007e3380 < (float)param_1[0x1f])) {
    fVar1 = (float)param_1[0x3b];
    fStack_174 = (float)param_1[0x1f];
    fVar2 = (float)param_1[0x1f];
    fStack_150 = 1.0;
    piVar8 = aiStack_134;
    for (iVar15 = 0x25; iVar15 != 0; iVar15 = iVar15 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    bVar19 = fVar1 <= fVar2;
    uStack_168 = 0;
    if ((param_3 != 0) && (param_1[0x1b] != 0)) {
      if ((param_2 == '\0') || (param_4 != 3)) {
        if (param_4 != 1) {
          piVar8 = (int *)(**(code **)(**(int **)(param_3 + 0x80) + 0xc))();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
          if (*piVar8 == 0) {
            if (param_4 != 2) {
              piVar8 = (int *)(**(code **)(**(int **)(param_3 + 0x84) + 0xc))();
              piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
              if (*piVar8 == 0) goto LAB_004fc4eb;
            }
            uStack_168 = 2;
            goto LAB_004fc4eb;
          }
        }
      }
      else {
        param_4 = 0;
      }
      uStack_168 = 1;
    }
LAB_004fc4eb:
    if (bVar19) {
      fStack_150 = (float)param_1[0x3b] / (float)param_1[0x1f];
      fStack_174 = (float)param_1[0x3b];
    }
    piVar17 = aiStack_134;
    piVar8 = (int *)((int)param_1 + 0x232);
    iStack_16c = 0x25;
    do {
      if (_DAT_007e3380 < (float)*piVar8) {
        if (bVar19) {
          iVar15 = __ftol();
          *piVar17 = iVar15;
        }
        else {
          iVar15 = __ftol();
          iVar7 = __ftol();
          *piVar17 = iVar7 - iVar15;
        }
      }
      piVar8 = piVar8 + 1;
      piVar17 = piVar17 + 1;
      iStack_16c = iStack_16c + -1;
    } while (iStack_16c != 0);
    fStack_174 = fStack_174 * _DAT_007e46cc;
    iVar15 = (**(code **)(param_1[10] + 4))();
    piVar8 = (int *)param_1[0xb];
joined_r0x004fc625:
    if ((piVar8 != (int *)0x0) && (_DAT_007e3380 < fStack_174)) {
      piVar17 = (int *)piVar8[2];
      iVar15 = iVar15 + -1;
      puVar13 = (undefined4 *)*piVar8;
      fVar20 = (float10)(float)puVar13[1] * (float10)_DAT_007e46cc;
      if (bVar19) {
        fVar20 = fVar20 * (float10)fStack_150;
      }
      piVar8 = piVar17;
      if ((iVar15 != 0) && (fVar20 < (float10)fStack_174)) goto code_r0x004fc68a;
      fStack_174 = 0.0;
      piVar17 = aiStack_134;
      piVar18 = aiStack_a0;
      for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar18 = *piVar17;
        piVar17 = piVar17 + 1;
        piVar18 = piVar18 + 1;
      }
      goto LAB_004fc6ff;
    }
    puVar13 = (undefined4 *)param_1[0xb];
    while (puVar13 != (undefined4 *)0x0) {
      uVar6 = *puVar13;
      puVar13 = (undefined4 *)puVar13[2];
      FUN_00796cd8(uVar6);
      FUN_00796cd8();
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puVar13 = operator_new(0xc);
  uStack_4 = 6;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    iVar15 = param_1[0x20];
    iVar7 = param_1[0x1f];
    puVar14 = operator_new(0x18);
    uStack_4 = CONCAT31(uStack_4._1_3_,7);
    if (puVar14 == (undefined2 *)0x0) {
      puVar14 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar14[4] = 0;
      *(undefined4 *)(puVar14 + 5) = 0;
    }
    puVar13[1] = puVar14;
    *(undefined1 *)(puVar13 + 2) = 0;
    *(undefined1 *)((int)puVar13 + 9) = 1;
    *puVar13 = &PTR_FUN_007e6e4c;
    *(undefined1 *)((int)puVar13 + 10) = 0;
    *puVar14 = 0x13e;
    iVar3 = puVar13[1];
    *(int *)(iVar3 + 8) = param_1[3];
    *(short *)(iVar3 + 0xc) = (short)param_1[4];
    iVar3 = puVar13[1];
    uStack_160 = (uint)puVar13 & 0xff000000;
    *(uint *)(iVar3 + 2) = uStack_160;
    *(undefined2 *)(iVar3 + 6) = 0;
    *puVar13 = &PTR_FUN_007e6e2c;
    *(int *)(puVar13[1] + 0xe) = iVar7;
    *(int *)(puVar13[1] + 0x12) = iVar15;
    *(undefined1 *)(puVar13[1] + 0x16) = 0;
    *(undefined1 *)(puVar13[1] + 0x17) = 1;
  }
  uStack_4 = 0xffffffff;
  FUN_00565bc0(puVar13);
LAB_004fcb48:
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  ExceptionList = local_c;
  return;
code_r0x004fc68a:
  bVar4 = false;
  piVar17 = aiStack_a0;
  for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar17 = 0;
    piVar17 = piVar17 + 1;
  }
  iVar7 = 0;
  do {
    iVar3 = *(int *)((int)aiStack_134 + iVar7);
    if (0 < iVar3) {
      iVar9 = __ftol();
      iVar9 = iVar3 - iVar9;
      fVar20 = extraout_ST0;
      if (0 < iVar9) {
        *(int *)((int)aiStack_a0 + iVar7) = iVar9;
        *(int *)((int)aiStack_134 + iVar7) = iVar3 - iVar9;
        bVar4 = true;
      }
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x94);
  fStack_174 = (float)((float10)fStack_174 - fVar20);
  if (!bVar4) goto joined_r0x004fc625;
LAB_004fc6ff:
  if (param_4 < 3) {
    puVar10 = operator_new(0xc);
    uStack_4 = 3;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
      goto LAB_004fca00;
    }
    if (param_3 == 0) {
      uStack_14c = DAT_0088f28c;
      uStack_14a = DAT_0088f28e;
      puVar16 = (undefined4 *)&uStack_14c;
    }
    else {
      puVar16 = (undefined4 *)(param_3 + 0xc);
    }
    if ((param_1[0x1b] == 0) || (iVar7 = FUN_00522770(), iVar7 == 0)) {
      if (param_1[0x16] == 0) {
        iVar7 = param_1[0x17];
      }
      else {
        iVar7 = (&DAT_0089cad8)[param_1[0x16]];
      }
      if (iVar7 != 0) goto LAB_004fc90c;
LAB_004fc910:
      iVar7 = DAT_00d0ca90;
    }
    else {
      iVar7 = FUN_00522770();
LAB_004fc90c:
      if (iVar7 == 0) goto LAB_004fc910;
    }
    uVar6 = *puVar13;
    pvVar11 = operator_new(0xb0);
    uStack_4._0_1_ = 4;
    if (pvVar11 == (void *)0x0) {
      pvVar11 = (void *)0x0;
    }
    else {
      FUN_0042d6c0();
      *(undefined2 *)((int)pvVar11 + 0xe) = 0;
      *(undefined4 *)((int)pvVar11 + 0x10) = 0;
    }
    uStack_4._0_1_ = 3;
    FUN_0042d320(pvVar11);
    *puVar10 = &PTR_FUN_007e6c84;
    *(undefined1 *)((int)puVar10 + 10) = 0;
    *(undefined2 *)puVar10[1] = 0x202;
    iVar3 = puVar10[1];
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar7 + 4);
    *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar7 + 8);
    uStack_4 = CONCAT31(uStack_4._1_3_,5);
    puVar13 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar7 = puVar10[1];
    *(undefined4 *)(iVar7 + 2) = *puVar13;
    *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar13 + 1);
    iVar7 = puVar10[1];
    *puVar10 = &PTR_FUN_007e6a98;
    *(undefined4 *)(iVar7 + 0xe) = *puVar16;
    *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(puVar16 + 1);
    *(undefined4 *)(puVar10[1] + 0xac) = uStack_168;
    *(undefined4 *)(puVar10[1] + 0x14) = uVar6;
    piVar17 = aiStack_a0;
    piVar18 = (int *)(puVar10[1] + 0x18);
    for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar18 = *piVar17;
      piVar17 = piVar17 + 1;
      piVar18 = piVar18 + 1;
    }
LAB_004fca00:
    uStack_4 = 0xffffffff;
    FUN_00565bc0(puVar10);
    goto joined_r0x004fc625;
  }
  puVar10 = operator_new(0xc);
  uStack_4 = 0;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
    goto LAB_004fc86e;
  }
  if ((param_1[0x1b] == 0) || (iVar7 = FUN_00522770(), iVar7 == 0)) {
    if (param_1[0x16] == 0) {
      iVar7 = param_1[0x17];
    }
    else {
      iVar7 = (&DAT_0089cad8)[param_1[0x16]];
    }
    if (iVar7 != 0) goto LAB_004fc789;
LAB_004fc78d:
    iVar7 = DAT_00d0ca90;
  }
  else {
    iVar7 = FUN_00522770();
LAB_004fc789:
    if (iVar7 == 0) goto LAB_004fc78d;
  }
  uVar6 = *puVar13;
  pvVar11 = operator_new(0xb0);
  uStack_4._0_1_ = 1;
  if (pvVar11 == (void *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_005077e0();
  }
  uStack_4._0_1_ = 0;
  FUN_0042d320(uVar12);
  *puVar10 = &PTR_FUN_007e6c84;
  *(undefined1 *)((int)puVar10 + 10) = 0;
  *(undefined2 *)puVar10[1] = 0x202;
  iVar3 = puVar10[1];
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar7 + 4);
  *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar7 + 8);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  puVar13 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar7 = puVar10[1];
  *(undefined4 *)(iVar7 + 2) = *puVar13;
  *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar13 + 1);
  iVar7 = puVar10[1];
  *puVar10 = &PTR_FUN_007e6a98;
  *(int *)(iVar7 + 0xe) = param_1[3];
  *(short *)(iVar7 + 0x12) = (short)param_1[4];
  *(int *)(puVar10[1] + 0xac) = param_4;
  *(undefined4 *)(puVar10[1] + 0x14) = uVar6;
  piVar17 = aiStack_a0;
  piVar18 = (int *)(puVar10[1] + 0x18);
  for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar18 = *piVar17;
    piVar17 = piVar17 + 1;
    piVar18 = piVar18 + 1;
  }
LAB_004fc86e:
  uStack_4 = 0xffffffff;
  FUN_00565bc0(puVar10);
  goto joined_r0x004fc625;
}


