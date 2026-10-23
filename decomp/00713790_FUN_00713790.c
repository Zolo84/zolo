// FUN_00713790 @ 713790 size=34070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00713790(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  char *pcVar16;
  float10 fVar17;
  float10 fVar18;
  int *local_43c;
  int local_434;
  undefined1 local_e0 [4];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_b4;
  undefined4 local_12;
  undefined1 local_e;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dccc5;
  pvStack_c = ExceptionList;
  bVar2 = false;
  ExceptionList = &pvStack_c;
  if (param_3 == (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    pvVar5 = operator_new(0x23c0);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      param_3 = (undefined4 *)0x0;
    }
    else {
      param_3 = (undefined4 *)FUN_0070ccf0();
    }
    param_3[9] = param_2;
    *(undefined4 *)((int)param_3 + 0x1256) = *(undefined4 *)((int)param_2 + 6);
    bVar2 = true;
  }
  local_4 = 0xffffffff;
  FUN_00446d10();
  piVar14 = *(int **)(param_1 + 4);
  do {
    if (piVar14 == (int *)0x0) {
      if ((bVar2) && (param_3 != (undefined4 *)0x0)) {
        (**(code **)*param_3)();
      }
      ExceptionList = pvStack_c;
      return;
    }
    piVar1 = (int *)piVar14[2];
    iVar13 = *piVar14;
    cVar4 = FUN_007105e0();
    if (cVar4 == '\0') goto switchD_0071386c_caseD_2;
    switch(*(undefined4 *)(iVar13 + 4)) {
    case 0:
      FUN_00496e60();
      FUN_00496e60();
      FUN_004e9370();
      FUN_00513f90();
      FUN_004a89c0();
      break;
    case 1:
      FUN_0042d2d0();
      iVar13 = FUN_00496e60();
      if (0 < iVar13) {
        FUN_00496e60();
      }
      FUN_0042dcc0();
      pvVar5 = operator_new(0xc);
      local_4 = 9;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0045fec0();
        FUN_0071c690();
      }
      goto LAB_0071bc1e;
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
                pvVar5 = operator_new(0xc);
                local_4 = 0x1d;
                if (pvVar5 != (void *)0x0) {
                  FUN_00458280();
                  FUN_00449290();
                  FUN_00462830();
                  FUN_0045fec0();
                  FUN_00464a00();
                }
                local_4 = 0xffffffff;
                FUN_005b4c40();
                FUN_00565bc0();
                pvVar5 = operator_new(0xc);
                local_4 = 0x1e;
                if (pvVar5 != (void *)0x0) {
                  FUN_00458280();
                  FUN_0045fec0();
                  FUN_005b4790();
                }
                local_4 = 0xffffffff;
                FUN_00565bc0();
                FUN_00458280();
                goto LAB_0071781a;
              }
              FUN_00458280();
              FUN_00490f60();
              FUN_00586600();
              FUN_00460bf0();
            }
            else {
              FUN_00458280();
LAB_00714b85:
              FUN_00490f60();
              FUN_00586600();
              FUN_00460bf0();
            }
          }
          else {
            iVar13 = FUN_00465c40();
            iVar7 = FUN_00465c40();
            if (iVar13 != iVar7) {
              FUN_00465c40();
              iVar13 = FUN_00584c90();
              iVar7 = FUN_00458280();
              if ((iVar13 != iVar7) ||
                 ((iVar13 = FUN_00465c40(), iVar13 != DAT_00d615c2 &&
                  (iVar13 = FUN_00465c40(), iVar13 != DAT_00d615c6)))) {
                iVar13 = FUN_0070a500();
                if ((iVar13 != 1) && (iVar13 = FUN_00465c40(), iVar13 != 0)) {
                  FUN_00490f60();
                  FUN_00586600();
                  FUN_005b4ce0();
                  FUN_00490f60();
                  FUN_00586600();
                  pvVar5 = operator_new(0xc);
                  local_4 = 0x1c;
                  if (pvVar5 != (void *)0x0) {
                    FUN_00584c90();
                    FUN_0045fec0();
                    FUN_005b4790();
                  }
                  local_4 = 0xffffffff;
                  iVar13 = FUN_0070a500();
                  if (iVar13 == 2) {
                    iVar13 = FUN_00498d60();
                    *(undefined1 *)(iVar13 + 0x1c) = 1;
                  }
                  FUN_00565bc0();
                }
                FUN_00458280();
                goto LAB_00714b85;
              }
              iVar13 = FUN_0070a500();
              if ((iVar13 != 1) && (iVar13 = FUN_00465c40(), iVar13 != 0)) {
                FUN_00490f60();
                FUN_00586600();
                FUN_005b4ce0();
                FUN_00490f60();
                FUN_00586600();
                pvVar5 = operator_new(0xc);
                local_4 = 0x1b;
                if (pvVar5 != (void *)0x0) {
                  FUN_00584c90();
                  FUN_0045fec0();
                  FUN_005b4790();
                }
                local_4 = 0xffffffff;
                iVar13 = FUN_0070a500();
                if (iVar13 == 2) {
                  iVar13 = FUN_00498d60();
                  *(undefined1 *)(iVar13 + 0x1c) = 1;
                }
                FUN_00565bc0();
              }
              FUN_00458280();
              FUN_00490f60();
              FUN_00586600();
              FUN_00460bf0();
            }
          }
        }
      }
      else {
        FUN_0071c200();
        iVar13 = FUN_0070a510();
        if (iVar13 == 1) {
          FUN_00447250();
LAB_007145cb:
          iVar13 = FUN_00584c90();
          if (iVar13 != 0) {
            iVar13 = FUN_0070a500();
            if ((iVar13 != 1) && (iVar13 = FUN_00465c40(), iVar13 != 0)) {
              FUN_00490f60();
              FUN_00586600();
              FUN_005b4ce0();
              pvVar5 = operator_new(0xc);
              local_4 = 0x17;
              if (pvVar5 != (void *)0x0) {
                FUN_00584c90();
                FUN_00490f60();
                FUN_00586600();
                FUN_0045fec0();
                FUN_005b4790();
              }
              local_4 = 0xffffffff;
              iVar13 = FUN_0070a500();
              if (iVar13 == 2) {
                iVar13 = FUN_00498d60();
                *(undefined1 *)(iVar13 + 0x1c) = 1;
              }
              FUN_00565bc0();
            }
            FUN_00449290();
            FUN_00460bf0();
            break;
          }
        }
        else {
          if (iVar13 == 2) {
            FUN_00447250();
            goto LAB_007145cb;
          }
          if (iVar13 == 3) {
            FUN_00447250();
            goto LAB_007145cb;
          }
        }
        FUN_00526a00();
        local_4 = 0x18;
        iVar13 = FUN_00465c40();
        if (iVar13 != 0) {
          FUN_00465c40();
          FUN_00485f30();
          FUN_00516230();
          cVar4 = FUN_00516260();
          while (cVar4 != '\0') {
            FUN_00516240();
            FUN_00516250();
            piVar14 = (int *)FUN_00465c30();
            if ((piVar14 != (int *)0x0) && (piVar14 != param_2)) {
              FUN_00459f50();
            }
            cVar4 = FUN_00516260();
          }
          FUN_00490f60();
          FUN_00586600();
          FUN_005b4ce0();
          pvVar5 = operator_new(0xc);
          local_4._0_1_ = 0x19;
          if (pvVar5 != (void *)0x0) {
            FUN_00584c90();
            FUN_00490f60();
            FUN_00586600();
            FUN_0045fec0();
            FUN_005b4790();
          }
          local_4 = CONCAT31(local_4._1_3_,0x18);
          FUN_00565bc0();
        }
        pvVar5 = operator_new(0xc);
        local_4._0_1_ = 0x1a;
        if (pvVar5 != (void *)0x0) {
          FUN_00458280();
          FUN_0045fec0();
          FUN_005b4790();
        }
        local_4 = CONCAT31(local_4._1_3_,0x18);
        FUN_00565bc0();
        FUN_00458280();
        FUN_00516230();
        cVar4 = FUN_00516260();
        while (cVar4 != '\0') {
          FUN_00516250();
          iVar13 = FUN_00465c30();
          if (iVar13 != 0) {
            FUN_00449290();
            FUN_00460bf0();
          }
          FUN_00516240();
          cVar4 = FUN_00516260();
        }
        local_4 = 0xffffffff;
        FUN_00430580();
      }
      break;
    case 7:
      pvVar5 = operator_new(0xc);
      local_4 = 0x1f;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_00458280();
        FUN_00458280();
        FUN_0047ea00();
        FUN_0071c9e0();
      }
      local_4 = 0xffffffff;
      iVar13 = FUN_0072a970();
      *(undefined1 *)(iVar13 + 0x16) = 1;
      fVar17 = (float10)FUN_0070a4b0();
      if ((float10)_DAT_007e3380 < fVar17) {
        iVar13 = FUN_0072a970();
        *(undefined1 *)(iVar13 + 0x17) = 1;
      }
      FUN_00565bc0();
      break;
    case 8:
      iVar13 = FUN_0070a4c0();
      if (iVar13 == 1) {
        FUN_00526a60();
        FUN_00526ac0();
        cVar4 = FUN_00526b10();
        while (cVar4 != '\0') {
          FUN_00526af0();
          FUN_00526b00();
          FUN_004e9370();
          iVar13 = FUN_0071c210();
          if (((float)iVar13 != _DAT_007e3380) && (cVar4 = FUN_004e8ab0(), cVar4 != '\0')) {
            FUN_0071c210();
          }
          cVar4 = FUN_00526b10();
        }
        FUN_0070a4b0();
      }
      else {
        FUN_0070a4b0();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0x2b;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 9:
      FUN_0070a2f0();
      FUN_00496e60();
      iVar13 = FUN_00428460();
      if ((iVar13 != 0) && (iVar13 != 0xc)) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x2c;
        if (pvVar5 != (void *)0x0) {
          FUN_004c0970();
          FUN_0045f730();
          FUN_0050b500();
          FUN_0045fec0();
          FUN_0071cb40();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 10:
      pvVar5 = operator_new(0xc);
      local_4 = 0x32;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071c930();
      }
      goto LAB_0071bc8d;
    case 0xb:
      pvVar5 = operator_new(0xc);
      local_4 = 0x61;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_00458280();
        FUN_0070a4b0();
LAB_007179b8:
        FUN_0045fec0();
        FUN_0071c5d0();
      }
      goto LAB_0071bc1e;
    case 0xc:
      FUN_0070a4b0();
      FUN_00496e60();
      FUN_00490f60();
      FUN_004965c0();
      FUN_005885d0();
      __ftol();
      pvVar5 = operator_new(0xc);
      local_4 = 0x62;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_00458280();
        goto LAB_007179b8;
      }
      goto LAB_0071bc1e;
    case 0xe:
      pvVar5 = operator_new(0xc);
      local_4 = 0x42;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_00465bd0();
        FUN_0044df10();
        FUN_0071ce40();
      }
      goto LAB_0071bc1e;
    case 0xf:
      pvVar5 = operator_new(0xc);
      local_4 = 0x43;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_00465bd0();
        FUN_0044df10();
        FUN_0071ce40();
      }
      goto LAB_0071bc1e;
    case 0x11:
      FUN_00496e60();
      FUN_00477fc0();
      iVar13 = FUN_0070a550();
      if (iVar13 != 0) {
        if (param_4 == 0) {
          iVar13 = FUN_0071c440();
          if (iVar13 == 0) {
            cVar4 = FUN_0071c470();
            if (cVar4 == '\0') {
              piVar14 = (int *)FUN_0071c460();
              iVar13 = (**(code **)(*piVar14 + 4))();
              if (iVar13 < 1) {
LAB_00716b33:
                pvVar5 = operator_new(0xc);
                local_4 = 0x47;
                if (pvVar5 != (void *)0x0) {
                  _rand();
                  FUN_0045fec0();
                  FUN_0044df10();
                  FUN_0071c750();
                }
                goto LAB_00716db6;
              }
              bVar3 = false;
              FUN_0071c460();
              FUN_00516230();
              cVar4 = FUN_00516260();
              if (cVar4 != '\0') {
                do {
                  if (bVar3) goto LAB_00716b33;
                  FUN_00516240();
                  iVar13 = FUN_00516250();
                  iVar7 = FUN_00458280();
                  if (iVar7 == iVar13) {
                    bVar3 = true;
                  }
                  cVar4 = FUN_00516260();
                } while (cVar4 != '\0');
                if (bVar3) goto LAB_00716b33;
              }
            }
            else {
              piVar14 = (int *)FUN_0071c460();
              iVar13 = (**(code **)(*piVar14 + 4))();
              if (iVar13 < 1) {
                iVar13 = 0;
                do {
                  iVar7 = FUN_00465c30();
                  if (iVar7 != 0) {
                    pvVar5 = operator_new(0xc);
                    local_4 = 0x46;
                    if (pvVar5 != (void *)0x0) {
                      _rand();
                      FUN_0047ea00();
                      FUN_0044df10();
                      FUN_0071c750();
                    }
                    local_4 = 0xffffffff;
                    FUN_00565bf0();
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < 0x157);
              }
              else {
                FUN_0071c460();
                FUN_00516230();
                cVar4 = FUN_00516260();
                while (cVar4 != '\0') {
                  FUN_00516240();
                  FUN_00516250();
                  iVar13 = FUN_00465c30();
                  if (iVar13 != 0) {
                    pvVar5 = operator_new(0xc);
                    local_4 = 0x45;
                    if (pvVar5 != (void *)0x0) {
                      _rand();
                      FUN_0047ea00();
                      FUN_0044df10();
                      FUN_0071c750();
                    }
                    local_4 = 0xffffffff;
                    FUN_00565bf0();
                  }
                  cVar4 = FUN_00516260();
                }
              }
            }
            break;
          }
          pvVar5 = operator_new(0xc);
          local_4 = 0x48;
          if (pvVar5 != (void *)0x0) {
            _rand();
            FUN_0071c440();
            FUN_0047ea00();
            FUN_0044df10();
            FUN_0071c750();
          }
        }
        else {
          pvVar5 = operator_new(0xc);
          local_4 = 0x44;
          if (pvVar5 != (void *)0x0) {
            _rand();
            FUN_0045fec0();
            FUN_0044df10();
            FUN_0071c750();
          }
        }
LAB_00716db6:
        local_4 = 0xffffffff;
        FUN_00565bf0();
      }
      break;
    case 0x12:
      FUN_0070a4e0();
      FUN_00477fc0();
      iVar13 = FUN_0070a550();
      if (iVar13 != 0) {
        iVar13 = FUN_0070a510();
        piVar14 = param_2;
        if (-1 < iVar13) {
          FUN_0070a4d0();
          piVar14 = (int *)FUN_00465c30();
        }
        if (piVar14 != (int *)0x0) {
          iVar13 = FUN_0070a500();
          if (iVar13 < 1) {
            pvVar5 = operator_new(0xc);
            local_4 = 0x4b;
            if (pvVar5 != (void *)0x0) {
              _rand();
              FUN_0045fec0();
              FUN_0044df10();
              FUN_0071c750();
            }
            goto LAB_00716db6;
          }
          FUN_00462830();
          FUN_0070a500();
          FUN_0042dc20();
          pvVar5 = operator_new(0xc);
          local_4 = 0x49;
          if (pvVar5 != (void *)0x0) {
            _rand();
            FUN_0045fec0();
            FUN_0044df10();
            FUN_0071c750();
          }
          local_4 = 0xffffffff;
          FUN_00565b70();
          pvVar5 = operator_new(0xe);
          local_4 = 0x4a;
          if (pvVar5 != (void *)0x0) {
            FUN_0071c220();
          }
          local_4 = 0xffffffff;
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
      pvVar5 = operator_new(0xc);
      local_4 = 0x4c;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071e470();
      }
      goto LAB_0071bc1e;
    case 0x15:
      pvVar5 = operator_new(0xc);
      local_4 = 0x4d;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_00496e60();
        FUN_00465bd0();
        FUN_0044df10();
        FUN_0047de00();
      }
      goto LAB_0071bc1e;
    case 0x17:
      iVar13 = FUN_0070a510();
      piVar14 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x4e;
        if (pvVar5 != (void *)0x0) {
          FUN_00496e60();
          FUN_0045fec0();
          FUN_0047de00();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0x18:
      iVar13 = FUN_0070a510();
      piVar14 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x4f;
        if (pvVar5 != (void *)0x0) {
          FUN_00496e60();
          FUN_0045fec0();
          FUN_0047de00();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0x19:
      iVar13 = FUN_0070a510();
      piVar14 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x50;
        if (pvVar5 != (void *)0x0) {
          FUN_00496e60();
          FUN_0045fec0();
          FUN_0047de00();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0x1a:
      iVar13 = FUN_0070a510();
      piVar14 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x51;
        if (pvVar5 != (void *)0x0) {
          FUN_00496e60();
          FUN_0045fec0();
          FUN_0047de00();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0x1b:
      iVar13 = FUN_0070a4e0();
      if (iVar13 == -2) {
        FUN_0070a4b0();
        __ftol();
        FUN_00465bd0();
        piVar14 = (int *)FUN_0048b980();
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
        piVar14 = (int *)FUN_00513f90();
      }
      else {
        FUN_00496e60();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        iVar13 = FUN_0070a500();
        if (iVar13 == 1) {
          if (param_2 != piVar14) {
            FUN_0070a4b0();
            __ftol();
            FUN_00465bd0();
            piVar14 = (int *)FUN_00513f90();
            if (piVar14 == param_2) {
              pvVar5 = operator_new(0xc);
              local_4 = 0x52;
              if (pvVar5 != (void *)0x0) {
                FUN_0070a4b0();
                __ftol();
                FUN_0045fec0();
                FUN_0047de00();
              }
              local_4 = 0xffffffff;
              FUN_00565bc0();
            }
            FUN_0070a4b0();
            __ftol();
            FUN_00465bd0();
            piVar14 = (int *)FUN_0048b980();
            if (piVar14 == param_2) {
              pvVar5 = operator_new(0xc);
              local_4 = 0x53;
              goto LAB_0071725d;
            }
          }
        }
        else if (iVar13 == 2) {
          FUN_0070a4b0();
          __ftol();
          FUN_00465bd0();
          piVar10 = (int *)FUN_00513f90();
          if (piVar10 != piVar14) {
            pvVar5 = operator_new(0xc);
            local_4 = 0x54;
            if (pvVar5 != (void *)0x0) {
              FUN_0070a4b0();
              __ftol();
              FUN_0045fec0();
              FUN_0047de00();
            }
            local_4 = 0xffffffff;
            FUN_00565bc0();
          }
          FUN_0070a4b0();
          __ftol();
          FUN_00465bd0();
          piVar10 = (int *)FUN_0048b980();
          if (piVar10 != piVar14) {
            pvVar5 = operator_new(0xc);
            local_4 = 0x55;
LAB_0071725d:
            if (pvVar5 != (void *)0x0) {
              FUN_0070a4b0();
              __ftol();
              FUN_0045fec0();
              FUN_0047de00();
            }
            goto LAB_0071bc8d;
          }
        }
        else {
          pvVar5 = operator_new(0xc);
          local_4 = 0x56;
          if (pvVar5 != (void *)0x0) {
            FUN_0070a4b0();
            __ftol();
            FUN_0045fec0();
            FUN_0047de00();
          }
          local_4 = 0xffffffff;
          FUN_00565bc0();
          pvVar5 = operator_new(0xc);
          local_4 = 0x57;
          if (pvVar5 == (void *)0x0) {
            local_4 = 0xffffffff;
            FUN_00565bc0();
          }
          else {
            FUN_0070a4b0();
            __ftol();
            FUN_0045fec0();
            FUN_0047de00();
            local_4 = 0xffffffff;
            FUN_00565bc0();
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
      cVar4 = FUN_005162c0();
      while (cVar4 != '\0') {
        FUN_005162b0();
        iVar13 = FUN_00513f90();
        if ((iVar13 != 0) && (iVar13 = FUN_0048b980(), iVar13 != 0)) {
          iVar13 = FUN_0070a4e0();
          if (iVar13 == -2) {
            piVar14 = (int *)FUN_0048b980();
          }
          else if (iVar13 == -1) {
            FUN_00513f90();
            iVar13 = FUN_00458280();
            if (iVar13 == 0x157) goto LAB_007176b5;
            piVar14 = (int *)FUN_00513f90();
          }
          else {
            FUN_00496e60();
            piVar14 = (int *)FUN_00465c30();
          }
          if (piVar14 != (int *)0x0) {
            iVar13 = FUN_0070a500();
            if (iVar13 == 1) {
              if (param_2 != piVar14) {
                piVar14 = (int *)FUN_00513f90();
                if (piVar14 == param_2) {
                  pvVar5 = operator_new(0xc);
                  local_4 = 0x58;
                  if (pvVar5 != (void *)0x0) {
                    FUN_0048b970();
                    FUN_0045fec0();
                    FUN_0047de00();
                  }
                  local_4 = 0xffffffff;
                  FUN_00565bc0();
                }
                piVar14 = (int *)FUN_0048b980();
                if (piVar14 == param_2) {
                  pvVar5 = operator_new(0xc);
                  local_4 = 0x59;
                  if (pvVar5 != (void *)0x0) {
                    FUN_0048b970();
                    FUN_0045fec0();
                    FUN_0047de00();
                  }
                  goto LAB_007176a1;
                }
              }
            }
            else {
              if (iVar13 == 2) {
                piVar10 = (int *)FUN_00513f90();
                if (piVar10 != piVar14) {
                  pvVar5 = operator_new(0xc);
                  local_4 = 0x5a;
                  if (pvVar5 != (void *)0x0) {
                    FUN_0048b970();
                    FUN_0045fec0();
                    FUN_0047de00();
                  }
                  local_4 = 0xffffffff;
                  FUN_00565bc0();
                }
                piVar10 = (int *)FUN_0048b980();
                if (piVar10 == piVar14) goto LAB_007176b5;
                pvVar5 = operator_new(0xc);
                local_4 = 0x5b;
                if (pvVar5 != (void *)0x0) {
                  FUN_0048b970();
                  FUN_0045fec0();
                  FUN_0047de00();
                }
              }
              else {
                piVar10 = (int *)FUN_0048b980();
                if (piVar10 == param_2) {
                  FUN_00513f90();
                  iVar13 = FUN_00458280();
                  if (iVar13 != 0x157) goto LAB_0071748e;
                }
                else {
LAB_0071748e:
                  piVar10 = (int *)FUN_00513f90();
                  if ((piVar10 != param_2) && (piVar10 = (int *)FUN_00513f90(), piVar14 != piVar10))
                  goto LAB_007176b5;
                }
                pvVar5 = operator_new(0xc);
                local_4 = 0x5c;
                if (pvVar5 != (void *)0x0) {
                  FUN_0048b970();
                  FUN_0045fec0();
                  FUN_0047de00();
                }
                local_4 = 0xffffffff;
                FUN_00565bc0();
                pvVar5 = operator_new(0xc);
                local_4 = 0x5d;
                if (pvVar5 != (void *)0x0) {
                  FUN_0048b970();
                  FUN_0045fec0();
                  FUN_0047de00();
                }
              }
LAB_007176a1:
              local_4 = 0xffffffff;
              FUN_00565bc0();
            }
          }
        }
LAB_007176b5:
        FUN_005162a0();
        cVar4 = FUN_005162c0();
      }
      break;
    case 0x1e:
      pvVar5 = operator_new(0xc);
      local_4 = 0x5e;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        FUN_0047ea00();
        FUN_0047de00();
      }
      goto LAB_0071bc8d;
    case 0x1f:
      pvVar5 = operator_new(0xc);
      local_4 = 0x41;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_00465bd0();
        FUN_0044df10();
        FUN_0071ce40();
      }
      goto LAB_0071bc1e;
    case 0x20:
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_00428460();
      if ((iVar13 != 0) && (iVar13 != 0xc)) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x2d;
        if (pvVar5 != (void *)0x0) {
          FUN_00496e60();
          FUN_00477fc0();
          FUN_0050b500();
          FUN_0045fec0();
          FUN_0071ca90();
        }
        goto LAB_0071bc8d;
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
          pvVar5 = operator_new(0xc);
          local_4 = 0x2e;
          if (pvVar5 != (void *)0x0) {
            FUN_00496e60();
            FUN_0070a300();
            FUN_0045fec0();
            FUN_0071e2f0();
          }
          goto LAB_0071bc8d;
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
          pvVar5 = operator_new(0xc);
          local_4 = 0x2f;
          if (pvVar5 != (void *)0x0) {
            FUN_00496e60();
            FUN_0070a300();
            FUN_0045fec0();
            FUN_0071e2f0();
          }
          goto LAB_0071bc8d;
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
          pvVar5 = operator_new(0xc);
          local_4 = 0x30;
          if (pvVar5 != (void *)0x0) {
            FUN_0070a4c0();
            FUN_00496e60();
            FUN_0070a300();
            FUN_0045fec0();
            FUN_0071e2f0();
          }
          goto LAB_0071bc1e;
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
          pvVar5 = operator_new(0xc);
          local_4 = 0x31;
          if (pvVar5 != (void *)0x0) {
            FUN_0070a4c0();
            FUN_00496e60();
            FUN_0070a300();
            FUN_0045fec0();
            FUN_0071e2f0();
          }
          goto LAB_0071bc1e;
        }
      }
      break;
    case 0x25:
      FUN_00496e60();
      FUN_00477fc0();
      iVar13 = FUN_0070a550();
      if (iVar13 != 0) {
        piVar14 = (int *)FUN_00700a50();
        iVar13 = *piVar14;
        FUN_0044df10();
        FUN_00446d10();
        (**(code **)(iVar13 + 0x28))();
        cVar4 = FUN_0054ef70();
        if (cVar4 == '\0') {
          FUN_0044df10();
          FUN_00446d10();
          FUN_00700a50();
          FUN_004739f0();
        }
        piVar14 = (int *)FUN_00498640();
        iVar13 = *piVar14;
        FUN_0044df10();
        FUN_00446d10();
        (**(code **)(iVar13 + 0x28))();
        cVar4 = FUN_0054ef70();
        if (cVar4 == '\0') {
          FUN_0044df10();
          FUN_00446d10();
          FUN_00498640();
          FUN_004739f0();
        }
        FUN_0071c450();
      }
      break;
    case 0x26:
      pvVar5 = operator_new(0xc);
      local_4 = 0x5f;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_00458280();
        FUN_0045f730();
        FUN_0045f730();
        FUN_0045f730();
        FUN_00464b70();
      }
      local_4 = 0xffffffff;
      FUN_00565c30();
      break;
    case 0x27:
      FUN_00496e60();
      FUN_006a8ec0();
      FUN_00690810();
      break;
    case 0x28:
      FUN_0070a4b0();
      FUN_0070a4c0();
      FUN_00496e60();
      FUN_00461270();
      break;
    case 0x29:
      FUN_00496e60();
      FUN_00465c30();
      FUN_00458280();
LAB_0071781a:
      FUN_00458280();
      FUN_005b0ad0();
      break;
    case 0x2a:
      FUN_0070a4b0();
      FUN_0070a4c0();
      FUN_0070a4f0();
      FUN_00430360();
      break;
    case 0x2b:
      puVar11 = operator_new(0xc);
      local_4 = 2;
      if (puVar11 != (undefined4 *)0x0) {
        FUN_0072a980();
        *puVar11 = &PTR_FUN_007ea05c;
        iVar7 = puVar11[1];
        *(int *)(iVar7 + 0xe) = param_2[1];
        *(short *)(iVar7 + 0x12) = (short)param_2[2];
        uVar6 = 0xffffffff;
        pcVar9 = (char *)(iVar13 + 0x28);
        do {
          pcVar16 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar9 + 1;
          cVar4 = *pcVar9;
          pcVar9 = pcVar16;
        } while (cVar4 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar16 + -uVar6;
        pcVar16 = (char *)(puVar11[1] + 0x14);
        for (uVar15 = uVar6 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar16 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      local_4 = 0xffffffff;
      FUN_00565bc0();
      break;
    case 0x2c:
      FUN_0070a4b0();
      __ftol();
      FUN_0044df10();
      FUN_0045f730();
      FUN_0064e370();
      break;
    case 0x2d:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x2e:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x2f:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x30:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x31:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x32:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x33:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x34:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x35:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x36:
      FUN_00449290();
      FUN_0045c660();
      break;
    case 0x37:
      FUN_00446d10();
      FUN_0070a4b0();
      __ftol();
      FUN_0045c6f0();
      break;
    case 0x38:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x60;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4b0();
          FUN_0045fec0();
          FUN_0071c480();
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0x39:
      pvVar5 = operator_new(0xc);
      local_4 = 99;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d8c0();
      }
      goto LAB_0071bc1e;
    case 0x3a:
      pvVar5 = operator_new(0xc);
      local_4 = 100;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071dd10();
      }
      goto LAB_0071bc1e;
    case 0x3b:
      pvVar5 = operator_new(0xc);
      local_4 = 0x81;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d970();
      }
      goto LAB_0071bc1e;
    case 0x3c:
      pvVar5 = operator_new(0xc);
      local_4 = 0x82;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
LAB_007184b2:
        FUN_00477fc0();
        FUN_0045fec0();
        FUN_0071da10();
      }
      goto LAB_0071bc1e;
    case 0x3d:
      FUN_00496e60();
      FUN_00477fc0();
      iVar13 = FUN_00428460();
      if ((iVar13 != 0) && (iVar13 != 0xc)) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x83;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4b0();
          FUN_00516890();
          FUN_0071eb40();
          FUN_00496e60();
          goto LAB_007184b2;
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0x3e:
      pvVar5 = operator_new(0xc);
      local_4 = 0x85;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_0070a300();
        FUN_0045fec0();
        FUN_0071db90();
      }
      goto LAB_0071bc1e;
    case 0x40:
      iVar13 = FUN_0070a520();
      if (iVar13 != 0) {
        FUN_00496e60();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0x87;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_0071e120();
      }
      goto LAB_0071bc1e;
    case 0x42:
      pvVar5 = operator_new(0xc);
      local_4 = 0x88;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        __ftol();
LAB_0071872b:
        FUN_0045fec0();
        FUN_0071e250();
      }
      goto LAB_0071bc1e;
    case 0x43:
      iVar13 = FUN_00496e60();
      if (iVar13 != -1) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x89;
        if (pvVar5 != (void *)0x0) {
          FUN_00496e60();
          goto LAB_0071872b;
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0x44:
      pvVar5 = operator_new(0xc);
      local_4 = 0x8a;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_0071d630();
      }
      goto LAB_0071bc1e;
    case 0x45:
      pvVar5 = operator_new(0xc);
      local_4 = 0x8b;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d810();
      }
      goto LAB_0071bc1e;
    case 0x46:
      pvVar5 = operator_new(0xc);
      local_4 = 0x8c;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_00477fc0();
        FUN_0045fec0();
        FUN_0071dfc0();
      }
      goto LAB_0071bc1e;
    case 0x47:
      pvVar5 = operator_new(0xc);
      local_4 = 0x8d;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_00477fc0();
        FUN_0045fec0();
        FUN_0071e070();
      }
      goto LAB_0071bc1e;
    case 0x48:
      pvVar5 = operator_new(0xc);
      local_4 = 0x84;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_00477fc0();
        FUN_0045fec0();
        FUN_0071dad0();
      }
      goto LAB_0071bc1e;
    case 0x49:
      pvVar5 = operator_new(0xc);
      local_4 = 0x86;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_0070a300();
        FUN_0045fec0();
        FUN_0071dc50();
      }
      goto LAB_0071bc1e;
    case 0x4f:
      FUN_00428eb0();
      FUN_0070a4b0();
      __ftol();
      FUN_004e9370();
      FUN_00496e60();
      FUN_004e9370();
      FUN_00449290();
      FUN_0045d580();
      uVar6 = FUN_0070a4c0();
      if ((uVar6 & 1) == 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x21;
      }
      else {
        pvVar5 = operator_new(0xc);
        local_4 = 0x20;
      }
      if (pvVar5 != (void *)0x0) {
        FUN_0071cc10();
      }
      local_4 = 0xffffffff;
      FUN_00565cc0();
      uVar6 = FUN_0070a4c0();
      if ((uVar6 & 2) == 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x23;
      }
      else {
        pvVar5 = operator_new(0xc);
        local_4 = 0x22;
      }
      if (pvVar5 != (void *)0x0) {
        FUN_0071cc10();
      }
      local_4 = 0xffffffff;
      FUN_00565cc0();
      uVar6 = FUN_0070a4c0();
      if ((uVar6 & 4) == 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x25;
      }
      else {
        pvVar5 = operator_new(0xc);
        local_4 = 0x24;
      }
      if (pvVar5 != (void *)0x0) {
        FUN_0071cc10();
      }
      local_4 = 0xffffffff;
      FUN_00565cc0();
      uVar6 = FUN_0070a4c0();
      if ((uVar6 & 8) == 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x27;
      }
      else {
        pvVar5 = operator_new(0xc);
        local_4 = 0x26;
      }
      if (pvVar5 != (void *)0x0) {
        FUN_0071cc10();
      }
      local_4 = 0xffffffff;
      FUN_00565cc0();
      uVar6 = FUN_0070a4c0();
      if ((uVar6 & 0x10) == 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x29;
      }
      else {
        pvVar5 = operator_new(0xc);
        local_4 = 0x28;
      }
      if (pvVar5 == (void *)0x0) {
        local_4 = 0xffffffff;
        FUN_00565cc0();
      }
      else {
        FUN_0071cc10();
        local_4 = 0xffffffff;
        FUN_00565cc0();
      }
      break;
    case 0x50:
      pvVar5 = operator_new(0xc);
      local_4 = 0x75;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4d0();
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071de60();
      }
      goto LAB_0071bc1e;
    case 0x51:
      pvVar5 = operator_new(0xc);
      local_4 = 0x76;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4d0();
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071de60();
      }
      goto LAB_0071bc1e;
    case 0x52:
      pvVar5 = operator_new(0xc);
      local_4 = 0x77;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071de60();
      }
      goto LAB_0071bc1e;
    case 0x53:
      pvVar5 = operator_new(0xc);
      local_4 = 0x78;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0x54:
      pvVar5 = operator_new(0xc);
      local_4 = 0x79;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071de60();
      }
      goto LAB_0071bc1e;
    case 0x55:
      pvVar5 = operator_new(0xc);
      local_4 = 0x7a;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071de60();
      }
      goto LAB_0071bc1e;
    case 0x56:
      pvVar5 = operator_new(0xc);
      local_4 = 0x80;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071df10();
      }
      goto LAB_0071bc1e;
    case 0x57:
      pvVar5 = operator_new(0xc);
      local_4 = 0x65;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
