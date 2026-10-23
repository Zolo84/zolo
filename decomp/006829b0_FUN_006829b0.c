// FUN_006829b0 @ 6829b0 size=10269

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006829b0(void **param_1)

{
  float *pfVar1;
  undefined **ppuVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  void *pvVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  undefined4 *puVar15;
  float fVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  void **ppvVar20;
  void **ppvVar21;
  void **ppvVar22;
  void **ppvVar23;
  char *pcVar24;
  char *pcVar25;
  bool bVar26;
  float10 fVar27;
  uint in_stack_fffffea0;
  void **ppvStack_148;
  void *local_134;
  undefined **local_130;
  int *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 *local_11c;
  void *local_118;
  undefined1 *local_114;
  void *local_110;
  void *local_10c [2];
  undefined8 local_104;
  void *local_fc;
  void *local_f8 [2];
  undefined **local_f0;
  void **local_ec;
  void **local_e8;
  int local_e4;
  undefined1 local_e0;
  undefined **local_dc;
  void **local_d8;
  void **local_d4;
  int local_d0;
  undefined1 local_cc;
  undefined **local_c8;
  void **local_c4;
  void **local_c0;
  int local_bc;
  undefined **local_b4;
  float *local_b0;
  float *local_ac;
  int local_a8;
  undefined1 local_a4;
  int local_a0;
  float local_9c;
  undefined1 *local_98;
  int *local_94;
  int *local_90;
  int local_8c;
  void **local_88;
  float local_84;
  float *local_80;
  void **local_7c;
  void *local_78;
  void **local_74;
  void **local_70;
  void *local_6c;
  float local_68;
  float local_64;
  undefined **local_60;
  void **local_5c;
  void **local_58;
  void **local_54;
  undefined1 local_50;
  char local_4d;
  void **local_4c;
  void **local_48;
  void *local_44;
  void **local_40;
  void **local_3c;
  void **local_38;
  int local_34;
  char local_2d;
  void **local_2c;
  float local_28;
  void **local_24;
  void **local_20;
  void **local_1c;
  void **local_18;
  void **local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d4cb9;
  local_10 = ExceptionList;
  local_114 = (undefined1 *)((int)param_1 + 0x9e);
  ExceptionList = &local_10;
  *local_114 = 1;
  param_1[0x40] = (void *)0x0;
  local_11c = (undefined1 *)((int)param_1 + 0x11e);
  param_1[0x42] = (void *)0x0;
  param_1[0x41] = (void *)0x0;
  *local_11c = 0;
  param_1[0x3f] = (void *)0x0;
  param_1[0x3b] = (void *)0x0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  local_1c = param_1;
  iVar8 = (**(code **)((int)*param_1 + 4))();
  if (iVar8 != 0) {
    iVar8 = (**(code **)((int)param_1[0x43] + 4))();
    if ((iVar8 < 1) && (*(char *)((int)param_1 + 0x125) != '\0')) {
      (**(code **)((int)param_1[0x32] + 0x10))();
    }
    else {
      FUN_00681cd0();
    }
    local_8c = *(int *)((int)param_1[7] + 0x120) + 0x8fc;
    FUN_00457e10();
    local_c8 = &PTR_FUN_007e4c84;
    local_8 = 0;
    piVar17 = param_1[0x29];
    ppvVar22 = local_c4;
    while (local_c4 = ppvVar22, piVar17 != (int *)0x0) {
      piVar3 = (int *)piVar17[2];
      iVar8 = *piVar17;
      piVar17 = piVar3;
      ppvVar22 = local_c4;
      if (*(void **)(iVar8 + 0x248) == param_1[7]) {
        uVar9 = FUN_00447250();
        local_20 = &ppvStack_148;
        FUN_00446d10(uVar9);
        cVar6 = (**(code **)((int)param_1[0x32] + 0x24))();
        ppvVar22 = local_c4;
        if (cVar6 == '\0') {
          local_38 = local_c0;
          ppvStack_148 = (void **)0x682ae8;
          local_20 = operator_new(0xe);
          local_8._0_1_ = 1;
          if (local_20 == (void **)0x0) {
            local_c0 = (void **)0x0;
          }
          else {
            ppvStack_148 = local_38;
            local_c0 = (void **)FUN_0045bab0(iVar8);
          }
          local_8 = (uint)local_8._1_3_ << 8;
          iVar8 = local_bc + 1;
          bVar26 = local_bc != 0;
          ppvVar22 = local_c0;
          local_bc = iVar8;
          if (bVar26) {
            local_38[2] = local_c0;
            ppvVar22 = local_c4;
          }
        }
      }
    }
    ppvVar22 = param_1[0x44];
    while (ppvVar22 != (void **)0x0) {
      local_14 = ppvVar22[2];
      if (*ppvVar22 != (undefined4 *)0x0) {
        ppvStack_148 = (void **)0x682b63;
        (*(code *)**(undefined4 **)*ppvVar22)();
      }
      ppvStack_148 = (void **)0x682b69;
      FUN_00796cd8();
      ppvVar22 = local_14;
    }
    param_1[0x44] = (void *)0x0;
    param_1[0x45] = (void *)0x0;
    param_1[0x46] = (void *)0x0;
    local_d8 = (void **)0x0;
    local_d4 = (void **)0x0;
    local_d0 = 0;
    local_cc = 0;
    local_dc = &PTR_LAB_007e378c;
    local_8._1_3_ = (uint3)((uint)local_8 >> 8);
    local_8._0_1_ = 2;
    local_38 = (void **)0x0;
    local_88 = (void **)0x0;
    local_7c = (void **)0x0;
    ppvVar22 = param_1[1];
    while (ppvVar22 != (void **)0x0) {
      local_60 = &PTR_LAB_007e378c;
      local_5c = (void **)0x0;
      local_58 = (void **)0x0;
      local_54 = (void **)0x0;
      local_50 = 0;
      local_8 = CONCAT31(local_8._1_3_,3);
      local_3c = ppvVar22[2];
      pvVar11 = *ppvVar22;
      local_44 = pvVar11;
      FUN_006afa70();
      ppvVar22 = (void **)(DAT_00ab27b4 + *(int *)((int)pvVar11 + 4) * 0x4b2);
      local_48 = ppvVar22;
      fVar27 = (float10)FUN_004ecf60();
      pvVar4 = ppvVar22[0x95];
      local_2c = (void **)(float)(fVar27 * (float10)_DAT_007e3848);
      if (pvVar4 == (void *)0x1) {
        local_2c = (void **)((float)local_2c + _DAT_007e6858);
      }
      else if (pvVar4 == (void *)0x5) {
        local_2c = (void **)((float)local_2c + _DAT_007e682c);
      }
      else if (pvVar4 == (void *)0x4) {
        local_2c = (void **)((float)local_2c + _DAT_007e6b28);
      }
      else if (pvVar4 == (void *)0x2) {
        local_2c = (void **)((float)local_2c + _DAT_007e82bc);
      }
      else if (pvVar4 == (void *)0x6) {
        local_2c = (void **)((float)local_2c + _DAT_007e681c);
      }
      iVar8 = *(int *)((int)pvVar11 + 4);
      local_68 = 0.0;
      local_34 = 0;
      local_18 = *(void ***)((int)local_1c[7] + 0x451c);
      ppvVar21 = (void **)*(int **)((int)pvVar11 + 0xc);
      while (local_18 != (void **)0x0) {
        ppvStack_148 = &local_134;
        local_40 = ppvVar21;
        puVar10 = (undefined4 *)FUN_00499730();
        ppvVar21 = local_40;
        if (*(int *)(*(int *)*puVar10 + 0x14c) == iVar8) {
          local_34 = local_34 + 1;
        }
      }
      iVar8 = local_34 + (int)ppvVar21;
      local_34 = 0;
      *(int *)((int)pvVar11 + 0xc) = iVar8;
      local_40 = *(void ***)(*(int *)((int)ppvVar22 + 0x1c2) + 4);
      if (local_40 != (void **)0x0) {
        local_18 = (void **)0x0;
        do {
          ppvVar22 = local_1c;
          piVar17 = local_40[2];
          piVar3 = *local_40;
          if (local_1c == (void **)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (int)local_1c + 0x12;
          }
          local_40 = (void **)piVar17;
          if (((piVar3[0x7d] == iVar8) && ((void *)piVar3[0x92] == local_1c[7])) &&
             (cVar6 = (**(code **)(*piVar3 + 0x28))(), cVar6 != '\0')) {
            uVar9 = FUN_00447250();
            local_20 = &ppvStack_148;
            FUN_00446d10(uVar9);
            cVar6 = (**(code **)((int)ppvVar22[0x32] + 0x24))();
            if (cVar6 == '\0') {
              if (piVar3 == (int *)0x0) {
                iVar8 = 0;
              }
              else {
                iVar8 = (int)piVar3 + 0x22;
              }
              local_18 = *(void ***)(iVar8 + 4);
              ppvVar22 = *(void ***)((int)pvVar11 + 4);
              local_98 = (undefined1 *)0x0;
              while (local_18 != (void **)0x0) {
                ppvStack_148 = local_f8;
                puVar10 = (undefined4 *)FUN_00499730();
                ppvStack_148 = ppvVar22;
                fVar27 = (float10)(**(code **)(**(int **)*puVar10 + 0x2c))(0,1);
                local_98 = (undefined1 *)(float)(fVar27 + (float10)(float)local_98);
              }
              local_68 = (float)local_98 + local_68;
              cVar6 = (**(code **)(*(int *)((int)piVar3 + 0x22e) + 8))();
              if ((cVar6 == '\0') && ((piVar3[0x99] == 0 || (piVar3[0x99] == 5)))) {
                iVar8 = FUN_0051c0c0();
                local_18 = local_1c[1];
                do {
                  if (local_18 == (void **)0x0) goto LAB_00683008;
                  ppvStack_148 = &local_110;
                  puVar10 = (undefined4 *)FUN_0068a980();
                  iVar14 = *(int *)*puVar10;
                } while (*(int *)(iVar14 + 4) != iVar8);
                if (iVar14 != 0) {
                  iVar8 = *(int *)(iVar14 + 0xc);
                  iVar12 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
                  *(int *)(iVar14 + 0xc) = iVar12 + iVar8;
                  local_18 = *(void ***)(iVar14 + 0x4c);
                  pfVar1 = (float *)(iVar14 + 0x4c);
                  ppvStack_148 = (void **)0x682e64;
                  local_20 = operator_new(0xe);
                  local_8._0_1_ = 4;
                  if (local_20 == (void **)0x0) {
                    fVar16 = 0.0;
                  }
                  else {
                    ppvStack_148 = local_18;
                    fVar16 = (float)FUN_0045bab0(piVar3);
                  }
                  local_8 = CONCAT31(local_8._1_3_,3);
                  *pfVar1 = fVar16;
                  iVar8 = *(int *)(iVar14 + 0x50);
                  *(int *)(iVar14 + 0x50) = iVar8 + 1;
                  if (iVar8 == 0) {
                    *(float *)(iVar14 + 0x48) = *pfVar1;
                  }
                  else {
                    local_18[2] = (void *)*pfVar1;
                  }
                }
              }
              else {
                local_18 = *(void ***)((int)pvVar11 + 0x4c);
                pfVar1 = (float *)((int)pvVar11 + 0x4c);
                ppvStack_148 = (void **)0x682ebe;
                local_20 = operator_new(0xe);
                local_8._0_1_ = 5;
                if (local_20 == (void **)0x0) {
                  fVar16 = 0.0;
                }
                else {
                  ppvStack_148 = local_18;
                  fVar16 = (float)FUN_0045bab0(piVar3);
                }
                local_8 = CONCAT31(local_8._1_3_,3);
                *pfVar1 = fVar16;
                iVar8 = *(int *)((int)pvVar11 + 0x50);
                *(int *)((int)pvVar11 + 0x50) = iVar8 + 1;
                if (iVar8 == 0) {
                  *(float *)((int)pvVar11 + 0x48) = *pfVar1;
                }
                else {
                  local_18[2] = (void *)*pfVar1;
                }
                iVar8 = *(int *)((int)pvVar11 + 0xc);
                iVar14 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
                *(int *)((int)pvVar11 + 0xc) = iVar14 + iVar8;
              }
              goto LAB_00683008;
            }
          }
          else {
            cVar6 = (**(code **)(*piVar3 + 0x28))();
            if ((cVar6 == '\0') ||
               (*(char *)(*(int *)((int)ppvVar22[7] + 0x12da) +
                         *(int *)(piVar3[0x92] + 6) * 0x2c + 0x2c) == '\0')) {
              if ((((void *)piVar3[0x92] != ppvVar22[7]) &&
                  ((*(char *)(*(int *)((int)ppvVar22[7] + 0x12da) + 0x31 +
                             *(int *)(piVar3[0x92] + 6) * 0x2c) != '\0' &&
                   (cVar6 = (**(code **)(*(int *)((int)piVar3 + 0x22e) + 8))(), cVar6 != '\0')))) &&
                 (*(char *)((int)piVar3 + 0x17b) == '\0')) {
                if (piVar3 == (int *)0x0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = (int)piVar3 + 0x22;
                }
                local_18 = *(void ***)(iVar8 + 4);
                ppvVar22 = *(void ***)((int)local_44 + 4);
                local_90 = (int *)0x0;
                while (local_18 != (void **)0x0) {
                  ppvStack_148 = &local_118;
                  puVar10 = (undefined4 *)FUN_00499730();
                  ppvStack_148 = ppvVar22;
                  fVar27 = (float10)(**(code **)(**(int **)*puVar10 + 0x2c))(0,1);
                  local_90 = (int *)(float)(fVar27 + (float10)(float)local_90);
                }
                local_68 = (float)local_90 + local_68;
                local_18 = (void **)0x0;
              }
            }
            else {
              iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
              ppvVar22[0x3f] = (void *)((int)ppvVar22[0x3f] + iVar8);
            }
LAB_00683008:
            if ((((local_1c[7] == (void *)piVar3[0x92]) ||
                 (*(char *)(*(int *)((int)local_1c[7] + 0x12da) + 0x31 +
                           *(int *)(piVar3[0x92] + 6) * 0x2c) != '\0')) &&
                (*(char *)((int)piVar3 + 0x17b) == '\0')) &&
               ((cVar6 = (**(code **)(*(int *)((int)piVar3 + 0x22e) + 8))(), cVar6 != '\0' ||
                (piVar3[0x99] == 4)))) {
              iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
              local_34 = local_34 + iVar8;
            }
          }
          pvVar11 = local_44;
          ppvVar22 = local_48;
          ppvVar21 = local_40;
        } while (local_40 != (void **)0x0);
      }
      local_40 = ppvVar21;
      local_2d = '\x01';
      *(int *)((int)pvVar11 + 0x10) = local_34;
      local_b0 = (float *)0x0;
      local_ac = (float *)0x0;
      local_a8 = 0;
      local_a4 = 0;
      local_b4 = &PTR_LAB_007e4b94;
      local_8._0_1_ = 6;
      iVar8 = *(int *)((int)pvVar11 + 4);
      local_18 = *(void ***)((int)local_1c[7] + 0x451c);
      while (local_18 != (void **)0x0) {
        ppvStack_148 = &local_fc;
        puVar10 = (undefined4 *)FUN_00499730();
        if (*(int *)(*(int *)*puVar10 + 0x14c) == iVar8) {
          ppvStack_148 = (void **)0x6830ea;
          FUN_0046a350();
        }
      }
      ppvVar21 = *(void ***)((int)pvVar11 + 4);
      local_9c = 0.0;
      local_18 = (void **)local_b0;
      while (local_18 != (void **)0x0) {
        ppvStack_148 = local_10c;
        puVar10 = (undefined4 *)FUN_00499730();
        ppvStack_148 = ppvVar21;
        fVar27 = (float10)(**(code **)(**(int **)*puVar10 + 0x2c))(0,1);
        local_9c = (float)(fVar27 + (float10)local_9c);
      }
      *(float *)((int)pvVar11 + 0x18) = local_9c + local_68;
      local_1c[0x41] = (void *)(local_9c + local_68 + (float)local_1c[0x41]);
      local_18 = (void **)0x0;
      local_84 = 0.0;
      local_4d = '\0';
      local_40 = (void **)0x0;
      if (0 < (int)ppvVar22[0xa4]) {
        local_80 = (float *)0x0;
        do {
          ppvVar22 = local_1c;
          if (*(int *)((int)local_80 + (int)local_48[0xa6] + 4) != 4) {
            local_34 = DAT_00ab27b4 + *(int *)((int)local_80 + (int)local_48[0xa6]) * 0x4b2;
            ppvVar21 = (void **)(local_34 + 0x3d8);
            local_4c = ppvVar21;
            if (*ppvVar21 != (void *)0x0) {
              ppvStack_148 = (void **)0x6831d0;
              cVar6 = FUN_0044b280();
              if (cVar6 == '\0') {
                if (*ppvVar21 != ppvVar22[7]) {
                  FUN_006a9d50();
                  ppvStack_148 = (void **)0x68356c;
                  cVar6 = FUN_0044b300();
                  if (cVar6 == '\0') goto LAB_00683683;
                }
                local_4c = ppvVar22[1];
                local_84 = (float)((int)local_84 + 1);
                iVar8 = *(int *)(local_34 + 0x12);
                do {
                  if (local_4c == (void **)0x0) goto LAB_00683618;
                  ppvStack_148 = &local_6c;
                  puVar10 = (undefined4 *)FUN_0068a980();
                  pvVar11 = local_44;
                  iVar14 = *(int *)*puVar10;
                } while (*(int *)(iVar14 + 4) != iVar8);
                if (iVar14 != 0) {
                  ppvStack_148 = (void **)0x6835c2;
                  cVar6 = (**(code **)(*(int *)((int)local_44 + 0x58) + 0x24))();
                  if (cVar6 == '\0') {
                    local_4c = *(void ***)((int)pvVar11 + 0x60);
                    pfVar1 = (float *)((int)pvVar11 + 0x60);
                    ppvStack_148 = (void **)0x6835d6;
                    local_20 = operator_new(0xe);
                    local_8._0_1_ = 0xc;
                    if (local_20 == (void **)0x0) {
                      fVar16 = 0.0;
                    }
                    else {
                      ppvStack_148 = local_4c;
                      fVar16 = (float)FUN_0068ad00(iVar14);
                    }
                    local_8._0_1_ = 6;
                    *pfVar1 = fVar16;
                    iVar8 = *(int *)((int)pvVar11 + 100);
                    *(int *)((int)pvVar11 + 100) = iVar8 + 1;
                    if (iVar8 == 0) {
                      *(float *)((int)pvVar11 + 0x5c) = *pfVar1;
                    }
                    else {
                      local_4c[2] = (void *)*pfVar1;
                    }
                  }
                }
LAB_00683618:
                iVar8 = 0;
                local_4d = '\x01';
                if (0 < *(int *)(local_34 + 0x290)) {
                  piVar17 = *(int **)(local_34 + 0x298);
                  do {
                    if (((piVar17[1] != 4) &&
                        (iVar14 = *(int *)(DAT_00ab27b4 + *piVar17 * 0x4b2 + 0x3d8), iVar14 != 0))
                       && (*(char *)(*(int *)((int)local_1c[7] + 0x12da) +
                                    *(int *)(iVar14 + 6) * 0x2c + 0x2c) != '\0')) {
                      local_4d = '\0';
                    }
                    iVar8 = iVar8 + 1;
                    piVar17 = piVar17 + 3;
                  } while (iVar8 < *(int *)(local_34 + 0x290));
                }
              }
              else {
                piVar17 = (int *)(local_34 + 0x12);
                local_20 = (void **)piVar17;
                for (ppvVar22 = local_5c; ppvVar22 != (void **)0x0; ppvVar22 = ppvVar22[2]) {
                  ppvStack_148 = *ppvVar22;
                  cVar6 = (*(code *)local_60[3])();
                  if (cVar6 != '\0') {
                    if (ppvVar22 != (void **)0x0) goto LAB_00683683;
                    break;
                  }
                }
                ppvVar22 = local_58;
                iVar8 = *piVar17;
                ppvStack_148 = (void **)0x683218;
                local_78 = operator_new(0xe);
                local_8._0_1_ = 7;
                if (local_78 == (void *)0x0) {
                  local_58 = (void **)0x0;
                }
                else {
                  ppvStack_148 = ppvVar22;
                  local_58 = (void **)FUN_0049a7a0(iVar8);
                }
                local_8._0_1_ = 6;
                ppvVar21 = local_58;
                if (local_54 != (void **)0x0) {
                  ppvVar22[2] = local_58;
                  ppvVar21 = local_5c;
                }
                local_5c = ppvVar21;
                local_28 = 0.0;
                local_54 = (void **)((int)local_54 + 1);
                for (ppvVar22 = local_d8; ppvVar22 != (void **)0x0; ppvVar22 = ppvVar22[2]) {
                  ppvStack_148 = *ppvVar22;
                  cVar6 = (*(code *)local_dc[3])();
                  if (cVar6 != '\0') {
                    if (ppvVar22 != (void **)0x0) goto LAB_00683306;
                    break;
                  }
                }
                ppvVar22 = local_d4;
                iVar8 = *piVar17;
                ppvStack_148 = (void **)0x683297;
                local_78 = operator_new(0xe);
                local_8._0_1_ = 8;
                if (local_78 == (void *)0x0) {
                  local_d4 = (void **)0x0;
                }
                else {
                  ppvStack_148 = ppvVar22;
                  local_d4 = (void **)FUN_0049a7a0(iVar8);
                }
                local_8._0_1_ = 6;
                ppvVar21 = local_d4;
                if (local_d0 != 0) {
                  ppvVar22[2] = local_d4;
                  ppvVar21 = local_d8;
                }
                local_d8 = ppvVar21;
                ppvStack_148 = (void **)0x6832e6;
                local_d0 = local_d0 + 1;
                local_78 = operator_new(0x8e);
                local_8._0_1_ = 9;
                if (local_78 == (void *)0x0) {
                  local_28 = 0.0;
                }
                else {
                  local_28 = (float)FUN_006af940();
                }
                local_8._0_1_ = 6;
LAB_00683306:
                local_70 = (void **)0x0;
                local_24 = (void **)0x0;
                piVar17 = *(int **)(*(int *)(local_34 + 0x1c2) + 4);
                ppvStack_148 = (void **)0x683331;
                local_94 = piVar17;
                uVar7 = FUN_004e79b0();
                local_a0 = CONCAT31(local_a0._1_3_,uVar7);
                while (piVar17 != (int *)0x0) {
                  piVar3 = (int *)*local_94;
                  local_94 = (int *)local_94[2];
                  cVar6 = (**(code **)(*piVar3 + 0x28))();
                  piVar17 = local_94;
                  if (cVar6 != '\0') {
                    FUN_00522770();
                    ppvStack_148 = (void **)0x683375;
                    cVar6 = FUN_0044b280();
                    piVar17 = local_94;
                    if (cVar6 != '\0') {
                      if (piVar3 == (int *)0x0) {
                        iVar8 = 0;
                      }
                      else {
                        iVar8 = (int)piVar3 + 0x22;
                      }
                      local_78 = *(void **)(iVar8 + 4);
                      ppvVar22 = *(void ***)((int)local_44 + 4);
                      local_64 = 0.0;
                      while (local_78 != (void *)0x0) {
                        ppvStack_148 = (void **)((int)&local_104 + 4);
                        puVar10 = (undefined4 *)FUN_00499730();
                        ppvStack_148 = ppvVar22;
                        fVar27 = (float10)(**(code **)(**(int **)*puVar10 + 0x2c))(1,1);
                        local_64 = (float)(fVar27 + (float10)local_64);
                      }
                      local_70 = (void **)(local_64 + (float)local_70);
                      fVar16 = local_64;
                      if ((char)local_a0 != '\0') {
                        fVar16 = local_64 * *(float *)(local_8c + 0x20);
                      }
                      *(float *)((int)local_44 + 0x20) = *(float *)((int)local_44 + 0x20) + fVar16;
                      pvVar11 = (void *)0x0;
                      if (local_28 != 0.0) {
                        ppvVar22 = *(void ***)((int)local_28 + 0x4c);
                        puVar10 = (undefined4 *)((int)local_28 + 0x4c);
                        ppvStack_148 = (void **)0x683417;
                        local_78 = operator_new(0xe);
                        local_8._0_1_ = 10;
                        if (local_78 == (void *)0x0) {
                          uVar9 = 0;
                        }
                        else {
                          ppvStack_148 = ppvVar22;
                          uVar9 = FUN_0045bab0(piVar3);
                        }
                        local_8._0_1_ = 6;
                        *puVar10 = uVar9;
                        iVar8 = *(int *)((int)local_28 + 0x50);
                        *(int *)((int)local_28 + 0x50) = iVar8 + 1;
                        pvVar11 = local_78;
                        if (iVar8 == 0) {
                          *(undefined4 *)((int)local_28 + 0x48) = *puVar10;
                        }
                        else {
                          ppvVar22[2] = (void *)*puVar10;
                        }
                      }
                      local_78 = pvVar11;
                      iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
                      local_24 = (void **)((int)local_24 + iVar8);
                      piVar17 = local_94;
                    }
                  }
                }
                local_1c[0x42] = (void *)((float)local_70 + (float)local_1c[0x42]);
                local_18 = (void **)((int)local_18 + (int)local_24);
                ppvStack_148 = (void **)0x68349e;
                cVar6 = FUN_004e9500();
                ppvVar22 = local_1c;
                if (cVar6 == '\0') {
                  local_2d = '\0';
                }
                if (local_28 != 0.0) {
                  *(void ***)((int)local_28 + 0x18) = local_70;
                  *(void ***)((int)local_28 + 0xc) = local_24;
                  *(void **)((int)local_28 + 4) = *local_20;
                  ppvVar20 = local_1c[0x45];
                  ppvVar21 = local_1c + 0x45;
                  ppvStack_148 = (void **)0x6834dd;
                  local_20 = operator_new(0xe);
                  local_8._0_1_ = 0xb;
                  if (local_20 == (void **)0x0) {
                    pvVar11 = (void *)0x0;
                  }
                  else {
                    ppvStack_148 = ppvVar20;
                    pvVar11 = (void *)FUN_0068ad00(local_28);
                  }
                  local_8._0_1_ = 6;
                  *ppvVar21 = pvVar11;
                  pvVar11 = ppvVar22[0x46];
                  ppvVar22[0x46] = (void *)((int)pvVar11 + 1);
                  if (pvVar11 == (void *)0x0) {
                    ppvVar22[0x44] = *ppvVar21;
                  }
                  else {
                    ppvVar20[2] = *ppvVar21;
                  }
                  local_1c[0x3f] = (void *)((int)local_1c[0x3f] + (int)local_24);
                  if ((&DAT_00dc0fd4)[*(int *)((int)*local_4c + 6)] != 0) {
                    *(undefined1 *)(local_1c + 0x49) = 1;
                  }
                }
              }
            }
          }
LAB_00683683:
          local_40 = (void **)((int)local_40 + 1);
          local_80 = local_80 + 3;
        } while ((int)local_40 < (int)local_48[0xa4]);
      }
      pvVar11 = local_44;
      ppvVar22 = local_48;
      local_1c[0x40] = (void *)((int)local_1c[0x40] + (int)local_84);
      *(float *)((int)local_44 + 0x14) = local_84;
      if (((int)local_84 < 2) && (local_4d == '\0')) {
        *(undefined1 *)((int)local_44 + 0x40) = 1;
      }
      if (local_2d != '\0') {
        *(undefined1 *)((int)local_44 + 0x8d) = 1;
      }
      *(void ***)((int)local_44 + 0x2c) = local_2c;
      *(void ***)((int)local_44 + 0x24) = local_18;
      local_14 = *(void ***)((int)local_44 + 0x20);
      local_20 = *(void ***)((int)local_48 + 0x19e);
      local_28 = (float)(int)local_20 * _DAT_007e4090 + _DAT_007e4088;
      ppvStack_148 = (void **)0x68371a;
      cVar6 = FUN_004e8ab0();
      if (cVar6 != '\0') {
        local_28 = local_28 + _DAT_007e682c;
      }
      fVar27 = (float10)FUN_004ed140();
      local_28 = (float)((float10)*(float *)((int)ppvVar22 + 0x206) * (float10)_DAT_007e40b8 +
                        (float10)*(float *)((int)ppvVar22 + 0x20a) * (float10)_DAT_007e5390 +
                        (float10)*(float *)((int)ppvVar22 + 0x202) * (float10)_DAT_007e34c0 +
                        (float10)*(float *)((int)ppvVar22 + 0x1fe) * (float10)_DAT_007e34c0 +
                        fVar27 + (float10)local_28);
      cVar6 = FUN_004e8a90();
      if (cVar6 != '\0') {
        local_28 = local_28 + _DAT_007e681c;
      }
      cVar6 = FUN_004e8a90();
      ppvVar22 = local_14;
      if (cVar6 != '\0') {
        ppvVar22 = (void **)((float)local_14 + (float)local_14);
      }
      local_38 = (void **)((float)ppvVar22 + (float)local_38);
      fVar16 = (float)ppvVar22 / (*(float *)((int)pvVar11 + 0x2c) * _DAT_007e543c + _DAT_007e3374);
      *(float *)((int)pvVar11 + 0x30) = fVar16;
      local_7c = (void **)(fVar16 + (float)local_7c);
      *(float *)((int)pvVar11 + 0x34) = local_28;
      local_88 = (void **)(local_28 + (float)local_88);
      ppvStack_148 = (void **)0x6837d7;
      FUN_00681490();
      local_8._0_1_ = 3;
      local_b4 = &PTR_LAB_007e4b94;
      FUN_0045a530();
      local_8._0_1_ = 2;
      local_60 = &PTR_LAB_007e378c;
      FUN_004174b0();
      ppvVar22 = local_3c;
    }
    ppvVar22 = local_1c[1];
    ppvVar21 = local_1c;
    while (ppvVar22 != (void **)0x0) {
      local_20 = *ppvVar22;
      ppvVar22 = ppvVar22[2];
      piVar17 = local_20[0x17];
      while (local_3c = ppvVar22, piVar17 != (int *)0x0) {
        piVar3 = (int *)piVar17[2];
        iVar8 = *piVar17;
        local_14 = ppvVar21[1];
        iVar14 = 0;
        local_1c = ppvVar21;
        while (local_14 != (void **)0x0) {
          ppvStack_148 = &local_6c;
          FUN_0068a980();
          ppvStack_148 = (void **)0x683861;
          iVar12 = FUN_004e9370();
          iVar12 = *(int *)(iVar12 + 0x482);
          if ((iVar12 != 0) && ((iVar14 == 0 || (iVar14 == iVar12)))) {
            iVar14 = iVar12;
          }
        }
        ppvVar22 = local_3c;
        piVar17 = piVar3;
        ppvVar21 = local_1c;
        if (((*(char *)(iVar8 + 0x40) != '\0') && (*(int *)(iVar14 + 0x6c) != 0)) &&
           (iVar8 = FUN_004ccd60(), ppvVar22 = local_3c, ppvVar21 = local_1c, 3 < iVar8)) {
          local_20[0xc] = (void *)((float)local_20[0xc] + (float)local_20[0xc]);
          *(undefined1 *)((int)local_20 + 0x41) = 1;
        }
      }
    }
    local_1c = ppvVar21;
    iVar8 = FUN_00527b40();
    local_14 = *(void ***)((int)ppvVar21[7] + 0x451c);
    local_28 = (float)iVar8;
    while (local_14 != (void **)0x0) {
      ppvStack_148 = &local_6c;
      puVar10 = (undefined4 *)FUN_00499730();
      if (0 < *(int *)(*(int *)*puVar10 + 0x14c)) {
        ppvStack_148 = (void **)0x6838ff;
        cVar6 = FUN_00689370();
        if (cVar6 != '\0') {
          iVar8 = iVar8 + 1;
        }
      }
    }
    local_4c = (void **)0x0;
    local_40 = (void **)0x0;
    piVar17 = ppvVar21[0x29];
    local_28 = (float)iVar8;
    while (piVar17 != (int *)0x0) {
      piVar3 = (int *)piVar17[2];
      if (*piVar17 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar17 + 0x22;
      }
      local_18 = (void **)0x0;
      local_14 = *(void ***)(iVar8 + 4);
      while (local_14 != (void **)0x0) {
        ppvStack_148 = &local_6c;
        puVar10 = (undefined4 *)FUN_00499730();
        ppvStack_148 = (void **)0xffffffff;
        fVar27 = (float10)(**(code **)(**(int **)*puVar10 + 0x2c))(0,1);
        local_18 = (void **)(float)(fVar27 + (float10)(float)local_18);
      }
      local_40 = (void **)((float)local_18 + (float)local_40);
      piVar17 = piVar3;
    }
    piVar17 = local_1c[0x44];
    ppvVar22 = local_1c;
    while (local_14 = (void **)0x0, piVar17 != (int *)0x0) {
      piVar3 = (int *)piVar17[2];
      piVar5 = *(int **)(*piVar17 + 0x48);
      while (piVar17 = piVar3, piVar5 != (int *)0x0) {
        piVar17 = (int *)piVar5[2];
        if (*piVar5 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar5 + 0x22;
        }
        local_18 = (void **)0x0;
        local_14 = *(void ***)(iVar8 + 4);
        local_1c = ppvVar22;
        while (local_14 != (void **)0x0) {
          ppvStack_148 = &local_6c;
          puVar10 = (undefined4 *)FUN_00499730();
          ppvStack_148 = (void **)0xffffffff;
          fVar27 = (float10)(**(code **)(**(int **)*puVar10 + 0x2c))(1,1);
          local_18 = (void **)(float)(fVar27 + (float10)(float)local_18);
        }
        local_4c = (void **)((float)local_18 + (float)local_4c);
        piVar5 = piVar17;
        ppvVar22 = local_1c;
      }
    }
    ppvVar21 = local_c4;
    ppvVar20 = ppvVar22;
    if ((10 < *(int *)((int)local_1c + 0x126)) &&
       ((*(char *)((int)local_1c + 0x125) != '\0' || (*(char *)(local_1c + 0x49) != '\0')))) {
      fVar16 = *(float *)(local_8c + 0x68);
      if (*(char *)(local_1c + 0x49) != '\0') {
        fVar16 = *(float *)(local_8c + 0x6c);
      }
      if ((local_28 == 0.0) || (fVar16 <= (float)(int)local_1c[0x3f] / (float)(int)local_28)) {
        local_20 = (void **)((float)(int)local_28 * _DAT_007e6800);
        local_14 = (void **)(int)ROUND((float)local_20);
        local_18 = local_14;
        if ((int)local_14 < 2) {
          local_18 = (void **)0x2;
        }
        ppvVar21 = local_18;
        local_1c = ppvVar22;
        iVar8 = (**(code **)((int)*ppvVar22 + 4))();
        if ((int)local_28 + (int)ppvVar21 < iVar8) {
          iVar8 = (**(code **)((int)*ppvVar22 + 4))();
          local_18 = (void **)(iVar8 - (int)local_28);
        }
        ppvVar21 = local_c4;
        ppvVar20 = local_1c;
        if (((int)ppvVar22[0x3e] < 1) && (*(char *)(ppvVar22 + 0x49) == '\0')) {
          ppvVar22[0x3e] = (void *)((int)ppvVar22[0x3e] + 1);
        }
        else {
          local_3c = (void **)0x0;
          local_40 = (void **)0x0;
          piVar17 = ppvVar22[1];
          if (ppvVar22[1] != (int *)0x0) {
            do {
              piVar3 = (int *)piVar17[2];
              iVar8 = *piVar17;
              ppvStack_148 = (void **)0x683ae3;
              FUN_004e9370();
              fVar27 = (float10)FUN_004eceb0();
              local_14 = (void **)(float)fVar27;
              ppvStack_148 = (void **)0x683b00;
              cVar6 = FUN_004e9500();
              if ((cVar6 == '\0') &&
                 ((local_3c == (void **)0x0 || ((float)local_40 < (float)local_14)))) {
                local_3c = *(void ***)(iVar8 + 4);
                local_40 = local_14;
              }
              piVar17 = piVar3;
            } while (piVar3 != (int *)0x0);
            ppvVar21 = local_c4;
            ppvVar20 = local_1c;
            if (local_3c != (void **)0x0) {
              DAT_00d1123c._0_1_ = 0;
              local_14 = local_1c[1];
              if (local_14 != (void **)0x0) {
                do {
                  ppvStack_148 = &local_6c;
                  FUN_0068a980();
                  ppvStack_148 = (void **)0x683b66;
                  piVar17 = (int *)FUN_004e9370();
                  pcVar13 = (char *)(**(code **)(*piVar17 + 0xc))();
                  uVar18 = 0xffffffff;
                  do {
                    pcVar25 = pcVar13;
                    if (uVar18 == 0) break;
                    uVar18 = uVar18 - 1;
                    pcVar25 = pcVar13 + 1;
                    cVar6 = *pcVar13;
                    pcVar13 = pcVar25;
                  } while (cVar6 != '\0');
                  uVar18 = ~uVar18;
                  iVar8 = -1;
                  pcVar13 = (char *)&DAT_00d1123c;
                  do {
                    pcVar24 = pcVar13;
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    pcVar24 = pcVar13 + 1;
                    cVar6 = *pcVar13;
                    pcVar13 = pcVar24;
                  } while (cVar6 != '\0');
                  pcVar13 = pcVar25 + -uVar18;
                  pcVar25 = pcVar24 + -1;
                  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
                    *(undefined4 *)pcVar25 = *(undefined4 *)pcVar13;
                    pcVar13 = pcVar13 + 4;
                    pcVar25 = pcVar25 + 4;
                  }
                  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *pcVar25 = *pcVar13;
                    pcVar13 = pcVar13 + 1;
                    pcVar25 = pcVar25 + 1;
                  }
                  if (local_14 == (void **)0x0) break;
                  uVar18 = 0xffffffff;
                  pcVar13 = &DAT_0083d364;
                  do {
                    pcVar25 = pcVar13;
                    if (uVar18 == 0) break;
                    uVar18 = uVar18 - 1;
                    pcVar25 = pcVar13 + 1;
                    cVar6 = *pcVar13;
                    pcVar13 = pcVar25;
                  } while (cVar6 != '\0');
                  uVar18 = ~uVar18;
                  iVar8 = -1;
                  pcVar13 = (char *)&DAT_00d1123c;
                  do {
                    pcVar24 = pcVar13;
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    pcVar24 = pcVar13 + 1;
                    cVar6 = *pcVar13;
                    pcVar13 = pcVar24;
                  } while (cVar6 != '\0');
                  pcVar13 = pcVar25 + -uVar18;
                  pcVar25 = pcVar24 + -1;
                  for (uVar19 = uVar18 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
                    *(undefined4 *)pcVar25 = *(undefined4 *)pcVar13;
                    pcVar13 = pcVar13 + 4;
                    pcVar25 = pcVar25 + 4;
                  }
                  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                    *pcVar25 = *pcVar13;
                    pcVar13 = pcVar13 + 1;
                    pcVar25 = pcVar25 + 1;
                  }
                } while( true );
              }
              ppvVar22 = local_1c;
              ppvStack_148 = (void **)&DAT_00d1123c;
              uVar9 = (**(code **)(*(int *)((int)local_1c[7] + 0xe) + 0xc))();
              FUN_00458570(s__s__Front__s__with__d_divisions__00867cec,uVar9);
              ppvStack_148 = ppvVar22;
              ppvVar21 = local_18;
              (**(code **)(*(int *)((int)ppvVar22 + 0x12) + 0xe0))(local_18);
              FUN_00694be0(ppvVar21);
              ppvVar22[0x3e] = (void *)0x0;
              ppvVar21 = local_c4;
              ppvVar20 = local_1c;
            }
          }
        }
      }
      else {
        local_1c[0x3e] = (void *)0x0;
      }
    }
