// FUN_0068ba50 @ 68ba50 size=10382

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0068ba50(undefined **param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int *piVar13;
  int iVar14;
  undefined ***pppuVar15;
  uint uVar16;
  int iVar17;
  undefined ***pppuVar18;
  int *piVar19;
  undefined ***extraout_ECX;
  char *extraout_ECX_00;
  undefined **ppuVar20;
  undefined ***pppuVar21;
  bool bVar22;
  float10 fVar23;
  char *pcStack_1c4;
  char *pcStack_1c0;
  undefined ***pppuStack_1bc;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b4;
  undefined ***pppuStack_1b0;
  undefined1 local_19c [4];
  undefined **local_198;
  undefined **local_194 [2];
  undefined ***local_18c;
  undefined ***local_188;
  char local_184 [8];
  undefined ***local_17c;
  undefined **local_178 [2];
  int local_170;
  float local_16c;
  float local_168;
  int local_164;
  int local_160;
  int local_15c;
  undefined **local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined **local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  float local_130;
  int local_12c;
  undefined **local_128;
  undefined4 *local_124;
  undefined4 *local_120;
  int local_11c;
  undefined1 local_118;
  float local_114;
  int *local_110;
  undefined **local_10c;
  int *local_108;
  int *local_104;
  int local_100;
  undefined1 local_fc;
  undefined **local_f8;
  undefined **local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  int local_e4;
  undefined **local_e0;
  int *local_dc;
  int *local_d8;
  int local_d4;
  undefined1 local_d0;
  undefined **local_cc;
  undefined ***local_c8;
  undefined ***local_c4;
  int local_c0;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined **local_b0;
  undefined ***local_ac;
  undefined ***local_a8;
  int local_a4;
  undefined1 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined ***local_90;
  undefined **local_8c;
  undefined ***local_88;
  undefined ***local_84;
  int local_80;
  undefined1 local_7c;
  int *local_78;
  undefined **local_74;
  int *local_70;
  int *local_6c;
  int local_68;
  undefined ***local_60;
  undefined **local_5c;
  int *local_58;
  char local_52;
  char local_51;
  undefined ***local_50;
  char local_4a;
  char local_49;
  undefined ***local_48;
  int *local_44;
  undefined ***local_40;
  undefined ***local_3c;
  undefined4 *local_38;
  undefined ***local_34;
  undefined ***local_30;
  undefined ***local_2c;
  undefined ***local_28;
  char local_22;
  char local_21;
  undefined **local_20;
  undefined **local_1c;
  char local_15;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d5013;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = param_1;
  FUN_0068b110();
  FUN_00457e10();
  local_74 = &PTR_FUN_007e4c84;
  local_49 = '\x01';
  local_ac = (undefined ***)0x0;
  local_a8 = (undefined ***)0x0;
  local_a4 = 0;
  local_a0 = 0;
  local_b0 = &PTR_LAB_007e4bc4;
  local_108 = (int *)0x0;
  local_104 = (int *)0x0;
  local_100 = 0;
  local_fc = 0;
  local_10c = &PTR_LAB_007e4bc4;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_144 = &PTR_LAB_007e4bc4;
  local_8 = 3;
  local_12c = *(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0x2e0;
  (**(code **)(*param_1 + 0xe0))();
  local_e4 = FUN_00695520();
  local_52 = '\0';
  puVar9 = *(undefined4 **)(*(int *)((int)param_1 + 10) + 0xe86e);
  while (puVar9 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar9[2];
    pppuVar21 = (undefined ***)*puVar9;
    (**(code **)(*local_1c + 0xe0))();
    iVar7 = FUN_006909f0();
    iVar7 = *(int *)(iVar7 + 4);
    do {
      if (iVar7 == 0) goto LAB_0068bb7b;
      iVar7 = *(int *)(iVar7 + 8);
      pppuStack_1b0 = (undefined ***)0x68bb6d;
      cVar5 = FUN_004ca242();
    } while (cVar5 == '\0');
    local_52 = '\x01';
LAB_0068bb7b:
    cVar5 = FUN_004ca33c();
    pppuVar8 = local_a8;
    puVar9 = puVar2;
    if (cVar5 != '\0') {
      pppuStack_1b0 = (undefined ***)0x68bb93;
      local_20 = operator_new(0xe);
      local_8._0_1_ = 4;
      if (local_20 == (undefined **)0x0) {
        local_a8 = (undefined ***)0x0;
      }
      else {
        pppuStack_1b0 = pppuVar8;
        pppuStack_1b8 = (undefined ***)0x68bbac;
        pppuStack_1b4 = pppuVar21;
        local_a8 = (undefined ***)FUN_0068f400();
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      pppuVar15 = local_a8;
      if (local_a4 != 0) {
        pppuVar8[2] = (undefined **)local_a8;
        pppuVar15 = local_ac;
      }
      local_ac = pppuVar15;
      local_a4 = local_a4 + 1;
      pppuVar8 = (undefined ***)FUN_0044e1d0();
      if (pppuVar21 != pppuVar8) {
        local_49 = '\0';
      }
    }
  }
  piVar13 = *(undefined4 **)(*(int *)((int)local_1c + 10) + 0xe86e);
  ppuVar20 = local_1c;
  while (piVar13 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)piVar13[2];
    pppuVar21 = (undefined ***)*piVar13;
    local_28 = pppuVar21 + 10;
    local_58 = puVar9;
    local_40 = pppuVar21;
    iVar7 = (*(code *)pppuVar21[10][1])();
    piVar13 = puVar9;
    if (iVar7 != 0) {
      bVar22 = local_ac == (undefined ***)0x0;
      pppuVar8 = local_ac;
      if (!bVar22) {
        do {
          pppuStack_1b0 = (undefined ***)*pppuVar8;
          pppuStack_1b4 = (undefined ***)0x68bc45;
          cVar5 = (*(code *)local_b0[3])();
          if (cVar5 != '\0') break;
          pppuVar8 = (undefined ***)pppuVar8[2];
        } while (pppuVar8 != (undefined ***)0x0);
        bVar22 = pppuVar8 == (undefined ***)0x0;
      }
      local_21 = !bVar22;
      pppuVar8 = (undefined ***)FUN_0044e1d0();
      local_4a = pppuVar8 == pppuVar21;
      local_22 = FUN_004ca453();
      local_30 = (undefined ***)0x0;
      local_48 = (undefined ***)0x0;
      FUN_00457e10();
      local_cc = &PTR_FUN_007e4c84;
      local_8._0_1_ = 5;
      puVar9 = (undefined4 *)ppuVar20[0x25];
      while (puVar9 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)puVar9[2];
        pppuVar21 = (undefined ***)*puVar9;
        puVar9 = puVar2;
        if ((pppuVar21[0x92] == *(undefined ***)((int)ppuVar20 + 10)) &&
           (iVar7 = FUN_0051b230(), pppuVar8 = local_c4,
           *(undefined ****)(iVar7 + 0x482) == local_40)) {
          pppuStack_1b0 = (undefined ***)0x68bcd2;
          local_20 = operator_new(0xe);
          local_8._0_1_ = 6;
          if (local_20 == (undefined **)0x0) {
            local_c4 = (undefined ***)0x0;
          }
          else {
            pppuStack_1b0 = pppuVar8;
            pppuStack_1b8 = (undefined ***)0x68bceb;
            pppuStack_1b4 = pppuVar21;
            local_c4 = (undefined ***)FUN_0045bab0();
          }
          local_8._0_1_ = 5;
          pppuVar15 = local_c4;
          if (local_c0 != 0) {
            pppuVar8[2] = (undefined **)local_c4;
            pppuVar15 = local_c8;
          }
          local_c8 = pppuVar15;
          local_c0 = local_c0 + 1;
          iVar7 = (**(code **)(*(int *)((int)pppuVar21 + 0x22) + 4))();
          local_48 = (undefined ***)((int)local_48 + iVar7);
          ppuVar20 = local_1c;
        }
      }
      local_d0 = 0;
      local_dc = (int *)0x0;
      local_d8 = (int *)0x0;
      local_d4 = 0;
      local_e0 = &PTR_LAB_007e4b94;
      local_8 = CONCAT31(local_8._1_3_,7);
      (*(code *)PTR_FUN_007e4ba4)();
      local_164 = *(int *)(*(int *)((int)ppuVar20 + 10) + 0x451c);
      while (local_164 != 0) {
        pppuStack_1b0 = &local_198;
        pppuStack_1b4 = (undefined ***)0x68bd90;
        puVar9 = (undefined4 *)FUN_00499730();
        if (0 < *(int *)(*(int *)*puVar9 + 0x14c)) {
          pppuStack_1b0 = (undefined ***)0x68bda4;
          iVar7 = FUN_004e9370();
          if (*(undefined ****)(iVar7 + 0x482) == local_40) {
            pppuStack_1b0 = (undefined ***)0x68bdc0;
            FUN_0046a350();
          }
        }
      }
      pppuVar21 = (undefined ***)((int)local_48 + local_d4);
      local_48 = pppuVar21;
      iVar7 = (**(code **)(*ppuVar20 + 0xe0))();
      iVar7 = (**(code **)(**(int **)(iVar7 + 0x7e) + 0x1a4))();
      piVar13 = *(int **)(iVar7 + 4);
      pppuVar8 = local_48;
      while (pppuVar15 = local_c8, piVar13 != (int *)0x0) {
        piVar19 = (int *)piVar13[2];
        iVar7 = *piVar13;
        iVar10 = *(int *)(iVar7 + 0x298);
        piVar13 = piVar19;
        pppuVar8 = pppuVar21;
        if ((0 < iVar10) && (*(undefined ****)(DAT_00ab27b4 + iVar10 * 0x4b2 + 0x482) == local_40))
        {
          iVar7 = (**(code **)(*(int *)(iVar7 + 0x22) + 4))();
          pppuVar21 = (undefined ***)((int)pppuVar21 + iVar7);
          pppuVar8 = pppuVar21;
        }
      }
joined_r0x0068be40:
      local_48 = pppuVar8;
      if (pppuVar15 != (undefined ***)0x0) {
        pppuVar21 = (undefined ***)*pppuVar15;
        local_3c = (undefined ***)pppuVar15[2];
        pppuVar8 = local_48;
        local_34 = pppuVar21;
        pppuVar15 = local_3c;
        if ((((((pppuVar21[3] != (undefined **)0x0) && (*(int *)((int)pppuVar21 + 0x176) == 0)) &&
              (cVar5 = (**(code **)(*(int *)((int)pppuVar21 + 0x22e) + 8))(), pppuVar8 = local_48,
              pppuVar15 = local_3c, cVar5 != '\0')) &&
             ((iVar7 = (*(code *)pppuVar21[0x47][1])(), pppuVar8 = local_48, pppuVar15 = local_3c,
              iVar7 == 0 && (*(char *)((int)pppuVar21 + 0x17b) == '\0')))) &&
            (iVar7 = *(int *)((int)ppuVar20 + 10), iVar10 = FUN_00522770(), pppuVar8 = local_48,
            pppuVar15 = local_3c, iVar10 == iVar7)) &&
           (iVar7 = (*(code *)(*pppuVar21)[0x2f])(), pppuVar8 = local_48, pppuVar15 = local_3c,
           iVar7 == 0x8c)) {
          local_60 = (undefined ***)0x8c;
          pppuVar18 = (undefined ***)*(undefined4 **)((int)pppuVar21 + 0x26);
joined_r0x0068bee2:
          do {
            pppuVar8 = local_48;
            pppuVar15 = local_3c;
            if (((pppuVar18 == (undefined ***)0x0) ||
                (iVar7 = (*(code *)(*pppuVar21)[0x2f])(), pppuVar8 = local_48, pppuVar15 = local_3c,
                iVar7 != 0x8c)) ||
               (iVar7 = (**(code **)(*(int *)((int)pppuVar21 + 0x22) + 4))(), pppuVar8 = local_48,
               pppuVar15 = local_3c, iVar7 < 2)) break;
            local_90 = (undefined ***)pppuVar18[2];
            local_50 = (undefined ***)*pppuVar18;
            if (local_60 == (undefined ***)0x8c) {
              local_60 = (undefined ***)local_50[0x4d];
            }
            pppuVar18 = local_90;
            if ((undefined ***)local_50[0x4d] != local_60) {
              iVar7 = FUN_0051b230();
              pppuVar21 = *(undefined ****)(*(int *)(iVar7 + 0x1c2) + 4);
              do {
                do {
                  if (pppuVar21 == (undefined ***)0x0) {
                    pppuStack_1b0 = (undefined ***)0x68c047;
                    FUN_00428eb0();
                    local_20 = (undefined **)&pppuStack_1b4;
                    pppuStack_1b8 = (undefined ***)&DAT_0088f28c;
                    pppuStack_1bc = (undefined ***)0x68c061;
                    FUN_00446d10();
                    pppuStack_1b8 = (undefined ***)0x68c069;
                    pppuStack_1b8 = (undefined ***)FUN_00516300();
                    pcStack_1c4 = local_184;
                    local_20 = &pcStack_1c0;
                    FUN_00449290();
                    pcStack_1c4 = (char *)0x68c085;
                    FUN_00667670();
                    pcStack_1c4 = (char *)0x68c08c;
                    FUN_00461e60();
                    pppuStack_1b0 = (undefined ***)0x68c098;
                    iVar7 = FUN_00428ee0();
                    if (iVar7 == 0) {
                      pppuVar21 = (undefined ***)0x0;
                    }
                    else {
                      pppuVar21 = (undefined ***)(iVar7 + -0x14);
                    }
                    pppuStack_1b0 = (undefined ***)0x68c0c6;
                    (**(code **)(*ppuVar20 + 0x1a8))();
                    pppuVar8 = local_c4;
                    pppuStack_1b0 = (undefined ***)0x68c0d3;
                    local_20 = operator_new(0xe);
                    local_8._0_1_ = 8;
                    if (local_20 == (undefined **)0x0) {
                      local_c4 = (undefined ***)0x0;
                    }
                    else {
                      pppuStack_1b0 = pppuVar8;
                      pppuStack_1b8 = (undefined ***)0x68c0ec;
                      pppuStack_1b4 = pppuVar21;
                      local_c4 = (undefined ***)FUN_0045bab0();
                    }
                    local_8 = CONCAT31(local_8._1_3_,7);
                    pppuVar15 = local_c4;
                    if (local_c0 != 0) {
                      pppuVar8[2] = (undefined **)local_c4;
                      pppuVar15 = local_c8;
                    }
                    local_c8 = pppuVar15;
                    pppuStack_1b4 = (undefined ***)0x68c125;
                    pppuStack_1b0 = pppuVar21;
                    local_c0 = local_c0 + 1;
                    FUN_0045e6c0();
                    pppuVar21 = local_34;
                    pppuVar18 = local_90;
                    goto joined_r0x0068bee2;
                  }
                  pppuVar8 = (undefined ***)*pppuVar21;
                  local_2c = (undefined ***)pppuVar21[2];
                  cVar5 = (*(code *)(*pppuVar8)[10])();
                  pppuVar21 = local_2c;
                  ppuVar20 = local_1c;
                } while (((((cVar5 == '\0') ||
                           (iVar7 = *(int *)((int)local_1c + 10), iVar10 = FUN_00522770(),
                           pppuVar15 = local_34, pppuVar21 = local_2c, ppuVar20 = local_1c,
                           iVar10 != iVar7)) || (pppuVar8[3] != local_34[3])) ||
                         ((*(int *)((int)pppuVar8 + 0x176) != 0 ||
                          (cVar5 = (**(code **)(*(int *)((int)pppuVar8 + 0x22e) + 8))(),
                          pppuVar21 = local_2c, ppuVar20 = local_1c, cVar5 == '\0')))) ||
                        ((iVar7 = (*(code *)pppuVar8[0x47][1])(), pppuVar21 = local_2c,
                         ppuVar20 = local_1c, iVar7 != 0 ||
                         (*(char *)((int)pppuVar8 + 0x17b) != '\0'))));
                ppuVar11 = (undefined **)(*(code *)(*pppuVar8)[0x2f])();
                local_38 = (undefined4 *)FUN_00522770();
                puVar9 = (undefined4 *)FUN_00522770();
                pppuVar21 = local_2c;
                ppuVar20 = local_1c;
              } while (((local_38 != puVar9) || (pppuVar8 == pppuVar15)) ||
                      ((ppuVar12 = local_50[0x4d], ppuVar11 != ppuVar12 &&
                       ((ppuVar11 != (undefined **)0x0 ||
                        ((ppuVar12 != (undefined **)0x2 && (ppuVar12 != (undefined **)0xb))))))));
              pppuStack_1b4 = (undefined ***)0x68c0b4;
              pppuStack_1b0 = pppuVar8;
              FUN_0045e6c0();
              pppuVar21 = local_34;
              pppuVar18 = local_90;
              ppuVar20 = local_1c;
            }
          } while( true );
        }
        goto joined_r0x0068be40;
      }
      local_8c = &PTR_FUN_007e6eac;
      local_88 = (undefined ***)0x0;
      local_84 = (undefined ***)0x0;
      local_80 = 0;
      local_7c = 0;
      local_8._1_3_ = (uint3)((uint)local_8 >> 8);
      local_8 = CONCAT31(local_8._1_3_,9);
      local_94 = 0.001;
      local_3c = (undefined ***)0x0;
      pppuVar21 = (undefined ***)local_40[0xb];
      while (pppuVar21 != (undefined ***)0x0) {
        local_50 = (undefined ***)pppuVar21[2];
        pppuVar8 = (undefined ***)*pppuVar21;
        pppuVar21 = local_50;
        local_2c = pppuVar8;
        if (pppuVar8[0xf6] == *(undefined ***)((int)ppuVar20 + 10)) {
          pppuStack_1b0 = (undefined ***)0x68c19e;
          FUN_0068b4f0();
          local_38 = (undefined4 *)__ftol();
          *(undefined4 *)((int)pppuVar8 + 0x48e) = 0;
          if (_DAT_007e3348 < (double)(int)local_38) {
            iVar7 = 0;
            piVar13 = *(int **)(*(int *)((int)pppuVar8 + 0x1c2) + 4);
            pppuVar21 = local_84;
            while (local_84 = pppuVar21, piVar13 != (int *)0x0) {
              piVar19 = (int *)piVar13[2];
              iVar10 = *piVar13;
              piVar13 = piVar19;
              if (((*(char *)(iVar10 + 0x17b) == '\0') &&
                  (cVar5 = (**(code **)(*(int *)(iVar10 + 0x22e) + 8))(), pppuVar21 = local_84,
                  cVar5 != '\0')) && (*(undefined ***)(iVar10 + 500) == local_1c)) {
                iVar10 = (**(code **)(*(int *)(iVar10 + 0x22) + 4))();
                iVar7 = iVar7 + iVar10;
                pppuVar21 = local_84;
              }
            }
            *(int *)((int)local_2c + 0x48e) = iVar7;
            pppuVar8 = local_88;
            if (local_80 == 0) {
              pppuStack_1b0 = (undefined ***)0x68c236;
              local_20 = operator_new(0xe);
              local_8._0_1_ = 10;
              if (local_20 == (undefined **)0x0) {
                local_84 = (undefined ***)0x0;
              }
              else {
                pppuStack_1b4 = local_2c;
                pppuStack_1b8 = (undefined ***)0x68c252;
                pppuStack_1b0 = pppuVar21;
                local_84 = (undefined ***)FUN_0049a780();
              }
              local_8 = CONCAT31(local_8._1_3_,9);
              iVar7 = local_80 + 1;
              bVar22 = local_80 != 0;
              pppuVar8 = local_84;
              local_80 = iVar7;
              if (bVar22) {
                pppuVar21[2] = (undefined **)local_84;
                pppuVar8 = local_88;
              }
            }
            else {
              for (; local_84 = pppuVar21, local_3c = pppuVar8, pppuVar8 != (undefined ***)0x0;
                  pppuVar8 = (undefined ***)pppuVar8[2]) {
                if (*(float *)((int)*pppuVar8 + 0x48a) <= *(float *)((int)local_2c + 0x48a)) {
                  if (*(float *)((int)*pppuVar8 + 0x48a) == *(float *)((int)local_2c + 0x48a)) {
                    iVar7 = 0;
                    pppuStack_1b0 = (undefined ***)0x68c2c9;
                    iVar10 = FUN_004e9370();
                    local_160 = *(int *)(*(int *)(iVar10 + 0x1c2) + 4);
                    while (local_160 != 0) {
                      pppuStack_1b0 = (undefined ***)local_19c;
                      pppuStack_1b4 = (undefined ***)0x68c2f3;
                      puVar9 = (undefined4 *)FUN_00498700();
                      iVar10 = *(int *)*puVar9;
                      cVar5 = (**(code **)(*(int *)(iVar10 + 0x22e) + 8))();
                      pppuVar8 = local_3c;
                      if ((cVar5 != '\0') && (*(undefined ***)(iVar10 + 500) == local_1c)) {
                        iVar10 = (**(code **)(*(int *)(iVar10 + 0x22) + 4))();
                        iVar7 = iVar7 + iVar10;
                        pppuVar8 = local_3c;
                      }
                    }
                    iVar10 = 0;
                    pppuStack_1b0 = (undefined ***)0x68c33f;
                    iVar14 = FUN_004e9370();
                    local_15c = *(int *)(*(int *)(iVar14 + 0x1c2) + 4);
                    while (local_15c != 0) {
                      pppuStack_1b0 = (undefined ***)&local_b8;
                      pppuStack_1b4 = (undefined ***)0x68c369;
                      puVar9 = (undefined4 *)FUN_00498700();
                      iVar14 = *(int *)*puVar9;
                      cVar5 = (**(code **)(*(int *)(iVar14 + 0x22e) + 8))();
                      pppuVar8 = local_3c;
                      if ((cVar5 != '\0') && (*(undefined ***)(iVar14 + 500) == local_1c)) {
                        iVar14 = (**(code **)(*(int *)(iVar14 + 0x22) + 4))();
                        iVar10 = iVar10 + iVar14;
                        pppuVar8 = local_3c;
                      }
                    }
                    local_15c = 0;
                    if (iVar10 < iVar7) goto LAB_0068c3ae;
                  }
                  local_20 = (undefined **)&stack0xfffffe54;
                  pppuStack_1b0 = local_2c;
                  pppuStack_1b4 = (undefined ***)0x68c3fb;
                  FUN_0067a690();
                  pppuVar8 = local_88;
                  goto LAB_0068c41e;
                }
LAB_0068c3ae:
                pppuVar21 = local_84;
              }
              pppuStack_1b0 = (undefined ***)0x68c3c6;
              local_20 = operator_new(0xe);
              local_8._0_1_ = 0xb;
              if (local_20 == (undefined **)0x0) {
                local_84 = (undefined ***)0x0;
              }
              else {
                pppuStack_1b4 = local_2c;
                pppuStack_1b8 = (undefined ***)0x68c3e2;
                pppuStack_1b0 = pppuVar21;
                local_84 = (undefined ***)FUN_0049a780();
              }
              local_8 = CONCAT31(local_8._1_3_,9);
              iVar7 = local_80 + 1;
              bVar22 = local_80 != 0;
              pppuVar8 = local_84;
              local_80 = iVar7;
              if (bVar22) {
                pppuVar21[2] = (undefined **)local_84;
                pppuVar8 = local_88;
              }
            }
LAB_0068c41e:
            local_88 = pppuVar8;
            local_94 = *(float *)((int)local_2c + 0x48a) + local_94;
            pppuVar21 = local_50;
            ppuVar20 = local_1c;
          }
        }
      }
      if ((int)local_48 < local_80) {
        do {
          pppuStack_1b4 = (undefined ***)&stack0xfffffe54;
          pppuStack_1b0 = (undefined ***)*local_84;
          local_94 = local_94 - *(float *)((int)pppuStack_1b0 + 0x48a);
          ppuVar20 = local_8c + 7;
          pppuStack_1b8 = (undefined ***)0x68c47b;
          (*(code *)local_8c[10])();
          pppuStack_1b8 = (undefined ***)0x68c483;
          (*(code *)*ppuVar20)();
        } while ((int)local_48 < local_80);
      }
      ppuVar20 = local_1c;
      pppuVar21 = local_88;
      if (local_80 == 0) {
        ppuVar11 = local_40[0xb];
        do {
          pppuVar21 = local_88;
          if (ppuVar11 == (undefined **)0x0) goto LAB_0068c529;
          ppuVar12 = (undefined **)ppuVar11[2];
          pppuVar21 = (undefined ***)*ppuVar11;
          pppuStack_1b0 = (undefined ***)0x68c4b8;
          cVar5 = FUN_004e9500();
          pppuVar8 = local_84;
          ppuVar11 = ppuVar12;
        } while (cVar5 != '\0');
        local_94 = local_94 + _DAT_007e4090;
        *(undefined4 *)((int)pppuVar21 + 0x48a) = 0x41200000;
        pppuStack_1b0 = (undefined ***)0x68c4e8;
        local_20 = operator_new(0xe);
        local_8._0_1_ = 0xc;
        if (local_20 == (undefined **)0x0) {
          local_84 = (undefined ***)0x0;
        }
        else {
          pppuStack_1b0 = pppuVar8;
          pppuStack_1b8 = (undefined ***)0x68c501;
          pppuStack_1b4 = pppuVar21;
          local_84 = (undefined ***)FUN_0049a780();
        }
        local_8 = CONCAT31(local_8._1_3_,9);
        iVar7 = local_80 + 1;
        bVar22 = local_80 != 0;
        pppuVar21 = local_84;
        local_80 = iVar7;
        if (bVar22) {
          pppuVar8[2] = (undefined **)local_84;
          pppuVar21 = local_88;
        }
      }
LAB_0068c529:
      local_88 = pppuVar21;
      local_15 = '\0';
      ppuVar11 = local_40[0xb];
      while (ppuVar11 != (undefined **)0x0) {
        ppuVar12 = (undefined **)ppuVar11[2];
        puVar3 = *ppuVar11;
        pppuStack_1b0 = (undefined ***)0x68c549;
        cVar5 = FUN_004e8ab0();
        if (cVar5 != '\0') {
          local_15 = '\x01';
        }
        ppuVar11 = ppuVar12;
        if (*(int *)(puVar3 + 0x3d8) == *(int *)((int)ppuVar20 + 10)) {
          pppuStack_1b0 = (undefined ***)0x68c56e;
          cVar5 = FUN_004e9500();
          if (cVar5 == '\0') {
            local_30 = (undefined ***)((int)local_30 + 1);
          }
        }
        else {
          local_30 = (undefined ***)((int)local_30 + 2);
        }
      }
      local_51 = '\0';
      fVar23 = (float10)FUN_00468560();
      if ((((float10)_DAT_007e34e0 < fVar23) ||
          (iVar7 = FUN_004a0750(), *(int *)(iVar7 + 0x3d8) != *(int *)((int)ppuVar20 + 10))) ||
         (iVar7 = FUN_0044e1d0(), *(int *)(iVar7 + 0x5e) < 1)) {
        if (local_15 == '\0') {
LAB_0068c5cb:
          local_51 = '\x01';
          goto LAB_0068c5cf;
        }
        if (local_4a != '\0') goto LAB_0068c5d6;
        if (local_21 == '\0') goto LAB_0068c5cb;
LAB_0068c62e:
        local_5c = *(undefined ***)(local_12c + 0x6c);
        piVar13 = *(int **)(local_12c + 0x78);
        cVar5 = '\0';
        pppuVar21 = local_28;
        do {
          local_15 = cVar5;
          if (piVar13 == (int *)0x0) goto LAB_0068c680;
          piVar19 = (int *)piVar13[2];
          ppuVar20 = *pppuVar21;
          iVar7 = *piVar13;
          pppuStack_1b0 = (undefined ***)0x68c65a;
          FUN_004e9370();
          pppuVar21 = local_28;
          pppuStack_1b0 = (undefined ***)0x68c668;
          cVar6 = (*(code *)ppuVar20[9])();
          piVar13 = piVar19;
          cVar5 = local_15;
          ppuVar20 = local_1c;
        } while (cVar6 == '\0');
        local_5c = *(undefined ***)(iVar7 + 4);
        cVar5 = '\x01';
LAB_0068c680:
        pppuVar21 = local_28;
        if (local_21 != '\0') {
          local_5c = (undefined **)0x3f800000;
        }
        if (((cVar5 == '\0') && (iVar7 = (*(code *)(*local_28)[1])(), iVar7 == 1)) &&
           ((cVar5 = FUN_004e4b60(), cVar5 != '\0' &&
            (*(char *)(*(int *)(*(int *)((int)ppuVar20 + 10) + 0x120) + 0xec) != '\0')))) {
          pppuStack_1b0 = (undefined ***)0x68c6d5;
          (**(code **)(*ppuVar20 + 0xe0))();
          pppuStack_1b0 = (undefined ***)0x68c6dc;
          fVar23 = (float10)FUN_006926d0();
          if (fVar23 < (float10)_DAT_007e6b28) {
            local_5c = (undefined **)0x0;
          }
        }
        local_38 = (undefined4 *)((float)(int)local_30 * (float)local_5c);
        local_18c = (undefined ***)(int)ROUND((float)local_38);
        local_30 = local_18c;
        if (((int)local_18c < 1) && (_DAT_007e46cc < (float)local_5c)) {
          local_30 = (undefined ***)0x1;
        }
        if (local_51 != '\0') {
          local_30 = (undefined ***)0x0;
        }
        if (local_22 == '\0') goto LAB_0068c749;
        if (local_21 != '\0') {
          local_30 = (undefined ***)0x0;
          goto LAB_0068c749;
        }
LAB_0068c75a:
        if (((0 < (int)local_30) && (0 < local_a4)) &&
           (iVar7 = (*(code *)(*pppuVar21)[1])(), pppuVar21 = local_ac, 0 < iVar7)) {
          while (pppuVar21 != (undefined ***)0x0) {
            pppuVar8 = (undefined ***)pppuVar21[2];
            ppuVar11 = *pppuVar21;
            iVar7 = (**(code **)(ppuVar11[10] + 4))();
            pppuVar21 = pppuVar8;
            if ((0 < iVar7) &&
               ((cVar5 = FUN_004ca453(), cVar5 == '\0' ||
                (ppuVar12 = (undefined **)FUN_0044e1d0(), ppuVar11 == ppuVar12)))) {
              pppuStack_1b0 = *(undefined ****)(*local_40[0xb] + 0x12);
              pppuStack_1b4 = (undefined ***)0x68c7cf;
              cVar5 = FUN_004a4010();
              if (cVar5 != '\0') {
                local_30 = (undefined ***)((int)local_30 / 3);
              }
              if ((int)local_30 < 1) {
                local_30 = (undefined ***)0x1;
              }
            }
          }
        }
      }
      else {
LAB_0068c5cf:
        if (local_4a == '\0') goto LAB_0068c62e;
LAB_0068c5d6:
        local_38 = (undefined4 *)((float)(int)local_30 * *(float *)(local_12c + 0x68));
        local_17c = (undefined ***)(int)ROUND((float)local_38);
        local_30 = local_17c;
        if ((int)local_17c < 1) {
          local_30 = (undefined ***)0x1;
        }
        if ((*(int *)(local_12c + 0x70) < (int)local_30) && (cVar5 = FUN_0044beb0(), cVar5 == '\0'))
        {
          local_30 = *(undefined ****)(local_12c + 0x70);
        }
LAB_0068c749:
        pppuVar21 = local_28;
        if (local_21 == '\0') goto LAB_0068c75a;
      }
      pppuVar21 = local_30;
      if (((1 < (int)local_30) && (cVar5 = FUN_0044beb0(), cVar5 == '\0')) &&
         ((0 < local_a4 && (local_21 == '\0')))) {
        pppuVar21 = (undefined ***)0x1;
        local_30 = (undefined ***)0x1;
      }
      local_28 = (undefined ***)((int)pppuVar21 - (int)local_48);
      local_15 = '\0';
      ppuVar11 = local_1c;
      pppuVar21 = local_40;
      if ((0 < local_a4) &&
         ((((local_51 == '\0' || (local_4a != '\0')) && (local_21 != '\0')) &&
          ((local_22 == '\0' || (local_4a != '\0')))))) {
        local_15 = '\x01';
        piVar13 = (int *)(**(code **)(*ppuVar20 + 0xe0))();
        iVar7 = (**(code **)(*piVar13 + 0x1e8))();
        pppuVar21 = local_40;
        piVar13 = *(int **)(iVar7 + 4);
        while (piVar13 != (int *)0x0) {
          piVar19 = (int *)piVar13[2];
          iVar7 = *piVar13;
          pppuVar8 = (undefined ***)FUN_0068a080();
          piVar13 = piVar19;
          if (pppuVar8 == pppuVar21) {
            (**(code **)(*(int *)(iVar7 + 0x12) + 0x1a4))();
            iVar7 = FUN_00527b40();
            local_48 = (undefined ***)((int)local_48 + iVar7);
          }
        }
        local_3c = (undefined ***)0x0;
        puVar9 = *(undefined4 **)((int)local_40 + 0x3e);
        pppuVar21 = local_40;
        ppuVar11 = local_1c;
joined_r0x0068c8cd:
        local_40 = pppuVar21;
        local_1c = ppuVar11;
        if (puVar9 != (undefined4 *)0x0) {
          local_38 = (undefined4 *)puVar9[2];
          piVar13 = (int *)*puVar9;
          puVar9 = local_38;
          if (((*(int *)(*piVar13 + 0x4c) == 0) &&
              (iVar7 = FUN_004c9f81(), pppuVar21 = local_40, ppuVar11 = local_1c, iVar7 != 0)) &&
             (iVar7 = FUN_004c9f81(), pppuVar21 = local_40, ppuVar11 = local_1c,
             *(char *)(*(int *)(*(int *)((int)local_1c + 10) + 0x12da) +
                      *(int *)(iVar7 + 6) * 0x2c + 0x2c) != '\0')) {
            pppuVar8 = *(undefined ****)(*piVar13 + 0x2c);
joined_r0x0068c929:
            do {
              pppuVar21 = local_40;
              ppuVar11 = local_1c;
              if (pppuVar8 == (undefined ***)0x0) break;
              ppuVar20 = *pppuVar8;
              local_50 = (undefined ***)pppuVar8[2];
              iVar7 = 0;
              puVar9 = local_38;
              pppuVar8 = local_50;
              if (0 < (int)ppuVar20[0xa4]) {
                iVar10 = 0;
LAB_0068c94e:
                if (*(int *)(ppuVar20[0xa6] + iVar10 + 4) != 4) {
                  pppuStack_1b0 = (undefined ***)0x68c968;
                  iVar14 = FUN_004e9370();
                  ppuVar11 = local_1c;
                  if (*(int *)(iVar14 + 0x3d8) == *(int *)((int)local_1c + 10)) {
                    piVar13 = *(int **)(*(int *)((int)ppuVar20 + 0x1c2) + 4);
                    while (puVar9 = local_38, pppuVar8 = local_50, piVar13 != (int *)0x0) {
                      piVar19 = (int *)piVar13[2];
                      piVar4 = (int *)*piVar13;
                      cVar5 = (**(code **)(*piVar4 + 0x28))();
                      piVar13 = piVar19;
                      if ((cVar5 != '\0') &&
                         (*(char *)(*(int *)(*(int *)((int)ppuVar11 + 10) + 0x12da) +
                                   *(int *)(piVar4[0x92] + 6) * 0x2c + 0x2c) != '\0')) {
                        iVar7 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
                        local_3c = (undefined ***)((int)local_3c + iVar7);
                      }
                    }
                    goto joined_r0x0068c929;
                  }
                }
                iVar7 = iVar7 + 1;
                iVar10 = iVar10 + 0xc;
                puVar9 = local_38;
                pppuVar8 = local_50;
                if ((int)ppuVar20[0xa4] <= iVar7) goto joined_r0x0068c929;
                goto LAB_0068c94e;
              }
            } while( true );
          }
          goto joined_r0x0068c8cd;
        }
        pppuVar8 = (undefined ***)((int)local_3c * 2 - (int)local_48);
        if ((int)local_28 <= (int)pppuVar8) {
          local_28 = pppuVar8;
        }
        local_38 = (undefined4 *)FUN_0044e1d0();
        for (pppuVar8 = local_ac; pppuVar8 != (undefined ***)0x0;
            pppuVar8 = (undefined ***)pppuVar8[2]) {
          pppuStack_1b0 = (undefined ***)*pppuVar8;
          pppuStack_1b4 = (undefined ***)0x68ca36;
          cVar5 = (*(code *)local_b0[3])();
          if (cVar5 != '\0') {
            if (pppuVar8 != (undefined ***)0x0) goto LAB_0068ca78;
            break;
          }
        }
        local_38 = (undefined4 *)((float)(int)local_28 * *(float *)(local_12c + 100));
        local_188 = (undefined ***)(int)ROUND((float)local_38);
        local_28 = local_188;
      }
LAB_0068ca78:
      local_22 = '\0';
      if (local_52 != '\0') {
        puVar9 = *(undefined4 **)((int)pppuVar21 + 0x3e);
        do {
          do {
            if (puVar9 == (undefined4 *)0x0) goto LAB_0068caf0;
            puVar2 = (undefined4 *)puVar9[2];
            piVar13 = (int *)*puVar9;
            puVar9 = puVar2;
            pppuVar21 = local_40;
          } while ((*(int *)(*piVar13 + 0x4c) != 0) ||
                  (iVar7 = FUN_004c9f81(), pppuVar21 = local_40, iVar7 == 0));
          FUN_004c9f81();
          pppuStack_1b0 = (undefined ***)0x68cab8;
          (**(code **)(*ppuVar11 + 0xe0))();
          pppuStack_1b0 = (undefined ***)0x68cabf;
          cVar5 = FUN_00690970();
          pppuVar21 = local_40;
        } while (cVar5 == '\0');
        (*(code *)**(undefined4 **)*piVar13)();
        pppuStack_1b0 = (undefined ***)0x68cada;
        (**(code **)(*ppuVar11 + 0xe0))();
        pppuStack_1b0 = (undefined ***)0x68cae1;
        pppuVar21 = (undefined ***)FUN_00692110();
        if ((int)local_28 <= (int)pppuVar21) {
          local_28 = pppuVar21;
        }
        local_22 = '\x01';
        pppuVar21 = local_40;
      }
LAB_0068caf0:
      pppuVar8 = local_30;
      if (((local_15 == '\0') && (local_22 == '\0')) && ((local_e4 != 0 || (local_52 != '\0')))) {
        local_28 = (undefined ***)((int)local_30 / 2 - (int)local_48);
        pppuVar8 = (undefined ***)((int)local_30 / 2);
      }
      pppuVar15 = (undefined ***)FUN_0044e1d0();
      if (pppuVar21 == pppuVar15) {
        local_90 = (undefined ***)&DAT_00867e58;
      }
      else {
        local_90 = (undefined ***)(**(code **)(*(int *)*pppuVar21[0xb] + 0xc))();
      }
      pppuStack_1b8 = *(undefined ****)(*pppuVar21[0xb] + 0x12);
      pppuStack_1b0 = local_48;
      pppuStack_1bc = local_90;
      pcStack_1c0 = (char *)0x68cb72;
      pppuStack_1b4 = pppuVar8;
      pcStack_1c0 = (char *)(**(code **)(*(int *)(*(int *)((int)ppuVar11 + 10) + 0xe) + 0xc))();
      pcStack_1c4 = s_Garrison_AI___s__Area__s___d___n_00867e08;
      FUN_00458570();
      piVar19 = local_104;
      *(undefined ****)((int)pppuVar21 + 0x56) = local_28;
      *(undefined ****)((int)pppuVar21 + 0x5a) = pppuVar8;
      *(undefined ****)((int)pppuVar21 + 0x5e) = local_48;
      for (piVar13 = local_108; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[2]) {
        if (*(int *)(*piVar13 + 0x56) < (int)local_28) {
          local_20 = (undefined **)&stack0xfffffe54;
          pppuStack_1b4 = (undefined ***)0x68cbe1;
          pppuStack_1b0 = pppuVar21;
          FUN_0068f210();
          piVar13 = local_108;
          goto LAB_0068cc09;
        }
      }
      pppuStack_1b0 = (undefined ***)0x68cbb4;
      local_104 = operator_new(0xe);
      if (local_104 == (int *)0x0) {
        local_104 = (int *)0x0;
      }
      else {
        *local_104 = (int)pppuVar21;
        local_104[1] = (int)piVar19;
        local_104[2] = 0;
        *(undefined1 *)(local_104 + 3) = 0;
      }
      iVar7 = local_100 + 1;
      bVar22 = local_100 != 0;
      piVar13 = local_104;
      local_100 = iVar7;
      if (bVar22) {
        piVar19[2] = (int)local_104;
        piVar13 = local_108;
      }
LAB_0068cc09:
      local_108 = piVar13;
      iVar7 = FUN_00527b40();
      local_128 = &PTR_FUN_007e4c84;
      local_90 = (undefined ***)(iVar7 + local_d4);
      local_124 = (undefined4 *)0x0;
      local_120 = (undefined4 *)0x0;
      local_11c = 0;
      local_118 = 0;
      local_8._0_1_ = 0xd;
      pppuVar21 = local_88;
      while (pppuVar8 = pppuStack_1b0, pppuVar15 = local_40, pppuVar21 != (undefined ***)0x0) {
        pppuVar8 = (undefined ***)pppuVar21[2];
        pppuVar15 = (undefined ***)*pppuVar21;
        pppuStack_1b0 = (undefined ***)0x68cc70;
        local_50 = pppuVar8;
        local_2c = pppuVar15;
        cVar5 = FUN_004e9500();
        pppuVar21 = pppuVar8;
        if (cVar5 == '\0') {
          local_168 = *(float *)((int)pppuVar15 + 0x48a) / local_94;
          local_38 = *(undefined4 **)((int)pppuVar15 + 0x492);
          FUN_00457e10();
          local_158 = &PTR_FUN_007e7a0c;
          pppuStack_1b4 = *(undefined ****)((int)pppuVar15 + 0x12);
          pppuStack_1b0 = (undefined ***)0x1;
          pppuStack_1b8 = &local_cc;
          pppuStack_1bc = &local_158;
          local_8 = CONCAT31(local_8._1_3_,0xe);
          pcStack_1c0 = (char *)0x68ccc9;
          FUN_0068e340();
          iVar7 = 0;
          if (local_dc != (int *)0x0) {
            piVar13 = local_dc;
            do {
              piVar19 = piVar13 + 2;
              if (*(int *)(*piVar13 + 0x14c) == *(int *)((int)pppuVar15 + 0x12)) {
                iVar7 = iVar7 + 1;
              }
              piVar13 = (int *)*piVar19;
            } while ((int *)*piVar19 != (int *)0x0);
          }
          iVar10 = FUN_00527b40();
          local_130 = (float)(iVar10 + iVar7);
          local_78 = (int *)((float)((int)local_90 + local_d4) * local_168);
          local_170 = (int)ROUND((float)local_78);
          local_48 = (undefined ***)(local_170 - (int)local_130);
          if (0 < (int)local_48) {
            if ((int)local_130 < 1) {
              local_16c = 4.0;
            }
            else {
              local_16c = (float)(int)local_48 / (float)(int)local_130;
            }
            do {
              local_34 = (undefined ***)0x0;
              local_114 = 100000.0;
              local_30 = (undefined ***)0x0;
              local_3c = local_c8;
              if (local_c8 == (undefined ***)0x0) break;
              do {
                pppuVar21 = (undefined ***)*local_3c;
                local_3c = (undefined ***)local_3c[2];
                cVar5 = (**(code **)(*(int *)((int)pppuVar21 + 0x22e) + 8))();
                if ((((cVar5 != '\0') && (pppuVar21[3] != *(undefined ***)((int)local_2c + 0x12)))
                    && (pppuVar21[3] != (undefined **)0x0)) &&
                   ((iVar7 = (*(code *)pppuVar21[0x47][1])(), iVar7 == 0 &&
                    (puVar9 = local_124, *(char *)((int)pppuVar21 + 0x17b) == '\0')))) {
                  for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)puVar9[2]) {
                    pppuStack_1b0 = (undefined ***)*puVar9;
                    pppuStack_1b4 = (undefined ***)0x68cdff;
                    cVar5 = (*(code *)local_128[3])();
                    if (cVar5 != '\0') {
                      if (puVar9 != (undefined4 *)0x0) goto LAB_0068d409;
                      break;
                    }
                  }
                  iVar7 = (**(code **)(*(int *)((int)pppuVar21 + 0x22) + 4))();
                  if (iVar7 != 0) {
                    cVar5 = FUN_00525660();
                    if (cVar5 == '\0') {
LAB_0068ce88:
                      local_60 = (undefined ***)(**(code **)(*(int *)((int)pppuVar21 + 0x22) + 4))()
                      ;
                      if ((int)local_48 <= (int)local_60) {
                        local_60 = local_48;
                      }
                      iVar7 = FUN_0051b230();
                      local_78 = *(int **)(iVar7 + 0x492);
                      local_98 = 4.0;
                      FUN_0051b230();
                      iVar7 = __ftol();
                      if (iVar7 < 1) {
                        local_98 = 0.0;
LAB_0068cfcb:
                        if (DAT_00dc18f8 != '\0') {
                          ppuVar20 = local_40[0x1b];
                          iVar7 = FUN_0051b230();
                          iVar7 = (**(code **)**(undefined4 **)(iVar7 + 0x482))();
                          if (ppuVar20 != *(undefined ***)(iVar7 + 0x6c)) goto LAB_0068d409;
                        }
                        pppuStack_1b0 = (undefined ***)0x68d004;
                        FUN_0051b230();
                        pppuStack_1b0 = (undefined ***)0x68d00b;
                        cVar5 = FUN_004e9500();
                        if (cVar5 == '\0') {
                          pppuStack_1b4 = (undefined ***)0x68d022;
                          pppuStack_1b0 = pppuVar21;
                          FUN_00522770();
                          pppuStack_1b4 = (undefined ***)0x68d029;
                          cVar5 = FUN_0049f8d0();
                          if (cVar5 == '\0') {
                            FUN_005212f0();
                            local_f8 = &PTR_FUN_007f3d08;
                            local_8._0_1_ = 0xf;
                            pppuStack_1b0 = (undefined ***)FUN_0051b230();
                            pppuStack_1b8 = (undefined ***)0x68d05f;
                            pppuStack_1b4 = pppuVar21;
                            cVar5 = FUN_00431220();
                            if (cVar5 == '\0') {
                              local_8 = CONCAT31(local_8._1_3_,0xe);
                              local_f8 = &PTR_LAB_007e518c;
                              ppuVar20 = local_f4;
                              while (ppuVar20 != (undefined **)0x0) {
                                ppuVar20 = *(undefined ***)((int)ppuVar20 + 8);
                                pppuStack_1b0 = (undefined ***)0x68d086;
                                FUN_00796cd8();
                              }
                            }
                            else {
                              pppuStack_1b0 = (undefined ***)0x68d0a0;
                              cVar5 = FUN_00431d90();
                              local_8 = CONCAT31(local_8._1_3_,0xe);
                              local_f8 = &PTR_LAB_007e518c;
                              ppuVar20 = local_f4;
                              if (cVar5 == '\0') {
                                while (ppuVar20 != (undefined **)0x0) {
                                  ppuVar20 = *(undefined ***)((int)ppuVar20 + 8);
                                  pppuStack_1b0 = (undefined ***)0x68d0f6;
                                  FUN_00796cd8();
                                }
                                local_f4 = (undefined **)0x0;
                                local_f0 = 0;
                                local_ec = 0;
                                goto LAB_0068d113;
                              }
                              while (ppuVar20 != (undefined **)0x0) {
                                ppuVar20 = *(undefined ***)((int)ppuVar20 + 8);
                                pppuStack_1b0 = (undefined ***)0x68d0c7;
                                FUN_00796cd8();
                              }
                            }
                            local_f4 = (undefined **)0x0;
                            local_f0 = 0;
                            local_ec = 0;
                            goto LAB_0068d409;
                          }
                        }
LAB_0068d113:
                        iVar7 = FUN_0051b230();
                        local_14 = *(float *)(iVar7 + 0x48a);
                        iVar7 = (*(code *)(*pppuVar21)[0x2f])();
                        if ((((iVar7 == 3) || (iVar7 == 1)) || (iVar7 == 5)) || (iVar7 == 4)) {
                          ppuVar20 = local_2c[0x95];
                          if (((ppuVar20 == (undefined **)0x4) || (ppuVar20 == (undefined **)0x2))
                             || (ppuVar20 == (undefined **)0x6)) {
                            local_14 = local_14 + _DAT_007e4088;
                          }
                          else if (ppuVar20 == (undefined **)0x0) {
                            local_14 = local_14 - _DAT_007e6858;
                          }
                          else if ((ppuVar20 == (undefined **)0x1) ||
                                  (ppuVar20 == (undefined **)0x5)) {
                            local_14 = local_14 + _DAT_007e6858;
                          }
                          iVar10 = FUN_0051b230();
                          if (((*(int *)(iVar10 + 0x254) == 4) ||
                              (iVar10 = FUN_0051b230(), *(int *)(iVar10 + 0x254) == 2)) ||
                             (iVar10 = FUN_0051b230(), *(int *)(iVar10 + 0x254) == 6)) {
                            local_14 = local_14 - _DAT_007e4088;
                          }
                          else {
                            iVar10 = FUN_0051b230();
                            if (*(int *)(iVar10 + 0x254) == 0) {
                              local_14 = local_14 + _DAT_007e6858;
                            }
                            else {
                              iVar10 = FUN_0051b230();
                              if ((*(int *)(iVar10 + 0x254) == 1) ||
                                 (iVar10 = FUN_0051b230(), *(int *)(iVar10 + 0x254) == 5)) {
                                local_14 = local_14 - _DAT_007e6858;
                              }
                            }
                          }
                        }
                        if (iVar7 == 8) {
                          if (local_2c[0x95] == (undefined **)0x2) {
                            local_14 = local_14 - _DAT_007e681c;
                          }
                          iVar10 = FUN_0051b230();
                          if (*(int *)(iVar10 + 0x254) == 2) {
                            local_14 = local_14 + _DAT_007e681c;
                          }
                        }
                        iVar10 = FUN_0051b230();
                        if (*(float *)(iVar10 + 0x48a) == _DAT_007e3380) {
                          local_14 = local_14 - _DAT_007e682c;
                        }
                        pppuStack_1b0 = (undefined ***)0x68d27c;
                        FUN_0051b230();
                        pppuStack_1b0 = (undefined ***)0x68d283;
                        cVar5 = FUN_004e9500();
                        if (cVar5 == '\0') {
                          local_14 = local_14 - _DAT_007e4088;
                        }
                        if (((iVar7 == 3) || (iVar7 == 5)) ||
                           ((iVar7 == 4 || ((iVar7 == 6 || (piVar13 = local_78, iVar7 == 10)))))) {
                          if (((uint)local_38 & 0xe2) == 0) {
                            local_14 = local_14 + _DAT_007e4088;
                          }
                          if (iVar7 == 10) {
                            uVar16 = (uint)local_38 & 0x80;
joined_r0x0068d2ed:
                            if (uVar16 != 0) {
                              local_14 = local_14 - _DAT_007e3834;
                            }
                          }
                          else {
                            if (((uint)local_38 & 0x44) != 0) {
                              local_14 = local_14 - _DAT_007e3834;
                            }
                            if (iVar7 == 6) {
                              uVar16 = FUN_004ece80();
                              goto joined_r0x0068d2ed;
                            }
                          }
                          piVar13 = local_78;
                          if (((uint)local_78 & 0xe2) == 0) {
                            local_14 = local_14 - _DAT_007e4088;
                          }
                          if (iVar7 == 10) {
                            if (((uint)local_78 & 0x80) != 0) {
                              local_14 = local_14 + _DAT_007e3834;
                            }
                          }
                          else {
                            if (((uint)local_78 & 0x44) != 0) {
                              local_14 = local_14 + _DAT_007e3834;
                            }
                            if (iVar7 == 6) {
                              FUN_0051b230();
                              iVar7 = FUN_004ece80();
                              if (iVar7 != 0) {
                                local_14 = local_14 + _DAT_007e3834;
                              }
                            }
                          }
                        }
                        cVar5 = FUN_00525660();
                        if (cVar5 != '\0') {
                          if (((uint)local_38 & 1) != 0) {
                            local_14 = local_14 - _DAT_007e682c;
                          }
                          if (((uint)local_38 & 0xfffffffe) != 0) {
                            local_14 = local_14 + _DAT_007e682c;
                          }
                          if (((uint)piVar13 & 1) != 0) {
                            local_14 = local_14 + _DAT_007e682c;
                          }
                          if (((uint)piVar13 & 0xfffffffe) != 0) {
                            local_14 = local_14 - _DAT_007e682c;
                          }
                        }
                        pppuStack_1b0 = (undefined ***)pppuVar21[3];
                        pppuStack_1b4 = (undefined ***)0x68d3c6;
                        fVar23 = (float10)FUN_0044a9c0();
                        fVar23 = fVar23 * (float10)_DAT_007e4090 +
                                 (float10)local_98 * (float10)_DAT_007e67e4 + (float10)local_14;
                        if ((local_34 == (undefined ***)0x0) || (fVar23 < (float10)local_114)) {
                          local_114 = (float)fVar23;
                          local_30 = local_60;
                          local_34 = pppuVar21;
                        }
                      }
                      else {
                        iVar7 = FUN_0051b230();
                        local_130 = *(float *)(iVar7 + 0x48a) / local_94;
                        local_9c = (float)((int)local_90 + local_d4) * local_130;
                        local_110 = (int *)(int)ROUND(local_9c);
                        iVar7 = FUN_0051b230();
                        piVar13 = local_110;
                        iVar7 = *(int *)(iVar7 + 0x48e);
                        if (0 < iVar7) {
                          local_20 = (undefined **)(iVar7 + -1);
                          if (0 < (int)local_20) {
                            local_9c = (float)((int)local_110 - (int)local_20);
                            local_98 = (float)(int)local_9c / (float)(int)local_20;
                          }
                          if (local_98 < local_16c) {
                            iVar10 = (**(code **)(*(int *)((int)pppuVar21 + 0x22) + 4))();
                            if (iVar7 - iVar10 < (int)piVar13) {
                              local_60 = (undefined ***)0x1;
                            }
                            iVar10 = (**(code **)(*(int *)((int)pppuVar21 + 0x22) + 4))();
                            if (((iVar10 != 1) || (local_168 != local_130)) ||
                               (iVar10 = FUN_00527b40(), iVar7 != iVar10 + 1)) goto LAB_0068cfcb;
                          }
                        }
                      }
                    }
                    else {
                      pppuStack_1b4 = (undefined ***)0x68ce3f;
                      pppuStack_1b0 = pppuVar21;
                      FUN_00522770();
                      pppuStack_1b4 = (undefined ***)0x68ce46;
                      cVar5 = FUN_0049f8d0();
                      if (cVar5 != '\0') {
                        piVar13 = (int *)(**(code **)(*local_1c + 0xe0))();
                        iVar7 = (**(code **)(*piVar13 + 0x1e8))();
                        iVar7 = *(int *)(iVar7 + 4);
                        do {
                          if (iVar7 == 0) goto LAB_0068ce88;
                          iVar7 = *(int *)(iVar7 + 8);
                          pppuStack_1b0 = (undefined ***)0x68ce7c;
                          iVar10 = FUN_006813c0();
                        } while (iVar10 == 0);
                      }
                    }
                  }
                }
LAB_0068d409:
                pppuVar21 = local_34;
              } while (local_3c != (undefined ***)0x0);
              if (local_34 == (undefined ***)0x0) break;
              piVar13 = (int *)((int)local_34 + 0x22);
              iVar7 = (**(code **)(*(int *)((int)local_34 + 0x22) + 4))();
              pppuVar8 = local_30;
              if (iVar7 < (int)local_30) break;
              iVar7 = (**(code **)(*piVar13 + 4))();
              pppuVar15 = pppuVar21;
              pppuVar18 = local_34;
              if ((int)pppuVar8 < iVar7) {
                ppuVar20 = pppuVar21[3];
                FUN_00522770();
                pppuStack_1b4 = local_194;
                pppuStack_1b8 = (undefined ***)0x68d45f;
                pppuStack_1b0 = (undefined ***)ppuVar20;
                FUN_0068eea0();
                pppuStack_1b0 = (undefined ***)0x68d46b;
                iVar7 = FUN_00428ee0();
                pppuVar8 = local_c4;
                if (iVar7 == 0) {
                  pppuVar15 = (undefined ***)0x0;
                }
                else {
                  pppuVar15 = (undefined ***)(iVar7 + -0x14);
                }
                pppuStack_1b0 = (undefined ***)0x68d486;
                local_c4 = operator_new(0xe);
                if (local_c4 == (undefined ***)0x0) {
                  local_c4 = (undefined ***)0x0;
                }
                else {
                  *local_c4 = (undefined **)pppuVar15;
                  local_c4[1] = (undefined **)pppuVar8;
                  local_c4[2] = (undefined **)0x0;
                  *(undefined1 *)(local_c4 + 3) = 0;
                }
                pppuVar18 = local_c4;
                if (local_c0 != 0) {
                  pppuVar8[2] = (undefined **)local_c4;
                  pppuVar18 = local_c8;
                }
                local_c8 = pppuVar18;
                local_c0 = local_c0 + 1;
                iVar7 = (**(code **)(*(int *)((int)pppuVar15 + 0x22) + 4))();
                pppuVar18 = pppuVar15;
                if (iVar7 < (int)local_30) {
                  do {
                    iVar7 = (**(code **)(*(int *)((int)pppuVar21 + 0x22) + 4))();
                    if (iVar7 < 2) break;
                    pppuStack_1b4 = (undefined ***)0x68d4f5;
                    pppuStack_1b0 = pppuVar15;
                    FUN_0045e6c0();
                    iVar7 = (**(code **)(*(int *)((int)pppuVar15 + 0x22) + 4))();
                  } while (iVar7 < (int)local_30);
                }
              }
              local_34 = pppuVar18;
              iVar7 = (**(code **)(*(int *)((int)pppuVar15 + 0x22) + 4))();
              local_48 = (undefined ***)((int)local_48 - iVar7);
              iVar7 = FUN_0051b230();
              iVar7 = *(int *)(iVar7 + 0x48e);
              iVar10 = (**(code **)(*(int *)((int)pppuVar15 + 0x22) + 4))();
              iVar14 = FUN_0051b230();
              pppuVar21 = local_2c;
              *(int *)(iVar14 + 0x48e) = iVar7 - iVar10;
              pppuStack_1b4 = (undefined ***)0x68d54c;
              pppuStack_1b0 = pppuVar15;
              cVar5 = FUN_006ac380();
              if (cVar5 == '\0') {
                cVar5 = FUN_00525660();
                if (cVar5 != '\0') break;
                pppuStack_1b0 = (undefined ***)0x68d67d;
                FUN_0050bca0();
                pppuStack_1b0 = pppuVar21;
                pppuStack_1b8 = (undefined ***)0x68d689;
                pppuStack_1b4 = pppuVar15;
                FUN_006aaff0();
                puVar9 = local_120;
                pppuStack_1b0 = (undefined ***)0x68d696;
                local_120 = operator_new(0xe);
                if (local_120 == (undefined4 *)0x0) {
                  local_120 = (undefined4 *)0x0;
                }
                else {
                  *local_120 = pppuVar15;
                  local_120[1] = puVar9;
                  local_120[2] = 0;
                  *(undefined1 *)(local_120 + 3) = 0;
                }
                iVar7 = local_11c + 1;
                bVar22 = local_11c != 0;
                puVar2 = local_120;
                local_11c = iVar7;
                if (bVar22) {
                  puVar9[2] = local_120;
                  puVar2 = local_124;
                }
              }
              else {
                piVar13 = (int *)FUN_0051b230();
                iVar7 = *(int *)((int)local_1c + 10);
                (*(code *)(*local_2c)[3])();
                pppuStack_1b0 = (undefined ***)0x68d577;
                pppuStack_1b0 = (undefined ***)(**(code **)(*piVar13 + 0xc))();
                pppuStack_1b4 = (undefined ***)0x68d57f;
                pppuStack_1b4 = (undefined ***)(**(code **)(*(int *)((int)pppuVar15 + 0x22) + 4))();
                pppuStack_1b8 = (undefined ***)0x68d587;
                pppuStack_1b8 = (undefined ***)(**(code **)(*(int *)(iVar7 + 0xe) + 0xc))();
                pppuStack_1bc = (undefined ***)s_Garrison_AI___s_strategically_re_00867dc4;
                pcStack_1c0 = (char *)0x68d592;
                FUN_00458570();
                pppuVar21 = local_34;
                pppuStack_1b4 = (undefined ***)&stack0xfffffe54;
                ppuVar20 = local_cc + 7;
                pppuStack_1b0 = local_34;
                pppuStack_1b8 = (undefined ***)0x68d5ae;
                (*(code *)local_cc[10])();
                pppuStack_1b8 = (undefined ***)0x68d5b6;
                (*(code *)*ppuVar20)();
                pcStack_1c0 = (char *)&pppuStack_1b8;
                pppuStack_1bc = pppuVar21;
                ppuVar20 = local_128 + 7;
                pcStack_1c4 = (char *)0x68d5cd;
                pppuStack_1b8 = extraout_ECX;
                (*(code *)local_128[10])();
                pcStack_1c4 = (char *)0x68d5d5;
                (*(code *)*ppuVar20)();
                ppuVar20 = local_74 + 7;
                pcStack_1c4 = extraout_ECX_00;
                (*(code *)local_74[10])(&pcStack_1c4,pppuVar21);
                (*(code *)*ppuVar20)();
                piVar13 = *(int **)((int)pppuVar21 + 0x26);
                piVar19 = local_dc;
                while (piVar4 = local_d8, local_dc = piVar19, local_d8 = piVar4,
                      piVar13 != (int *)0x0) {
                  piVar19 = (int *)piVar13[2];
                  iVar7 = *piVar13;
                  pppuStack_1b0 = (undefined ***)0x68d608;
                  local_d8 = operator_new(0xe);
                  if (local_d8 == (int *)0x0) {
                    local_d8 = (int *)0x0;
                  }
                  else {
                    *local_d8 = iVar7;
                    local_d8[1] = (int)piVar4;
                    local_d8[2] = 0;
                    *(undefined1 *)(local_d8 + 3) = 0;
                  }
                  iVar7 = local_d4 + 1;
                  bVar22 = local_d4 != 0;
                  piVar13 = piVar19;
                  piVar19 = local_d8;
                  local_d4 = iVar7;
                  if (bVar22) {
                    piVar4[2] = (int)local_d8;
                    piVar19 = local_dc;
                  }
                }
                pppuStack_1b4 = (undefined ***)0x68d65d;
                pppuStack_1b0 = local_34;
                FUN_00522770();
                pppuStack_1b4 = (undefined ***)0x68d664;
                FUN_0045fed0();
                puVar2 = local_124;
              }
              local_124 = puVar2;
            } while (0 < (int)local_48);
          }
          local_8._0_1_ = 0xd;
          FUN_00527230();
          ppuVar11 = local_1c;
          pppuVar21 = local_50;
        }
      }
      while (pppuStack_1b0 = pppuVar15, pppuVar21 = local_c8, local_40 = pppuStack_1b0,
            (int)local_28 < 0) {
        pppuStack_1b4 = (undefined ***)0x68d717;
        iVar7 = FUN_0068e5b0();
        pppuVar8 = pppuStack_1b0;
        pppuVar21 = local_c8;
        if (iVar7 == 0) break;
        pppuVar15 = local_40;
        if (*(undefined ***)(iVar7 + 500) == ppuVar11) {
          iVar14 = -(int)local_28;
          iVar10 = (**(code **)(*(int *)(iVar7 + 0x22) + 4))();
          if ((iVar14 < iVar10) && (1 < iVar10)) {
            local_20 = *(undefined ***)(iVar7 + 0xc);
            FUN_00522770();
            pppuStack_1b4 = local_178;
            pppuStack_1b0 = (undefined ***)local_20;
            pppuStack_1b8 = (undefined ***)0x68d767;
            FUN_0068eea0();
            pppuStack_1b0 = (undefined ***)0x68d773;
            iVar17 = FUN_00428ee0();
            if (iVar17 == 0) {
              local_38 = (undefined4 *)0x0;
            }
            else {
              local_38 = (undefined4 *)(iVar17 + -0x14);
            }
            do {
              if (iVar10 < 2) break;
              pppuStack_1b0 = (undefined ***)local_38;
              pppuStack_1b4 = (undefined ***)0x68d7a3;
              FUN_0045e6c0();
              iVar10 = iVar10 + -1;
            } while (iVar14 < iVar10);
          }
          piVar13 = local_6c;
          pppuStack_1b0 = (undefined ***)0x68d7b2;
          local_6c = operator_new(0xe);
          if (local_6c == (int *)0x0) {
            local_6c = (int *)0x0;
          }
          else {
            *local_6c = iVar7;
            local_6c[1] = (int)piVar13;
            local_6c[2] = 0;
            *(undefined1 *)(local_6c + 3) = 0;
          }
          piVar19 = local_6c;
          if (local_68 != 0) {
            piVar13[2] = (int)local_6c;
            piVar19 = local_70;
          }
          local_70 = piVar19;
          local_28 = (undefined ***)((int)local_28 + iVar10);
          ppuVar11 = local_1c;
          pppuVar8 = pppuStack_1b0;
          local_68 = local_68 + 1;
          pppuVar15 = local_40;
        }
      }
      while (pppuStack_1b0 = pppuVar8, pppuVar21 != (undefined ***)0x0) {
        pppuVar21 = (undefined ***)pppuVar21[2];
        pppuStack_1b0 = (undefined ***)0x68d810;
        FUN_00796cd8();
        pppuVar8 = pppuStack_1b0;
      }
      local_c8 = (undefined ***)0x0;
      local_c4 = (undefined ***)0x0;
      local_c0 = 0;
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_00527230();
      local_8c = &PTR_FUN_007e6eac;
      pppuVar21 = local_88;
      while (pppuVar21 != (undefined ***)0x0) {
        pppuVar21 = (undefined ***)pppuVar21[2];
        pppuStack_1b0 = (undefined ***)0x68d857;
        FUN_00796cd8();
      }
      local_88 = (undefined ***)0x0;
      local_84 = (undefined ***)0x0;
      local_80 = 0;
      local_e0 = &PTR_LAB_007e4b94;
      piVar13 = local_dc;
      while (piVar13 != (int *)0x0) {
        piVar13 = (int *)piVar13[2];
        pppuStack_1b0 = (undefined ***)0x68d889;
        FUN_00796cd8();
      }
      local_dc = (int *)0x0;
      local_d8 = (int *)0x0;
      local_d4 = 0;
      local_8._1_3_ = (uint3)((uint)local_8 >> 8);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00527230();
      piVar13 = local_58;
      ppuVar20 = local_1c;
    }
  }
  piVar13 = local_108;
  if (local_49 != '\0') {
    do {
      if (piVar13 == (int *)0x0) goto LAB_0068d8f6;
      piVar19 = (int *)piVar13[2];
      iVar7 = *piVar13;
      piVar13 = piVar19;
    } while ((*(int *)(iVar7 + 0x56) < 1) || (iVar10 = FUN_0044e1d0(), iVar7 == iVar10));
    local_49 = '\0';
  }
