// FUN_00695a00 @ 695a00 size=5358

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00695a00(int *param_1)

{
  undefined **ppuVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  float fVar10;
  int *piVar11;
  float *pfVar12;
  char *pcVar13;
  bool bVar14;
  float10 fVar15;
  undefined1 auStack_104 [4];
  undefined4 uStack_100;
  char *pcStack_fc;
  float *pfStack_f8;
  float *pfStack_f4;
  float local_e0;
  undefined **local_dc;
  float *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  int local_c4;
  int *local_c0;
  float *local_bc;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 *local_a8;
  float local_a4;
  float *local_a0;
  undefined1 *local_9c;
  float local_98;
  undefined **local_94;
  float *local_90;
  float *local_8c;
  int local_88;
  undefined1 local_84;
  int local_80;
  float *local_7c;
  float local_78;
  float *local_74;
  undefined **local_70;
  float *local_6c;
  float *local_68;
  int local_64;
  undefined1 local_60;
  undefined **local_5c;
  float *local_58;
  float *local_54;
  int local_50;
  undefined1 local_4c;
  float *local_48;
  float *local_44;
  float local_40;
  char local_39;
  float local_38;
  float *local_34;
  float local_30;
  char local_2a;
  char local_29;
  float local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  char local_15;
  float *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d5577;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_c0 = param_1;
  FUN_006a9d50();
  FUN_006a9d50();
  pfStack_f4 = (float *)0x695a3c;
  local_a8 = operator_new(0x12);
  if (local_a8 == (undefined4 *)0x0) {
    local_a8 = (undefined4 *)0x0;
  }
  else {
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    *(undefined1 *)(local_a8 + 4) = 0;
    *local_a8 = &PTR_FUN_007e6eac;
  }
  pfVar9 = *(float **)(*(int *)((int)param_1 + 10) + 0xe880);
  if (pfVar9 == (float *)0x0) {
LAB_00696ed3:
    if (local_a8 != (undefined4 *)0x0) {
      pfStack_f4 = (float *)0x696edd;
      (**(code **)*local_a8)();
    }
    ExceptionList = local_10;
    return;
  }
  local_84 = 0;
  local_94 = &PTR_LAB_007e4b94;
  local_bc = pfVar9;
LAB_00695a82:
  pfVar9 = (float *)*local_bc;
  pfStack_f4 = (float *)0x695a9b;
  local_bc = (float *)local_bc[2];
  local_24 = pfVar9;
  local_80 = FUN_004ccb2c();
  local_40 = 0.0;
  local_28 = 0.0;
  local_29 = '\0';
  local_58 = (float *)0x0;
  local_54 = (float *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_5c = &PTR_LAB_007f3f6c;
  local_6c = (float *)0x0;
  local_68 = (float *)0x0;
  local_64 = 0;
  local_60 = 0;
  local_70 = &PTR_LAB_007e4b94;
  local_90 = (float *)0x0;
  local_8c = (float *)0x0;
  local_88 = 0;
  local_34 = (float *)pfVar9[1];
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_39 = '\0';
  while (local_34 != (float *)0x0) {
    local_2a = '\0';
    local_30 = *local_34;
    iVar7 = *(int *)((int)local_30 + 0x2c);
    local_34 = (float *)local_34[2];
    do {
      if (iVar7 == 0) goto LAB_00695b35;
      iVar7 = *(int *)(iVar7 + 8);
      iVar6 = FUN_004ece80();
    } while (iVar6 == 0);
    local_2a = '\x01';
LAB_00695b35:
    local_15 = '\0';
    piVar8 = *(int **)(*(int *)((int)param_1 + 10) + 0x4508);
    if (piVar8 == (int *)0x0) {
LAB_00695b95:
      local_2a = '\0';
    }
    else {
      do {
        if (local_15 != '\0') goto LAB_00695b99;
        piVar11 = (int *)piVar8[2];
        piVar8 = (int *)*piVar8;
        cVar5 = (**(code **)(*piVar8 + 0x30))();
        if (cVar5 != '\0') {
          piVar8 = *(int **)((int)piVar8 + 0x26);
          do {
            if (piVar8 == (int *)0x0) goto LAB_00695b8a;
            iVar7 = *piVar8;
            piVar8 = (int *)piVar8[2];
          } while (*(float *)(iVar7 + 0x2ec) <= _DAT_007e3380);
          local_15 = '\x01';
        }
LAB_00695b8a:
        piVar8 = piVar11;
      } while (piVar11 != (int *)0x0);
      if (local_15 == '\0') goto LAB_00695b95;
    }
LAB_00695b99:
    cVar5 = FUN_004ca33c();
    if (cVar5 != '\0') {
      local_39 = '\x01';
    }
    pfVar9 = *(float **)(*(int *)((int)param_1 + 10) + 0x451c);
    pfVar12 = local_90;
    pfVar3 = local_6c;
joined_r0x00695bb6:
    local_6c = pfVar3;
    local_90 = pfVar12;
    if (pfVar9 != (float *)0x0) {
      pfVar2 = (float *)*pfVar9;
      local_1c = (float *)pfVar9[2];
      pfVar9 = local_1c;
      pfVar12 = local_90;
      pfVar3 = local_6c;
      if (((*(char *)((int)pfVar2 + 0x162) == '\0') && (*(char *)((int)pfVar2 + 0x15f) != '\0')) &&
         (*(char *)(pfVar2 + 0x55) == '\0')) {
        if ((int)pfVar2[0x53] < 1) {
          if ((int)*(char *)(pfVar2 + 0x18) +
              ((int)*(char *)((int)pfVar2 + 0x61) +
              ((int)*(char *)((int)pfVar2 + 0x62) + *(short *)(pfVar2 + 0x19) * 0xc) * 0x1e) * 0x18
              <= (int)*(char *)(DAT_00893530 + 0x14) +
                 ((int)*(char *)(DAT_00893530 + 0x15) +
                 ((int)*(char *)(DAT_00893530 + 0x16) + *(short *)(DAT_00893530 + 0x18) * 0xc) *
                 0x1e) * 0x18) {
            pfStack_f4 = (float *)0x695ce7;
            iVar7 = FUN_004e9370();
            if (pfVar2[0x52] != 0.0) {
              if (*(float *)(iVar7 + 0x482) != local_30) {
                pfStack_f4 = &local_e0;
                pfStack_f8 = (float *)0x695d62;
                piVar8 = (int *)FUN_004c7fad();
                pfVar9 = local_1c;
                pfVar12 = local_90;
                pfVar3 = local_6c;
                if (*piVar8 == 0) goto joined_r0x00695bb6;
              }
              pfVar4 = local_68;
              pfStack_f4 = (float *)0x695d76;
              local_14 = operator_new(0xe);
              local_8._0_1_ = 5;
              if (local_14 == (float *)0x0) {
                local_68 = (float *)0x0;
              }
              else {
                pfStack_f4 = pfVar4;
                pcStack_fc = (char *)0x695d8f;
                pfStack_f8 = pfVar2;
                local_68 = (float *)FUN_0045baf0();
              }
              local_8._0_1_ = 2;
              iVar7 = local_64 + 1;
              bVar14 = local_64 != 0;
              pfVar9 = local_1c;
              pfVar12 = local_90;
              pfVar3 = local_68;
              local_64 = iVar7;
              if (bVar14) {
                pfVar4[2] = (float)local_68;
                pfVar3 = local_6c;
              }
              goto joined_r0x00695bb6;
            }
            fVar10 = (float)FUN_0044e1d0();
            pfVar4 = local_68;
            pfVar9 = local_1c;
            pfVar12 = local_90;
            pfVar3 = local_6c;
            if (local_30 == fVar10) {
              pfStack_f4 = (float *)0x695d0f;
              local_14 = operator_new(0xe);
              local_8._0_1_ = 4;
              if (local_14 == (float *)0x0) {
                local_68 = (float *)0x0;
              }
              else {
                pfStack_f4 = pfVar4;
                pcStack_fc = (char *)0x695d28;
                pfStack_f8 = pfVar2;
                local_68 = (float *)FUN_0045baf0();
              }
              local_8._0_1_ = 2;
              iVar7 = local_64 + 1;
              bVar14 = local_64 != 0;
              pfVar9 = local_1c;
              pfVar12 = local_90;
              pfVar3 = local_68;
              local_64 = iVar7;
              if (bVar14) {
                pfVar4[2] = (float)local_68;
                pfVar3 = local_6c;
              }
            }
          }
        }
        else {
          pfStack_f4 = (float *)0x695c02;
          iVar7 = FUN_004e9370();
          pfVar9 = local_1c;
          pfVar12 = local_90;
          pfVar3 = local_6c;
          if (*(float *)(iVar7 + 0x482) == local_30) {
            pfStack_f4 = (float *)0x695c1f;
            cVar5 = FUN_004ed260();
            pfVar4 = local_8c;
            pfVar9 = local_1c;
            pfVar12 = local_90;
            pfVar3 = local_6c;
            if (cVar5 == '\0') {
              pfStack_f4 = (float *)0x695c34;
              local_14 = operator_new(0xe);
              local_8._0_1_ = 3;
              if (local_14 == (float *)0x0) {
                local_8c = (float *)0x0;
              }
              else {
                pfStack_f4 = pfVar4;
                pcStack_fc = (char *)0x695c4f;
                pfStack_f8 = pfVar2;
                local_8c = (float *)FUN_0045baf0();
              }
              local_8._0_1_ = 2;
              iVar7 = local_88 + 1;
              bVar14 = local_88 != 0;
              pfVar9 = local_1c;
              pfVar12 = local_8c;
              local_88 = iVar7;
              pfVar3 = local_6c;
              if (bVar14) {
                pfVar4[2] = (float)local_8c;
                pfVar12 = local_90;
              }
            }
          }
        }
      }
      goto joined_r0x00695bb6;
    }
    FUN_006a9d50();
    pfVar9 = (float *)param_1[0x83];
joined_r0x00695dc9:
    if (pfVar9 != (float *)0x0) {
      local_1c = (float *)pfVar9[2];
      pfVar12 = (float *)*pfVar9;
      local_14 = pfVar12;
      FUN_00522770();
      pfVar9 = local_1c;
      if ((pfVar12[3] != 0.0) &&
         (iVar7 = FUN_0051b230(), pfVar9 = local_1c, *(float *)(iVar7 + 0x482) == local_30)) {
        local_15 = '\x01';
        cVar5 = (**(code **)(*(int *)((int)pfVar12 + 0x22e) + 8))();
        if (cVar5 == '\0') {
          local_15 = '\0';
        }
        iVar7 = (**(code **)((int)pfVar12[0x47] + 4))();
        if (iVar7 != 0) {
          local_15 = '\0';
        }
        if (*(int *)((int)pfVar12 + 0x176) != 0) {
          local_15 = '\0';
        }
        if (*(char *)((int)pfVar12 + 0x17b) != '\0') {
          local_15 = '\0';
        }
        if (local_2a != '\0') {
          if (local_15 != '\0') {
            pfVar9 = *(float **)((int)pfVar12 + 0x26);
            while ((pfVar9 != (float *)0x0 &&
                   (iVar7 = (**(code **)(*(int *)((int)pfVar12 + 0x22) + 4))(), 1 < iVar7))) {
              local_20 = (float *)pfVar9[2];
              local_7c = (float *)*pfVar9;
              pfVar9 = local_20;
              if (local_7c[0x4d] == 8.40779e-45) {
                pfStack_f4 = (float *)0x695eba;
                FUN_00428eb0();
                local_9c = (undefined1 *)&pfStack_f8;
                pcStack_fc = (char *)&DAT_0088f28c;
                uStack_100 = 0x695ed7;
                FUN_00446d10();
                pcStack_fc = (char *)0x695edf;
                pcStack_fc = (char *)FUN_00516300();
                local_9c = auStack_104;
                FUN_00449290(local_b0);
                FUN_00667670();
                FUN_00461e60();
                pfStack_f4 = (float *)0x695f11;
                iVar7 = FUN_00428ee0();
                if (iVar7 == 0) {
                  pfVar9 = (float *)0x0;
                }
                else {
                  pfVar9 = (float *)(iVar7 + -0x14);
                }
                iVar7 = *param_1;
                (**(code **)((int)*pfVar9 + 0x10))();
                pfStack_f4 = (float *)0x695f31;
                (**(code **)(iVar7 + 0x1a8))();
                pfStack_f8 = (float *)0x695f3e;
                pfStack_f4 = pfVar9;
                FUN_0045e6c0();
                pfStack_f4 = (float *)0x695f49;
                pfStack_f4 = (float *)FUN_006955f0();
                pcStack_fc = (char *)0x695f54;
                pfStack_f8 = pfVar9;
                FUN_006aaff0();
                pfVar12 = local_14;
                pfVar9 = local_20;
              }
            }
          }
          cVar5 = FUN_0051a430();
          if (cVar5 != '\0') {
            pfStack_f4 = (float *)0x695f76;
            FUN_0051b230();
            pfStack_f4 = (float *)0x695f7d;
            cVar5 = FUN_004ed260();
            pfVar9 = local_1c;
            if ((cVar5 != '\0') && (*(char *)((int)pfVar12 + 0x17b) == '\0')) {
              pfStack_f4 = (float *)0x695f9e;
              pfStack_f4 = (float *)FUN_006955f0();
              pcStack_fc = (char *)0x695fa9;
              pfStack_f8 = pfVar12;
              FUN_006aaff0();
              pfVar9 = local_1c;
            }
            goto joined_r0x00695dc9;
          }
        }
        iVar7 = FUN_006a9d50();
        if (((local_80 == iVar7) && (cVar5 = FUN_00525660(), cVar5 == '\0')) &&
           (cVar5 = FUN_00525720(), cVar5 == '\0')) {
          iVar7 = FUN_0051b230();
          piVar8 = *(int **)(iVar7 + 0x4a8);
          if (piVar8 == (int *)0x0) goto LAB_0069600b;
          local_14 = (float *)((int)piVar8 + 0x12);
          piVar11 = (int *)(**(code **)(*(int *)((int)piVar8 + 0x12) + 0xe0))();
          if (((piVar11 != param_1) || ((char)piVar8[8] == '\0')) ||
             (iVar7 = (**(code **)(*piVar8 + 4))(), pfVar9 = local_14, iVar7 < 1))
          goto LAB_0069600b;
        }
        else {
LAB_0069600b:
          cVar5 = FUN_00525720();
          pfVar9 = local_1c;
          if ((cVar5 != '\0') ||
             (cVar5 = (**(code **)(*(int *)((int)pfVar12 + 0x22e) + 8))(), pfVar9 = local_1c,
             cVar5 == '\0')) goto joined_r0x00695dc9;
          pfVar9 = *(float **)((int)param_1 + 0x7a);
        }
        pfStack_f4 = (float *)0x69603a;
        (**(code **)((int)*pfVar9 + 0x1a8))();
        pfVar9 = local_1c;
      }
      goto joined_r0x00695dc9;
    }
    pfVar9 = (float *)param_1[0x9e];
joined_r0x0069604d:
    if (pfVar9 != (float *)0x0) {
      pfVar12 = (float *)pfVar9[2];
      piVar8 = (int *)*pfVar9;
      local_1c = pfVar12;
      FUN_0068a080();
      pfStack_f4 = (float *)0x69606d;
      cVar5 = FUN_004ccb10();
      pfVar9 = pfVar12;
      if ((cVar5 != '\0') && (iVar7 = (**(code **)(*piVar8 + 4))(), pfVar12 = local_58, 0 < iVar7))
      {
        for (; pfVar12 != (float *)0x0; pfVar12 = (float *)pfVar12[2]) {
          pfStack_f4 = (float *)*pfVar12;
          pfStack_f8 = (float *)0x696098;
          cVar5 = (*(code *)local_5c[3])();
          if (cVar5 != '\0') {
            pfVar9 = local_1c;
            if (pfVar12 != (float *)0x0) goto joined_r0x0069604d;
            break;
          }
        }
        pfVar9 = local_54;
        pfStack_f4 = (float *)0x6960b3;
        local_54 = operator_new(0xe);
        if (local_54 == (float *)0x0) {
          local_54 = (float *)0x0;
        }
        else {
          *local_54 = (float)piVar8;
          local_54[1] = (float)pfVar9;
          local_54[2] = 0.0;
          *(undefined1 *)(local_54 + 3) = 0;
        }
        pfVar12 = local_54;
        if (local_50 != 0) {
          pfVar9[2] = (float)local_54;
          pfVar12 = local_58;
        }
        local_58 = pfVar12;
        if ((char)piVar8[0x49] != '\0') {
          local_29 = '\x01';
        }
        local_50 = local_50 + 1;
        (**(code **)(*(int *)((int)piVar8 + 0x12) + 0x1a4))();
        local_14 = (float *)FUN_00527b40();
        local_40 = (float)(int)local_14 + local_40;
        pfVar9 = local_1c;
      }
      goto joined_r0x0069604d;
    }
    iVar7 = *(int *)((int)param_1 + 10);
    iVar6 = FUN_004c9f81();
    if (iVar6 == iVar7) {
      iVar7 = (**(code **)(**(int **)((int)param_1 + 0x7a) + 0x1a4))();
      local_20 = (float *)0x0;
      local_a0 = (float *)0x447a0000;
      pfVar9 = *(float **)(iVar7 + 4);
      while (pfVar3 = local_1c, pfVar12 = local_6c, pfVar9 != (float *)0x0) {
        pfVar12 = (float *)*pfVar9;
        local_1c = (float *)pfVar9[2];
        pfVar9 = local_1c;
        if ((pfVar12[3] != 0.0) &&
           (iVar7 = FUN_0051b230(), pfVar9 = local_1c, *(float *)(iVar7 + 0x482) == local_30)) {
          pfStack_f4 = (float *)0x696193;
          FUN_0051b230();
          pfStack_f4 = (float *)0x69619a;
          cVar5 = FUN_004ea200();
          pfVar9 = local_1c;
          if (cVar5 != '\0') {
            local_14 = (float *)(**(code **)(*(int *)((int)pfVar12 + 0x22) + 4))();
            local_28 = (float)(int)local_14 + local_28;
            cVar5 = FUN_00525660();
            pfVar9 = local_1c;
            if ((cVar5 == '\0') && (0 < local_64)) {
              pfVar9 = (float *)pfVar12[3];
              cVar5 = (**(code **)(*(int *)((int)pfVar12 + 0x22e) + 8))();
              if (cVar5 == '\0') {
                pfVar9 = (float *)FUN_0051c0c0();
              }
              FUN_0044e1b0();
              pfStack_f8 = (float *)0x6961fc;
              pfStack_f4 = pfVar9;
              fVar15 = (float10)FUN_0044a9c0();
              local_7c = (float *)(float)fVar15;
              if (((local_20 == (float *)0x0) ||
                  (pfVar9 = local_1c, (float)local_7c < (float)local_a0)) &&
                 (iVar7 = *(int *)((int)param_1 + 10), iVar6 = FUN_00522770(), pfVar9 = local_1c,
                 iVar6 == iVar7)) {
                local_20 = pfVar12;
                local_a0 = local_7c;
              }
            }
          }
        }
      }
      while (local_1c = pfVar3, pfVar12 != (float *)0x0) {
        piVar8 = (int *)*pfVar12;
        local_1c = (float *)pfVar12[2];
        if ((piVar8[0x4d] == 9) || (local_20 == (float *)0x0)) {
          fVar10 = (float)FUN_0044e1d0();
          if (local_30 == fVar10) {
            iVar7 = FUN_004a0750();
            if (*(int *)(iVar7 + 0x3d8) != *(int *)((int)param_1 + 10)) goto LAB_00696294;
            pcVar13 = *(char **)(*(int *)((int)param_1 + 10) + 0x117de);
          }
          else {
LAB_00696294:
            pcVar13 = *(char **)(**(int **)((int)local_30 + 0x2c) + 0x12);
          }
          if (0 < (int)pcVar13) {
            pfStack_f4 = (float *)0x6962ba;
            cVar5 = (**(code **)(*(int *)(*(int *)((int)param_1 + 10) + 0xe8a0) + 0x24))();
            if (cVar5 != '\0') {
              pfStack_f8 = (float *)0x6962cc;
              pfStack_f4 = (float *)pcVar13;
              FUN_004e9370();
              pfStack_f4 = (float *)0x6962d6;
              cVar5 = FUN_004ea200();
              if (cVar5 != '\0') {
                pfStack_f4 = (float *)0x6962ea;
                FUN_00428eb0();
                local_9c = (undefined1 *)&pfStack_f8;
                pcStack_fc = (char *)&DAT_0088f28c;
                uStack_100 = 0x696307;
                FUN_00446d10();
                local_9c = auStack_104;
                pcStack_fc = pcVar13;
                FUN_00449290(local_b8);
                FUN_00667670();
                FUN_00461e60();
                pfStack_f4 = (float *)0x696339;
                iVar7 = FUN_00428ee0();
                if (iVar7 == 0) {
                  local_20 = (float *)0x0;
                }
                else {
                  local_20 = (float *)(iVar7 + -0x14);
                }
                pfStack_f4 = (float *)0x69635e;
                (**(code **)(**(int **)((int)param_1 + 0x7a) + 0x1a8))();
              }
            }
          }
          if (local_20 != (float *)0x0) goto LAB_00696365;
        }
        else {
LAB_00696365:
          iVar7 = *(int *)((int)param_1 + 10);
          pfStack_f4 = (float *)0x696379;
          pfStack_f4 = (float *)(**(code **)(*piVar8 + 0xc))();
          pfStack_f8 = (float *)0x696381;
          pfStack_f8 = (float *)(**(code **)(*(int *)(iVar7 + 0xe) + 0xc))();
          pcStack_fc = s__s_deploys__s_in_province__d__00867bc4;
          uStack_100 = 0x69638c;
          FUN_00458570();
          pfStack_f8 = (float *)&stack0xffffff10;
          ppuVar1 = local_70 + 7;
          pcStack_fc = (char *)0x69639f;
          pfStack_f4 = (float *)piVar8;
          (*(code *)local_70[10])();
          pcStack_fc = (char *)0x6963a4;
          (*(code *)*ppuVar1)();
          pfStack_f4 = local_20;
          pfStack_f8 = (float *)0x6963b1;
          FUN_0045e6c0();
          local_28 = local_28 + _DAT_007e3374;
        }
        pfVar3 = (float *)0x0;
        pfVar12 = local_1c;
      }
    }
  }
  local_40 = local_28 + local_40;
  FUN_006a9d50();
  FUN_006a9d50();
  if (local_39 != '\0') {
    local_30 = local_28 / local_40;
    local_c8 = *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0xe4);
    local_a4 = *(float *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0xe8);
    pfStack_f4 = (float *)0x69642f;
    fVar15 = (float10)FUN_006b57f0();
    iVar7 = local_80;
    local_34 = (float *)(float)fVar15;
    local_1c = (float *)(&DAT_0089cad8)[local_80];
    if ((local_1c != (float *)0x0) && (iVar6 = FUN_006a9d50(), iVar7 != iVar6)) {
      local_14 = (float *)((float)param_1[0x14] *
                          *(float *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0xb86));
      local_c4 = (int)ROUND((float)local_14);
      pfVar9 = *(float **)(*(int *)((int)param_1 + 10) + 0x4508);
joined_r0x00696483:
      do {
        do {
          do {
            if ((pfVar9 == (float *)0x0) || (local_c4 <= param_1[0x15])) goto LAB_0069662a;
            pfVar12 = (float *)*pfVar9;
            local_7c = (float *)pfVar9[2];
            pfVar9 = local_7c;
          } while (((pfVar12[3] == 0.0) ||
                   ((cVar5 = (**(code **)((int)*pfVar12 + 0x28))(), pfVar9 = local_7c, cVar5 == '\0'
                    || (cVar5 = FUN_00525660(), pfVar9 = local_7c, cVar5 != '\0')))) ||
                  (((int *)pfVar12[0x7d] != (int *)0x0 &&
                   ((cVar5 = (**(code **)(*(int *)pfVar12[0x7d] + 0x100))(), cVar5 == '\0' &&
                    (cVar5 = (**(code **)(*(int *)pfVar12[0x7d] + 0xe4))(), pfVar9 = local_7c,
                    cVar5 == '\0'))))));
          iVar7 = FUN_0051b230();
          pfStack_f4 = (float *)0x696511;
          cVar5 = FUN_004ccb10();
          pfVar9 = local_7c;
        } while (cVar5 == '\0');
        pfStack_f4 = (float *)0x696534;
        cVar5 = (**(code **)(*(int *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0xb8) + 0x24))
                          ();
        pfVar9 = local_7c;
      } while ((cVar5 != '\0') ||
              (iVar6 = FUN_006a9d50(), pfVar9 = local_7c,
              *(char *)(iVar6 + 0x11862 + (int)local_1c) != '\0'));
      local_14 = *(float **)(iVar7 + 0x482);
      pfVar9 = (float *)FUN_0044e1d0();
      if (local_14 == pfVar9) {
        local_80 = (**(code **)**(undefined4 **)(iVar7 + 0x482))();
        cVar5 = FUN_004ca33c();
        if (cVar5 == '\0') {
          iVar7 = *(int *)(*(int *)((int)param_1 + 10) + 0xe86e);
          do {
            if (iVar7 == 0) goto LAB_006965b0;
            iVar7 = *(int *)(iVar7 + 8);
            cVar5 = FUN_004ca33c();
          } while (cVar5 == '\0');
          pfVar9 = local_7c;
          if (-1 < *(int *)(local_80 + 0x56)) goto joined_r0x00696483;
LAB_006965b0:
          iVar7 = local_80;
          local_14 = *(float **)(local_80 + 0x56);
          iVar6 = (**(code **)(*(int *)((int)pfVar12 + 0x22) + 4))();
          *(int *)(iVar7 + 0x56) = iVar6 + (int)local_14;
        }
      }
      iVar6 = (**(code **)(*(int *)((int)pfVar12 + 0x22) + 4))();
      iVar7 = *(int *)((int)param_1 + 10);
      param_1[0x15] = param_1[0x15] + iVar6;
      (**(code **)(*(int *)((int)local_1c + 0xe) + 0xc))();
      pfStack_f4 = (float *)0x6965f3;
      pfStack_f4 = (float *)(**(code **)((int)*pfVar12 + 0xc))();
      pfStack_f8 = (float *)0x6965fb;
      pfStack_f8 = (float *)(**(code **)(*(int *)(iVar7 + 0xe) + 0xc))();
      pcStack_fc = s__s_turns___s__over_to__s_00867f0c;
      uStack_100 = 0x696606;
      FUN_00458570();
      FUN_006a9d50();
      pfStack_f8 = (float *)0x69661d;
      pfStack_f4 = pfVar12;
      FUN_0045c890();
      pfVar9 = local_7c;
      goto joined_r0x00696483;
    }
    FUN_006a9d50();
    local_38 = 0.0;
    local_78 = 1.0;
    pfVar9 = local_58;
    pfVar3 = local_58;
    pfVar12 = local_1c;
    while (local_1c = pfVar3, local_58 = local_1c, pfVar9 != (float *)0x0) {
      pfVar3 = (float *)pfVar9[2];
      piVar8 = (int *)*pfVar9;
      local_1c = pfVar12;
      FUN_0068a4e0();
      iVar7 = (**(code **)(*piVar8 + 4))();
      pfVar9 = pfVar3;
      pfVar3 = local_58;
      pfVar12 = local_1c;
      if (0 < iVar7) {
        iVar7 = FUN_00689e70();
        local_74 = local_34;
        if (((&DAT_0089cad8)[iVar7] != 0) && ((char)piVar8[0x49] == '\0')) {
          pfStack_f4 = (float *)0x696734;
          fVar15 = (float10)FUN_006b57f0();
          local_74 = (float *)(float)fVar15;
        }
        fVar10 = _DAT_007e4080;
        if (local_29 == '\0') {
          if ((char)piVar8[0x49] != '\0') goto LAB_00696760;
        }
        else {
          if ((char)piVar8[0x49] == '\0') {
            fVar10 = _DAT_007e34c0;
          }
LAB_00696760:
          local_74 = (float *)((float)local_74 * fVar10);
        }
        local_14 = (float *)piVar8[0x3f];
        local_1c = (float *)(float)(int)local_14;
        iVar7 = (**(code **)(*piVar8 + 4))();
        local_14 = (float *)(iVar7 + 2);
        if ((float)local_1c < (float)(int)local_14) {
          iVar7 = (**(code **)(*piVar8 + 4))();
          local_14 = (float *)(iVar7 + 2);
          local_1c = (float *)(float)(int)local_14;
        }
        if ((float)local_1c < _DAT_007e3374) {
          local_1c = (float *)0x3f800000;
        }
        local_14 = (float *)FUN_0068a190();
        fVar10 = ((float)(int)local_14 / (float)local_1c) / (float)local_74;
        pfVar3 = local_58;
        pfVar12 = local_1c;
        if (fVar10 < local_38) {
          local_38 = fVar10;
          local_78 = (float)(int)local_14;
          pfVar3 = local_58;
        }
      }
    }
    local_38 = (float)_DAT_007e7828 - (_DAT_007e3374 - local_38) * (float)_DAT_007e3358;
    if (local_78 < _DAT_007e3374) {
      local_78 = 1.0;
    }
    pfVar9 = local_1c;
    if (local_1c != (float *)0x0) {
      local_14 = (float *)(float)local_88;
      do {
        piVar8 = (int *)*local_1c;
        local_30 = ((float)local_14 + local_28) / local_40;
        local_1c = (float *)local_1c[2];
        iVar7 = FUN_0068a190();
        iVar6 = (**(code **)(*piVar8 + 4))();
        if ((iVar6 < iVar7) && (iVar7 = (**(code **)(*piVar8 + 4))(), 0 < iVar7)) {
          iVar7 = FUN_00689e70();
          local_48 = local_34;
          if (((&DAT_0089cad8)[iVar7] != 0) && ((char)piVar8[0x49] == '\0')) {
            pfStack_f4 = (float *)0x6968a3;
            fVar15 = (float10)FUN_006b57f0();
            local_48 = (float *)(float)fVar15;
          }
          fVar10 = _DAT_007e4080;
          if (local_29 == '\0') {
            if ((char)piVar8[0x49] != '\0') goto LAB_006968cf;
          }
          else {
            if ((char)piVar8[0x49] == '\0') {
              fVar10 = _DAT_007e34c0;
            }
LAB_006968cf:
            local_48 = (float *)((float)local_48 * fVar10);
          }
          local_24 = (float *)piVar8[0x3f];
          local_20 = (float *)(float)(int)local_24;
          iVar7 = (**(code **)(*piVar8 + 4))();
          local_24 = (float *)(iVar7 + 2);
          if ((float)local_20 < (float)(int)local_24) {
            iVar7 = (**(code **)(*piVar8 + 4))();
            local_24 = (float *)(iVar7 + 2);
            local_20 = (float *)(float)(int)local_24;
          }
          if ((float)local_20 < _DAT_007e3374) {
            local_20 = (float *)0x3f800000;
          }
          local_24 = (float *)FUN_0068a1e0();
          if ((float)local_48 * local_38 * (float)_DAT_007e8410 + (float)_DAT_007e7828 <=
              (float)(int)local_24 / (float)local_20) {
            do {
              piVar11 = (int *)(**(code **)(*(int *)((int)piVar8 + 0x12) + 0x1a4))();
              iVar7 = (**(code **)(*piVar11 + 4))();
              iVar6 = (**(code **)(*piVar8 + 4))();
              if ((iVar7 <= iVar6) || (iVar7 = FUN_00688fd0(), iVar7 == 0)) break;
              FUN_006a9d50();
              FUN_006a9d50();
              pfStack_f4 = (float *)0x6969a3;
              (**(code **)(**(int **)((int)param_1 + 0x7a) + 0x1a8))();
              pfStack_f4 = (float *)0x6969ae;
              local_24 = (float *)(**(code **)(*(int *)(iVar7 + 0x22) + 4))();
              local_28 = (float)(int)local_24 + local_28;
              local_30 = local_28 / local_40;
              pfStack_f4 = (float *)0x6969c7;
              local_24 = (float *)(**(code **)(*(int *)(iVar7 + 0x22) + 4))();
              local_38 = (float)(int)local_24 / local_78 + local_38;
              pfStack_f4 = (float *)0x6969dd;
              local_24 = (float *)(**(code **)(*(int *)(iVar7 + 0x22) + 4))();
              local_78 = (float)(int)local_24 + local_78;
              if (_DAT_007e3374 < local_38) {
                local_38 = 1.0;
              }
              local_24 = (float *)FUN_0068a1e0();
            } while ((float)local_48 * local_38 * (float)_DAT_007e8410 + (float)_DAT_007e7828 <=
                     (float)(int)local_24 / (float)local_20);
          }
        }
        pfVar9 = local_58;
        pfVar12 = (float *)0x0;
      } while (local_1c != (float *)0x0);
    }
    while (local_1c = pfVar12, pfVar9 != (float *)0x0) {
      pfVar12 = (float *)pfVar9[2];
      piVar8 = (int *)*pfVar9;
      local_14 = (float *)piVar8[0x3f];
      local_20 = (float *)(float)(int)local_14;
      local_1c = pfVar12;
      iVar7 = (**(code **)(*piVar8 + 4))();
      local_14 = (float *)(iVar7 + 2);
      if ((float)local_20 < (float)(int)local_14) {
        iVar7 = (**(code **)(*piVar8 + 4))();
        local_14 = (float *)(iVar7 + 2);
        local_20 = (float *)(float)(int)local_14;
      }
      if ((float)local_20 < _DAT_007e3374) {
        local_20 = (float *)0x3f800000;
      }
      iVar7 = (**(code **)(*piVar8 + 4))();
      pfVar9 = pfVar12;
      pfVar12 = local_1c;
      if (0 < iVar7) {
        iVar7 = FUN_00689e70();
        local_44 = local_34;
        if (((&DAT_0089cad8)[iVar7] != 0) && ((char)piVar8[0x49] == '\0')) {
          pfStack_f4 = (float *)0x696ae8;
          fVar15 = (float10)FUN_006b57f0();
          local_44 = (float *)(float)fVar15;
        }
        fVar10 = _DAT_007e4080;
        if (local_29 == '\0') {
          if ((char)piVar8[0x49] != '\0') goto LAB_00696b14;
        }
        else {
          if ((char)piVar8[0x49] == '\0') {
            fVar10 = _DAT_007e34c0;
          }
LAB_00696b14:
          local_44 = (float *)((float)local_44 * fVar10);
        }
        local_14 = (float *)FUN_0068a190();
        pfVar12 = local_1c;
        if ((float)(int)local_14 / (float)local_20 <
            (float)local_44 * local_38 * (float)_DAT_007f4698) {
          local_24 = (float *)((float)local_44 * (float)local_20);
          local_14 = (float *)FUN_0068a190();
          local_24 = (float *)__ftol();
          local_14 = (float *)__ftol();
          iVar7 = (**(code **)(*piVar8 + 4))();
          iVar6 = FUN_0068a190();
          pfVar9 = local_14;
          if (iVar6 < iVar7) {
            local_14 = (float *)__ftol();
            iVar7 = (**(code **)(*piVar8 + 4))();
            iVar6 = FUN_0068a190();
            pfVar9 = (float *)(iVar7 - iVar6);
            if ((int)local_14 <= iVar7 - iVar6) {
              pfVar9 = local_14;
            }
          }
          pfVar12 = local_24;
          if ((int)pfVar9 <= (int)local_24) {
            pfVar12 = pfVar9;
          }
          if ((int)pfVar12 < 1) break;
          local_cc = 0;
          local_d8 = (float *)0x0;
          local_d4 = 0;
          local_d0 = 0;
          local_dc = &PTR_FUN_007e4c84;
          local_8 = CONCAT31(local_8._1_3_,6);
          pfStack_f4 = *(float **)(*(int *)piVar8[1] + 4);
          pcStack_fc = (char *)0x696c08;
          pfStack_f8 = pfVar12;
          FUN_0068e7f0();
          pfVar12 = local_d8;
          pfVar9 = local_1c;
          while (local_1c = pfVar9, pfVar12 != (float *)0x0) {
            local_24 = (float *)pfVar12[2];
            pfVar12 = (float *)*pfVar12;
            iVar6 = (**(code **)(*piVar8 + 4))();
            iVar7 = _rand();
            for (iVar7 = iVar7 % iVar6; iVar7 != 0; iVar7 = iVar7 + -1) {
            }
            pfStack_f4 = (float *)0x696c4d;
            local_20 = (float *)FUN_004e9370();
            local_14 = (float *)(**(code **)(*(int *)((int)pfVar12 + 0x22) + 4))();
            local_28 = local_28 - (float)(int)local_14;
            local_30 = local_28 / local_40;
            (**(code **)(*(int *)pfVar12[0x7d] + 0x100))();
            pfStack_f4 = (float *)0x696c89;
            (**(code **)(*(int *)((int)piVar8 + 0x12) + 0x1a8))();
            param_1 = local_c0;
            FUN_006a9d50();
            pfStack_f8 = (float *)0x696ca5;
            pfStack_f4 = pfVar12;
            cVar5 = FUN_006ac380();
            if (cVar5 == '\0') {
              pfStack_f4 = local_20;
              pcStack_fc = (char *)0x696ccf;
              pfStack_f8 = pfVar12;
              FUN_006aaff0();
              pfVar12 = local_24;
              pfVar9 = local_1c;
            }
            else {
              pfStack_f8 = (float *)0x696cb8;
              pfStack_f4 = pfVar12;
              FUN_00522770();
              pfStack_f8 = (float *)0x696cbf;
              FUN_0045fed0();
              pfVar12 = local_24;
              pfVar9 = local_1c;
            }
          }
          local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
          local_8._0_1_ = 2;
          FUN_00527230();
          pfVar12 = local_1c;
        }
      }
    }
    if (((float)local_88 + local_28) / local_40 < local_a4) {
      while( true ) {
        local_34 = (float *)0x0;
        local_98 = 0.0;
        pfVar9 = local_58;
        if (local_58 == (float *)0x0) break;
        do {
          pfVar12 = (float *)pfVar9[2];
          pfVar9 = (float *)*pfVar9;
          local_14 = (float *)pfVar9[0x3f];
          local_1c = (float *)(float)(int)local_14;
          local_14 = (float *)(**(code **)((int)*pfVar9 + 4))();
          if ((float)local_1c < (float)(int)local_14) {
            local_14 = (float *)(**(code **)((int)*pfVar9 + 4))();
            local_1c = (float *)(float)(int)local_14;
          }
          if ((float)local_1c < _DAT_007e3374) {
            local_1c = (float *)0x3f800000;
          }
          local_14 = (float *)FUN_0068a190();
          fVar10 = (float)(int)local_14 / (float)local_1c;
          if ((local_34 != (float *)0x0) && (fVar10 <= local_98)) {
            fVar10 = local_98;
            pfVar9 = local_34;
          }
          local_34 = pfVar9;
          local_98 = fVar10;
          pfVar9 = pfVar12;
        } while (pfVar12 != (float *)0x0);
        if (((local_34 == (float *)0x0) || (local_98 < _DAT_007e4094)) ||
           (iVar7 = FUN_00688fd0(), iVar7 == 0)) break;
        FUN_006a9d50();
        pfStack_f4 = (float *)0x696df9;
        (**(code **)(**(int **)((int)param_1 + 0x7a) + 0x1a8))();
        pfStack_f4 = (float *)0x696e02;
        local_14 = (float *)(**(code **)(*(int *)(iVar7 + 0x22) + 4))();
        local_28 = (float)(int)local_14 + local_28;
        if (local_a4 <= local_28 / local_40) break;
      }
    }
  }
  local_94 = &PTR_LAB_007e4b94;
  pfVar9 = local_90;
  while (pfVar9 != (float *)0x0) {
    pfVar9 = (float *)pfVar9[2];
    pfStack_f4 = (float *)0x696e44;
    FUN_00796cd8();
  }
  local_90 = (float *)0x0;
  local_8c = (float *)0x0;
  local_88 = 0;
  local_70 = &PTR_LAB_007e4b94;
  pfVar9 = local_6c;
  while (pfVar9 != (float *)0x0) {
    pfVar9 = (float *)pfVar9[2];
    pfStack_f4 = (float *)0x696e79;
    FUN_00796cd8();
  }
  local_6c = (float *)0x0;
  local_68 = (float *)0x0;
  local_64 = 0;
  local_8 = 0xffffffff;
  local_5c = &PTR_LAB_007f3f6c;
  pfVar9 = local_58;
  while (pfVar9 != (float *)0x0) {
    pfVar9 = (float *)pfVar9[2];
    pfStack_f4 = (float *)0x696eab;
    FUN_00796cd8();
  }
  goto LAB_00696ebf;
LAB_0069662a:
  local_94 = &PTR_LAB_007e4b94;
  pfVar9 = local_90;
  while (pfVar9 != (float *)0x0) {
    pfVar9 = (float *)pfVar9[2];
    pfStack_f4 = (float *)0x696647;
    FUN_00796cd8();
  }
  local_90 = (float *)0x0;
  local_8c = (float *)0x0;
  local_88 = 0;
  local_70 = &PTR_LAB_007e4b94;
  pfVar9 = local_6c;
  while (pfVar9 != (float *)0x0) {
    pfVar9 = (float *)pfVar9[2];
    pfStack_f4 = (float *)0x696679;
    FUN_00796cd8();
  }
  local_6c = (float *)0x0;
  local_68 = (float *)0x0;
  local_64 = 0;
  local_8 = 0xffffffff;
  local_5c = &PTR_LAB_007f3f6c;
  pfVar9 = local_58;
  while (pfVar9 != (float *)0x0) {
    pfVar9 = (float *)pfVar9[2];
    pfStack_f4 = (float *)0x6966a9;
    FUN_00796cd8();
  }
LAB_00696ebf:
  local_50 = 0;
  local_54 = (float *)0x0;
  local_58 = (float *)0x0;
  if (local_bc == (float *)0x0) goto LAB_00696ed3;
  goto LAB_00695a82;
}