LAB_00717b28:
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x58:
      pvVar5 = operator_new(0xc);
      local_4 = 0x66;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x59:
      pvVar5 = operator_new(0xc);
      local_4 = 0x67;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x5a:
      pvVar5 = operator_new(0xc);
      local_4 = 0x69;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x5b:
      pvVar5 = operator_new(0xc);
      local_4 = 0x6a;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x5c:
      pvVar5 = operator_new(0xc);
      local_4 = 0x68;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x5d:
      pvVar5 = operator_new(0xc);
      local_4 = 0x6b;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x5e:
      pvVar5 = operator_new(0xc);
      local_4 = 0x6c;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x5f:
      pvVar5 = operator_new(0xc);
      local_4 = 0x6d;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x60:
      pvVar5 = operator_new(0xc);
      local_4 = 0x6e;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        goto LAB_00717b28;
      }
      goto LAB_0071bc8d;
    case 0x61:
      pvVar5 = operator_new(0xc);
      local_4 = 0x7b;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071de60();
      }
      goto LAB_0071bc1e;
    case 0x62:
      FUN_0070a4b0();
      pvVar5 = operator_new(0xc);
      local_4 = 0x7c;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d6c0();
      }
      goto LAB_0071bc1e;
    case 100:
      pvVar5 = operator_new(0xc);
      local_4 = 0x7f;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d770();
      }
      goto LAB_0071bc1e;
    case 0x65:
      FUN_00496e60();
      FUN_00465c30();
      pvVar5 = operator_new(0xc);
      local_4 = 0x7d;
      if (pvVar5 != (void *)0x0) {
        FUN_0045f730();
        FUN_00458280();
        FUN_00458280();
        FUN_0045fec0();
        FUN_00464820();
      }
      goto LAB_0071bc1e;
    case 0x66:
      FUN_00496e60();
      FUN_00465c30();
      pvVar5 = operator_new(0xc);
      local_4 = 0x7e;
      if (pvVar5 != (void *)0x0) {
        FUN_0045f730();
        FUN_00458280();
        FUN_00458280();
        FUN_0045fec0();
        FUN_00464820();
      }
      goto LAB_0071bc1e;
    case 0x67:
      FUN_0070a4d0();
      FUN_00465c30();
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      FUN_0070a580();
      pvVar5 = operator_new(0xc);
      local_4 = 0x16;
      if (pvVar5 != (void *)0x0) {
        FUN_0045f730();
        FUN_00447250();
        FUN_0045fec0();
        FUN_00521370();
      }
      goto LAB_0071bc8d;
    case 0x68:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      FUN_0070a580();
      pvVar5 = operator_new(0xc);
      local_4 = 0x15;
      if (pvVar5 != (void *)0x0) {
        FUN_0045f730();
        FUN_00447250();
        FUN_00494b80();
        FUN_0045fec0();
        FUN_00521370();
      }
      goto LAB_0071bc8d;
    case 0x69:
      goto LAB_00718f39;
    case 0x6a:
      goto LAB_00718f39;
    case 0x6b:
      goto LAB_00718f39;
    case 0x6c:
      goto LAB_00718f39;
    case 0x6d:
      goto LAB_00718f39;
    case 0x6e:
      goto LAB_00718f39;
    case 0x6f:
      goto LAB_00718f39;
    case 0x70:
      goto LAB_00718f39;
    case 0x71:
      goto LAB_00718f39;
    case 0x72:
      goto LAB_00718f39;
    case 0x73:
      goto LAB_00718f39;
    case 0x74:
      goto LAB_00718f39;
    case 0x75:
      goto LAB_00718f39;
    case 0x76:
      goto LAB_00718f39;
    case 0x77:
      goto LAB_00718f39;
    case 0x78:
      goto LAB_00718f39;
    case 0x79:
      goto LAB_00718f39;
    case 0x7a:
      goto LAB_00718f39;
    case 0x7b:
      goto LAB_00718f39;
    case 0x7c:
      goto LAB_00718f39;
    case 0x7d:
      goto LAB_00718f39;
    case 0x7e:
      goto LAB_00718f39;
    case 0x7f:
      goto LAB_00718f39;
    case 0x80:
      goto LAB_00718f39;
    case 0x81:
      goto LAB_00718f39;
    case 0x82:
      goto LAB_00718f39;
    case 0x83:
      goto LAB_00718f39;
    case 0x84:
      goto LAB_00718f39;
    case 0x85:
      goto LAB_00718f39;
    case 0x86:
      goto LAB_00718f39;
    case 0x87:
      goto LAB_00718f39;
    case 0x88:
      goto LAB_00718f39;
    case 0x89:
      goto LAB_00718f39;
    case 0x8a:
      goto LAB_00718f39;
    case 0x8b:
      goto LAB_00718f39;
    case 0x8c:
LAB_00718f39:
      FUN_00712770();
      break;
    case 0x8d:
      pvVar5 = operator_new(0xc);
      local_4 = 0x98;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a530();
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d190();
      }
      goto LAB_0071bc8d;
    case 0x8e:
      pvVar5 = operator_new(0xc);
      local_4 = 0x99;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a530();
LAB_0071916b:
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d240();
      }
      goto LAB_0071bc8d;
    case 0x8f:
      pvVar5 = operator_new(0xc);
      local_4 = 0x9a;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a530();
        goto LAB_0071916b;
      }
      goto LAB_0071bc8d;
    case 0x90:
      pvVar5 = operator_new(0xc);
      local_4 = 0x9b;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_0071bc1e;
    case 0x91:
      pvVar5 = operator_new(0xc);
      local_4 = 0xeb;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071e250();
      }
      goto LAB_0071bc8d;
    case 0x92:
      pvVar5 = operator_new(0xc);
      local_4 = 0xec;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x93:
      pvVar5 = operator_new(0xc);
      local_4 = 0xed;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x94:
      pvVar5 = operator_new(0xc);
      local_4 = 0x9c;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x95:
      pvVar5 = operator_new(0xc);
      local_4 = 0x9d;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d2f0();
      }
      goto LAB_0071bc1e;
    case 0x96:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa1;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d2f0();
      }
      goto LAB_0071bc1e;
    case 0x97:
      pvVar5 = operator_new(0xc);
      local_4 = 0x9f;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_0045fec0();
        FUN_0071e250();
      }
      goto LAB_0071bc1e;
    case 0x98:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa0;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0x99:
      pvVar5 = operator_new(0xc);
      local_4 = 0x9e;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_0071bc1e;
    case 0x9a:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa2;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071d390();
      }
      goto LAB_0071bc1e;
    case 0x9b:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa3;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d430();
      }
      goto LAB_0071bc8d;
    case 0x9c:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa4;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d430();
      }
      goto LAB_0071bc8d;
    case 0x9d:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa5;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d430();
      }
      goto LAB_0071bc8d;
    case 0x9e:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa6;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071d4e0();
      }
      goto LAB_0071bc8d;
    case 0x9f:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa7;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d580();
      }
      goto LAB_0071bc8d;
    case 0xa0:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa8;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d580();
      }
      goto LAB_0071bc8d;
    case 0xa1:
      iVar13 = 0;
      goto LAB_0071b8f7;
    case 0xa2:
      iVar13 = 1;
      goto LAB_0071b8f7;
    case 0xa3:
      iVar13 = 2;
      goto LAB_0071b8f7;
    case 0xa4:
      iVar13 = 3;
