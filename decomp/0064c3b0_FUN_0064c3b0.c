// FUN_0064c3b0 @ 64c3b0 size=7270

int __thiscall FUN_0064c3b0(int *param_1,int *param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *unaff_retaddr;
  undefined2 uStack_148;
  undefined2 uStack_146;
  int *piStack_12c;
  undefined1 *puStack_128;
  int iStack_124;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [256];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d2bdc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  if (*(int *)((int)param_1 + 0x21e62) == 0xf) {
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  if (*(int *)((int)param_1 + 0x21e62) == 0x16) {
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  if (*(int *)((int)param_1 + 0x21e62) == 0x10) {
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  cVar8 = FUN_006523c0();
  if (cVar8 != '\0') {
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  if (*(int *)((int)param_1 + 0x21e62) == 0x14) {
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  if (*(int *)((int)param_1 + 0x21e62) == 0x17) {
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  if ((DAT_0087b630 == '\0') && (DAT_0087b633 == '\0')) {
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  if (DAT_0087b631 == '\0') {
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    if (DAT_0087b631 == '\0') {
      piVar9 = (int *)FUN_006436d0();
      if (*(char *)((int)piVar9 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar9 + 0x60))();
      *(undefined1 *)((int)piVar9 + 0x86) = 1;
    }
  }
  iVar10 = (**(code **)(*(int *)param_1[0x4f63] + 4))();
  if (iVar10 != 0) {
    ExceptionList = pvStack_10;
    return iVar10;
  }
  if ((int *)param_1[0x4f65] != (int *)0x0) {
    uStack_148 = 0xc67a;
    uStack_146 = 100;
    (**(code **)(*(int *)param_1[0x4f65] + 4))();
  }
  iVar10 = (**(code **)(*param_2 + 8))();
  if (0x4f < iVar10) {
    if ((0x12d < iVar10) && (iVar10 < 0x130)) {
      uStack_148 = 0xcd1a;
      uStack_146 = 100;
      iVar10 = FUN_00661090();
      ExceptionList = pvStack_10;
      return iVar10;
    }
LAB_0064cc61:
    puStack_128 = (undefined1 *)&uStack_148;
    uStack_148 = DAT_0088f28c;
    uStack_146 = (undefined2)DAT_0088f28e;
    FUN_0064e370(0,0);
    uVar11 = (**(code **)(*param_2 + 8))();
    switch(uVar11) {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x16:
    case 0x1c:
      uStack_148 = 0xccbb;
      uStack_146 = 100;
      iVar15 = (**(code **)(*(int *)((int)param_1 + 0x13d56) + 4))();
      iVar10 = 0;
      if (iVar15 != 0) {
        *(undefined1 *)((int)param_1 + 0x21e9a) = 0;
        ExceptionList = pvStack_10;
        return iVar15;
      }
      break;
    default:
      uStack_148 = 0xcd27;
      uStack_146 = 100;
      iVar10 = FUN_004a8c90();
      if (iVar10 == 3) {
        ExceptionList = pvStack_10;
        return 3;
      }
    }
    if (*(undefined4 **)((int)param_1 + 0x13d6a) != (undefined4 *)0x0) {
      uStack_148 = 0xcd43;
      uStack_146 = 100;
      iVar10 = (**(code **)**(undefined4 **)((int)param_1 + 0x13d6a))();
      if (iVar10 == 1) {
        if (*(int *)((int)param_1 + 0x13d6a) != 0) {
          FUN_00642b80();
          uStack_148 = 0xcd61;
          uStack_146 = 100;
          FUN_00796cd8();
        }
        *(undefined4 *)((int)param_1 + 0x13d6a) = 0;
        ExceptionList = pvStack_10;
        return 1;
      }
      ExceptionList = pvStack_10;
      return iVar10;
    }
    uStack_148 = 0xcd82;
    uStack_146 = 100;
    FUN_006432c0();
    uStack_148 = 0xcd8f;
    uStack_146 = 100;
    FUN_006432c0();
    if (DAT_00a98464 == 0) {
      uStack_148 = 0xcda5;
      uStack_146 = 100;
      FUN_006432e0();
    }
    uStack_148 = 0xcdb2;
    uStack_146 = 100;
    FUN_006432c0();
    if (DAT_00a98464 == 3) {
      uStack_148 = 0xcdc8;
      uStack_146 = 100;
      FUN_006432e0();
    }
    if ((char)param_1[0x87a4] == '\x01') {
      *(undefined1 *)(param_1 + 0x87a4) = 0;
      FUN_00654700();
      FUN_004d87c0();
    }
    uVar11 = (**(code **)(*param_2 + 8))();
    switch(uVar11) {
    case 0xc:
      uStack_148 = (undefined2)*(undefined4 *)(param_2[1] + 0x16);
      uVar6 = uStack_148;
      uStack_146 = (undefined2)((uint)*(undefined4 *)(param_2[1] + 0x16) >> 0x10);
      uVar7 = uStack_146;
      cVar8 = FUN_00657690();
      if ((cVar8 == '\0') &&
         (uStack_148 = uVar6, uStack_146 = uVar7, cVar8 = FUN_006d4400(), cVar8 == '\0')) {
        iVar15 = 0;
        if (DAT_00bd13ef != '\0') {
          uStack_148 = uVar6;
          uStack_146 = uVar7;
          puVar12 = (undefined4 *)FUN_004d89d0(auStack_118);
          iVar15 = FUN_004d8520(*puVar12,puVar12[1]);
        }
        if (*(int *)(unaff_retaddr[1] + 0x12) < 1) {
          cVar8 = FUN_004d8400();
        }
        else {
          cVar8 = FUN_004d83c0();
        }
        if ((cVar8 != '\0') && (iVar15 != 0)) {
          uStack_148 = 0xd0f9;
          uStack_146 = 100;
          iVar15 = FUN_004e9370();
          uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x3ee);
          uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x3ee) >> 0x10);
          FUN_004d8cf0(*(undefined4 *)(iVar15 + 0x3ea));
          FUN_004d87c0();
        }
      }
      break;
    case 0xd:
      uStack_148 = (undefined2)*(undefined4 *)(param_2[1] + 0x16);
      uVar6 = uStack_148;
      uStack_146 = (undefined2)((uint)*(undefined4 *)(param_2[1] + 0x16) >> 0x10);
      uVar7 = uStack_146;
      cVar8 = FUN_00657690();
      if ((cVar8 == '\x01') ||
         (uStack_148 = uVar6, uStack_146 = uVar7, cVar8 = FUN_006d4400(), cVar8 != '\0')) {
        *(undefined1 *)((int)param_1 + 0x21e9a) = 0;
      }
      break;
    case 0x11:
      uStack_148 = (undefined2)*(undefined4 *)(param_2[1] + 0x16);
      uVar6 = uStack_148;
      uStack_146 = (undefined2)((uint)*(undefined4 *)(param_2[1] + 0x16) >> 0x10);
      uVar7 = uStack_146;
      cVar8 = FUN_00657690();
      if (((cVar8 == '\0') &&
          (uStack_148 = uVar6, uStack_146 = uVar7, cVar8 = FUN_006d4400(), cVar8 == '\0')) &&
         (((byte)DAT_00a98444 & 1) != 0)) {
        puVar12 = (undefined4 *)FUN_00581e60();
        *(undefined4 *)((int)param_1 + 0x21e92) = *puVar12;
        uVar11 = puVar12[1];
        *(undefined1 *)((int)param_1 + 0x21e9a) = 1;
        *(undefined4 *)((int)param_1 + 0x21e96) = uVar11;
      }
      break;
    case 0x19:
      cVar8 = FUN_0042e9a0();
      if (cVar8 == '\0') {
        FUN_00593f60();
      }
      cVar8 = FUN_0042e980();
      if ((cVar8 != '\0') && (cVar8 = FUN_0042e9a0(), cVar8 == '\0')) {
        if (*(int *)((int)param_1 + 0x221be) != 0) goto switchD_0064d305_default;
        *(undefined1 *)((int)param_1 + 0x2219a) = 1;
        if (DAT_00dc1911 == '\0') {
          uStack_148 = 0xd1e5;
          uStack_146 = 100;
          puStack_128 = operator_new(0x13e);
          puStack_8 = (undefined1 *)0x0;
          if (puStack_128 == (undefined1 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            uStack_148 = 0x66fc;
            uStack_146 = 0x86;
            puVar12 = (undefined4 *)FUN_00426d70();
          }
          puStack_8 = (undefined1 *)0xffffffff;
          cVar8 = FUN_00427570();
          if (cVar8 == '\0') {
            uStack_148 = 0xd235;
            uStack_146 = 100;
            puStack_128 = operator_new(0x13e);
            puStack_8 = (undefined1 *)0x1;
            if (puStack_128 == (undefined1 *)0x0) {
              puVar13 = (undefined4 *)0x0;
            }
            else {
              uStack_148 = 0x66d4;
              uStack_146 = 0x86;
              puVar13 = (undefined4 *)FUN_00426d70();
            }
            puStack_8 = (undefined1 *)0xffffffff;
            cVar8 = FUN_00427570();
            if ((cVar8 == '\0') || (cVar8 = FUN_00427570(), cVar8 == '\0')) {
              uStack_148 = 0xd292;
              uStack_146 = 100;
              pvVar14 = operator_new(puVar12[0x4e] + 1);
              uStack_148 = 1;
              uStack_146 = 0;
              FUN_00427220(pvVar14);
              uStack_148 = 1;
              uStack_146 = 0;
              FUN_00427330(pvVar14);
              uStack_148 = 0xd2b5;
              uStack_146 = 100;
              FUN_00796cd8();
            }
            if (puVar13 != (undefined4 *)0x0) {
              uStack_148 = 0xd2c8;
              uStack_146 = 100;
              (**(code **)*puVar13)();
            }
          }
          if (puVar12 != (undefined4 *)0x0) {
            uStack_148 = 0xd2d5;
            uStack_146 = 100;
            (**(code **)*puVar12)();
          }
        }
        else {
          cVar8 = *(char *)(DAT_00893530 + 0x16);
          sVar1 = *(short *)(DAT_00893530 + 0x18);
          piVar9 = (int *)(DAT_00d0ca90 + 0xe);
          FUN_0042db70();
          uStack_148 = SUB42((&PTR_s_JANUARY_00866390)[(int)cVar8 % 0xc],0);
          uStack_146 = (undefined2)((uint)(&PTR_s_JANUARY_00866390)[(int)cVar8 % 0xc] >> 0x10);
          uVar11 = FUN_0042b6c9();
          uStack_148 = (undefined2)uVar11;
          uStack_146 = (undefined2)((uint)uVar11 >> 0x10);
          uVar11 = (**(code **)(*piVar9 + 0xc))((int)sVar1);
          FUN_007a630a(auStack_110,s_scenarios_save_games_AutoSave__s_00866720,uVar11);
        }
        uStack_148 = 0xd2e5;
        uStack_146 = 100;
        FUN_004300c0();
        *(undefined1 *)(DAT_00893750 + 0x11f) = 1;
        switch(*(undefined4 *)(*DAT_00d12b40 + 0x37a)) {
        case 0:
          *(undefined4 *)((int)param_1 + 0x221be) = 0xffffffff;
          iVar15 = *(int *)((int)param_1 + 0x221be) + -1;
          break;
        case 1:
          *(undefined4 *)((int)param_1 + 0x221be) = 1;
          iVar15 = *(int *)((int)param_1 + 0x221be) + -1;
          break;
        case 2:
          *(undefined4 *)((int)param_1 + 0x221be) = 3;
          iVar15 = *(int *)((int)param_1 + 0x221be) + -1;
          break;
        case 3:
          *(undefined4 *)((int)param_1 + 0x221be) = 5;
          iVar15 = *(int *)((int)param_1 + 0x221be) + -1;
          break;
        case 4:
          *(undefined4 *)((int)param_1 + 0x221be) = 10;
        default:
switchD_0064d305_default:
          iVar15 = *(int *)((int)param_1 + 0x221be) + -1;
        }
LAB_0064d415:
        *(int *)((int)param_1 + 0x221be) = iVar15;
      }
      break;
    case 0x1b:
      uStack_148 = 0xd38d;
      uStack_146 = 100;
      (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 4))();
      uStack_148 = 0xd39f;
      uStack_146 = 100;
      cVar8 = (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 0x5c))();
      if (cVar8 != '\0') {
        uStack_148 = 0xd3b6;
        uStack_146 = 100;
        (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 0x68))();
      }
      FUN_00581e60();
      FUN_00654b00();
      FUN_006521a0();
      iVar15 = 0;
      switch(*(undefined4 *)(*DAT_00d12b40 + 0x37a)) {
      case 0:
        iVar15 = -1;
        break;
      case 1:
        iVar15 = 0;
        break;
      case 2:
        iVar15 = 3;
        break;
      case 3:
        iVar15 = 5;
        break;
      case 4:
        iVar15 = 10;
      }
      if ((iVar15 < *(int *)((int)param_1 + 0x221be)) || (*(int *)((int)param_1 + 0x221be) < 0))
      goto LAB_0064d415;
      break;
    case 0x1c:
      uStack_148 = 0xcf47;
      uStack_146 = 100;
      (**(code **)(**(int **)((int)param_1 + 0x21e4a) + 4))();
      uStack_148 = (short)param_2;
      uStack_146 = (short)((uint)param_2 >> 0x10);
      (**(code **)(**(int **)((int)param_1 + 0x21f8a) + 4))();
      (**(code **)(**(int **)((int)param_1 + 0x21f82) + 4))(param_2);
      (**(code **)(**(int **)((int)param_1 + 0x21f86) + 4))(param_2);
      (**(code **)(**(int **)((int)param_1 + 0x21f7e) + 4))(param_2);
      (**(code **)(**(int **)((int)param_1 + 0x21e56) + 4))(param_2);
      (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 4))(param_2);
      cVar8 = (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 0x5c))();
      if (cVar8 != '\0') {
        uStack_148 = 0xcfc1;
        uStack_146 = 100;
        (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 0x68))();
      }
      ExceptionList = pvStack_10;
      return 0;
    case 0x4d:
      iVar15 = 0;
      if (0 < DAT_00877690) {
        do {
          uStack_148 = 0xce18;
          uStack_146 = 100;
          FUN_004e9370();
          iVar15 = iVar15 + 1;
        } while (iVar15 < DAT_00877690);
      }
      iVar15 = **(int **)((int)param_1 + 0x21e4a);
      uStack_148 = 0xce36;
      uStack_146 = 100;
      FUN_0044b1c0();
      uStack_148 = 0xce43;
      uStack_146 = 100;
      (**(code **)(iVar15 + 0x2c))();
      uStack_148 = 0x19;
      uStack_146 = 0;
      (**(code **)(**(int **)((int)param_1 + 0x21e4a) + 0x34))();
      iVar15 = *(int *)((int)param_1 + 0x21e4a);
      *(undefined4 *)(iVar15 + 0x22) = 0;
      *(undefined4 *)(iVar15 + 0x26) = 10;
      *(undefined1 *)(iVar15 + 0x67) = 0;
      *(undefined4 *)(*(int *)((int)param_1 + 0x21e4a) + 0xe) = 1;
      uStack_148 = 0xce7f;
      uStack_146 = 100;
      FUN_00413d60();
      uStack_148 = 0xce8e;
      uStack_146 = 100;
      FUN_00415f20();
      if (*(char *)(*(int *)(param_1[0x878d] + 0xbc) + 0x3c) == '\0') {
        FUN_00592e70();
        FUN_00593f60();
      }
      FUN_00449650();
      if (*(int *)((int)param_1 + 0x21e62) == 0) {
        uVar11 = 0;
        if (*(int *)((int)param_1 + 0x117de) != 0) {
          uVar11 = *(undefined4 *)(DAT_00ab27b4 + 0x3f2 + *(int *)((int)param_1 + 0x117de) * 0x4b2);
        }
        uStack_148 = (undefined2)uVar11;
        uStack_146 = (undefined2)((uint)uVar11 >> 0x10);
        FUN_004d8cf0();
        FUN_004d8670(*(undefined4 *)((int)param_1 + 0x117de));
        uStack_148 = 0xcf14;
        uStack_146 = 100;
        FUN_0064c090();
      }
      if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
        uStack_148 = (undefined2)*(undefined4 *)((int)param_1 + 6);
        uStack_146 = (undefined2)((uint)*(undefined4 *)((int)param_1 + 6) >> 0x10);
        FUN_004dcb20();
      }
    }
    if (iVar10 == 3) {
      iVar15 = 3;
    }
    else {
      uStack_148 = 0xd43e;
      uStack_146 = 100;
      iStack_124 = (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 4))();
      if (iStack_124 == 1) {
        iStack_124 = 3;
      }
      iVar15 = iStack_124;
      uStack_148 = 0xd464;
      uStack_146 = 100;
      cVar8 = (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 0x5c))();
      if (cVar8 != '\0') {
        uStack_148 = 0xd47b;
        uStack_146 = 100;
        (**(code **)(*(int *)param_1[*(int *)((int)param_1 + 0x21e62) + 0x8779] + 0x68))();
      }
    }
    if (iVar15 != 0) goto switchD_0064da17_default;
    if ((*(int *)(DAT_00d0ca90 + 0x13d40) == 0) && (cVar8 = FUN_006523c0(), cVar8 != '\0')) {
      uStack_148 = 0xd4b1;
      uStack_146 = 100;
      iVar10 = (**(code **)(*DAT_00a983f0 + 4))();
      if (iVar10 != 0) goto switchD_0064da17_default;
    }
    iVar15 = (**(code **)(*unaff_retaddr + 8))();
    if (0x16 < iVar15) {
      if (iVar15 == 0x17) {
        if (DAT_00a98440 == 2) {
          FUN_004d87c0();
          uStack_148 = (undefined2)*(undefined4 *)((int)param_1 + 6);
          uStack_146 = (undefined2)((uint)*(undefined4 *)((int)param_1 + 6) >> 0x10);
          FUN_004dcb20();
        }
      }
      else if (iVar15 == 0x117) {
        uStack_148 = 0xdfef;
        uStack_146 = 100;
        FUN_00648c30();
      }
      goto switchD_0064da17_default;
    }
    if (iVar15 == 0x16) {
      uStack_148 = 0xdfce;
      uStack_146 = 100;
      iVar15 = FUN_0065fab0();
      if (iVar15 != 0) {
        ExceptionList = pvStack_10;
        return iVar15;
      }
      goto switchD_0064da17_default;
    }
    if (iVar15 != 0xe) {
      if (iVar15 == 0xf) {
        uStack_148 = 0xd544;
        uStack_146 = 100;
        FUN_00658440();
        ExceptionList = pvStack_10;
        return 3;
      }
      if (iVar15 == 0x14) {
        if (DAT_00bda0fc == '\0') {
          uVar11 = *(undefined4 *)(unaff_retaddr[1] + 0x16);
          uStack_148 = (undefined2)uVar11;
          uStack_146 = (undefined2)((uint)uVar11 >> 0x10);
          cVar8 = FUN_00657690();
          if (cVar8 == '\x01') {
            ExceptionList = pvStack_10;
            return 3;
          }
        }
        else {
          uVar11 = *(undefined4 *)(unaff_retaddr[1] + 0x16);
          uStack_148 = (undefined2)uVar11;
          uStack_146 = (undefined2)((uint)uVar11 >> 0x10);
          FUN_00592e00();
          *(undefined1 *)(param_1 + 0x4f4d) = 1;
        }
      }
      goto switchD_0064da17_default;
    }
    iVar15 = unaff_retaddr[1];
    uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
    uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
    cVar8 = FUN_00657690();
    if (cVar8 == '\x01') {
      ExceptionList = pvStack_10;
      return 3;
    }
    if (DAT_00a98440 == 3) {
      uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
      uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
      FUN_004d89d0(&puStack_128);
      iVar16 = FUN_004d8580(puStack_128,iStack_124);
      piVar9 = (int *)(DAT_00ab27b4 + 0x3d4 + iVar16 * 0x4b2);
      iVar16 = *piVar9;
      if (iVar16 != 0) {
        DAT_00a98448 = *(undefined4 *)(iVar16 + 6);
        *(int *)((int)param_1 + 0x13dc2) = *piVar9;
      }
    }
    else {
      DAT_00a98448 = *(undefined4 *)(DAT_00d0ca90 + 6);
    }
    cVar8 = FUN_00652050();
    if (cVar8 == '\x01') {
      if (DAT_00bd13ee == '\0') {
        FUN_0052ac00();
      }
      iVar10 = *(int *)(iVar15 + 0x16);
      if (iVar10 < *(int *)((int)param_1 + 0x21e92)) {
        *(int *)(iVar15 + 0x16) = *(int *)((int)param_1 + 0x21e92);
        *(int *)((int)param_1 + 0x21e92) = iVar10;
        *(undefined1 *)(param_1 + 0x8795) = 1;
      }
      iVar10 = *(int *)(iVar15 + 0x1a);
      if (iVar10 < *(int *)((int)param_1 + 0x21e96)) {
        *(int *)(iVar15 + 0x1a) = *(int *)((int)param_1 + 0x21e96);
        *(int *)((int)param_1 + 0x21e96) = iVar10;
        *(undefined1 *)(param_1 + 0x8795) = 1;
      }
      for (puVar12 = (undefined4 *)param_1[0x1142]; puVar12 != (undefined4 *)0x0;
          puVar12 = (undefined4 *)puVar12[2]) {
        cVar8 = (**(code **)(*(int *)*puVar12 + 0x28))();
        if (cVar8 != '\0') {
          uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
          uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
          cVar8 = FUN_00525d40(*(undefined4 *)((int)param_1 + 0x21e92),
                               *(undefined4 *)((int)param_1 + 0x21e96));
          if (cVar8 == '\x01') {
            uStack_148 = 0xd678;
            uStack_146 = 100;
            cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x24))();
            if (cVar8 == '\0') {
              uStack_148 = 0xd688;
              uStack_146 = 100;
              cVar8 = FUN_0052b370();
              if (cVar8 != '\0') {
                uStack_148 = 0xd697;
                uStack_146 = 100;
                (**(code **)(*param_1 + 0x49c))();
              }
            }
          }
        }
      }
      iVar10 = *(int *)((int)param_1 + 0x21e96);
      puStack_128 = *(undefined1 **)(iVar15 + 0x16);
      iStack_124 = *(int *)(iVar15 + 0x1a);
      iVar16 = *(int *)((int)param_1 + 0x21e92);
      puVar12 = (undefined4 *)param_1[0x1142];
      do {
        if (puVar12 == (undefined4 *)0x0) {
          for (puVar12 = (undefined4 *)param_1[0x1142]; puVar12 != (undefined4 *)0x0;
              puVar12 = (undefined4 *)puVar12[2]) {
            cVar8 = (**(code **)(*(int *)*puVar12 + 0x2c))();
            if (cVar8 != '\0') {
              uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
              uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
              cVar8 = FUN_00525d40(*(undefined4 *)((int)param_1 + 0x21e92),
                                   *(undefined4 *)((int)param_1 + 0x21e96));
              if (cVar8 == '\x01') {
                uStack_148 = 0xd7c6;
                uStack_146 = 100;
                cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x24))();
                if (cVar8 == '\0') {
                  uStack_148 = 0xd7d6;
                  uStack_146 = 100;
                  cVar8 = FUN_0052b370();
                  if (cVar8 != '\0') {
                    uStack_148 = 0xd7e5;
                    uStack_146 = 100;
                    (**(code **)(*param_1 + 0x49c))();
                  }
                }
              }
            }
          }
          piStack_12c = &DAT_0089cad8;
          do {
            iVar10 = *piStack_12c;
            if (iVar10 != 0) {
              for (puVar12 = *(undefined4 **)(iVar10 + 0x4508); puVar12 != (undefined4 *)0x0;
                  puVar12 = (undefined4 *)puVar12[2]) {
                cVar8 = (**(code **)(*(int *)*puVar12 + 0x28))();
                if (cVar8 != '\0') {
                  uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
                  uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
                  cVar8 = FUN_00525d40(*(undefined4 *)((int)param_1 + 0x21e92),
                                       *(undefined4 *)((int)param_1 + 0x21e96));
                  if (cVar8 == '\x01') {
                    uStack_148 = 0xd84b;
                    uStack_146 = 100;
                    cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x24))();
                    if (cVar8 == '\0') {
                      uStack_148 = 0xd85b;
                      uStack_146 = 100;
                      cVar8 = FUN_0052b370();
                      if (cVar8 != '\0') {
                        uStack_148 = 0xd86a;
                        uStack_146 = 100;
                        (**(code **)(*param_1 + 0x49c))();
                      }
                    }
                  }
                }
              }
              for (puVar12 = *(undefined4 **)(iVar10 + 0x4508); puVar12 != (undefined4 *)0x0;
                  puVar12 = (undefined4 *)puVar12[2]) {
                cVar8 = (**(code **)(*(int *)*puVar12 + 0x30))();
                if (cVar8 != '\0') {
                  uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
                  uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
                  cVar8 = FUN_00525d40(*(undefined4 *)((int)param_1 + 0x21e92),
                                       *(undefined4 *)((int)param_1 + 0x21e96));
                  if (cVar8 == '\x01') {
                    uStack_148 = 0xd8ba;
                    uStack_146 = 100;
                    cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x24))();
                    if (cVar8 == '\0') {
                      uStack_148 = 0xd8ca;
                      uStack_146 = 100;
                      cVar8 = FUN_0052b370();
                      if (cVar8 != '\0') {
                        uStack_148 = 0xd8d9;
                        uStack_146 = 100;
                        (**(code **)(*param_1 + 0x49c))();
                      }
                    }
                  }
                }
              }
              for (puVar12 = *(undefined4 **)(iVar10 + 0x4508); puVar12 != (undefined4 *)0x0;
                  puVar12 = (undefined4 *)puVar12[2]) {
                cVar8 = (**(code **)(*(int *)*puVar12 + 0x2c))();
                if (cVar8 != '\0') {
                  uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
                  uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
                  cVar8 = FUN_00525d40(*(undefined4 *)((int)param_1 + 0x21e92),
                                       *(undefined4 *)((int)param_1 + 0x21e96));
                  if (cVar8 == '\x01') {
                    uStack_148 = 0xd929;
                    uStack_146 = 100;
                    cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x24))();
                    if (cVar8 == '\0') {
                      uStack_148 = 0xd939;
                      uStack_146 = 100;
                      cVar8 = FUN_0052b370();
                      if (cVar8 != '\0') {
                        uStack_148 = 0xd948;
                        uStack_146 = 100;
                        (**(code **)(*param_1 + 0x49c))();
                      }
                    }
                  }
                }
              }
            }
            piStack_12c = piStack_12c + 1;
          } while ((int)piStack_12c < 0x89d038);
          *(undefined1 *)(param_1 + 0x8795) = 0;
          *(undefined1 *)((int)param_1 + 0x21e9a) = 0;
          iVar10 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
          if (0 < iVar10) {
            cVar8 = (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)param_1 + 0x21e5a) + 4) +
                                0x28))();
            if (cVar8 == '\x01') {
              uStack_148 = 0xd9a3;
              uStack_146 = 100;
              (**(code **)(*DAT_00bd0e18 + 0x20))();
              FUN_00652f50();
              ExceptionList = pvStack_10;
              return 3;
            }
            cVar8 = (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)param_1 + 0x21e5a) + 4) +
                                0x30))();
            if (cVar8 == '\x01') {
              uStack_148 = 0xd9d5;
              uStack_146 = 100;
              (**(code **)(*DAT_00bd0e18 + 0x20))();
              FUN_00652f50();
              ExceptionList = pvStack_10;
              return 3;
            }
            uStack_148 = 0xd9ed;
            uStack_146 = 100;
            (**(code **)(*DAT_00bd0e18 + 0x20))();
          }
          FUN_00652f50();
          ExceptionList = pvStack_10;
          return 3;
        }
        cVar8 = (**(code **)(*(int *)*puVar12 + 0x30))();
        if (cVar8 != '\0') {
          uStack_148 = 0xd6ec;
          uStack_146 = 100;
          iVar17 = FUN_004e9370();
          if ((((*(int *)(iVar17 + 0x3fa) <= iVar16) ||
               ((int)puStack_128 <= *(int *)(iVar17 + 0x3fa))) ||
              (*(int *)(iVar17 + 0x3fe) <= iVar10)) || (iStack_124 <= *(int *)(iVar17 + 0x3fe))) {
            uStack_148 = 0xd71c;
            uStack_146 = 100;
            iVar17 = FUN_004e9370();
            if (((*(int *)(iVar17 + 0x3f2) <= iVar16) ||
                ((int)puStack_128 <= *(int *)(iVar17 + 0x3f2))) ||
               ((*(int *)(iVar17 + 0x3f6) <= iVar10 || (iStack_124 <= *(int *)(iVar17 + 0x3f6)))))
            goto LAB_0064d76e;
          }
          uStack_148 = 0xd74f;
          uStack_146 = 100;
          cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x24))();
          if (cVar8 == '\0') {
            uStack_148 = 0xd75f;
            uStack_146 = 100;
            cVar8 = FUN_0052b370();
            if (cVar8 != '\0') {
              uStack_148 = 0xd76e;
              uStack_146 = 100;
              (**(code **)(*param_1 + 0x49c))();
            }
          }
        }
