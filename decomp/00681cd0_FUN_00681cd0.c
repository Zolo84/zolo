// FUN_00681cd0 @ 681cd0 size=3290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00681cd0(int *param_1)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  undefined2 *puVar13;
  int *piVar14;
  float fVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  float *pfVar19;
  bool bVar20;
  float10 fVar21;
  undefined2 uStackY_88;
  undefined2 uStackY_86;
  undefined2 uStackY_84;
  undefined2 uStackY_82;
  int *piStackY_80;
  undefined4 uStackY_7c;
  int *local_64;
  int *local_60;
  int local_5c;
  undefined4 *local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_3c;
  undefined2 uStack_38;
  int *local_34;
  float local_30;
  float local_2c;
  int local_28;
  int *local_24;
  undefined4 *local_20;
  float *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d4bd6;
  local_10 = ExceptionList;
  iVar11 = *(int *)(param_1[7] + 0x120);
  ExceptionList = &local_10;
  local_18 = param_1;
  (**(code **)(*(int *)((int)param_1 + 0x12a) + 0x10))();
  fVar15 = (float)param_1[1];
  while (fVar15 != 0.0) {
    fVar15 = *(float *)((int)fVar15 + 8);
    uStackY_7c._0_2_ = 0x1d2c;
    uStackY_7c._2_2_ = 0x68;
    local_30 = fVar15;
    local_34 = (int *)FUN_004e9370();
    local_28 = 0;
    if (0 < local_34[0xa4]) {
      local_20 = (undefined4 *)0x0;
      do {
        if (*(int *)(local_34[0xa6] + (int)local_20 + 4) != 4) {
          uStackY_7c._0_2_ = 0x1d6b;
          uStackY_7c._2_2_ = 0x68;
          iVar6 = FUN_004e9370();
          if (((*(int *)(iVar6 + 0x254) != 8) && (*(int *)(iVar6 + 0x254) != 9)) &&
             (*(int *)(iVar6 + 0x3d8) != 0)) {
            uStackY_7c._0_2_ = 0x1d9f;
            uStackY_7c._2_2_ = 0x68;
            cVar5 = FUN_004e9500();
            if ((cVar5 == '\0') && (*(int *)(iVar6 + 0x3d8) != 0)) {
              if (*(int *)(iVar6 + 0x3d8) != param_1[7]) {
                FUN_006a9d50();
                uStackY_7c._0_2_ = 0x1dca;
                uStackY_7c._2_2_ = 0x68;
                cVar5 = FUN_0044b300();
                if (cVar5 == '\0') goto LAB_00681e45;
              }
              uStackY_7c._0_2_ = 0x1dd9;
              uStackY_7c._2_2_ = 0x68;
              cVar5 = FUN_006813e0();
              if (cVar5 == '\0') {
                uStackY_7c._0_2_ = 0x1df2;
                uStackY_7c._2_2_ = 0x68;
                cVar5 = (**(code **)(*(int *)((int)param_1 + 0x12a) + 0x24))();
                if (cVar5 == '\0') {
                  piVar12 = *(int **)(iVar6 + 0x12);
                  iVar6 = *(int *)((int)param_1 + 0x132);
                  uStackY_7c._0_2_ = 0x1e03;
                  uStackY_7c._2_2_ = 0x68;
                  pvVar7 = operator_new(0xe);
                  local_3c._0_2_ = SUB42(pvVar7,0);
                  local_3c._2_2_ = (undefined2)((uint)pvVar7 >> 0x10);
                  local_8 = 0;
                  if (pvVar7 == (void *)0x0) {
                    uVar8 = 0;
                  }
                  else {
                    uStackY_7c._0_2_ = (undefined2)iVar6;
                    uStackY_7c._2_2_ = (undefined2)((uint)iVar6 >> 0x10);
                    uStackY_84 = 0x1e1f;
                    uStackY_82 = 0x68;
                    piStackY_80 = piVar12;
                    uVar8 = FUN_0049a7a0();
                  }
                  iVar9 = *(int *)((int)param_1 + 0x136);
                  local_8 = 0xffffffff;
                  *(undefined4 *)((int)param_1 + 0x132) = uVar8;
                  *(int *)((int)param_1 + 0x136) = iVar9 + 1;
                  if (iVar9 == 0) {
                    *(undefined4 *)((int)param_1 + 0x12e) = uVar8;
                    param_1 = local_18;
                  }
                  else {
                    *(undefined4 *)(iVar6 + 8) = uVar8;
                    param_1 = local_18;
                  }
                }
              }
            }
          }
        }
LAB_00681e45:
        local_28 = local_28 + 1;
        local_20 = (undefined4 *)((int)local_20 + 0xc);
        fVar15 = local_30;
      } while (local_28 < local_34[0xa4]);
    }
  }
  iVar6 = (**(code **)(*(int *)((int)param_1 + 0x12a) + 4))();
  if (iVar6 == 0) {
    (**(code **)(param_1[0x32] + 0x10))();
    ExceptionList = local_10;
    return;
  }
  iVar6 = (**(code **)(*param_1 + 4))();
  local_20 = (undefined4 *)(iVar6 / 2);
  if ((int)local_20 < 1) {
    local_20 = (undefined4 *)0x1;
  }
  local_50 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  local_48 = 0;
  local_8 = 1;
  pfVar19 = *(float **)((int)param_1 + 0x12e);
