// FUN_006860f0 @ 6860f0 size=11175

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_006860f0(int *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  float *pfVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  float *pfVar10;
  void **ppvVar11;
  uint uVar12;
  undefined2 uVar13;
  char cVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  void *pvVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  undefined **ppuVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined2 *puVar25;
  undefined4 uVar26;
  char *pcVar27;
  int iVar28;
  int *piVar29;
  float *pfVar30;
  float *pfVar31;
  bool bVar32;
  bool bVar33;
  float10 fVar34;
  int *piStack_1f0;
  float *pfStack_1ec;
  undefined4 uStack_1e8;
  float local_1cc [2];
  float local_1c4;
  float *local_1c0;
  float local_1bc;
  undefined1 local_1b8 [8];
  float local_1b0;
  float *local_1ac;
  float local_1a8;
  undefined **local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 local_194;
  int local_190;
  undefined **local_18c;
  int *local_188;
  int *local_184;
  int local_180;
  undefined1 local_17c;
  undefined4 local_178;
  short local_174;
  float local_170;
  undefined **local_16c;
  undefined4 *local_168;
  undefined4 *local_164;
  int local_160;
  undefined1 local_15c;
  undefined **local_158;
  undefined4 *local_154;
  undefined4 *local_150;
  int local_14c;
  undefined1 local_148;
  uint local_144;
  undefined **local_13c;
  float *local_138;
  float *local_134;
  int local_130;
  undefined1 local_12c;
  undefined **local_128;
  int *local_124;
  int *local_120;
  int local_11c;
  undefined **local_114;
  int *local_110;
  int *local_10c;
  int local_108;
  undefined1 local_104;
  int local_100;
  undefined **local_fc;
  int *local_f8;
  int *local_f4;
  int local_f0;
  undefined **local_e8;
  int *local_e4;
  int *local_e0;
  int local_dc;
  undefined1 local_d8;
  undefined **local_d4;
  undefined4 *local_d0;
  undefined4 *local_cc;
  int local_c8;
  undefined1 local_c4;
  float *local_c0;
  void *local_bc;
  int local_b8;
  undefined **local_b4;
  float *local_b0;
  float *local_ac;
  int local_a8;
  undefined1 local_a4;
  undefined **local_a0;
  undefined **local_9c;
  undefined **local_98;
  int local_94;
  undefined1 local_90;
  undefined **local_8c;
  float *local_88;
  float *local_84;
  int local_80;
  undefined1 local_7c;
  char local_79;
  uint local_78;
  undefined2 local_74;
  char local_71;
  undefined4 local_70;
  undefined2 local_6c;
  float local_68;
  int *local_64;
  uint local_60;
  undefined2 local_5c;
  int local_58;
  float *local_54;
  int local_50;
  char local_49;
  int local_48;
  char local_41;
  int local_40;
  float *local_3c;
  undefined **local_38;
  char local_31;
  float *local_30;
  float *local_2c;
  float *local_28;
  int *local_24;
  float *local_20;
  int *local_1c;
  undefined **local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  fVar21 = (float)param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d4e54;
  local_14 = (int *)param_1[1];
  ppvVar11 = &local_10;
  iVar17 = 0;
  local_1c = param_1;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar11, local_14 != (int *)0x0) {
    uStack_1e8 = &local_bc;
    pfStack_1ec = (float *)0x686133;
    FUN_0068a980();
    uStack_1e8._0_2_ = 0x6140;
    uStack_1e8._2_2_ = 0x68;
    iVar15 = FUN_004e9370();
    iVar15 = *(int *)(iVar15 + 0x482);
    ppvVar11 = ExceptionList;
    if ((iVar15 != 0) && ((iVar17 == 0 || (iVar17 == iVar15)))) {
      iVar17 = iVar15;
    }
  }
  local_100 = *(int *)(iVar17 + 0x6c);
  FUN_006a9d50();
  iVar17 = *(int *)(param_1[7] + 0x120);
  local_48 = iVar17 + 0x8fc;
  iVar15 = FUN_00527b40();
  local_14 = *(int **)(param_1[7] + 0x451c);
  local_190 = iVar15;
  while (local_14 != (int *)0x0) {
    uStack_1e8 = &local_bc;
    pfStack_1ec = (float *)0x6861b5;
    puVar16 = (undefined4 *)FUN_00499730();
    if (0 < *(int *)(*(int *)*puVar16 + 0x14c)) {
      uStack_1e8._0_2_ = 0x61cb;
      uStack_1e8._2_2_ = 0x68;
      cVar14 = FUN_00689370();
      if (cVar14 != '\0') {
        iVar15 = iVar15 + 1;
      }
    }
  }
  local_1c4 = *(float *)(iVar17 + 0x96c);
  uStack_1e8._0_2_ = 0x61f7;
  uStack_1e8._2_2_ = 0x68;
  local_190 = iVar15;
  FUN_004e9370();
  uStack_1e8._0_2_ = 0x6202;
  uStack_1e8._2_2_ = 0x68;
  cVar14 = FUN_0049ee30();
  local_41 = cVar14 == '\0';
  iVar17 = (**(code **)(*param_1 + 4))();
  if (iVar17 < 1) {
    ExceptionList = local_10;
    return '\x06';
  }
  local_70 = *(undefined4 *)(DAT_00893530 + 0x14);
  local_6c = *(undefined2 *)(DAT_00893530 + 0x18);
  local_178 = *(undefined4 *)(DAT_00893530 + 0x14);
  local_174 = *(short *)(DAT_00893530 + 0x18);
  uStack_1e8._0_2_ = 0x6264;
  uStack_1e8._2_2_ = 0x68;
  FUN_004e9370();
  FUN_004ea810();
  local_90 = 0;
  local_9c = (undefined **)0x0;
  local_98 = (undefined **)0x0;
  local_94 = 0;
  local_a0 = &PTR_LAB_007f3a6c;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_31 = '\0';
  if (param_2 == (float *)0x0) {
    local_3c = (float *)(param_1 + 0x44);
    pfVar31 = (float *)*local_3c;
joined_r0x00686530:
    if (pfVar31 != (float *)0x0) {
      local_2c = (float *)pfVar31[2];
      local_38 = (undefined **)*pfVar31;
      uStack_1e8._0_2_ = 0x654f;
      uStack_1e8._2_2_ = 0x68;
      iVar17 = FUN_004e9370();
      local_14 = (int *)0x0;
      local_20 = (float *)0x0;
      if (0 < *(int *)(iVar17 + 0x290)) goto code_r0x0068656b;
      goto LAB_00686664;
    }
    local_2c = (float *)*local_3c;
    ppuVar22 = local_9c;
joined_r0x00686680:
    local_9c = ppuVar22;
    if (local_2c != (float *)0x0) {
      pfVar31 = (float *)*local_2c;
      local_2c = (float *)local_2c[2];
      iVar17 = *(int *)(DAT_00ab27b4 + 0x3d8 + (int)pfVar31[1] * 0x4b2);
      fVar21 = (float)(DAT_00ab27b4 + (int)pfVar31[1] * 0x4b2);
      local_68 = fVar21;
      local_54 = pfVar31;
      if (iVar17 != 0) goto code_r0x006866c1;
      goto LAB_0068670c;
    }
    goto LAB_00686a62;
  }
  uStack_1e8._0_2_ = 0x62af;
  uStack_1e8._2_2_ = 0x68;
  pvVar18 = operator_new(0x8e);
  local_8._0_1_ = 1;
  if (pvVar18 == (void *)0x0) {
    param_2 = (float *)0x0;
  }
  else {
    param_2 = (float *)FUN_006af940();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_2[1] = fVar21;
  uStack_1e8._0_2_ = 0x62dc;
  uStack_1e8._2_2_ = 0x68;
  local_20 = (float *)FUN_004e9370();
  pfVar31 = *(float **)(*(int *)((int)local_20 + 0x1c2) + 4);
  while (pfVar31 != (float *)0x0) {
    pfVar30 = (float *)pfVar31[2];
    pfVar4 = (float *)*pfVar31;
    local_18 = (undefined **)pfVar30;
    cVar14 = (**(code **)((int)*pfVar4 + 0x28))();
    pfVar31 = pfVar30;
    if (cVar14 != '\0') {
      uStack_1e8._0_2_ = 0x631e;
      uStack_1e8._2_2_ = 0x68;
      cVar14 = FUN_0044b280();
      if (cVar14 != '\0') {
        fVar21 = param_2[0x13];
        uStack_1e8._0_2_ = 0x6336;
        uStack_1e8._2_2_ = 0x68;
        local_bc = operator_new(0xe);
        local_8._0_1_ = 2;
        if (local_bc == (void *)0x0) {
          fVar19 = 0.0;
        }
        else {
          uStack_1e8._0_2_ = SUB42(fVar21,0);
          uStack_1e8._2_2_ = (undefined2)((uint)fVar21 >> 0x10);
          piStack_1f0 = (int *)0x686352;
          pfStack_1ec = pfVar4;
          fVar19 = (float)FUN_0045bab0();
        }
        fVar5 = param_2[0x14];
        local_8 = (uint)local_8._1_3_ << 8;
        param_2[0x13] = fVar19;
        param_2[0x14] = (float)((int)fVar5 + 1);
        if (fVar5 == 0.0) {
          param_2[0x12] = fVar19;
        }
        else {
          *(float *)((int)fVar21 + 8) = fVar19;
        }
        if (pfVar4 == (float *)0x0) {
          iVar17 = 0;
        }
        else {
          iVar17 = (int)pfVar4 + 0x22;
        }
        local_14 = *(int **)(iVar17 + 4);
        local_54 = (float *)param_2[6];
        fVar21 = param_2[1];
        local_24 = (int *)0x0;
        while (local_14 != (int *)0x0) {
          uStack_1e8 = (undefined ***)&local_170;
          pfStack_1ec = (float *)0x6863ab;
          puVar16 = (undefined4 *)FUN_00499730();
          uStack_1e8._0_2_ = SUB42(fVar21,0);
          uStack_1e8._2_2_ = (undefined2)((uint)fVar21 >> 0x10);
          pfStack_1ec = (float *)0x1;
          piStack_1f0 = (int *)0x0;
          fVar34 = (float10)(**(code **)(**(int **)*puVar16 + 0x2c))();
          local_24 = (int *)(float)(fVar34 + (float10)(float)local_24);
        }
        param_2[6] = (float)local_24 + (float)local_54;
        local_14 = (int *)0x0;
        pfVar31 = (float *)local_18;
        param_1 = local_1c;
      }
    }
  }
  local_14 = (int *)0x0;
  local_18 = (undefined **)(local_20 + 0xa4);
  if (0 < (int)*local_18) {
    local_54 = local_20 + 0xa6;
    local_24 = (int *)0x0;
    do {
      if (*(int *)((int)local_24 + (int)*local_54 + 4) != 4) {
        uStack_1e8._0_2_ = 0x6424;
        uStack_1e8._2_2_ = 0x68;
        iVar17 = FUN_004e9370();
        if (((*(int *)(iVar17 + 0x254) != 8) && (*(int *)(iVar17 + 0x254) != 9)) &&
           (*(int *)(iVar17 + 0x3d8) != 0)) {
          if (*(int *)(iVar17 + 0x3d8) != param_1[7]) {
            FUN_006a9d50();
            uStack_1e8._0_2_ = 0x6458;
            uStack_1e8._2_2_ = 0x68;
            cVar14 = FUN_0044b300();
            if (cVar14 == '\0') goto LAB_0068649b;
          }
          if ((*(int **)(iVar17 + 0x4a8) != (int *)0x0) && (*(int **)(iVar17 + 0x4a8) != param_1)) {
            iVar15 = FUN_006a9d50();
            iVar20 = FUN_006a9d50();
            if ((iVar15 == iVar20) &&
               (iVar17 = (**(code **)(**(int **)(iVar17 + 0x4a8) + 4))(), 0 < iVar17)) {
              *(undefined1 *)(param_2 + 0x23) = 1;
            }
          }
        }
      }
LAB_0068649b:
      local_14 = (int *)((int)local_14 + 1);
      local_24 = local_24 + 3;
    } while ((int)local_14 < (int)*local_18);
  }
  ppuVar22 = local_98;
  uStack_1e8._0_2_ = 0x64c5;
  uStack_1e8._2_2_ = 0x68;
  local_bc = operator_new(0xe);
  local_8._0_1_ = 3;
  if (local_bc == (void *)0x0) {
    local_98 = (undefined **)0x0;
  }
  else {
    uStack_1e8._0_2_ = SUB42(ppuVar22,0);
    uStack_1e8._2_2_ = (undefined2)((uint)ppuVar22 >> 0x10);
    pfStack_1ec = param_2;
    piStack_1f0 = (int *)0x6864e4;
    local_98 = (undefined **)FUN_0068ad00();
  }
  local_8._0_1_ = 0;
  if (local_94 == 0) {
    local_31 = '\x01';
    local_9c = local_98;
    local_94 = local_94 + 1;
  }
  else {
    ppuVar22[2] = (undefined *)local_98;
    local_31 = '\x01';
    local_94 = local_94 + 1;
  }
LAB_00686a62:
  FUN_00457e10();
  local_fc = &PTR_FUN_007e4c84;
  local_114 = &PTR_LAB_007e378c;
  local_110 = (int *)0x0;
  local_10c = (int *)0x0;
  local_108 = 0;
  local_104 = 0;
  local_b0 = (float *)0x0;
  local_ac = (float *)0x0;
  local_a8 = 0;
  local_a4 = 0;
  local_b4 = &PTR_LAB_007f3a6c;
  local_8._0_1_ = 8;
  local_49 = '\0';
  local_38 = local_9c;
  piVar29 = local_f8;
  iVar17 = local_48;
joined_r0x00686acf:
  do {
    local_f8 = piVar29;
    if (local_38 == (undefined **)0x0) {
      local_38 = (undefined **)0x0;
      while (piVar29 != (int *)0x0) {
        piVar29 = (int *)piVar29[2];
        uStack_1e8._0_2_ = 0x869f;
        uStack_1e8._2_2_ = 0x68;
        FUN_00796cd8();
      }
      local_f8 = (int *)0x0;
      local_f4 = (int *)0x0;
      local_f0 = 0;
      ppuVar22 = local_9c;
      do {
        do {
          do {
            if (ppuVar22 == (undefined **)0x0) {
              if (local_49 == '\0') {
                local_1c[0x3d] = local_1c[0x3d] + 1;
              }
              else {
                local_1c[0x3d] = 0;
              }
              local_154 = (undefined4 *)0x0;
              local_150 = (undefined4 *)0x0;
              local_14c = 0;
              local_148 = 0;
              local_158 = &PTR_LAB_007e378c;
              uStack_1e8 = &local_158;
              local_8 = CONCAT31(local_8._1_3_,0x19);
              pfStack_1ec = (float *)0x688a3e;
              FUN_00688ca0();
              param_2 = (float *)0x0;
              ppuVar22 = local_9c;
              while ((ppuVar22 != (undefined **)0x0 && ((int)param_2 < 2))) {
                ppuVar8 = (undefined **)ppuVar22[2];
                puVar9 = *ppuVar22;
                uStack_1e8._0_2_ = 0x8a70;
                uStack_1e8._2_2_ = 0x68;
                FUN_004e9370();
                ppuVar22 = ppuVar8;
                if ((0 < *(int *)(puVar9 + 0xc)) &&
                   (fVar34 = (float10)FUN_004ecf60(), fVar34 < (float10)_DAT_007e3848)) {
                  iVar17 = (**(code **)(*(int *)(puVar9 + 0x6e) + 4))();
                  puVar16 = local_150;
                  puVar24 = local_154;
                  if (0 < iVar17) {
                    uVar26 = *(undefined4 *)(puVar9 + 4);
                    uStack_1e8._0_2_ = 0x8aaa;
                    uStack_1e8._2_2_ = 0x68;
                    local_150 = operator_new(0xe);
                    if (local_150 == (undefined4 *)0x0) {
                      local_150 = (undefined4 *)0x0;
                    }
                    else {
                      *local_150 = uVar26;
                      local_150[1] = puVar16;
                      local_150[2] = 0;
                      *(undefined1 *)(local_150 + 3) = 0;
                    }
                    iVar17 = local_14c + 1;
                    bVar32 = local_14c != 0;
                    puVar24 = local_150;
                    local_14c = iVar17;
                    if (bVar32) {
                      puVar16[2] = local_150;
                      puVar24 = local_154;
                    }
                  }
                  local_154 = puVar24;
                  param_2 = (float *)((int)param_2 + 1);
                }
              }
              uStack_1e8 = &local_158;
              pfStack_1ec = (float *)0x688b06;
              FUN_00688ca0();
              iVar17 = (int)local_174;
              sVar3 = *(short *)(DAT_00893530 + 0x18);
              cVar14 = *(char *)(DAT_00893530 + 0x16);
              iVar15 = (int)local_178._2_1_;
              cVar1 = *(char *)(DAT_00893530 + 0x15);
              cVar2 = *(char *)(DAT_00893530 + 0x14);
              iVar20 = (int)local_178._1_1_;
              iVar28 = (int)(char)local_178;
              ppuVar22 = local_9c;
              if (local_31 != '\0') {
                while (ppuVar22 != (undefined **)0x0) {
                  ppuVar8 = (undefined **)ppuVar22[2];
                  if ((undefined4 *)*ppuVar22 != (undefined4 *)0x0) {
                    uStack_1e8._0_2_ = 0x8b86;
                    uStack_1e8._2_2_ = 0x68;
                    (*(code *)**(undefined4 **)*ppuVar22)();
                  }
                  uStack_1e8._0_2_ = 0x8b8c;
                  uStack_1e8._2_2_ = 0x68;
                  FUN_00796cd8();
                  ppuVar22 = ppuVar8;
                }
                local_9c = (undefined **)0x0;
                local_98 = (undefined **)0x0;
                local_94 = 0;
              }
              local_158 = &PTR_LAB_007e378c;
              puVar16 = local_154;
              while (puVar16 != (undefined4 *)0x0) {
                puVar16 = (undefined4 *)puVar16[2];
                uStack_1e8._0_2_ = 0x8bc4;
                uStack_1e8._2_2_ = 0x68;
                FUN_00796cd8();
              }
              local_154 = (undefined4 *)0x0;
              local_150 = (undefined4 *)0x0;
              local_14c = 0;
              local_b4 = &PTR_LAB_007f3a6c;
              pfVar31 = local_b0;
              while (pfVar31 != (float *)0x0) {
                pfVar31 = (float *)pfVar31[2];
                uStack_1e8._0_2_ = 0x8bfd;
                uStack_1e8._2_2_ = 0x68;
                FUN_00796cd8();
              }
              local_b0 = (float *)0x0;
              local_ac = (float *)0x0;
              local_a8 = 0;
              local_114 = &PTR_LAB_007e378c;
              piVar29 = local_110;
              while (piVar29 != (int *)0x0) {
                piVar29 = (int *)piVar29[2];
                uStack_1e8._0_2_ = 0x8c35;
                uStack_1e8._2_2_ = 0x68;
                FUN_00796cd8();
              }
              local_110 = (int *)0x0;
              local_10c = (int *)0x0;
              local_108 = 0;
              local_8 = local_8 & 0xffffff00;
              FUN_00527230();
              local_a0 = &PTR_LAB_007f3a6c;
              ppuVar22 = local_9c;
              while (ppuVar22 != (undefined **)0x0) {
                ppuVar22 = (undefined **)ppuVar22[2];
                uStack_1e8._0_2_ = 0x8c78;
                uStack_1e8._2_2_ = 0x68;
                FUN_00796cd8();
              }
              ExceptionList = local_10;
              return (0 < ((((((iVar17 - sVar3) * 0xc - (int)cVar14) + iVar15) * 0x1e - (int)cVar1)
                           + iVar20) * 0x18 - (int)cVar2) + iVar28) + '\x01';
            }
            ppuVar8 = (undefined **)ppuVar22[2];
            piVar29 = (int *)*ppuVar22;
            local_38 = ppuVar8;
            local_14 = piVar29;
            iVar17 = (**(code **)(*(int *)((int)piVar29 + 0x6e) + 4))();
            ppuVar22 = ppuVar8;
          } while (iVar17 < 1);
          uStack_1e8._0_2_ = 0x86ef;
          uStack_1e8._2_2_ = 0x68;
          fVar34 = (float10)FUN_006afaf0();
        } while (fVar34 <= (float10)_DAT_007e3380);
        local_84 = (float *)0x0;
        local_80 = 0;
        local_7c = 0;
        local_8c = &PTR_LAB_007f3a6c;
        local_100 = DAT_00ab27b4 + piVar29[1] * 0x4b2;
        local_88 = (float *)0x0;
        local_8._0_1_ = 0x18;
        pfVar30 = (float *)0x0;
        pfVar31 = (float *)local_1c[1];
        pfVar4 = local_88;
        while (local_88 = pfVar4, pfVar10 = pfVar30, pfVar30 = local_88, pfVar31 != (float *)0x0) {
          pfVar4 = (float *)pfVar31[2];
          fVar21 = *pfVar31;
          uStack_1e8._0_2_ = 0x875e;
          uStack_1e8._2_2_ = 0x68;
          cVar14 = FUN_004e7970();
          pfVar30 = pfVar10;
          pfVar31 = pfVar4;
          pfVar4 = local_88;
          if (cVar14 != '\0') {
            uStack_1e8._0_2_ = 0x876c;
            uStack_1e8._2_2_ = 0x68;
            local_84 = operator_new(0xe);
            if (local_84 == (float *)0x0) {
              local_84 = (float *)0x0;
            }
            else {
              *local_84 = fVar21;
              local_84[1] = (float)pfVar10;
              local_84[2] = 0.0;
              *(undefined1 *)(local_84 + 3) = 0;
            }
            iVar17 = local_80 + 1;
            bVar32 = local_80 != 0;
            pfVar30 = local_84;
            local_80 = iVar17;
            pfVar4 = local_84;
            if (bVar32) {
              pfVar10[2] = (float)local_84;
              pfVar4 = local_88;
            }
          }
        }
joined_r0x006887bb:
        if (pfVar30 != (float *)0x0) {
          local_3c = (float *)pfVar30[2];
          local_20 = (float *)*pfVar30;
          uStack_1e8._0_2_ = 0x87d8;
          uStack_1e8._2_2_ = 0x68;
          FUN_004e9370();
          param_2 = (float *)0x0;
          cVar14 = '\0';
          local_24 = (int *)0x0;
          piVar29 = *(int **)((int)local_14 + 0x72);
          if (*(int **)((int)local_14 + 0x72) == (int *)0x0) {
LAB_00688853:
            local_54 = (float *)0x1;
          }
          else {
            do {
              piVar23 = (int *)piVar29[2];
              iVar17 = *piVar29;
              if (*(float *)(iVar17 + 0xc) == local_20[1]) {
                cVar14 = FUN_0051cb20();
                iVar17 = (**(code **)(*(int *)(iVar17 + 0x22) + 4))();
                local_24 = (int *)((int)local_24 + iVar17);
                FUN_0051c480();
                iVar17 = FUN_0050a580();
                if ((int)param_2 < iVar17) {
                  FUN_0051c480();
                  param_2 = (float *)FUN_0050a580();
                }
              }
              piVar29 = piVar23;
            } while (piVar23 != (int *)0x0);
            if (cVar14 == '\0') goto LAB_00688853;
            local_54 = DAT_00dc15fc;
          }
          uStack_1e8._0_2_ = SUB42(local_14,0);
          uStack_1e8._2_2_ = (undefined2)((uint)local_14 >> 0x10);
          pfStack_1ec = local_20;
          piStack_1f0 = (int *)0x688871;
          iVar17 = FUN_00688e30();
          while (pfVar30 = local_3c, iVar17 != 0) {
            FUN_0051c480();
            iVar15 = FUN_0050a580();
            if ((int)param_2 < iVar15) {
              FUN_0051c480();
              param_2 = (float *)FUN_0050a580();
            }
            iVar15 = (**(code **)(*(int *)(iVar17 + 0x22) + 4))();
            local_24 = (int *)((int)local_24 + iVar15);
            pfVar30 = local_3c;
            if ((int)local_54 * (int)param_2 + 1 < (int)local_24) break;
            uStack_1e8._0_2_ = 0;
            uStack_1e8._2_2_ = 0xbf80;
            pfStack_1ec = (float *)0x0;
            piStack_1f0 = (int *)0x1;
            local_144 = local_144 & 0xff000000;
            FUN_0050b600(iVar17,4,*(undefined4 *)(local_100 + 0x12),0x3f800000,1,1,
                         *(undefined4 *)(DAT_00893530 + 0x14),*(undefined2 *)(DAT_00893530 + 0x18),
                         local_144,0,1,0xffffffff,0);
            piVar29 = local_f4;
            uStack_1e8._0_2_ = 0x893e;
            uStack_1e8._2_2_ = 0x68;
            local_f4 = operator_new(0xe);
            if (local_f4 == (int *)0x0) {
              local_f4 = (int *)0x0;
            }
            else {
              *local_f4 = iVar17;
              local_f4[1] = (int)piVar29;
              local_f4[2] = 0;
              *(undefined1 *)(local_f4 + 3) = 0;
            }
            piVar23 = local_f4;
            if (local_f0 != 0) {
              piVar29[2] = (int)local_f4;
              piVar23 = local_f8;
            }
            local_f8 = piVar23;
            uStack_1e8._0_2_ = SUB42(local_14,0);
            uStack_1e8._2_2_ = (undefined2)((uint)local_14 >> 0x10);
            pfStack_1ec = local_20;
            piStack_1f0 = (int *)0x688994;
            local_f0 = local_f0 + 1;
            iVar17 = FUN_00688e30();
          }
          goto joined_r0x006887bb;
        }
        local_8._0_1_ = 8;
        local_8c = &PTR_LAB_007f3a6c;
        local_3c = (float *)0x0;
        pfVar31 = local_88;
        while (pfVar31 != (float *)0x0) {
          pfVar31 = (float *)pfVar31[2];
          uStack_1e8._0_2_ = 0x89cf;
          uStack_1e8._2_2_ = 0x68;
          FUN_00796cd8();
        }
        local_88 = (float *)0x0;
        local_84 = (float *)0x0;
        local_80 = 0;
        ppuVar22 = local_38;
      } while( true );
    }
    local_30 = (float *)*local_38;
    local_38 = (undefined **)local_38[2];
    local_58 = DAT_00ab27b4 + (int)local_30[1] * 0x4b2;
    local_68 = local_1c4 - (float)local_1c[0x3d] * (float)_DAT_007f3ac0;
    if (local_31 != '\0') {
      local_68 = *(float *)(iVar17 + 0x74);
    }
    if (local_68 < *(float *)(iVar17 + 0x74)) {
      local_68 = *(float *)(iVar17 + 0x74);
    }
    if (*(char *)(local_30 + 0x23) != '\0') {
      local_68 = *(float *)(iVar17 + 0x74) * _DAT_007f3ab8;
    }
    if (local_41 != '\0') {
      local_68 = *(float *)(iVar17 + 0x74) * _DAT_007e34c0;
    }
    local_13c = &PTR_LAB_007f3a6c;
    local_138 = (float *)0x0;
    local_134 = (float *)0x0;
    local_130 = 0;
    local_12c = 0;
    local_8._0_1_ = 9;
    pfVar31 = (float *)local_1c[1];
joined_r0x00686b91:
    if (pfVar31 != (float *)0x0) {
      local_c0 = (float *)pfVar31[2];
      pfVar31 = (float *)*pfVar31;
      uStack_1e8._0_2_ = 0x6bb9;
      uStack_1e8._2_2_ = 0x68;
      cVar14 = FUN_004e7970();
      pfVar30 = local_138;
      if (cVar14 != '\0') {
        uStack_1e8._0_2_ = 0x6bcd;
        uStack_1e8._2_2_ = 0x68;
        ppuVar22 = (undefined **)FUN_004e9370();
        iVar17 = local_58;
        uStack_1e8._0_2_ = 0x6be3;
        uStack_1e8._2_2_ = 0x68;
        local_18 = ppuVar22;
        cVar14 = FUN_004e79b0();
        if (cVar14 != '\0') {
          iVar15 = 0;
          if (0 < (int)ppuVar22[0xa4]) {
            piVar29 = (int *)ppuVar22[0xa6];
            do {
              if (*piVar29 == *(int *)(iVar17 + 0x12)) {
                piVar29 = (int *)((int)ppuVar22[0xa6] + iVar15 * 3 * 4);
                if (((piVar29 != (int *)0x0) && (iVar17 = piVar29[2], 0 < iVar17)) &&
                   (iVar17 < DAT_00877690)) {
                  uStack_1e8._0_2_ = 0x6c42;
                  uStack_1e8._2_2_ = 0x68;
                  iVar17 = FUN_004e9370();
                  iVar15 = (**(code **)(**(int **)(iVar17 + 0x1c2) + 4))();
                  if (iVar15 != 0) {
                    piVar29 = *(int **)(*(int *)(iVar17 + 0x1c2) + 4);
                    goto joined_r0x00686c61;
                  }
                }
                break;
              }
              iVar15 = iVar15 + 1;
              piVar29 = piVar29 + 3;
            } while (iVar15 < (int)ppuVar22[0xa4]);
          }
        }
LAB_00686cd4:
        iVar17 = 0;
        local_24 = (int *)0x0;
        if (0 < (int)ppuVar22[0xa4]) {
          iVar15 = 0;
          do {
            if (*(int *)(ppuVar22[0xa6] + iVar15 + 4) != 4) {
              uStack_1e8._0_2_ = 0x6d01;
              uStack_1e8._2_2_ = 0x68;
              iVar20 = FUN_004e9370();
              if (*(int *)(iVar20 + 0x3d8) != 0) {
                uStack_1e8._0_2_ = 0x6d1d;
                uStack_1e8._2_2_ = 0x68;
                cVar14 = FUN_0044b280();
                if (cVar14 != '\0') {
                  local_24 = (int *)((int)local_24 + 1);
                }
              }
            }
            iVar17 = iVar17 + 1;
            iVar15 = iVar15 + 0xc;
          } while (iVar17 < (int)ppuVar22[0xa4]);
        }
        pfVar4 = local_134;
        pfVar31[7] = (float)local_24;
        for (pfVar30 = local_138; pfVar30 != (float *)0x0; pfVar30 = (float *)pfVar30[2]) {
          if ((int)local_24 < *(int *)((int)*pfVar30 + 0x1c)) {
            local_18 = (undefined **)&stack0xfffffe1c;
            uStack_1e8._0_2_ = SUB42(pfVar31,0);
            uStack_1e8._2_2_ = (undefined2)((uint)pfVar31 >> 0x10);
            pfStack_1ec = (float *)0x686d95;
            FUN_0068ab50();
            pfVar30 = local_138;
            goto LAB_00686dc1;
          }
        }
        uStack_1e8._0_2_ = 28000;
        uStack_1e8._2_2_ = 0x68;
        local_18 = operator_new(0xe);
        local_8._0_1_ = 10;
        if (local_18 == (undefined **)0x0) {
          local_134 = (float *)0x0;
        }
        else {
          uStack_1e8._0_2_ = SUB42(pfVar4,0);
          uStack_1e8._2_2_ = (undefined2)((uint)pfVar4 >> 0x10);
          piStack_1f0 = (int *)0x686d7c;
          pfStack_1ec = pfVar31;
          local_134 = (float *)FUN_0068ad00();
        }
        local_8._0_1_ = 9;
        iVar17 = local_130 + 1;
        bVar32 = local_130 != 0;
        pfVar30 = local_134;
        local_130 = iVar17;
        if (bVar32) {
          pfVar4[2] = (float)local_134;
          pfVar30 = local_138;
        }
      }
      goto LAB_00686dc1;
    }
    local_d0 = (undefined4 *)0x0;
    local_cc = (undefined4 *)0x0;
    local_c8 = 0;
    local_c4 = 0;
    local_d4 = &PTR_LAB_007e378c;
    local_8._0_1_ = 0xb;
    ppuVar22 = *(undefined ***)(local_1c[7] + 0x4508);
    puVar16 = local_d0;
    pfVar31 = local_30;
joined_r0x00686e06:
    local_d0 = puVar16;
    local_30 = pfVar31;
    if (ppuVar22 != (undefined **)0x0) {
      local_18 = (undefined **)ppuVar22[2];
      pfVar30 = (float *)*ppuVar22;
      cVar14 = (**(code **)((int)*pfVar30 + 0x28))();
      ppuVar22 = local_18;
      puVar16 = local_d0;
      pfVar31 = local_30;
      if (cVar14 != '\0') {
        cVar14 = (**(code **)(*(int *)((int)pfVar30 + 0x22e) + 8))();
        pfVar31 = local_30;
        ppuVar22 = local_18;
        puVar16 = local_d0;
        if ((cVar14 == '\0') && (pfVar30[0x9a] == local_30[1])) {
          piVar29 = (int *)((int)local_30 + 0x76);
          iVar17 = *piVar29;
          uStack_1e8._0_2_ = 0x6e63;
          uStack_1e8._2_2_ = 0x68;
          local_14 = operator_new(0xe);
          local_8._0_1_ = 0xc;
          if (local_14 == (int *)0x0) {
            iVar15 = 0;
          }
          else {
            uStack_1e8._0_2_ = (undefined2)iVar17;
            uStack_1e8._2_2_ = (undefined2)((uint)iVar17 >> 0x10);
            piStack_1f0 = (int *)0x686e7c;
            pfStack_1ec = pfVar30;
            iVar15 = FUN_0045bab0();
          }
          local_8._0_1_ = 0xb;
          *piVar29 = iVar15;
          iVar15 = *(int *)((int)pfVar31 + 0x7a);
          *(int *)((int)pfVar31 + 0x7a) = iVar15 + 1;
          puVar24 = local_d0;
          if (iVar15 == 0) {
            *(int *)((int)pfVar31 + 0x72) = *piVar29;
          }
          else {
            *(int *)(iVar17 + 8) = *piVar29;
          }
          for (; puVar24 != (undefined4 *)0x0; puVar24 = (undefined4 *)puVar24[2]) {
            uStack_1e8._0_2_ = (undefined2)*puVar24;
            uStack_1e8._2_2_ = (undefined2)((uint)*puVar24 >> 0x10);
            pfStack_1ec = (float *)0x686ec2;
            cVar14 = (*(code *)local_d4[3])();
            if (cVar14 != '\0') {
              ppuVar22 = local_18;
              puVar16 = local_d0;
              pfVar31 = local_30;
              if (puVar24 != (undefined4 *)0x0) goto joined_r0x00686e06;
              break;
            }
          }
          puVar24 = local_cc;
          pfVar31 = (float *)pfVar30[3];
          uStack_1e8._0_2_ = 0x6ee3;
          uStack_1e8._2_2_ = 0x68;
          pvVar18 = operator_new(0xe);
          local_8._0_1_ = 0xd;
          if (pvVar18 == (void *)0x0) {
            local_cc = (undefined4 *)0x0;
          }
          else {
            uStack_1e8._0_2_ = SUB42(puVar24,0);
            uStack_1e8._2_2_ = (undefined2)((uint)puVar24 >> 0x10);
            piStack_1f0 = (int *)0x686efc;
            pfStack_1ec = pfVar31;
            local_cc = (undefined4 *)FUN_0049a7a0();
          }
          local_8._0_1_ = 0xb;
          iVar17 = local_c8 + 1;
          bVar32 = local_c8 != 0;
          ppuVar22 = local_18;
          puVar16 = local_cc;
          local_c8 = iVar17;
          pfVar31 = local_30;
          if (bVar32) {
            puVar24[2] = local_cc;
            puVar16 = local_d0;
            uStack_1e8 = (undefined ***)CONCAT22(uStack_1e8._2_2_,(undefined2)uStack_1e8);
          }
        }
      }
      goto joined_r0x00686e06;
    }
    local_24 = (int *)((int)pfVar31 + 0x6e);
    iVar15 = (**(code **)(*(int *)((int)pfVar31 + 0x6e) + 4))();
    iVar17 = local_c8;
    if (0 < iVar15) {
      local_1a8 = pfVar31[0x21];
      uStack_1e8._0_2_ = 0;
      uStack_1e8._2_2_ = 0;
      pfStack_1ec = (float *)0x686f69;
      fVar34 = (float10)FUN_006afaf0();
      uStack_1e8 = (undefined ***)
                   (float)(((float10)_DAT_007e3374 - (float10)((iVar17 + -1) / 10)) * fVar34);
      pfStack_1ec = (float *)0x1;
      piStack_1f0 = (int *)0x686f98;
      fVar34 = (float10)FUN_006afdb0();
      pfStack_1ec = (float *)(float)fVar34;
      piStack_1f0 = (int *)0x686fa4;
      fVar34 = (float10)FUN_00689210();
      iVar17 = local_48;
      pfVar30 = local_ac;
      if ((float10)*(float *)(local_48 + 0x78) <= fVar34 + (float10)local_1a8) {
        uStack_1e8._0_2_ = 0x6fc8;
        uStack_1e8._2_2_ = 0x68;
        pvVar18 = operator_new(0xe);
        local_8._0_1_ = 0xe;
        if (pvVar18 == (void *)0x0) {
          local_ac = (float *)0x0;
        }
        else {
          uStack_1e8._0_2_ = SUB42(pfVar30,0);
          uStack_1e8._2_2_ = (undefined2)((uint)pfVar30 >> 0x10);
          piStack_1f0 = (int *)0x686fe1;
          pfStack_1ec = pfVar31;
          local_ac = (float *)FUN_0068ad00();
        }
        pfVar31 = local_ac;
        if (local_a8 != 0) {
          pfVar30[2] = (float)local_ac;
          pfVar31 = local_b0;
        }
        local_b0 = pfVar31;
        local_8._0_1_ = 9;
        local_d4 = &PTR_LAB_007e378c;
        local_a8 = local_a8 + 1;
        FUN_004174b0();
        local_8._0_1_ = 8;
        local_13c = &PTR_LAB_007f3a6c;
        FUN_0068aac0();
        piVar29 = local_f8;
        goto joined_r0x00686acf;
      }
    }
    FUN_00457e10();
    local_128 = &PTR_FUN_007e4c84;
    local_e8 = &PTR_LAB_007e378c;
    local_e4 = (int *)0x0;
    local_e0 = (int *)0x0;
    local_dc = 0;
    local_d8 = 0;
    local_8 = CONCAT31(local_8._1_3_,0x10);
    local_3c = (float *)(local_c8 + -1);
    pfVar31 = local_30;
    local_c0 = local_138;
joined_r0x00687095:
    local_30 = pfVar31;
    if ((local_c0 != (float *)0x0) && (*(char *)((int)pfVar31 + 0x82) == '\0')) {
      pfVar30 = (float *)*local_c0;
      local_c0 = (float *)local_c0[2];
      uStack_1e8._0_2_ = 0x70c3;
      uStack_1e8._2_2_ = 0x68;
      local_20 = pfVar30;
      local_40 = FUN_004e9370();
      local_2c = (float *)0x0;
      local_50 = 0;
      local_b8 = 0;
      piVar29 = *(int **)((int)pfVar31 + 0x72);
      while (piVar29 != (int *)0x0) {
        piVar23 = (int *)piVar29[2];
        iVar17 = *piVar29;
        piVar29 = piVar23;
        if (*(float *)(iVar17 + 0xc) == pfVar30[1]) {
          iVar15 = (**(code **)(*(int *)(iVar17 + 0x22) + 4))();
          local_2c = (float *)((int)local_2c + iVar15);
          FUN_0051c480();
          iVar15 = FUN_0050a580();
          if (local_50 < iVar15) {
            FUN_0051c480();
            local_50 = FUN_0050a580();
            if (*(int *)(iVar17 + 0x14a) != 0) {
              iVar17 = FUN_0051c480();
              local_b8 = *(int *)(iVar17 + 0x12);
            }
          }
        }
      }
      local_15c = 0;
      local_168 = (undefined4 *)0x0;
      local_164 = (undefined4 *)0x0;
      local_160 = 0;
      local_16c = &PTR_FUN_007e4c84;
      uStack_1e8._0_2_ = SUB42(local_30,0);
      uStack_1e8._2_2_ = (undefined2)((uint)local_30 >> 0x10);
      local_8._1_3_ = (uint3)(local_8 >> 8);
      local_8 = CONCAT31(local_8._1_3_,0x11);
      piStack_1f0 = (int *)0x68717f;
      pfStack_1ec = pfVar30;
      local_64 = (int *)FUN_00688e30();
      puVar16 = local_d0;
      if (local_64 != (int *)0x0) {
        for (; puVar16 != (undefined4 *)0x0; puVar16 = (undefined4 *)puVar16[2]) {
          uStack_1e8._0_2_ = (undefined2)*puVar16;
          uStack_1e8._2_2_ = (undefined2)((uint)*puVar16 >> 0x10);
          pfStack_1ec = (float *)0x6871aa;
          cVar14 = (*(code *)local_d4[3])();
          if (cVar14 != '\0') {
            if (puVar16 != (undefined4 *)0x0) goto LAB_006871be;
            break;
          }
        }
        local_3c = (float *)((int)local_3c + 1);
LAB_006871be:
        local_71 = FUN_0051cb20();
        piVar29 = local_1c;
        if ((*(char *)(pfVar30 + 0x10) != '\0') && (local_100 != 0)) {
          if (*(char *)(local_40 + 0x470) != '\0') {
            FUN_0044e1d0();
            uStack_1e8._0_2_ = 0x7202;
            uStack_1e8._2_2_ = 0x68;
            cVar14 = FUN_004ccb10();
            if (cVar14 == '\0') goto LAB_006872c5;
          }
          iVar17 = FUN_004ccd60();
          if (2 < iVar17) {
            iVar17 = 0;
            local_28 = (float *)0x0;
            if (0 < *(int *)(local_58 + 0x290)) {
              param_2 = (float *)0x0;
              do {
                if (*(int *)((int)param_2 + 4 + *(int *)(local_58 + 0x298)) != 4) {
                  uStack_1e8._0_2_ = 0x724e;
                  uStack_1e8._2_2_ = 0x68;
                  iVar15 = FUN_004e9370();
                  if (*(int *)(iVar15 + 0x3d8) != piVar29[7]) {
                    if (*(int *)(iVar15 + 0x3d8) == 0) goto LAB_00687298;
                    uStack_1e8._0_2_ = 0x7273;
                    uStack_1e8._2_2_ = 0x68;
                    cVar14 = FUN_00586230();
                    if (cVar14 == '\0') {
                      uStack_1e8._0_2_ = 0x7291;
                      uStack_1e8._2_2_ = 0x68;
                      cVar14 = FUN_005861a0();
                      if (cVar14 == '\0') goto LAB_00687298;
                    }
                  }
                  local_28 = (float *)((int)local_28 + 1);
                }
LAB_00687298:
                param_2 = (float *)((int)param_2 + 0xc);
                iVar17 = iVar17 + 1;
              } while (iVar17 < *(int *)(local_58 + 0x290));
              if (1 < (int)local_28) goto LAB_006872c5;
            }
            if (*(int *)(local_48 + 0x84) < 2) goto LAB_00687f32;
          }
        }
LAB_006872c5:
        do {
          piVar29 = local_64;
          if (*(char *)((int)local_30 + 0x82) != '\0') break;
          FUN_0051c480();
          iVar17 = FUN_0050a580();
          if (local_50 < iVar17) {
            FUN_0051c480();
            local_50 = FUN_0050a580();
            if (*(int *)((int)piVar29 + 0x14a) != 0) {
              iVar17 = FUN_0051c480();
              local_b8 = *(int *)(iVar17 + 0x12);
            }
          }
          param_2 = (float *)0x0;
          local_88 = (float *)0x0;
          local_84 = (float *)0x0;
          local_80 = 0;
          local_7c = 0;
          local_8c = &PTR_LAB_007e5e04;
          local_8 = CONCAT31(local_8._1_3_,0x12);
          local_14 = (int *)0x0;
          ppuVar22 = local_9c;
joined_r0x00687349:
          if (ppuVar22 != (undefined **)0x0) {
            local_18 = (undefined **)ppuVar22[2];
            local_28 = (float *)*ppuVar22;
            uStack_1e8._0_2_ = 0x736b;
            uStack_1e8._2_2_ = 0x68;
            cVar14 = FUN_004e7970();
            ppuVar22 = local_18;
            if ((cVar14 != '\0') && (local_28 != local_30)) {
              local_14 = (int *)((int)local_14 + 1);
              iVar17 = DAT_00ab27b4 + (int)local_28[1] * 0x4b2;
              for (pfVar31 = local_88; pfVar31 != (float *)0x0; pfVar31 = (float *)pfVar31[2]) {
                uStack_1e8._0_2_ = SUB42(*pfVar31,0);
                uStack_1e8._2_2_ = (undefined2)((uint)*pfVar31 >> 0x10);
                pfStack_1ec = (float *)0x6873c3;
                cVar14 = (*(code *)local_8c[3])();
                if (cVar14 != '\0') {
                  pfVar30 = local_b0;
                  pfVar4 = local_88;
                  if (pfVar31 != (float *)0x0) goto joined_r0x00687425;
                  break;
                }
              }
              pfVar31 = local_84;
              uVar26 = *(undefined4 *)(iVar17 + 0x482);
              uStack_1e8._0_2_ = 0x73e4;
              uStack_1e8._2_2_ = 0x68;
              local_84 = operator_new(0xe);
              if (local_84 == (float *)0x0) {
                local_84 = (float *)0x0;
              }
              else {
                *local_84 = (float)uVar26;
                local_84[1] = (float)pfVar31;
                local_84[2] = 0.0;
                *(undefined1 *)(local_84 + 3) = 0;
              }
              iVar17 = local_80 + 1;
              bVar32 = local_80 != 0;
              pfVar30 = local_b0;
              pfVar4 = local_84;
              local_80 = iVar17;
              if (bVar32) {
                pfVar31[2] = (float)local_84;
                pfVar4 = local_88;
              }
joined_r0x00687425:
              do {
                local_88 = pfVar4;
                if (pfVar30 == (float *)0x0) goto LAB_00687457;
                uStack_1e8._0_2_ = SUB42(*pfVar30,0);
                uStack_1e8._2_2_ = (undefined2)((uint)*pfVar30 >> 0x10);
                pfStack_1ec = (float *)0x68743a;
                cVar14 = (*(code *)local_b4[3])();
                if (cVar14 != '\0') {
                  if ((pfVar30 != (float *)0x0) &&
                     (ppuVar22 = local_18, 1 < *(int *)(local_48 + 0x84))) break;
                  goto LAB_00687457;
                }
                pfVar30 = (float *)pfVar30[2];
                pfVar4 = local_88;
              } while( true );
            }
            goto joined_r0x00687349;
          }
          FUN_006a9d50();
          bVar32 = false;
          cVar14 = FUN_004e46e0();
          iVar17 = local_58;
          if (cVar14 == '\0') {
            bVar32 = local_14 == (int *)0x0;
            iVar15 = (**(code **)(*(int *)(*(int *)(local_58 + 0x482) + 0x28) + 4))();
            pfVar31 = local_30;
            if ((iVar15 < 4) && (local_80 < 2)) {
              bVar32 = true;
            }
            if (*(char *)(local_30 + 0x23) != '\0') {
              if (local_41 == '\0') {
                uStack_1e8._0_2_ = 0x74ce;
                uStack_1e8._2_2_ = 0x68;
                fVar34 = (float10)FUN_006afaf0();
                if (fVar34 != (float10)_DAT_007e3380) goto LAB_006874ea;
              }
              if (0 < *(int *)(local_48 + 0x84)) {
                bVar32 = true;
              }
            }
LAB_006874ea:
            if ((local_190 <= local_1c[3] + 1) &&
               (*(int *)(local_40 + 0x12) != *(int *)(local_1c[7] + 0x117de))) {
              bVar32 = true;
            }
            if (param_2 == (float *)0x0) {
              bVar32 = true;
            }
            if ((*(float *)(local_1c[7] + 0x117de) == pfVar31[1]) && (0 < *(int *)(local_48 + 0x84))
               ) {
              bVar32 = true;
            }
            if ((*(float *)(*(int *)(iVar17 + 0x3d8) + 0x117de) == pfVar31[1]) &&
               (0 < *(int *)(local_48 + 0x84))) {
              bVar32 = true;
            }
          }
          pfVar31 = local_20;
          piVar29 = local_64;
          piVar23 = local_124;
          if ((*(int *)(local_48 + 0x84) != 3) && (!bVar32)) {
            local_18 = (undefined **)(float)(int)param_2;
            local_14 = (int *)((float)(int)param_2 * _DAT_007e34c0);
            local_1c0 = (float *)(int)ROUND((float)local_14);
            pfVar30 = local_1c0;
            if (4 < (int)local_1c0) {
              pfVar30 = (float *)0x5;
            }
            local_28 = pfVar30;
            if (*(char *)((int)local_20 + 0x41) != '\0') {
              if (*(char *)(local_40 + 0x470) != '\0') {
                FUN_0044e1d0();
                uStack_1e8._0_2_ = 0x75c4;
                uStack_1e8._2_2_ = 0x68;
                cVar14 = FUN_004ccb10();
                if (cVar14 == '\0') goto LAB_006875e6;
              }
              local_18 = (undefined **)((float)local_18 * _DAT_007e4094);
              pfVar30 = (float *)(int)ROUND((float)local_18);
              local_1ac = pfVar30;
              local_28 = pfVar30;
            }
LAB_006875e6:
            if ((pfVar30 == (float *)0x0) && (0 < (int)param_2)) {
              local_28 = (float *)0x1;
            }
            local_14 = (int *)0x0;
            param_2 = (float *)0x0;
            piVar23 = (int *)pfVar31[0x12];
            piVar29 = local_64;
joined_r0x00687603:
            local_64 = piVar29;
            if (piVar23 != (int *)0x0) {
              pfVar30 = pfVar31 + 1;
              piVar6 = (int *)piVar23[2];
              iVar17 = *piVar23;
              piVar23 = piVar6;
              pfVar31 = local_20;
              if ((*(float *)(iVar17 + 0xc) == *pfVar30) &&
                 (((cVar14 = (**(code **)(*(int *)(iVar17 + 0x22e) + 8))(), pfVar31 = local_20,
                   piVar29 = local_64, cVar14 != '\0' || (*(int *)(iVar17 + 0x264) == 4)) &&
                  (puVar16 = local_168, *(char *)(iVar17 + 0x17b) == '\0')))) {
                for (; piVar6 = local_f8, puVar16 != (undefined4 *)0x0;
                    puVar16 = (undefined4 *)puVar16[2]) {
                  uStack_1e8._0_2_ = (undefined2)*puVar16;
                  uStack_1e8._2_2_ = (undefined2)((uint)*puVar16 >> 0x10);
                  pfStack_1ec = (float *)0x68766b;
                  cVar14 = (*(code *)local_16c[3])();
                  if (cVar14 != '\0') {
                    piVar6 = local_f8;
                    piVar29 = local_64;
                    pfVar31 = local_20;
                    if (puVar16 != (undefined4 *)0x0) goto joined_r0x00687603;
                    break;
                  }
                }
                do {
                  if (piVar6 == (int *)0x0) goto LAB_006876aa;
                  uStack_1e8._0_2_ = (undefined2)*piVar6;
                  uStack_1e8._2_2_ = (undefined2)((uint)*piVar6 >> 0x10);
                  pfStack_1ec = (float *)0x687699;
                  cVar14 = (*(code *)local_fc[3])();
                  if (cVar14 != '\0') {
                    piVar29 = local_64;
                    pfVar31 = local_20;
                    if (piVar6 != (int *)0x0) break;
                    goto LAB_006876aa;
                  }
                  piVar6 = (int *)piVar6[2];
                } while( true );
              }
              goto joined_r0x00687603;
            }
            piVar6 = (int *)((int)piVar29 + 0x22);
            iVar17 = (**(code **)(*(int *)((int)piVar29 + 0x22) + 4))();
            if (((int)param_2 - iVar17 < (int)local_28) || (piVar23 = local_124, (int)local_14 < 2))
            {
              iVar17 = (**(code **)(*piVar6 + 4))();
              piVar7 = local_120;
              if ((iVar17 < 2) || ((int)param_2 + -1 < (int)local_28)) {
                uStack_1e8._0_2_ = 0x7837;
                uStack_1e8._2_2_ = 0x68;
                local_120 = operator_new(0xe);
                if (local_120 == (int *)0x0) {
                  local_120 = (int *)0x0;
                }
                else {
                  *local_120 = (int)piVar29;
                  local_120[1] = (int)piVar7;
                  local_120[2] = 0;
                  *(undefined1 *)(local_120 + 3) = 0;
                }
                iVar17 = local_11c + 1;
                bVar32 = local_11c != 0;
                piVar23 = local_120;
                local_11c = iVar17;
                if (bVar32) {
                  piVar7[2] = (int)local_120;
                  piVar23 = local_124;
                }
              }
              else {
                iVar17 = (**(code **)(*piVar29 + 0x24))();
                piVar23 = local_124;
                if (iVar17 != 0) {
                  iVar20 = (**(code **)(*piVar6 + 4))();
                  local_18 = (undefined **)local_20[1];
                  FUN_00522770();
                  pfStack_1ec = local_1cc;
                  uStack_1e8._0_2_ = SUB42(local_18,0);
                  uStack_1e8._2_2_ = (undefined2)((uint)local_18 >> 0x10);
                  piStack_1f0 = (int *)0x68774a;
                  FUN_00689890();
                  uStack_1e8._0_2_ = 0x7756;
                  uStack_1e8._2_2_ = 0x68;
                  iVar15 = FUN_00428ee0();
                  if (iVar15 == 0) {
                    iVar15 = 0;
                  }
                  else {
                    iVar15 = iVar15 + -0x14;
                  }
                  iVar28 = (**(code **)(*piVar6 + 4))();
                  while (((1 < iVar28 &&
                          (iVar28 = (**(code **)(*(int *)(iVar15 + 0x22) + 4))(),
                          iVar28 + ((int)param_2 - iVar20) < (int)local_28)) && (iVar17 != 0))) {
                    uStack_1e8._0_2_ = (undefined2)iVar15;
                    uStack_1e8._2_2_ = (undefined2)((uint)iVar15 >> 0x10);
                    pfStack_1ec = (float *)0x687796;
                    FUN_0045e6c0();
                    iVar17 = (**(code **)(*local_64 + 0x24))();
                    iVar28 = (**(code **)(*piVar6 + 4))();
                  }
                  piVar6 = local_120;
                  uStack_1e8._0_2_ = 0x77b9;
                  uStack_1e8._2_2_ = 0x68;
                  local_120 = operator_new(0xe);
                  if (local_120 == (int *)0x0) {
                    local_120 = (int *)0x0;
                  }
                  else {
                    *local_120 = iVar15;
                    local_120[1] = (int)piVar6;
                    local_120[2] = 0;
                    *(undefined1 *)(local_120 + 3) = 0;
                  }
                  iVar17 = local_11c + 1;
                  bVar32 = local_11c != 0;
                  piVar29 = local_64;
                  piVar23 = local_120;
                  local_11c = iVar17;
                  if (bVar32) {
                    piVar6[2] = (int)local_120;
                    piVar23 = local_124;
                  }
                }
              }
            }
          }
          local_124 = piVar23;
          piVar6 = local_24;
          iVar17 = local_24[2];
          piVar23 = local_24 + 2;
          uStack_1e8._0_2_ = 0x7806;
          uStack_1e8._2_2_ = 0x68;
          puVar24 = operator_new(0xe);
          puVar16 = local_164;
          if (puVar24 == (undefined4 *)0x0) {
            puVar24 = (undefined4 *)0x0;
          }
          else {
            *puVar24 = piVar29;
            puVar24[1] = iVar17;
            puVar24[2] = 0;
            *(undefined1 *)(puVar24 + 3) = 0;
          }
          *piVar23 = (int)puVar24;
          iVar15 = piVar6[3];
          piVar6[3] = iVar15 + 1;
          if (iVar15 == 0) {
            piVar6[1] = *piVar23;
          }
          else {
            *(int *)(iVar17 + 8) = *piVar23;
          }
          uStack_1e8._0_2_ = 0x78a8;
          uStack_1e8._2_2_ = 0x68;
          local_164 = operator_new(0xe);
          if (local_164 == (undefined4 *)0x0) {
            local_164 = (undefined4 *)0x0;
          }
          else {
            *local_164 = piVar29;
            local_164[1] = puVar16;
            local_164[2] = 0;
            *(undefined1 *)(local_164 + 3) = 0;
          }
          puVar24 = local_164;
          if (local_160 != 0) {
            puVar16[2] = local_164;
            puVar24 = local_168;
          }
          local_168 = puVar24;
          local_160 = local_160 + 1;
          iVar17 = (**(code **)(*(int *)((int)piVar29 + 0x22) + 4))();
          pfVar31 = local_30;
          local_2c = (float *)((int)local_2c + iVar17);
          local_1b0 = local_30[0x21];
          uStack_1e8._0_2_ = 0;
          uStack_1e8._2_2_ = 0;
          pfStack_1ec = (float *)0x687914;
          fVar34 = (float10)FUN_006afaf0();
          uStack_1e8 = (undefined ***)
                       (float)(((float10)_DAT_007e3374 - (float10)((int)local_3c / 10)) * fVar34);
          pfStack_1ec = (float *)0x1;
          piStack_1f0 = (int *)0x687941;
          fVar34 = (float10)FUN_006afdb0();
          pfStack_1ec = (float *)(float)fVar34;
          piStack_1f0 = (int *)0x68794f;
          fVar34 = (float10)FUN_00689210();
          if ((float10)*(float *)(local_48 + 0x78) <= fVar34 + (float10)local_1b0) {
            *(undefined1 *)((int)pfVar31 + 0x82) = 1;
          }
          uStack_1e8._0_2_ = SUB42(pfVar31,0);
          uStack_1e8._2_2_ = (undefined2)((uint)pfVar31 >> 0x10);
          pfStack_1ec = local_20;
          piStack_1f0 = (int *)0x68797c;
          piVar29 = (int *)FUN_00688e30();
          local_8 = CONCAT31(local_8._1_3_,0x11);
          local_8c = &PTR_LAB_007e5e04;
          local_64 = piVar29;
          FUN_0045b910();
        } while (piVar29 != (int *)0x0);
        bVar32 = false;
        if (local_71 == '\0') {
          local_20 = (float *)0x1;
        }
        else {
          local_20 = DAT_00dc15fc;
        }
        if (((int)local_20 * local_50 < (int)local_2c) && (local_50 < DAT_00dc15cc)) {
          local_28 = (float *)0x0;
          pfVar31 = *(float **)((int)local_30 + 0x72);
          if (*(float **)((int)local_30 + 0x72) == (float *)0x0) goto LAB_00687de4;
          do {
            pfVar30 = (float *)pfVar31[2];
            pfVar4 = (float *)*pfVar31;
            iVar17 = local_1c[7];
            iVar15 = FUN_00522770();
            pfVar31 = local_28;
            if (((iVar15 == iVar17) && (pfVar31 = pfVar4, local_28 != (float *)0x0)) &&
               (cVar14 = FUN_0051cc00(), pfVar31 = local_28, cVar14 != '\0')) break;
            local_28 = pfVar31;
            pfVar31 = pfVar30;
            pfVar4 = local_28;
          } while (pfVar30 != (float *)0x0);
          local_28 = pfVar4;
          iVar17 = 0;
          if (local_28 == (float *)0x0) goto LAB_00687de4;
          local_40 = 0;
          local_1a0 = 0;
          local_19c = 0;
          local_198 = 0;
          local_194 = 0;
          local_1a4 = &PTR_LAB_007e4a74;
          local_8 = CONCAT31(local_8._1_3_,0x13);
          local_14 = *(int **)(local_1c[7] + 0x117f8);
          if (local_14 == (int *)0x0) {
LAB_00687bba:
            FUN_0051c480();
            iVar15 = FUN_0050a580();
            local_50 = iVar15;
            iVar17 = FUN_0051c480();
            local_b8 = *(int *)(iVar17 + 0x12);
          }
          else {
            do {
              iVar15 = *local_14;
              local_14 = (int *)local_14[2];
              cVar14 = FUN_00509ed0();
              if ((cVar14 != '\0') && (*(char *)(iVar15 + 0x2c) == '\0')) {
                uStack_1e8._0_2_ = 0x7a9f;
                uStack_1e8._2_2_ = 0x68;
                cVar14 = FUN_00509f10();
                if (cVar14 != '\0') {
                  local_18 = *(undefined ***)(iVar15 + 0x12);
                  for (piVar29 = local_110; piVar29 != (int *)0x0; piVar29 = (int *)piVar29[2]) {
                    uStack_1e8._0_2_ = (undefined2)*piVar29;
                    uStack_1e8._2_2_ = (undefined2)((uint)*piVar29 >> 0x10);
                    pfStack_1ec = (float *)0x687ac9;
                    cVar14 = (*(code *)local_114[3])();
                    if (cVar14 != '\0') {
                      if (piVar29 != (int *)0x0) goto LAB_00687b06;
                      break;
                    }
                  }
                  if (iVar17 != 0) {
                    iVar20 = FUN_0050a580();
                    iVar28 = FUN_0050a580();
                    if (iVar20 <= iVar28) goto LAB_00687b06;
                  }
                  cVar14 = FUN_0051cc00();
                  iVar17 = iVar15;
                  if ((cVar14 != '\0') && (*(int *)(iVar15 + 0x22) < 2)) break;
                }
              }
LAB_00687b06:
            } while (local_14 != (int *)0x0);
            local_40 = iVar17;
            if (iVar17 == 0) goto LAB_00687bba;
            iVar15 = *(int *)(iVar17 + 0x22);
            iVar20 = FUN_0051c480();
            if (*(int *)(iVar20 + 0x22) <= iVar15) {
              iVar15 = *(int *)(iVar17 + 0x22);
              iVar20 = FUN_0051c480();
              if (iVar15 <= *(int *)(iVar20 + 0x22)) {
                fVar34 = (float10)FUN_00509fb0();
                local_18 = (undefined **)(float)fVar34;
                FUN_0051c480();
                fVar34 = (float10)FUN_00509fb0();
                if (fVar34 < (float10)(float)local_18) goto LAB_00687b5f;
              }
              goto LAB_00687bba;
            }
LAB_00687b5f:
            puVar25 = (undefined2 *)FUN_0044df10();
            local_18 = (undefined **)&uStack_1e8;
            uStack_1e8._0_2_ = *puVar25;
            uStack_1e8._2_2_ = (undefined2)*(undefined4 *)(puVar25 + 1);
            pfStack_1ec = (float *)0x687b83;
            uVar26 = FUN_00447250();
            local_18 = (undefined **)&piStack_1f0;
            FUN_00449290(uVar26);
            FUN_00667670();
            FUN_00461a90();
            iVar15 = FUN_0050a580();
            local_b8 = *(int *)(iVar17 + 0x12);
            local_50 = iVar15;
          }
          if (((int)local_20 * iVar15 < (int)local_2c) && (local_50 < DAT_00dc15cc)) {
            piVar29 = *(int **)(local_1c[7] + 0x4508);
joined_r0x00687c12:
            do {
              local_14 = piVar29;
              if (piVar29 == (int *)0x0) goto LAB_00687d2b;
              local_14 = (int *)piVar29[2];
              iVar17 = *piVar29;
              iVar15 = local_1c[7];
              iVar20 = FUN_00522770();
              piVar29 = local_14;
              if ((((iVar20 == iVar15) &&
                   (iVar15 = (**(code **)(*(int *)(iVar17 + 0x11c) + 4))(), piVar29 = local_14,
                   iVar15 == 0)) && (cVar14 = FUN_0051cc30(), piVar29 = local_14, cVar14 == '\0'))
                 && (iVar15 = FUN_0051c480(), piVar29 = local_14, *(int *)(iVar17 + 0x14a) != 0)) {
                uStack_1e8._0_2_ = 0x7c85;
                uStack_1e8._2_2_ = 0x68;
                cVar14 = FUN_00509f10();
                piVar29 = local_14;
                piVar23 = local_110;
                if (cVar14 != '\0') {
                  for (; piVar6 = local_e4, piVar23 != (int *)0x0; piVar23 = (int *)piVar23[2]) {
                    uStack_1e8._0_2_ = (undefined2)*piVar23;
                    uStack_1e8._2_2_ = (undefined2)((uint)*piVar23 >> 0x10);
                    pfStack_1ec = (float *)0x687cad;
                    cVar14 = (*(code *)local_114[3])();
                    if (cVar14 != '\0') {
                      piVar29 = local_14;
                      piVar6 = local_e4;
                      if (piVar23 != (int *)0x0) goto joined_r0x00687c12;
                      break;
                    }
                  }
                  do {
                    if (piVar6 == (int *)0x0) goto LAB_00687cef;
                    uStack_1e8._0_2_ = (undefined2)*piVar6;
                    uStack_1e8._2_2_ = (undefined2)((uint)*piVar6 >> 0x10);
                    pfStack_1ec = (float *)0x687cde;
                    cVar14 = (*(code *)local_e8[3])();
                    if (cVar14 != '\0') {
                      piVar29 = local_14;
                      if (piVar6 != (int *)0x0) break;
                      goto LAB_00687cef;
                    }
                    piVar6 = (int *)piVar6[2];
                  } while( true );
                }
              }
            } while( true );
          }
          goto LAB_00687da3;
        }
        goto LAB_00687de4;
      }
      goto LAB_00687f32;
    }
    local_18 = (undefined **)((int)pfVar31 + 0x72);
    puVar9 = *local_18;
    do {
      if (puVar9 == (undefined *)0x0) goto LAB_0068855a;
      puVar9 = *(undefined **)(puVar9 + 8);
      piVar29 = local_124;
      while( true ) {
        if (piVar29 == (int *)0x0) goto LAB_00687fa1;
        uStack_1e8._0_2_ = (undefined2)*piVar29;
        uStack_1e8._2_2_ = (undefined2)((uint)*piVar29 >> 0x10);
        pfStack_1ec = (float *)0x687f86;
        cVar14 = (*(code *)local_128[3])();
        if (cVar14 != '\0') break;
        piVar29 = (int *)piVar29[2];
      }
    } while (piVar29 != (int *)0x0);
LAB_00687fa1:
    pfVar30 = local_30;
    pfVar31 = local_b0;
    if (*(char *)((int)local_30 + 0x82) == '\0') {
      local_170 = local_30[0x21];
      uStack_1e8._0_2_ = 0;
      uStack_1e8._2_2_ = 0;
      pfStack_1ec = (float *)0x687fc8;
      fVar34 = (float10)FUN_006afaf0();
      uStack_1e8 = (undefined ***)
                   (float)(((float10)_DAT_007e3374 - (float10)((int)local_3c / 10)) * fVar34);
      pfStack_1ec = (float *)0x1;
      piStack_1f0 = (int *)0x687ff5;
      fVar34 = (float10)FUN_006afdb0();
      pfStack_1ec = (float *)(float)fVar34;
      piStack_1f0 = (int *)0x688001;
      fVar34 = (float10)FUN_00689210();
      pfVar31 = local_b0;
      if ((float10)local_68 <= fVar34 + (float10)local_170) goto joined_r0x00688021;
LAB_0068855a:
      (**(code **)(*local_24 + 0x10))();
      piVar29 = local_124;
      while (piVar29 != (int *)0x0) {
        piVar29 = (int *)piVar29[2];
        uStack_1e8._0_2_ = 0x8577;
        uStack_1e8._2_2_ = 0x68;
        FUN_00796cd8();
      }
      local_124 = (int *)0x0;
      local_120 = (int *)0x0;
      local_11c = 0;
      piVar29 = local_e4;
      while (piVar29 != (int *)0x0) {
        piVar29 = (int *)piVar29[2];
        uStack_1e8._0_2_ = 0x85a5;
        uStack_1e8._2_2_ = 0x68;
        FUN_00796cd8();
      }
      local_e0 = (int *)0x0;
      local_dc = 0;
      local_e4 = (int *)0x0;
    }
    else {
joined_r0x00688021:
      for (; pfVar31 != (float *)0x0; pfVar31 = (float *)pfVar31[2]) {
        uStack_1e8._0_2_ = SUB42(*pfVar31,0);
        uStack_1e8._2_2_ = (undefined2)((uint)*pfVar31 >> 0x10);
        pfStack_1ec = (float *)0x688036;
        cVar14 = (*(code *)local_b4[3])();
        if (cVar14 != '\0') {
          pfVar4 = local_b0;
          if (pfVar31 != (float *)0x0) goto LAB_0068808f;
          break;
        }
      }
      pfVar31 = local_ac;
      uStack_1e8._0_2_ = 0x8054;
      uStack_1e8._2_2_ = 0x68;
      local_ac = operator_new(0xe);
      if (local_ac == (float *)0x0) {
        local_ac = (float *)0x0;
      }
      else {
        *local_ac = (float)pfVar30;
        local_ac[1] = (float)pfVar31;
        local_ac[2] = 0.0;
        *(undefined1 *)(local_ac + 3) = 0;
      }
      iVar17 = local_a8 + 1;
      bVar32 = local_a8 != 0;
      pfVar4 = local_ac;
      local_a8 = iVar17;
      if (bVar32) {
        pfVar31[2] = (float)local_ac;
        pfVar4 = local_b0;
      }
LAB_0068808f:
      local_b0 = pfVar4;
      local_49 = '\x01';
      local_70 = *(undefined4 *)(DAT_00893530 + 0x14);
      local_6c = *(undefined2 *)(DAT_00893530 + 0x18);
      local_5c = 0;
      local_60 = local_60 & 0xff000000;
      local_188 = (int *)0x0;
      local_184 = (int *)0x0;
      local_180 = 0;
      local_17c = 0;
      local_18c = &PTR_FUN_007e4c84;
      local_8 = CONCAT31(local_8._1_3_,0x14);
      local_74 = 0;
      local_78 = local_78 & 0xff000000;
      local_20 = (float *)0x0;
      iVar17 = (**(code **)(*local_24 + 4))();
      local_14 = (int *)*local_18;
      if (local_14 != (int *)0x0) {
        do {
          piVar29 = local_f4;
          iVar15 = *local_14;
          local_14 = (int *)local_14[2];
          if (iVar15 != 0) {
            uStack_1e8._0_2_ = 0x8131;
            uStack_1e8._2_2_ = 0x68;
            local_f4 = operator_new(0xe);
            if (local_f4 == (int *)0x0) {
              local_f4 = (int *)0x0;
            }
            else {
              *local_f4 = iVar15;
              local_f4[1] = (int)piVar29;
              local_f4[2] = 0;
              *(undefined1 *)(local_f4 + 3) = 0;
            }
            piVar23 = local_f4;
            if (local_f0 != 0) {
              piVar29[2] = (int)local_f4;
              piVar23 = local_f8;
            }
            local_f8 = piVar23;
            local_f0 = local_f0 + 1;
            puVar25 = (undefined2 *)FUN_00447250();
            local_18 = (undefined **)&uStack_1e8;
            uStack_1e8._0_2_ = *puVar25;
            uStack_1e8._2_2_ = (undefined2)*(undefined4 *)(puVar25 + 1);
            piVar29 = local_1c + 0x32;
            pfStack_1ec = (float *)0x6881a2;
            cVar14 = (**(code **)(local_1c[0x32] + 0x24))();
            piVar23 = local_124;
            if (cVar14 != '\0') {
              puVar25 = (undefined2 *)FUN_00447250();
              local_18 = (undefined **)&uStack_1e8;
              uStack_1e8._0_2_ = *puVar25;
              uStack_1e8._2_2_ = (undefined2)*(undefined4 *)(puVar25 + 1);
              pfStack_1ec = (float *)0x6881c8;
              (**(code **)(*piVar29 + 0x18))();
              piVar23 = local_124;
            }
            for (; piVar23 != (int *)0x0; piVar23 = (int *)piVar23[2]) {
              uStack_1e8._0_2_ = (undefined2)*piVar23;
              uStack_1e8._2_2_ = (undefined2)((uint)*piVar23 >> 0x10);
              pfStack_1ec = (float *)0x6881e5;
              cVar14 = (*(code *)local_128[3])();
              if (cVar14 != '\0') {
                if (piVar23 != (int *)0x0) {
                  iVar20 = 4;
                  local_54 = (float *)CONCAT31(local_54._1_3_,1);
                  goto LAB_00688200;
                }
                break;
              }
            }
            iVar20 = 1;
            local_54 = (float *)CONCAT31(local_54._1_3_,iVar17 < 2);
LAB_00688200:
            if ((*(int *)(iVar15 + 0x264) == iVar20) &&
               (*(int *)(iVar15 + 0x268) == *(int *)(local_58 + 0x12))) {
              uStack_1e8._0_2_ = 0x8227;
              uStack_1e8._2_2_ = 0x68;
              cVar14 = FUN_0042ddd0();
              if (((cVar14 == '\0') || (local_79 == '\0')) && (iVar20 != 4)) {
                local_78 = *(uint *)(iVar15 + 0x222);
                local_79 = '\x01';
                local_74 = *(undefined2 *)(iVar15 + 0x226);
              }
            }
            else {
              local_144 = local_144 & 0xff000000;
              uStack_1e8._0_2_ = 0;
              uStack_1e8._2_2_ = 0xbf80;
              pfStack_1ec = (float *)0x0;
              piStack_1f0 = (int *)0x1;
              FUN_0050b600(iVar15,iVar20,*(undefined4 *)(local_58 + 0x12),0x3f800000,1,1,local_70,
                           local_6c,local_144,0,1,0xffffffff,0);
              if (iVar20 == 1) {
                uStack_1e8._0_2_ = 0x82e2;
                uStack_1e8._2_2_ = 0x68;
                cVar14 = FUN_0042dd70();
                piVar29 = local_184;
                if (cVar14 != '\0') {
                  local_60 = *(uint *)(iVar15 + 0x222);
                  local_5c = *(undefined2 *)(iVar15 + 0x226);
                }
                uStack_1e8._0_2_ = 0x8300;
                uStack_1e8._2_2_ = 0x68;
                local_184 = operator_new(0xe);
                if (local_184 == (int *)0x0) {
                  local_184 = (int *)0x0;
                }
                else {
                  *local_184 = iVar15;
                  local_184[1] = (int)piVar29;
                  local_184[2] = 0;
                  *(undefined1 *)(local_184 + 3) = 0;
                }
                piVar23 = local_184;
                if (local_180 != 0) {
                  piVar29[2] = (int)local_184;
                  piVar23 = local_188;
                }
                local_188 = piVar23;
                local_20 = (float *)((int)local_20 + 1);
                local_180 = local_180 + 1;
              }
            }
          }
        } while (local_14 != (int *)0x0);
        if (1 < (int)local_20) {
          uStack_1e8._0_2_ = 0x8363;
          uStack_1e8._2_2_ = 0x68;
          cVar14 = FUN_0042dd70();
          piVar29 = local_188;
          uVar12 = local_78;
          uVar13 = local_74;
          if ((cVar14 == '\0') && (uVar12 = local_60, uVar13 = local_5c, DAT_00dc1735 != '\0')) {
            uStack_1e8 = (undefined ***)local_1b8;
            pfStack_1ec = (float *)0x688393;
            pcVar27 = (char *)FUN_0042e060();
            local_bc = (void *)(int)ROUND((float)((int)*pcVar27 +
                                                 ((int)pcVar27[1] +
                                                 ((int)pcVar27[2] + *(short *)(pcVar27 + 4) * 0xc) *
                                                 0x1e) * 0x18) * _DAT_0087731c);
            uStack_1e8._0_2_ = 0x83de;
            uStack_1e8._2_2_ = 0x68;
            FUN_0042db80();
            piVar29 = local_188;
            uVar12 = local_60;
            uVar13 = local_5c;
          }
          while (local_5c = uVar13, local_60 = uVar12, piVar29 != (int *)0x0) {
            piVar23 = (int *)piVar29[2];
            iVar17 = *piVar29;
            uStack_1e8._0_2_ = 0x83fa;
            uStack_1e8._2_2_ = 0x68;
            puVar16 = operator_new(0xc);
            local_8._0_1_ = 0x15;
            if (puVar16 != (undefined4 *)0x0) {
              uStack_1e8._0_2_ = 0x8415;
              uStack_1e8._2_2_ = 0x68;
              local_18 = operator_new(0x1a);
              local_8._0_1_ = 0x16;
              if (local_18 != (undefined **)0x0) {
                FUN_005e59e0();
              }
              local_8._0_1_ = 0x15;
              uStack_1e8._0_2_ = 0x843a;
              uStack_1e8._2_2_ = 0x68;
              FUN_0042d320();
              local_8._0_1_ = 0x17;
              *puVar16 = &PTR_FUN_007ea61c;
              *(undefined1 *)((int)puVar16 + 10) = 0;
              *(undefined2 *)puVar16[1] = 0x2f;
              iVar15 = puVar16[1];
              uStack_1e8._0_2_ = 0;
              uStack_1e8._2_2_ = 0;
              pfStack_1ec = (float *)0x0;
              *(undefined4 *)(iVar15 + 8) = *(undefined4 *)(iVar17 + 0x18);
              piStack_1f0 = (int *)0x0;
              *(undefined2 *)(iVar15 + 0xc) = *(undefined2 *)(iVar17 + 0x1c);
              puVar24 = (undefined4 *)FUN_0042d2f0();
              iVar17 = puVar16[1];
              *(undefined4 *)(iVar17 + 2) = *puVar24;
              *(undefined2 *)(iVar17 + 6) = *(undefined2 *)(puVar24 + 1);
              *puVar16 = &PTR_FUN_007e9fdc;
              iVar17 = puVar16[1];
              *(undefined4 *)(iVar17 + 0xe) = local_70;
              *(undefined2 *)(iVar17 + 0x12) = local_6c;
              iVar17 = puVar16[1];
              *(uint *)(iVar17 + 0x14) = local_60;
              *(undefined2 *)(iVar17 + 0x18) = local_5c;
            }
            local_8 = CONCAT31(local_8._1_3_,0x14);
            uStack_1e8._0_2_ = 0x84c4;
            uStack_1e8._2_2_ = 0x68;
            FUN_00565ca0();
            piVar29 = piVar23;
            uVar12 = local_60;
            uVar13 = local_5c;
          }
        }
      }
      (*(code *)local_18c[4])();
      piVar23 = local_110;
      piVar29 = local_e4;
      while (piVar6 = local_10c, local_110 = piVar23, local_10c = piVar6, piVar29 != (int *)0x0) {
        piVar7 = (int *)piVar29[2];
        iVar17 = *piVar29;
        uStack_1e8._0_2_ = 0x84fe;
        uStack_1e8._2_2_ = 0x68;
        local_10c = operator_new(0xe);
        if (local_10c == (int *)0x0) {
          local_10c = (int *)0x0;
        }
        else {
          *local_10c = iVar17;
          local_10c[1] = (int)piVar6;
          local_10c[2] = 0;
          *(undefined1 *)(local_10c + 3) = 0;
        }
        iVar17 = local_108 + 1;
        bVar32 = local_108 != 0;
        piVar23 = local_10c;
        local_108 = iVar17;
        piVar29 = piVar7;
        if (bVar32) {
          piVar6[2] = (int)local_10c;
          piVar23 = local_110;
        }
      }
      local_8._1_3_ = (uint3)(local_8 >> 8);
      local_8 = CONCAT31(local_8._1_3_,0x10);
      FUN_00527230();
    }
    local_e8 = &PTR_LAB_007e378c;
    piVar29 = local_e4;
    while (piVar29 != (int *)0x0) {
      piVar29 = (int *)piVar29[2];
      uStack_1e8._0_2_ = 0x85dc;
      uStack_1e8._2_2_ = 0x68;
      FUN_00796cd8();
    }
    local_e4 = (int *)0x0;
    local_e0 = (int *)0x0;
    local_dc = 0;
    local_8._1_3_ = (uint3)(local_8 >> 8);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_00527230();
    local_d4 = &PTR_LAB_007e378c;
    puVar16 = local_d0;
    while (puVar16 != (undefined4 *)0x0) {
      puVar16 = (undefined4 *)puVar16[2];
      uStack_1e8._0_2_ = 0x861f;
      uStack_1e8._2_2_ = 0x68;
      FUN_00796cd8();
    }
    local_d0 = (undefined4 *)0x0;
    local_cc = (undefined4 *)0x0;
    local_c8 = 0;
    local_8._1_3_ = (uint3)(local_8 >> 8);
    local_8._0_1_ = 8;
    local_13c = &PTR_LAB_007f3a6c;
    pfVar31 = local_138;
    while (pfVar31 != (float *)0x0) {
      pfVar31 = (float *)pfVar31[2];
      uStack_1e8._0_2_ = 0x865b;
      uStack_1e8._2_2_ = 0x68;
      FUN_00796cd8();
    }
    local_138 = (float *)0x0;
    local_134 = (float *)0x0;
    local_130 = 0;
    piVar29 = local_f8;
    iVar17 = local_48;
  } while( true );
code_r0x0068656b:
  local_24 = (int *)0x0;
  do {
    if (*(int *)((int)local_24 + *(int *)(iVar17 + 0x298) + 4) != 4) {
      uStack_1e8._0_2_ = 0x658b;
      uStack_1e8._2_2_ = 0x68;
      iVar15 = FUN_004e9370();
      if (((*(int *)(iVar15 + 0x254) != 8) && (*(int *)(iVar15 + 0x254) != 9)) &&
         (*(int *)(iVar15 + 0x3d8) != 0)) {
        if (*(int *)(iVar15 + 0x3d8) == *(int *)(iVar17 + 0x3d8)) {
LAB_006865d5:
          local_20 = (float *)((int)local_20 + 1);
        }
        else if (*(int *)(iVar17 + 0x3d8) != 0) {
          uStack_1e8._0_2_ = 0x65d1;
          uStack_1e8._2_2_ = 0x68;
          cVar14 = FUN_00586230();
          if (cVar14 != '\0') goto LAB_006865d5;
        }
        if (*(int *)(iVar15 + 0x3d8) != param_1[7]) {
          FUN_006a9d50();
          uStack_1e8._0_2_ = 0x65f7;
          uStack_1e8._2_2_ = 0x68;
          cVar14 = FUN_0044b300();
          if (cVar14 == '\0') goto LAB_00686640;
        }
        if ((*(int **)(iVar15 + 0x4a8) != (int *)0x0) && (*(int **)(iVar15 + 0x4a8) != param_1)) {
          iVar20 = FUN_006a9d50();
          iVar28 = FUN_006a9d50();
          if ((iVar20 == iVar28) &&
             (iVar15 = (**(code **)(**(int **)(iVar15 + 0x4a8) + 4))(), 0 < iVar15)) {
            *(undefined1 *)((int)local_38 + 0x8c) = 1;
          }
        }
      }
    }
LAB_00686640:
    local_14 = (int *)((int)local_14 + 1);
    local_24 = local_24 + 3;
  } while ((int)local_14 < *(int *)(iVar17 + 0x290));
  pfVar31 = local_2c;
  if ((int)local_20 < 2) {
LAB_00686664:
    *(undefined1 *)((int)local_38 + 0x40) = 1;
    pfVar31 = local_2c;
  }
  goto joined_r0x00686530;
code_r0x006866c1:
  uStack_1e8._0_2_ = 0x66cd;
  uStack_1e8._2_2_ = 0x68;
  cVar14 = FUN_006894a0();
  if (((cVar14 == '\0') || (*(char *)(pfVar31 + 0x23) != '\0')) ||
     ((ppuVar22 = local_9c, *(int *)((int)fVar21 + 0x482) != 0 &&
      ((iVar15 = (**(code **)(*(int *)(*(int *)((int)fVar21 + 0x482) + 0x28) + 4))(),
       ppuVar22 = local_9c, iVar15 < 2 &&
       (iVar15 = (**(code **)((int)pfVar31[0x11] + 4))(), ppuVar22 = local_9c, iVar15 < 1)))))) {
LAB_0068670c:
    local_20 = *(float **)(iVar17 + 0x4508);
    while (local_20 != (float *)0x0) {
      pfVar30 = (float *)*local_20;
      local_20 = (float *)local_20[2];
      cVar14 = (**(code **)((int)*pfVar30 + 0x28))();
      fVar21 = local_68;
      if (cVar14 != '\0') {
        cVar14 = (**(code **)(*(int *)((int)pfVar30 + 0x22e) + 8))();
        fVar21 = local_68;
        if (cVar14 == '\0') {
          uStack_1e8._0_2_ = 0x6760;
          uStack_1e8._2_2_ = 0x68;
          cVar14 = (**(code **)(*(int *)((int)pfVar30 + 0x22e) + 0x24))();
          fVar21 = local_68;
          if (cVar14 != '\0') {
            uStack_1e8._0_2_ = SUB42(pfVar30[3],0);
            uStack_1e8._2_2_ = (undefined2)((uint)pfVar30[3] >> 0x10);
            piStack_1f0 = (int *)0x68677c;
            pfStack_1ec = pfVar30;
            iVar17 = FUN_005bc744();
            fVar21 = local_68;
            if (iVar17 < *(int *)(local_48 + 4) * 0x18) {
              fVar21 = pfVar31[0x13];
              uStack_1e8._0_2_ = 0x679d;
              uStack_1e8._2_2_ = 0x68;
              local_bc = operator_new(0xe);
              local_8._0_1_ = 4;
              if (local_bc == (void *)0x0) {
                fVar19 = 0.0;
              }
              else {
                uStack_1e8._0_2_ = SUB42(fVar21,0);
                uStack_1e8._2_2_ = (undefined2)((uint)fVar21 >> 0x10);
                piStack_1f0 = (int *)0x6867b9;
                pfStack_1ec = pfVar30;
                fVar19 = (float)FUN_0045bab0();
              }
              pfVar4 = local_54;
              fVar5 = pfVar31[0x14];
              local_8._0_1_ = 0;
              pfVar31[0x13] = fVar19;
              pfVar31[0x14] = (float)((int)fVar5 + 1);
              if (fVar5 == 0.0) {
                pfVar31[0x12] = fVar19;
              }
              else {
                *(float *)((int)fVar21 + 8) = fVar19;
              }
              if (pfVar30 == (float *)0x0) {
                iVar17 = 0;
              }
              else {
                iVar17 = (int)pfVar30 + 0x22;
              }
              local_24 = (int *)0x0;
              local_18 = (undefined **)local_54[6];
              fVar21 = local_54[1];
              local_14 = *(int **)(iVar17 + 4);
              while (local_14 != (int *)0x0) {
                uStack_1e8 = (undefined ***)&local_170;
                pfStack_1ec = (float *)0x686812;
                puVar16 = (undefined4 *)FUN_00499730();
                uStack_1e8._0_2_ = SUB42(fVar21,0);
                uStack_1e8._2_2_ = (undefined2)((uint)fVar21 >> 0x10);
                pfStack_1ec = (float *)0x0;
                piStack_1f0 = (int *)0x0;
                fVar34 = (float10)(**(code **)(**(int **)*puVar16 + 0x2c))();
                local_24 = (int *)(float)(fVar34 + (float10)(float)local_24);
              }
              pfVar4[6] = (float)local_24 + (float)local_18;
              local_14 = (int *)0x0;
              pfVar31 = pfVar4;
              fVar21 = local_68;
            }
          }
        }
      }
    }
    local_14 = (int *)0x0;
    local_20 = (float *)0x0;
    if (0 < *(int *)((int)fVar21 + 0x290)) {
      local_38 = (undefined **)0x0;
      do {
        if (*(int *)((int)local_38 + 4 + *(int *)((int)fVar21 + 0x298)) != 4) {
          uStack_1e8._0_2_ = 0x6879;
          uStack_1e8._2_2_ = 0x68;
          local_20 = (float *)FUN_004e9370();
          piVar29 = (int *)*local_3c;
          while (piVar29 != (int *)0x0) {
            piVar23 = (int *)piVar29[2];
            iVar17 = *piVar29;
            piVar29 = piVar23;
            fVar21 = local_68;
            if (((*(int *)(iVar17 + 4) == *(int *)((int)local_20 + 0x12)) &&
                (iVar15 = (**(code **)(*(int *)(*(int *)((int)local_20 + 0x482) + 0x28) + 4))(),
                fVar21 = local_68, 3 < iVar15)) && (*(char *)(iVar17 + 0x40) != '\0')) {
              *(undefined1 *)((int)pfVar31 + 0x41) = 1;
            }
          }
        }
        local_14 = (int *)((int)local_14 + 1);
        local_38 = (undefined **)((int)local_38 + 0xc);
      } while ((int)local_14 < *(int *)((int)fVar21 + 0x290));
    }
    if (*(char *)((int)pfVar31 + 0x41) != '\0') {
      __ftol();
    }
    FUN_004ed0e0();
    __ftol();
    __ftol();
    __ftol();
    __ftol();
    fVar21 = (float)__ftol();
    uStack_1e8._0_2_ = 0x69cc;
    uStack_1e8._2_2_ = 0x68;
    cVar14 = FUN_004e9500();
    ppuVar8 = local_98;
    ppuVar22 = local_9c;
    if (cVar14 == '\0') {
      pfVar31[7] = fVar21;
      for (; ppuVar22 != (undefined **)0x0; ppuVar22 = (undefined **)ppuVar22[2]) {
        if (*(int *)(*ppuVar22 + 0x1c) < (int)fVar21) {
          uStack_1e8._0_2_ = SUB42(pfVar31,0);
          uStack_1e8._2_2_ = (undefined2)((uint)pfVar31 >> 0x10);
          pfStack_1ec = (float *)0x686a2b;
          FUN_0068ab50();
          ppuVar22 = local_9c;
          goto joined_r0x00686680;
        }
      }
      uStack_1e8._0_2_ = 0x69fc;
      uStack_1e8._2_2_ = 0x68;
      pvVar18 = operator_new(0xe);
      local_8._0_1_ = 5;
      if (pvVar18 == (void *)0x0) {
        local_98 = (undefined **)0x0;
      }
      else {
        uStack_1e8._0_2_ = SUB42(ppuVar8,0);
        uStack_1e8._2_2_ = (undefined2)((uint)ppuVar8 >> 0x10);
        piStack_1f0 = (int *)0x686a15;
        pfStack_1ec = pfVar31;
        local_98 = (undefined **)FUN_0068ad00();
      }
      local_8._0_1_ = 0;
      iVar17 = local_94 + 1;
      bVar32 = local_94 != 0;
      ppuVar22 = local_98;
      local_94 = iVar17;
      if (bVar32) {
        ppuVar8[2] = (undefined *)local_98;
        ppuVar22 = local_9c;
      }
    }
  }
  goto joined_r0x00686680;
  while( true ) {
    piVar23 = (int *)(**(code **)(*piVar6 + 0x14))();
    iVar17 = (**(code **)(*piVar23 + 200))();
    iVar15 = (**(code **)(*(int *)((int)piVar6 + 0x22) + 4))();
    pfVar30 = local_138;
    ppuVar22 = local_18;
    if (iVar17 < iVar15) break;
joined_r0x00686c61:
    do {
      do {
        do {
          if (piVar29 == (int *)0x0) goto LAB_00686cd4;
          piVar23 = (int *)piVar29[2];
          piVar6 = (int *)*piVar29;
          cVar14 = (**(code **)(*piVar6 + 0x2c))();
          piVar29 = piVar23;
          ppuVar22 = local_18;
        } while (cVar14 == '\0');
        FUN_006a9d50();
        uStack_1e8._0_2_ = 0x6c8e;
        uStack_1e8._2_2_ = 0x68;
        cVar14 = FUN_0044b280();
        ppuVar22 = local_18;
      } while ((cVar14 == '\0') || (*(char *)((int)piVar6 + 0x17b) != '\0'));
      iVar17 = (**(code **)(*(int *)((int)piVar6 + 0x22) + 4))();
      ppuVar22 = local_18;
    } while (iVar17 == 0);
  }
LAB_00686dc1:
  local_138 = pfVar30;
  pfVar31 = local_c0;
  goto joined_r0x00686b91;
LAB_00687457:
  iVar17 = FUN_00527b40();
  param_2 = (float *)((int)param_2 + iVar17);
  ppuVar22 = local_18;
  goto joined_r0x00687349;
LAB_006876aa:
  local_14 = (int *)((int)local_14 + 1);
  iVar17 = (**(code **)(*(int *)(iVar17 + 0x22) + 4))();
  param_2 = (float *)((int)param_2 + iVar17);
  piVar29 = local_64;
  pfVar31 = local_20;
  goto joined_r0x00687603;
LAB_00687cef:
  if (local_40 != 0) {
    iVar17 = FUN_0050a580();
    iVar20 = FUN_0050a580();
    piVar29 = local_14;
    if (iVar17 <= iVar20) goto joined_r0x00687c12;
  }
  local_40 = iVar15;
  cVar14 = FUN_0051cc00();
  piVar29 = local_14;
  if ((cVar14 == '\0') || (1 < *(int *)(iVar15 + 0x22))) goto joined_r0x00687c12;
LAB_00687d2b:
  iVar17 = local_40;
  if ((local_40 != 0) &&
     ((iVar15 = FUN_0051c480(), iVar17 != iVar15 && (iVar15 = FUN_0050a580(), local_50 < iVar15))))
  {
    puVar25 = (undefined2 *)FUN_0044df10();
    local_18 = (undefined **)&uStack_1e8;
    uStack_1e8._0_2_ = *puVar25;
    uStack_1e8._2_2_ = (undefined2)*(undefined4 *)(puVar25 + 1);
    pfStack_1ec = (float *)0x687d70;
    uVar26 = FUN_00447250();
    local_18 = (undefined **)&piStack_1f0;
    FUN_00449290(uVar26);
    FUN_00667670();
    FUN_00461a90();
    local_50 = FUN_0050a580();
    local_b8 = *(int *)(iVar17 + 0x12);
  }
LAB_00687da3:
  local_8 = CONCAT31(local_8._1_3_,0x11);
  local_1a4 = &PTR_LAB_007e4a74;
  iVar17 = local_1a0;
  while (iVar17 != 0) {
    iVar17 = *(int *)(iVar17 + 10);
    uStack_1e8._0_2_ = 0x7dc6;
    uStack_1e8._2_2_ = 0x68;
    FUN_00796cd8();
  }
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
LAB_00687de4:
  if ((int)local_20 * local_50 < (int)local_2c) {
    iVar17 = (int)local_2c - (int)local_20 * local_50;
    puVar16 = local_164;
    while (puVar16 != (undefined4 *)0x0) {
      puVar24 = (undefined4 *)puVar16[1];
      piVar29 = (int *)*puVar16;
      iVar15 = (**(code **)(*(int *)((int)piVar29 + 0x22) + 4))();
      puVar16 = puVar24;
      if ((iVar15 <= iVar17) && (piVar29 != local_64)) {
        local_18 = local_16c + 7;
        pfStack_1ec = (float *)&stack0xfffffe1c;
        uStack_1e8._0_2_ = SUB42(piVar29,0);
        uStack_1e8._2_2_ = (undefined2)((uint)piVar29 >> 0x10);
        piStack_1f0 = (int *)0x687e37;
        (*(code *)local_16c[10])();
        piStack_1f0 = (int *)0x687e42;
        (*(code *)*local_18)();
        piStack_1f0 = piVar29;
        (**(code **)(*local_24 + 0x18))();
        iVar15 = (**(code **)(*(int *)((int)piVar29 + 0x22) + 4))();
        iVar17 = iVar17 - iVar15;
      }
    }
    bVar32 = true;
  }
  pfVar31 = local_30;
  iVar17 = local_b8;
  piVar29 = local_e0;
  piVar23 = local_e4;
  if (local_b8 != 0) {
    uStack_1e8._0_2_ = 0x7e77;
    uStack_1e8._2_2_ = 0x68;
    local_e0 = operator_new(0xe);
    if (local_e0 == (int *)0x0) {
      local_e0 = (int *)0x0;
    }
    else {
      *local_e0 = iVar17;
      local_e0[1] = (int)piVar29;
      local_e0[2] = 0;
      *(undefined1 *)(local_e0 + 3) = 0;
    }
    iVar17 = local_dc + 1;
    bVar33 = local_dc != 0;
    piVar23 = local_e0;
    local_dc = iVar17;
    if (bVar33) {
      piVar29[2] = (int)local_e0;
      piVar23 = local_e4;
    }
  }
  local_e4 = piVar23;
  if (bVar32) {
    local_1bc = pfVar31[0x21];
    uStack_1e8._0_2_ = 0;
    uStack_1e8._2_2_ = 0;
    pfStack_1ec = (float *)0x687ed6;
    fVar34 = (float10)FUN_006afaf0();
    uStack_1e8 = (undefined ***)
                 (float)(((float10)_DAT_007e3374 - (float10)((int)local_3c / 10)) * fVar34);
    pfStack_1ec = (float *)0x1;
    piStack_1f0 = (int *)0x687f03;
    fVar34 = (float10)FUN_006afdb0();
    pfStack_1ec = (float *)(float)fVar34;
    piStack_1f0 = (int *)0x687f0f;
    fVar34 = (float10)FUN_00689210();
    if (fVar34 + (float10)local_1bc < (float10)_DAT_007e384c) {
      *(undefined1 *)((int)pfVar31 + 0x82) = 0;
    }
    else {
      *(undefined1 *)((int)pfVar31 + 0x82) = 1;
    }
  }
LAB_00687f32:
  local_8 = CONCAT31(local_8._1_3_,0x10);
  FUN_00527230();
  pfVar31 = local_30;
  goto joined_r0x00687095;
}