LAB_0064d76e:
        puVar12 = (undefined4 *)puVar12[2];
      } while( true );
    }
    uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
    uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
    uVar11 = FUN_00652570();
    switch(uVar11) {
    case 1:
    case 3:
      goto switchD_0064da17_caseD_1;
    case 2:
    case 4:
      piVar9 = (int *)FUN_00522770();
      if (piVar9 != param_1) goto switchD_0064da17_caseD_8;
switchD_0064da17_caseD_1:
      if (DAT_00bd13ee == '\0') {
        iVar10 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
        if (iVar10 == 1) {
          iVar10 = **(int **)(*(int *)((int)param_1 + 0x21e5a) + 4);
          if (*(int *)(iVar10 + 0xc) == *(int *)(*(int *)((int)param_1 + 0x21e6a) + 0xc)) {
            uVar11 = *(undefined4 *)(iVar10 + 0x14e);
            uVar3 = *(undefined4 *)(iVar10 + 0x240);
            *(int *)(iVar10 + 0x240) = *(int *)(iVar10 + 0xc);
            uStack_148 = 0xdae5;
            uStack_146 = 100;
            (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)param_1 + 0x21e5a) + 4) + 0x60))();
            uStack_148 = (undefined2)uVar11;
            uStack_146 = (undefined2)((uint)uVar11 >> 0x10);
            *(undefined4 *)(**(int **)(*(int *)((int)param_1 + 0x21e5a) + 4) + 0x240) = uVar3;
            FUN_00523370();
            uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x1a);
            uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x1a) >> 0x10);
            FUN_00652570(*(undefined4 *)(iVar15 + 0x16));
            uStack_148 = 0xdb21;
            uStack_146 = 100;
            iVar10 = FUN_0051b230();
            puVar12 = *(undefined4 **)(*(int *)(iVar10 + 0x1c2) + 4);
            uStack_148 = 0xdb35;
            uStack_146 = 100;
            cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e6a) + 0x2c))();
            if (cVar8 != '\0') {
              iVar10 = FUN_0051b230();
              if ((*(int *)(iVar10 + 0x254) != 8) && (*(int *)(iVar10 + 0x254) != 9)) {
                iVar10 = FUN_0051b230();
                puVar12 = *(undefined4 **)(*(int *)(iVar10 + 0x46a) + 0x34);
              }
            }
            while (puVar12 != (undefined4 *)0x0) {
              puVar13 = (undefined4 *)puVar12[2];
              uVar11 = *puVar12;
              uStack_148 = 0xdb7d;
              uStack_146 = 100;
              cVar8 = FUN_00652410();
              puVar12 = puVar13;
              if (cVar8 != '\0') {
                *(undefined4 *)((int)param_1 + 0x21e6a) = uVar11;
              }
            }
          }
        }
        else {
          iVar10 = FUN_0051b230();
          puVar12 = *(undefined4 **)(*(int *)(iVar10 + 0x1c2) + 4);
          cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e6a) + 0x2c))();
          if (cVar8 != '\0') {
            iVar10 = FUN_0051b230();
            if ((*(int *)(iVar10 + 0x254) != 8) && (*(int *)(iVar10 + 0x254) != 9)) {
              iVar10 = FUN_0051b230();
              puVar12 = *(undefined4 **)(*(int *)(iVar10 + 0x46a) + 0x34);
            }
          }
          while (puVar12 != (undefined4 *)0x0) {
            puVar13 = (undefined4 *)puVar12[2];
            uVar11 = *puVar12;
            uStack_148 = 0xdbf0;
            uStack_146 = 100;
            cVar8 = FUN_00652410();
            puVar12 = puVar13;
            if (cVar8 != '\0') {
              *(undefined4 *)((int)param_1 + 0x21e6a) = uVar11;
            }
          }
        }
        FUN_0052ac00();
        iVar10 = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x21e6a) + 0x11c) + 4))();
        if (iVar10 == 0) {
          cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e6a) + 0x28))();
          if (cVar8 == '\x01') {
            iVar10 = *DAT_00bd0e18;
          }
          else {
            cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e6a) + 0x30))();
            if (cVar8 != '\x01') {
              uStack_148 = 0xdca8;
              uStack_146 = 100;
              (**(code **)(*DAT_00bd0e18 + 0x20))();
              goto LAB_0064dc3e;
            }
            iVar10 = *DAT_00bd0e18;
          }
          uStack_148 = 0xdc3e;
          uStack_146 = 100;
          (**(code **)(iVar10 + 0x20))();
        }