LAB_0068d8f6:
  local_28 = (undefined ***)0x0;
  local_44 = local_70;
  while (local_44 != (int *)0x0) {
    local_44 = (int *)local_44[2];
    cVar5 = FUN_00525660();
    if (cVar5 == '\0') {
      local_28 = (undefined ***)((int)local_28 + 1);
    }
  }
  pppuVar21 = local_ac;
  local_44 = (int *)0x0;
  ppuVar20 = local_1c;
  local_58 = local_108;
joined_r0x0068d92d:
  do {
    local_ac = pppuVar21;
    local_1c = ppuVar20;
    if ((local_58 == (int *)0x0) || (local_68 < 1)) goto LAB_0068db1c;
    bVar22 = pppuVar21 == (undefined ***)0x0;
    piVar13 = local_58 + 2;
    local_22 = '\0';
    pppuVar8 = (undefined ***)*local_58;
    local_58 = (int *)*piVar13;
    local_40 = pppuVar8;
    if (!bVar22) {
      do {
        pppuStack_1b0 = (undefined ***)*pppuVar21;
        pppuStack_1b4 = (undefined ***)0x68d96d;
        cVar5 = (*(code *)local_b0[3])();
        if (cVar5 != '\0') break;
        pppuVar21 = (undefined ***)pppuVar21[2];
      } while (pppuVar21 != (undefined ***)0x0);
      bVar22 = pppuVar21 == (undefined ***)0x0;
    }
    local_21 = !bVar22;
    pppuVar18 = (undefined ***)FUN_0044e1d0();
    FUN_004ca453();
    pppuVar15 = pppuVar8;
    ppuVar20 = local_1c;
    pppuVar21 = local_ac;
  } while (((pppuVar18 != pppuVar8) && (local_21 != '\0')) &&
          (local_22 = '\x01', pppuVar15 = local_40, (int)local_28 < 1));
  local_34 = *(undefined ****)((int)pppuVar15 + 0x56);
  if (((local_49 == '\0') || (99 < (int)local_34)) || (pppuVar18 != pppuVar8)) {
    pppuVar15 = local_40;
    if ((int)local_34 < 1) goto joined_r0x0068d92d;
  }
  else {
    local_34 = (undefined ***)0x64;
  }
  local_2c = (undefined ***)0x0;
  local_3c = (undefined ***)0x0;
  local_114 = -10.0;
  if (pppuVar15[0xb] != (undefined **)0x0) {
    ppuVar11 = pppuVar15[0xb];
    fVar1 = _DAT_007f3d04;
    do {
      ppuVar12 = ppuVar11 + 2;
      pppuVar8 = (undefined ***)*ppuVar11;
      if (pppuVar8[0xf6] == *(undefined ***)((int)local_1c + 10)) {
        if (local_114 < *(float *)((int)pppuVar8 + 0x48a)) {
          local_114 = *(float *)((int)pppuVar8 + 0x48a);
          local_3c = pppuVar8;
        }
        if ((*(int *)((int)pppuVar8 + 0x46a) != 0) && (fVar1 < *(float *)((int)pppuVar8 + 0x48a))) {
          fVar1 = *(float *)((int)pppuVar8 + 0x48a);
          local_2c = pppuVar8;
        }
      }
      ppuVar11 = (undefined **)*ppuVar12;
    } while ((undefined **)*ppuVar12 != (undefined **)0x0);
  }
  local_44 = local_70;
  ppuVar11 = local_1c;
  if (local_70 != (int *)0x0) {
LAB_0068da6a:
    pppuVar21 = local_ac;
    ppuVar20 = local_1c;
    if ((int)local_34 < 1) goto joined_r0x0068d92d;
    piVar13 = (int *)local_44[2];
    pppuVar8 = (undefined ***)*local_44;
    local_44 = piVar13;
    if (local_22 == '\0') {
LAB_0068da99:
      if (pppuVar8[0x7d] == ppuVar11) {
        iVar7 = FUN_0051b230();
        piVar13 = local_104;
        if (*(undefined ****)(iVar7 + 0x482) == local_40) goto LAB_0068db06;
        for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[1]) {
          local_20 = (undefined **)*piVar13;
          iVar7 = FUN_0051b230();
          if (local_20 == *(undefined ***)(iVar7 + 0x482)) {
            iVar7 = *piVar13;
            if ((iVar7 != 0) &&
               (local_50 = (undefined ***)(iVar7 + 0x56), *(int *)(iVar7 + 0x56) < 0)) {
              piVar13 = (int *)((int)pppuVar8 + 0x22);
              local_b8._0_2_ = DAT_0088f28c;
              local_b8._2_2_ = (undefined2)DAT_0088f28e;
              uStack_b4 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              iVar7 = (**(code **)(*piVar13 + 4))();
              if (iVar7 <= (int)local_34) goto LAB_0068dd4d;
              goto LAB_0068dc3f;
            }
            break;
          }
        }
      }
      pppuStack_1b4 = (undefined ***)&stack0xfffffe54;
      ppuVar20 = local_74 + 7;
      pppuStack_1b8 = (undefined ***)0x68db01;
      pppuStack_1b0 = pppuVar8;
      (*(code *)local_74[10])();
      pppuStack_1b8 = (undefined ***)0x68db06;
      (*(code *)*ppuVar20)();
      goto LAB_0068db06;
    }
    if ((int)local_28 < 1) goto joined_r0x0068d92d;
    cVar5 = FUN_00525660();
    if (cVar5 == '\0') goto LAB_0068da99;
    goto LAB_0068db06;
  }
  goto joined_r0x0068d92d;
