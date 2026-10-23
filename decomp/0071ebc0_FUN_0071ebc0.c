// FUN_0071ebc0 @ 71ebc0 size=29515

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0071ebc0(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  undefined2 uVar2;
  char cVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int *extraout_ECX;
  char *pcVar15;
  float10 fVar16;
  int aiStack_4f8 [39];
  undefined4 uStack_45c;
  undefined1 *puStack_458;
  int iStack_454;
  undefined4 *puStack_450;
  int *piStack_44c;
  int *piStack_448;
  int *piStack_444;
  int *local_440;
  int *local_43c;
  int *local_438;
  int *local_434;
  undefined1 local_418 [4];
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  undefined1 local_3ec;
  undefined4 local_34a;
  undefined1 local_346;
  float local_308;
  undefined4 local_28c;
  undefined4 local_270;
  int local_22c [34];
  int local_1a4;
  undefined4 local_198;
  int local_17c [4];
  int local_16c [2];
  undefined1 local_164 [8];
  int local_15c [2];
  undefined1 local_154 [16];
  int *local_144;
  uint local_134;
  uint local_130;
  int local_12c;
  uint local_124;
  int local_10c [3];
  undefined2 local_100;
  undefined4 local_fe;
  int local_f8 [2];
  undefined2 local_f0;
  undefined4 local_ee;
  undefined2 local_e8;
  undefined4 local_e6;
  undefined2 local_e0;
  undefined4 local_de;
  undefined2 local_d8;
  undefined4 local_d6;
  undefined2 local_d0;
  undefined4 local_ce;
  undefined2 local_c8;
  undefined4 local_c6;
  undefined2 local_c0;
  undefined4 local_be;
  undefined2 local_b8;
  undefined4 local_b6;
  undefined2 local_b0;
  undefined4 local_ae;
  undefined2 local_a8;
  undefined4 local_a6;
  undefined1 local_a0 [8];
  undefined2 local_98;
  undefined4 local_96;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 *local_80;
  uint local_7c;
  int local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  uint local_50;
  undefined2 local_4c;
  float local_40;
  int local_3c;
  undefined2 local_38;
  int local_34;
  char local_2d;
  int local_2c;
  undefined2 local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007dd748;
  local_10 = ExceptionList;
  local_2d = '\0';
  ExceptionList = &local_10;
  local_12c = param_1;
  if (param_3 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    pvVar4 = operator_new(0x23c0);
    local_8 = 0;
    if (pvVar4 == (void *)0x0) {
      param_3 = (undefined4 *)0x0;
    }
    else {
      param_3 = (undefined4 *)FUN_0070ccf0();
    }
    param_3[9] = param_2;
    *(undefined4 *)((int)param_3 + 0x1256) = *(undefined4 *)((int)param_2 + 6);
    local_2d = '\x01';
  }
  local_8 = 0xffffffff;
  FUN_00446d10();
  piVar8 = *(int **)(param_1 + 4);
  do {
    if (piVar8 == (int *)0x0) {
      if ((local_2d != '\0') && (param_3 != (undefined4 *)0x0)) {
        (**(code **)*param_3)();
      }
      ExceptionList = local_10;
      return;
    }
    local_144 = (int *)piVar8[2];
    iVar13 = *piVar8;
    cVar3 = FUN_007105e0();
    if (cVar3 == '\0') goto switchD_0071ec85_caseD_2;
    switch(*(undefined4 *)(iVar13 + 4)) {
    case 0:
      FUN_004e9370();
      FUN_004a89c0();
      break;
    case 1:
      local_4c = 0;
      local_50 = local_50 & 0xff000000;
      FUN_0042dcc0();
      piVar8 = operator_new(0xc);
      uVar2 = local_4c;
      uVar5 = local_50;
      local_8 = 3;
      local_14 = piVar8;
      if (piVar8 != (int *)0x0) {
        local_198 = *(undefined4 *)(iVar13 + 8);
        FUN_0072a8d0();
        *piVar8 = (int)&PTR_FUN_007e9e3c;
        uVar12 = __ftol();
        *(undefined4 *)(piVar8[1] + 0xe) = uVar12;
        iVar13 = piVar8[1];
        *(uint *)(iVar13 + 0x12) = uVar5;
        *(undefined2 *)(iVar13 + 0x16) = uVar2;
      }
      goto LAB_0071f3a6;
    case 6:
      iVar13 = FUN_0070a510();
      if (iVar13 < 1) {
        FUN_00496e60();
        iVar13 = FUN_00465c30();
        if (iVar13 != 0) {
          FUN_0071c200();
          iVar13 = FUN_00465c40();
          if ((iVar13 == 0) || (iVar13 = FUN_00465c40(), iVar13 == 0)) {
            iVar13 = FUN_00465c40();
            if ((iVar13 == 0) || (iVar13 = FUN_00465c40(), iVar13 != 0)) {
              iVar13 = FUN_00465c40();
              if ((iVar13 != 0) || (iVar13 = FUN_00465c40(), iVar13 == 0)) {
                FUN_00428eb0();
                local_14 = operator_new(0xc);
                local_8 = 0x18;
                if (local_14 != (void *)0x0) {
                  FUN_00458280();
                  local_43c = local_f8;
                  local_18 = &local_438;
                  local_440 = (int *)0x71fd59;
                  FUN_00449290();
                  local_43c = (int *)0x71fd64;
                  puVar11 = (undefined4 *)FUN_00462830();
                  local_440 = (int *)*puVar11;
                  local_43c = (int *)CONCAT22(local_43c._2_2_,*(undefined2 *)(puVar11 + 1));
                  piStack_444 = (int *)0x71fd7c;
                  piStack_444 = (int *)FUN_0045fec0();
                  piStack_448 = (int *)0xb7;
                  piStack_44c = (int *)0x71fd89;
                  FUN_00464a00();
                }
                local_8 = 0xffffffff;
                FUN_005b4c40();
                FUN_00565bc0();
                local_14 = operator_new(0xc);
                local_8 = 0x19;
                if (local_14 != (int *)0x0) {
                  FUN_00458280();
                  FUN_0045fec0();
                  local_434 = (int *)0xd5;
                  local_438 = (int *)0x71fde0;
                  FUN_005b4790();
                }
                local_8 = 0xffffffff;
                FUN_00565bc0();
                FUN_00458280();
                goto LAB_0072253b;
              }
              FUN_00458280();
              goto LAB_0071fcf8;
            }
            FUN_00458280();
LAB_0071fcba:
            local_14 = (int *)&stack0xfffffbd0;
            local_434 = (int *)&stack0xfffffbd0;
            local_438 = (int *)0x71fcbf;
            FUN_00490f60();
            local_438 = (int *)0x71fcc6;
            FUN_00586600();
            local_434 = (int *)0x71fccd;
            FUN_00460bf0();
          }
          else {
            local_14 = (int *)FUN_00465c40();
            piVar8 = (int *)FUN_00465c40();
            if (piVar8 != local_14) {
              FUN_00465c40();
              iVar13 = FUN_00584c90();
              iVar6 = FUN_00458280();
              if ((iVar13 != iVar6) ||
                 ((iVar13 = FUN_00465c40(), iVar13 != DAT_00d615c2 &&
                  (iVar13 = FUN_00465c40(), iVar13 != DAT_00d615c6)))) {
                iVar13 = FUN_0070a500();
                if ((iVar13 != 1) && (iVar13 = FUN_00465c40(), iVar13 != 0)) {
                  FUN_00490f60();
                  FUN_00586600();
                  local_14 = (int *)FUN_005b4ce0();
                  FUN_00490f60();
                  FUN_00586600();
                  local_18 = operator_new(0xc);
                  local_8 = 0x17;
                  if (local_18 != (undefined4 *)0x0) {
                    FUN_00584c90();
                    FUN_0045fec0();
                    local_434 = (int *)0xd6;
                    local_438 = (int *)0x71fc4c;
                    FUN_005b4790();
                  }
                  local_8 = 0xffffffff;
                  iVar13 = FUN_0070a500();
                  if (iVar13 == 2) {
                    iVar13 = FUN_00498d60();
                    *(undefined1 *)(iVar13 + 0x1c) = 1;
                  }
                  FUN_00565bc0();
                }
                FUN_00458280();
                goto LAB_0071fcba;
              }
              iVar13 = FUN_0070a500();
              if ((iVar13 != 1) && (iVar13 = FUN_00465c40(), iVar13 != 0)) {
                FUN_00490f60();
                FUN_00586600();
                local_14 = (int *)FUN_005b4ce0();
                FUN_00490f60();
                FUN_00586600();
                local_18 = operator_new(0xc);
                local_8 = 0x16;
                if (local_18 != (undefined4 *)0x0) {
                  FUN_00584c90();
                  FUN_0045fec0();
                  local_434 = (int *)0xd6;
                  local_438 = (int *)0x71fb74;
                  FUN_005b4790();
                }
                local_8 = 0xffffffff;
                iVar13 = FUN_0070a500();
                if (iVar13 == 2) {
                  iVar13 = FUN_00498d60();
                  *(undefined1 *)(iVar13 + 0x1c) = 1;
                }
                FUN_00565bc0();
              }
              FUN_00458280();
LAB_0071fcf8:
              local_14 = (int *)&stack0xfffffbd0;
              local_434 = (int *)&stack0xfffffbd0;
              local_438 = (int *)0x71fd00;
              FUN_00490f60();
              local_438 = (int *)0x71fd07;
              FUN_00586600();
              local_434 = (int *)0x71fd0e;
              FUN_00460bf0();
            }
          }
        }
      }
      else {
        FUN_0071c200();
        iVar13 = FUN_0070a510();
        if (iVar13 == 1) {
          piVar8 = (int *)FUN_00447250();
          local_3c = *piVar8;
          local_38 = (undefined2)piVar8[1];
LAB_0071f77a:
          local_1c = (int *)FUN_00584c90();
          if (local_1c != (int *)0x0) {
            iVar13 = FUN_0070a500();
            if ((iVar13 != 1) && (iVar13 = FUN_00465c40(), iVar13 != 0)) {
              FUN_00490f60();
              FUN_00586600();
              local_14 = (int *)FUN_005b4ce0();
              local_18 = operator_new(0xc);
              local_8 = 0x12;
              if (local_18 != (undefined4 *)0x0) {
                FUN_00584c90();
                FUN_00490f60();
                FUN_00586600();
                FUN_0045fec0();
                local_434 = (int *)0xd6;
                local_438 = (int *)0x71f817;
                FUN_005b4790();
              }
              local_8 = 0xffffffff;
              iVar13 = FUN_0070a500();
              if (iVar13 == 2) {
                iVar13 = FUN_00498d60();
                *(undefined1 *)(iVar13 + 0x1c) = 1;
              }
              FUN_00565bc0();
            }
            local_434 = &local_3c;
            local_14 = (int *)&stack0xfffffbd0;
            local_438 = (int *)0x71f859;
            FUN_00449290();
            local_434 = (int *)0x71f860;
            FUN_00460bf0();
            break;
          }
        }
        else {
          if (iVar13 == 2) {
            piVar8 = (int *)FUN_00447250();
            local_3c = *piVar8;
            local_38 = (undefined2)piVar8[1];
            goto LAB_0071f77a;
          }
          if (iVar13 == 3) {
            piVar8 = (int *)FUN_00447250();
            local_3c = *piVar8;
            local_38 = (undefined2)piVar8[1];
            goto LAB_0071f77a;
          }
        }
        FUN_00526a00();
        local_8 = 0x13;
        iVar13 = FUN_00465c40();
        if (iVar13 != 0) {
          FUN_00465c40();
          FUN_00485f30();
          FUN_00516230();
          cVar3 = FUN_00516260();
          while (cVar3 != '\0') {
            FUN_00516240();
            FUN_00516250();
            piVar8 = (int *)FUN_00465c30();
            if ((piVar8 != (int *)0x0) && (piVar8 != param_2)) {
              FUN_00459f50();
            }
            cVar3 = FUN_00516260();
          }
          FUN_00490f60();
          FUN_00586600();
          FUN_005b4ce0();
          local_14 = operator_new(0xc);
          local_8._0_1_ = 0x14;
          if (local_14 != (int *)0x0) {
            FUN_00584c90();
            FUN_00490f60();
            FUN_00586600();
            FUN_0045fec0();
            local_434 = (int *)0xd6;
            local_438 = (int *)0x71f957;
            FUN_005b4790();
          }
          local_8 = CONCAT31(local_8._1_3_,0x13);
          FUN_00565bc0();
        }
        local_14 = operator_new(0xc);
        local_8._0_1_ = 0x15;
        if (local_14 != (int *)0x0) {
          FUN_00458280();
          FUN_0045fec0();
          local_434 = (int *)0xd5;
          local_438 = (int *)0x71f99f;
          FUN_005b4790();
        }
        local_8 = CONCAT31(local_8._1_3_,0x13);
        FUN_00565bc0();
        FUN_00458280();
        FUN_00516230();
        cVar3 = FUN_00516260();
        while (cVar3 != '\0') {
          FUN_00516250();
          iVar13 = FUN_00465c30();
          if (iVar13 != 0) {
            local_434 = &local_3c;
            local_14 = (int *)&stack0xfffffbd0;
            local_438 = (int *)0x71f9fd;
            FUN_00449290();
            local_434 = (int *)0x71fa04;
            FUN_00460bf0();
          }
          FUN_00516240();
          cVar3 = FUN_00516260();
        }
        local_8 = 0xffffffff;
        FUN_00430580();
      }
      break;
    case 7:
      local_14 = operator_new(0xc);
      local_8 = 0x1a;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_00458280();
        FUN_00458280();
        local_434 = (int *)0x3;
        local_438 = (int *)0x71fe47;
        FUN_0047ea00();
        local_434 = (int *)0xd2;
        local_438 = (int *)0x71fe54;
        FUN_0071c9e0();
      }
      local_8 = 0xffffffff;
      iVar13 = FUN_0072a970();
      *(undefined1 *)(iVar13 + 0x16) = 1;
      fVar16 = (float10)FUN_0070a4b0();
      if ((float10)_DAT_007e3380 < fVar16) {
        iVar13 = FUN_0072a970();
        *(undefined1 *)(iVar13 + 0x17) = 1;
      }
      FUN_00565bc0();
      break;
    case 8:
      local_40 = 0.0;
      iVar13 = FUN_0070a4c0();
      if (iVar13 == 1) {
        FUN_00526a60();
        FUN_00526ac0();
        cVar3 = FUN_00526b10();
        while (cVar3 != '\0') {
          FUN_00526af0();
          FUN_00526b00();
          FUN_004e9370();
          local_14 = (int *)FUN_0071c210();
          if (((float)(int)local_14 != _DAT_007e3380) && (cVar3 = FUN_004e8ab0(), cVar3 != '\0')) {
            local_14 = (int *)FUN_0071c210();
            local_40 = (float)(int)local_14 + local_40;
          }
          cVar3 = FUN_00526b10();
        }
        fVar16 = (float10)FUN_0070a4b0();
        fVar16 = fVar16 * (float10)local_40;
      }
      else {
        fVar16 = (float10)FUN_0070a4b0();
      }
      local_40 = (float)fVar16;
      local_14 = operator_new(0xc);
      local_8 = 0x26;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        local_434 = (int *)0x72024d;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 9:
      FUN_0070a2f0();
      local_98 = 6;
      local_96 = FUN_00496e60();
      iVar13 = FUN_00428460();
      if ((iVar13 != 0) && (iVar13 != 0xc)) {
        local_14 = operator_new(0xc);
        local_8 = 0x27;
        if (local_14 != (int *)0x0) {
          FUN_004c0970();
          FUN_0045f730();
          FUN_0050b500();
          FUN_0045fec0();
          local_434 = (int *)0x8e;
          local_438 = (int *)0x7202e7;
          FUN_0071cb40();
        }
        goto LAB_00725ef6;
      }
      break;
    case 10:
      local_14 = operator_new(0xc);
      local_8 = 0x2d;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x10a;
        local_438 = (int *)0x720614;
        FUN_0071c930();
      }
      goto LAB_00725ef6;
    case 0xb:
      local_14 = operator_new(0xc);
      local_8 = 0x5a;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_00458280();
        local_434 = (int *)0x7226bc;
        fVar16 = (float10)FUN_0070a4b0();
LAB_007226bc:
        local_434 = (int *)(float)fVar16;
        local_438 = (int *)0x7226c7;
        local_438 = (int *)FUN_0045fec0();
        local_43c = (int *)0x125;
        local_440 = (int *)0x7226d4;
        FUN_0071c5d0();
      }
      goto LAB_00725e9b;
    case 0xc:
      fVar16 = (float10)FUN_0070a4b0();
      local_14 = (int *)(float)fVar16;
      FUN_00496e60();
      FUN_00490f60();
      FUN_004965c0();
      FUN_005885d0();
      local_14 = (int *)__ftol();
      local_18 = operator_new(0xc);
      local_8 = 0x5b;
      if (local_18 != (undefined4 *)0x0) {
        FUN_00496e60();
        FUN_00458280();
        fVar16 = (float10)(int)local_14;
        goto LAB_007226bc;
      }
      goto LAB_00725e9b;
    case 0xe:
      local_14 = operator_new(0xc);
      local_8 = 0x3c;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_00465bd0();
        FUN_0044df10();
        local_434 = (int *)0x7215f2;
        FUN_0071ce40();
      }
      goto LAB_00725e9b;
    case 0xf:
      local_14 = operator_new(0xc);
      local_8 = 0x3d;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_00465bd0();
        FUN_0044df10();
        local_434 = (int *)0x721647;
        FUN_0071ce40();
      }
      goto LAB_00725e9b;
    case 0x11:
      FUN_00496e60();
      FUN_00477fc0();
      iVar13 = FUN_0070a550();
      if (iVar13 != 0) {
        if (param_4 == 0) {
          iVar13 = FUN_0071c440();
          if (iVar13 == 0) {
            cVar3 = FUN_0071c470();
            if (cVar3 == '\0') {
              piVar8 = (int *)FUN_0071c460();
              iVar13 = (**(code **)(*piVar8 + 4))();
              if (iVar13 < 1) {
LAB_007219a4:
                local_14 = operator_new(0xc);
                local_8 = 0x41;
                if (local_14 != (int *)0x0) {
                  _rand();
                  FUN_0045fec0();
                  FUN_0044df10();
                  local_434 = (int *)&DAT_0088f228;
                  local_438 = (int *)0xa0;
                  local_43c = (int *)0x7219eb;
                  FUN_0071c750();
                }
                goto LAB_00721bde;
              }
              bVar1 = false;
              FUN_0071c460();
              FUN_00516230();
              cVar3 = FUN_00516260();
              if (cVar3 != '\0') {
                do {
                  if (bVar1) goto LAB_007219a4;
                  FUN_00516240();
                  iVar13 = FUN_00516250();
                  iVar6 = FUN_00458280();
                  if (iVar6 == iVar13) {
                    bVar1 = true;
                  }
                  cVar3 = FUN_00516260();
                } while (cVar3 != '\0');
                if (bVar1) goto LAB_007219a4;
              }
            }
            else {
              piVar8 = (int *)FUN_0071c460();
              iVar13 = (**(code **)(*piVar8 + 4))();
              if (iVar13 < 1) {
                iVar13 = 0;
                do {
                  iVar6 = FUN_00465c30();
                  if (iVar6 != 0) {
                    local_14 = operator_new(0xc);
                    local_8 = 0x40;
                    if (local_14 != (int *)0x0) {
                      _rand();
                      local_434 = (int *)0x7218f3;
                      FUN_0047ea00();
                      FUN_0044df10();
                      local_434 = (int *)&DAT_0088f228;
                      local_438 = (int *)0xa0;
                      local_43c = (int *)0x72190e;
                      FUN_0071c750();
                    }
                    local_8 = 0xffffffff;
                    FUN_00565bf0();
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < 0x157);
              }
              else {
                FUN_0071c460();
                FUN_00516230();
                cVar3 = FUN_00516260();
                while (cVar3 != '\0') {
                  FUN_00516240();
                  FUN_00516250();
                  iVar13 = FUN_00465c30();
                  if (iVar13 != 0) {
                    local_14 = operator_new(0xc);
                    local_8 = 0x3f;
                    if (local_14 != (int *)0x0) {
                      _rand();
                      local_434 = (int *)0x721872;
                      FUN_0047ea00();
                      FUN_0044df10();
                      local_434 = (int *)&DAT_0088f228;
                      local_438 = (int *)0xa0;
                      local_43c = (int *)0x72188d;
                      FUN_0071c750();
                    }
                    local_8 = 0xffffffff;
                    FUN_00565bf0();
                  }
                  cVar3 = FUN_00516260();
                }
              }
            }
            break;
          }
          local_14 = operator_new(0xc);
          local_8 = 0x42;
          if (local_14 != (int *)0x0) {
            _rand();
            FUN_0071c440();
            local_434 = (int *)0x721a29;
            FUN_0047ea00();
            FUN_0044df10();
            local_434 = (int *)&DAT_0088f228;
            local_438 = (int *)0xa0;
            local_43c = (int *)0x721a44;
            FUN_0071c750();
          }
        }
        else {
          local_14 = operator_new(0xc);
          local_8 = 0x3e;
          if (local_14 != (int *)0x0) {
            _rand();
            FUN_0045fec0();
            FUN_0044df10();
            local_434 = (int *)&DAT_0088f228;
            local_438 = (int *)0xa0;
            local_43c = (int *)0x7217c2;
            FUN_0071c750();
          }
        }
LAB_00721bde:
        local_8 = 0xffffffff;
        FUN_00565bf0();
      }
      break;
    case 0x12:
      FUN_0070a4e0();
      FUN_00477fc0();
      local_14 = (int *)FUN_0070a550();
      if (local_14 != (int *)0x0) {
        iVar13 = FUN_0070a510();
        piVar8 = param_2;
        if (-1 < iVar13) {
          FUN_0070a4d0();
          piVar8 = (int *)FUN_00465c30();
        }
        if (piVar8 != (int *)0x0) {
          iVar13 = FUN_0070a500();
          if (iVar13 < 1) {
            local_14 = operator_new(0xc);
            local_8 = 0x44;
            if (local_14 != (int *)0x0) {
              _rand();
              FUN_0045fec0();
              FUN_0044df10();
              local_434 = (int *)&DAT_0088f228;
              local_438 = (int *)0xa0;
              local_43c = (int *)0x721bda;
              FUN_0071c750();
            }
            goto LAB_00721bde;
          }
          puVar11 = (undefined4 *)FUN_00462830();
          local_70 = *puVar11;
          local_6c = *(undefined2 *)(puVar11 + 1);
          FUN_0070a500();
          FUN_0042dc20();
          local_18 = operator_new(0xc);
          local_8 = 0x43;
          if (local_18 != (undefined4 *)0x0) {
            _rand();
            FUN_0045fec0();
            FUN_0044df10();
            local_434 = (int *)&DAT_0088f228;
            local_438 = (int *)0xa0;
            local_43c = (int *)0x721b1a;
            FUN_0071c750();
          }
          local_8 = 0xffffffff;
          FUN_00565b70();
          local_434 = (int *)0x721b36;
          pvVar4 = operator_new(0xe);
          if (pvVar4 != (void *)0x0) {
            FUN_0071c220();
          }
          FUN_0071c280();
          FUN_00458280();
          FUN_0071c260();
          FUN_0070a4e0();
          FUN_0071c270();
          FUN_0071c2b0();
          FUN_0072b520();
        }
      }
      break;
    case 0x13:
      local_14 = operator_new(0xc);
      local_8 = 0x45;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x721c2e;
        FUN_0071e470();
      }
      goto LAB_00725e9b;
    case 0x15:
      local_14 = operator_new(0xc);
      local_8 = 0x46;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_00496e60();
        local_434 = (int *)0x721c68;
        FUN_00465bd0();
        FUN_0044df10();
        local_434 = (int *)0x114;
        local_438 = (int *)0x721c82;
        FUN_0047de00();
      }
      goto LAB_00725e9b;
    case 0x17:
      iVar13 = FUN_0070a510();
      piVar8 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar8 = (int *)FUN_00465c30();
      }
      if (piVar8 != (int *)0x0) {
        local_14 = operator_new(0xc);
        local_8 = 0x47;
        if (local_14 != (int *)0x0) {
          FUN_00496e60();
          FUN_0045fec0();
          local_434 = (int *)0x11b;
          local_438 = (int *)0x721ced;
          FUN_0047de00();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0x18:
      iVar13 = FUN_0070a510();
      piVar8 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar8 = (int *)FUN_00465c30();
      }
      if (piVar8 != (int *)0x0) {
        local_14 = operator_new(0xc);
        local_8 = 0x48;
        if (local_14 != (int *)0x0) {
          FUN_00496e60();
          FUN_0045fec0();
          local_434 = (int *)0x11c;
          local_438 = (int *)0x721d58;
          FUN_0047de00();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0x19:
      iVar13 = FUN_0070a510();
      piVar8 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar8 = (int *)FUN_00465c30();
      }
      if (piVar8 != (int *)0x0) {
        local_14 = operator_new(0xc);
        local_8 = 0x49;
        if (local_14 != (int *)0x0) {
          FUN_00496e60();
          FUN_0045fec0();
          local_434 = (int *)0x11d;
          local_438 = (int *)0x721dc3;
          FUN_0047de00();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0x1a:
      iVar13 = FUN_0070a510();
      piVar8 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar8 = (int *)FUN_00465c30();
      }
      if (piVar8 != (int *)0x0) {
        local_14 = operator_new(0xc);
        local_8 = 0x4a;
        if (local_14 != (int *)0x0) {
          FUN_00496e60();
          FUN_0045fec0();
          local_434 = (int *)0x11e;
          local_438 = (int *)0x721e2e;
          FUN_0047de00();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0x1b:
      iVar13 = FUN_0070a4e0();
      if (iVar13 == -2) {
        FUN_0070a4b0();
        __ftol();
        FUN_00465bd0();
        piVar8 = (int *)FUN_0048b980();
      }
      else if (iVar13 == -1) {
        FUN_0070a4b0();
        __ftol();
        FUN_00465bd0();
        FUN_00513f90();
        iVar13 = FUN_00458280();
        if (iVar13 == 0x157) break;
        FUN_0070a4b0();
        __ftol();
        FUN_00465bd0();
        piVar8 = (int *)FUN_00513f90();
      }
      else {
        FUN_00496e60();
        piVar8 = (int *)FUN_00465c30();
      }
      if (piVar8 != (int *)0x0) {
        iVar13 = FUN_0070a500();
        if (iVar13 != 1) {
          if (iVar13 == 2) {
            FUN_0070a4b0();
            __ftol();
            FUN_00465bd0();
            piVar9 = (int *)FUN_00513f90();
            if (piVar9 != piVar8) {
              local_14 = operator_new(0xc);
              local_8 = 0x4d;
              if (local_14 != (int *)0x0) {
                FUN_0070a4b0();
                __ftol();
                FUN_0045fec0();
                local_434 = (int *)0x7c;
                local_438 = (int *)0x721fc3;
                FUN_0047de00();
              }
              local_8 = 0xffffffff;
              FUN_00565bc0();
            }
            FUN_0070a4b0();
            __ftol();
            FUN_00465bd0();
            piVar9 = (int *)FUN_0048b980();
            if (piVar9 == piVar8) break;
            local_14 = operator_new(0xc);
            local_8 = 0x4e;
          }
          else {
            local_14 = operator_new(0xc);
            local_8 = 0x4f;
            if (local_14 != (void *)0x0) {
              FUN_0070a4b0();
              __ftol();
              FUN_0045fec0();
              local_434 = (int *)0x7c;
              local_438 = (int *)0x721f15;
              FUN_0047de00();
            }
            local_8 = 0xffffffff;
            FUN_00565bc0();
            local_14 = operator_new(0xc);
            local_8 = 0x50;
          }
LAB_00721f3c:
          if (local_14 != (int *)0x0) {
            FUN_0070a4b0();
            __ftol();
            FUN_0045fec0();
            local_434 = (int *)0x7d;
            local_438 = (int *)0x721f64;
            FUN_0047de00();
          }
          goto LAB_00725ef6;
        }
        if (param_2 != piVar8) {
          FUN_0070a4b0();
          __ftol();
          FUN_00465bd0();
          piVar8 = (int *)FUN_00513f90();
          if (piVar8 == param_2) {
            local_14 = operator_new(0xc);
            local_8 = 0x4b;
            if (local_14 != (int *)0x0) {
              FUN_0070a4b0();
              __ftol();
              FUN_0045fec0();
              local_434 = (int *)0x7c;
              local_438 = (int *)0x72207a;
              FUN_0047de00();
            }
            local_8 = 0xffffffff;
            FUN_00565bc0();
          }
          FUN_0070a4b0();
          __ftol();
          FUN_00465bd0();
          piVar8 = (int *)FUN_0048b980();
          if (piVar8 == param_2) {
            local_14 = operator_new(0xc);
            local_8 = 0x4c;
            goto LAB_00721f3c;
          }
        }
      }
      break;
    case 0x1c:
    case 0x1d:
      FUN_00458280();
      FUN_00496e60();
      iVar13 = FUN_0071c390();
      if (iVar13 == 0x1d) {
        FUN_0070a4b0();
        __ftol();
        FUN_00512570();
      }
      else {
        FUN_0070a4b0();
        __ftol();
        FUN_00512560();
      }
      FUN_00516270();
      FUN_0072a390();
      cVar3 = FUN_005162c0();
      while (cVar3 != '\0') {
        FUN_005162b0();
        iVar13 = FUN_00513f90();
        if ((iVar13 != 0) && (iVar13 = FUN_0048b980(), iVar13 != 0)) {
          iVar13 = FUN_0070a4e0();
          if (iVar13 == -2) {
            piVar8 = (int *)FUN_0048b980();
          }
          else if (iVar13 == -1) {
            FUN_00513f90();
            iVar13 = FUN_00458280();
            if (iVar13 == 0x157) goto LAB_007223f7;
            piVar8 = (int *)FUN_00513f90();
          }
          else {
            FUN_00496e60();
            piVar8 = (int *)FUN_00465c30();
          }
          local_24 = piVar8;
          if (piVar8 != (int *)0x0) {
            iVar13 = FUN_0070a500();
            if (iVar13 == 1) {
              if (param_2 != piVar8) {
                piVar8 = (int *)FUN_00513f90();
                if (piVar8 == param_2) {
                  local_14 = operator_new(0xc);
                  local_8 = 0x51;
                  if (local_14 != (int *)0x0) {
                    FUN_0048b970();
                    FUN_0045fec0();
                    local_434 = (int *)0x7c;
                    local_438 = (int *)0x72238f;
                    FUN_0047de00();
                  }
                  local_8 = 0xffffffff;
                  FUN_00565bc0();
                }
                piVar8 = (int *)FUN_0048b980();
                if (piVar8 == param_2) {
                  local_14 = operator_new(0xc);
                  local_8 = 0x52;
                  if (local_14 != (int *)0x0) {
                    FUN_0048b970();
                    FUN_0045fec0();
                    local_434 = (int *)0x7d;
                    local_438 = (int *)0x7223e3;
                    FUN_0047de00();
                  }
                  goto LAB_007223e7;
                }
              }
            }
            else {
              if (iVar13 == 2) {
                piVar9 = (int *)FUN_00513f90();
                if (piVar9 != piVar8) {
                  local_14 = operator_new(0xc);
                  local_8 = 0x53;
                  if (local_14 != (int *)0x0) {
                    FUN_0048b970();
                    FUN_0045fec0();
                    local_434 = (int *)0x7c;
                    local_438 = (int *)0x7222e6;
                    FUN_0047de00();
                  }
                  local_8 = 0xffffffff;
                  FUN_00565bc0();
                }
                piVar9 = (int *)FUN_0048b980();
                if (piVar9 == piVar8) goto LAB_007223f7;
                local_14 = operator_new(0xc);
                local_8 = 0x54;
                if (local_14 != (int *)0x0) {
                  FUN_0048b970();
                  FUN_0045fec0();
                  local_434 = (int *)0x7d;
                  local_438 = (int *)0x722341;
                  FUN_0047de00();
                }
              }
              else {
                piVar8 = (int *)FUN_0048b980();
                if (piVar8 == param_2) {
                  FUN_00513f90();
                  iVar13 = FUN_00458280();
                  if (iVar13 != 0x157) goto LAB_007221f7;
                }
                else {
LAB_007221f7:
                  piVar8 = (int *)FUN_00513f90();
                  if (piVar8 != param_2) {
                    FUN_00496e60();
                    iVar13 = FUN_00465c30();
                    iVar6 = FUN_00513f90();
                    if (iVar13 != iVar6) goto LAB_007223f7;
                  }
                }
                local_14 = operator_new(0xc);
                local_8 = 0x55;
                if (local_14 != (void *)0x0) {
                  FUN_0048b970();
                  FUN_0045fec0();
                  local_434 = (int *)0x7c;
                  local_438 = (int *)0x72225b;
                  FUN_0047de00();
                }
                local_8 = 0xffffffff;
                FUN_00565bc0();
                local_14 = operator_new(0xc);
                local_8 = 0x56;
                if (local_14 != (int *)0x0) {
                  FUN_0048b970();
                  FUN_0045fec0();
                  local_434 = (int *)0x7d;
                  local_438 = (int *)0x7222a4;
                  FUN_0047de00();
                }
              }
LAB_007223e7:
              local_8 = 0xffffffff;
              FUN_00565bc0();
            }
          }
        }
LAB_007223f7:
        FUN_005162a0();
        cVar3 = FUN_005162c0();
      }
      break;
    case 0x1e:
      local_14 = operator_new(0xc);
      local_8 = 0x57;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        local_434 = (int *)0x3;
        local_438 = (int *)0x72245f;
        FUN_0047ea00();
        local_434 = (int *)0x7c;
        local_438 = (int *)0x722469;
        FUN_0047de00();
      }
      goto LAB_00725ef6;
    case 0x1f:
      local_14 = operator_new(0xc);
      local_8 = 0x3b;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_00465bd0();
        FUN_0044df10();
        local_434 = (int *)0x72159d;
        FUN_0071ce40();
      }
      goto LAB_00725e9b;
    case 0x20:
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_00428460();
      if ((iVar13 != 0) && (iVar13 != 0xc)) {
        local_14 = operator_new(0xc);
        local_8 = 0x28;
        if (local_14 != (int *)0x0) {
          FUN_00496e60();
          FUN_00477fc0();
          FUN_0050b500();
          FUN_0045fec0();
          local_434 = (int *)0x720368;
          FUN_0071ca90();
        }
        local_8 = 0xffffffff;
        FUN_00462830();
        FUN_00565b30();
      }
      break;
    case 0x21:
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0070a360();
      if (iVar13 != 0) {
        FUN_0054ecd0();
        iVar13 = FUN_00465c30();
        if (iVar13 != 0) {
          local_14 = operator_new(0xc);
          local_8 = 0x29;
          if (local_14 != (int *)0x0) {
            FUN_00496e60();
            local_434 = (int *)0x720404;
            FUN_0070a300();
            FUN_0045fec0();
            local_434 = (int *)0x167;
            local_438 = (int *)0x720419;
            FUN_0071e2f0();
          }
          goto LAB_00725ef6;
        }
      }
      break;
    case 0x22:
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0070a360();
      if (iVar13 != 0) {
        FUN_0054ecd0();
        iVar13 = FUN_00465c30();
        if (iVar13 != 0) {
          local_14 = operator_new(0xc);
          local_8 = 0x2a;
          if (local_14 != (int *)0x0) {
            FUN_00496e60();
            local_434 = (int *)0x720493;
            FUN_0070a300();
            FUN_0045fec0();
            local_434 = (int *)0x168;
            local_438 = (int *)0x7204a8;
            FUN_0071e2f0();
          }
          goto LAB_00725ef6;
        }
      }
      break;
    case 0x23:
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0071eb50();
      if (iVar13 != 0) {
        FUN_0071eb70();
        iVar13 = FUN_00465c30();
        if (iVar13 != 0) {
          local_14 = operator_new(0xc);
          local_8 = 0x2b;
          if (local_14 != (int *)0x0) {
            FUN_0070a4c0();
            FUN_00496e60();
            local_434 = (int *)0x720528;
            FUN_0070a300();
            FUN_0045fec0();
            local_434 = (int *)0x1be;
            local_438 = (int *)0x72053d;
            FUN_0071e2f0();
          }
          goto LAB_00725e9b;
        }
      }
      break;
    case 0x24:
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0071eb50();
      if (iVar13 != 0) {
        FUN_0071eb70();
        iVar13 = FUN_00465c30();
        if (iVar13 != 0) {
          local_14 = operator_new(0xc);
          local_8 = 0x2c;
          if (local_14 != (int *)0x0) {
            FUN_0070a4c0();
            FUN_00496e60();
            local_434 = (int *)0x7205bd;
            FUN_0070a300();
            FUN_0045fec0();
            local_434 = (int *)0x1bf;
            local_438 = (int *)0x7205d2;
            FUN_0071e2f0();
          }
          goto LAB_00725e9b;
        }
      }
      break;
    case 0x25:
      FUN_00496e60();
      FUN_00477fc0();
      iVar13 = FUN_0070a550();
      if (iVar13 != 0) {
        local_14 = (int *)FUN_00700a50();
        iVar13 = *local_14;
        FUN_0044df10();
        local_18 = (undefined4 *)&stack0xfffffbd4;
        local_434 = (int *)0x72169c;
        FUN_00446d10();
        local_434 = (int *)0x7216a9;
        (**(code **)(iVar13 + 0x28))();
        local_434 = (int *)0x7216b0;
        cVar3 = FUN_0054ef70();
        if (cVar3 == '\0') {
          local_434 = (int *)0x7216bb;
          local_43c = (int *)FUN_0044df10();
          local_14 = (int *)&local_438;
          local_440 = (int *)0x7216c9;
          FUN_00446d10();
          local_43c = (int *)0x7216d4;
          FUN_00700a50();
          local_43c = (int *)0x7216db;
          FUN_004739f0();
        }
        local_434 = (int *)0x7216e6;
        local_14 = (int *)FUN_00498640();
        iVar13 = *local_14;
        local_434 = (int *)0x7216f2;
        local_43c = (int *)FUN_0044df10();
        local_18 = &local_438;
        local_440 = (int *)0x721700;
        FUN_00446d10();
        local_43c = local_10c;
        local_440 = (int *)0x72170d;
        (**(code **)(iVar13 + 0x28))();
        cVar3 = FUN_0054ef70();
        if (cVar3 == '\0') {
          FUN_0044df10();
          local_14 = (int *)&stack0xfffffbd4;
          local_434 = (int *)0x72172d;
          FUN_00446d10();
          FUN_00498640();
          FUN_004739f0();
        }
        FUN_0071c450();
      }
      break;
    case 0x26:
      local_14 = operator_new(0xc);
      local_8 = 0x58;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        local_434 = (int *)0x72249c;
        local_434 = (int *)FUN_00458280();
        local_18 = &local_43c;
        local_440 = (int *)&DAT_0088f28c;
        piStack_444 = (int *)0x7224af;
        FUN_0045f730();
        local_18 = &piStack_444;
        piStack_448 = (int *)&DAT_0088f28c;
        piStack_44c = (int *)0x7224c1;
        FUN_0045f730();
        local_18 = &piStack_44c;
        puStack_450 = (undefined4 *)&DAT_0088f28c;
        iStack_454 = 0x7224d3;
        FUN_0045f730();
        puStack_450 = &DAT_0088f2a4;
        iStack_454 = 0xcf;
        puStack_458 = (undefined1 *)0x7224e4;
        FUN_00464b70();
      }
      local_8 = 0xffffffff;
      FUN_00565c30();
      break;
    case 0x27:
      FUN_00496e60();
      FUN_006a8ec0();
      FUN_00690810();
      break;
    case 0x28:
      local_130 = CONCAT31(local_130._1_3_,1);
      fVar16 = (float10)FUN_0070a4b0();
      if ((float10)_DAT_007e3380 < fVar16) {
        local_130 = local_130 & 0xffffff00;
      }
      local_134 = local_134 & 0xffffff00;
      iVar13 = FUN_0070a4c0();
      if (0 < iVar13) {
        local_134 = CONCAT31(local_134._1_3_,1);
      }
      local_434 = (int *)0x722618;
      local_434 = (int *)FUN_00496e60();
      local_438 = (int *)0x722621;
      FUN_00461270();
      break;
    case 0x29:
      FUN_00496e60();
      FUN_00465c30();
      FUN_00458280();
LAB_0072253b:
      FUN_00458280();
      local_434 = (int *)0x72254c;
      FUN_005b0ad0();
      break;
    case 0x2a:
      FUN_0070a4b0();
      FUN_0070a4c0();
      FUN_0070a4f0();
      local_434 = (int *)0x7225c1;
      FUN_00430360();
      break;
    case 0x2b:
      piVar8 = operator_new(0xc);
      local_8 = 2;
      local_14 = piVar8;
      if (piVar8 != (int *)0x0) {
        FUN_0072a980();
        *piVar8 = (int)&PTR_FUN_007ea05c;
        iVar6 = piVar8[1];
        *(int *)(iVar6 + 0xe) = param_2[1];
        *(short *)(iVar6 + 0x12) = (short)param_2[2];
        uVar5 = 0xffffffff;
        pcVar10 = (char *)(iVar13 + 0x28);
        do {
          pcVar15 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar15 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar15;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar15 + -uVar5;
        pcVar15 = (char *)(piVar8[1] + 0x14);
        for (uVar14 = uVar5 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar15 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar15 = pcVar15 + 1;
        }
      }
      local_8 = 0xffffffff;
      FUN_00565bc0();
      break;
    case 0x2c:
      FUN_0070a4b0();
      __ftol();
      FUN_0044df10();
      local_14 = (int *)&stack0xfffffbd4;
      local_434 = (int *)0x722578;
      FUN_0045f730();
      local_434 = (int *)0x1;
      local_438 = (int *)0x722586;
      FUN_0064e370();
      break;
    case 0x2d:
      local_fe = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_100;
      local_100 = 9;
      local_438 = (int *)0x71ecb4;
      FUN_00449290();
      local_434 = (int *)0x0;
      local_438 = (int *)0x71ecbe;
      FUN_0045c660();
      break;
    case 0x2e:
      local_ee = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_f0;
      local_f0 = 9;
      local_438 = (int *)0x71eceb;
      FUN_00449290();
      local_434 = (int *)0x1;
      local_438 = (int *)0x71ecf5;
      FUN_0045c660();
      break;
    case 0x2f:
      local_de = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_e0;
      local_e0 = 9;
      local_438 = (int *)0x71ed22;
      FUN_00449290();
      local_434 = (int *)0x2;
      local_438 = (int *)0x71ed2c;
      FUN_0045c660();
      break;
    case 0x30:
      local_ce = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_d0;
      local_d0 = 9;
      local_438 = (int *)0x71ed59;
      FUN_00449290();
      local_434 = (int *)0x3;
      local_438 = (int *)0x71ed63;
      FUN_0045c660();
      break;
    case 0x31:
      local_be = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_c0;
      local_c0 = 9;
      local_438 = (int *)0x71ed90;
      FUN_00449290();
      local_434 = (int *)0x4;
      local_438 = (int *)0x71ed9a;
      FUN_0045c660();
      break;
    case 0x32:
      local_b6 = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_b8;
      local_b8 = 9;
      local_438 = (int *)0x71edc7;
      FUN_00449290();
      local_434 = (int *)0x5;
      local_438 = (int *)0x71edd1;
      FUN_0045c660();
      break;
    case 0x33:
      local_d6 = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_d8;
      local_d8 = 9;
      local_438 = (int *)0x71edfe;
      FUN_00449290();
      local_434 = (int *)0x6;
      local_438 = (int *)0x71ee08;
      FUN_0045c660();
      break;
    case 0x34:
      local_e6 = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_e8;
      local_e8 = 9;
      local_438 = (int *)0x71ee35;
      FUN_00449290();
      local_434 = (int *)&DAT_00000007;
      local_438 = (int *)0x71ee3f;
      FUN_0045c660();
      break;
    case 0x35:
      local_ae = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_b0;
      local_b0 = 9;
      local_438 = (int *)0x71ee6c;
      FUN_00449290();
      local_434 = (int *)&DAT_00000008;
      local_438 = (int *)0x71ee76;
      FUN_0045c660();
      break;
    case 0x36:
      local_a6 = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd0;
      local_434 = (int *)&local_a8;
      local_a8 = 9;
      local_438 = (int *)0x71eea3;
      FUN_00449290();
      local_434 = (int *)&DAT_00000009;
      local_438 = (int *)0x71eead;
      FUN_0045c660();
      break;
    case 0x37:
      local_c6 = *(undefined4 *)(iVar13 + 0xc);
      local_14 = (int *)&stack0xfffffbd4;
      local_c8 = 9;
      local_434 = (int *)0x71eed8;
      FUN_00446d10();
      FUN_0070a4b0();
      __ftol();
      local_434 = (int *)0x71eeed;
      FUN_0045c6f0();
      break;
    case 0x38:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        local_14 = operator_new(0xc);
        local_8 = 0x59;
        if (local_14 != (int *)0x0) {
          FUN_0070a4b0();
          FUN_0045fec0();
          local_434 = (int *)0x72267d;
          FUN_0071c480();
        }
        goto LAB_00725e9b;
      }
      break;
    case 0x39:
      local_14 = operator_new(0xc);
      local_8 = 0x5c;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x149;
        local_438 = (int *)0x722795;
        FUN_0071d8c0();
      }
      goto LAB_00725e9b;
    case 0x3a:
      local_14 = operator_new(0xc);
      local_8 = 0x5d;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x7227d8;
        FUN_0071dd10();
      }
      goto LAB_00725e9b;
    case 0x3b:
      local_14 = operator_new(0xc);
      local_8 = 0x7a;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x72304d;
        FUN_0071d970();
      }
      goto LAB_00725e9b;
    case 0x3c:
      local_14 = operator_new(0xc);
      local_8 = 0x7b;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
