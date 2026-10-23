// FUN_00534a40 @ 534a40 size=2627

undefined4 __fastcall FUN_00534a40(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined1 auStack_924 [256];
  undefined1 auStack_824 [256];
  undefined4 *puStack_724;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c2386;
  local_c = ExceptionList;
  puVar13 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  param_1[0x184] = 0;
  iVar4 = FUN_00535490();
  if (iVar4 == -2) {
    ExceptionList = pvStack_10;
    return 0xfffffffe;
  }
  if (iVar4 == -1) {
    ExceptionList = pvStack_10;
    return 0xffffffff;
  }
  iVar4 = param_1[1];
  if (iVar4 == 0xec) {
    if (param_1[0x82] != 1) {
      ExceptionList = pvStack_10;
      return 0xfffffffe;
    }
    if (param_1[0x103] == 3) {
      FUN_00537860();
    }
    if (DAT_00893638 != (int *)0x0) {
      iVar4 = DAT_00893638[6] + 1;
      if (0x5f < iVar4) {
        iVar4 = 0x5f;
      }
      DAT_00893638[6] = iVar4;
      if (DAT_00dc4b5e != '\0') {
        uVar5 = FUN_0042b6c9(s_INIT_SCENARIO_0083b474);
        FUN_006fed70(uVar5);
      }
      (**(code **)(*DAT_00893638 + 0x10))(0);
      ExceptionList = pvStack_10;
      return 0;
    }
  }
  else if (iVar4 == 0x1f1) {
    if (param_1[0x82] != 1) {
      ExceptionList = pvStack_10;
      return 0xfffffffe;
    }
    if (param_1[0x103] == 3) {
      FUN_00537a20();
      ExceptionList = pvStack_10;
      return 0;
    }
  }
  else {
    if (iVar4 == 0xf7) {
      if (param_1[0x82] != 1) {
        ExceptionList = pvStack_10;
        return 0xfffffffe;
      }
      if (param_1[0x103] == 3) {
        uVar5 = FUN_00780ef0(param_1);
        ExceptionList = pvStack_10;
        return uVar5;
      }
      iVar4 = *param_1;
      piVar6 = param_1 + 0x104;
      piVar11 = param_1 + 0x83;
      param_1 = param_1 + 2;
      FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                   s_No_left_curly_0082f278,param_1,piVar11,piVar6,*(int *)(iVar4 + 0x212) + 1,
                   iVar4 + 0x216);
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(&DAT_00bce1e8);
      }
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
      if (DAT_00dc4b5e != '\0') {
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar4 = FUN_007a64d3(0);
    }
    if (iVar4 == 0x236) {
      if (param_1[0x82] != 1) {
        ExceptionList = pvStack_10;
        return 0xfffffffe;
      }
      if (param_1[0x103] == 3) {
        uVar5 = FUN_00538690();
        ExceptionList = pvStack_10;
        return uVar5;
      }
      iVar4 = *param_1;
      piVar6 = param_1 + 0x104;
      piVar11 = param_1 + 0x83;
      param_1 = param_1 + 2;
      FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                   s_No_left_curly_0082f278,param_1,piVar11,piVar6,*(int *)(iVar4 + 0x212) + 1,
                   iVar4 + 0x216);
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(&DAT_00bce1e8);
      }
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
      if (DAT_00dc4b5e != '\0') {
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar4 = FUN_007a64d3(0);
    }
    if (iVar4 == 0xe9) {
      piVar6 = (int *)FUN_0042b6c9(param_1 + 0x104);
      iVar4 = FUN_007a8730(piVar6,s_UNKNOWN_STRING_WANTED_0083c758);
      if (iVar4 == 0) {
        piVar6 = param_1 + 0x104;
      }
      uVar9 = 0xffffffff;
      piVar11 = piVar6;
      do {
        piVar14 = piVar11;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        piVar14 = (int *)((int)piVar11 + 1);
        iVar4 = *piVar11;
        piVar11 = piVar14;
      } while ((char)iVar4 != '\0');
      uVar9 = ~uVar9;
      piVar11 = (int *)((int)piVar14 - uVar9);
      piVar14 = param_1 + 0x185;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *piVar14 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar14 = piVar14 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)piVar14 = (char)*piVar11;
        piVar11 = (int *)((int)piVar11 + 1);
        piVar14 = (int *)((int)piVar14 + 1);
      }
      uVar9 = 0xffffffff;
      do {
        piVar11 = piVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        piVar11 = (int *)((int)piVar6 + 1);
        iVar4 = *piVar6;
        piVar6 = piVar11;
      } while ((char)iVar4 != '\0');
      uVar9 = ~uVar9;
      puVar13 = (undefined4 *)((int)piVar11 - uVar9);
      puVar8 = &DAT_00d6139e;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar8 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_0088ebf8;
      do {
        pcVar15 = pcVar12;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar15;
      } while (cVar3 != '\0');
      uVar9 = ~uVar9;
      pcVar12 = pcVar15 + -uVar9;
      pcVar15 = (char *)&DAT_00d6149e;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar15 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar15 = pcVar15 + 1;
      }
      DAT_00d6159e = 0;
      ExceptionList = pvStack_10;
      return 0;
    }
    if (iVar4 == 0x259) {
      uVar9 = 0xffffffff;
      piVar6 = param_1 + 0x104;
      do {
        piVar11 = piVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        piVar11 = (int *)((int)piVar6 + 1);
        iVar4 = *piVar6;
        piVar6 = piVar11;
      } while ((char)iVar4 != '\0');
      uVar9 = ~uVar9;
      puVar13 = (undefined4 *)((int)piVar11 - uVar9);
      puVar8 = &DAT_00d6149e;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar8 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar13;
        puVar13 = (undefined4 *)((int)puVar13 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      ExceptionList = pvStack_10;
      return 0;
    }
    if (iVar4 == 599) {
      DAT_00d6159e = FUN_004af6b0(param_1 + 0x104);
      ExceptionList = pvStack_10;
      return 0;
    }
    if (iVar4 == 0x249) {
      if (param_1[0x82] != 1) {
        ExceptionList = pvStack_10;
        return 0xfffffffe;
      }
      if (param_1[0x103] == 3) {
        uVar5 = FUN_004e1980(param_1);
        ExceptionList = pvStack_10;
        return uVar5;
      }
      iVar4 = *param_1;
      piVar6 = param_1 + 0x104;
      piVar11 = param_1 + 0x83;
      param_1 = param_1 + 2;
      FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                   s_No_left_curly_0082f278,param_1,piVar11,piVar6,*(int *)(iVar4 + 0x212) + 1,
                   iVar4 + 0x216);
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(&DAT_00bce1e8);
      }
      puVar16 = &DAT_00bce1e8;
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
      if (DAT_00dc4b5e != '\0') {
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar4 = FUN_007a64d3(puVar16,0);
    }
    if (iVar4 == 0x246) {
      if (param_1[0x82] != 1) {
        ExceptionList = pvStack_10;
        return 0xfffffffe;
      }
      if (param_1[0x103] == 3) {
        uVar5 = FUN_00538170();
        ExceptionList = pvStack_10;
        return uVar5;
      }
      iVar4 = *param_1;
      piVar6 = param_1 + 0x104;
      piVar11 = param_1 + 0x83;
      param_1 = param_1 + 2;
      FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                   s_No_left_curly_0082f278,param_1,piVar11,piVar6,*(int *)(iVar4 + 0x212) + 1,
                   iVar4 + 0x216);
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(&DAT_00bce1e8);
      }
      puVar16 = &DAT_00bce1e8;
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
      if (DAT_00dc4b5e != '\0') {
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar4 = FUN_007a64d3(puVar16,0);
    }
    puVar8 = DAT_00d685a6;
    if (iVar4 == 0x19c) {
      if (param_1[0x82] != 1) {
        ExceptionList = pvStack_10;
        return 0xfffffffe;
      }
      if (param_1[0x103] == 3) {
        if (DAT_00d685a6 != (undefined4 *)0x0) {
          *DAT_00d685a6 = (int)&PTR_FUN_007e4020;
          puStack_8 = (undefined1 *)0x0;
          FUN_0053a726();
          puStack_8 = (undefined1 *)0xffffffff;
          puVar8[0x159] = &PTR_LAB_007e3ff0;
          FUN_004309c0();
          FUN_00796cd8(puVar8);
        }
        piVar6 = operator_new(0x2d0e);
        puStack_8 = (undefined1 *)0x1;
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          FUN_004734e0();
          piVar6[0x159] = (int)&PTR_FUN_007e5258;
          *(undefined2 *)((int)piVar6 + 0x57a) = 0;
          *(undefined1 *)(piVar6 + 0x15e) = 0;
          *(undefined1 *)((int)piVar6 + 0x577) = 0;
          *(undefined1 *)((int)piVar6 + 0x576) = 0;
          *(undefined1 *)((int)piVar6 + 0x277d) = 0;
          *piVar6 = (int)&PTR_FUN_007e4020;
          *(undefined4 *)((int)piVar6 + 0x2cde) = 0;
          puVar13 = (undefined4 *)((int)piVar6 + 0x277e);
          for (iVar4 = 0x158; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          piVar6[0xb39] = 0;
          *(undefined4 *)((int)piVar6 + 0x2cea) = 0xffffffff;
          *(undefined4 *)((int)piVar6 + 0x2cee) = 0xffffffff;
          *(undefined4 *)((int)piVar6 + 0x2cf2) = 0xffffffff;
          *(undefined4 *)((int)piVar6 + 0x2cf6) = 0xffffffff;
          *(undefined4 *)((int)piVar6 + 0x2cfa) = 0xffffffff;
          *(undefined4 *)((int)piVar6 + 0x2cfe) = 0xffffffff;
          *(undefined4 *)((int)piVar6 + 0x2d02) = 0xffffffff;
          *(undefined4 *)((int)piVar6 + 0x2d06) = 0xffffffff;
          *(undefined4 *)((int)piVar6 + 0x2d0a) = 0xffffffff;
          *(undefined1 *)(piVar6 + 0xb3a) = 1;
          *(undefined1 *)((int)piVar6 + 0x57d) = 0;
          *(undefined1 *)((int)piVar6 + 0x257d) = 0;
        }
        puStack_8 = (undefined1 *)0xffffffff;
        DAT_00d685a6 = piVar6;
        uVar5 = (**(code **)(*piVar6 + 8))(param_1);
        ExceptionList = pvStack_10;
        return uVar5;
      }
      iVar4 = *param_1;
      piVar6 = param_1 + 0x104;
      piVar11 = param_1 + 0x83;
      param_1 = param_1 + 2;
      FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                   s_No_left_curly_0082f278,param_1,piVar11,piVar6,*(int *)(iVar4 + 0x212) + 1,
                   iVar4 + 0x216);
      if (DAT_00dc4b5f != '\0') {
        FUN_00429a50(&DAT_00bce1e8);
      }
      puVar16 = &DAT_00bce1e8;
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
      if (DAT_00dc4b5e != '\0') {
        ExceptionList = pvStack_10;
        return 0;
      }
      iVar4 = FUN_007a64d3(puVar16,0);
    }
    iVar1 = DAT_00d615b2;
    if (iVar4 == 0x24e) {
      iVar4 = FUN_004bb6b0(param_1);
      if (iVar4 == 0) {
        ExceptionList = pvStack_10;
        return 0xfffffffe;
      }
    }
    else {
      if (iVar4 == 0x4eb) {
        FUN_004b3230(param_1);
        ExceptionList = pvStack_10;
        return 0;
      }
      if (iVar4 == 0x294) {
        FUN_00429d50(param_1 + 0x104,auStack_924);
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00(s_Parsing__s_____00850c80,auStack_924);
        }
        pvVar7 = operator_new(0x316);
        puStack_8 = (undefined1 *)0x2;
        if (pvVar7 == (void *)0x0) {
          puStack_724 = (undefined4 *)0x0;
        }
        else {
          puStack_724 = (undefined4 *)FUN_00533e40(auStack_924,&DAT_008390e0);
        }
        puStack_8 = (undefined1 *)0x3;
        do {
          iVar4 = FUN_00534a40();
          if (iVar4 == -2) {
            FUN_007a630a(&DAT_00bcdfe8,s_got_a_parsing_error_at_line__d_00850c60,
                         *(int *)((int)puStack_724 + 0x212) + 1);
            FUN_00405ad0(&DAT_00bcdfe8);
            break;
          }
        } while (iVar4 != -1);
        puStack_8 = (undefined1 *)0xffffffff;
        if (puStack_724 != (undefined4 *)0x0) {
          (**(code **)*puStack_724)(1);
          ExceptionList = pvStack_10;
          return 0;
        }
      }
      else {
        if (iVar4 == 0x1f7) {
          FUN_00429d50(param_1 + 0x104,auStack_824);
          FUN_006ffd60(auStack_824);
          ExceptionList = pvStack_10;
          return 0;
        }
        if (iVar4 == 0xe8) {
          if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s_Parsing_events_history_____00850c40);
          }
          FUN_005359b0(7,DAT_00d615b2 + 0x1d4f6);
          ExceptionList = pvStack_10;
          return 0;
        }
        if (iVar4 == 0x1f8) {
          if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s_Parsing_slept_events_____00850c24);
          }
          FUN_005359b0(7,DAT_00d615b2 + 0x1d4e4);
          ExceptionList = pvStack_10;
          return 0;
        }
        if (iVar4 != 0x574) {
          FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                       s_Illegal_top_level_object_00850c08,param_1 + 2,param_1 + 0x83,
                       param_1 + 0x104,*(int *)(*param_1 + 0x212) + 1,*param_1 + 0x216);
          if (DAT_00dc4b5f != '\0') {
            FUN_00429a50(&DAT_00bce1e8);
          }
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
          FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
          if (DAT_00dc4b5e == '\0') {
            FUN_007a64d3(0);
          }
          FUN_00405ad0(&DAT_00bcdfe8);
          ExceptionList = pvStack_10;
          return 0xfffffffe;
        }
        puVar8 = *(undefined4 **)(DAT_00d615b2 + 0x1d50c);
        while (puVar8 != (undefined4 *)0x0) {
          puVar13 = (undefined4 *)puVar8[2];
          FUN_00796cd8(*puVar8);
          FUN_00796cd8(puVar8);
          puVar8 = puVar13;
        }
        *(undefined4 **)(iVar1 + 0x1d50c) = puVar13;
        *(undefined4 **)(iVar1 + 0x1d510) = puVar13;
        *(undefined4 **)(iVar1 + 0x1d514) = puVar13;
        do {
          while (iVar4 = FUN_00535490(), iVar4 == 1) {
            uVar5 = FUN_007a7b3c(param_1 + 2);
            pvVar7 = operator_new(8);
            puStack_8 = (undefined1 *)0x4;
            if (pvVar7 == (void *)0x0) {
              puVar13 = (undefined4 *)0x0;
            }
            else {
              puVar13 = (undefined4 *)FUN_0076c790();
            }
            puStack_8 = (undefined1 *)0xffffffff;
            *puVar13 = uVar5;
            uVar5 = FUN_007a7b3c(param_1 + 0x104);
            puVar13[1] = uVar5;
            cVar3 = (**(code **)(*(int *)(DAT_00d615b2 + 0x1d508) + 0x24))(puVar13);
            iVar4 = DAT_00d615b2;
            if (cVar3 == '\0') {
              iVar1 = *(int *)(DAT_00d615b2 + 0x1d510);
              puVar8 = operator_new(0xe);
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = (undefined4 *)0x0;
              }
              else {
                *puVar8 = puVar13;
                puVar8[1] = iVar1;
                puVar8[2] = 0;
                *(undefined1 *)(puVar8 + 3) = 0;
              }
              iVar2 = *(int *)(iVar4 + 0x1d514);
              *(undefined4 **)(iVar4 + 0x1d510) = puVar8;
              *(int *)(iVar4 + 0x1d514) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 **)(iVar4 + 0x1d50c) = puVar8;
              }
              else {
                *(undefined4 **)(iVar1 + 8) = puVar8;
              }
            }
          }
          if (iVar4 == 2) {
            ExceptionList = pvStack_10;
            return 0xfffffffe;
          }
          piVar6 = (int *)FUN_00534391();
        } while (*piVar6 != 4);
        FUN_005343dc();
      }
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