LAB_0071b8f7:
      FUN_0070a4b0();
      if (iVar13 == 3) {
        iVar13 = FUN_0070a500();
        if (iVar13 == 1) {
          FUN_0070a480();
        }
        else if (iVar13 == 2) {
          FUN_0054ed30();
        }
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0xfb;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_0071cfa0();
      }
      goto LAB_0071bc8d;
    case 0xa5:
      pvVar5 = operator_new(0xc);
      local_4 = 0xc;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc1e;
    case 0xa6:
      pvVar5 = operator_new(0xc);
      local_4 = 0xd;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc1e;
    case 0xa7:
      pvVar5 = operator_new(0xc);
      local_4 = 0xdc;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071d0f0();
      }
      goto LAB_0071bc8d;
    case 0xa8:
      pvVar5 = operator_new(0xc);
      local_4 = 0xde;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_0071e1c0();
      }
      goto LAB_0071bc8d;
    case 0xa9:
      goto LAB_0071b94b;
    case 0xaa:
      goto LAB_0071b94b;
    case 0xab:
      goto LAB_0071b94b;
    case 0xac:
      goto LAB_0071b94b;
    case 0xad:
      goto LAB_0071b94b;
    case 0xae:
      goto LAB_0071b94b;
    case 0xaf:
      goto LAB_0071b94b;
    case 0xb0:
      goto LAB_0071b94b;
    case 0xb1:
      goto LAB_0071b94b;
    case 0xb2:
      goto LAB_0071b94b;
    case 0xb3:
      goto LAB_0071b94b;
    case 0xb4:
      goto LAB_0071b94b;
    case 0xb5:
      goto LAB_0071b94b;
    case 0xb6:
      goto LAB_0071b94b;
    case 0xb7:
      goto LAB_0071b94b;
    case 0xb8:
      goto LAB_0071b94b;
    case 0xba:
      goto LAB_0071b94b;
    case 0xbb:
      goto LAB_0071b94b;
    case 0xbc:
      goto LAB_0071b94b;
    case 0xbd:
      goto LAB_0071b94b;
    case 0xbe:
      goto LAB_0071b94b;
    case 0xbf:
      goto LAB_0071b94b;
    case 0xc0:
      goto LAB_0071b94b;
    case 0xc1:
      goto LAB_0071b94b;
    case 0xc2:
      goto LAB_0071b94b;
    case 0xc3:
      goto LAB_0071b94b;
    case 0xc4:
      goto LAB_0071b94b;
    case 0xc5:
      goto LAB_0071b94b;
    case 0xc6:
      goto LAB_0071b94b;
    case 199:
      goto LAB_0071b94b;
    case 200:
      goto LAB_0071b94b;
    case 0xc9:
      goto LAB_0071b94b;
    case 0xca:
      goto LAB_0071b94b;
    case 0xcb:
      goto LAB_0071b94b;
    case 0xcc:
      goto LAB_0071b94b;
    case 0xcd:
      goto LAB_0071b94b;
    case 0xce:
      goto LAB_0071b94b;
    case 0xcf:
      goto LAB_0071b94b;
    case 0xd0:
      goto LAB_0071b94b;
    case 0xd1:
      goto LAB_0071b94b;
    case 0xd2:
      goto LAB_0071b94b;
    case 0xd3:
      goto LAB_0071b94b;
    case 0xd4:
      goto LAB_0071b94b;
    case 0xd5:
      goto LAB_0071b94b;
    case 0xd6:
      goto LAB_0071b94b;
    case 0xd7:
      pvVar5 = operator_new(0xc);
      local_4 = 0xdd;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071d050();
      }
      goto LAB_0071bc8d;
    case 0xd8:
      cVar4 = (**(code **)(*param_2 + 0x1c))();
      if (cVar4 != '\0') {
        if (DAT_00dc1912 == '\0') {
          FUN_00540ab0();
        }
        else {
          puVar11 = operator_new(0xc);
          local_4 = 1;
          if (puVar11 != (undefined4 *)0x0) {
            uVar12 = *(undefined4 *)((int)param_2 + 6);
            FUN_0072b280();
            *puVar11 = &PTR_FUN_007eabbc;
            _strncpy((char *)(puVar11[1] + 0xe),(char *)(iVar13 + 0x28),0x3f);
            *(undefined1 *)(puVar11[1] + 0x4d) = 0;
            *(undefined4 *)(puVar11[1] + 0x4e) = uVar12;
          }
          local_4 = 0xffffffff;
          FUN_00565bc0();
        }
      }
      break;
    case 0xd9:
      FUN_00496e60();
      FUN_0044c450();
      fVar17 = (float10)FUN_0070a4b0();
      if ((float10)_DAT_007e3380 <= fVar17) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_0044c4a0();
      }
      local_434 = 1;
      iVar13 = FUN_0070a4c0();
      if (0 < iVar13) {
        local_434 = FUN_0070a4c0();
      }
      fVar17 = (float10)FUN_0071c420();
      if (fVar17 == (float10)_DAT_007e3380) {
        FUN_00467290();
      }
      else {
        FUN_0071c420();
      }
      iVar13 = FUN_0070a510();
      if (iVar13 < 1) {
        FUN_00466b90();
        FUN_0071eb20();
      }
      else {
        FUN_00466b90();
        FUN_0070a510();
        FUN_0071eb30();
        FUN_0071eb20();
      }
      fVar17 = (float10)FUN_004673a0();
      fVar18 = (float10)FUN_0071c330();
      if ((float10)(float)fVar17 <= fVar18) {
        FUN_00428eb0();
        if (local_434 < 2) {
          pcVar9 = (char *)FUN_0071c430();
          if (*pcVar9 == '\0') {
            FUN_005bf284();
          }
          else {
            FUN_0071c430();
          }
        }
        FUN_0044e1b0();
        FUN_00446d10();
        FUN_0045dde0();
      }
      break;
    case 0xda:
      pvVar5 = operator_new(0xc);
      local_4 = 0x40;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4d0();
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071ddb0();
      }
      goto LAB_0071bc1e;
    case 0xdb:
      local_43c = (int *)0x0;
      cVar4 = FUN_00549790();
      if (cVar4 != '\0') {
        local_43c = (int *)FUN_0070a580();
      }
      FUN_00428eb0();
      FUN_0070a4b0();
      iVar13 = __ftol();
      iVar7 = FUN_0070a4d0();
      if (0 < iVar7) {
        FUN_0070a4d0();
      }
      iVar7 = FUN_0044c450();
      iVar8 = FUN_0070a4c0();
      if (-1 < iVar8) {
        iVar7 = FUN_0070a4c0();
      }
      iVar8 = (**(code **)(*(int *)((int)&DAT_00d7676a + iVar13 * 0x12) + 4))();
      if (iVar8 <= iVar7) {
        (**(code **)(*(int *)((int)&DAT_00d7676a + iVar13 * 0x12) + 4))();
      }
      FUN_0070a4f0();
      FUN_00449290();
      FUN_0045e580();
      iVar13 = FUN_0070a3a0();
      if (iVar13 != 0) {
        iVar13 = FUN_0070a4d0();
        if (iVar13 < 0) {
          FUN_0070a4d0();
          FUN_00526a20();
          pvVar5 = operator_new(0xc);
          local_4 = 0x33;
          if (pvVar5 != (void *)0x0) {
            FUN_00447250();
            FUN_0071ccd0();
          }
          local_4 = 0xffffffff;
          FUN_00565bc0();
        }
        if ((((local_43c != (int *)0x0) &&
             ((cVar4 = FUN_0054ed40(), cVar4 == '\0' ||
              (cVar4 = (**(code **)(*local_43c + 0x28))(), cVar4 != '\0')))) &&
            ((cVar4 = FUN_0048e0c0(), cVar4 == '\0' ||
             (cVar4 = (**(code **)(*local_43c + 0x2c))(), cVar4 != '\0')))) &&
           ((cVar4 = FUN_0054ed50(), cVar4 == '\0' ||
            (cVar4 = (**(code **)(*local_43c + 0x30))(), cVar4 != '\0')))) {
          FUN_00449290();
          FUN_0045e6f0();
        }
      }
      break;
    case 0xdc:
      FUN_00428eb0();
      FUN_00446d10();
      iVar13 = FUN_0070a4c0();
      if (0 < iVar13) {
        FUN_0070a4c0();
        FUN_00477fc0();
      }
      fVar17 = (float10)FUN_0070a4b0();
      if (fVar17 == (float10)_DAT_007e3380) {
        FUN_0070a4f0();
        FUN_00446d10();
        FUN_0070a4d0();
        FUN_00449290();
        FUN_00461e60();
      }
      else {
        fVar17 = (float10)FUN_0070a4b0();
        if (fVar17 == (float10)_DAT_007e3374) {
          FUN_0070a4f0();
          FUN_00446d10();
          FUN_0070a4d0();
          FUN_00449290();
          FUN_00462100();
        }
        else {
          FUN_0070a4f0();
          FUN_00446d10();
          FUN_0070a4d0();
          FUN_00449290();
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
        FUN_00526a20();
        FUN_0070a4d0();
        pvVar5 = operator_new(0xc);
        local_4 = 0x35;
joined_r0x00715d76:
        if (pvVar5 != (void *)0x0) {
          FUN_00447250();
          FUN_0071ccd0();
        }
        goto LAB_0071bc8d;
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
        pvVar5 = operator_new(0xc);
        local_4 = 0x37;
        if (pvVar5 != (void *)0x0) {
          FUN_0045f730();
          FUN_00447250();
          FUN_0070a3c0();
          FUN_0045fec0();
          FUN_0071c830();
        }
        local_4 = 0xffffffff;
        FUN_00565bc0();
        if ((iVar13 != 0) && (iVar13 = (**(code **)(*(int *)(iVar13 + 0x22) + 4))(), iVar13 == 0)) {
          pvVar5 = operator_new(0xc);
          local_4 = 0x38;
          if (pvVar5 != (void *)0x0) {
            FUN_0045f730();
            FUN_00447250();
            FUN_00494b80();
            FUN_0045fec0();
            FUN_00521370();
          }
          goto LAB_0071bc1e;
        }
      }
      break;
    case 0xdf:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0070a3a0();
      if ((iVar13 != 0) && (iVar13 = FUN_0070a3c0(), iVar13 != 0)) {
        FUN_0070a4d0();
        FUN_004e9370();
        FUN_00513f90();
        FUN_00458280();
        cVar4 = FUN_0044b280();
        if ((cVar4 != '\0') && (iVar13 = FUN_0070a4c0(), iVar13 < 1)) {
          FUN_0071c3a0();
        }
        piVar14 = (int *)FUN_0070a580();
        iVar13 = FUN_0070a4d0();
        if ((0 < iVar13) || (piVar14 != (int *)0x0)) {
          if (piVar14 == (int *)0x0) {
LAB_00715abe:
            FUN_00428eb0();
            cVar4 = FUN_0054ed40();
            if (cVar4 == '\0') {
              cVar4 = FUN_0048e0c0();
              if (cVar4 == '\0') {
                FUN_00446d10();
                FUN_0070a4d0();
                FUN_00449290();
                FUN_00461fb0();
              }
              else {
                FUN_00446d10();
                FUN_0070a4d0();
                FUN_00449290();
                FUN_00462100();
              }
            }
            else {
              FUN_00446d10();
              FUN_0070a4d0();
              FUN_00449290();
              FUN_00461e60();
            }
          }
          else {
            iVar13 = FUN_0070a4d0();
            if (0 < iVar13) {
              iVar13 = FUN_00516300();
              iVar7 = FUN_0070a4d0();
              if (iVar13 != iVar7) goto LAB_00715abe;
            }
            cVar4 = (**(code **)(*piVar14 + 0x28))();
            if ((((cVar4 != '\0') && (cVar4 = FUN_0054ed40(), cVar4 == '\0')) ||
                ((cVar4 = (**(code **)(*piVar14 + 0x30))(), cVar4 != '\0' &&
                 (cVar4 = FUN_0054ed50(), cVar4 == '\0')))) ||
               ((cVar4 = (**(code **)(*piVar14 + 0x2c))(), cVar4 != '\0' &&
                (cVar4 = FUN_0048e0c0(), cVar4 == '\0')))) goto LAB_00715abe;
          }
          piVar14 = (int *)FUN_0070a580();
          if ((piVar14 != (int *)0x0) &&
             ((((cVar4 = FUN_0054ed40(), cVar4 != '\0' &&
                (cVar4 = (**(code **)(*piVar14 + 0x28))(), cVar4 == '\0')) ||
               ((cVar4 = FUN_0048e0c0(), cVar4 != '\0' &&
                (cVar4 = (**(code **)(*piVar14 + 0x2c))(), cVar4 == '\0')))) ||
              ((cVar4 = FUN_0054ed50(), cVar4 != '\0' &&
               (cVar4 = (**(code **)(*piVar14 + 0x30))(), cVar4 == '\0')))))) break;
          FUN_00449290();
          FUN_0045e6f0();
        }
        pvVar5 = operator_new(0xc);
        local_4 = 0x34;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4d0();
          FUN_00447250();
          FUN_0071e250();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0xe0:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      iVar13 = FUN_0070a3a0();
      if (iVar13 != 0) {
        FUN_0070a4d0();
        FUN_004fd510();
        pvVar5 = operator_new(0xc);
        local_4 = 0x36;
        goto joined_r0x00715d76;
      }
      break;
    case 0xe1:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0xe2:
      pvVar5 = operator_new(0xc);
      local_4 = 0xf;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0xe3:
      pvVar5 = operator_new(0xc);
      local_4 = 0x10;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0xe4:
      pvVar5 = operator_new(0xc);
      local_4 = 0x11;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0xe5:
      pvVar5 = operator_new(0xc);
      local_4 = 0x12;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0xe6:
      pvVar5 = operator_new(0xc);
      local_4 = 0x13;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0xe7:
      pvVar5 = operator_new(0xc);
      local_4 = 0x14;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc1e;
    case 0xe8:
      pvVar5 = operator_new(0xc);
      local_4 = 0x3d;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071e250();
      }
      goto LAB_0071bc1e;
    case 0xe9:
      pvVar5 = operator_new(0xc);
      local_4 = 10;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0044dc80();
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        FUN_00458280();
        FUN_0045fec0();
        FUN_00446d10();
        FUN_004638c0();
      }
      goto LAB_0071bc8d;
    case 0xea:
      pvVar5 = operator_new(0xc);
      local_4 = 0xb;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00516890();
        FUN_00496e60();
        FUN_00458280();
        FUN_0045fec0();
        FUN_00446d10();
        FUN_004638c0();
      }
      goto LAB_0071bc8d;
    case 0xeb:
      FUN_00496e60();
      FUN_0044dc80();
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0045bbf0();
      break;
    case 0xec:
      FUN_00496e60();
      FUN_00477fc0();
      FUN_0070a5a0();
      FUN_0045f730();
      FUN_0044df10();
      FUN_00446d10();
      FUN_0045f460();
      break;
    case 0xed:
      FUN_00496e60();
      FUN_00477fc0();
      iVar13 = FUN_0070a5a0();
      FUN_0071c2f0();
      FUN_0054ef90();
      FUN_0045f730();
      cVar4 = FUN_0054efc0();
      while (cVar4 != '\0') {
        FUN_0054efa0();
        FUN_0054efb0();
        iVar7 = FUN_004988c0();
        if (iVar7 == iVar13) {
          FUN_00447250();
          break;
        }
        cVar4 = FUN_0054efc0();
      }
      cVar4 = FUN_00549790();
      if (cVar4 != '\0') {
        FUN_00446d10();
        FUN_0045f240();
      }
      break;
    case 0xee:
      FUN_00465c40();
      pvVar5 = operator_new(0xc);
      local_4 = 0x39;
      if (pvVar5 != (void *)0x0) {
        FUN_00584c90();
        FUN_00447250();
        FUN_0045fec0();
        FUN_005b4790();
      }
      local_4 = 0xffffffff;
      iVar13 = FUN_0070a500();
      if (iVar13 == 1) {
        iVar13 = FUN_00498d60();
        *(undefined1 *)(iVar13 + 0x1c) = 1;
      }
      FUN_00565bc0();
      break;
    case 0xef:
      iVar13 = FUN_00496e60();
      piVar14 = param_2;
      if (iVar13 != 0) {
        FUN_00496e60();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
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
          goto switchD_0071386c_caseD_2;
        }
        if (iVar13 != 0) {
          pvVar5 = operator_new(0xc);
          local_4 = 0x3a;
          if (pvVar5 != (void *)0x0) {
            FUN_00458280();
            FUN_00447250();
            FUN_0045fec0();
            FUN_0071e680();
          }
          goto LAB_0071bc8d;
        }
      }
      break;
    case 0xf0:
      iVar7 = FUN_0070a510();
      iVar13 = DAT_00d615c2;
      if ((((iVar7 == 1) || (iVar13 = DAT_00d615c6, iVar7 == 2)) ||
          (iVar13 = DAT_00d615ca, iVar7 == 3)) && (iVar13 != 0)) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x3b;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4f0();
          FUN_00447250();
          FUN_0045fec0();
          FUN_0071e740();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0xf1:
      pvVar5 = operator_new(0xc);
      local_4 = 0x3e;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_0071c930();
      }
      goto LAB_0071bc8d;
    case 0xf2:
      pvVar5 = operator_new(0xc);
      local_4 = 0x3f;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071c930();
      }
      goto LAB_0071bc8d;
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
      iVar7 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar7 != 0)) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x8e;
        if (pvVar5 != (void *)0x0) {
          FUN_00458280();
          FUN_00458280();
          FUN_0045fec0();
          FUN_0047c090();
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0xf5:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar7 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar7 != 0)) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x8f;
        if (pvVar5 != (void *)0x0) {
          FUN_00458280();
          FUN_0045fec0();
          FUN_0071c930();
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0xf6:
      pvVar5 = operator_new(0xc);
      local_4 = 0x90;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_0071bc1e;
    case 0xf7:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x91;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4b0();
          __ftol();
          FUN_0045fec0();
          FUN_0071e250();
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0xf8:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x92;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4b0();
          __ftol();
          FUN_0045fec0();
          FUN_0071e250();
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0xf9:
      pvVar5 = operator_new(0xc);
      local_4 = 0x93;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc1e;
    case 0xfa:
      pvVar5 = operator_new(0xc);
      local_4 = 0x94;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc1e;
    case 0xfb:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar7 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar7 != 0)) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x95;
        if (pvVar5 != (void *)0x0) {
          FUN_0045f730();
          FUN_0070a500();
          FUN_00458280();
          FUN_00458280();
          FUN_0045fec0();
          FUN_00464820();
        }
        local_4 = 0xffffffff;
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
      iVar7 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar7 != 0)) {
        pvVar5 = operator_new(0xc);
        local_4 = 0x96;
        if (pvVar5 != (void *)0x0) {
          FUN_0045f730();
          FUN_00458280();
          FUN_00458280();
          FUN_0045fec0();
          FUN_00464820();
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0xfd:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar7 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar7 != 0)) {
        FUN_004986b0();
        cVar4 = FUN_004986e0();
        while (cVar4 != '\0') {
          FUN_004986c0();
          FUN_004986d0();
          iVar13 = FUN_00498ae0();
          if (iVar13 == 0) {
            FUN_00458280();
            cVar4 = FUN_0071eba0();
            if (cVar4 != '\0') {
              FUN_00458280();
              cVar4 = FUN_0071eba0();
              if (cVar4 != '\0') {
                pvVar5 = operator_new(0xc);
                local_4 = 0x97;
                if (pvVar5 != (void *)0x0) {
                  FUN_00447250();
                  FUN_00449290();
                  FUN_00458280();
                  FUN_00458280();
                  FUN_0045fec0();
                  FUN_00464820();
                }
                local_4 = 0xffffffff;
                FUN_00565ca0();
              }
            }
          }
          cVar4 = FUN_004986e0();
        }
      }
      break;
    case 0xfe:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar7 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar7 != 0)) {
        FUN_00442b90();
        local_b4 = 1;
        fVar17 = (float10)FUN_0071c3e0();
        local_d8 = (float)-fVar17;
        fVar17 = (float10)FUN_0071c3f0();
        local_dc = (float)-fVar17;
        fVar17 = (float10)FUN_0071c3d0();
        local_d0 = (float)-fVar17;
        fVar17 = (float10)FUN_0071c3c0();
        local_cc = (float)-fVar17;
        fVar17 = (float10)FUN_0071c3b0();
        local_d4 = (float)-fVar17;
        fVar17 = (float10)FUN_0071c400();
        local_c8 = (float)-fVar17;
        local_12 = FUN_0070a4c0();
        fVar17 = (float10)FUN_0070a4b0();
        local_e = fVar17 == (float10)_DAT_007e3374;
        FUN_00471500(local_e0);
        uVar12 = FUN_00458280();
        FUN_0045ccd0(uVar12);
      }
      break;
    case 0x100:
      FUN_0070a4b0();
      uVar12 = FUN_00496e60();
      switch(uVar12) {
      case 0:
        FUN_0071c350();
        pvVar5 = operator_new(0xc);
        local_4 = 0x6f;
        if (pvVar5 == (void *)0x0) {
LAB_00717fc5:
          iVar13 = 0;
        }
        else {
          FUN_0045fec0();
          iVar13 = FUN_0071de60();
        }
        break;
      case 1:
        FUN_0071c370();
        pvVar5 = operator_new(0xc);
        local_4 = 0x70;
        if (pvVar5 == (void *)0x0) goto LAB_00717fc5;
        FUN_0045fec0();
        iVar13 = FUN_0071de60();
        break;
      case 2:
        FUN_0071c360();
        pvVar5 = operator_new(0xc);
        local_4 = 0x71;
        if (pvVar5 == (void *)0x0) goto LAB_00717fc5;
        FUN_0045fec0();
        iVar13 = FUN_0071de60();
        break;
      case 3:
        FUN_0071c380();
        pvVar5 = operator_new(0xc);
        local_4 = 0x72;
        if (pvVar5 == (void *)0x0) goto LAB_00717fc5;
        FUN_0045fec0();
        iVar13 = FUN_0071de60();
        break;
      case 4:
        FUN_0071c2c0();
        FUN_0071eb90();
        FUN_0071c340();
        FUN_0048c9b0();
        pvVar5 = operator_new(0xc);
        local_4 = 0x73;
        if (pvVar5 == (void *)0x0) goto LAB_00717fc5;
        FUN_0045fec0();
        iVar13 = FUN_0071de60();
        break;
      case 5:
        FUN_0071c340();
        FUN_0071c2d0();
        FUN_0048c9b0();
        FUN_0071c300();
        pvVar5 = operator_new(0xc);
        local_4 = 0x74;
        if (pvVar5 == (void *)0x0) goto LAB_00717fc5;
        FUN_0045fec0();
        iVar13 = FUN_0071de60();
        break;
      default:
        goto switchD_0071386c_caseD_2;
      }
      local_4 = 0xffffffff;
      if (iVar13 != 0) {
        FUN_00565ca0();
      }
      break;
    case 0x101:
      pvVar5 = operator_new(0xc);
      local_4 = 0xdf;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0045fec0();
        FUN_0071e250();
      }
      goto LAB_0071bc8d;
    case 0x102:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe0;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x103:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe1;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x104:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe2;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x105:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe3;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x106:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe4;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x107:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe5;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x108:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe6;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x109:
      cVar4 = FUN_0070a530();
      if (cVar4 == '\0') {
        pvVar5 = operator_new(0xc);
        local_4 = 0xea;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4b0();
          __ftol();
          FUN_00496e60();
          FUN_0045fec0();
          FUN_0071c520();
        }
      }
      else {
        pvVar5 = operator_new(0xc);
        local_4 = 0xe9;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4b0();
          __ftol();
          FUN_00496e60();
          FUN_0045fec0();
          FUN_0071c520();
        }
      }
      goto LAB_0071bc8d;
    case 0x10a:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe7;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x10c:
      pvVar5 = operator_new(0xc);
      local_4 = 0xee;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_0071bc8d;
    case 0x10d:
      pvVar5 = operator_new(0xc);
      local_4 = 0xef;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_0071bc8d;
    case 0x10e:
      pvVar5 = operator_new(0xc);
      local_4 = 0xf0;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071e250();
      }
      goto LAB_0071bc8d;
    case 0x10f:
      pvVar5 = operator_new(0xc);
      local_4 = 0xf1;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x110:
      pvVar5 = operator_new(0xc);
      local_4 = 0xe8;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x111:
      iVar13 = FUN_00496e60();
      if (0 < iVar13) {
        pvVar5 = operator_new(0xc);
        local_4 = 0xf4;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4b0();
          FUN_00496e60();
          FUN_0070a4d0();
          FUN_0045fec0();
          FUN_0071cd90();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0x112:
      pvVar5 = operator_new(0xc);
      local_4 = 0xf2;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x113:
      pvVar5 = operator_new(0xc);
      local_4 = 0xf3;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071c520();
      }
      goto LAB_0071bc8d;
    case 0x114:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      pvVar5 = operator_new(0xc);
      local_4 = 0xf5;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4c0();
        FUN_0070a4d0();
        FUN_00449290();
        FUN_0070a4d0();
        FUN_00465bd0();
        FUN_0044df10();
        FUN_0071cee0();
      }
      goto LAB_0071bc8d;
    case 0x115:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      pvVar5 = operator_new(0xc);
      local_4 = 0xf6;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4c0();
        FUN_0070a4d0();
        FUN_00449290();
        FUN_0070a4d0();
        FUN_00465bd0();
        FUN_0044df10();
        FUN_0071cee0();
      }
      goto LAB_0071bc1e;
    case 0x116:
      FUN_0070a4b0();
      __ftol();
      FUN_00496e60();
      FUN_0070a300();
      pvVar5 = operator_new(0xc);
      local_4 = 0xf7;
      if (pvVar5 != (void *)0x0) {
        FUN_00449290();
        FUN_0070a4d0();
        FUN_00465bd0();
        FUN_0044df10();
        FUN_0071cee0();
      }
      goto LAB_0071bc1e;
    case 0x117:
      pvVar5 = operator_new(0xc);
      local_4 = 0xf8;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        FUN_00496e60();
        FUN_00465bd0();
        FUN_0044df10();
        FUN_0071c520();
      }
      goto LAB_0071bc1e;
    case 0x118:
    case 0x119:
      pvVar5 = operator_new(0xc);
      local_4 = 0x2a;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_00496e60();
        FUN_0070a300();
        FUN_006902c0();
      }
      goto LAB_0071bc1e;
    case 0x11a:
      if (*(float *)(iVar13 + 8) != _DAT_007e3380) {
        __ftol();
      }
      if (*(int *)(iVar13 + 0x10) == 1) {
        FUN_0071c2a0();
        FUN_006aee10();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 3;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4f0();
LAB_00713cfc:
        FUN_0045fec0();
        FUN_0071e3b0();
      }
      goto LAB_0071bc8d;
    case 0x11b:
      fVar17 = (float10)FUN_0070a4b0();
      if (fVar17 != (float10)_DAT_007e3380) {
        FUN_0070a4b0();
        __ftol();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 5;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4f0();
        FUN_0045fec0();
        FUN_0071e3b0();
      }
      goto LAB_0071bc8d;
    case 0x11c:
      pvVar5 = operator_new(0xc);
      local_4 = 4;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4f0();
        FUN_0045fec0();
        FUN_0071e3b0();
      }
      goto LAB_0071bc8d;
    case 0x11d:
      fVar17 = (float10)FUN_0070a4b0();
      if (fVar17 != (float10)_DAT_007e3380) {
        FUN_0070a4b0();
        __ftol();
      }
      iVar13 = FUN_0070a4c0();
      if (iVar13 == 1) {
        FUN_0070a4f0();
        FUN_0071c2e0();
        FUN_0071eb80();
        FUN_006aee10();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 6;
      if (pvVar5 != (void *)0x0) {
        FUN_00458280();
        FUN_0070a4f0();
        goto LAB_00713cfc;
      }
      goto LAB_0071bc8d;
    case 0x11e:
      fVar17 = (float10)FUN_0070a4b0();
      if (fVar17 != (float10)_DAT_007e3380) {
        FUN_0070a4b0();
        __ftol();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 8;
      if (pvVar5 != (void *)0x0) {
        FUN_00458280();
        FUN_0070a4f0();
        FUN_0045fec0();
        FUN_0071e3b0();
      }
      goto LAB_0071bc8d;
    case 0x11f:
      pvVar5 = operator_new(0xc);
      local_4 = 7;
      if (pvVar5 != (void *)0x0) {
        FUN_00458280();
        FUN_0070a4f0();
        FUN_0045fec0();
        FUN_0071e3b0();
      }
      goto LAB_0071bc8d;
    case 0x120:
      pvVar5 = operator_new(0xc);
      local_4 = 0xa9;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a4c0();
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071e510();
      }
      goto LAB_0071bc8d;
    case 0x121:
      uVar12 = FUN_00496e60();
      switch(uVar12) {
      case 0:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492960();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb0;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492960();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb1;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492950();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb2;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492950();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb3;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_0070a400();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb4;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_0070a400();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb5;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        break;
      case 1:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492960();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xbc;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492960();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xbd;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492950();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xbe;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492950();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xbf;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_0070a400();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xc0;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_0070a400();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xc1;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        break;
      case 2:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492960();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xaa;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492960();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xab;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492950();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xac;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492950();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xad;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_0070a400();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xae;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_0070a400();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xaf;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        break;
      case 3:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492960();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb6;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492960();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb7;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492950();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb8;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492950();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xb9;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_0070a400();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xba;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_0070a400();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xbb;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        break;
      case 4:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492960();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xc2;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492960();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xc3;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492950();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xc4;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492950();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xc5;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_0070a400();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xc6;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_0070a400();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 199;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        break;
      case 5:
        iVar13 = FUN_0070a4c0();
        if (iVar13 == 5) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492960();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 200;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492960();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xc9;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 6) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_00492950();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xca;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_00492950();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xcb;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
        else if (iVar13 == 7) {
          fVar17 = (float10)FUN_0070a4b0();
          if (fVar17 == (float10)_DAT_007e3380) {
            cVar4 = FUN_0070a400();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xcc;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
          else {
            cVar4 = FUN_0070a400();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xcd;
              if (pvVar5 != (void *)0x0) {
                FUN_0045fec0();
                FUN_006902c0();
              }
              goto LAB_0071bc8d;
            }
          }
        }
      }
      break;
    case 0x122:
      pvVar5 = operator_new(0xc);
      local_4 = 0xce;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_006902c0();
      }
      goto LAB_0071bc8d;
    case 0x123:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar7 = FUN_00465c30();
      if ((iVar13 != 0) && (iVar7 != 0)) {
        fVar17 = (float10)FUN_0070a4b0();
        if (fVar17 == (float10)_DAT_007e7828) {
          pvVar5 = operator_new(0xc);
          local_4 = 0xf9;
          if (pvVar5 != (void *)0x0) {
            FUN_0045f730();
            FUN_00458280();
            FUN_00458280();
LAB_0071bbc1:
            FUN_00464820();
          }
        }
        else {
          pvVar5 = operator_new(0xc);
          local_4 = 0xfa;
          if (pvVar5 != (void *)0x0) {
            FUN_0045f730();
            FUN_00458280();
            FUN_00458280();
            goto LAB_0071bbc1;
          }
        }
        goto LAB_0071bc1e;
      }
      break;
    case 0x124:
      FUN_0070a4d0();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0xcf;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4f0();
          FUN_0045fec0();
          FUN_0071e5c0();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0x125:
      FUN_00496e60();
      iVar13 = FUN_00465c30();
      FUN_0070a4d0();
      iVar7 = FUN_00465c30();
      if ((iVar13 == 0) || (iVar7 == 0)) break;
      FUN_0070a4b0();
      uVar12 = __ftol();
      switch(uVar12) {
      case 1:
      case 3:
switchD_0071a588_caseD_3:
        break;
      case 2:
        goto switchD_0071a588_caseD_3;
      case 0xfffffffe:
        break;
      case 0xffffffff:
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0xd1;
      if (pvVar5 != (void *)0x0) {
        FUN_00458280();
        FUN_00458280();
        FUN_0045fec0();
        FUN_0047c090();
      }
      goto LAB_0071bc8d;
    case 0x126:
      FUN_0070a4d0();
      iVar13 = FUN_00465c30();
      if (iVar13 != 0) {
        pvVar5 = operator_new(0xc);
        local_4 = 0xd0;
        if (pvVar5 != (void *)0x0) {
          FUN_0070a4f0();
          FUN_0045fec0();
          FUN_0071e5c0();
        }
        goto LAB_0071bc8d;
      }
      break;
    case 0x127:
      FUN_00496e60();
      cVar4 = FUN_0070a540();
      if (cVar4 != '\0') {
        FUN_00496e60();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0xd2;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a500();
        FUN_0070a510();
        FUN_0071c410();
        FUN_0070a4b0();
        FUN_0045fec0();
        FUN_0071e820();
      }
      goto LAB_0071bc8d;
    case 0x128:
      FUN_00496e60();
      cVar4 = FUN_0070a540();
      if (cVar4 != '\0') {
        FUN_00496e60();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0xd3;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0070a510();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071e8e0();
      }
      goto LAB_0071bc8d;
    case 0x129:
      FUN_00496e60();
      cVar4 = FUN_0070a540();
      if (cVar4 != '\0') {
        FUN_00496e60();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0xd4;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        FUN_0070a510();
        FUN_0070a500();
        FUN_0045fec0();
        FUN_0071e9a0();
      }
      goto LAB_0071bc8d;
    case 0x12a:
      goto LAB_0071b94b;
    case 299:
      goto LAB_0071b94b;
    case 300:
      goto LAB_0071b94b;
    case 0x12d:
      goto LAB_0071b94b;
    case 0x12e:
      goto LAB_0071b94b;
    case 0x12f:
LAB_0071b94b:
      FUN_00712fe0();
      break;
    case 0x130:
      FUN_00496e60();
      cVar4 = FUN_0070a540();
      if (cVar4 != '\0') {
        FUN_00496e60();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0xd5;
      if (pvVar5 != (void *)0x0) {
        FUN_0070a4b0();
        __ftol();
        FUN_0070a500();
        FUN_0070a4d0();
        FUN_0045fec0();
        FUN_0071ea60();
      }
      goto LAB_0071bc8d;
    case 0x131:
      FUN_00428eb0();
      FUN_0070a4b0();
      iVar13 = __ftol();
      iVar7 = FUN_0044c4a0();
      iVar8 = FUN_0070a4c0();
      if (-1 < iVar8) {
        iVar7 = FUN_0070a4c0();
      }
      iVar8 = (**(code **)(*(int *)(&DAT_00d77142 + iVar13 * 0x12) + 4))();
      if (iVar8 <= iVar7) {
        (**(code **)(*(int *)(&DAT_00d77142 + iVar13 * 0x12) + 4))();
      }
      FUN_00449290();
      FUN_0045e580();
      break;
    case 0x132:
      FUN_0070a4b0();
      FUN_00516890();
      FUN_0044c4a0();
      iVar13 = FUN_0070a4c0();
      if (0 < iVar13) {
        FUN_0070a4c0();
      }
      fVar17 = (float10)FUN_0071c420();
      if (fVar17 == (float10)_DAT_007e3380) {
        FUN_004672f0();
      }
      else {
        FUN_0071c420();
      }
      iVar13 = FUN_0070a510();
      if (iVar13 < 1) {
        FUN_00467030();
        FUN_0071eb20();
      }
      else {
        FUN_00467030();
        FUN_0070a510();
        FUN_0071eb30();
        FUN_0071eb20();
      }
      fVar17 = (float10)FUN_00467430();
      fVar18 = (float10)FUN_0071c330();
      if ((float10)(float)fVar17 <= fVar18) {
        FUN_0044e100();
        FUN_0044e1b0();
        FUN_00428eb0();
        FUN_00446d10();
        FUN_0045df90();
      }
      break;
    case 0x133:
      pvVar5 = operator_new(0xc);
      local_4 = 0x3c;
      if (pvVar5 != (void *)0x0) {
        FUN_00496e60();
        FUN_0045fec0();
        FUN_0071e250();
      }
LAB_0071bc1e:
      local_4 = 0xffffffff;
      FUN_00565ca0();
      break;
    case 0x134:
      FUN_0071c310();
      iVar13 = FUN_0070a4c0();
      if (iVar13 == 0) {
        FUN_0070a4b0();
      }
      else if (iVar13 == 1) {
        FUN_0070a4b0();
      }
      else if (iVar13 == 2) {
        FUN_0054ed30();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0xd6;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_0071c480();
      }
      goto LAB_0071bc8d;
    case 0x135:
      FUN_0071c320();
      iVar13 = FUN_0070a4c0();
      if (iVar13 == 0) {
        FUN_0070a4b0();
      }
      else if (iVar13 == 1) {
        FUN_0070a4b0();
      }
      else if (iVar13 == 2) {
        FUN_0054ed30();
      }
      pvVar5 = operator_new(0xc);
      local_4 = 0xd7;
      if (pvVar5 != (void *)0x0) {
        FUN_0045fec0();
        FUN_0071c480();
      }
LAB_0071bc8d:
      local_4 = 0xffffffff;
      FUN_00565bc0();
      break;
    case 0x136:
    case 0x137:
      iVar13 = FUN_0070a510();
      piVar14 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        iVar13 = FUN_0071c390();
        if (iVar13 == 0x137) {
          FUN_00496e60();
          FUN_00512570();
        }
        else {
          FUN_00496e60();
          FUN_00512560();
        }
        FUN_00516270();
        FUN_0072a390();
        cVar4 = FUN_005162c0();
        while (cVar4 != '\0') {
          FUN_005162b0();
          cVar4 = FUN_00514000();
          if ((cVar4 == '\0') && (cVar4 = FUN_004e8f30(), cVar4 != '\0')) {
            piVar14 = (int *)FUN_0054ed90();
            iVar13 = *piVar14;
            FUN_0048b970();
            cVar4 = (**(code **)(iVar13 + 0x24))();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xd8;
              if (pvVar5 != (void *)0x0) {
                FUN_0048b970();
                FUN_0045fec0();
                FUN_0047de00();
              }
              local_4 = 0xffffffff;
              FUN_00565bc0();
            }
          }
          FUN_005162a0();
          cVar4 = FUN_005162c0();
        }
      }
      break;
    case 0x138:
    case 0x139:
      iVar13 = FUN_0070a510();
      piVar14 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        iVar13 = FUN_0071c390();
        if (iVar13 == 0x139) {
          FUN_00496e60();
          FUN_00512570();
        }
        else {
          FUN_00496e60();
          FUN_00512560();
        }
        FUN_00516270();
        FUN_0072a390();
        cVar4 = FUN_005162c0();
        while (cVar4 != '\0') {
          FUN_005162b0();
          cVar4 = FUN_00514000();
          if ((cVar4 == '\0') && (cVar4 = FUN_004e8f30(), cVar4 != '\0')) {
            piVar14 = (int *)FUN_0054ed90();
            iVar13 = *piVar14;
            FUN_0048b970();
            cVar4 = (**(code **)(iVar13 + 0x24))();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xd9;
              if (pvVar5 != (void *)0x0) {
                FUN_0048b970();
                FUN_0045fec0();
                FUN_0047de00();
              }
              local_4 = 0xffffffff;
              FUN_00565bc0();
            }
          }
          FUN_005162a0();
          cVar4 = FUN_005162c0();
        }
      }
      break;
    case 0x13a:
    case 0x13b:
      iVar13 = FUN_0070a510();
      piVar14 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        iVar13 = FUN_0071c390();
        if (iVar13 == 0x13b) {
          FUN_00496e60();
          FUN_00512570();
        }
        else {
          FUN_00496e60();
          FUN_00512560();
        }
        FUN_00516270();
        FUN_0072a390();
        cVar4 = FUN_005162c0();
        while (cVar4 != '\0') {
          FUN_005162b0();
          cVar4 = FUN_00514000();
          if ((cVar4 == '\0') && (cVar4 = FUN_004e8f30(), cVar4 != '\0')) {
            piVar14 = (int *)FUN_0054eda0();
            iVar13 = *piVar14;
            FUN_0048b970();
            cVar4 = (**(code **)(iVar13 + 0x24))();
            if (cVar4 == '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xda;
              if (pvVar5 != (void *)0x0) {
                FUN_0048b970();
                FUN_0045fec0();
                FUN_0047de00();
              }
              local_4 = 0xffffffff;
              FUN_00565bc0();
            }
          }
          FUN_005162a0();
          cVar4 = FUN_005162c0();
        }
      }
      break;
    case 0x13c:
    case 0x13d:
      iVar13 = FUN_0070a510();
      piVar14 = param_2;
      if (0 < iVar13) {
        FUN_0070a510();
        piVar14 = (int *)FUN_00465c30();
      }
      if (piVar14 != (int *)0x0) {
        iVar13 = FUN_0071c390();
        if (iVar13 == 0x13d) {
          FUN_00496e60();
          FUN_00512570();
        }
        else {
          FUN_00496e60();
          FUN_00512560();
        }
        FUN_00516270();
        FUN_0072a390();
        cVar4 = FUN_005162c0();
        while (cVar4 != '\0') {
          FUN_005162b0();
          cVar4 = FUN_00514000();
          if ((cVar4 == '\0') && (cVar4 = FUN_004e8f30(), cVar4 != '\0')) {
            piVar14 = (int *)FUN_0054eda0();
            iVar13 = *piVar14;
            FUN_0048b970();
            cVar4 = (**(code **)(iVar13 + 0x24))();
            if (cVar4 != '\0') {
              pvVar5 = operator_new(0xc);
              local_4 = 0xdb;
              if (pvVar5 != (void *)0x0) {
                FUN_0048b970();
                FUN_0045fec0();
                FUN_0047de00();
              }
              local_4 = 0xffffffff;
              FUN_00565bc0();
            }
          }
          FUN_005162a0();
          cVar4 = FUN_005162c0();
        }
      }
    }
switchD_0071386c_caseD_2:
    piVar14 = piVar1;
  } while( true );
}