LAB_00723094:
        local_434 = (int *)0x723099;
        FUN_00477fc0();
        FUN_0045fec0();
        local_434 = (int *)0x14d;
        local_438 = (int *)0x7230af;
        FUN_0071da10();
      }
      goto LAB_00725e9b;
    case 0x3d:
      FUN_00496e60();
      FUN_00477fc0();
      iVar13 = FUN_00428460();
      if ((iVar13 != 0) && (iVar13 != 0xc)) {
        local_18 = operator_new(0xc);
        local_8 = 0x7c;
        if (local_18 != (undefined4 *)0x0) {
          FUN_0070a4b0();
          local_14 = (int *)FUN_00516890();
          FUN_0071eb40();
          FUN_00496e60();
          goto LAB_00723094;
        }
        goto LAB_00725e9b;
      }
      break;
    case 0x3e:
      local_14 = operator_new(0xc);
      local_8 = 0x7e;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        local_434 = (int *)0x7231e6;
        FUN_0070a300();
        FUN_0045fec0();
        local_434 = (int *)0x14e;
        local_438 = (int *)0x7231fc;
        FUN_0071db90();
      }
      goto LAB_00725e9b;
    case 0x40:
      iVar13 = FUN_0070a520();
      if (iVar13 != 0) {
        FUN_00496e60();
      }
      local_14 = operator_new(0xc);
      local_8 = 0x80;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        local_434 = (int *)0x7232ad;
        FUN_0071e120();
      }
      goto LAB_00725e9b;
    case 0x42:
      local_14 = operator_new(0xc);
      local_8 = 0x81;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        __ftol();
