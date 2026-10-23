// FUN_00767880 @ 767880 size=6084

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00767880(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_ECX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_EBX;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  char local_2828 [8196];
  char local_824 [2036];
  undefined4 uStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  char *local_24;
  char *local_20;
  int *local_1c;
  undefined8 local_18;
  float fVar13;
  
  FUN_007a69e0();
  local_2828[0] = '\0';
  local_824[0] = '\0';
  piVar4 = *(int **)(extraout_ECX + 0x20);
  iVar7 = extraout_ECX;
  do {
    if (piVar4 == (int *)0x0) {
      uVar5 = FUN_007a8d6d();
      *(undefined4 *)(iVar7 + 0x18) = uVar5;
      return;
    }
    iVar3 = *piVar4;
    local_1c = (int *)piVar4[2];
    fVar13 = *(float *)(iVar3 + 0x10);
    switch(*(undefined4 *)(iVar3 + 4)) {
    case 0:
      fVar13 = fVar13 * _DAT_007e4088;
      if (*(int *)(iVar3 + 0xc) == 9) {
        if (*(int *)(iVar3 + 8) != 0) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          else {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          local_18 = (double)CONCAT44(pcVar9,0x76793e);
          local_1c = (int *)FUN_0042b6c9();
          local_20 = *(char **)(iVar3 + 8);
          local_18 = (double)fVar13;
          local_24 = (char *)0x767953;
          local_20 = (char *)FUN_00769950();
          local_24 = s_MIN_RESEARCH_TIME_ONE_00876ef0;
          goto LAB_007687c3;
        }
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x76790f);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_RESEARCH_TIME_ALL_00876f08;
        break;
      }
      if (*(int *)(iVar3 + 8) != 0) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x7679b4);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x7679c9;
        local_20 = (char *)FUN_00769950();
        local_24 = s_MIN_RESEARCH_COST_ONE_00876ec0;
        goto LAB_0076851b;
      }
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      else {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      local_18 = (double)CONCAT44(pcVar9,0x767985);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_RESEARCH_COST_ALL_00876ed8;
LAB_00768ac4:
      local_24 = (char *)0x768ace;
      local_20 = (char *)FUN_0042b6c9();
      local_24 = local_824;
      pcStack_28 = (char *)0x768adb;
      FUN_007a630a();
      goto switchD_00767fa0_default;
    case 1:
      fVar13 = fVar13 * _DAT_007e4088;
      if (*(int *)(iVar3 + 8) != 0) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767a36);
        piVar4 = (int *)FUN_0042b6c9();
        switch(*(undefined4 *)(iVar3 + 8)) {
        case 0xf:
          local_18 = 3.517604926528026e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        case 0x10:
          local_18 = 3.51745282186974e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        case 0x11:
          local_18 = 3.517561468054248e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        case 0x12:
          local_18 = 3.5174962803435605e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        case 0x13:
          local_18 = 3.5174093633959734e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        default:
          local_20 = (char *)0x0;
        }
        local_18 = (double)fVar13;
        local_24 = s_MIN_RESOURCE_ONE_00876e98;
        local_1c = piVar4;
        goto LAB_007687c3;
      }
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x767a07);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_RESOURCE_ALL_00876eac;
      break;
    case 2:
      fVar13 = fVar13 * _DAT_007e4088;
      iVar7 = *(int *)(iVar3 + 8);
      if ((iVar7 != 0x15) || (*(int *)(iVar3 + 0xc) != 6)) {
        if ((iVar7 < 0x15) || (0x16 < iVar7)) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          else {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          local_18 = (double)CONCAT44(pcVar9,0x767bdc);
          piVar4 = (int *)FUN_0042b6c9();
          switch(*(undefined4 *)(iVar3 + 8)) {
          case 0x14:
            local_18 = 4.170970486240439e-306;
            local_20 = (char *)FUN_0042b6c9();
            break;
          case 0x15:
            local_18 = 4.105924015581843e-306;
            local_20 = (char *)FUN_0042b6c9();
            break;
          case 0x16:
            local_18 = 4.170937892385111e-306;
            local_20 = (char *)FUN_0042b6c9();
            break;
          case 0x17:
            local_18 = 3.916140860501768e-306;
            local_20 = (char *)FUN_0042b6c9();
            break;
          case 0x18:
            local_18 = 3.91608653740953e-306;
            local_20 = (char *)FUN_0042b6c9();
            break;
          default:
            local_20 = (char *)0x0;
          }
          local_18 = (double)fVar13;
          local_24 = s_MIN_PRODUCTION_00876e64;
          local_1c = piVar4;
          goto LAB_007684ac;
        }
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767b39);
        piVar4 = (int *)FUN_0042b6c9();
        switch(*(undefined4 *)(iVar3 + 8)) {
        case 0x14:
          local_18 = 4.170970486240336e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        case 0x15:
          local_18 = 4.10592401558174e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        case 0x16:
          local_18 = 4.170937892385008e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        case 0x17:
          local_18 = 3.916140860501665e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        case 0x18:
          local_18 = 3.916086537409427e-306;
          local_20 = (char *)FUN_0042b6c9();
          break;
        default:
          local_20 = (char *)0x0;
        }
        local_18 = (double)fVar13;
        local_24 = s_MIN_PRODUCTION_00876e64;
        local_1c = piVar4;
        goto LAB_007687c3;
      }
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x767af0);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_FOREIGN_IC_00876e88;
      break;
    case 3:
      fVar13 = fVar13 * _DAT_007e4088;
      iVar7 = *(int *)(iVar3 + 0xc);
      if (iVar7 == 8) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767d24);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767d39;
        local_20 = (char *)FUN_00769b90();
        local_24 = s_MIN_CONSTRUCTION_TIME_AND_COST_00876e14;
        pcStack_28 = (char *)0x767d49;
        local_24 = (char *)FUN_0042b6c9();
        pcStack_28 = local_824;
        pcStack_2c = (char *)0x767d56;
        FUN_007a630a();
      }
      else {
        if (iVar7 == 9) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          else {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          local_18 = (double)CONCAT44(pcVar9,0x767ce1);
          local_1c = (int *)FUN_0042b6c9();
          local_20 = *(char **)(iVar3 + 8);
          local_18 = (double)fVar13;
          local_24 = (char *)0x767cf6;
          local_20 = (char *)FUN_00769b90();
          local_24 = s_MIN_CONSTRUCTION_TIME_00876e34;
          goto LAB_007687c3;
        }
        if (iVar7 == 10) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          else {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          local_18 = (double)CONCAT44(pcVar9,0x767c9e);
          local_1c = (int *)FUN_0042b6c9();
          local_20 = *(char **)(iVar3 + 8);
          local_18 = (double)fVar13;
          local_24 = (char *)0x767cb3;
          local_20 = (char *)FUN_00769b90();
          local_24 = s_MIN_CONSTRUCTION_COST_00876e4c;
          goto LAB_0076851b;
        }
      }
      goto switchD_00767fa0_default;
    case 4:
      fVar13 = fVar13 * _DAT_007e4088;
      switch(*(undefined4 *)(iVar3 + 0xc)) {
      case 8:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767d9f);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767db4;
        local_20 = (char *)FUN_00769cd0();
        local_24 = s_MIN_CONSTRUCTION_TIME_AND_COST_00876e14;
        goto LAB_0076851b;
      case 9:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767e25);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767e3a;
        local_20 = (char *)FUN_00769cd0();
        local_24 = s_MIN_CONSTRUCTION_TIME_00876e34;
        goto LAB_007684ac;
      case 10:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767de2);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767df7;
        local_20 = (char *)FUN_00769cd0();
        local_24 = s_MIN_CONSTRUCTION_COST_00876e4c;
        goto LAB_007687c3;
      case 0xb:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767e68);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767e7d;
        local_20 = (char *)FUN_00769cd0();
        local_24 = s_MIN_ORG_BONUS_00876e04;
        goto LAB_0076851b;
      case 0xc:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767eab);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767ec0;
        local_20 = (char *)FUN_00769cd0();
        local_24 = s_MIN_MORALE_BONUS_00876df0;