joined_r0x00681ee2:
  puVar16 = local_4c;
  puVar4 = local_50;
  if (pfVar19 != (float *)0x0) {
    local_1c = (float *)pfVar19[2];
    local_30 = *pfVar19;
    uStackY_7c._0_2_ = 0x1efc;
    uStackY_7c._2_2_ = 0x68;
    iVar6 = FUN_004e9370();
    local_28 = 0;
    local_34 = (int *)0x0;
    for (puVar17 = puVar4; local_50 = puVar4, local_4c = puVar16, puVar17 != (undefined4 *)0x0;
        puVar17 = (undefined4 *)puVar17[2]) {
      uStackY_7c._0_2_ = (undefined2)*puVar17;
      uStackY_7c._2_2_ = (undefined2)((uint)*puVar17 >> 0x10);
      piStackY_80 = (int *)0x681f20;
      cVar5 = (*(code *)PTR_FUN_007e3798)();
      if (cVar5 != '\0') {
        pfVar19 = local_1c;
        if (puVar17 != (undefined4 *)0x0) goto joined_r0x00681ee2;
        break;
      }
    }
    local_2c = 0.0;
    pfVar19 = local_1c;
    if (0 < *(int *)(iVar6 + 0x290)) {
      local_24 = (int *)0x0;
      do {
        if (*(int *)((int)local_24 + *(int *)(iVar6 + 0x298) + 4) != 4) {
          uStackY_7c._0_2_ = 0x1f6a;
          uStackY_7c._2_2_ = 0x68;
          iVar9 = FUN_004e9370();
          uStackY_7c._0_2_ = 0x1f82;
          uStackY_7c._2_2_ = 0x68;
          cVar5 = (**(code **)(*(int *)((int)param_1 + 0x12a) + 0x24))();
          if (cVar5 != '\0') {
            local_28 = local_28 + 1;
            local_34 = *(int **)(iVar9 + 0x12);
          }
        }
        local_2c = (float)((int)local_2c + 1);
        local_24 = local_24 + 3;
      } while ((int)local_2c < *(int *)(iVar6 + 0x290));
      pfVar19 = local_1c;
      if (local_28 == 1) {
        iVar6 = (**(code **)(*(int *)((int)param_1 + 0x12a) + 4))();
        pfVar19 = local_1c;
        if (((int)local_20 < iVar6) && (*(float *)(param_1[7] + 0x117de) != local_30)) {
          uStackY_7c._0_2_ = 0x1fdf;
          uStackY_7c._2_2_ = 0x68;
          (**(code **)(*(int *)((int)param_1 + 0x12a) + 0x18))();
          uStackY_7c._0_2_ = 0x1fe9;
          uStackY_7c._2_2_ = 0x68;
          pvVar7 = operator_new(0xe);
          local_3c._0_2_ = SUB42(pvVar7,0);
          local_3c._2_2_ = (undefined2)((uint)pvVar7 >> 0x10);
          local_8._0_1_ = 2;
          if (pvVar7 == (void *)0x0) {
            local_4c = (undefined4 *)0x0;
          }
          else {
            uStackY_7c._0_2_ = SUB42(puVar16,0);
            uStackY_7c._2_2_ = (undefined2)((uint)puVar16 >> 0x10);
            piStackY_80 = local_34;
            uStackY_84 = 0x2005;
            uStackY_82 = 0x68;
            local_4c = (undefined4 *)FUN_0049a7a0();
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          iVar6 = local_48 + 1;
          bVar20 = local_48 != 0;
          pfVar19 = local_1c;
          local_50 = local_4c;
          local_48 = iVar6;
          if (bVar20) {
            puVar16[2] = local_4c;
            local_50 = puVar4;
          }
        }
      }
    }
    goto joined_r0x00681ee2;
  }
  local_1c = (float *)0x0;
  puVar16 = *(undefined4 **)((int)param_1 + 0x12e);
  while (puVar16 != (undefined4 *)0x0) {
    puVar17 = (undefined4 *)puVar16[2];
    local_34 = (int *)*puVar16;
    uStackY_7c._0_2_ = 0x204a;
    uStackY_7c._2_2_ = 0x68;
    local_30 = (float)FUN_004e9370();
    iVar6 = (**(code **)(*(int *)((int)param_1 + 0x12a) + 4))();
    puVar16 = puVar17;
    if ((((int)local_20 < iVar6) && (*(int **)(param_1[7] + 0x117de) != local_34)) &&
       ((iVar6 = *(int *)((int)local_30 + 0x254), iVar6 == 2 || ((iVar6 == 6 || (iVar6 == 4)))))) {
      uStackY_7c._0_2_ = 0x2093;
      uStackY_7c._2_2_ = 0x68;
      (**(code **)(*(int *)((int)param_1 + 0x12a) + 0x18))();
    }
  }
  iVar6 = (**(code **)(*(int *)((int)param_1 + 0x12a) + 4))();
  piVar12 = local_18;
  if ((int)local_20 < iVar6) {
    do {
      local_1c = *(float **)((int)piVar12 + 0x12e);
      local_2c = 0.0;
      local_30 = 1.4013e-40;
      piVar12 = local_18;
      while (local_18 = piVar12, local_1c != (float *)0x0) {
        fVar15 = *local_1c;
        local_1c = (float *)local_1c[2];
        local_3c._0_2_ = SUB42(fVar15,0);
        local_3c._2_2_ = (undefined2)((uint)fVar15 >> 0x10);
        uStackY_7c._0_2_ = 0x20e7;
        uStackY_7c._2_2_ = 0x68;
        iVar6 = FUN_004e9370();
        iVar9 = 0;
        local_24 = (int *)0x0;
        local_28 = 0;
        if (0 < *(int *)(iVar6 + 0x290)) {
          local_34 = (int *)0x0;
          do {
            if (*(int *)((int)local_34 + *(int *)(iVar6 + 0x298) + 4) != 4) {
              uStackY_7c._0_2_ = 0x2119;
              uStackY_7c._2_2_ = 0x68;
              FUN_004e9370();
              uStackY_7c._0_2_ = 0x2130;
              uStackY_7c._2_2_ = 0x68;
              cVar5 = (**(code **)(*(int *)((int)local_18 + 0x12a) + 0x24))();
              if (cVar5 != '\0') {
                local_24 = (int *)((int)local_24 + 1);
              }
              uStackY_7c._0_2_ = 0x2143;
              uStackY_7c._2_2_ = 0x68;
              cVar5 = FUN_006813e0();
              if (cVar5 != '\0') {
                local_28 = local_28 + 1;
              }
            }
            iVar9 = iVar9 + 1;
            local_34 = local_34 + 3;
          } while (iVar9 < *(int *)(iVar6 + 0x290));
          fVar15 = (float)CONCAT22(local_3c._2_2_,(undefined2)local_3c);
        }
        fVar10 = (float)(local_28 - (int)local_24);
        if (*(float *)(local_18[7] + 0x117de) == fVar15) {
          fVar10 = (float)((int)fVar10 + 5);
        }
        piVar12 = local_18;
        if ((int)fVar10 < (int)local_30) {
          local_2c = fVar15;
          local_30 = fVar10;
        }
      }
      uStackY_7c._0_2_ = 0x21a8;
      uStackY_7c._2_2_ = 0x68;
      (**(code **)(*(int *)((int)piVar12 + 0x12a) + 0x18))();
      uStackY_7c._0_2_ = 0x21af;
      uStackY_7c._2_2_ = 0x68;
      iVar6 = (**(code **)(*(int *)((int)piVar12 + 0x12a) + 4))();
    } while ((int)local_20 < iVar6);
  }
  piVar12 = local_18;
  iVar6 = FUN_00527b40();
  local_3c._0_2_ = (undefined2)iVar6;
  local_3c._2_2_ = (undefined2)((uint)iVar6 >> 0x10);
  local_34 = (int *)(float)iVar6;
  local_1c = (float *)(int)ROUND((float)local_34 * *(float *)(iVar11 + 0x960));
  local_64 = (int *)0x0;
  local_60 = (int *)0x0;
  local_5c = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar13 = (undefined2 *)piVar12[0x33];
  while (puVar13 != (undefined2 *)0x0) {
    puVar2 = *(undefined2 **)(puVar13 + 5);
    local_3c._0_2_ = *puVar13;
    local_3c._2_2_ = (undefined2)*(undefined4 *)(puVar13 + 1);
    uStack_38 = (undefined2)((uint)*(undefined4 *)(puVar13 + 1) >> 0x10);
    uStackY_7c._0_2_ = 0x2223;
    uStackY_7c._2_2_ = 0x68;
    iVar11 = FUN_00428ee0();
    puVar13 = puVar2;
    if ((iVar11 == 0) || (iVar11 + -0x14 == 0)) {
LAB_00682291:
      uStackY_7c._0_2_ = (undefined2)local_3c;
      uStackY_7c._2_2_ = local_3c._2_2_;
      piStackY_80 = (int *)0x6822b8;
      (**(code **)(local_18[0x32] + 0x18))();
    }
    else {
      uStackY_7c._0_2_ = 0x2240;
      uStackY_7c._2_2_ = 0x68;
      cVar5 = (**(code **)(local_18[0x28] + 0x24))();
      if (cVar5 == '\0') goto LAB_00682291;
      uStackY_7c._0_2_ = 0x224e;
      uStackY_7c._2_2_ = 0x68;
      piVar12 = operator_new(0xe);
      if (piVar12 == (int *)0x0) {
        piVar12 = (int *)0x0;
      }
      else {
        *piVar12 = iVar11 + -0x14;
        piVar12[1] = (int)local_60;
        piVar12[2] = 0;
        *(undefined1 *)(piVar12 + 3) = 0;
      }
      if (local_5c == 0) {
        FUN_0051cc00();
        local_64 = piVar12;
        local_60 = piVar12;
        local_5c = local_5c + 1;
      }
      else {
        local_60[2] = (int)piVar12;
        FUN_0051cc00();
        local_60 = piVar12;
        local_5c = local_5c + 1;
      }
    }
  }
  piVar12 = local_64;
  piVar14 = local_60;
  if (_DAT_007e3848 < (float)local_34) {
    while (local_60 = piVar14, local_64 = piVar12, iVar11 = FUN_00527b40(),
          iVar11 < (int)local_1c + -1) {
      local_24 = (int *)0x0;
      local_34 = (int *)0xc2480000;
      puVar16 = (undefined4 *)local_18[0x29];
      local_20 = puVar16;
      if (puVar16 == (undefined4 *)0x0) break;
      do {
        puVar17 = (undefined4 *)puVar16[2];
        piVar12 = (int *)*puVar16;
        local_20 = puVar17;
        if (piVar12[3] != 0) {
          FUN_0051b230();
          cVar5 = FUN_004e46e0();
          if ((((cVar5 == '\0') && (iVar11 = (**(code **)(piVar12[0x47] + 4))(), iVar11 == 0)) &&
              (*(char *)((int)piVar12 + 0x17b) == '\0')) &&
             (cVar5 = (**(code **)(*(int *)((int)piVar12 + 0x22e) + 8))(), piVar14 = local_64,
             cVar5 != '\0')) {
            for (; piVar14 != (int *)0x0; piVar14 = (int *)piVar14[2]) {
              uStackY_7c._0_2_ = (undefined2)*piVar14;
              uStackY_7c._2_2_ = (undefined2)((uint)*piVar14 >> 0x10);
              piStackY_80 = (int *)0x682391;
              cVar5 = (*(code *)PTR_FUN_007e4c90)();
              if (cVar5 != '\0') {
                if (piVar14 != (int *)0x0) goto LAB_0068244a;
                break;
              }
            }
            uStackY_7c._0_2_ = 0x23b2;
            uStackY_7c._2_2_ = 0x68;
            cVar5 = FUN_006813e0();
            if (cVar5 == '\0') {
LAB_00682415:
              (**(code **)(*piVar12 + 0x10))();
              fVar21 = (float10)FUN_00525b10();
              fVar21 = fVar21 + (float10)_DAT_007e3374;
              if (((float10)(float)local_34 < fVar21) && ((float10)_DAT_007e682c < fVar21)) {
                local_34 = (int *)(float)fVar21;
                local_24 = piVar12;
              }
            }
            else {
              iVar11 = piVar12[3];
              local_28 = 0;
              piVar14 = (int *)local_18[0x29];
              if ((int *)local_18[0x29] != (int *)0x0) {
                do {
                  piVar18 = (int *)piVar14[2];
                  iVar6 = *piVar14;
                  cVar5 = (**(code **)(*(int *)(iVar6 + 0x22e) + 8))();
                  if (((cVar5 != '\0') && (*(char *)(iVar6 + 0x17b) == '\0')) &&
                     (*(int *)(iVar6 + 0xc) == iVar11)) {
                    local_28 = local_28 + 1;
                  }
                  piVar14 = piVar18;
                } while (piVar18 != (int *)0x0);
                puVar17 = local_20;
                if (1 < local_28) goto LAB_00682415;
              }
            }
          }
        }
LAB_0068244a:
        piVar12 = local_24;
        puVar16 = puVar17;
      } while (puVar17 != (undefined4 *)0x0);
      if (local_24 == (int *)0x0) break;
      FUN_0051cc00();
      iVar11 = (**(code **)(*(int *)((int)piVar12 + 0x22) + 4))();
      iVar6 = FUN_00527b40();
      piVar18 = piVar12;
      if ((((int)local_1c < iVar11 + iVar6) &&
          (iVar11 = (**(code **)(*(int *)((int)piVar12 + 0x22) + 4))(), 1 < iVar11)) &&
         (iVar11 = local_18[7], iVar6 = FUN_00522770(), iVar6 == iVar11)) {
        (**(code **)(*piVar12 + 0x10))();
        local_30 = (float)FUN_00525a00();
        if (local_30 != 0.0) {
          iVar11 = piVar12[3];
          FUN_00522770();
          piStackY_80 = &local_3c;
          uStackY_7c._0_2_ = (undefined2)iVar11;
          uStackY_7c._2_2_ = (undefined2)((uint)iVar11 >> 0x10);
          uStackY_84 = 0x24de;
          uStackY_82 = 0x68;
          FUN_00689890();
          uStackY_7c._0_2_ = 0x24e7;
          uStackY_7c._2_2_ = 0x68;
          iVar11 = FUN_00428ee0();
          if (iVar11 == 0) {
            piVar18 = (int *)0x0;
          }
          else {
            piVar18 = (int *)(iVar11 + -0x14);
          }
          iVar11 = (**(code **)(*(int *)((int)piVar12 + 0x22) + 4))();
          while (1 < iVar11) {
            iVar11 = (**(code **)(*(int *)((int)piVar18 + 0x22) + 4))();
            iVar6 = FUN_00527b40();
            if (((int)local_1c < iVar11 + 1 + iVar6) || (local_30 == 0.0)) break;
            uStackY_7c._0_2_ = SUB42(piVar18,0);
            uStackY_7c._2_2_ = (undefined2)((uint)piVar18 >> 0x10);
            piStackY_80 = (undefined4 *)0x682533;
            FUN_0045e6c0();
            (**(code **)(*piVar12 + 0x10))();
            local_30 = (float)FUN_00525a00();
            iVar11 = (**(code **)(*(int *)((int)piVar12 + 0x22) + 4))();
          }
          (**(code **)(*(int *)((int)piVar18 + 0x22) + 4))();
          uStackY_7c._0_2_ = (undefined2)*(undefined4 *)((int)piVar18 + 0x1a);
          uStackY_7c._2_2_ = (undefined2)((uint)*(undefined4 *)((int)piVar18 + 0x1a) >> 0x10);
          piStackY_80 = (int *)0x682567;
          piStackY_80 = (int *)(**(code **)(*piVar18 + 0xc))();
          uStackY_84 = 0x7cc4;
          uStackY_82 = 0x86;
          uStackY_88 = 0x2572;
          uStackY_86 = 0x68;
          FUN_00458570();
        }
      }
      uStackY_7c._0_2_ = 0x2583;
      uStackY_7c._2_2_ = 0x68;
      FUN_0050bca0();
      puVar13 = (undefined2 *)FUN_00447250();
      uStackY_7c._0_2_ = *puVar13;
      uStackY_7c._2_2_ = (undefined2)*(undefined4 *)(puVar13 + 1);
      piStackY_80 = (int *)0x6825ad;
      FUN_0049a190();
      uStackY_7c._0_2_ = 0x25b7;
      uStackY_7c._2_2_ = 0x68;
      piVar14 = operator_new(0xe);
      if (piVar14 == (int *)0x0) {
        piVar14 = (int *)0x0;
      }
      else {
        *piVar14 = (int)piVar18;
        piVar14[1] = (int)local_60;
        piVar14[2] = 0;
        *(undefined1 *)(piVar14 + 3) = 0;
      }
      iVar11 = local_5c + 1;
      bVar20 = local_5c != 0;
      piVar12 = piVar14;
      local_5c = iVar11;
      if (bVar20) {
        local_60[2] = (int)piVar14;
        piVar12 = local_64;
      }
    }
  }
  piVar12 = local_64;
  while (piVar12 != (int *)0x0) {
    piVar14 = (int *)piVar12[2];
    piVar18 = (int *)*piVar12;
    cVar5 = FUN_0051cc00();
    piVar12 = piVar14;
    if (cVar5 == '\0') {
      (**(code **)(*piVar18 + 0x10))();
      iVar11 = FUN_00525a00();
      if (iVar11 != 0) {
        fVar15 = *(float *)(iVar11 + 0xf4);
        fVar21 = (float10)FUN_004fd510();
        if ((float10)_DAT_007e7a64 <= (float10)fVar15 / fVar21) {
          uStackY_7c._0_2_ = 0x264d;
          uStackY_7c._2_2_ = 0x68;
          FUN_0050bca0();
          piStackY_80 = (int *)&stack0xffffff88;
          uStackY_7c._0_2_ = SUB42(piVar18,0);
          uStackY_7c._2_2_ = (undefined2)((uint)piVar18 >> 0x10);
          uStackY_84 = 0x265e;
          uStackY_82 = 0x68;
          (*(code *)PTR_FUN_007e4cac)();
          uStackY_84 = 0x2663;
          uStackY_82 = 0x68;
          (*(code *)PTR_FUN_007e4ca0)();
          uStackY_84 = 0x266b;
          uStackY_82 = 0x68;
          puVar13 = (undefined2 *)FUN_00447250();
          uStackY_88 = *puVar13;
          local_3c = &uStackY_88;
          uStackY_86 = (undefined2)*(undefined4 *)(puVar13 + 1);
          uStackY_84 = (undefined2)((uint)*(undefined4 *)(puVar13 + 1) >> 0x10);
          (**(code **)(local_18[0x32] + 0x18))();
        }
      }
    }
  }
  local_1c = *(float **)((int)local_18 + 0x12e);
  pfVar19 = local_1c;
  while (pfVar19 != (float *)0x0) {
    piVar12 = (int *)pfVar19[2];
    iVar11 = (int)*pfVar19;
    uStackY_7c._0_2_ = 0x26bb;
    uStackY_7c._2_2_ = 0x68;
    local_1c = (float *)piVar12;
    iVar6 = FUN_004e9370();
    local_20 = (undefined4 *)0x0;
    pfVar19 = (float *)piVar12;
    piVar12 = local_64;
    while (piVar12 != (int *)0x0) {
      piVar14 = (int *)piVar12[2];
      iVar9 = *piVar12;
      cVar5 = FUN_0051cc00();
      pfVar19 = local_1c;
      piVar12 = piVar14;
      if ((cVar5 != '\0') && (*(char *)(iVar9 + 0x17b) == '\0')) {
        cVar5 = (**(code **)(*(int *)(iVar9 + 0x22e) + 8))();
        if (cVar5 == '\0') {
          iVar9 = FUN_0051c0c0();
          pfVar19 = local_1c;
        }
        else {
          iVar9 = *(int *)(iVar9 + 0xc);
          pfVar19 = local_1c;
        }
        local_1c = pfVar19;
        if (iVar9 == iVar11) {
          local_20 = (undefined4 *)((int)local_20 + 1);
        }
      }
    }
    *(float *)(iVar6 + 0x48a) = (float)(int)local_20;
  }
  do {
    do {
      if (local_64 == (int *)0x0) {
        local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00527230();
        while (puVar4 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)puVar4[2];
          uStackY_7c._0_2_ = 0x2990;
          uStackY_7c._2_2_ = 0x68;
          FUN_00796cd8();
        }
        ExceptionList = local_10;
        return;
      }
      local_24 = (int *)local_64[2];
      piVar12 = (int *)*local_64;
      iVar11 = (**(code **)(piVar12[0x47] + 4))();
      local_64 = local_24;
    } while ((iVar11 != 0) || (*(char *)((int)piVar12 + 0x17b) != '\0'));
    cVar5 = (**(code **)(*(int *)((int)piVar12 + 0x22e) + 8))();
    if (cVar5 == '\0') {
      local_34 = (int *)FUN_0051c0c0();
    }
    else {
      local_34 = (int *)piVar12[3];
    }
    local_2c = 0.0;
    local_30 = 1e+06;
    puVar1 = (undefined1 *)(DAT_00ab27b4 + (int)local_34 * 0x4b2);
    local_3c = (undefined2 *)puVar1;
    cVar5 = FUN_0051cc00();
    if (cVar5 == '\0') {
LAB_006827fa:
      local_11 = '\0';
    }
    else {
      uStackY_7c._0_2_ = 0x27dd;
      uStackY_7c._2_2_ = 0x68;
      cVar5 = (**(code **)(*(int *)((int)local_18 + 0x12a) + 0x24))();
      if ((cVar5 != '\0') && (*(float *)(puVar1 + 0x48a) <= _DAT_007e3374)) goto LAB_006827fa;
      local_11 = '\x01';
    }
    cVar5 = FUN_0051cc00();
    piVar14 = local_18;
    if (cVar5 == '\0') {
      uStackY_7c._0_2_ = 0x2814;
      uStackY_7c._2_2_ = 0x68;
      cVar5 = FUN_006813e0();
      if (cVar5 == '\0') goto LAB_00682884;
      uStackY_7c._0_2_ = 0x2823;
      uStackY_7c._2_2_ = 0x68;
      cVar5 = FUN_006813e0();
      if (cVar5 != '\0') {
        iVar11 = piVar12[3];
        local_28 = 0;
        piVar18 = (int *)piVar14[0x29];
        if ((int *)piVar14[0x29] != (int *)0x0) {
          do {
            piVar14 = (int *)piVar18[2];
            iVar6 = *piVar18;
            cVar5 = (**(code **)(*(int *)(iVar6 + 0x22e) + 8))();
            if (((cVar5 != '\0') && (*(char *)(iVar6 + 0x17b) == '\0')) &&
               (*(int *)(iVar6 + 0xc) == iVar11)) {
              local_28 = local_28 + 1;
            }
            piVar18 = piVar14;
          } while (piVar14 != (int *)0x0);
          if (1 < local_28) goto LAB_00682880;
        }
        goto LAB_00682884;
      }
LAB_00682880:
      bVar20 = true;
    }
    else {
LAB_00682884:
      bVar20 = false;
    }
    local_64 = local_24;
    if (((local_11 != '\0') || (bVar20)) &&
       (pfVar19 = *(float **)((int)local_18 + 0x12e),
       *(float **)((int)local_18 + 0x12e) != (float *)0x0)) {
      do {
        pfVar3 = (float *)pfVar19[2];
        fVar15 = *pfVar19;
        if (((int *)fVar15 != local_34) &&
           ((local_11 == '\0' ||
            (*(float *)(DAT_00ab27b4 + (int)fVar15 * 0x4b2 + 0x48a) < _DAT_007e3374)))) {
          uStackY_7c._0_2_ = SUB42(fVar15,0);
          uStackY_7c._2_2_ = (undefined2)((uint)fVar15 >> 0x10);
          piStackY_80 = (int *)0x6828ed;
          fVar21 = (float10)FUN_0044a9c0();
          if (fVar21 < (float10)local_30) {
            local_30 = (float)fVar21;
            local_2c = fVar15;
            uStackY_7c = CONCAT22(uStackY_7c._2_2_,(undefined2)uStackY_7c);
          }
        }
        pfVar19 = pfVar3;
      } while (pfVar3 != (float *)0x0);
      local_64 = local_24;
      if (local_2c != 0.0) {
        iVar11 = DAT_00ab27b4 + (int)local_2c * 0x4b2;
        if (local_11 != '\0') {
          fVar15 = *(float *)(iVar11 + 0x48a) + _DAT_007e3374;
          *(float *)(iVar11 + 0x48a) = fVar15;
          *(float *)((int)local_3c + 0x48a) = fVar15 - _DAT_007e3374;
        }
        (**(code **)(*piVar12 + 0x74))();
        uStackY_84 = 0x2962;
        uStackY_82 = 0x68;
        piStackY_80 = piVar12;
        uStackY_7c = iVar11;
        FUN_006aaff0();
        local_64 = local_24;
      }
    }
  } while( true );
}