joined_r0x0068e0c1:
  if (((cVar5 == '\0') || ((int)local_110 <= (int)pppuVar21)) || ((int)local_98 < 1))
  goto LAB_0068e282;
  pppuStack_1b0 = (undefined ***)&local_b8;
  pppuStack_1b4 = (undefined ***)0x68e0f7;
  FUN_00498700();
  piVar13 = (int *)FUN_00498710();
  ppuVar11 = (undefined **)FUN_0068f1e0();
  if (ppuVar11 == ppuVar20) {
    cVar5 = FUN_00525660();
    if (cVar5 == '\0') {
      iVar7 = FUN_00516300();
      if (iVar7 == 0) {
LAB_0068e170:
        pppuStack_1b0 = (undefined ***)0x68e179;
        pppuStack_1b0 = (undefined ***)FUN_0048b970();
        pppuStack_1b4 = (undefined ***)0x68e181;
        pppuStack_1b4 = (undefined ***)(**(code **)(*piVar13 + 0x10))();
        pppuStack_1b8 = (undefined ***)0x68e18c;
        (**(code **)(*ppuVar20 + 0xe0))();
        pppuStack_1b8 = (undefined ***)0x68e193;
        iVar7 = FUN_00696ef0();
        if (iVar7 == 0) {
          FUN_0051b230();
          puVar9 = (undefined4 *)FUN_00513f40();
          local_9c = (float)(**(code **)*puVar9)();
          piVar13 = (int *)((int)piVar13 + 0x22);
          local_20 = (undefined **)(**(code **)(*piVar13 + 4))();
          FUN_0068ed80();
          pppuStack_1b0 = (undefined ***)0x68e1da;
          FUN_0068ed90();
          FUN_00513f40();
          FUN_0068ed80();
          (**(code **)(*piVar13 + 4))();
          pppuVar21 = local_2c;
          pppuStack_1b0 = (undefined ***)0x68e1ff;
          FUN_00513f40();
          pppuStack_1b0 = (undefined ***)0x68e206;
          FUN_0068ed90();
          iVar7 = (**(code **)(*piVar13 + 4))();
          local_60 = (undefined ***)((int)local_60 + iVar7);
          iVar7 = (**(code **)(*piVar13 + 4))();
          local_98 = (float)((int)local_98 - iVar7);
          piVar19 = (int *)FUN_0051b230();
          iVar7 = FUN_00667670();
          local_20 = (undefined **)(iVar7 + 0xe);
          (*(code *)(*pppuVar21)[3])();
          pppuStack_1b0 = (undefined ***)0x68e250;
          pppuStack_1b0 = (undefined ***)(**(code **)(*piVar19 + 0xc))();
          pppuStack_1b4 = (undefined ***)0x68e258;
          pppuStack_1b4 = (undefined ***)(**(code **)(*piVar13 + 4))();
          pppuStack_1b8 = (undefined ***)0x68e261;
          pppuStack_1b8 = (undefined ***)(**(code **)(*local_20 + 0xc))();
          pppuStack_1bc = (undefined ***)s_Garrison_AI___s_ships_size__d_ar_00867d4c;
          pcStack_1c0 = (char *)0x68e26c;
          FUN_00458570();
          ppuVar20 = local_1c;
        }
      }
      else {
        FUN_0051b230();
        iVar7 = FUN_00513f40();
        if (iVar7 != local_e4) {
          pppuStack_1b0 = (undefined ***)0x68e15a;
          FUN_0051b230();
          pppuStack_1b0 = (undefined ***)0x68e161;
          FUN_00513f40();
          pppuStack_1b0 = (undefined ***)0x68e168;
          cVar5 = FUN_0068e7d0();
          if (cVar5 == '\0') goto LAB_0068e170;
        }
      }
    }
  }
  else {
    pppuStack_1b0 = (undefined ***)0x68e114;
    FUN_00457e80();
  }
  cVar5 = FUN_00498730();
  pppuVar21 = local_60;
  goto joined_r0x0068e0c1;
  while( true ) {
    piVar19 = local_70;
    if ((CONCAT22(uStack_b4,local_b8._2_2_) == DAT_0088f28e) && ((short)local_b8 == DAT_0088f28c)) {
      local_20 = pppuVar8[3];
      FUN_00522770();
      pppuStack_1b4 = local_178;
      pppuStack_1b0 = (undefined ***)local_20;
      pppuStack_1b8 = (undefined ***)0x68dc96;
      puVar9 = (undefined4 *)FUN_0068eea0();
      local_b8._0_2_ = (short)*puVar9;
      local_b8._2_2_ = (undefined2)((uint)*puVar9 >> 0x10);
      uStack_b4 = *(undefined2 *)(puVar9 + 1);
      pppuStack_1b0 = (undefined ***)0x68dcb5;
      iVar7 = FUN_00428ee0();
      if (iVar7 == 0) {
        local_38 = (undefined4 *)0x0;
      }
      else {
        local_38 = (undefined4 *)(iVar7 + -0x14);
      }
      local_78 = local_6c;
      pppuStack_1b0 = (undefined ***)0x68dcd8;
      local_6c = operator_new(0xe);
      if (local_6c == (int *)0x0) {
        local_6c = (int *)0x0;
      }
      else {
        *local_6c = (int)local_38;
        local_6c[1] = (int)local_78;
        local_6c[2] = 0;
        *(undefined1 *)(local_6c + 3) = 0;
      }
      iVar7 = local_68 + 1;
      bVar22 = local_68 != 0;
      piVar19 = local_6c;
      local_68 = iVar7;
      if (bVar22) {
        local_78[2] = (int)local_6c;
        piVar19 = local_70;
      }
    }
    local_70 = piVar19;
    pppuStack_1b0 = (undefined ***)0x68dd20;
    iVar7 = FUN_00428ee0();
    if (iVar7 == 0) {
      pppuStack_1b0 = (undefined ***)0x0;
    }
    else {
      pppuStack_1b0 = (undefined ***)(iVar7 + -0x14);
    }
    pppuStack_1b4 = (undefined ***)0x68dd3d;
    FUN_0045e6c0();
    iVar7 = (**(code **)(*piVar13 + 4))();
    if (iVar7 <= (int)local_34) break;
LAB_0068dc3f:
    iVar7 = (**(code **)(*piVar13 + 4))();
    if (iVar7 < 2) break;
  }