LAB_007232dc:
        FUN_0045fec0();
        local_434 = (int *)0x7232f2;
        FUN_0071e250();
      }
      goto LAB_00725e9b;
    case 0x43:
      iVar13 = FUN_00496e60();
      if (iVar13 != -1) {
        local_14 = operator_new(0xc);
        local_8 = 0x82;
        if (local_14 != (int *)0x0) {
          FUN_00496e60();
          goto LAB_007232dc;
        }
        goto LAB_00725e9b;
      }
      break;
    case 0x44:
      local_14 = operator_new(0xc);
      local_8 = 0x83;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        FUN_0071d630();
      }
      goto LAB_00725e9b;
    case 0x45:
      local_14 = operator_new(0xc);
      local_8 = 0x84;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x159;
        local_438 = (int *)0x7233b5;
        FUN_0071d810();
      }
      goto LAB_00725e9b;
    case 0x46:
      local_14 = operator_new(0xc);
      local_8 = 0x85;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_00477fc0();
        FUN_0045fec0();
        local_434 = (int *)0x723403;
        FUN_0071dfc0();
      }
      goto LAB_00725e9b;
    case 0x47:
      local_14 = operator_new(0xc);
      local_8 = 0x86;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_00477fc0();
        FUN_0045fec0();
        local_434 = (int *)0x723451;
        FUN_0071e070();
      }
      goto LAB_00725e9b;
    case 0x48:
      local_14 = operator_new(0xc);
      local_8 = 0x7d;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        local_434 = (int *)0x723184;
        FUN_00477fc0();
        FUN_0045fec0();
        local_434 = (int *)0x14f;
        local_438 = (int *)0x72319a;
        FUN_0071dad0();
      }
      goto LAB_00725e9b;
    case 0x49:
      local_14 = operator_new(0xc);
      local_8 = 0x7f;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        local_434 = (int *)0x723248;
        FUN_0070a300();
        FUN_0045fec0();
        local_434 = (int *)0x150;
        local_438 = (int *)0x72325e;
        FUN_0071dc50();
      }
      goto LAB_00725e9b;
    case 0x4f:
      FUN_00428eb0();
      local_434 = (int *)0x0;
      local_438 = (int *)0x0;
      local_43c = (int *)0x71feb6;
      FUN_0070a4b0();
      local_43c = (int *)0x71febb;
      local_43c = (int *)__ftol();
      local_440 = (int *)0x71fec1;
      local_43c = (int *)FUN_004e9370();
      local_440 = (int *)0x71fecc;
      local_440 = (int *)FUN_00496e60();
      piStack_444 = (int *)0x71fed2;
      local_440 = (int *)FUN_004e9370();
      piStack_44c = &local_34;
      local_14 = (int *)&piStack_448;
      puStack_450 = (undefined4 *)0x71fee7;
      FUN_00449290();
      piStack_44c = (int *)0x71feef;
      FUN_0045d580();
      uVar5 = FUN_0070a4c0();
      if ((uVar5 & 1) == 0) {
        local_14 = operator_new(0xc);
        local_8 = 0x1c;
      }
      else {
        local_14 = operator_new(0xc);
        local_8 = 0x1b;
      }
      if (local_14 != (void *)0x0) {
        local_434 = (int *)0x142;
        local_438 = (int *)0x71ff47;
        FUN_0071cc10();
      }
      local_8 = 0xffffffff;
      FUN_00565cc0();
      uVar5 = FUN_0070a4c0();
      if ((uVar5 & 2) == 0) {
        local_14 = operator_new(0xc);
        local_8 = 0x1e;
      }
      else {
        local_14 = operator_new(0xc);
        local_8 = 0x1d;
      }
      if (local_14 != (void *)0x0) {
        local_434 = (int *)0x143;
        local_438 = (int *)0x71ffb2;
        FUN_0071cc10();
      }
      local_8 = 0xffffffff;
      FUN_00565cc0();
      uVar5 = FUN_0070a4c0();
      if ((uVar5 & 4) == 0) {
        local_14 = operator_new(0xc);
        local_8 = 0x20;
      }
      else {
        local_14 = operator_new(0xc);
        local_8 = 0x1f;
      }
      if (local_14 != (void *)0x0) {
        local_434 = (int *)0x145;
        local_438 = (int *)0x72001a;
        FUN_0071cc10();
      }
      local_8 = 0xffffffff;
      FUN_00565cc0();
      uVar5 = FUN_0070a4c0();
      if ((uVar5 & 8) == 0) {
        local_14 = operator_new(0xc);
        local_8 = 0x22;
      }
      else {
        local_14 = operator_new(0xc);
        local_8 = 0x21;
      }
      if (local_14 != (void *)0x0) {
        local_434 = (int *)0x144;
        local_438 = (int *)0x720082;
        FUN_0071cc10();
      }
      local_8 = 0xffffffff;
      FUN_00565cc0();
      uVar5 = FUN_0070a4c0();
      if ((uVar5 & 0x10) == 0) {
        local_14 = operator_new(0xc);
        local_8 = 0x24;
      }
      else {
        local_14 = operator_new(0xc);
        local_8 = 0x23;
      }
      if (local_14 == (int *)0x0) {
        local_8 = 0xffffffff;
        FUN_00565cc0();
      }
      else {
        local_434 = (int *)0x146;
        local_438 = (int *)0x7200ea;
        FUN_0071cc10();
        local_8 = 0xffffffff;
        FUN_00565cc0();
      }
      break;
    case 0x50:
      local_14 = operator_new(0xc);
      local_8 = 0x6e;
      if (local_14 != (int *)0x0) {
        FUN_0070a4d0();
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x15d;
        local_438 = (int *)0x722c90;
        FUN_0071de60();
      }
      goto LAB_00725e9b;
    case 0x51:
      local_14 = operator_new(0xc);
      local_8 = 0x6f;
      if (local_14 != (int *)0x0) {
        FUN_0070a4d0();
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x15e;
        local_438 = (int *)0x722cdb;
        FUN_0071de60();
      }
      goto LAB_00725e9b;
    case 0x52:
      local_14 = operator_new(0xc);
      local_8 = 0x70;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x15f;
        local_438 = (int *)0x722d20;
        FUN_0071de60();
      }
      goto LAB_00725e9b;
    case 0x53:
      local_14 = operator_new(0xc);
      local_8 = 0x71;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x722d63;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0x54:
      local_14 = operator_new(0xc);
      local_8 = 0x72;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x160;
        local_438 = (int *)0x722da8;
        FUN_0071de60();
      }
      goto LAB_00725e9b;
    case 0x55:
      local_14 = operator_new(0xc);
      local_8 = 0x73;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x161;
        local_438 = (int *)0x722ded;
        FUN_0071de60();
      }
      goto LAB_00725e9b;
    case 0x56:
      local_14 = operator_new(0xc);
      local_8 = 0x79;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x163;
        local_438 = (int *)0x72300d;
        FUN_0071df10();
      }
      goto LAB_00725e9b;
    case 0x57:
      local_14 = operator_new(0xc);
      local_8 = 0x5e;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