LAB_0064dc3e:
        uStack_148 = 0xdc50;
        uStack_146 = 100;
        cVar8 = FUN_0052b370();
        if ((cVar8 == '\0') && (DAT_00bd13ee != '\0')) goto LAB_0064dc75;
        uStack_148 = 0xdc6e;
        uStack_146 = 100;
        (**(code **)(*param_1 + 0x49c))();
      }
      else {
        uStack_148 = 0xdcbc;
        uStack_146 = 100;
        cVar8 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x24))();
        if (cVar8 != '\x01') goto LAB_0064dc3e;
        uStack_148 = 0xdcd5;
        uStack_146 = 100;
        (**(code **)(*param_1 + 0x48c))();
      }
      FUN_00652f50();
LAB_0064dc75:
      *(undefined1 *)((int)param_1 + 0x21e9a) = 0;
      ExceptionList = pvStack_10;
      return 3;
    case 5:
    case 0xc:
      break;
    case 6:
    case 7:
      goto switchD_0064da17_caseD_6;
    case 8:
      goto switchD_0064da17_caseD_8;
    case 9:
      iVar15 = DAT_00ab27b4 + *(int *)((int)param_1 + 0x21e6e) * 0x4b2;
      if (((*(int **)(iVar15 + 0x3d4) == param_1) &&
          (cVar8 = (**(code **)(*(int *)(*(int *)(iVar15 + 0x46a) + 0x30) + 8))(), cVar8 == '\0'))
         && (*(int **)(**(int **)(*(int *)(DAT_00ab27b4 + 0x46a +
                                          *(int *)((int)param_1 + 0x21e6e) * 0x4b2) + 0x34) + 0x248)
             == param_1)) {
        FUN_0052ac00();
        uStack_148 = 0xdd7e;
        uStack_146 = 100;
        (**(code **)(*param_1 + 0x49c))();
        FUN_00652f50();
      }
      break;
    case 10:
      *(undefined4 *)((int)param_1 + 0x21e6a) = 0;
      bVar5 = false;
      piStack_12c = *(int **)(*(int *)(DAT_00ab27b4 + 0x1c2 +
                                      *(int *)((int)param_1 + 0x21e6e) * 0x4b2) + 4);
      if (piStack_12c != (int *)0x0) {
        do {
          if (bVar5) goto LAB_0064df05;
          piVar9 = (int *)*piStack_12c;
          piStack_12c = (int *)piStack_12c[2];
          cVar8 = (**(code **)(*piVar9 + 0x30))();
          if ((cVar8 != '\0') && (*(int *)((int)piVar9 + 0x212) == *(int *)((int)param_1 + 0x21e6e))
             ) {
            uStack_148 = 0xde0a;
            uStack_146 = 100;
            cVar8 = FUN_00652410();
            if (cVar8 != '\0') {
              iVar16 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
              if (iVar16 == 1) {
                iVar16 = **(int **)(*(int *)((int)param_1 + 0x21e5a) + 4);
                puStack_128 = *(undefined1 **)(iVar16 + 0x240);
                *(undefined4 *)(iVar16 + 0x240) = *(undefined4 *)(iVar16 + 0xc);
                uStack_148 = 0xde5e;
                uStack_146 = 100;
                (**(code **)(*(int *)**(undefined4 **)(*(int *)((int)param_1 + 0x21e5a) + 4) + 0x60)
                )();
                *(undefined1 **)(**(int **)(*(int *)((int)param_1 + 0x21e5a) + 4) + 0x240) =
                     puStack_128;
                uStack_148 = 0xde84;
                uStack_146 = 100;
                FUN_00523370();
                uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
                uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
                FUN_00652570();
                iVar16 = FUN_0051b230();
                piVar9 = *(int **)(*(int *)(iVar16 + 0x1c2) + 4);
                while (piVar9 != (int *)0x0) {
                  piVar2 = (int *)piVar9[2];
                  piVar4 = (int *)*piVar9;
                  cVar8 = (**(code **)(*piVar4 + 0x30))();
                  piVar9 = piVar2;
                  if ((cVar8 != '\0') &&
                     (*(int *)((int)piVar4 + 0x212) == *(int *)((int)param_1 + 0x21e6e))) {
                    uStack_148 = 0xded1;
                    uStack_146 = 100;
                    cVar8 = FUN_00652410();
                    if (cVar8 != '\0') {
                      *(int **)((int)param_1 + 0x21e6a) = piVar4;
                      bVar5 = true;
                    }
                  }
                }
              }
              else {
                *(int **)((int)param_1 + 0x21e6a) = piVar9;
                bVar5 = true;
              }
            }
          }
        } while (piStack_12c != (int *)0x0);
        if (bVar5) {
LAB_0064df05:
          FUN_0052ac00();
          uStack_148 = 0xdf1d;
          uStack_146 = 100;
          (**(code **)(*DAT_00bd0e18 + 0x20))();
          uStack_148 = (undefined2)*(undefined4 *)((int)param_1 + 0x21e6a);
          uStack_146 = (undefined2)((uint)*(undefined4 *)((int)param_1 + 0x21e6a) >> 0x10);
          (**(code **)(*param_1 + 0x49c))();
          FUN_00652f50();
          break;
        }
      }
