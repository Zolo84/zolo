// FUN_00495240 @ 495240 size=3045

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00495240(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined2 uVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  int *piVar18;
  char *pcVar19;
  float10 fVar20;
  float local_124;
  float local_120;
  float local_114;
  float local_110;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined2 uStack_108;
  float local_104;
  uint local_fc;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  float local_e4;
  undefined **local_e0;
  int *local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined **local_cc;
  int *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  char local_98 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bdbd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar9 = FUN_0042e980();
  if (cVar9 != '\0') {
    iVar12 = *(int *)(param_2 + 4);
    local_114 = *(float *)(iVar12 + 0x12);
    iVar13 = *(int *)(iVar12 + 0x16);
    fVar4 = *(float *)(iVar12 + 0xe) * _DAT_007e4088;
    cVar9 = *(char *)(iVar12 + 0x1a);
    cVar1 = *(char *)(iVar12 + 0x1b);
    local_c8 = (int *)0x0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_cc = &PTR_LAB_007e4b94;
    local_dc = (int *)0x0;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    local_e0 = &PTR_LAB_007e4b94;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    FUN_00468710(&local_cc,1);
    piVar18 = local_c8;
    while (piVar18 != (int *)0x0) {
      piVar2 = (int *)piVar18[2];
      iVar12 = *piVar18;
      piVar18 = piVar2;
      if (*(char *)(iVar12 + 0x154) == '\0') {
        FUN_00483c60(iVar12,&local_e0,0);
      }
    }
    piVar18 = *(int **)(param_1 + 0x4508);
    while (piVar18 != (int *)0x0) {
      piVar2 = (int *)piVar18[2];
      iVar12 = *piVar18;
      iVar10 = FUN_00522770();
      piVar18 = piVar2;
      if (iVar10 == param_1) {
        puVar11 = *(undefined4 **)(iVar12 + 0x26);
        while (puVar11 != (undefined4 *)0x0) {
          puVar15 = (undefined4 *)puVar11[2];
          FUN_00483c60(*puVar11,&local_e0,0);
          puVar11 = puVar15;
        }
      }
    }
    piVar18 = *(int **)(param_1 + 0x451c);
    while (piVar18 != (int *)0x0) {
      piVar2 = (int *)piVar18[2];
      iVar12 = *piVar18;
      piVar18 = piVar2;
      if (((*(char *)(iVar12 + 0x154) == '\0') && (*(int *)(iVar12 + 0x130) != 0x8c)) &&
         ((*(int *)(iVar12 + 0x58) == *(int *)(param_1 + 6) || (*(int *)(iVar12 + 0x58) == 0)))) {
        FUN_00483c60(iVar12,&local_e0,0);
      }
    }
    if (0 < (int)DAT_0087769c) {
      pcVar19 = local_98;
      for (uVar17 = DAT_0087769c >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        pcVar19[0] = '\0';
        pcVar19[1] = '\0';
        pcVar19[2] = '\0';
        pcVar19[3] = '\0';
        pcVar19 = pcVar19 + 4;
      }
      for (uVar17 = DAT_0087769c & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar19 = '\0';
        pcVar19 = pcVar19 + 1;
      }
    }
    if (iVar13 < 0) {
      if (iVar13 == -1) {
        if (0 < (int)DAT_0087769c) {
          uVar17 = DAT_0087769c >> 2;
          pcVar19 = local_98;
          while (uVar17 != 0) {
            uVar17 = uVar17 - 1;
            builtin_strncpy(pcVar19,"\x01\x01\x01\x01",4);
            pcVar19 = pcVar19 + 4;
          }
          for (uVar17 = DAT_0087769c & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            *pcVar19 = '\x01';
            pcVar19 = pcVar19 + 1;
          }
        }
      }
      else if (iVar13 == -2) {
        iVar12 = 0;
        if (0 < (int)DAT_0087769c) {
          piVar18 = &DAT_00dbd1a2;
          do {
            if (*piVar18 < 0xc) {
              local_98[iVar12] = '\x01';
            }
            iVar12 = iVar12 + 1;
            piVar18 = piVar18 + 1;
          } while (iVar12 < (int)DAT_0087769c);
        }
      }
      else if (iVar13 == -3) {
        iVar12 = 0;
        if (0 < (int)DAT_0087769c) {
          piVar18 = &DAT_00dbd1a2;
          do {
            iVar13 = *piVar18;
            if ((0xb < iVar13) && ((iVar13 < 0x15 || (iVar13 == 0x8c)))) {
              local_98[iVar12] = '\x01';
            }
            iVar12 = iVar12 + 1;
            piVar18 = piVar18 + 1;
          } while (iVar12 < (int)DAT_0087769c);
        }
      }
      else if ((iVar13 == -4) && (iVar12 = 0, 0 < (int)DAT_0087769c)) {
        piVar18 = &DAT_00dbd1a2;
        do {
          if ((0x14 < *piVar18) && (*piVar18 != 0x8c)) {
            local_98[iVar12] = '\x01';
          }
          iVar12 = iVar12 + 1;
          piVar18 = piVar18 + 1;
        } while (iVar12 < (int)DAT_0087769c);
      }
    }
    else {
      local_98[iVar13] = '\x01';
    }
    if ((cVar1 == '\0') || (piVar18 = local_dc, fVar4 != _DAT_007e3380)) {
      local_110 = *(float *)(param_1 + 0x39cc);
      local_104 = 0.0;
      local_124 = 0.0;
      fVar5 = ABS(local_114 / fVar4);
      local_fc = (uint)(local_114 != _DAT_007e3374);
      fVar6 = (float)local_fc;
      piVar18 = local_dc;
joined_r0x004956e1:
      while( true ) {
        do {
          if (piVar18 == (int *)0x0) {
            if ((cVar9 != '\0') && (local_110 != *(float *)(param_1 + 0x39cc))) {
              puVar11 = operator_new(0xc);
              local_4._0_1_ = 0xc;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                fVar4 = *(float *)(param_1 + 0x39cc);
                puVar16 = operator_new(0x12);
                if (puVar16 == (undefined2 *)0x0) {
                  puVar16 = (undefined2 *)0x0;
                }
                else {
                  puVar16[3] = 0;
                  *(undefined1 *)(puVar16 + 2) = 0;
                  *(undefined1 *)((int)puVar16 + 3) = 0;
                  *(undefined1 *)(puVar16 + 1) = 0;
                  puVar16[4] = 0;
                  *(undefined4 *)(puVar16 + 5) = 0;
                }
                puVar11[1] = puVar16;
                *(undefined1 *)(puVar11 + 2) = 0;
                *(undefined1 *)((int)puVar11 + 9) = 1;
                *puVar11 = &PTR_FUN_007e6e0c;
                *(undefined1 *)((int)puVar11 + 10) = 0;
                *puVar16 = 99;
                iVar12 = puVar11[1];
                *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(param_1 + 4);
                *(undefined2 *)(iVar12 + 0xc) = *(undefined2 *)(param_1 + 8);
                iVar12 = puVar11[1];
                *(uint *)(iVar12 + 2) = (uint)puVar11 & 0xff000000;
                *(undefined2 *)(iVar12 + 6) = 0;
                *puVar11 = &PTR_FUN_007e6dec;
                *(float *)(puVar11[1] + 0xe) = local_110 - fVar4;
              }
              local_4._0_1_ = 1;
              FUN_00565bc0(puVar11);
            }
            local_e0 = &PTR_LAB_007e4b94;
            piVar18 = local_dc;
            while (piVar18 != (int *)0x0) {
              piVar2 = (int *)piVar18[2];
              FUN_00796cd8(piVar18);
              piVar18 = piVar2;
            }
            local_dc = (int *)0x0;
            local_d8 = 0;
            local_d4 = 0;
            local_cc = &PTR_LAB_007e4b94;
            piVar18 = local_c8;
            while (piVar18 != (int *)0x0) {
              piVar2 = (int *)piVar18[2];
              FUN_00796cd8(piVar18);
              piVar18 = piVar2;
            }
            ExceptionList = local_c;
            return 0;
          }
          iVar12 = *piVar18;
          piVar18 = (int *)piVar18[2];
        } while (local_98[*(int *)(iVar12 + 0x130)] == '\0');
        fVar3 = *(float *)(iVar12 + 0xec);
        local_e4 = 0.0;
        if (cVar9 != '\0') {
          iVar13 = FUN_0044c620(*(int *)(iVar12 + 0x130));
          iVar10 = FUN_0044c3d0(*(undefined4 *)(iVar12 + 0x130),*(undefined4 *)(iVar12 + 0x138));
          local_e4 = (*(float *)(iVar13 + 0x14) + *(float *)(iVar10 + 0x14)) * _DAT_007e543c;
        }
        if (cVar1 == '\0') {
          local_120 = fVar3 + fVar4;
          if (*(float *)(iVar12 + 0xf0) < local_120) {
            local_120 = *(float *)(iVar12 + 0xf0);
          }
          local_104 = *(float *)(iVar12 + 0xf4);
        }
        else {
          local_120 = *(float *)(iVar12 + 0xf0);
          if (fVar4 < local_120) {
            local_120 = fVar4;
          }
          if (local_114 <= _DAT_007e3374) {
            if (_DAT_007e3380 < local_114) {
              fVar20 = (float10)FUN_004fd510();
              local_124 = (float)(fVar20 * (float10)local_114);
            }
            else {
              local_124 = 0.0;
            }
          }
          else {
            fVar20 = (float10)FUN_004fd510();
            local_124 = (float)fVar20;
          }
        }
        if (local_120 < _DAT_007e3374) {
          local_120 = 1.0;
        }
        if (local_120 < fVar3) break;
        if (local_120 <= fVar3) goto LAB_00495c0d;
        fVar7 = (local_120 - fVar3) * local_e4;
        if (fVar7 <= local_110) {
          local_110 = local_110 - fVar7;
          if ((cVar1 == '\0') && (local_124 = local_104, fVar6 != _DAT_007e3380)) {
            local_124 = (_DAT_007e3374 - (local_120 - fVar3) * fVar5) * local_104;
            fVar20 = (float10)FUN_004fd510();
            if ((float10)local_114 <= fVar20) {
              if (local_114 < _DAT_007e3380) {
                local_114 = 0.0;
              }
            }
            else {
              fVar20 = (float10)FUN_004fd510();
              local_124 = (float)fVar20;
            }
          }
          puVar11 = operator_new(0xc);
          local_4._0_1_ = 6;
          if (puVar11 == (undefined4 *)0x0) goto LAB_00495cb1;
          pvVar14 = operator_new(0x18);
          local_4._0_1_ = 7;
          if (pvVar14 == (void *)0x0) {
            pvVar14 = (void *)0x0;
          }
          else {
            FUN_0042d6c0();
          }
          FUN_0042d320(pvVar14);
          *puVar11 = &PTR_FUN_007e6e4c;
          *(undefined1 *)((int)puVar11 + 10) = 0;
          *(undefined2 *)puVar11[1] = 0x13e;
          iVar13 = puVar11[1];
          *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar12 + 0xc);
          *(undefined2 *)(iVar13 + 0xc) = *(undefined2 *)(iVar12 + 0x10);
          goto LAB_00495a63;
        }
        fVar7 = local_110 / local_e4 + fVar3;
        if ((cVar1 == '\0') && (local_124 = local_104, fVar6 != _DAT_007e3380)) {
          local_124 = (_DAT_007e3374 - (fVar7 - fVar3) * fVar5) * local_104;
          fVar20 = (float10)FUN_004fd510();
          if ((float10)local_114 <= fVar20) {
            if (local_114 < _DAT_007e3380) {
              local_114 = 0.0;
            }
          }
          else {
            fVar20 = (float10)FUN_004fd510();
            local_124 = (float)fVar20;
          }
        }
        puVar11 = operator_new(0xc);
        local_4._0_1_ = 8;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          pvVar14 = operator_new(0x18);
          local_4._0_1_ = 9;
          if (pvVar14 == (void *)0x0) {
            pvVar14 = (void *)0x0;
          }
          else {
            FUN_0042d6c0();
          }
          FUN_0042d320(pvVar14);
          *puVar11 = &PTR_FUN_007e6e4c;
          *(undefined1 *)((int)puVar11 + 10) = 0;
          *(undefined2 *)puVar11[1] = 0x13e;
          iVar13 = puVar11[1];
          *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar12 + 0xc);
          *(undefined2 *)(iVar13 + 0xc) = *(undefined2 *)(iVar12 + 0x10);
          puVar15 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar12 = puVar11[1];
          *(undefined4 *)(iVar12 + 2) = *puVar15;
          *(undefined2 *)(iVar12 + 6) = *(undefined2 *)(puVar15 + 1);
          *puVar11 = &PTR_FUN_007e6e2c;
          *(float *)(puVar11[1] + 0xe) = fVar7;
          *(float *)(puVar11[1] + 0x12) = local_124;
          *(undefined1 *)(puVar11[1] + 0x16) = 1;
          *(undefined1 *)(puVar11[1] + 0x17) = 1;
        }
        local_4._0_1_ = 1;
        FUN_00565bc0(puVar11);
        local_110 = 0.0;
      }
      local_110 = (fVar3 - local_120) * local_e4 + local_110;
      if ((cVar1 == '\0') && (local_124 = local_104, fVar6 != _DAT_007e3380)) {
        local_124 = (_DAT_007e3374 - (fVar3 - local_120) * fVar5) * local_104;
        fVar20 = (float10)FUN_004fd510();
        if ((float10)local_114 <= fVar20) {
          if (local_114 < _DAT_007e3380) {
            local_114 = 0.0;
          }
        }
        else {
          fVar20 = (float10)FUN_004fd510();
          local_124 = (float)fVar20;
        }
      }
      puVar11 = operator_new(0xc);
      local_4._0_1_ = 4;
      if (puVar11 == (undefined4 *)0x0) goto LAB_00495cb1;
      pvVar14 = operator_new(0x18);
      local_4._0_1_ = 5;
      if (pvVar14 == (void *)0x0) {
        pvVar14 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
      }
      FUN_0042d320(pvVar14);
      *puVar11 = &PTR_FUN_007e6e4c;
      *(undefined1 *)((int)puVar11 + 10) = 0;
      *(undefined2 *)puVar11[1] = 0x13e;
      iVar13 = puVar11[1];
      *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar12 + 0xc);
      *(undefined2 *)(iVar13 + 0xc) = *(undefined2 *)(iVar12 + 0x10);
