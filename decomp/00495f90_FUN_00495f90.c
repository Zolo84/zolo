// FUN_00495f90 @ 495f90 size=1567

undefined4 __thiscall FUN_00495f90(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined2 *puVar14;
  uint uVar15;
  int *piVar16;
  char *pcVar17;
  int *local_f8;
  undefined **local_ec;
  int *local_e8;
  int *local_e4;
  int local_e0;
  undefined1 local_dc;
  undefined4 *local_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined2 uStack_d0;
  undefined2 local_cc;
  undefined2 uStack_ca;
  undefined2 uStack_c8;
  float local_c4;
  undefined4 *local_c0;
  undefined **local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  char local_98 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bdc3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar6 = FUN_0042e980();
  if (cVar6 != '\0') {
    iVar9 = *(int *)(param_2 + 4);
    cVar6 = *(char *)(iVar9 + 0x13);
    iVar13 = *(int *)(iVar9 + 0xe);
    cVar1 = *(char *)(iVar9 + 0x12);
    iVar9 = *(int *)(iVar9 + 0x14);
    if (0 < (int)DAT_0087769c) {
      pcVar17 = local_98;
      for (uVar15 = DAT_0087769c >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        pcVar17[0] = '\0';
        pcVar17[1] = '\0';
        pcVar17[2] = '\0';
        pcVar17[3] = '\0';
        pcVar17 = pcVar17 + 4;
      }
      for (uVar15 = DAT_0087769c & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar17 = '\0';
        pcVar17 = pcVar17 + 1;
      }
    }
    if (iVar13 < 0) {
      if (iVar13 == -1) {
        iVar13 = 0;
        if (0 < (int)DAT_0087769c) {
          piVar16 = &DAT_00dbd1a2;
          do {
            if (*piVar16 < 0xc) {
              local_98[iVar13] = '\x01';
            }
            iVar13 = iVar13 + 1;
            piVar16 = piVar16 + 1;
          } while (iVar13 < (int)DAT_0087769c);
        }
      }
      else if (iVar13 == -2) {
        iVar13 = 0;
        if (0 < (int)DAT_0087769c) {
          piVar16 = &DAT_00dbd1a2;
          do {
            if ((0x14 < *piVar16) && (*piVar16 != 0x8c)) {
              local_98[iVar13] = '\x01';
            }
            iVar13 = iVar13 + 1;
            piVar16 = piVar16 + 1;
          } while (iVar13 < (int)DAT_0087769c);
        }
      }
      else if ((iVar13 == -3) && (iVar13 = 0, 0 < (int)DAT_0087769c)) {
        piVar16 = &DAT_00dbd1a2;
        uVar15 = DAT_0087769c;
        do {
          if ((0xb < *piVar16) &&
             (cVar7 = FUN_004581d0(iVar13), uVar15 = DAT_0087769c, cVar7 == '\0')) {
            local_98[iVar13] = '\x01';
          }
          iVar13 = iVar13 + 1;
          piVar16 = piVar16 + 1;
        } while (iVar13 < (int)uVar15);
      }
    }
    else {
      local_98[iVar13] = '\x01';
    }
    local_b8 = (int *)0x0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_bc = &PTR_LAB_007e4b94;
    local_e8 = (int *)0x0;
    local_e4 = (int *)0x0;
    local_e0 = 0;
    local_dc = 0;
    local_ec = &PTR_LAB_007e4b94;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    FUN_00468710(&local_bc,1);
    piVar16 = local_b8;
    while (piVar16 != (int *)0x0) {
      piVar2 = (int *)piVar16[2];
      iVar13 = *piVar16;
      piVar16 = piVar2;
      if ((*(char *)(iVar13 + 0x154) == '\0') && (local_98[*(int *)(iVar13 + 0x130)] != '\0')) {
        FUN_004965e0(iVar13,&local_ec,1);
      }
    }
    piVar16 = *(int **)(param_1 + 0x4508);
    while (piVar16 != (int *)0x0) {
      piVar2 = (int *)piVar16[2];
      iVar13 = *piVar16;
      iVar8 = FUN_00522770();
      piVar16 = piVar2;
      if (iVar8 == param_1) {
        piVar2 = *(int **)(iVar13 + 0x26);
        while (piVar2 != (int *)0x0) {
          piVar3 = (int *)piVar2[2];
          iVar13 = *piVar2;
          piVar2 = piVar3;
          if (local_98[*(int *)(iVar13 + 0x130)] != '\0') {
            FUN_004965e0(iVar13,&local_ec,1);
          }
        }
      }
    }
    piVar16 = *(int **)(param_1 + 0x451c);
    while (piVar16 != (int *)0x0) {
      piVar2 = (int *)piVar16[2];
      iVar13 = *piVar16;
      piVar16 = piVar2;
      if ((((*(char *)(iVar13 + 0x154) == '\0') && (*(int *)(iVar13 + 0x130) != 0x8c)) &&
          (local_98[*(int *)(iVar13 + 0x130)] != '\0')) &&
         ((*(int *)(iVar13 + 0x58) == *(int *)(param_1 + 6) || (*(int *)(iVar13 + 0x58) == 0)))) {
        FUN_004965e0(iVar13,&local_ec,1);
      }
    }
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    else {
      iVar9 = local_e0 - iVar9;
    }
    if (0 < iVar9) {
      local_c4 = *(float *)(param_1 + 0x39cc);
      piVar16 = local_e8;
      if (cVar1 != '\0') {
        piVar16 = local_e4;
      }
      while ((piVar16 != (int *)0x0 && (iVar9 != 0))) {
        if (cVar1 == '\0') {
          local_f8 = (int *)piVar16[2];
        }
        else {
          local_f8 = (int *)piVar16[1];
        }
        iVar13 = *piVar16;
        iVar9 = iVar9 + -1;
        iVar8 = *(int *)(iVar13 + 0x6c);
        puVar10 = operator_new(0xc);
        local_4._0_1_ = 2;
        local_c0 = puVar10;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          local_cc = DAT_0088f28c;
          uStack_ca = (undefined2)DAT_0088f28e;
          uStack_c8 = (undefined2)((uint)DAT_0088f28e >> 0x10);
          local_d8 = operator_new(0x20);
          local_4._0_1_ = 3;
          if (local_d8 == (undefined4 *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = FUN_004998b0();
          }
          FUN_0042d320(uVar11);
          *puVar10 = &PTR_FUN_007e61a0;
          *(undefined1 *)((int)puVar10 + 10) = 0;
          *(undefined2 *)puVar10[1] = 0x6c;
          iVar4 = puVar10[1];
          *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 4);
          *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(param_1 + 8);
          puVar12 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar4 = puVar10[1];
          *(undefined4 *)(iVar4 + 2) = *puVar12;
          *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar12 + 1);
          iVar4 = puVar10[1];
          *puVar10 = &PTR_FUN_007e6180;
          *(undefined4 *)(iVar4 + 0xe) = *(undefined4 *)(iVar13 + 0xc);
          *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(iVar13 + 0x10);
          iVar13 = puVar10[1];
          *(uint *)(iVar13 + 0x14) = CONCAT22(uStack_ca,local_cc);
          *(undefined2 *)(iVar13 + 0x18) = uStack_c8;
          *(char *)(puVar10[1] + 0x1a) = cVar6;
          *(undefined4 *)(puVar10[1] + 0x1c) = 0;
        }
        local_4._0_1_ = 1;
        FUN_00565bc0(puVar10);
        piVar16 = local_f8;
        if ((iVar8 != 0) && (iVar13 = (**(code **)(*(int *)(iVar8 + 0x22) + 4))(), iVar13 == 0)) {
          puVar10 = operator_new(0xc);
          local_4._0_1_ = 4;
          local_d8 = puVar10;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            uStack_d4 = DAT_0088f28c;
            uStack_d2 = (undefined2)DAT_0088f28e;
            uStack_d0 = (undefined2)((uint)DAT_0088f28e >> 0x10);
            local_c0 = operator_new(0x20);
            local_4._0_1_ = 5;
            if (local_c0 == (undefined4 *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_004666c0();
            }
            FUN_0042d320(uVar11);
            *puVar10 = &PTR_FUN_007e5e5c;
            *(undefined1 *)((int)puVar10 + 10) = 0;
            *(undefined2 *)puVar10[1] = 0x41;
            iVar13 = puVar10[1];
            *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(param_1 + 4);
            *(undefined2 *)(iVar13 + 0xc) = *(undefined2 *)(param_1 + 8);
            puVar12 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar13 = puVar10[1];
            *(undefined4 *)(iVar13 + 2) = *puVar12;
            *(undefined2 *)(iVar13 + 6) = *(undefined2 *)(puVar12 + 1);
            iVar13 = puVar10[1];
            *puVar10 = &PTR_FUN_007e5370;
            *(undefined4 *)(iVar13 + 0xe) = *(undefined4 *)(iVar8 + 0x18);
            *(undefined2 *)(iVar13 + 0x12) = *(undefined2 *)(iVar8 + 0x1c);
            *(undefined1 *)(puVar10[1] + 0x14) = 1;
            *(undefined1 *)(puVar10[1] + 0x15) = 0;
            *(undefined4 *)(puVar10[1] + 0x16) = 0;
            iVar13 = puVar10[1];
            *(uint *)(iVar13 + 0x1a) = CONCAT22(uStack_d2,uStack_d4);
            *(undefined2 *)(iVar13 + 0x1e) = uStack_d0;
          }
          local_4._0_1_ = 1;
          FUN_00565bc0(puVar10);
        }
      }
      if (cVar6 == '\0') {
        puVar10 = operator_new(0xc);
        local_4._0_1_ = 6;
        local_d8 = puVar10;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          fVar5 = *(float *)(param_1 + 0x39cc);
          puVar14 = operator_new(0x12);
          if (puVar14 == (undefined2 *)0x0) {
            puVar14 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d2d0();
            puVar14[4] = 0;
            *(undefined4 *)(puVar14 + 5) = 0;
          }
          puVar10[1] = puVar14;
          *(undefined1 *)(puVar10 + 2) = 0;
          *(undefined1 *)((int)puVar10 + 9) = 1;
          *puVar10 = &PTR_FUN_007e6e0c;
          *(undefined1 *)((int)puVar10 + 10) = 0;
          *puVar14 = 99;
          iVar9 = puVar10[1];
          *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(param_1 + 4);
          *(undefined2 *)(iVar9 + 0xc) = *(undefined2 *)(param_1 + 8);
          puVar12 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar9 = puVar10[1];
          *(undefined4 *)(iVar9 + 2) = *puVar12;
          *(undefined2 *)(iVar9 + 6) = *(undefined2 *)(puVar12 + 1);
          *puVar10 = &PTR_FUN_007e6dec;
          *(float *)(puVar10[1] + 0xe) = local_c4 - fVar5;
        }
        local_4._0_1_ = 1;
        FUN_00565bc0(puVar10);
      }
    }
    local_ec = &PTR_LAB_007e4b94;
    piVar16 = local_e8;
    while (piVar16 != (int *)0x0) {
      piVar2 = (int *)piVar16[2];
      FUN_00796cd8(piVar16);
      piVar16 = piVar2;
    }
    local_e8 = (int *)0x0;
    local_e4 = (int *)0x0;
    local_e0 = 0;
    local_bc = &PTR_LAB_007e4b94;
    piVar16 = local_b8;
    while (piVar16 != (int *)0x0) {
      piVar2 = (int *)piVar16[2];
      FUN_00796cd8(piVar16);
      piVar16 = piVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}