switchD_0064da17_caseD_6:
      if (*(int *)((int)param_1 + 0x21e6e) != DAT_008477ac) {
switchD_0064da17_caseD_8:
        uStack_148 = 0xdf53;
        uStack_146 = 100;
        (**(code **)(*DAT_00bd0e18 + 0x20))();
        uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
        uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
        FUN_004d85e0();
LAB_0064df65:
        uStack_148 = 0xdf6c;
        uStack_146 = 100;
        FUN_0064c090();
      }
      break;
    case 0xb:
      uStack_148 = 0xdfb2;
      uStack_146 = 100;
      (**(code **)(*DAT_00bd0e18 + 0x20))();
      uStack_148 = (undefined2)*(undefined4 *)(iVar15 + 0x16);
      uStack_146 = (undefined2)((uint)*(undefined4 *)(iVar15 + 0x16) >> 0x10);
      FUN_004d85e0();
      goto LAB_0064df65;
    case 0xd:
      FUN_0052ac00();
      uStack_148 = 0xda40;
      uStack_146 = 100;
      (**(code **)(*param_1 + 0x49c))();
      uStack_148 = 0xda47;
      uStack_146 = 100;
      FUN_00652f50();
      uStack_148 = 0x10;
      uStack_146 = 0;
      piVar9 = (int *)FUN_006436d0();
      uStack_148 = 0xda5b;
      uStack_146 = 100;
      (**(code **)(*piVar9 + 0x4c))();
      *(undefined1 *)((int)param_1 + 0x21e9a) = 0;
      ExceptionList = pvStack_10;
      return 3;
    default:
      goto switchD_0064da17_default;
    }