LAB_0072280a:
        FUN_0045fec0();
        local_434 = (int *)0x116;
        local_438 = (int *)0x72281f;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x58:
      local_14 = operator_new(0xc);
      local_8 = 0x5f;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x59:
      local_14 = operator_new(0xc);
      local_8 = 0x60;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x5a:
      local_14 = operator_new(0xc);
      local_8 = 0x62;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x5b:
      local_14 = operator_new(0xc);
      local_8 = 99;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x5c:
      local_14 = operator_new(0xc);
      local_8 = 0x61;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x5d:
      local_14 = operator_new(0xc);
      local_8 = 100;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x5e:
      local_14 = operator_new(0xc);
      local_8 = 0x65;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x5f:
      local_14 = operator_new(0xc);
      local_8 = 0x66;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x60:
      local_14 = operator_new(0xc);
      local_8 = 0x67;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        goto LAB_0072280a;
      }
      goto LAB_00725ef6;
    case 0x61:
      local_14 = operator_new(0xc);
      local_8 = 0x74;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x164;
        local_438 = (int *)0x722e32;
        FUN_0071de60();
      }
      goto LAB_00725e9b;
    case 0x62:
      local_124 = local_124 & 0xffffff00;
      fVar16 = (float10)FUN_0070a4b0();
      if ((float10)_DAT_007e3380 < fVar16) {
        local_124 = CONCAT31(local_124._1_3_,1);
      }
      local_14 = operator_new(0xc);
      local_8 = 0x75;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x165;
        local_438 = (int *)0x722e9b;
        FUN_0071d6c0();
      }
      goto LAB_00725e9b;
    case 100:
      local_14 = operator_new(0xc);
      local_8 = 0x78;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x722fb9;
        FUN_0071d770();
      }
      goto LAB_00725e9b;
    case 0x65:
      FUN_00496e60();
      FUN_00465c30();
      local_14 = operator_new(0xc);
      local_8 = 0x76;
      if (local_14 != (int *)0x0) {
        local_18 = (undefined4 *)&stack0xfffffbd4;
        local_434 = (int *)0x722edf;
        FUN_0045f730();
        local_434 = (int *)0x722ee8;
        local_434 = (int *)FUN_00458280();
        local_438 = (int *)0x722ef1;
        local_438 = (int *)FUN_00458280();
        local_43c = (int *)0x2;
        local_440 = (int *)0x10;
        piStack_444 = (int *)0x722efd;
        piStack_444 = (int *)FUN_0045fec0();
        piStack_448 = (int *)0x89;
        piStack_44c = (int *)0x722f0a;
        FUN_00464820();
      }
      goto LAB_00725e9b;
    case 0x66:
      FUN_00496e60();
      FUN_00465c30();
      local_14 = operator_new(0xc);
      local_8 = 0x77;
      if (local_14 != (int *)0x0) {
        local_18 = (undefined4 *)&stack0xfffffbd4;
        local_434 = (int *)0x722f4e;
        FUN_0045f730();
        local_434 = (int *)0x722f57;
        local_434 = (int *)FUN_00458280();
        local_438 = (int *)0x722f60;
        local_438 = (int *)FUN_00458280();
        local_43c = (int *)0x2;
        local_440 = (int *)0x7;
        piStack_444 = (int *)0x722f6c;
        piStack_444 = (int *)FUN_0045fec0();
        piStack_448 = (int *)0x89;
        piStack_44c = (int *)0x722f79;
        FUN_00464820();
      }
      goto LAB_00725e9b;
    case 0x67:
      FUN_0070a4d0();
      FUN_00465c30();
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      FUN_0070a580();
      local_14 = operator_new(0xc);
      local_8 = 0x11;
      if (local_14 != (int *)0x0) {
        FUN_0045f730();
        local_434 = (int *)0x0;
        local_438 = (int *)0x71f6d0;
        local_438 = (int *)FUN_00447250();
        local_43c = (int *)0x71f6d8;
        local_43c = (int *)FUN_0045fec0();
        local_440 = (int *)0xa8;
        piStack_444 = (int *)0x71f6e5;
        FUN_00521370();
      }
      goto LAB_00725ef6;
    case 0x68:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      FUN_0070a580();
      local_14 = operator_new(0xc);
      local_8 = 0x10;
      if (local_14 != (int *)0x0) {
        FUN_0045f730();
        local_434 = (int *)0x1;
        local_438 = (int *)0x71f63b;
        local_438 = (int *)FUN_00447250();
        local_43c = (int *)0x71f643;
        FUN_00494b80();
        local_43c = (int *)0x71f64a;
        local_43c = (int *)FUN_0045fec0();
        local_440 = (int *)0x35;
        piStack_444 = (int *)0x71f654;
        FUN_00521370();
      }
      goto LAB_00725ef6;
    case 0x69:
      goto LAB_00723a65;
    case 0x6a:
      goto LAB_00723a65;
    case 0x6b:
      goto LAB_00723a65;
    case 0x6c:
      goto LAB_00723a65;
    case 0x6d:
      goto LAB_00723a65;
    case 0x6e:
      goto LAB_00723a65;
    case 0x6f:
      goto LAB_00723a65;
    case 0x70:
      goto LAB_00723a65;
    case 0x71:
      goto LAB_00723a65;
    case 0x72:
      goto LAB_00723a65;
    case 0x73:
      goto LAB_00723a65;
    case 0x74:
      goto LAB_00723a65;
    case 0x75:
      goto LAB_00723a65;
    case 0x76:
      goto LAB_00723a65;
    case 0x77:
      goto LAB_00723a65;
    case 0x78:
      goto LAB_00723a65;
    case 0x79:
      goto LAB_00723a65;
    case 0x7a:
      goto LAB_00723a65;
    case 0x7b:
      goto LAB_00723a65;
    case 0x7c:
      goto LAB_00723a65;
    case 0x7d:
      goto LAB_00723a65;
    case 0x7e:
      goto LAB_00723a65;
    case 0x7f:
      goto LAB_00723a65;
    case 0x80:
      goto LAB_00723a65;
    case 0x81:
      goto LAB_00723a65;
    case 0x82:
      goto LAB_00723a65;
    case 0x83:
      goto LAB_00723a65;
    case 0x84:
      goto LAB_00723a65;
    case 0x85:
      goto LAB_00723a65;
    case 0x86:
      goto LAB_00723a65;
    case 0x87:
      goto LAB_00723a65;
    case 0x88:
      goto LAB_00723a65;
    case 0x89:
      goto LAB_00723a65;
    case 0x8a:
      goto LAB_00723a65;
    case 0x8b:
      goto LAB_00723a65;
    case 0x8c:
LAB_00723a65:
      local_434 = (int *)0x723a76;
      FUN_00712a40();
      break;
    case 0x8d:
      local_14 = operator_new(0xc);
      local_8 = 0x91;
      if (local_14 != (int *)0x0) {
        FUN_0070a530();
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        local_434 = (int *)0x723c36;
        local_434 = (int *)FUN_0045fec0();
        local_438 = (int *)0x16d;
        local_43c = (int *)0x723c43;
        FUN_0071d190();
      }
      goto LAB_00725ef6;
    case 0x8e:
      local_14 = operator_new(0xc);
      local_8 = 0x92;
      if (local_14 != (int *)0x0) {
        FUN_0070a530();
LAB_00723c70:
        FUN_00496e60();
        local_434 = (int *)0x723c80;
        local_434 = (int *)FUN_0045fec0();
        local_438 = (int *)0x16e;
        local_43c = (int *)0x723c8d;
        FUN_0071d240();
      }
      goto LAB_00725ef6;
    case 0x8f:
      local_14 = operator_new(0xc);
      local_8 = 0x93;
      if (local_14 != (int *)0x0) {
        FUN_0070a530();
        goto LAB_00723c70;
      }
      goto LAB_00725ef6;
    case 0x90:
      local_14 = operator_new(0xc);
      local_8 = 0x94;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_00725e9b;
    case 0x91:
      local_14 = operator_new(0xc);
      local_8 = 0xe0;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x7256ef;
        FUN_0071e250();
      }
      goto LAB_00725ef6;
    case 0x92:
      local_14 = operator_new(0xc);
      local_8 = 0xe1;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x1a8;
        local_438 = (int *)0x72573a;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x93:
      local_14 = operator_new(0xc);
      local_8 = 0xe2;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x1a9;
        local_438 = (int *)0x725785;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x94:
      local_14 = operator_new(0xc);
      local_8 = 0x95;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x1a7;
        local_438 = (int *)0x723d3a;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x95:
      local_14 = operator_new(0xc);
      local_8 = 0x96;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x723d7a;
        FUN_0071d2f0();
      }
      goto LAB_00725e9b;
    case 0x96:
      local_14 = operator_new(0xc);
      local_8 = 0x9a;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x723e87;
        FUN_0071d2f0();
      }
      goto LAB_00725e9b;
    case 0x97:
      local_14 = operator_new(0xc);
      local_8 = 0x98;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_0045fec0();
        local_434 = (int *)0x723dfe;
        FUN_0071e250();
      }
      goto LAB_00725e9b;
    case 0x98:
      local_14 = operator_new(0xc);
      local_8 = 0x99;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x723e47;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0x99:
      local_14 = operator_new(0xc);
      local_8 = 0x97;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_00725e9b;
    case 0x9a:
      local_14 = operator_new(0xc);
      local_8 = 0x9b;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x723eca;
        FUN_0071d390();
      }
      goto LAB_00725e9b;
    case 0x9b:
      local_14 = operator_new(0xc);
      local_8 = 0x9c;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x173;
        local_438 = (int *)0x723f15;
        FUN_0071d430();
      }
      goto LAB_00725ef6;
    case 0x9c:
      local_14 = operator_new(0xc);
      local_8 = 0x9d;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x174;
        local_438 = (int *)0x723f60;
        FUN_0071d430();
      }
      goto LAB_00725ef6;
    case 0x9d:
      local_14 = operator_new(0xc);
      local_8 = 0x9e;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x175;
        local_438 = (int *)0x723fab;
        FUN_0071d430();
      }
      goto LAB_00725ef6;
    case 0x9e:
      local_14 = operator_new(0xc);
      local_8 = 0x9f;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x723fee;
        FUN_0071d4e0();
      }
      goto LAB_00725ef6;
    case 0x9f:
      local_14 = operator_new(0xc);
      local_8 = 0xa0;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x17b;
        local_438 = (int *)0x724039;
        FUN_0071d580();
      }
      goto LAB_00725ef6;
    case 0xa0:
      local_14 = operator_new(0xc);
      local_8 = 0xa1;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x17c;
        local_438 = (int *)0x724084;
        FUN_0071d580();
      }
      goto LAB_00725ef6;
    case 0xa1:
      iVar13 = 0;
      goto LAB_00725b8b;
    case 0xa2:
      iVar13 = 1;
      goto LAB_00725b8b;
    case 0xa3:
      iVar13 = 2;
      goto LAB_00725b8b;
    case 0xa4:
      iVar13 = 3;
LAB_00725b8b:
      fVar16 = (float10)FUN_0070a4b0();
      local_24 = (int *)(float)-fVar16;
      if (iVar13 == 3) {
        iVar13 = FUN_0070a500();
        if (iVar13 == 1) {
          fVar16 = (float10)FUN_0070a480();
          fVar16 = fVar16 + (float10)(float)local_24;
        }
        else {
          if (iVar13 != 2) goto LAB_00725ebe;
          fVar16 = (float10)FUN_0054ed30();
        }
        local_24 = (int *)(float)fVar16;
      }
LAB_00725ebe:
      local_14 = operator_new(0xc);
      local_8 = 0xf0;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        local_434 = (int *)0x182;
        local_438 = (int *)0x725ef2;
        FUN_0071cfa0();
      }
      goto LAB_00725ef6;
    case 0xa5:
      puVar11 = operator_new(0xc);
      local_8 = 6;
      local_18 = puVar11;
      if (puVar11 != (undefined4 *)0x0) {
        local_308 = *(float *)(iVar13 + 8);
        uVar12 = *(undefined4 *)(iVar13 + 0x18);
        FUN_0072a7a0();
        local_8 = CONCAT31(local_8._1_3_,7);
        *puVar11 = &PTR_FUN_007e9d3c;
        iVar13 = FUN_00521210();
        local_14 = (int *)-local_308;
        *(undefined4 *)(iVar13 + 0xe) = uVar12;
        iVar13 = FUN_0072a830();
        *(int **)(iVar13 + 0x12) = local_14;
      }