LAB_007687c3:
        pcStack_28 = (char *)0x7687cd;
        local_24 = (char *)FUN_0042b6c9();
        pcStack_28 = local_824;
        pcStack_2c = (char *)0x7687da;
        FUN_007a630a();
        break;
      case 0xd:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767eee);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767f03;
        local_20 = (char *)FUN_00769cd0();
        local_24 = s_MIN_ATTACK_BONUS_00876ddc;
LAB_007684ac:
        pcStack_28 = (char *)0x7684b6;
        local_24 = (char *)FUN_0042b6c9();
        pcStack_28 = local_824;
        pcStack_2c = (char *)0x7684c3;
        FUN_007a630a();
        break;
      case 0xe:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767f31);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767f46;
        local_20 = (char *)FUN_00769cd0();
        local_24 = s_MIN_DEFENCE_BONUS_00876dc8;
LAB_0076851b:
        pcStack_28 = (char *)0x768525;
        local_24 = (char *)FUN_0042b6c9();
        pcStack_28 = local_824;
        pcStack_2c = (char *)0x768532;
        FUN_007a630a();
        break;
      case 0xf:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767f74);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_LAND_UNIT_SPEED_00876db4;
LAB_00768b6d:
        local_24 = (char *)0x768b77;
        local_20 = (char *)FUN_0042b6c9();
        local_24 = local_824;
        pcStack_28 = (char *)0x768b84;
        FUN_007a630a();
      }
      goto switchD_00767fa0_default;
    case 5:
      fVar13 = fVar13 * _DAT_007e4088;
      switch(*(undefined4 *)(iVar3 + 0xc)) {
      case 8:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x767fca);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x767fdf;
        local_20 = (char *)FUN_0076a650();
        local_24 = s_MIN_CONSTRUCTION_TIME_AND_COST_00876e14;
        break;
      case 9:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768050);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x768065;
        local_20 = (char *)FUN_0076a650();
        local_24 = s_MIN_CONSTRUCTION_TIME_00876e34;
        goto LAB_007684ac;
      case 10:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x76800d);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x768022;
        local_20 = (char *)FUN_0076a650();
        local_24 = s_MIN_CONSTRUCTION_COST_00876e4c;
        goto LAB_007687c3;
      case 0xb:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768093);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x7680a8;
        local_20 = (char *)FUN_0076a650();
        local_24 = s_MIN_ORG_BONUS_00876e04;
        break;
      case 0xc:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x7680d6);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x7680eb;
        local_20 = (char *)FUN_0076a650();
        local_24 = s_MIN_MORALE_BONUS_00876df0;
        goto LAB_007687c3;
      case 0xd:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768119);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x76812e;
        local_20 = (char *)FUN_0076a650();
        local_24 = s_MIN_ATTACK_BONUS_00876ddc;
        goto LAB_007684ac;
      case 0xe:
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x76815c);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_24 = (char *)0x768171;
        local_20 = (char *)FUN_0076a650();
        local_24 = s_MIN_DEFENCE_BONUS_00876dc8;
        break;
      default:
        goto switchD_00767fa0_default;
      }
      goto LAB_0076851b;
    case 6:
      if (*(int *)(iVar3 + 0xc) != 8) {
        switch(*(int *)(iVar3 + 0xc)) {
        case 0:
          local_18 = 4.170340338371268e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 1:
          local_18 = 4.17027515066058e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 2:
          local_18 = 4.170209962949892e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 3:
          local_18 = 4.1701447752392046e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 4:
          local_18 = 4.170079587528517e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 5:
          local_18 = 4.1700035351993794e-306;
          uVar5 = FUN_0042b6c9();
          break;
        default:
          uVar5 = 0;
          break;
        case 7:
          local_18 = 4.169938347488692e-306;
          uVar5 = FUN_0042b6c9();
        }
        local_18 = (double)CONCAT44(&DAT_00839650,uVar5);
        local_20 = local_824;
        local_1c = (int *)&DAT_0083ca0c;
        local_24 = (char *)0x768225;
        FUN_007a630a();
        uVar6 = 0xffffffff;
        pcVar9 = local_824;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        iVar7 = -1;
        pcVar9 = local_2828;
        do {
          pcVar10 = pcVar9;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar10 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar2 != '\0');
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = pcVar10 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      if (*(int *)(iVar3 + 8) == 0x145) {
        fVar13 = fVar13 * _DAT_007e4088;
      }
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x768291);
      local_1c = (int *)FUN_0042b6c9();
      uVar5 = *(undefined4 *)(iVar3 + 8);
      local_18 = (double)fVar13;
      local_20 = s_T_CHANCE_0085de5c;
      local_24 = (char *)0x7682ad;
      local_20 = (char *)FUN_0042b6c9();
      pcStack_28 = (char *)0x7682b7;
      local_24 = (char *)uVar5;
      local_24 = (char *)FUN_0076b090();
      pcStack_28 = s_MIN_DIPLO_CHANCES_00876cf0;
      goto LAB_007682bd;
    case 7:
      if (*(int *)(iVar3 + 0xc) != 8) {
        switch(*(int *)(iVar3 + 0xc)) {
        case 0:
          local_18 = 4.170340338371485e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 1:
          local_18 = 4.1702751506607975e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 2:
          local_18 = 4.17020996295011e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 3:
          local_18 = 4.170144775239422e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 4:
          local_18 = 4.1700795875287344e-306;
          uVar5 = FUN_0042b6c9();
          break;
        case 5:
          local_18 = 4.170003535199597e-306;
          uVar5 = FUN_0042b6c9();
          break;
        default:
          uVar5 = 0;
          break;
        case 7:
          local_18 = 4.169938347488909e-306;
          uVar5 = FUN_0042b6c9();
        }
        local_18 = (double)CONCAT44(&DAT_00839650,uVar5);
        local_20 = local_824;
        local_1c = (int *)&DAT_0083ca0c;
        local_24 = (char *)0x76837d;
        FUN_007a630a();
        uVar6 = 0xffffffff;
        pcVar9 = local_824;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        iVar7 = -1;
        pcVar9 = local_2828;
        do {
          pcVar10 = pcVar9;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar10 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar2 != '\0');
        pcVar9 = pcVar11 + -uVar6;
        pcVar11 = pcVar10 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      if (*(int *)(iVar3 + 8) != 0) {
        local_18 = (double)CONCAT44(*(int *)(iVar3 + 8),0x76843d);
        uVar5 = FUN_007697a0();
        local_18 = (double)CONCAT44(uVar5,0x768443);
        fVar12 = (float10)FUN_00586980();
        fVar1 = (float)fVar12;
        if (*(int *)(iVar3 + 0xc) == 7) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          else {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          local_18 = (double)CONCAT44(pcVar9,0x768477);
          local_1c = (int *)FUN_0042b6c9();
          local_20 = *(char **)(iVar3 + 8);
          local_18 = (double)CONCAT44((int)ROUND(fVar1),(int)ROUND((fVar13 + _DAT_007e3374) * fVar1)
                                     );
          local_24 = (char *)0x7684a6;
          local_20 = (char *)FUN_0076b090();
          local_24 = s_MIN_DIPLO_COST_00876ccc;
          goto LAB_007684ac;
        }
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x7684e6);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = *(char **)(iVar3 + 8);
        local_18 = (double)CONCAT44((int)ROUND(fVar1),(int)ROUND((fVar13 + _DAT_007e3374) * fVar1));
        local_24 = (char *)0x768515;
        local_20 = (char *)FUN_0076b090();
        local_24 = s_MIN_DIPLO_COST_00876ccc;
        goto LAB_0076851b;
      }
      fVar13 = fVar13 * _DAT_007e4088;
      if (*(int *)(iVar3 + 0xc) != 7) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x76841f);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_DIPLO_COST_ALL_00876cdc;
        goto LAB_00768b6d;
      }
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x7683f0);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_DIPLO_COST_ALL_00876cdc;
      break;
    case 8:
      if (*(int *)(iVar3 + 0xc) == 7) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768562);
        local_1c = (int *)FUN_0042b6c9();
        uVar5 = *(undefined4 *)(iVar3 + 8);
        local_18 = (double)fVar13;
        local_20 = s_T_CHANCE_0085de5c;
        local_24 = (char *)0x76857e;
        local_20 = (char *)FUN_0042b6c9();
        pcStack_28 = (char *)0x768587;
        local_24 = (char *)uVar5;
        local_24 = (char *)FUN_0076b480();
        pcStack_28 = local_824;
        pcStack_2c = (char *)0x768594;
        FUN_007a630a();
        goto switchD_00767fa0_default;
      }
      if (*(int *)(iVar3 + 8) == 0) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x7685c6);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = s_T_CHANCE_0085de5c;
        goto LAB_007685d5;
      }
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x768605);
      local_1c = (int *)FUN_0042b6c9();
      uVar5 = *(undefined4 *)(iVar3 + 8);
      local_18 = (double)fVar13;
      local_20 = s_T_CHANCE_0085de5c;
      local_24 = (char *)0x768621;
      local_20 = (char *)FUN_0042b6c9();
      pcStack_28 = (char *)0x76862a;
      local_24 = (char *)uVar5;
      local_24 = (char *)FUN_0076b350();
      pcStack_28 = s_MIN_SPY_SINGLE_00876cb0;