switchD_0064da17_default:
    iVar15 = (**(code **)(*unaff_retaddr + 8))();
    if (iVar15 == 0xe) {
      *(undefined1 *)((int)param_1 + 0x21e9a) = 0;
    }
    ExceptionList = pvStack_10;
    return iVar10;
  }
  if (iVar10 == 0x4f) {
    if (*(int *)((int)param_1 + 0x21e62) == 0x10) {
      (**(code **)(*(int *)param_1[0x8789] + 0x4c))();
    }
    *(undefined4 *)(DAT_00893750 + 0xc) = *(undefined4 *)(DAT_00d0ca90 + 6);
    ExceptionList = pvStack_10;
    return 3;
  }
  if (iVar10 != 0x1b) {
    if (iVar10 == 0x4e) {
      puStack_128 = (undefined1 *)&uStack_148;
      uStack_148 = DAT_0088f28c;
      uStack_146 = (undefined2)DAT_0088f28e;
      FUN_0064e370(0,0);
      ExceptionList = pvStack_10;
      return 3;
    }
    goto LAB_0064cc61;
  }
  uStack_148 = 0xc6dd;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc6f1;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc705;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc719;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc72d;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc741;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc755;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc769;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc77d;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  uStack_148 = 0xc791;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  switch(DAT_00a98440) {
  case 0:
    goto LAB_0064c86b;
  case 1:
    uStack_148 = 0xc7ba;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    break;
  case 2:
    uStack_148 = 0xc7ed;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    break;
  case 3:
    uStack_148 = 0xc891;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    break;
  default:
    goto switchD_0064c7a6_caseD_4;
  case 6:
    goto LAB_0064c86b;
  case 9:
    uStack_148 = 0xc81d;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    break;
  case 10:
    uStack_148 = 0xc8ba;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    cVar8 = *(char *)((int)piVar9 + 0xa2);
    goto joined_r0x0064c8c4;
  case 0xb:
    goto LAB_0064c86b;
  case 0xc:
LAB_0064c86b:
    uStack_148 = 0xc876;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    cVar8 = *(char *)((int)piVar9 + 0xa2);
joined_r0x0064c8c4:
    if (cVar8 != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    break;
  case 0xe:
    uStack_148 = 0xc84d;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
  }
  *(undefined1 *)((int)piVar9 + 0x86) = 1;
switchD_0064c7a6_caseD_4:
  iVar10 = (**(code **)(*(int *)((int)param_1 + 0x21e7a) + 4))();
  if (iVar10 != 0) {
    uStack_148 = 0xc8ff;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xc92d;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xc95b;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xc989;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xc9b7;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xc9e5;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xca13;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xca41;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xca6f;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
    uStack_148 = 0xca9d;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  uStack_148 = 0xcacb;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  if ((param_1[0x886d] == 0) && (param_1[0x886e] == 0)) {
    uStack_148 = 0xcaf3;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  uStack_148 = 0xcb21;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  cVar8 = FUN_004a4570();
  if (cVar8 == '\0') {
    uStack_148 = 0xcb40;
    uStack_146 = 100;
    piVar9 = (int *)FUN_006436d0();
    if (*(char *)((int)piVar9 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar9 + 0x60))();
    *(undefined1 *)((int)piVar9 + 0x86) = 1;
  }
  uStack_148 = 0xcb6e;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  (**(code **)(*piVar9 + 0x50))();
  piVar9 = (int *)param_1[0x1142];
joined_r0x0064cb7d:
  if (piVar9 != (int *)0x0) goto LAB_0064cb7f;
  piStack_12c = &DAT_0089cad8;
  do {
    iVar10 = *piStack_12c;
    if ((iVar10 != 0) && (cVar8 = FUN_00444270(), cVar8 != '\0')) {
      piVar9 = *(int **)(iVar10 + 0x4508);
      while (piVar9 != (int *)0x0) {
        piVar2 = (int *)piVar9[2];
        iVar10 = *piVar9;
        iVar15 = (**(code **)(*(int *)(iVar10 + 0x11c) + 4))();
        if ((iVar15 != 0) || (piVar9 = piVar2, *(int *)(iVar10 + 0x176) != 0)) goto LAB_0064cc46;
      }
    }
    piStack_12c = piStack_12c + 1;
  } while ((int)piStack_12c < 0x89d038);
  uStack_148 = 0xcc25;
  uStack_146 = 100;
  piVar9 = (int *)FUN_006436d0();
  if (*(char *)((int)piVar9 + 0xa2) != '\0') {
    FUN_00433930();
  }
  (**(code **)(*piVar9 + 0x60))();
  *(undefined1 *)((int)piVar9 + 0x86) = 1;
LAB_0064cc46:
  iVar10 = (**(code **)(*DAT_00d37ed0 + 4))();
  if (100 < iVar10) {
    FUN_006e9960();
  }
  goto LAB_0064cc61;
LAB_0064cb7f:
  piVar2 = (int *)piVar9[2];
  iVar10 = *piVar9;
  iVar15 = (**(code **)(*(int *)(iVar10 + 0x11c) + 4))();
  if ((iVar15 != 0) || (piVar9 = piVar2, *(int *)(iVar10 + 0x176) != 0)) goto LAB_0064cc46;
  goto joined_r0x0064cb7d;
}