LAB_0071f3a6:
      local_8 = 0xffffffff;
      FUN_00565ca0();
      break;
    case 0xa6:
      local_14 = operator_new(0xc);
      local_8 = 8;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x16a;
        local_438 = (int *)0x71f403;
        FUN_0071c520();
      }
      goto LAB_00725e9b;
    case 0xa7:
      local_14 = operator_new(0xc);
      local_8 = 0xd1;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x725288;
        FUN_0071d0f0();
      }
      goto LAB_00725ef6;
    case 0xa8:
      local_14 = operator_new(0xc);
      local_8 = 0xd3;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        FUN_0071e1c0();
      }
      goto LAB_00725ef6;
    case 0xa9:
      goto LAB_00725be0;
    case 0xaa:
      goto LAB_00725be0;
    case 0xab:
      goto LAB_00725be0;
    case 0xac:
      goto LAB_00725be0;
    case 0xad:
      goto LAB_00725be0;
    case 0xae:
      goto LAB_00725be0;
    case 0xaf:
      goto LAB_00725be0;
    case 0xb0:
      goto LAB_00725be0;
    case 0xb1:
      goto LAB_00725be0;
    case 0xb2:
      goto LAB_00725be0;
    case 0xb3:
      goto LAB_00725be0;
    case 0xb4:
      goto LAB_00725be0;
    case 0xb5:
      goto LAB_00725be0;
    case 0xb6:
      goto LAB_00725be0;
    case 0xb7:
      goto LAB_00725be0;
    case 0xb8:
      goto LAB_00725be0;
    case 0xba:
      goto LAB_00725be0;
    case 0xbb:
      goto LAB_00725be0;
    case 0xbc:
      goto LAB_00725be0;
    case 0xbd:
      goto LAB_00725be0;
    case 0xbe:
      goto LAB_00725be0;
    case 0xbf:
      goto LAB_00725be0;
    case 0xc0:
      goto LAB_00725be0;
    case 0xc1:
      goto LAB_00725be0;
    case 0xc2:
      goto LAB_00725be0;
    case 0xc3:
      goto LAB_00725be0;
    case 0xc4:
      goto LAB_00725be0;
    case 0xc5:
      goto LAB_00725be0;
    case 0xc6:
      goto LAB_00725be0;
    case 199:
      goto LAB_00725be0;
    case 200:
      goto LAB_00725be0;
    case 0xc9:
      goto LAB_00725be0;
    case 0xca:
      goto LAB_00725be0;
    case 0xcb:
      goto LAB_00725be0;
    case 0xcc:
      goto LAB_00725be0;
    case 0xcd:
      goto LAB_00725be0;
    case 0xce:
      goto LAB_00725be0;
    case 0xcf:
      goto LAB_00725be0;
    case 0xd0:
      goto LAB_00725be0;
    case 0xd1:
      goto LAB_00725be0;
    case 0xd2:
      goto LAB_00725be0;
    case 0xd3:
      goto LAB_00725be0;
    case 0xd4:
      goto LAB_00725be0;
    case 0xd5:
      goto LAB_00725be0;
    case 0xd6:
      goto LAB_00725be0;
    case 0xd7:
      local_14 = operator_new(0xc);
      local_8 = 0xd2;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x7252c8;
        FUN_00726440();
      }
      goto LAB_00725ef6;
    case 0xd8:
      cVar3 = (**(code **)(*param_2 + 0x1c))();
      if (cVar3 != '\0') {
        if (DAT_00dc1912 == '\0') {
          FUN_00540ab0();
        }
        else {
          piVar8 = operator_new(0xc);
          local_8 = 1;
          local_14 = piVar8;
          if (piVar8 != (int *)0x0) {
            uVar12 = *(undefined4 *)((int)param_2 + 6);
            FUN_0072b280();
            *piVar8 = (int)&PTR_FUN_007eabbc;
            local_434 = (int *)0x71ef53;
            _strncpy((char *)(piVar8[1] + 0xe),(char *)(iVar13 + 0x28),0x3f);
            *(undefined1 *)(piVar8[1] + 0x4d) = 0;
            *(undefined4 *)(piVar8[1] + 0x4e) = uVar12;
          }
          local_8 = 0xffffffff;
          FUN_00565bc0();
        }
      }
      break;
    case 0xd9:
      piVar8 = (int *)FUN_00496e60();
      piVar9 = (int *)0x0;
      local_1c = (int *)FUN_0044c450();
      local_20 = (int *)0x0;
      fVar16 = (float10)FUN_0070a4b0();
      if ((float10)_DAT_007e3380 <= fVar16) {
        FUN_0070a4b0();
        piVar9 = (int *)FUN_00516890();
        local_20 = (int *)FUN_0044c4a0();
      }
      local_24 = (int *)0x1;
      iVar13 = FUN_0070a4c0();
      if (0 < iVar13) {
        local_24 = (int *)FUN_0070a4c0();
      }
      fVar16 = (float10)FUN_0071c420();
      if (fVar16 == (float10)_DAT_007e3380) {
        local_438 = (int *)0x7213e5;
        local_434 = piVar8;
        fVar16 = (float10)FUN_00467290();
      }
      else {
        fVar16 = (float10)FUN_0071c420();
      }
      local_18 = (undefined4 *)(float)fVar16;
      iVar13 = FUN_0070a510();
      if (iVar13 < 1) {
        local_434 = local_1c;
        local_440 = (int *)0x72143a;
        local_43c = piVar8;
        local_438 = piVar9;
        FUN_00466b90();
        local_14 = (int *)FUN_0071eb20();
      }
      else {
        local_43c = (int *)0x721407;
        local_438 = piVar8;
        local_434 = piVar9;
        FUN_00466b90();
        FUN_0070a510();
        local_434 = (int *)FUN_0071eb30();
        local_438 = (int *)0x72141d;
        iVar13 = FUN_0071eb20();
        local_14 = (int *)-iVar13;
      }
      local_438 = (int *)0x721458;
      local_434 = piVar8;
      fVar16 = (float10)FUN_004673a0();
      local_80 = (undefined1 *)(float)fVar16;
      fVar16 = (float10)FUN_0071c330();
      if ((float10)(float)local_80 <= fVar16) {
        FUN_00428eb0();
        if ((int)local_24 < 2) {
          pcVar10 = (char *)FUN_0071c430();
          if (*pcVar10 == '\0') {
            local_440 = (int *)FUN_005bf284();
          }
          else {
            local_440 = (int *)FUN_0071c430();
          }
        }
        else {
          local_440 = (int *)&DAT_0088ebf8;
        }
        local_434 = local_24;
        local_438 = local_20;
        local_43c = local_1c;
        piStack_444 = (int *)0x7214d7;
        piStack_444 = (int *)FUN_0044e1b0();
        puStack_458 = local_154;
        local_14 = &iStack_454;
        uStack_45c = 0x7214ee;
        piStack_44c = piVar8;
        piStack_448 = piVar9;
        FUN_00446d10();
        puStack_458 = (undefined1 *)0x7214f5;
        FUN_0045dde0();
      }
      break;
    case 0xda:
      local_14 = operator_new(0xc);
      local_8 = 0x3a;
      if (local_14 != (int *)0x0) {
        FUN_0070a4d0();
        FUN_0070a4b0();
        FUN_00496e60();
        local_434 = (int *)0x72153b;
        local_434 = (int *)FUN_0045fec0();
        local_438 = (int *)0x15c;
        local_43c = (int *)0x721548;
        FUN_0071ddb0();
      }
      goto LAB_00725e9b;
    case 0xdb:
      local_1c = (int *)0x0;
      cVar3 = FUN_00549790();
      if (cVar3 != '\0') {
        local_1c = (int *)FUN_0070a580();
      }
      FUN_00428eb0();
      FUN_0070a4b0();
      piVar8 = (int *)__ftol();
      local_24 = (int *)0x0;
      iVar13 = FUN_0070a4d0();
      if (0 < iVar13) {
        local_24 = (int *)FUN_0070a4d0();
      }
      iVar13 = FUN_0044c450();
      iVar6 = FUN_0070a4c0();
      if (-1 < iVar6) {
        iVar13 = FUN_0070a4c0();
      }
      local_14 = (int *)((int)&DAT_00d7676a + (int)piVar8 * 0x12);
      iVar6 = (**(code **)(*(int *)((int)&DAT_00d7676a + (int)piVar8 * 0x12) + 4))();
      if (iVar6 <= iVar13) {
        (**(code **)(*local_14 + 4))();
      }
      FUN_0070a4f0();
      local_440 = (int *)local_a0;
      local_14 = (int *)&local_43c;
      piStack_444 = (int *)0x72089e;
      local_434 = piVar8;
      FUN_00449290();
      local_440 = (int *)0x7208a6;
      FUN_0045e580();
      iVar13 = FUN_0070a3a0();
      piVar8 = local_1c;
      if ((((iVar13 != 0) && (local_1c != (int *)0x0)) &&
          ((cVar3 = FUN_0054ed40(), cVar3 == '\0' ||
           (cVar3 = (**(code **)(*piVar8 + 0x28))(), cVar3 != '\0')))) &&
         (((cVar3 = FUN_0048e0c0(), cVar3 == '\0' ||
           (cVar3 = (**(code **)(*piVar8 + 0x2c))(), cVar3 != '\0')) &&
          ((cVar3 = FUN_0054ed50(), cVar3 == '\0' ||
           (cVar3 = (**(code **)(*piVar8 + 0x30))(), cVar3 != '\0')))))) {
        local_434 = &local_2c;
        local_14 = (int *)&stack0xfffffbd0;
        local_438 = (int *)0x72092a;
        FUN_00449290();
        local_434 = (int *)0x720932;
        FUN_0045e6f0();
      }
      break;
    case 0xdc:
      piVar8 = (int *)FUN_00428eb0();
      local_2c = *piVar8;
      local_28 = (undefined2)piVar8[1];
      FUN_00446d10();
      iVar13 = FUN_0070a4c0();
      if (0 < iVar13) {
        FUN_0070a4c0();
        piVar8 = (int *)FUN_00477fc0();
        local_78 = *piVar8;
        local_74 = (undefined2)piVar8[1];
      }
      fVar16 = (float10)FUN_0070a4b0();
      if (fVar16 == (float10)_DAT_007e3380) {
        FUN_0070a4f0();
        local_434 = &local_78;
        local_14 = (int *)&stack0xfffffbd0;
        local_438 = (int *)0x72069c;
        FUN_00446d10();
        local_434 = (int *)0x7206a3;
        local_434 = (int *)FUN_0070a4d0();
        local_440 = &local_2c;
        local_14 = (int *)&local_43c;
        piStack_444 = (int *)0x7206b5;
        FUN_00449290();
        local_440 = (int *)0x7206bd;
        FUN_00461e60();
      }
      else {
        fVar16 = (float10)FUN_0070a4b0();
        if (fVar16 == (float10)_DAT_007e3374) {
          FUN_0070a4f0();
          local_434 = &local_78;
          local_14 = (int *)&stack0xfffffbd0;
          local_438 = (int *)0x7206ed;
          FUN_00446d10();
          local_434 = (int *)0x7206f4;
          local_434 = (int *)FUN_0070a4d0();
          local_440 = &local_2c;
          local_14 = (int *)&local_43c;
          piStack_444 = (int *)0x720706;
          FUN_00449290();
          local_440 = (int *)0x72070e;
          FUN_00462100();
        }
        else {
          FUN_0070a4f0();
          local_434 = &local_78;
          local_14 = (int *)&stack0xfffffbd0;
          local_438 = (int *)0x72072a;
          FUN_00446d10();
          local_434 = (int *)0x720731;
          local_434 = (int *)FUN_0070a4d0();
          local_440 = &local_2c;
          local_14 = (int *)&local_43c;
          piStack_444 = (int *)0x720743;
          FUN_00449290();
          local_440 = (int *)0x72074b;
          FUN_00461fb0();
        }
      }
      break;
    case 0xdd:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0070a3a0();
      if (iVar13 != 0) {
        iVar13 = FUN_0070a4d0();
        local_14 = (int *)(float)iVar13;
        fVar16 = (float10)FUN_00526a20();
        local_14 = (int *)(float)(fVar16 * (float10)(float)local_14 * (float10)_DAT_007e543c);
        local_18 = operator_new(0xc);
        local_8 = 0x2f;
        if (local_18 != (undefined4 *)0x0) {
          local_434 = local_14;
LAB_00720c65:
          local_438 = (int *)0x720c6d;
          local_438 = (int *)FUN_00447250();
          local_43c = (int *)0x720c75;
          FUN_0071ccd0();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0xde:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0070a3a0();
      if ((iVar13 != 0) && (iVar13 = FUN_0070a3c0(), iVar13 != 0)) {
        iVar13 = FUN_00620e70();
        local_14 = operator_new(0xc);
        local_8 = 0x31;
        if (local_14 != (int *)0x0) {
          local_434 = (int *)0x720d76;
          FUN_0045f730();
          local_434 = (int *)0x720d7f;
          local_434 = (int *)FUN_00447250();
          local_438 = (int *)0x720d87;
          FUN_0070a3c0();
          local_438 = (int *)0x720d8e;
          local_438 = (int *)FUN_0045fec0();
          local_43c = (int *)0x6c;
          local_440 = (int *)0x720d98;
          FUN_0071c830();
        }
        local_8 = 0xffffffff;
        FUN_00565bc0();
        if ((iVar13 != 0) && (iVar13 = (**(code **)(*(int *)(iVar13 + 0x22) + 4))(), iVar13 == 0)) {
          local_14 = operator_new(0xc);
          local_8 = 0x32;
          if (local_14 != (int *)0x0) {
            FUN_0045f730();
            local_434 = (int *)0x1;
            local_438 = (int *)0x720e02;
            local_438 = (int *)FUN_00447250();
            local_43c = (int *)0x720e0a;
            FUN_00494b80();
            local_43c = (int *)0x720e11;
            local_43c = (int *)FUN_0045fec0();
            local_440 = (int *)0x35;
            piStack_444 = (int *)0x720e1b;
            FUN_00521370();
          }
          goto LAB_00725e9b;
        }
      }
      break;
    case 0xdf:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      local_24 = (int *)FUN_0070a3a0();
      if ((local_24 != (int *)0x0) && (local_1c = (int *)FUN_0070a3c0(), local_1c != (int *)0x0)) {
        FUN_0070a4d0();
        FUN_004e9370();
        FUN_00513f90();
        FUN_00458280();
        cVar3 = FUN_0044b280();
        if ((cVar3 != '\0') && (iVar13 = FUN_0070a4c0(), iVar13 < 1)) {
          FUN_0071c3a0();
        }
        piVar8 = (int *)FUN_0070a580();
        iVar13 = FUN_0070a4d0();
        if ((0 < iVar13) || (piVar8 != (int *)0x0)) {
          if (piVar8 == (int *)0x0) {
LAB_00720a57:
            piVar8 = (int *)FUN_00428eb0();
            local_2c = *piVar8;
            local_28 = (undefined2)piVar8[1];
            cVar3 = FUN_0054ed40();
            if (cVar3 == '\0') {
              cVar3 = FUN_0048e0c0();
              if (cVar3 == '\0') {
                local_14 = (int *)&stack0xfffffbd0;
                local_434 = (int *)&DAT_0088f28c;
                local_438 = (int *)0x720b0f;
                FUN_00446d10();
                local_434 = (int *)0x720b16;
                local_434 = (int *)FUN_0070a4d0();
                local_440 = &local_2c;
                local_14 = (int *)&local_43c;
                piStack_444 = (int *)0x720b28;
                FUN_00449290();
                local_440 = (int *)0x720b30;
                FUN_00461fb0();
              }
              else {
                local_14 = (int *)&stack0xfffffbd0;
                local_434 = (int *)&DAT_0088f28c;
                local_438 = (int *)0x720ada;
                FUN_00446d10();
                local_434 = (int *)0x720ae1;
                local_434 = (int *)FUN_0070a4d0();
                local_440 = &local_2c;
                local_14 = (int *)&local_43c;
                piStack_444 = (int *)0x720af3;
                FUN_00449290();
                local_440 = (int *)0x720afb;
                FUN_00462100();
              }
            }
            else {
              local_14 = (int *)&stack0xfffffbd0;
              local_434 = (int *)&DAT_0088f28c;
              local_438 = (int *)0x720a95;
              FUN_00446d10();
              local_434 = (int *)0x720a9c;
              local_434 = (int *)FUN_0070a4d0();
              local_440 = &local_2c;
              local_14 = (int *)&local_43c;
              piStack_444 = (int *)0x720aae;
              FUN_00449290();
              local_440 = (int *)0x720ab6;
              FUN_00461e60();
            }
          }
          else {
            iVar13 = FUN_0070a4d0();
            if (0 < iVar13) {
              iVar13 = FUN_00516300();
              iVar6 = FUN_0070a4d0();
              if (iVar13 != iVar6) goto LAB_00720a57;
            }
            cVar3 = (**(code **)(*piVar8 + 0x28))();
            if ((((cVar3 != '\0') && (cVar3 = FUN_0054ed40(), cVar3 == '\0')) ||
                ((cVar3 = (**(code **)(*piVar8 + 0x30))(), cVar3 != '\0' &&
                 (cVar3 = FUN_0054ed50(), cVar3 == '\0')))) ||
               ((cVar3 = (**(code **)(*piVar8 + 0x2c))(), cVar3 != '\0' &&
                (cVar3 = FUN_0048e0c0(), cVar3 == '\0')))) goto LAB_00720a57;
          }
          piVar8 = (int *)FUN_0070a580();
          if ((piVar8 != (int *)0x0) &&
             ((((cVar3 = FUN_0054ed40(), cVar3 != '\0' &&
                (cVar3 = (**(code **)(*piVar8 + 0x28))(), cVar3 == '\0')) ||
               ((cVar3 = FUN_0048e0c0(), cVar3 != '\0' &&
                (cVar3 = (**(code **)(*piVar8 + 0x2c))(), cVar3 == '\0')))) ||
              ((cVar3 = FUN_0054ed50(), cVar3 != '\0' &&
               (cVar3 = (**(code **)(*piVar8 + 0x30))(), cVar3 == '\0')))))) break;
          local_434 = &local_2c;
          local_14 = (int *)&stack0xfffffbd0;
          local_438 = (int *)0x720ba2;
          FUN_00449290();
          local_434 = (int *)0x720baa;
          FUN_0045e6f0();
        }
        local_14 = operator_new(0xc);
        local_8 = 0x2e;
        if (local_14 != (int *)0x0) {
          FUN_0070a4d0();
          FUN_00447250();
          local_434 = (int *)0x720be2;
          FUN_0071e250();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0xe0:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0070a3a0();
      if (iVar13 != 0) {
        fVar16 = (float10)FUN_004fd510();
        local_18 = (undefined4 *)(float)fVar16;
        iVar13 = FUN_0070a4d0();
        local_14 = (int *)((float)iVar13 * (float)local_18 * _DAT_007e543c);
        local_18 = operator_new(0xc);
        local_8 = 0x30;
        if (local_18 != (undefined4 *)0x0) {
          local_434 = (int *)0x0;
          goto LAB_00720c65;
        }
        goto LAB_00725ef6;
      }
      break;
    case 0xe1:
      local_14 = operator_new(0xc);
      local_8 = 9;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x71f445;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0xe2:
      local_14 = operator_new(0xc);
      local_8 = 10;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x71f487;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0xe3:
      local_14 = operator_new(0xc);
      local_8 = 0xb;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x71f4c9;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0xe4:
      local_14 = operator_new(0xc);
      local_8 = 0xc;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x71f50b;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0xe5:
      local_14 = operator_new(0xc);
      local_8 = 0xd;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x71f54d;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0xe6:
      local_14 = operator_new(0xc);
      local_8 = 0xe;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x71f58f;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0xe7:
      local_14 = operator_new(0xc);
      local_8 = 0xf;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        local_434 = (int *)0x71f5d1;
        FUN_0071c480();
      }
      goto LAB_00725e9b;
    case 0xe8:
      local_14 = operator_new(0xc);
      local_8 = 0x37;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x721041;
        FUN_0071e250();
      }
      goto LAB_00725e9b;
    case 0xe9:
      local_18 = operator_new(0xc);
      local_8 = 4;
      if (local_18 != (undefined4 *)0x0) {
        local_270 = *(undefined4 *)(iVar13 + 8);
        piVar8 = *(int **)((int)param_2 + 6);
        local_14 = (int *)FUN_0044dc80();
        __ftol();
        local_438 = (int *)0x71f282;
        local_434 = piVar8;
        local_440 = (int *)FUN_0045fec0();
        local_14 = (int *)&local_43c;
        piStack_444 = (int *)0x71f290;
        FUN_00446d10();
        local_440 = (int *)0x62;
        piStack_444 = (int *)0x71f29a;
        FUN_004638c0();
      }
      goto LAB_00725ef6;
    case 0xea:
      local_18 = operator_new(0xc);
      local_8 = 5;
      if (local_18 != (undefined4 *)0x0) {
        local_14 = (int *)(*(float *)(iVar13 + 8) - _DAT_007e3374);
        local_1a4 = (int)ROUND((float)local_14);
        local_434 = *(int **)((int)param_2 + 6);
        local_438 = (int *)0x71f2eb;
        local_440 = (int *)FUN_0045fec0();
        local_14 = (int *)&local_43c;
        piStack_444 = (int *)0x71f2f9;
        FUN_00446d10();
        local_440 = (int *)0x62;
        piStack_444 = (int *)0x71f302;
        FUN_004638c0();
      }
      goto LAB_00725ef6;
    case 0xeb:
      local_28c = *(undefined4 *)(iVar13 + 8);
      local_14 = (int *)FUN_0044dc80();
      __ftol();
      FUN_0045bbf0();
      break;
    case 0xec:
      FUN_00496e60();
      FUN_00477fc0();
      FUN_0070a5a0();
      local_14 = (int *)&stack0xfffffbd4;
      local_434 = (int *)0x721137;
      FUN_0045f730();
      local_438 = (int *)FUN_0044df10();
      local_14 = (int *)&local_434;
      local_43c = (int *)0x72114d;
      FUN_00446d10();
      local_438 = (int *)0x721155;
      FUN_0045f460();
      break;
    case 0xed:
      FUN_00496e60();
      FUN_00477fc0();
      iVar13 = FUN_0070a5a0();
      FUN_0071c2f0();
      FUN_0054ef90();
      FUN_0045f730();
      cVar3 = FUN_0054efc0();
      while (cVar3 != '\0') {
        FUN_0054efa0();
        FUN_0054efb0();
        iVar6 = FUN_004988c0();
        if (iVar6 == iVar13) {
          puVar11 = (undefined4 *)FUN_00447250();
          local_88 = *puVar11;
          local_84 = *(undefined2 *)(puVar11 + 1);
          break;
        }
        cVar3 = FUN_0054efc0();
      }
      cVar3 = FUN_00549790();
      if (cVar3 != '\0') {
        local_14 = (int *)&stack0xfffffbd4;
        local_434 = (int *)0x721220;
        FUN_00446d10();
        FUN_0045f240();
      }
      break;
    case 0xee:
      FUN_00465c40();
      local_14 = operator_new(0xc);
      local_8 = 0x33;
      if (local_14 != (int *)0x0) {
        FUN_00584c90();
        FUN_00447250();
        FUN_0045fec0();
        local_434 = (int *)0xd6;
        local_438 = (int *)0x720e6a;
        FUN_005b4790();
      }
      local_8 = 0xffffffff;
      iVar13 = FUN_0070a500();
      if (iVar13 == 1) {
        iVar13 = FUN_00498d60();
        *(undefined1 *)(iVar13 + 0x1c) = 1;
      }
      FUN_00565bc0();
      break;
    case 0xef:
      iVar13 = FUN_00496e60();
      piVar8 = param_2;
      if (iVar13 != 0) {
        FUN_00496e60();
        piVar8 = (int *)FUN_00465c30();
      }
      if (piVar8 != (int *)0x0) {
        uVar12 = FUN_0070a510();
        switch(uVar12) {
        case 0:
          iVar13 = FUN_00465c40();
          break;
        case 1:
          iVar13 = DAT_00d615c2;
          break;
        case 2:
          iVar13 = DAT_00d615c6;
          break;
        case 3:
          iVar13 = DAT_00d615ca;
          break;
        default:
          goto switchD_0071ec85_caseD_2;
        }
        if (iVar13 != 0) {
          local_14 = operator_new(0xc);
          local_8 = 0x34;
          if (local_14 != (int *)0x0) {
            FUN_00458280();
            FUN_00447250();
            FUN_0045fec0();
            local_434 = (int *)0xd7;
            local_438 = (int *)0x720f4a;
            FUN_0071e680();
          }
          goto LAB_00725ef6;
        }
      }
      break;
    case 0xf0:
      iVar6 = FUN_0070a510();
      iVar13 = DAT_00d615c2;
      if ((((iVar6 == 1) || (iVar13 = DAT_00d615c6, iVar6 == 2)) ||
          (iVar13 = DAT_00d615ca, iVar6 == 3)) && (iVar13 != 0)) {
        local_14 = operator_new(0xc);
        local_8 = 0x35;
        if (local_14 != (int *)0x0) {
          FUN_0070a4f0();
          FUN_00447250();
          FUN_0045fec0();
          local_434 = (int *)0xd8;
          local_438 = (int *)0x720fc5;
          FUN_0071e740();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0xf1:
      local_14 = operator_new(0xc);
      local_8 = 0x38;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        local_434 = (int *)0x18c;
        local_438 = (int *)0x7210c3;
        FUN_0071c930();
      }
      goto LAB_00725ef6;
    case 0xf2:
      local_14 = operator_new(0xc);
      local_8 = 0x39;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x18d;
        local_438 = (int *)0x721105;
        FUN_0071c930();
      }
      goto LAB_00725ef6;
    case 0xf3:
      iVar13 = FUN_0070a4c0();
      if (iVar13 == 1) {
        FUN_00458280();
        FUN_00496e60();
        FUN_00465c30();
        FUN_0045fca0();
      }
      else {
        FUN_00496e60();
        FUN_0045fca0();
      }
      break;
    case 0xf4:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar6 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar6 != 0)) {
        local_14 = operator_new(0xc);
        local_8 = 0x87;
        if (local_14 != (int *)0x0) {
          local_434 = (int *)0x7234b5;
          local_434 = (int *)FUN_00458280();
          local_438 = (int *)0x7234bd;
          local_438 = (int *)FUN_00458280();
          local_43c = (int *)0x7234c5;
          local_43c = (int *)FUN_0045fec0();
          local_440 = (int *)0xe2;
          piStack_444 = (int *)0x7234d2;
          FUN_0047c090();
        }
        goto LAB_00725e9b;
      }
      break;
    case 0xf5:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar6 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar6 != 0)) {
        local_14 = operator_new(0xc);
        local_8 = 0x88;
        if (local_14 != (int *)0x0) {
          FUN_00458280();
          FUN_0045fec0();
          local_434 = (int *)0xe3;
          local_438 = (int *)0x723547;
          FUN_0071c930();
        }
        goto LAB_00725e9b;
      }
      break;
    case 0xf6:
      local_14 = operator_new(0xc);
      local_8 = 0x89;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_00725e9b;
    case 0xf7:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        local_14 = operator_new(0xc);
        local_8 = 0x8a;
        if (local_14 != (int *)0x0) {
          FUN_0070a4b0();
          __ftol();
          FUN_0045fec0();
          local_434 = (int *)0x7235dd;
          FUN_0071e250();
        }
        goto LAB_00725e9b;
      }
      break;
    case 0xf8:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        local_14 = operator_new(0xc);
        local_8 = 0x8b;
        if (local_14 != (int *)0x0) {
          FUN_0070a4b0();
          __ftol();
          FUN_0045fec0();
          local_434 = (int *)0x72363b;
          FUN_0071e250();
        }
        goto LAB_00725e9b;
      }
      break;
    case 0xf9:
      local_14 = operator_new(0xc);
      local_8 = 0x8c;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x1a5;
        local_438 = (int *)0x723686;
        FUN_0071c520();
      }
      goto LAB_00725e9b;
    case 0xfa:
      local_14 = operator_new(0xc);
      local_8 = 0x8d;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x1a6;
        local_438 = (int *)0x7236d1;
        FUN_0071c520();
      }
      goto LAB_00725e9b;
    case 0xfb:
      FUN_00496e60();
      piVar8 = (int *)FUN_00465c30();
      local_14 = piVar8;
      FUN_0070a4d0();
      iVar13 = FUN_00465c30();
      if ((piVar8 != (int *)0x0) && (iVar13 != 0)) {
        local_18 = operator_new(0xc);
        local_8 = 0x8e;
        if (local_18 != (undefined4 *)0x0) {
          local_80 = &stack0xfffffbd4;
          local_434 = (int *)0x723739;
          FUN_0045f730();
          FUN_0070a500();
          local_434 = (int *)0x723748;
          local_434 = (int *)FUN_00458280();
          local_438 = (int *)0x723751;
          local_438 = (int *)FUN_00458280();
          local_43c = (int *)0x2;
          local_440 = (int *)0x13;
          piStack_444 = (int *)0x72375d;
          piStack_444 = (int *)FUN_0045fec0();
          piStack_448 = (int *)0x89;
          piStack_44c = (int *)0x72376a;
          FUN_00464820();
        }
        local_8 = 0xffffffff;
        puVar11 = (undefined4 *)FUN_00428eb0();
        iVar13 = FUN_00498cc0();
        *(undefined4 *)(iVar13 + 0x22) = *puVar11;
        *(undefined2 *)(iVar13 + 0x26) = *(undefined2 *)(puVar11 + 1);
        FUN_00565ca0();
      }
      break;
    case 0xfc:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar6 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar6 != 0)) {
        local_14 = operator_new(0xc);
        local_8 = 0x8f;
        if (local_14 != (int *)0x0) {
          local_18 = (undefined4 *)&stack0xfffffbd4;
          local_434 = (int *)0x723810;
          FUN_0045f730();
          local_434 = (int *)0x723819;
          local_434 = (int *)FUN_00458280();
          local_438 = (int *)0x723821;
          local_438 = (int *)FUN_00458280();
          local_43c = (int *)0x2;
          local_440 = (int *)0x14;
          piStack_444 = (int *)0x72382d;
          piStack_444 = (int *)FUN_0045fec0();
          piStack_448 = (int *)0x89;
          piStack_44c = (int *)0x72383a;
          FUN_00464820();
        }
        goto LAB_00725e9b;
      }
      break;
    case 0xfd:
      FUN_00496e60();
      piVar8 = (int *)FUN_00465c30();
      local_14 = piVar8;
      FUN_0070a4d0();
      iVar13 = FUN_00465c30();
      if ((piVar8 != (int *)0x0) && (iVar13 != 0)) {
        FUN_004986b0();
        cVar3 = FUN_004986e0();
        while (cVar3 != '\0') {
          FUN_004986c0();
          FUN_004986d0();
          iVar13 = FUN_00498ae0();
          if (iVar13 == 0) {
            FUN_00458280();
            cVar3 = FUN_0071eba0();
            if (cVar3 != '\0') {
              FUN_00458280();
              cVar3 = FUN_0071eba0();
              if (cVar3 != '\0') {
                local_18 = operator_new(0xc);
                local_8 = 0x90;
                if (local_18 != (undefined4 *)0x0) {
                  FUN_00447250();
                  local_80 = &stack0xfffffbd4;
                  local_434 = (int *)0x723918;
                  FUN_00449290();
                  local_434 = (int *)0x723921;
                  local_434 = (int *)FUN_00458280();
                  local_438 = (int *)0x72392a;
                  local_438 = (int *)FUN_00458280();
                  local_43c = (int *)0x2;
                  local_440 = (int *)0x16;
                  piStack_444 = (int *)0x723936;
                  piStack_444 = (int *)FUN_0045fec0();
                  piStack_448 = (int *)0x89;
                  piStack_44c = (int *)0x723943;
                  FUN_00464820();
                }
                local_8 = 0xffffffff;
                FUN_00565ca0();
              }
            }
          }
          cVar3 = FUN_004986e0();
        }
      }
      break;
    case 0xfe:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar6 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar6 != 0)) {
        FUN_00442b90();
        local_3ec = 1;
        fVar16 = (float10)FUN_0071c3e0();
        local_410 = (float)-fVar16;
        fVar16 = (float10)FUN_0071c3f0();
        local_414 = (float)-fVar16;
        fVar16 = (float10)FUN_0071c3d0();
        local_408 = (float)-fVar16;
        fVar16 = (float10)FUN_0071c3c0();
        local_404 = (float)-fVar16;
        fVar16 = (float10)FUN_0071c3b0();
        local_40c = (float)-fVar16;
        fVar16 = (float10)FUN_0071c400();
        local_400 = (float)-fVar16;
        local_34a = FUN_0070a4c0();
        fVar16 = (float10)FUN_0070a4b0();
        local_346 = fVar16 == (float10)_DAT_007e3374;
        local_14 = aiStack_4f8;
        FUN_00471500(local_418);
        uVar12 = FUN_00458280();
        FUN_0045ccd0(uVar12);
      }
      break;
    case 0x100:
      fVar16 = (float10)FUN_0070a4b0();
      local_20 = (int *)(float)(fVar16 * (float10)_DAT_007e543c);
      uVar12 = FUN_00496e60();
      switch(uVar12) {
      case 0:
        fVar16 = (float10)FUN_0071c350();
        local_20 = (int *)(float)(fVar16 * (float10)(float)local_20);
        local_14 = operator_new(0xc);
        local_8 = 0x68;
        if (local_14 == (int *)0x0) {
LAB_00722c2b:
          iVar13 = 0;
        }
        else {
          FUN_0045fec0();
          local_434 = (int *)0x15e;
          local_438 = (int *)0x722a4f;
          iVar13 = FUN_0071de60();
        }
        break;
      case 1:
        fVar16 = (float10)FUN_0071c370();
        local_20 = (int *)(float)(fVar16 * (float10)(float)local_20);
        local_14 = operator_new(0xc);
        local_8 = 0x69;
        if (local_14 == (int *)0x0) goto LAB_00722c2b;
        FUN_0045fec0();
        local_434 = (int *)0x15f;
        local_438 = (int *)0x722a9c;
        iVar13 = FUN_0071de60();
        break;
      case 2:
        fVar16 = (float10)FUN_0071c360();
        local_20 = (int *)(float)(fVar16 * (float10)(float)local_20);
        local_14 = operator_new(0xc);
        local_8 = 0x6a;
        if (local_14 == (int *)0x0) goto LAB_00722c2b;
        FUN_0045fec0();
        local_434 = (int *)0x160;
        local_438 = (int *)0x722ae9;
        iVar13 = FUN_0071de60();
        break;
      case 3:
        fVar16 = (float10)FUN_0071c380();
        local_20 = (int *)(float)(fVar16 * (float10)(float)local_20);
        local_14 = operator_new(0xc);
        local_8 = 0x6b;
        if (local_14 == (int *)0x0) goto LAB_00722c2b;
        FUN_0045fec0();
        local_434 = (int *)0x161;
        local_438 = (int *)0x722b36;
        iVar13 = FUN_0071de60();
        break;
      case 4:
        FUN_0071c2c0();
        fVar16 = (float10)FUN_0071eb90();
        local_18 = (undefined4 *)(float)fVar16;
        iVar13 = FUN_0071c340();
        local_14 = (int *)((float)iVar13 * (float)local_18);
        fVar16 = (float10)FUN_0048c9b0();
        local_20 = (int *)(float)(fVar16 * (float10)(float)local_14 * (float10)(float)local_20);
        local_14 = operator_new(0xc);
        local_8 = 0x6c;
        if (local_14 == (int *)0x0) goto LAB_00722c2b;
        FUN_0045fec0();
        local_434 = (int *)0x164;
        local_438 = (int *)0x722baf;
        iVar13 = FUN_0071de60();
        break;
      case 5:
        iVar13 = FUN_0071c340();
        local_14 = (int *)(float)iVar13;
        fVar16 = (float10)FUN_0071c2d0();
        local_14 = (int *)(float)(fVar16 * (float10)(float)local_14);
        fVar16 = (float10)FUN_0048c9b0();
        local_14 = (int *)(float)(fVar16 * (float10)(float)local_14);
        fVar16 = (float10)FUN_0071c300();
        local_20 = (int *)(float)(fVar16 * (float10)(float)local_14 * (float10)(float)local_20);
        local_14 = operator_new(0xc);
        local_8 = 0x6d;
        if (local_14 == (int *)0x0) goto LAB_00722c2b;
        FUN_0045fec0();
        local_434 = (int *)0x15d;
        local_438 = (int *)0x722c29;
        iVar13 = FUN_0071de60();
        break;
      default:
        goto switchD_0071ec85_caseD_2;
      }
      local_8 = 0xffffffff;
      if (iVar13 != 0) {
        FUN_00565ca0();
      }
      break;
    case 0x101:
      local_14 = operator_new(0xc);
      local_8 = 0xd4;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0045fec0();
        local_434 = (int *)0x725347;
        FUN_0071e250();
      }
      goto LAB_00725ef6;
    case 0x102:
      local_14 = operator_new(0xc);
      local_8 = 0xd5;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x193;
        local_438 = (int *)0x725394;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x103:
      local_14 = operator_new(0xc);
      local_8 = 0xd6;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x194;
        local_438 = (int *)0x7253e1;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x104:
      local_14 = operator_new(0xc);
      local_8 = 0xd7;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x195;
        local_438 = (int *)0x72542e;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x105:
      local_14 = operator_new(0xc);
      local_8 = 0xd8;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x196;
        local_438 = (int *)0x72547b;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x106:
      local_14 = operator_new(0xc);
      local_8 = 0xd9;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x197;
        local_438 = (int *)0x7254c6;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x107:
      local_14 = operator_new(0xc);
      local_8 = 0xda;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x198;
        local_438 = (int *)0x725513;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x108:
      local_14 = operator_new(0xc);
      local_8 = 0xdb;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x199;
        local_438 = (int *)0x725560;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x109:
      cVar3 = FUN_0070a530();
      if (cVar3 == '\0') {
        local_18 = operator_new(0xc);
        local_8 = 0xdf;
        if (local_18 != (undefined4 *)0x0) {
          FUN_0070a4b0();
          local_14 = (int *)__ftol();
          FUN_00496e60();
          FUN_0045fec0();
          local_434 = (int *)0x1a0;
          local_438 = (int *)0x7256af;
          FUN_0071c520();
        }
      }
      else {
        local_18 = operator_new(0xc);
        local_8 = 0xde;
        if (local_18 != (undefined4 *)0x0) {
          FUN_0070a4b0();
          local_14 = (int *)__ftol();
          FUN_00496e60();
          FUN_0045fec0();
          local_434 = (int *)0x19f;
          local_438 = (int *)0x72565b;
          FUN_0071c520();
        }
      }
      goto LAB_00725ef6;
    case 0x10a:
      local_14 = operator_new(0xc);
      local_8 = 0xdc;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x19a;
        local_438 = (int *)0x7255ad;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x10c:
      local_14 = operator_new(0xc);
      local_8 = 0xe3;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_00725ef6;
    case 0x10d:
      local_14 = operator_new(0xc);
      local_8 = 0xe4;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_00725ef6;
    case 0x10e:
      local_14 = operator_new(0xc);
      local_8 = 0xe5;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x725835;
        FUN_0071e250();
      }
      goto LAB_00725ef6;
    case 0x10f:
      local_14 = operator_new(0xc);
      local_8 = 0xe6;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x19c;
        local_438 = (int *)0x725882;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x110:
      local_14 = operator_new(0xc);
      local_8 = 0xdd;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        local_434 = (int *)0x19b;
        local_438 = (int *)0x7255fa;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x111:
      iVar13 = FUN_00496e60();
      if (0 < iVar13) {
        local_14 = operator_new(0xc);
        local_8 = 0xe9;
        if (local_14 != (int *)0x0) {
          FUN_0070a4b0();
          FUN_00496e60();
          FUN_0070a4d0();
          local_434 = (int *)0x725971;
          local_434 = (int *)FUN_0045fec0();
          local_438 = (int *)0x1ad;
          local_43c = (int *)0x72597e;
          FUN_0071cd90();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0x112:
      local_14 = operator_new(0xc);
      local_8 = 0xe7;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x19d;
        local_438 = (int *)0x7258cf;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x113:
      local_14 = operator_new(0xc);
      local_8 = 0xe8;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x19e;
        local_438 = (int *)0x72591c;
        FUN_0071c520();
      }
      goto LAB_00725ef6;
    case 0x114:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      local_14 = operator_new(0xc);
      local_8 = 0xea;
      if (local_14 != (int *)0x0) {
        FUN_0070a4c0();
        FUN_0070a4d0();
        local_438 = local_15c;
        local_18 = &local_434;
        local_43c = (int *)0x7259e5;
        FUN_00449290();
        local_438 = (int *)0x7259ec;
        local_438 = (int *)FUN_0070a4d0();
        local_43c = (int *)0x7259f2;
        FUN_00465bd0();
        local_438 = (int *)0x7259ff;
        local_438 = (int *)FUN_0044df10();
        local_43c = (int *)0x1b5;
        local_440 = (int *)0x725a0c;
        FUN_0071cee0();
      }
      goto LAB_00725ef6;
    case 0x115:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      local_14 = operator_new(0xc);
      local_8 = 0xeb;
      if (local_14 != (int *)0x0) {
        FUN_0070a4c0();
        FUN_0070a4d0();
        local_438 = local_16c;
        local_18 = &local_434;
        local_43c = (int *)0x725a73;
        FUN_00449290();
        local_438 = (int *)0x725a7a;
        local_438 = (int *)FUN_0070a4d0();
        local_43c = (int *)0x725a80;
        FUN_00465bd0();
        local_438 = (int *)0x725a8d;
        local_438 = (int *)FUN_0044df10();
        local_43c = (int *)0x1b6;
        local_440 = (int *)0x725a9a;
        FUN_0071cee0();
      }
      goto LAB_00725e9b;
    case 0x116:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      local_14 = operator_new(0xc);
      local_8 = 0xec;
      if (local_14 != (int *)0x0) {
        local_18 = &local_434;
        local_438 = local_17c;
        local_43c = (int *)0x725af5;
        FUN_00449290();
        local_438 = (int *)0x725afc;
        local_438 = (int *)FUN_0070a4d0();
        local_43c = (int *)0x725b02;
        FUN_00465bd0();
        local_438 = (int *)0x725b0f;
        local_438 = (int *)FUN_0044df10();
        local_43c = (int *)0x1b7;
        local_440 = (int *)0x725b1c;
        FUN_0071cee0();
      }
      goto LAB_00725e9b;
    case 0x117:
      local_18 = operator_new(0xc);
      local_8 = 0xed;
      if (local_18 != (undefined4 *)0x0) {
        FUN_0070a4b0();
        local_14 = (int *)__ftol();
        FUN_00496e60();
        FUN_00496e60();
        local_434 = (int *)0x725b6a;
        FUN_00465bd0();
        FUN_0044df10();
        local_434 = (int *)0x1b8;
        local_438 = (int *)0x725b84;
        FUN_0071c520();
      }
      goto LAB_00725e9b;
    case 0x118:
    case 0x119:
      local_14 = operator_new(0xc);
      local_8 = 0x25;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        FUN_0070a300();
        FUN_006902c0();
      }
      goto LAB_00725e9b;
    case 0x11a:
      if (*(float *)(iVar13 + 8) != _DAT_007e3380) {
        __ftol();
      }
      if (*(int *)(iVar13 + 0x10) == 1) {
        FUN_006aee10();
      }
      FUN_006aeaa0();
      break;
    case 0x11b:
      if (*(float *)(iVar13 + 8) != _DAT_007e3380) {
        __ftol();
      }
      FUN_006aeb10();
      break;
    case 0x11c:
      FUN_006aeaa0();
      break;
    case 0x11d:
      if (*(float *)(iVar13 + 8) != _DAT_007e3380) {
        __ftol();
      }
      if (*(int *)(iVar13 + 0x10) == 1) {
        FUN_006aee10();
      }
      FUN_006aeaa0();
      break;
    case 0x11e:
      if (*(float *)(iVar13 + 8) != _DAT_007e3380) {
        __ftol();
      }
      FUN_006aeb10();
      break;
    case 0x11f:
      FUN_006aeaa0();
      break;
    case 0x120:
      local_14 = operator_new(0xc);
      local_8 = 0xa2;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a4c0();
        FUN_00496e60();
        local_434 = (int *)0x7240ca;
        local_434 = (int *)FUN_0045fec0();
        local_438 = (int *)0x1f5;
        local_43c = (int *)0x7240d7;
        FUN_0071e510();
      }
      goto LAB_00725ef6;
    case 0x121:
      uVar12 = FUN_00496e60();
      switch(uVar12) {
      case 0:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492960();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xa9;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492960();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xaa;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492950();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xab;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492950();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xac;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_0070a400();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xad;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_0070a400();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xae;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        break;
      case 1:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492960();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb5;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492960();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb6;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492950();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb7;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492950();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb8;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_0070a400();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb9;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_0070a400();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xba;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        break;
      case 2:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492960();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xa3;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492960();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xa4;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492950();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xa5;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492950();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xa6;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_0070a400();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xa7;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_0070a400();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xa8;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        break;
      case 3:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492960();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xaf;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492960();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb0;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492950();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb1;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492950();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb2;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_0070a400();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb3;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_0070a400();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xb4;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        break;
      case 4:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492960();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xbb;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492960();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xbc;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492950();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xbd;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492950();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xbe;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_0070a400();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xbf;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_0070a400();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xc0;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        break;
      case 5:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492960();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xc1;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492960();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xc2;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_00492950();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xc3;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_00492950();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xc4;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar16 = (float10)FUN_0070a4b0();
          if (fVar16 == (float10)_DAT_007e3380) {
            cVar3 = FUN_0070a400();
            if (cVar3 != '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xc5;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
          else {
            cVar3 = FUN_0070a400();
            if (cVar3 == '\0') {
              local_14 = operator_new(0xc);
              local_8 = 0xc6;
              if (local_14 != (int *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_00725ef6;
            }
          }
        }
      }
      break;
    case 0x122:
      local_14 = operator_new(0xc);
      local_8 = 199;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_00725ef6;
    case 0x123:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar6 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar6 != 0)) {
        fVar16 = (float10)FUN_0070a4b0();
        if (fVar16 == (float10)_DAT_007e7828) {
          local_14 = operator_new(0xc);
          local_8 = 0xee;
          if (local_14 != (int *)0x0) {
            local_18 = (undefined4 *)&stack0xfffffbd4;
            local_434 = (int *)0x725e2e;
            FUN_0045f730();
            local_434 = (int *)0x725e37;
            local_434 = (int *)FUN_00458280();
            local_438 = (int *)0x725e3f;
            local_438 = (int *)FUN_00458280();
            local_440 = (int *)0xb;
LAB_00725e44:
            local_43c = (int *)0x2;
            piStack_444 = &DAT_0088f2a4;
            piStack_448 = (int *)0x89;
            piStack_44c = (int *)0x725e55;
            FUN_00464820();
          }
        }
        else {
          local_14 = operator_new(0xc);
          local_8 = 0xef;
          if (local_14 != (int *)0x0) {
            local_18 = (undefined4 *)&stack0xfffffbd4;
            local_434 = (int *)0x725e81;
            FUN_0045f730();
            local_434 = (int *)0x725e8a;
            local_434 = (int *)FUN_00458280();
            local_438 = (int *)0x725e92;
            local_438 = (int *)FUN_00458280();
            local_440 = (int *)0xc;
            goto LAB_00725e44;
          }
        }
        goto LAB_00725e9b;
      }
      break;
    case 0x124:
      FUN_0070a4d0();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        local_14 = operator_new(0xc);
        local_8 = 200;
        if (local_14 != (int *)0x0) {
          FUN_0070a4f0();
          FUN_0045fec0();
          local_434 = (int *)0x724da9;
          FUN_0071e5c0();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0x125:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar6 = FUN_00465c30();
      if ((iVar13 == 0) || (iVar6 == 0)) break;
      local_8c = CONCAT31(local_8c._1_3_,1);
      local_90 = CONCAT31(local_90._1_3_,1);
      local_7c = CONCAT31(local_7c._1_3_,1);
      FUN_0070a4b0();
      uVar12 = __ftol();
      switch(uVar12) {
      case 1:
        local_90 = (uint)local_90._1_3_ << 8;
      case 3:
switchD_00724e61_caseD_3:
        local_7c = local_7c & 0xffffff00;
        break;
      case 2:
        local_8c = (uint)local_8c._1_3_ << 8;
        goto switchD_00724e61_caseD_3;
      case 0xfffffffe:
        local_8c = (uint)local_8c._1_3_ << 8;
        break;
      case 0xffffffff:
        local_90 = (uint)local_90._1_3_ << 8;
      }
      local_14 = operator_new(0xc);
      local_8 = 0xca;
      if (local_14 != (int *)0x0) {
        local_434 = (int *)0x724ec5;
        local_434 = (int *)FUN_00458280();
        local_438 = (int *)0x724ecd;
        local_438 = (int *)FUN_00458280();
        local_43c = (int *)0x724ed5;
        local_43c = (int *)FUN_0045fec0();
        local_440 = (int *)0x1fb;
        piStack_444 = (int *)0x724ee2;
        FUN_0047c090();
      }
      goto LAB_00725ef6;
    case 0x126:
      FUN_0070a4d0();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        local_14 = operator_new(0xc);
        local_8 = 0xc9;
        if (local_14 != (int *)0x0) {
          FUN_0070a4f0();
          FUN_0045fec0();
          local_434 = (int *)0x724e02;
          FUN_0071e5c0();
        }
        goto LAB_00725ef6;
      }
      break;
    case 0x127:
      FUN_00496e60();
      cVar3 = FUN_0070a540();
      if (cVar3 != '\0') {
        FUN_00496e60();
      }
      local_14 = operator_new(0xc);
      local_8 = 0xcb;
      if (local_14 != (int *)0x0) {
        FUN_0070a500();
        FUN_0070a510();
        local_434 = (int *)0x724f65;
        fVar16 = (float10)FUN_0071c410();
        local_434 = (int *)(float)fVar16;
        local_438 = (int *)0x724f70;
        fVar16 = (float10)FUN_0070a4b0();
        local_438 = (int *)(float)fVar16;
        local_43c = (int *)0x724f7c;
        local_43c = (int *)FUN_0045fec0();
        local_440 = (int *)0x1fd;
        piStack_444 = (int *)0x724f89;
        FUN_0071e820();
      }
      goto LAB_00725ef6;
    case 0x128:
      piVar8 = (int *)FUN_00496e60();
      cVar3 = FUN_0070a540();
      if (cVar3 != '\0') {
        iVar13 = FUN_00496e60();
        if (iVar13 == 0) {
          piVar8 = (int *)0xffffffff;
        }
        else if (iVar13 == 1) {
          piVar8 = (int *)0xfffffffe;
        }
        else if (iVar13 == 2) {
          piVar8 = (int *)0xfffffffd;
        }
      }
      local_14 = operator_new(0xc);
      local_8 = 0xcc;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0070a510();
        FUN_0070a500();
        local_438 = (int *)0x725013;
        local_434 = piVar8;
        local_438 = (int *)FUN_0045fec0();
        local_43c = (int *)0x1ff;
        local_440 = (int *)0x725020;
        FUN_0071e8e0();
      }
      goto LAB_00725ef6;
    case 0x129:
      piVar8 = (int *)FUN_00496e60();
      cVar3 = FUN_0070a540();
      if (cVar3 != '\0') {
        iVar13 = FUN_00496e60();
        if (iVar13 == 0) {
          piVar8 = (int *)0xffffffff;
        }
        else if (iVar13 == 1) {
          piVar8 = (int *)0xfffffffe;
        }
        else if (iVar13 == 2) {
          piVar8 = (int *)0xfffffffd;
        }
      }
      local_14 = operator_new(0xc);
      local_8 = 0xcd;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        FUN_0070a510();
        FUN_0070a500();
        local_438 = (int *)0x7250a8;
        local_434 = piVar8;
        local_438 = (int *)FUN_0045fec0();
        local_43c = (int *)0x200;
        local_440 = (int *)0x7250b5;
        FUN_0071e9a0();
      }
      goto LAB_00725ef6;
    case 0x12a:
      goto LAB_00725be0;
    case 299:
      goto LAB_00725be0;
    case 300:
      goto LAB_00725be0;
    case 0x12d:
      goto LAB_00725be0;
    case 0x12e:
      goto LAB_00725be0;
    case 0x12f:
LAB_00725be0:
      local_434 = (int *)0x725bf1;
      FUN_00713260();
      break;
    case 0x130:
      piVar8 = (int *)FUN_00496e60();
      cVar3 = FUN_0070a540();
      if (cVar3 != '\0') {
        iVar13 = FUN_00496e60();
        if (iVar13 == 0) {
          piVar8 = (int *)0xfffffffe;
        }
        else if (iVar13 == 1) {
          piVar8 = (int *)0xfffffffc;
        }
        else if (iVar13 == 2) {
          piVar8 = (int *)0xfffffffd;
        }
        else {
          piVar8 = (int *)0xffffffff;
        }
      }
      local_14 = operator_new(0xc);
      local_8 = 0xce;
      if (local_14 != (int *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0070a500();
        FUN_0070a4d0();
        local_438 = (int *)0x72513c;
        local_434 = piVar8;
        local_438 = (int *)FUN_0045fec0();
        local_43c = (int *)0x204;
        local_440 = (int *)0x725149;
        FUN_0071ea60();
      }
      goto LAB_00725ef6;
    case 0x131:
      FUN_00428eb0();
      FUN_0070a4b0();
      iVar13 = __ftol();
      iVar6 = FUN_0044c4a0();
      iVar7 = FUN_0070a4c0();
      if (-1 < iVar7) {
        iVar6 = FUN_0070a4c0();
      }
      iVar7 = (**(code **)(*(int *)(&DAT_00d77142 + iVar13 * 0x12) + 4))();
      if (iVar7 <= iVar6) {
        (**(code **)(*(int *)(&DAT_00d77142 + iVar13 * 0x12) + 4))();
      }
      local_434 = (int *)0x8c;
      local_14 = (int *)&local_43c;
      local_440 = (int *)local_164;
      piStack_444 = (int *)0x7207d0;
      FUN_00449290();
      local_440 = (int *)0x7207d8;
      FUN_0045e580();
      break;
    case 0x132:
      FUN_0070a4b0();
      piVar8 = (int *)FUN_00516890();
      piVar9 = (int *)FUN_0044c4a0();
      local_20 = (int *)0x1;
      iVar13 = FUN_0070a4c0();
      if (0 < iVar13) {
        local_20 = (int *)FUN_0070a4c0();
      }
      fVar16 = (float10)FUN_0071c420();
      if (fVar16 == (float10)_DAT_007e3380) {
        fVar16 = (float10)FUN_004672f0();
      }
      else {
        fVar16 = (float10)FUN_0071c420();
      }
      local_1c = (int *)(float)fVar16;
      iVar13 = FUN_0070a510();
      if (iVar13 < 1) {
        local_438 = (int *)0x7212d5;
        local_434 = piVar8;
        FUN_00467030();
        FUN_0071eb20();
      }
      else {
        local_434 = (int *)0x7212aa;
        FUN_00467030();
        FUN_0070a510();
        local_434 = (int *)FUN_0071eb30();
        local_438 = (int *)0x7212c0;
        FUN_0071eb20();
      }
      fVar16 = (float10)FUN_00467430();
      local_24 = (int *)(float)fVar16;
      fVar16 = (float10)FUN_0071c330();
      if ((float10)(float)local_24 <= fVar16) {
        local_434 = local_20;
        piStack_444 = (int *)0x72131d;
        local_440 = piVar8;
        local_43c = piVar9;
        local_438 = piVar9;
        local_43c = (int *)FUN_0044e100();
        local_440 = (int *)0x721325;
        local_440 = (int *)FUN_0044e1b0();
        piStack_448 = local_22c;
        piStack_44c = (int *)0x721333;
        piStack_444 = piVar8;
        puStack_450 = (undefined4 *)FUN_00428eb0();
        local_14 = (int *)&piStack_44c;
        iStack_454 = 0x72133f;
        piStack_44c = extraout_ECX;
        FUN_00446d10();
        puStack_450 = (undefined4 *)0x721346;
        FUN_0045df90();
      }
      break;
    case 0x133:
      local_14 = operator_new(0xc);
      local_8 = 0x36;
      if (local_14 != (int *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        local_434 = (int *)0x721002;
        FUN_0071e250();
      }
LAB_00725e9b:
      local_8 = 0xffffffff;
      FUN_00565ca0();
      break;
    case 0x134:
      fVar16 = (float10)FUN_0071c310();
      local_1c = (int *)(float)fVar16;
      iVar13 = FUN_0070a4c0();
      if (iVar13 == 0) {
        fVar16 = (float10)FUN_0070a4b0();
        fVar16 = (float10)(float)local_1c - fVar16;
LAB_0072518e:
        local_1c = (int *)(float)fVar16;
      }
      else {
        if (iVar13 == 1) {
          fVar16 = (float10)FUN_0070a4b0();
          goto LAB_0072518e;
        }
        if (iVar13 == 2) {
          fVar16 = (float10)FUN_0054ed30();
          goto LAB_0072518e;
        }
      }
      local_14 = operator_new(0xc);
      local_8 = 0xcf;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        local_434 = (int *)0x7251c7;
        FUN_0071c480();
      }
      goto LAB_00725ef6;
    case 0x135:
      fVar16 = (float10)FUN_0071c320();
      local_1c = (int *)(float)fVar16;
      iVar13 = FUN_0070a4c0();
      if (iVar13 == 0) {
        fVar16 = (float10)FUN_0070a4b0();
        fVar16 = (float10)(float)local_1c - fVar16;
LAB_0072520c:
        local_1c = (int *)(float)fVar16;
      }
      else {
        if (iVar13 == 1) {
          fVar16 = (float10)FUN_0070a4b0();
          goto LAB_0072520c;
        }
        if (iVar13 == 2) {
          fVar16 = (float10)FUN_0054ed30();
          goto LAB_0072520c;
        }
      }
      local_14 = operator_new(0xc);
      local_8 = 0xd0;
      if (local_14 != (int *)0x0) {
        FUN_0045fec0();
        local_434 = (int *)0x725245;
        FUN_0071c480();
      }
LAB_00725ef6:
      local_8 = 0xffffffff;
      FUN_00565bc0();
    }
switchD_0071ec85_caseD_2:
    piVar8 = local_144;
  } while( true );
}