LAB_00495a63:
      puVar15 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar12 = puVar11[1];
      *(undefined4 *)(iVar12 + 2) = *puVar15;
      *(undefined2 *)(iVar12 + 6) = *(undefined2 *)(puVar15 + 1);
      goto LAB_00495a7a;
    }
    while (piVar18 != (int *)0x0) {
      iVar12 = *piVar18;
      piVar18 = (int *)piVar18[2];
      if (local_98[*(int *)(iVar12 + 0x130)] != '\0') {
        iVar13 = *(int *)(iVar12 + 0x6c);
        puVar11 = operator_new(0xc);
        uVar8 = DAT_0088f28c;
        local_4._0_1_ = 2;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          uStack_10a = (undefined1)DAT_0088f28e;
          uStack_109 = (undefined1)((uint)DAT_0088f28e >> 8);
          uStack_108 = (undefined2)((uint)DAT_0088f28e >> 0x10);
          FUN_00498970(0x6c,param_1 + 4);
          iVar10 = puVar11[1];
          *puVar11 = &PTR_FUN_007e6180;
          *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar12 + 0xc);
          *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar12 + 0x10);
          iVar12 = puVar11[1];
          *(uint *)(iVar12 + 0x14) = CONCAT13(uStack_109,CONCAT12(uStack_10a,uVar8));
          *(undefined2 *)(iVar12 + 0x18) = uStack_108;
          *(char *)(puVar11[1] + 0x1a) = cVar9;
          *(undefined4 *)(puVar11[1] + 0x1c) = 0;
        }
        local_4._0_1_ = 1;
        FUN_00565bc0(puVar11);
        if ((iVar13 != 0) && (iVar12 = (**(code **)(*(int *)(iVar13 + 0x22) + 4))(), iVar12 == 0)) {
          puVar11 = operator_new(0xc);
          uVar8 = DAT_0088f28c;
          local_4._0_1_ = 3;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)0x0;
          }
          else {
            uStack_ea = (undefined2)DAT_0088f28e;
            uStack_e8 = (undefined2)((uint)DAT_0088f28e >> 0x10);
            FUN_00458490(0x41,param_1 + 4);
            iVar12 = puVar11[1];
            *puVar11 = &PTR_FUN_007e5370;
            *(undefined4 *)(iVar12 + 0xe) = *(undefined4 *)(iVar13 + 0x18);
            *(undefined2 *)(iVar12 + 0x12) = *(undefined2 *)(iVar13 + 0x1c);
            *(undefined1 *)(puVar11[1] + 0x14) = 1;
            *(undefined1 *)(puVar11[1] + 0x15) = 0;
            *(undefined4 *)(puVar11[1] + 0x16) = 0;
            iVar12 = puVar11[1];
            *(uint *)(iVar12 + 0x1a) = CONCAT22(uStack_ea,uVar8);
            *(undefined2 *)(iVar12 + 0x1e) = uStack_e8;
          }
          local_4._0_1_ = 1;
          FUN_00565bc0(puVar11);
        }
      }
    }
    local_e0 = &PTR_LAB_007e4b94;
    piVar18 = local_dc;
    while (piVar18 != (int *)0x0) {
      piVar2 = (int *)piVar18[2];
      FUN_00796cd8(piVar18);
      piVar18 = piVar2;
    }
    local_dc = (int *)0x0;
    local_d8 = 0;
    local_d4 = 0;
    local_cc = &PTR_LAB_007e4b94;
    piVar18 = local_c8;
    while (piVar18 != (int *)0x0) {
      piVar2 = (int *)piVar18[2];
      FUN_00796cd8(piVar18);
      piVar18 = piVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
LAB_00495c0d:
  if (cVar1 != '\0') {
    puVar11 = operator_new(0xc);
    local_4._0_1_ = 10;
    if (puVar11 == (undefined4 *)0x0) {
LAB_00495cb1:
      puVar11 = (undefined4 *)0x0;
    }
    else {
      pvVar14 = operator_new(0x18);
      local_4._0_1_ = 0xb;
      if (pvVar14 == (void *)0x0) {
        pvVar14 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
      }
      FUN_0042d320(pvVar14);
      *puVar11 = &PTR_FUN_007e6e4c;
      *(undefined1 *)((int)puVar11 + 10) = 0;
      *(undefined2 *)puVar11[1] = 0x13e;
      iVar13 = puVar11[1];
      *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar12 + 0xc);
      *(undefined2 *)(iVar13 + 0xc) = *(undefined2 *)(iVar12 + 0x10);
      puVar15 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar12 = puVar11[1];
      *(undefined4 *)(iVar12 + 2) = *puVar15;
      *(undefined2 *)(iVar12 + 6) = *(undefined2 *)(puVar15 + 1);
LAB_00495a7a:
      *puVar11 = &PTR_FUN_007e6e2c;
      *(float *)(puVar11[1] + 0xe) = local_120;
      *(float *)(puVar11[1] + 0x12) = local_124;
      *(undefined1 *)(puVar11[1] + 0x16) = 1;
      *(undefined1 *)(puVar11[1] + 0x17) = 1;
    }
    local_4._0_1_ = 1;
    FUN_00565bc0(puVar11);
  }
  goto joined_r0x004956e1;
}