LAB_00768fce:
      pcStack_2c = (char *)0x768fd8;
      pcStack_28 = (char *)FUN_0042b6c9();
      goto LAB_00768fe0;
    case 9:
      fVar13 = fVar13 * _DAT_007e4088;
      if (*(int *)(iVar3 + 0xc) != 7) {
        if (*(int *)(iVar3 + 8) != 0) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          else {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          local_18 = (double)CONCAT44(pcVar9,0x7686f9);
          local_1c = (int *)FUN_0042b6c9();
          uVar5 = *(undefined4 *)(iVar3 + 8);
          local_18 = (double)fVar13;
          local_20 = s_T_COST_00876ca8;
          local_24 = (char *)0x768715;
          local_20 = (char *)FUN_0042b6c9();
          pcStack_28 = (char *)0x76871e;
          local_24 = (char *)uVar5;
          local_24 = (char *)FUN_0076b350();
          pcStack_28 = s_MIN_SPY_SINGLE_00876cb0;
          goto LAB_00768fce;
        }
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x7686ca);
        local_1c = (int *)FUN_0042b6c9();
        local_20 = s_T_COST_00876ca8;
LAB_007685d5:
        local_18 = (double)fVar13;
        local_24 = (char *)0x7685df;
        local_20 = (char *)FUN_0042b6c9();
        local_24 = s_MIN_SPY_ALL_00876cc0;
        goto LAB_007687c3;
      }
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x768666);
      local_1c = (int *)FUN_0042b6c9();
      uVar5 = *(undefined4 *)(iVar3 + 8);
      local_18 = (double)fVar13;
      local_20 = s_T_COST_00876ca8;
      local_24 = (char *)0x768682;
      local_20 = (char *)FUN_0042b6c9();
      pcStack_28 = (char *)0x76868b;
      local_24 = (char *)uVar5;
      local_24 = (char *)FUN_0076b480();
      pcStack_28 = local_824;
      pcStack_2c = (char *)0x768698;
      FUN_007a630a();
      goto switchD_00767fa0_default;
    case 10:
      if (*(int *)(iVar3 + 8) != 0) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768782);
        piVar4 = (int *)FUN_0042b6c9();
        iVar7 = *(int *)(iVar3 + 8);
        if (iVar7 == 1) {
          local_18._4_4_ = s_EYR_ARMY_00858af0;
LAB_007687a9:
          local_18 = (double)CONCAT44(local_18._4_4_,0x7687b3);
          local_20 = (char *)FUN_0042b6c9();
        }
        else {
          if (iVar7 == 2) {
            local_18._4_4_ = s_EYR_NAVY_00858adc;
            goto LAB_007687a9;
          }
          if (iVar7 == 0x15) {
            local_18._4_4_ = s_PRODUCTION_IRO_00876c78;
            goto LAB_007687a9;
          }
          local_20 = (char *)0x0;
        }
        local_18 = (double)fVar13;
        local_24 = s_MIN_SPY_INTELLIGENCE_REPORT_00876c5c;
        local_1c = piVar4;
        goto LAB_007687c3;
      }
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x768753);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_SPY_INTELLIGENCE_REPORTS_00876c88;
      break;
    case 0xb:
      if (*(int *)(iVar3 + 8) == 0x161) {
        iVar7 = *(int *)(iVar3 + 0xc);
        if (iVar7 == 6) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          else {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          local_18 = (double)CONCAT44(pcVar9,0x768934);
          local_1c = (int *)FUN_0042b6c9();
          local_18 = (double)fVar13;
          local_20 = s_MIN_SPY_FOREIGN_INTELLIGENCE_00876bec;
          goto LAB_00768b6d;
        }
        if (iVar7 != 7) {
          if (iVar7 == 8) {
            if (fVar13 <= _DAT_007e3380) {
              pcVar9 = s_MIN_EFFECT_BAD_00876f30;
            }
            else {
              pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
            }
            local_18 = (double)CONCAT44(pcVar9,0x7688c6);
            local_1c = (int *)FUN_0042b6c9();
            local_18 = (double)fVar13;
            local_20 = s_MIN_SPY_INTELLIGENCE_00876c2c;
            goto LAB_00768ac4;
          }
          goto switchD_00767fa0_default;
        }
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x7688fd);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_SPY_COUNTER_INTELLIGENCE_00876c0c;
      }
      else {
        fVar13 = fVar13 * _DAT_007e4088;
        if (*(int *)(iVar3 + 8) != 0) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          else {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          local_18 = (double)CONCAT44(pcVar9,0x76884f);
          local_1c = (int *)FUN_0042b6c9();
          uVar5 = *(undefined4 *)(iVar3 + 8);
          local_18 = (double)fVar13;
          local_20 = s_T_COST_00876ca8;
          local_24 = (char *)0x76886b;
          local_20 = (char *)FUN_0042b6c9();
          pcStack_28 = (char *)0x768874;
          local_24 = (char *)uVar5;
          local_24 = (char *)FUN_0076b350();
          pcStack_28 = s_MIN_SPY_SINGLE_00876cb0;
          goto LAB_0076887a;
        }
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768820);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_SPY_COST_HOME_ALL_00876c44;
      }
      break;
    case 0xc:
      fVar13 = fVar13 * _DAT_007e4088;
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x768974);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_LEADER_SKILL_EFF_00876bd4;
      break;
    case 0xd:
      fVar13 = fVar13 * _DAT_007e4088;
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      else {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      local_18 = (double)CONCAT44(pcVar9,0x7689b4);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_DISSENT_GROWTH_00876bc0;
      break;
    case 0xe:
      fVar13 = fVar13 * _DAT_007e4088;
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      else {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      local_18 = (double)CONCAT44(pcVar9,0x7689f4);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_TC_BONUS_00876bb0;
      break;
    case 0xf:
      iVar7 = *(int *)(iVar3 + 8);
      if (iVar7 == 1) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768ab5);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_UNITS_DETECTION_00876b70;
        goto LAB_00768ac4;
      }
      if (iVar7 == 2) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768a78);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)(fVar13 * _DAT_007e4088);
        local_20 = s_MIN_NAVAL_DETECTION_00876b84;
        goto LAB_00768b6d;
      }
      if (iVar7 == 4) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768a41);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_CONVOY_DETECTION_00876b98;
        break;
      }
      goto switchD_00767fa0_default;
    case 0x10:
      iVar7 = *(int *)(iVar3 + 8);
      if (iVar7 == 6) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        else {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768baf);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_PEACE_BELLIGERENCE_00876b28;
        local_24 = (char *)0x768bc8;
        local_20 = (char *)FUN_0042b6c9();
        local_24 = local_824;
        pcStack_28 = (char *)0x768bd5;
        FUN_007a630a();
      }
      else {
        if (iVar7 == 7) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          else {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          local_18 = (double)CONCAT44(pcVar9,0x768b5e);
          local_1c = (int *)FUN_0042b6c9();
          local_18 = (double)fVar13;
          local_20 = s_MIN_WAR_BELLIGERENCE_00876b40;
          goto LAB_00768b6d;
        }
        if (iVar7 == 0x13b) {
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          else {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          local_18 = (double)CONCAT44(pcVar9,0x768b21);
          local_1c = (int *)FUN_0042b6c9();
          local_18 = (double)(fVar13 * _DAT_007e4088);
          local_20 = s_MIN_DOW_BELLIGERENCE_00876b58;
          break;
        }
      }
      goto switchD_00767fa0_default;
    case 0x11:
      fVar13 = fVar13 * _DAT_007e4088;
      if (*(int *)(iVar3 + 0xc) == 7) {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768c15);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_NATIONAL_MP_GROWTH_00876b10;
        local_24 = (char *)0x768c2e;
        local_20 = (char *)FUN_0042b6c9();
        local_24 = local_824;
        pcStack_28 = (char *)0x768c3b;
        FUN_007a630a();
      }
      else {
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768c5e);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_FOREIGN_MP_USE_00876afc;
        local_24 = (char *)0x768c77;
        local_20 = (char *)FUN_0042b6c9();
        local_24 = local_824;
        pcStack_28 = (char *)0x768c84;
        FUN_007a630a();
      }
      goto switchD_00767fa0_default;
    case 0x12:
      fVar13 = fVar13 * _DAT_007e4088;
      if (fVar13 <= _DAT_007e3380) {
        pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
      }
      else {
        pcVar9 = s_MIN_EFFECT_BAD_00876f30;
      }
      local_18 = (double)CONCAT44(pcVar9,0x768cb8);
      local_1c = (int *)FUN_0042b6c9();
      local_18 = (double)fVar13;
      local_20 = s_MIN_SUPPLY_CONSUMPTION_00876ae4;
      break;
    case 0x13:
      fVar13 = fVar13 * _DAT_007e4088;
      if (*(int *)(iVar3 + 0xc) == 0x10) {
        if (*(int *)(iVar3 + 8) != 10) {
          if (*(int *)(iVar3 + 8) != 0x16) {
            if (fVar13 <= _DAT_007e3380) {
              pcVar9 = s_MIN_EFFECT_BAD_00876f30;
            }
            else {
              pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
            }
            local_18 = (double)CONCAT44(pcVar9,0x768dd1);
            local_1c = (int *)FUN_0042b6c9();
            local_18 = (double)fVar13;
            local_20 = &DAT_0088ebf8;
            local_24 = s_MIN_STOCKPILE_WAR_00871b04;
            pcStack_28 = (char *)0x768def;
            local_24 = (char *)FUN_0042b6c9();
            goto LAB_00768fc9;
          }
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          else {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          local_18 = (double)CONCAT44(pcVar9,0x768d82);
          local_1c = (int *)FUN_0042b6c9();
          local_18 = (double)fVar13;
          local_20 = s_MIN_STOCKPILE_OIL_AND_SUPPLIES_00871cf4;
          local_24 = (char *)0x768d9b;
          local_20 = (char *)FUN_0042b6c9();
          local_24 = s_MIN_STOCKPILE_WAR_00871b04;
          pcStack_28 = (char *)0x768dab;
          local_24 = (char *)FUN_0042b6c9();
          pcStack_28 = s_MIN_STOCKPILE_MODIFIER_00876acc;
          goto LAB_0076887a;
        }
        if (fVar13 <= _DAT_007e3380) {
          pcVar9 = s_MIN_EFFECT_BAD_00876f30;
        }
        else {
          pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
        }
        local_18 = (double)CONCAT44(pcVar9,0x768d26);
        local_1c = (int *)FUN_0042b6c9();
        local_18 = (double)fVar13;
        local_20 = s_MIN_STOCKPILE_INDUSTRY_RESOURCES_00871d14;
        local_24 = (char *)0x768d3f;
        local_20 = (char *)FUN_0042b6c9();
        local_24 = s_MIN_STOCKPILE_WAR_00871b04;
        pcStack_28 = (char *)0x768d4f;
        local_24 = (char *)FUN_0042b6c9();
        pcStack_28 = s_MIN_STOCKPILE_MODIFIER_00876acc;
      }
      else {
        iVar7 = *(int *)(iVar3 + 8);
        if (*(int *)(iVar3 + 0xc) == 0x11) {
          if (iVar7 != 10) {
            if (iVar7 != 0x16) {
              if (fVar13 <= _DAT_007e3380) {
                pcVar9 = s_MIN_EFFECT_BAD_00876f30;
              }
              else {
                pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
              }
              local_18 = (double)CONCAT44(pcVar9,0x768ed4);
              local_1c = (int *)FUN_0042b6c9();
              local_18 = (double)fVar13;
              local_20 = &DAT_0088ebf8;
              local_24 = s_MIN_STOCKPILE_PEACE_00871af0;
              pcStack_28 = (char *)0x768ef2;
              local_24 = (char *)FUN_0042b6c9();
LAB_00768fc9:
              pcStack_28 = s_MIN_STOCKPILE_MODIFIER_00876acc;
              goto LAB_00768fce;
            }
            if (fVar13 <= _DAT_007e3380) {
              pcVar9 = s_MIN_EFFECT_BAD_00876f30;
            }
            else {
              pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
            }
            local_18 = (double)CONCAT44(pcVar9,0x768e85);
            local_1c = (int *)FUN_0042b6c9();
            local_18 = (double)fVar13;
            local_20 = s_MIN_STOCKPILE_OIL_AND_SUPPLIES_00871cf4;
            local_24 = (char *)0x768e9e;
            local_20 = (char *)FUN_0042b6c9();
            local_24 = s_MIN_STOCKPILE_PEACE_00871af0;
            pcStack_28 = (char *)0x768eae;
            local_24 = (char *)FUN_0042b6c9();
            pcStack_28 = s_MIN_STOCKPILE_MODIFIER_00876acc;
LAB_0076887a:
            pcStack_2c = (char *)0x768884;
            pcStack_28 = (char *)FUN_0042b6c9();
            goto LAB_00768fe0;
          }
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          else {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          local_18 = (double)CONCAT44(pcVar9,0x768e29);
          local_1c = (int *)FUN_0042b6c9();
          local_18 = (double)fVar13;
          local_20 = s_MIN_STOCKPILE_INDUSTRY_RESOURCES_00871d14;
          local_24 = (char *)0x768e42;
          local_20 = (char *)FUN_0042b6c9();
          local_24 = s_MIN_STOCKPILE_PEACE_00871af0;
          pcStack_28 = (char *)0x768e52;
          local_24 = (char *)FUN_0042b6c9();
          pcStack_28 = s_MIN_STOCKPILE_MODIFIER_00876acc;
        }
        else {
          if (iVar7 != 10) {
            if (iVar7 != 0x16) {
              if (fVar13 <= _DAT_007e3380) {
                pcVar9 = s_MIN_EFFECT_BAD_00876f30;
              }
              else {
                pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
              }
              local_18 = (double)CONCAT44(pcVar9,0x768fb5);
              local_1c = (int *)FUN_0042b6c9();
              local_18 = (double)fVar13;
              local_20 = &DAT_0088ebf8;
              local_24 = &DAT_0088ebf8;
              goto LAB_00768fc9;
            }
            if (fVar13 <= _DAT_007e3380) {
              pcVar9 = s_MIN_EFFECT_BAD_00876f30;
            }
            else {
              pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
            }
            local_18 = (double)CONCAT44(pcVar9,0x768f71);
            local_1c = (int *)FUN_0042b6c9();
            local_18 = (double)fVar13;
            local_20 = s_MIN_STOCKPILE_OIL_AND_SUPPLIES_00871cf4;
            local_24 = (char *)0x768f8a;
            local_20 = (char *)FUN_0042b6c9();
            local_24 = &DAT_0088ebf8;
            pcStack_28 = s_MIN_STOCKPILE_MODIFIER_00876acc;
            goto LAB_0076887a;
          }
          if (fVar13 <= _DAT_007e3380) {
            pcVar9 = s_MIN_EFFECT_BAD_00876f30;
          }
          else {
            pcVar9 = s_MIN_EFFECT_GOOD_00876f20;
          }
          local_18 = (double)CONCAT44(pcVar9,0x768f20);
          local_1c = (int *)FUN_0042b6c9();
          local_18 = (double)fVar13;
          local_20 = s_MIN_STOCKPILE_INDUSTRY_RESOURCES_00871d14;
          local_24 = (char *)0x768f39;
          local_20 = (char *)FUN_0042b6c9();
          local_24 = &DAT_0088ebf8;
          pcStack_28 = s_MIN_STOCKPILE_MODIFIER_00876acc;
        }
      }
LAB_007682bd:
      pcStack_2c = (char *)0x7682c7;
      pcStack_28 = (char *)FUN_0042b6c9();
LAB_00768fe0:
      pcStack_2c = local_824;
      uStack_30 = 0x768fe5;
      FUN_007a630a();
      goto switchD_00767fa0_default;
    default:
      goto switchD_007678cd_default;
    }
    local_24 = (char *)0x768cd1;
    local_20 = (char *)FUN_0042b6c9();
    local_24 = local_824;
    pcStack_28 = (char *)0x768cde;
    FUN_007a630a();
switchD_00767fa0_default:
    uVar6 = 0xffffffff;
    pcVar9 = local_824;
    do {
      pcVar11 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar9 = local_2828;
    do {
      pcVar10 = pcVar9;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar10 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar9 = pcVar11 + -uVar6;
    pcVar11 = pcVar10 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; iVar7 = unaff_EBX, uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
switchD_007678cd_default:
    piVar4 = local_1c;
  } while( true );
}