LAB_0068dd4d:
  local_15 = '\0';
  if (local_3c != (undefined ***)0x0) {
    if (DAT_00dc18f8 == '\0') {
      local_f8 = &PTR_FUN_007f3d08;
      local_f4 = (undefined **)0x0;
      local_f0 = 0;
      local_ec = 0;
      local_e8 = 0;
      local_8._0_1_ = 0x10;
      pppuStack_1b0 = (undefined ***)FUN_0051b230();
      pppuStack_1b8 = (undefined ***)0x68ddd1;
      pppuStack_1b4 = pppuVar8;
      cVar5 = FUN_00431220();
      if (cVar5 != '\0') {
        local_15 = '\x01';
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      local_f8 = &PTR_LAB_007e518c;
      ppuVar20 = local_f4;
      cVar5 = local_15;
      while (local_15 = cVar5, ppuVar20 != (undefined **)0x0) {
        local_20 = (undefined **)ppuVar20[2];
        pppuStack_1b0 = (undefined ***)0x68ddff;
        FUN_00796cd8();
        ppuVar20 = local_20;
        cVar5 = local_15;
      }
      local_f4 = (undefined **)0x0;
      local_f0 = 0;
      local_ec = 0;
    }
    else {
      local_20 = local_40[0x1b];
      iVar7 = FUN_0051b230();
      iVar7 = (**(code **)**(undefined4 **)(iVar7 + 0x482))();
      cVar5 = local_20 == *(undefined ***)(iVar7 + 0x6c);
    }
    if (cVar5 != '\0') {
      pppuStack_1b4 = (undefined ***)0x68de37;
      pppuStack_1b0 = pppuVar8;
      cVar5 = FUN_006ac380();
      if (cVar5 == '\0') {
        cVar5 = FUN_00525660();
        if (cVar5 == '\0') {
          local_28 = (undefined ***)((int)local_28 + -1);
          local_5c = local_74 + 7;
          pppuStack_1b4 = (undefined ***)&stack0xfffffe54;
          pppuStack_1b8 = (undefined ***)0x68df38;
          pppuStack_1b0 = pppuVar8;
          (*(code *)local_74[10])();
          pppuStack_1b8 = (undefined ***)0x68df40;
          (*(code *)*local_5c)();
          pppuStack_1b8 = (undefined ***)0x68df47;
          iVar7 = (**(code **)(*piVar13 + 4))();
          local_34 = (undefined ***)((int)local_34 - iVar7);
          local_20 = *local_50;
          pppuStack_1b8 = (undefined ***)0x68df5e;
          iVar7 = (**(code **)(*piVar13 + 4))();
          *local_50 = (undefined **)(iVar7 + (int)local_20);
          pppuStack_1bc = (undefined ***)0x68df74;
          pppuStack_1b8 = pppuVar8;
          FUN_0050bca0();
          pppuStack_1b8 = (undefined ***)0x68df7e;
          piVar13 = (int *)(**(code **)(*ppuVar11 + 0xe0))();
          pppuStack_1bc = (undefined ***)0x68df89;
          pppuStack_1b8 = pppuVar8;
          (**(code **)(*piVar13 + 0x1a8))();
          pppuStack_1b0 = local_3c;
          pppuStack_1b8 = (undefined ***)0x68df97;
          pppuStack_1b4 = pppuVar8;
          FUN_006aaff0();
        }
      }
      else {
        local_20 = (undefined **)FUN_0051b230();
        local_110 = (int *)(*(int *)((int)ppuVar11 + 10) + 0xe);
        (*(code *)(*local_3c)[3])();
        pppuStack_1b0 = (undefined ***)0x68de66;
        pppuStack_1b0 = (undefined ***)(**(code **)((int)*local_20 + 0xc))();
        pppuStack_1b4 = (undefined ***)0x68de6e;
        pppuStack_1b4 = (undefined ***)(**(code **)(*piVar13 + 4))();
        pppuStack_1b8 = (undefined ***)0x68de7a;
        pppuStack_1b8 = (undefined ***)(**(code **)(*local_110 + 0xc))();
        pppuStack_1bc = (undefined ***)s_Garrison_AI___s_strategically_re_00867dc4;
        pcStack_1c0 = (char *)0x68de85;
        FUN_00458570();
        cVar5 = FUN_00525660();
        if (cVar5 == '\0') {
          local_28 = (undefined ***)((int)local_28 + -1);
        }
        local_5c = local_74 + 7;
        pppuStack_1b4 = (undefined ***)&stack0xfffffe54;
        pppuStack_1b8 = (undefined ***)0x68deaa;
        pppuStack_1b0 = pppuVar8;
        (*(code *)local_74[10])();
        pppuStack_1b8 = (undefined ***)0x68deb2;
        (*(code *)*local_5c)();
        puVar3 = *ppuVar11;
        pppuStack_1b8 = (undefined ***)0x68debb;
        pppuStack_1b8 = (undefined ***)(*(code *)(*pppuVar8)[4])();
        ppuVar11 = local_1c;
        pppuStack_1bc = (undefined ***)0x68decd;
        local_20 = (undefined **)puVar3;
        (**(code **)(puVar3 + 0x1ac))();
        pppuStack_1bc = (undefined ***)0x68ded4;
        iVar7 = (**(code **)(*piVar13 + 4))();
        local_34 = (undefined ***)((int)local_34 - iVar7);
        local_20 = *local_50;
        pppuStack_1bc = (undefined ***)0x68deeb;
        iVar7 = (**(code **)(*piVar13 + 4))();
        *local_50 = (undefined **)(iVar7 + (int)local_20);
        pppuStack_1b4 = (undefined ***)0x68df04;
        pppuStack_1b0 = pppuVar8;
        FUN_00522770();
        pppuStack_1b4 = (undefined ***)0x68df0b;
        FUN_0045fed0();
      }
      goto LAB_0068db06;
    }
  }
  pppuVar21 = local_ac;
  ppuVar20 = local_1c;
  if (local_2c == (undefined ***)0x0) goto joined_r0x0068d92d;
  pppuStack_1b0 = *(undefined ****)((int)local_2c + 0x12);
  pppuStack_1b4 = (undefined ***)0x68dfb6;
  pppuStack_1b4 = (undefined ***)(*(code *)(*pppuVar8)[4])();
  pppuStack_1b8 = (undefined ***)0x68dfc1;
  (**(code **)(*ppuVar11 + 0xe0))();
  pppuStack_1b8 = (undefined ***)0x68dfc8;
  iVar7 = FUN_00696ef0();
  pppuVar21 = local_ac;
  ppuVar20 = local_1c;
  if (iVar7 != 0) goto joined_r0x0068d92d;
  cVar5 = FUN_00525660();
  if (cVar5 == '\0') {
    local_28 = (undefined ***)((int)local_28 + -1);
  }
  local_5c = local_74 + 7;
  pppuStack_1b4 = (undefined ***)&stack0xfffffe54;
  pppuStack_1b8 = (undefined ***)0x68dff2;
  pppuStack_1b0 = pppuVar8;
  (*(code *)local_74[10])();
  pppuStack_1b8 = (undefined ***)0x68dffa;
  (*(code *)*local_5c)();
  pppuStack_1b8 = (undefined ***)0x68e001;
  iVar7 = (**(code **)(*piVar13 + 4))();
  local_34 = (undefined ***)((int)local_34 - iVar7);
  local_20 = *local_50;
  pppuStack_1b8 = (undefined ***)0x68e018;
  iVar7 = (**(code **)(*piVar13 + 4))();
  *local_50 = (undefined **)(iVar7 + (int)local_20);
  pppuStack_1b8 = (undefined ***)0x68e029;
  piVar19 = (int *)FUN_0051b230();
  local_20 = (undefined **)(*(int *)((int)ppuVar11 + 10) + 0xe);
  pppuStack_1b8 = local_34;
  pppuStack_1bc = (undefined ***)0x68e040;
  pppuStack_1bc = (undefined ***)(*(code *)(*local_2c)[3])();
  pcStack_1c0 = (char *)0x68e048;
  pcStack_1c0 = (char *)(**(code **)(*piVar19 + 0xc))();
  pcStack_1c4 = (char *)0x68e050;
  pcStack_1c4 = (char *)(**(code **)(*piVar13 + 4))();
  pppuStack_1bc = (undefined ***)(**(code **)(*local_20 + 0xc))();
  pcStack_1c0 = s_Garrison_AI___s_ships_size__d_ar_00867d80;
  pcStack_1c4 = (char *)0x68e064;
  FUN_00458570();
LAB_0068db06:
  pppuVar21 = local_ac;
  ppuVar20 = local_1c;
  if (local_44 == (int *)0x0) goto joined_r0x0068d92d;
  goto LAB_0068da6a;
LAB_0068db1c:
  local_44 = local_70;
  if ((0 < local_68) && (local_e4 != 0)) {
    local_154 = 0;
    local_150 = 0;
    local_14c = 0;
    local_148 = 0;
    local_158 = &PTR_FUN_007e4c84;
    local_8._1_3_ = (uint3)((uint)local_8 >> 8);
    local_8 = CONCAT31(local_8._1_3_,0x11);
    pppuStack_1b0 = (undefined ***)0x68db73;
    FUN_00468690();
    pppuVar21 = (undefined ***)FUN_00527b40();
    pppuStack_1b0 = (undefined ***)0x68db93;
    local_60 = pppuVar21;
    iVar7 = FUN_00527630();
    local_20 = (undefined **)
               ((float)(iVar7 + (int)pppuVar21) *
               *(float *)(*(int *)(*(int *)((int)ppuVar20 + 10) + 0x120) + 0xb86));
    local_110 = (int *)(int)ROUND((float)local_20);
    local_58 = *(int **)(local_e4 + 0x2c);
    while (local_58 != (int *)0x0) {
      if (*(int *)(*local_58 + 0x46a) != 0) {
        puVar9 = (undefined4 *)FUN_0068f1f0();
        local_2c = (undefined ***)*puVar9;
        if (local_2c != (undefined ***)0x0) {
          pppuStack_1b0 = (undefined ***)0x68e092;
          (**(code **)(*ppuVar20 + 0xe0))();
          pppuStack_1b0 = (undefined ***)0x68e099;
          local_98 = (float)FUN_00695380();
          pppuStack_1b0 = (undefined ***)0x68e0ae;
          FUN_004986f0();
          pppuStack_1b0 = (undefined ***)0x68e0b7;
          FUN_0068a880();
          cVar5 = FUN_00498730();
          goto joined_r0x0068e0c1;
        }
        break;
      }
      pppuStack_1b0 = (undefined ***)&local_b8;
      pppuStack_1b4 = (undefined ***)0x68dbec;
      FUN_005162a0();
    }
LAB_0068e282:
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00527230();
  }
  local_8._0_1_ = 2;
  FUN_00457fb0();
  local_8._0_1_ = 1;
  FUN_00457fb0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00457fb0();
  local_8 = 0xffffffff;
  FUN_00527230();
  ExceptionList = local_10;
  return;
}


