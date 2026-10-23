// FUN_00496760 @ 496760 size=1691

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00496760(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  float *pfVar15;
  int iVar16;
  char *pcVar17;
  float10 fVar18;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d4;
  undefined **local_cc;
  int *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  int *local_b8;
  undefined **local_b4;
  int *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  char local_98 [140];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bdc82;
  pvStack_c = ExceptionList;
  iVar16 = *(int *)(param_2 + 4);
  fVar3 = *(float *)(iVar16 + 0x14);
  cVar1 = *(char *)(iVar16 + 0x12);
  cVar2 = *(char *)(iVar16 + 0x13);
  iVar16 = *(int *)(iVar16 + 0xe);
  if (0 < (int)DAT_0087769c) {
    pcVar17 = local_98;
    for (uVar13 = DAT_0087769c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      pcVar17[0] = '\0';
      pcVar17[1] = '\0';
      pcVar17[2] = '\0';
      pcVar17[3] = '\0';
      pcVar17 = pcVar17 + 4;
    }
    for (uVar13 = DAT_0087769c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar17 = '\0';
      pcVar17 = pcVar17 + 1;
    }
  }
  uVar13 = DAT_0087769c;
  local_b8 = param_1;
  if (iVar16 < 0) {
    if (iVar16 == -1) {
      iVar16 = 0;
      ExceptionList = &pvStack_c;
      if (0 < (int)DAT_0087769c) {
        piVar14 = &DAT_00dbd1a2;
        do {
          if (*piVar14 < 0xc) {
            local_98[iVar16] = '\x01';
          }
          iVar16 = iVar16 + 1;
          piVar14 = piVar14 + 1;
          ExceptionList = &pvStack_c;
        } while (iVar16 < (int)DAT_0087769c);
      }
    }
    else if (iVar16 == -2) {
      iVar16 = 0;
      ExceptionList = &pvStack_c;
      if (0 < (int)DAT_0087769c) {
        piVar14 = &DAT_00dbd1a2;
        do {
          if ((0x14 < *piVar14) && (*piVar14 != 0x8c)) {
            local_98[iVar16] = '\x01';
          }
          iVar16 = iVar16 + 1;
          piVar14 = piVar14 + 1;
          ExceptionList = &pvStack_c;
        } while (iVar16 < (int)DAT_0087769c);
      }
    }
    else {
      ExceptionList = &pvStack_c;
      if ((iVar16 == -3) && (iVar16 = 0, ExceptionList = &pvStack_c, 0 < (int)DAT_0087769c)) {
        piVar14 = &DAT_00dbd1a2;
        ExceptionList = &pvStack_c;
        do {
          if ((0xb < *piVar14) &&
             (cVar6 = FUN_004581d0(iVar16), uVar13 = DAT_0087769c, cVar6 == '\0')) {
            local_98[iVar16] = '\x01';
          }
          iVar16 = iVar16 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar16 < (int)uVar13);
      }
    }
  }
  else {
    local_98[iVar16] = '\x01';
    ExceptionList = &pvStack_c;
  }
  if (cVar2 != '\0') {
    iVar16 = 0;
    if (0 < (int)uVar13) {
      pfVar15 = (float *)((int)param_1 + 0x40a2);
      do {
        if (local_98[iVar16] != '\0') {
          fVar5 = fVar3;
          if (cVar1 == '\0') {
            fVar5 = *pfVar15 + fVar3;
          }
          if (fVar5 < _DAT_007e3374) {
            fVar5 = _DAT_007e3374;
          }
          *pfVar15 = fVar5;
          uVar13 = DAT_0087769c;
        }
        iVar16 = iVar16 + 1;
        pfVar15 = pfVar15 + 1;
      } while (iVar16 < (int)uVar13);
    }
    piVar14 = *(int **)((int)param_1 + 0x3b7e);
    while (piVar14 != (int *)0x0) {
      piVar4 = (int *)piVar14[2];
      piVar7 = (int *)*piVar14;
      cVar6 = (**(code **)(*piVar7 + 0x14))();
      piVar14 = piVar4;
      if ((cVar6 != '\0') && (local_98[*(int *)((int)piVar7 + 0x5a)] != '\0')) {
        fVar18 = (float10)FUN_004673a0(*(int *)((int)piVar7 + 0x5a),0,
                                       *(undefined4 *)((int)piVar7 + 0x62),0);
        fStack_e8 = (float)fVar18;
        if (*(int *)((int)piVar7 + 0x5e) != 0) {
          fVar18 = (float10)FUN_00467430(*(int *)((int)piVar7 + 0x5e),
                                         *(undefined4 *)((int)piVar7 + 0x76));
          fStack_e8 = (float)(fVar18 + (float10)fStack_e8);
        }
        if (*(int *)((int)piVar7 + 0x7a) != 0) {
          fVar18 = (float10)FUN_00467430(*(int *)((int)piVar7 + 0x7a),
                                         *(undefined4 *)((int)piVar7 + 0x66));
          fStack_e8 = (float)(fVar18 + (float10)fStack_e8);
        }
        if (*(int *)((int)piVar7 + 0x7e) != 0) {
          fVar18 = (float10)FUN_00467430(*(int *)((int)piVar7 + 0x7e),
                                         *(undefined4 *)((int)piVar7 + 0x6a));
          fStack_e8 = (float)(fVar18 + (float10)fStack_e8);
        }
        if (*(int *)((int)piVar7 + 0x82) != 0) {
          fVar18 = (float10)FUN_00467430(*(int *)((int)piVar7 + 0x82),
                                         *(undefined4 *)((int)piVar7 + 0x6e));
          fStack_e8 = (float)(fVar18 + (float10)fStack_e8);
        }
        if (*(int *)((int)piVar7 + 0x86) != 0) {
          fVar18 = (float10)FUN_00467430(*(int *)((int)piVar7 + 0x86),
                                         *(undefined4 *)((int)piVar7 + 0x72));
          fStack_e8 = (float)(fVar18 + (float10)fStack_e8);
        }
        if ((char)piVar7[0xf] == '\0') {
          fVar5 = *(float *)((int)piVar7 + 0x4a) - fStack_e8;
          if ((_DAT_007e3380 <= fVar5) || (-fVar5 <= (float)param_1[0xe73])) {
            (**(code **)(*param_1 + 0x28))(fVar5);
          }
          else {
            (**(code **)(*param_1 + 0x28))(*(undefined4 *)((int)piVar7 + 0x4a));
            *(undefined1 *)(piVar7 + 0xf) = 1;
          }
        }
        *(float *)((int)piVar7 + 0x4a) = fStack_e8;
      }
    }
  }
  cVar6 = FUN_0042e980();
  if (cVar6 != '\0') {
    local_b0 = (int *)0x0;
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_b4 = &PTR_LAB_007e4b94;
    local_c8 = (int *)0x0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_cc = &PTR_LAB_007e4b94;
    local_4 = 1;
    FUN_00468710(&local_b4,1);
    piVar14 = local_b0;
    while (piVar14 != (int *)0x0) {
      piVar4 = (int *)piVar14[2];
      iVar16 = *piVar14;
      piVar14 = piVar4;
      if (((cVar2 != '\0') || (*(char *)(iVar16 + 0x154) == '\0')) &&
         (local_98[*(int *)(iVar16 + 0x130)] != '\0')) {
        FUN_004965e0(iVar16,&local_cc,1);
      }
    }
    piVar14 = (int *)param_1[0x1142];
    while (piVar14 != (int *)0x0) {
      piVar4 = (int *)piVar14[2];
      iVar16 = *piVar14;
      piVar7 = (int *)FUN_00522770();
      piVar14 = piVar4;
      if (piVar7 == param_1) {
        piVar4 = *(int **)(iVar16 + 0x26);
        while (piVar4 != (int *)0x0) {
          piVar7 = (int *)piVar4[2];
          iVar16 = *piVar4;
          piVar4 = piVar7;
          if (local_98[*(int *)(iVar16 + 0x130)] != '\0') {
            FUN_004965e0(iVar16,&local_cc,1);
          }
        }
      }
    }
    piVar14 = (int *)param_1[0x1147];
    while (piVar14 != (int *)0x0) {
      piVar4 = (int *)piVar14[2];
      iVar16 = *piVar14;
      piVar14 = piVar4;
      if ((((cVar2 != '\0') || (*(char *)(iVar16 + 0x154) == '\0')) &&
          ((*(int *)(iVar16 + 0x130) != 0x8c && (local_98[*(int *)(iVar16 + 0x130)] != '\0')))) &&
         ((*(int *)(iVar16 + 0x58) == *(int *)((int)param_1 + 6) || (*(int *)(iVar16 + 0x58) == 0)))
         ) {
        FUN_004965e0(iVar16,&local_cc,1);
      }
    }
    fStack_dc = 0.0;
    piVar14 = local_c8;
    while (piVar14 != (int *)0x0) {
      piVar4 = (int *)piVar14[2];
      iVar16 = *piVar14;
      fStack_e0 = *(float *)(iVar16 + 0xec);
      fStack_e8 = fVar3;
      if (cVar1 == '\0') {
        fStack_e8 = *(float *)(iVar16 + 0xf0) + fVar3;
      }
      if (fStack_e8 < _DAT_007e3374) {
        fStack_e8 = 1.0;
      }
      if (fStack_e8 < fStack_e0) {
        iVar8 = FUN_0044c620(*(undefined4 *)(iVar16 + 0x130));
        iVar9 = FUN_0044c3d0(*(undefined4 *)(iVar16 + 0x130),*(undefined4 *)(iVar16 + 0x138));
        fVar5 = fStack_e0 - fStack_e8;
        fStack_e0 = fStack_e8;
        fStack_dc = fVar5 * (*(float *)(iVar9 + 0x14) + *(float *)(iVar8 + 0x14)) * _DAT_007e543c +
                    fStack_dc;
      }
      puVar10 = operator_new(0xc);
      local_4._0_1_ = 2;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar11 = operator_new(0x16);
        if (puVar11 == (undefined2 *)0x0) {
          puVar11 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar11[4] = 0;
          *(undefined4 *)(puVar11 + 5) = 0;
        }
        puVar10[1] = puVar11;
        *(undefined1 *)(puVar10 + 2) = 0;
        *(undefined1 *)((int)puVar10 + 9) = 1;
        *puVar10 = &PTR_FUN_007e6e8c;
        *(undefined1 *)((int)puVar10 + 10) = 0;
        *puVar11 = 0x201;
        iVar8 = puVar10[1];
        *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar16 + 0xc);
        *(undefined2 *)(iVar8 + 0xc) = *(undefined2 *)(iVar16 + 0x10);
        puVar12 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar16 = puVar10[1];
        *(undefined4 *)(iVar16 + 2) = *puVar12;
        *(undefined2 *)(iVar16 + 6) = *(undefined2 *)(puVar12 + 1);
        *puVar10 = &PTR_FUN_007e6e6c;
        *(float *)(puVar10[1] + 0xe) = fStack_e0;
        *(float *)(puVar10[1] + 0x12) = fStack_e8;
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00565bc0(puVar10);
      param_1 = local_b8;
      piVar14 = piVar4;
    }
    puVar10 = operator_new(0xc);
    local_4._0_1_ = 3;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar11 = operator_new(0x12);
      if (puVar11 == (undefined2 *)0x0) {
        puVar11 = (undefined2 *)0x0;
      }
      else {
        puVar11[3] = 0;
        *(undefined1 *)(puVar11 + 2) = 0;
        *(undefined1 *)((int)puVar11 + 3) = 0;
        *(undefined1 *)(puVar11 + 1) = 0;
        puVar11[4] = 0;
        *(undefined4 *)(puVar11 + 5) = 0;
      }
      puVar10[1] = puVar11;
      *(undefined1 *)(puVar10 + 2) = 0;
      *(undefined1 *)((int)puVar10 + 9) = 1;
      *puVar10 = &PTR_FUN_007e6e0c;
      *(undefined1 *)((int)puVar10 + 10) = 0;
      *puVar11 = 99;
      iVar16 = puVar10[1];
      *(int *)(iVar16 + 8) = param_1[1];
      *(short *)(iVar16 + 0xc) = (short)param_1[2];
      iVar16 = puVar10[1];
      uStack_d4 = (uint)puVar10 & 0xff000000;
      *(uint *)(iVar16 + 2) = uStack_d4;
      *(undefined2 *)(iVar16 + 6) = 0;
      *puVar10 = &PTR_FUN_007e6dec;
      *(float *)(puVar10[1] + 0xe) = fStack_dc;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00565bc0(puVar10);
    local_cc = &PTR_LAB_007e4b94;
    piVar14 = local_c8;
    while (piVar14 != (int *)0x0) {
      piVar4 = (int *)piVar14[2];
      FUN_00796cd8(piVar14);
      piVar14 = piVar4;
    }
    local_c8 = (int *)0x0;
    local_c4 = 0;
    local_c0 = 0;
    local_b4 = &PTR_LAB_007e4b94;
    piVar14 = local_b0;
    while (piVar14 != (int *)0x0) {
      piVar4 = (int *)piVar14[2];
      FUN_00796cd8(piVar14);
      piVar14 = piVar4;
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}