joined_r0x00683c28:
    local_1c = ppvVar20;
    if (ppvVar21 != (void **)0x0) {
      local_74 = ppvVar21[2];
      ppvVar22 = *ppvVar21;
      ppvVar21 = local_74;
      local_24 = ppvVar22;
      ppvVar20 = local_1c;
      if ((ppvVar22[3] != (void *)0x0) && (*(char *)((int)ppvVar22 + 0x17b) == '\0')) {
        FUN_0051b230();
        cVar6 = FUN_004e46e0();
        ppvVar21 = local_74;
        ppvVar20 = local_1c;
        if ((cVar6 == '\0') &&
           ((iVar8 = (**(code **)((int)ppvVar22[0x47] + 4))(), ppvVar20 = local_1c,
            ppvVar21 = local_74, iVar8 == 0 && (*(int *)((int)ppvVar22 + 0x176) == 0)))) {
          ppvStack_148 = (void **)0x683ca2;
          cVar6 = FUN_006813e0();
          if (cVar6 == '\0') {
            cVar6 = (**(code **)(*(int *)((int)ppvVar22 + 0x22e) + 8))();
            local_2d = '\x01';
            if (cVar6 == '\0') goto LAB_00683cc2;
          }
          else {
LAB_00683cc2:
            local_2d = '\0';
          }
          cVar6 = (**(code **)(*(int *)((int)ppvVar22 + 0x22e) + 8))();
          if (cVar6 == '\0') {
            iVar8 = FUN_0051c0c0();
            local_14 = ppvVar20[1];
            do {
              if (local_14 == (void **)0x0) goto LAB_00683d1d;
              ppvStack_148 = &local_6c;
              puVar10 = (undefined4 *)FUN_0068a980();
            } while (*(int *)(*(int *)*puVar10 + 4) != iVar8);
            if (*(int *)*puVar10 != 0) goto LAB_00683df1;
LAB_00683d1d:
            iVar14 = FUN_0051c0c0();
            iVar8 = DAT_00ab27b4 + iVar14 * 0x4b2;
            if (*(int *)(DAT_00ab27b4 + 0x3d8 + iVar14 * 0x4b2) != 0) {
              FUN_006a9d50();
              ppvStack_148 = (void **)0x683d5a;
              cVar6 = FUN_0044b280();
              if (cVar6 != '\0') {
                if ((ppvVar22[0x99] != (void *)0x1) && (ppvVar22[0x99] != (void *)0x4)) {
                  if (*(int *)(local_8c + 0x84) < 1) goto LAB_00683dfc;
                  ppvStack_148 = (void **)0xbf800000;
                  local_f8[0] = (void *)((uint)local_f8[0] & 0xff000000);
                  in_stack_fffffea0 = in_stack_fffffea0 & 0xffff0000;
                  FUN_0050b600(ppvVar22,1,*(undefined4 *)(iVar8 + 0x12),0x3f800000,1,1,
                               *(undefined4 *)(DAT_00893530 + 0x14),
                               *(undefined2 *)(DAT_00893530 + 0x18),local_f8[0],in_stack_fffffea0,1,
                               0xffffffff,0,1,0);
                }
                goto LAB_00683df1;
              }
            }
          }
          else {
LAB_00683df1:
            ppvVar21 = local_74;
            ppvVar20 = local_1c;
            if (local_2d == '\0') goto joined_r0x00683c28;
          }
LAB_00683dfc:
          local_50 = 0;
          local_5c = (void **)0x0;
          local_58 = (void **)0x0;
          local_54 = (void **)0x0;
          local_60 = &PTR_LAB_007f3a6c;
          local_8 = CONCAT31(local_8._1_3_,0xd);
          ppvStack_148 = (void **)0x683e1f;
          iVar8 = FUN_004e9370();
          local_20 = (void **)(iVar8 + 0x290);
          local_40 = (void **)0x0;
          if (0 < (int)*local_20) {
            local_18 = (void **)(iVar8 + 0x298);
            local_48 = (void **)0x0;
            do {
              ppvVar21 = local_5c;
              if (*(int *)((int)local_48 + (int)*local_18 + 4) != 4) {
                iVar8 = *(int *)((int)local_48 + (int)*local_18);
                local_14 = local_1c[1];
                do {
                  ppvVar21 = local_5c;
                  if (local_14 == (void *)0x0) goto LAB_00683f83;
                  ppvStack_148 = (void **)((int)&local_104 + 4);
                  puVar10 = (undefined4 *)FUN_0068a980();
                  iVar14 = *(int *)*puVar10;
                } while (*(int *)(iVar14 + 4) != iVar8);
                ppvVar21 = local_5c;
                if (iVar14 != 0) {
                  ppvStack_148 = (void **)0x683eaa;
                  FUN_004e9370();
                  ppvStack_148 = (void **)0x683ebb;
                  cVar6 = FUN_004e9500();
                  ppvVar21 = local_5c;
                  if (cVar6 == '\0') {
                    iVar8 = *(int *)(iVar14 + 0xc);
                    FUN_0051c480();
                    iVar14 = FUN_0050a580();
                    iVar12 = FUN_006afec0();
                    if (iVar14 <= iVar12) {
                      iVar14 = iVar12;
                    }
                    iVar12 = (**(code **)(*(int *)((int)local_24 + 0x22) + 4))();
                    ppvVar22 = local_24;
                    ppvVar21 = local_5c;
                    if (iVar12 + iVar8 <= iVar14 + 1) {
                      iVar8 = *(int *)((int)local_48 + (int)*local_18);
                      local_14 = local_1c[1];
                      do {
                        if (local_14 == (void *)0x0) {
                          iVar14 = 0;
                          break;
                        }
                        ppvStack_148 = local_10c;
                        puVar10 = (undefined4 *)FUN_0068a980();
                        iVar14 = *(int *)*puVar10;
                      } while (*(int *)(iVar14 + 4) != iVar8);
                      ppvVar20 = local_58;
                      ppvStack_148 = (void **)0x683f40;
                      local_fc = operator_new(0xe);
                      local_8._0_1_ = 0xe;
                      if (local_fc == (void *)0x0) {
                        local_58 = (void **)0x0;
                      }
                      else {
                        ppvStack_148 = ppvVar20;
                        local_58 = (void **)FUN_0068ad00(iVar14);
                      }
                      local_8 = CONCAT31(local_8._1_3_,0xd);
                      iVar8 = (int)local_54 + 1;
                      bVar26 = local_54 != (void **)0x0;
                      ppvVar22 = local_24;
                      ppvVar21 = local_58;
                      local_54 = (void **)iVar8;
                      if (bVar26) {
                        ppvVar20[2] = local_58;
                        ppvVar21 = local_5c;
                      }
                    }
                  }
                }
              }
LAB_00683f83:
              local_5c = ppvVar21;
              local_40 = (void **)((int)local_40 + 1);
              local_48 = local_48 + 3;
            } while ((int)local_40 < (int)*local_20);
          }
          ppvVar21 = local_1c;
          pvVar11 = ppvVar22[3];
          local_14 = local_1c[1];
          do {
            if (local_14 == (void **)0x0) goto LAB_00683fd1;
            ppvStack_148 = &local_118;
            puVar10 = (undefined4 *)FUN_0068a980();
          } while (*(void **)(*(int *)*puVar10 + 4) != pvVar11);
          if (*(int *)*puVar10 == 0) {
LAB_00683fd1:
            ppvVar20 = local_5c;
            ppvVar23 = local_5c;
            if ((int)local_54 < 1) {
              ppvVar20 = local_1c[1];
            }
          }
          else {
            local_14 = ppvVar21[1];
            pvVar11 = ppvVar22[3];
            do {
              if (local_14 == (void **)0x0) {
                iVar8 = 0;
                break;
              }
              ppvStack_148 = &local_110;
              puVar10 = (undefined4 *)FUN_0068a980();
              iVar8 = *(int *)*puVar10;
            } while (*(void **)(iVar8 + 4) != pvVar11);
            ppvVar21 = local_58;
            ppvStack_148 = (void **)0x684022;
            local_fc = operator_new(0xe);
            local_8._0_1_ = 0xf;
            if (local_fc == (void *)0x0) {
              local_58 = (void **)0x0;
            }
            else {
              ppvStack_148 = ppvVar21;
              local_58 = (void **)FUN_0068ad00(iVar8);
            }
            local_8 = CONCAT31(local_8._1_3_,0xd);
            iVar8 = (int)local_54 + 1;
            bVar26 = local_54 != (void **)0x0;
            ppvVar20 = local_58;
            ppvVar23 = local_58;
            local_54 = (void **)iVar8;
            if (bVar26) {
              ppvVar21[2] = local_58;
              goto LAB_00683fd1;
            }
          }
          local_5c = ppvVar23;
          pvVar11 = (void *)0x0;
          local_4c = (void **)0xc7c35000;
          if (ppvVar20 == (void **)0x0) {
LAB_00684117:
            ppvVar22 = local_1c;
            ppvStack_148 = (void **)0x684128;
            FUN_004e9370();
            ppvStack_148 = (void **)0x684136;
            cVar6 = FUN_004e9500();
            if ((cVar6 == '\0') &&
               (pvVar11 = *(void **)ppvVar22[1], ppvVar22 = local_24, pvVar11 != (void *)0x0))
            goto LAB_00684150;
          }
          else {
            do {
              local_14 = ppvVar20[2];
              pvVar4 = *ppvVar20;
              if ((float)local_4c < *(float *)((int)pvVar4 + 0x20) - *(float *)((int)pvVar4 + 0x18))
              {
                ppvStack_148 = (void **)0x6840a7;
                FUN_004e9370();
                ppvStack_148 = (void **)0x6840b8;
                cVar6 = FUN_004e9500();
                ppvVar22 = local_24;
                if (cVar6 == '\0') {
                  local_20 = *(void ***)((int)pvVar4 + 0xc);
                  FUN_0051c480();
                  iVar8 = FUN_0050a580();
                  iVar14 = FUN_006afec0();
                  if (iVar8 <= iVar14) {
                    iVar8 = iVar14;
                  }
                  iVar14 = (**(code **)(*(int *)((int)local_24 + 0x22) + 4))();
                  ppvVar22 = local_24;
                  if (iVar14 + (int)local_20 <= iVar8 + 1) {
                    local_4c = (void **)(*(float *)((int)pvVar4 + 0x20) -
                                        *(float *)((int)pvVar4 + 0x18));
                    pvVar11 = pvVar4;
                  }
                }
              }
              ppvVar20 = local_14;
            } while (local_14 != (void **)0x0);
            if (pvVar11 == (void *)0x0) goto LAB_00684117;
LAB_00684150:
            ppvStack_148 = (void **)0x684159;
            FUN_004e9370();
            if (*(void **)((int)pvVar11 + 4) == ppvVar22[3]) {
              (**(code **)((int)*ppvVar22 + 0x74))();
            }
            else {
              ppvStack_148 = (void **)(DAT_00ab27b4 + (int)*(void **)((int)pvVar11 + 4) * 0x4b2);
              FUN_006aaff0(ppvVar22);
            }
            iVar8 = *(int *)((int)pvVar11 + 0xc);
            iVar14 = (**(code **)(*(int *)((int)local_24 + 0x22) + 4))();
            *(int *)((int)pvVar11 + 0xc) = iVar14 + iVar8;
            iVar8 = *(int *)((int)pvVar11 + 0x4c);
            puVar10 = (undefined4 *)((int)pvVar11 + 0x4c);
            ppvStack_148 = (void **)0x6841b6;
            puVar15 = operator_new(0xe);
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = (undefined4 *)0x0;
            }
            else {
              *puVar15 = local_24;
              puVar15[1] = iVar8;
              puVar15[2] = 0;
              *(undefined1 *)(puVar15 + 3) = 0;
            }
            *puVar10 = puVar15;
            iVar14 = *(int *)((int)pvVar11 + 0x50);
            *(int *)((int)pvVar11 + 0x50) = iVar14 + 1;
            if (iVar14 == 0) {
              *(undefined4 *)((int)pvVar11 + 0x48) = *puVar10;
            }
            else {
              *(undefined4 *)(iVar8 + 8) = *puVar10;
            }
          }
          local_8._0_1_ = 2;
          local_60 = &PTR_LAB_007f3a6c;
          FUN_0068aac0();
          ppvVar21 = local_74;
          ppvVar20 = local_1c;
        }
      }
      goto joined_r0x00683c28;
    }
    local_74 = ppvVar21;
    iVar8 = FUN_00527b40();
    ppvVar22 = local_1c;
    local_20 = local_1c[1];
    local_18 = (void **)0x0;
    if (local_20 != (void **)0x0) {
      ppvVar21 = local_20;
      do {
        ppvVar20 = ppvVar21 + 2;
        iVar14 = 0;
        piVar17 = *(int **)((int)local_1c[7] + 0x451c);
        while (piVar17 != (int *)0x0) {
          piVar3 = piVar17 + 2;
          iVar12 = *piVar17;
          piVar17 = (int *)*piVar3;
          if (*(int *)(iVar12 + 0x14c) == *(int *)((int)*ppvVar21 + 4)) {
            iVar14 = iVar14 + 1;
          }
        }
        local_18 = (void **)((int)local_18 + iVar14);
        ppvVar21 = *ppvVar20;
      } while (*ppvVar20 != (void **)0x0);
    }
    iVar8 = iVar8 + (int)local_18;
    ppvVar21 = local_20;
    do {
      local_64 = (float)iVar8;
      if (ppvVar21 == (void **)0x0) goto LAB_006843be;
      local_20 = *ppvVar21;
      ppvVar21 = ppvVar21[2];
    } while (local_20[1] != *(void **)((int)local_1c[7] + 0x117de));
    if (((local_20 != (void **)0x0) &&
        (iVar14 = (**(code **)((int)local_20[0x11] + 4))(), iVar14 < 1)) &&
       (ppvVar20 = local_c4, ppvVar21 = local_c4, iVar8 < (int)ppvVar22[3])) {
      do {
        while( true ) {
          do {
            local_3c = ppvVar20;
            if (ppvVar21 == (void **)0x0) goto LAB_006843be;
            ppvVar23 = ppvVar21[2];
            pvVar11 = *ppvVar21;
            ppvVar20 = ppvVar23;
            ppvVar21 = ppvVar23;
            ppvVar22 = local_1c;
          } while (((*(char *)((int)pvVar11 + 0x17b) != '\0') ||
                   (local_3c = ppvVar23, cVar6 = (**(code **)(*(int *)((int)pvVar11 + 0x22e) + 8))()
                   , ppvVar20 = local_3c, ppvVar22 = local_1c, cVar6 == '\0')) ||
                  (iVar8 = (**(code **)(*(int *)((int)pvVar11 + 0x11c) + 4))(), ppvVar20 = local_3c,
                  ppvVar22 = local_1c, iVar8 != 0));
          if (*(int *)((int)pvVar11 + 0xc) == 0) break;
          ppvStack_148 = (void **)0x684335;
          iVar8 = FUN_004e9370();
          piVar17 = *(int **)(*(int *)(iVar8 + 0x1c2) + 4);
          do {
            if (piVar17 == (int *)0x0) goto LAB_00684387;
            piVar3 = (int *)piVar17[2];
            piVar5 = (int *)*piVar17;
            cVar6 = (**(code **)(*piVar5 + 0x28))();
            ppvVar23 = local_3c;
            piVar17 = piVar3;
          } while ((cVar6 == '\0') ||
                  (iVar8 = *(int *)(piVar5[0x92] + 0x12da), iVar14 = FUN_006a9d50(),
                  ppvVar23 = local_3c, ppvVar20 = local_3c, ppvVar21 = local_3c, ppvVar22 = local_1c
                  , *(char *)(iVar8 + (iVar14 + 1) * 0x2c) == '\0'));
        }
LAB_00684387:
        ppvVar20 = local_3c;
        ppvVar21 = ppvVar23;
        ppvVar22 = local_1c;
      } while (*(int *)((int)pvVar11 + 0xc) == 0);
      ppvStack_148 = local_20[1];
      ppvStack_148 = (void **)FUN_004e9370();
      FUN_006aaff0(pvVar11);
      ppvVar22 = local_1c;
    }
LAB_006843be:
    FUN_006a9d50();
    FUN_006a9d50();
    local_98 = (undefined1 *)((int)ppvVar22 + 0x125);
    if ((*(char *)((int)ppvVar22 + 0x125) == '\0') || (0 < (int)ppvVar22[0x3d])) {
      if (*(char *)(ppvVar22 + 0x49) == '\0') {
        local_4c = *(void ***)(local_8c + 0x88);
      }
      else {
        local_4c = *(void ***)(local_8c + 0x8c);
      }
      local_2c = local_88;
      local_18 = (void **)(_DAT_007e3374 / (float)(int)ppvVar22[3]);
      if (local_4c == (void **)0x1) {
        local_2c = local_7c;
      }
      else if (local_4c == (void **)0x3) {
        local_2c = local_38;
      }
      else if (local_4c == (void **)0x4) {
        local_14 = ppvVar22[0x40];
        if ((int)local_14 < 2) {
          local_14 = (void **)0x1;
        }
        local_2c = (void **)(float)(int)local_14;
      }
      if (0 < (int)local_64) {
        pfVar1 = ppvVar22[1];
        ppvVar21 = local_4c;
joined_r0x0068447c:
        local_80 = pfVar1;
        if (pfVar1 != (float *)0x0) {
          local_80 = (float *)pfVar1[2];
          local_44 = (void *)*pfVar1;
          ppvStack_148 = (void **)0x684499;
          local_a0 = FUN_004e9370();
          ppvStack_148 = (void **)0x6844af;
          cVar6 = FUN_004e9500();
          pfVar1 = local_80;
          if (cVar6 == '\0') {
            ppvStack_148 = (void **)0x6844c2;
            cVar6 = FUN_004e9440();
            pfVar1 = local_80;
            if ((cVar6 == '\0') && (*(char *)((int)local_44 + 0x8d) == '\0')) {
              if (ppvVar21 == (void **)0x1) {
                fVar16 = *(float *)((int)local_44 + 0x30);
LAB_00684526:
                ppvVar20 = (void **)(fVar16 / (float)local_2c);
              }
              else {
                if (ppvVar21 != (void **)0x3) {
                  if (ppvVar21 == (void **)0x2) {
                    fVar16 = *(float *)((int)local_44 + 0x34);
                  }
                  else {
                    ppvVar20 = local_18;
                    if (ppvVar21 != (void **)0x4) goto LAB_00684529;
                    fVar16 = (float)*(int *)((int)local_44 + 0x14);
                  }
                  goto LAB_00684526;
                }
                ppvVar20 = (void **)(_DAT_007e3374 -
                                    *(float *)((int)local_44 + 0x20) / (float)local_2c);
              }
LAB_00684529:
              if (*(int **)(local_8c + 0x94) != (int *)0x0) {
                piVar17 = *(int **)(local_8c + 0x94);
                do {
                  piVar3 = piVar17 + 2;
                  if (*(int *)*piVar17 == *(int *)((int)local_44 + 4)) {
                    ppvVar20 = (void **)((float)ppvVar20 * (float)((int *)*piVar17)[1]);
                  }
                  piVar17 = (int *)*piVar3;
                } while ((int *)*piVar3 != (int *)0x0);
              }
              local_3c = (void **)(float)(int)local_64;
              ppvVar23 = *(void ***)((int)local_44 + 0xc);
              local_20 = ppvVar23;
              if ((float)(int)ppvVar23 / (float)local_3c < (float)ppvVar20) {
                local_34 = __ftol();
                if (local_34 == 0) {
                  pfVar1 = local_80;
                  if ((ppvVar23 != (void **)0x0) || (ppvVar21 != (void **)0x0))
                  goto joined_r0x0068447c;
                  local_34 = 1;
                }
                if (DAT_00dc15fc * DAT_00dc15cc < local_34 + (int)ppvVar23) {
                  local_34 = DAT_00dc15fc * DAT_00dc15cc - (int)ppvVar23;
                }
                local_12c = (int *)0x0;
                local_128 = 0;
                local_124 = 0;
                local_120 = 0;
                local_130 = &PTR_LAB_007f3a6c;
                local_b0 = (float *)0x0;
                local_ac = (float *)0x0;
                local_a8 = 0;
                local_a4 = 0;
                local_b4 = &PTR_LAB_007f3a6c;
                local_8 = CONCAT31(local_8._1_3_,0x11);
                ppvStack_148 = (void **)0x68460b;
                local_ac = operator_new(0xe);
                if (local_ac == (float *)0x0) {
                  local_ac = (float *)0x0;
                }
                else {
                  *local_ac = (float)local_44;
                  local_ac[1] = 0.0;
                  local_ac[2] = 0.0;
                  *(undefined1 *)(local_ac + 3) = 0;
                }
                pfVar1 = local_ac;
                if (local_a8 != 0) {
                  _DAT_00000008 = local_ac;
                  pfVar1 = local_b0;
                }
                local_b0 = pfVar1;
                local_a8 = local_a8 + 1;
                puVar10 = *(undefined4 **)((int)local_44 + 0x5c);
                ppvVar22 = ppvStack_148;
                ppvStack_148 = local_18;
                while (local_18 = ppvStack_148, piVar17 = local_12c, puVar10 != (undefined4 *)0x0) {
                  puVar15 = (undefined4 *)puVar10[2];
                  FUN_006851d0(*puVar10,&local_130,&local_b4,local_2c,local_64,ppvVar21);
                  puVar10 = puVar15;
                  ppvVar22 = ppvStack_148;
                  ppvStack_148 = local_18;
                }
                while ((ppvStack_148 = ppvVar22, piVar17 != (int *)0x0 && (0 < local_34))) {
                  piVar3 = (int *)piVar17[2];
                  iVar8 = *piVar17;
                  ppvStack_148 = (void **)0x6846b7;
                  local_90 = piVar3;
                  local_28 = (float)iVar8;
                  local_78 = (void *)FUN_004e9370();
                  cVar6 = FUN_004e46e0();
                  ppvVar22 = ppvStack_148;
                  piVar17 = piVar3;
                  if (cVar6 == '\0') {
                    local_48 = local_18;
                    if (ppvVar21 == (void **)0x1) {
                      fVar16 = *(float *)(iVar8 + 0x30);
LAB_00684707:
                      local_48 = (void **)(fVar16 / (float)local_2c);
                    }
                    else {
                      if (ppvVar21 != (void **)0x3) {
                        if (ppvVar21 == (void **)0x2) {
                          fVar16 = *(float *)(iVar8 + 0x34);
                        }
                        else {
                          if (ppvVar21 != (void **)0x4) goto LAB_0068470d;
                          fVar16 = (float)*(int *)(iVar8 + 0x14);
                        }
                        goto LAB_00684707;
                      }
                      local_48 = (void **)(_DAT_007e3374 -
                                          *(float *)(iVar8 + 0x30) / (float)local_2c);
                    }
LAB_0068470d:
                    local_20 = *(void ***)(iVar8 + 4);
                    local_38 = (void **)0x0;
                    piVar17 = local_1c[0x29];
                    while (piVar17 != (int *)0x0) {
                      piVar3 = (int *)piVar17[2];
                      iVar14 = *piVar17;
                      cVar6 = (**(code **)(*(int *)(iVar14 + 0x22e) + 8))();
                      piVar17 = piVar3;
                      if (((cVar6 != '\0') && (*(char *)(iVar14 + 0x17b) == '\0')) &&
                         ((void **)*(int *)(iVar14 + 0xc) == local_20)) {
                        iVar14 = (**(code **)(*(int *)(iVar14 + 0x22) + 4))();
                        local_38 = (void **)((int)local_38 + iVar14);
                      }
                    }
                    local_14 = *(void ***)(iVar8 + 0x10);
                    if ((int)local_38 <= (int)local_14) {
                      local_14 = local_38;
                    }
                    fVar16 = (float)__ftol();
                    local_104 = (double)(int)local_64;
                    local_68 = fVar16;
                    local_20 = (void **)(**(code **)((int)*local_1c + 4))();
                    if ((double)(int)local_20 * _DAT_007f3aa8 + _DAT_007e6830 < local_104) {
                      fVar16 = (float)__ftol();
                      local_68 = fVar16;
                    }
                    iVar8 = *(int *)(iVar8 + 0xc);
                    iVar14 = DAT_00dc15fc * DAT_00dc15cc;
                    if ((iVar14 < iVar8) && ((int)fVar16 < iVar8 - iVar14)) {
                      fVar16 = (float)(iVar8 - iVar14);
                      local_68 = fVar16;
                    }
                    local_60 = &PTR_LAB_007e4b94;
                    local_5c = (void **)0x0;
                    local_58 = (void **)0x0;
                    local_54 = (void **)0x0;
                    local_50 = 0;
                    local_8._0_1_ = 0x12;
                    if (0 < (int)fVar16) {
                      do {
                        if (local_34 <= (int)local_54) break;
                        local_14 = (void **)0x0;
                        local_40 = (void **)0xbf800000;
                        ppvVar22 = *(void ***)((int)local_28 + 0x48);
                        if (*(void ***)((int)local_28 + 0x48) == (void **)0x0) break;
                        do {
                          ppvVar21 = ppvVar22[2];
                          pvVar11 = *ppvVar22;
                          local_38 = ppvVar21;
                          cVar6 = (**(code **)(*(int *)((int)pvVar11 + 0x22e) + 8))();
                          if (((cVar6 != '\0') &&
                              (iVar8 = (**(code **)(*(int *)((int)pvVar11 + 0x11c) + 4))(),
                              iVar8 == 0)) &&
                             ((*(char *)((int)pvVar11 + 0x17b) == '\0' &&
                              ((*(int *)((int)pvVar11 + 0x176) == 0 &&
                               (*(int *)((int)pvVar11 + 0xc) == *(int *)((int)local_28 + 4))))))) {
                            puVar10 = *(undefined4 **)((int)pvVar11 + 0x26);
joined_r0x006848af:
                            if (puVar10 != (undefined4 *)0x0) {
                              puVar15 = (undefined4 *)puVar10[2];
                              ppvVar22 = (void **)*puVar10;
                              for (ppvVar20 = local_5c; puVar10 = puVar15, ppvVar20 != (void **)0x0;
                                  ppvVar20 = ppvVar20[2]) {
                                ppvStack_148 = *ppvVar20;
                                cVar6 = (*(code *)local_60[3])();
                                if (cVar6 != '\0') {
                                  ppvVar21 = local_38;
                                  if (ppvVar20 != (void **)0x0) goto joined_r0x006848af;
                                  break;
                                }
                              }
                              local_20 = (void **)((float)ppvVar22[0x3d] * _DAT_007e4088);
                              fVar27 = (float10)FUN_004fd510();
                              iVar8 = local_a0;
                              local_24 = (void **)(float)((float10)(float)local_20 / fVar27);
                              cVar6 = FUN_004e4810();
                              if ((cVar6 == '\0') || (ppvVar22[0x4d] != (void *)0x8)) {
                                cVar6 = FUN_004e4820();
                                if ((cVar6 == '\0') || (ppvVar22[0x4d] != (void *)0x8)) {
                                  cVar6 = FUN_004e4820();
                                  if ((((cVar6 == '\0') && (cVar6 = FUN_004e47e0(), cVar6 == '\0'))
                                      && (cVar6 = FUN_004e4800(), cVar6 == '\0')) ||
                                     (((pvVar11 = ppvVar22[0x4d], pvVar11 != (void *)0x5 &&
                                       (pvVar11 != (void *)0x4)) && (pvVar11 != (void *)0x3)))) {
                                    if ((*(int *)(iVar8 + 0x254) == 0) &&
                                       (((pvVar11 = ppvVar22[0x4d], pvVar11 == (void *)0x5 ||
                                         (pvVar11 == (void *)0x4)) || (pvVar11 == (void *)0x3)))) {
                                      local_24 = (void **)((float)local_24 + _DAT_007e681c);
                                    }
                                  }
                                  else {
                                    local_24 = (void **)((float)local_24 - _DAT_007f3a9c);
                                  }
                                }
                                else {
                                  local_24 = (void **)((float)local_24 + _DAT_007e681c);
                                }
                              }
                              else {
                                local_24 = (void **)((float)local_24 + _DAT_007e685c);
                              }
                              pvVar11 = local_78;
                              cVar6 = FUN_004e4810();
                              if ((cVar6 == '\0') || (ppvVar22[0x4d] != (void *)0x8)) {
                                cVar6 = FUN_004e4820();
                                if ((cVar6 == '\0') || (ppvVar22[0x4d] != (void *)0x8)) {
                                  cVar6 = FUN_004e4820();
                                  if ((((cVar6 == '\0') && (cVar6 = FUN_004e47e0(), cVar6 == '\0'))
                                      && (cVar6 = FUN_004e4800(), cVar6 == '\0')) ||
                                     (((pvVar4 = ppvVar22[0x4d], pvVar4 != (void *)0x5 &&
                                       (pvVar4 != (void *)0x4)) && (pvVar4 != (void *)0x3)))) {
                                    ppvVar20 = local_24;
                                    if ((*(int *)((int)pvVar11 + 0x254) == 0) &&
                                       (((pvVar11 = ppvVar22[0x4d], pvVar11 == (void *)0x5 ||
                                         (pvVar11 == (void *)0x4)) || (pvVar11 == (void *)0x3)))) {
                                      ppvVar20 = (void **)((float)local_24 - _DAT_007e681c);
                                    }
                                  }
                                  else {
                                    ppvVar20 = (void **)((float)local_24 + _DAT_007f3a9c);
                                  }
                                }
                                else {
                                  ppvVar20 = (void **)((float)local_24 - _DAT_007e681c);
                                }
                              }
                              else {
                                ppvVar20 = (void **)((float)local_24 - _DAT_007e685c);
                              }
                              ppvVar21 = local_38;
                              if ((float)local_40 < (float)ppvVar20) {
                                local_40 = ppvVar20;
                                local_14 = ppvVar22;
                              }
                              goto joined_r0x006848af;
                            }
                          }
                          ppvVar23 = local_14;
                          ppvVar20 = local_58;
                          ppvVar22 = ppvVar21;
                        } while (ppvVar21 != (void **)0x0);
                        if (local_14 == (void **)0x0) break;
                        local_68 = (float)((int)local_68 + -1);
                        ppvStack_148 = (void **)0x684aa5;
                        local_58 = operator_new(0xe);
                        if (local_58 == (void **)0x0) {
                          local_58 = (void **)0x0;
                        }
                        else {
                          *local_58 = ppvVar23;
                          local_58[1] = ppvVar20;
                          local_58[2] = (void *)0x0;
                          *(undefined1 *)(local_58 + 3) = 0;
                        }
                        ppvVar21 = (void **)((int)local_54 + 1);
                        ppvVar22 = local_58;
                        if (local_54 != (void **)0x0) {
                          ppvVar20[2] = local_58;
                          ppvVar22 = local_5c;
                        }
                        local_5c = ppvVar22;
                        local_54 = ppvVar21;
                      } while (0 < (int)local_68);
                      if (0 < (int)local_54) {
                        iVar8 = 0;
                        local_20 = *(void ***)((int)local_28 + 4);
                        piVar17 = local_1c[0x29];
                        local_14 = local_54;
                        while (piVar17 != (int *)0x0) {
                          piVar3 = (int *)piVar17[2];
                          iVar14 = *piVar17;
                          cVar6 = (**(code **)(*(int *)(iVar14 + 0x22e) + 8))();
                          piVar17 = piVar3;
                          if (((cVar6 != '\0') && (*(char *)(iVar14 + 0x17b) == '\0')) &&
                             (*(void ***)(iVar14 + 0xc) == local_20)) {
                            iVar14 = (**(code **)(*(int *)(iVar14 + 0x22) + 4))();
                            iVar8 = iVar8 + iVar14;
                          }
                        }
                        if (iVar8 <= (int)local_14) {
                          ppvStack_148 = *local_58;
                          ppuVar2 = local_60 + 7;
                          (*(code *)local_60[10])(&stack0xfffffebc);
                          (*(code *)*ppuVar2)();
                        }
                      }
                    }
                    local_f0 = &PTR_FUN_007e4c84;
                    local_ec = (void **)0x0;
                    local_e8 = (void **)0x0;
                    local_e4 = 0;
                    local_e0 = 0;
                    local_8 = CONCAT31(local_8._1_3_,0x13);
                    local_24 = *(void ***)((int)local_28 + 0x48);
joined_r0x00684b9a:
                    if (local_24 != (void **)0x0) {
                      local_20 = *local_24;
                      local_14 = (void **)((int)local_20 + 0x26);
                      pvVar11 = *local_14;
                      local_24 = local_24[2];
                      ppvVar22 = local_e8;
                      while (local_e8 = ppvVar22, pvVar11 != (void *)0x0) {
                        pvVar11 = *(void **)((int)pvVar11 + 8);
                        ppvVar21 = local_5c;
                        while( true ) {
                          if (ppvVar21 == (void **)0x0) goto joined_r0x00684b9a;
                          ppvStack_148 = *ppvVar21;
                          cVar6 = (*(code *)local_60[3])();
                          if (cVar6 != '\0') break;
                          ppvVar21 = ppvVar21[2];
                        }
                        ppvVar22 = local_e8;
                        if (ppvVar21 == (void **)0x0) goto joined_r0x00684b9a;
                      }
                      ppvStack_148 = (void **)0x684bff;
                      local_e8 = operator_new(0xe);
                      if (local_e8 == (void **)0x0) {
                        local_e8 = (void **)0x0;
                      }
                      else {
                        *local_e8 = local_20;
                        local_e8[1] = ppvVar22;
                        local_e8[2] = (void *)0x0;
                        *(undefined1 *)(local_e8 + 3) = 0;
                      }
                      ppvVar21 = local_e8;
                      if (local_e4 != 0) {
                        ppvVar22[2] = local_e8;
                        ppvVar21 = local_ec;
                      }
                      local_ec = ppvVar21;
                      local_e4 = local_e4 + 1;
                      piVar17 = *local_14;
                      while (piVar17 != (int *)0x0) {
                        piVar3 = (int *)piVar17[2];
                        ppvStack_148 = (void **)*piVar17;
                        ppuVar2 = local_60 + 7;
                        (*(code *)local_60[10])(&stack0xfffffebc);
                        (*(code *)*ppuVar2)();
                        piVar17 = piVar3;
                      }
                      goto joined_r0x00684b9a;
                    }
                    ppvVar21 = (void **)0;
                    ppvVar22 = local_ec;
                    if (local_54 != (void **)0x0) {
                      local_24 = (void **)0x0;
                      do {
                        ppvVar22 = *(void ***)((int)*local_5c + 0x6c);
                        local_20 = ppvVar22;
                        FUN_00522770();
                        ppvStack_148 = *(void ***)((int)local_28 + 4);
                        FUN_00689890(local_10c);
                        ppvStack_148 = (void **)0x684cb8;
                        iVar8 = FUN_00428ee0();
                        ppvVar21 = local_e8;
                        ppvVar20 = local_5c;
                        if (iVar8 == 0) {
                          local_70 = (void **)0x0;
                        }
                        else {
                          local_70 = (void **)(iVar8 + -0x14);
                        }
                        while (local_e8 = ppvVar21, ppvVar20 != (void **)0x0) {
                          ppvVar23 = ppvVar20[2];
                          ppvStack_148 = *ppvVar20;
                          ppvVar20 = ppvVar23;
                          if (ppvStack_148[0x1b] == ppvVar22) {
                            ppuVar2 = local_60 + 7;
                            (*(code *)local_60[10])(&stack0xfffffebc);
                            (*(code *)*ppuVar2)();
                            ppvStack_148 = local_70;
                            FUN_0045e6c0();
                            ppvVar22 = local_20;
                            ppvVar21 = local_e8;
                          }
                        }
                        ppvStack_148 = (void **)0x684d17;
                        local_e8 = operator_new(0xe);
                        ppvVar22 = local_c0;
                        if (local_e8 == (void **)0x0) {
                          local_e8 = (void **)0x0;
                        }
                        else {
                          *local_e8 = local_70;
                          local_e8[1] = ppvVar21;
                          local_e8[2] = (void *)0x0;
                          *(undefined1 *)(local_e8 + 3) = 0;
                        }
                        ppvVar20 = local_e8;
                        if (local_e4 != 0) {
                          ppvVar21[2] = local_e8;
                          ppvVar20 = local_ec;
                        }
                        local_ec = ppvVar20;
                        ppvStack_148 = (void **)0x684d64;
                        local_e4 = local_e4 + 1;
                        local_c0 = operator_new(0xe);
                        if (local_c0 == (void **)0x0) {
                          local_c0 = (void **)0x0;
                        }
                        else {
                          *local_c0 = local_70;
                          local_c0[1] = ppvVar22;
                          local_c0[2] = (void *)0x0;
                          *(undefined1 *)(local_c0 + 3) = 0;
                        }
                        iVar8 = local_bc + 1;
                        ppvVar21 = local_c0;
                        if (local_bc != 0) {
                          ppvVar22[2] = local_c0;
                          ppvVar21 = local_c4;
                        }
                        local_c4 = ppvVar21;
                        local_bc = iVar8;
                        ppvVar21 = (void **)0;
                        ppvVar22 = local_ec;
                      } while (local_54 != (void **)0x0);
                    }
                    while (local_54 = ppvVar21, ppvVar22 != (void **)0x0) {
                      local_24 = ppvVar22[2];
                      ppvVar22 = *ppvVar22;
                      FUN_006a9d50();
                      piVar17 = (int *)((int)ppvVar22 + 0x22);
                      iVar8 = *(int *)((int)local_28 + 0xc);
                      iVar14 = (**(code **)(*(int *)((int)ppvVar22 + 0x22) + 4))();
                      local_7c = (void **)0x0;
                      *(int *)((int)local_28 + 0xc) = iVar8 - iVar14;
                      local_94 = *(int **)((int)local_28 + 0x18);
                      local_20 = *(void ***)((int)local_28 + 4);
                      puVar10 = *(undefined4 **)
                                 ((-(uint)(ppvVar22 != (void **)0x0) & (uint)piVar17) + 4);
                      fVar16 = local_28;
                      while (local_28 = fVar16, puVar10 != (undefined4 *)0x0) {
                        puVar15 = (undefined4 *)puVar10[2];
                        ppvStack_148 = local_20;
                        fVar27 = (float10)(**(code **)(*(int *)*puVar10 + 0x2c))(0,1);
                        local_7c = (void **)(float)(fVar27 + (float10)(float)local_7c);
                        puVar10 = puVar15;
                        fVar16 = local_28;
                      }
                      *(float *)((int)fVar16 + 0x18) = (float)local_94 - (float)local_7c;
                      ppvStack_148 = (void **)0x684e48;
                      (**(code **)(*(int *)((int)fVar16 + 0x44) + 0x18))();
                      iVar8 = *(int *)((int)fVar16 + 0x10);
                      ppvStack_148 = (void **)0x684e52;
                      iVar14 = (**(code **)(*piVar17 + 4))();
                      *(int *)((int)local_28 + 0x10) = iVar8 - iVar14;
                      ppvStack_148 = (void **)0x684e61;
                      iVar8 = (**(code **)(*piVar17 + 4))();
                      pvVar11 = local_44;
                      local_34 = local_34 - iVar8;
                      local_20 = *(void ***)((int)local_44 + 0xc);
                      ppvStack_148 = (void **)0x684e79;
                      iVar8 = (**(code **)(*piVar17 + 4))();
                      *(int *)((int)pvVar11 + 0xc) = iVar8 + (int)local_20;
                      local_9c = *(float *)((int)pvVar11 + 0x18);
                      ppvVar21 = *(void ***)((int)pvVar11 + 4);
                      local_84 = 0.0;
                      ppvStack_148 = (void **)0x684ea8;
                      FUN_00499720();
                      cVar6 = FUN_00499750();
                      while (cVar6 != '\0') {
                        ppvStack_148 = &local_6c;
                        FUN_00499730();
                        piVar17 = (int *)FUN_00499740();
                        ppvStack_148 = ppvVar21;
                        fVar27 = (float10)(**(code **)(*piVar17 + 0x2c))(0,1);
                        local_84 = (float)(fVar27 + (float10)local_84);
                        cVar6 = FUN_00499750();
                      }
                      ppvStack_148 = (void **)0x684f06;
                      FUN_0068a9c0();
                      FUN_0068a9b0();
                      ppvStack_148 = ppvVar22;
                      cVar6 = FUN_006ac380();
                      if (cVar6 == '\0') {
                        ppvStack_148 = (void **)0x684f6f;
                        ppvStack_148 = (void **)FUN_0068a9b0();
                        ppvStack_148 = (void **)FUN_004e9370();
                        FUN_006aaff0(ppvVar22);
                        ppvStack_148 = (void **)0x684f89;
                        FUN_0068a9d0();
                        ppvStack_148 = (void **)0x684f90;
                        FUN_00459df0();
                        ppvVar21 = local_54;
                        ppvVar22 = local_24;
                      }
                      else {
                        local_20 = local_1c + 0x32;
                        pvVar11 = *local_20;
                        uVar9 = FUN_00447250();
                        local_104 = (double)CONCAT44(&ppvStack_148,(undefined4)local_104);
                        FUN_00449290(uVar9);
                        (**(code **)((int)pvVar11 + 0x18))();
                        FUN_0068a9b0();
                        ppvStack_148 = ppvVar22;
                        FUN_00522770();
                        FUN_0045fed0();
                        ppvVar21 = local_54;
                        ppvVar22 = local_24;
                      }
                    }
                    local_8._1_3_ = (uint3)((uint)local_8 >> 8);
                    local_8._0_1_ = 0x12;
                    local_24 = ppvVar22;
                    FUN_00527230();
                    local_8 = CONCAT31(local_8._1_3_,0x11);
                    FUN_004587d0();
                    ppvVar21 = local_4c;
                    ppvVar22 = ppvStack_148;
                    piVar17 = local_90;
                  }
                }
                local_8._1_3_ = (uint3)((uint)local_8 >> 8);
                local_8._0_1_ = 0x10;
                FUN_0068a890();
                local_8._0_1_ = 2;
                FUN_0068a890();
                pfVar1 = local_80;
                ppvVar22 = local_1c;
              }
            }
          }
          goto joined_r0x0068447c;
        }
      }
    }
    iVar8 = FUN_00457e30();
    if (0 < iVar8) {
      ppvStack_148 = (void **)0x68501b;
      FUN_004986f0();
      ppvStack_148 = (void **)0x685024;
      FUN_0068a880();
      local_38 = (void **)0x0;
      cVar6 = FUN_00498730();
      while (cVar6 != '\0') {
        ppvStack_148 = &local_6c;
        FUN_00498700();
        FUN_00498710();
        cVar6 = FUN_00516340();
        if (cVar6 != '\0') {
          local_20 = ppvVar22[0x32];
          uVar9 = FUN_00447250();
          local_104 = (double)CONCAT44(&ppvStack_148,(undefined4)local_104);
          FUN_00449290(uVar9);
          cVar6 = (*local_20[9])();
          if (cVar6 == '\0') {
            local_38 = (void **)((int)local_38 + 1);
          }
        }
        cVar6 = FUN_00498730();
      }
      iVar8 = (**(code **)((int)ppvVar22[0x43] + 4))();
      if (3 < iVar8) {
        iVar8 = (**(code **)((int)*ppvVar22 + 4))();
        iVar14 = FUN_00527b40();
        if (((iVar8 + 5 < iVar14) && (1 < (int)local_38)) &&
           ((iVar8 = (**(code **)((int)*ppvVar22 + 4))(), 0 < iVar8 && ((int)ppvVar22[0x3d] < 7))))
        {
          iVar8 = 0;
          local_14 = (void **)0x0;
          ppvStack_148 = (void **)0x685109;
          FUN_0068a8d0();
          cVar6 = FUN_0068a9a0();
          ppvVar21 = local_14;
          while (cVar6 != '\0') {
            ppvStack_148 = &local_6c;
            FUN_0068a980();
            FUN_0068a990();
            FUN_0068a9b0();
            ppvStack_148 = (void **)0x685139;
            iVar14 = FUN_00689730();
            if (iVar14 == 0) {
              iVar8 = iVar8 + 1;
            }
            cVar6 = FUN_0068a9a0();
            ppvVar21 = (void **)iVar8;
          }
          local_14 = (void **)(float)(int)ppvVar21;
          local_20 = (void **)(**(code **)((int)*ppvVar22 + 4))();
          if ((float)*(int *)(local_8c + 0x84) * _DAT_007f3aa0 <
              (float)local_14 / (float)(int)local_20) {
            *local_11c = 1;
          }
        }
      }
    }
    *local_98 = 1;
    *local_114 = 0;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00417370();
    local_8 = 0xffffffff;
    FUN_00527230();
  }
  ExceptionList = local_10;
  return;
}


