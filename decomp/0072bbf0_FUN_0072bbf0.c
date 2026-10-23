// FUN_0072bbf0 @ 72bbf0 size=7625

undefined4 __thiscall FUN_0072bbf0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int aiStackY_224 [124];
  undefined4 uStackY_34;
  char *pcStackY_30;
  int *piStackY_2c;
  int iStackY_28;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007de396;
  local_c = ExceptionList;
  ExceptionList = &local_c;
LAB_0072bc0c:
  while (iVar1 = FUN_00535490(), iVar1 != 1) {
    if (iVar1 == 2) {
      ExceptionList = local_c;
      return 0;
    }
    piVar4 = (int *)FUN_00534391();
    if (*piVar4 == 4) {
      FUN_005343dc();
      ExceptionList = local_c;
      return 0;
    }
  }
  iVar1 = param_2[1];
  if (iVar1 < 0x234) {
    if (iVar1 == 0x233) {
      iStackY_28 = 0x72cb19;
      piVar4 = operator_new(0x16);
      local_4 = 0x51;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e950();
        *piVar4 = (int)&PTR_FUN_007f8f34;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72cb52;
      local_10 = operator_new(0xe);
      local_4 = 0x52;
      goto LAB_0072c453;
    }
    if (iVar1 < 0x139) {
      if (iVar1 == 0x138) {
        iStackY_28 = 0x72c40b;
        piVar4 = operator_new(0x18);
        local_4 = 0x1d;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9440;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c444;
        local_10 = operator_new(0xe);
        local_4 = 0x1e;
        goto LAB_0072c453;
      }
      if (iVar1 < 0xf4) {
        if (iVar1 == 0xf3) {
          iStackY_28 = 0x72c027;
          pvVar3 = operator_new(0x1a);
          local_4 = 0x7d;
          if (pvVar3 == (void *)0x0) goto LAB_0072d923;
          piVar4 = (int *)FUN_0072e070();
          goto LAB_0072d925;
        }
        switch(iVar1) {
        case 0xd:
          iStackY_28 = 0x72beff;
          piVar4 = operator_new(0x16);
          local_4 = 0x4b;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e950();
            *piVar4 = (int)&PTR_FUN_007f983c;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72bf38;
          local_10 = operator_new(0xe);
          local_4 = 0x4c;
          break;
        case 0xe:
          iStackY_28 = 0x72bf53;
          piVar4 = operator_new(0x16);
          local_4 = 0x4d;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e950();
            *piVar4 = (int)&PTR_FUN_007f97f8;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72bf8c;
          local_10 = operator_new(0xe);
          local_4 = 0x4e;
          break;
        default:
          goto switchD_0072bc6f_caseD_f;
        case 0x10:
          iStackY_28 = 0x72bc7d;
          piVar4 = operator_new(0x16);
          local_4 = 0x1f;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e310();
            *piVar4 = (int)&PTR_FUN_007f9a18;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72bcb6;
          local_10 = operator_new(0xe);
          local_4 = 0x20;
          break;
        case 0x1a:
          iStackY_28 = 0x72bd79;
          piVar4 = operator_new(0x16);
          local_4 = 0x33;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e310();
            *piVar4 = (int)&PTR_FUN_007f994c;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72bdb2;
          local_10 = operator_new(0xe);
          local_4 = 0x34;
          break;
        case 0x35:
          iStackY_28 = 0x72bcd1;
          piVar4 = operator_new(0x16);
          local_4 = 0x21;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e310();
            *piVar4 = (int)&PTR_FUN_007f99d4;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72bd0a;
          local_10 = operator_new(0xe);
          local_4 = 0x22;
          break;
        case 0x84:
          iStackY_28 = 0x72bd25;
          piVar4 = operator_new(0x16);
          local_4 = 0x2d;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e310();
            *piVar4 = (int)&PTR_FUN_007f9990;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72bd5e;
          local_10 = operator_new(0xe);
          local_4 = 0x2e;
          break;
        case 0xd8:
          iStackY_28 = 0x72bead;
          piVar4 = operator_new(0x1a);
          local_4 = 0x49;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e310();
            *piVar4 = (int)&PTR_FUN_007f9880;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72bee4;
          local_10 = operator_new(0xe);
          local_4 = 0x4a;
          goto LAB_0072be13;
        case 0xe2:
          iStackY_28 = 0x72bffb;
          pvVar3 = operator_new(0x1c);
          local_4 = 0x81;
          if (pvVar3 == (void *)0x0) goto LAB_0072d967;
          piVar4 = (int *)FUN_0072e0f0();
          goto LAB_0072d969;
        case 0xe4:
          iStackY_28 = 0x72bdcd;
          piVar4 = operator_new(0x22);
          local_4 = 0x39;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e590();
            *piVar4 = (int)&PTR_FUN_007f9908;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72be04;
          local_10 = operator_new(0xe);
          local_4 = 0x3a;
          goto LAB_0072be13;
        case 0xe5:
          iStackY_28 = 0x72be59;
          piVar4 = operator_new(0x16);
          local_4 = 0x3b;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e310();
            *piVar4 = (int)&PTR_FUN_007f98c4;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72be92;
          local_10 = operator_new(0xe);
          local_4 = 0x3c;
          break;
        case 0xec:
          iStackY_28 = 0x72bfa7;
          piVar4 = operator_new(0x16);
          local_4 = 0x6b;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            FUN_0072e310();
            *piVar4 = (int)&PTR_FUN_007f97b4;
          }
          iVar1 = *(int *)(param_1 + 8);
          local_4 = 0xffffffff;
          iStackY_28 = 0x72bfe0;
          local_10 = operator_new(0xe);
          local_4 = 0x6c;
        }
        goto LAB_0072c453;
      }
      switch(iVar1) {
      case 0xf5:
        iStackY_28 = 0x72c379;
        piVar4 = operator_new(0x1a);
        local_4 = 0x71;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9484;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c3b0;
        local_10 = operator_new(0xe);
        local_4 = 0x72;
        goto LAB_0072be13;
      case 0xf6:
        iStackY_28 = 0x72c2d3;
        piVar4 = operator_new(0x16);
        local_4 = 0x4f;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e950();
          *piVar4 = (int)&PTR_FUN_007f950c;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c30c;
        local_10 = operator_new(0xe);
        local_4 = 0x50;
        break;
      default:
        goto switchD_0072bc6f_caseD_f;
      case 0xf9:
        iStackY_28 = 0x72c1d7;
        piVar4 = operator_new(0x16);
        local_4 = 0x27;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f95d8;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c210;
        local_10 = operator_new(0xe);
        local_4 = 0x28;
        break;
      case 0xfa:
        iStackY_28 = 0x72c22b;
        piVar4 = operator_new(0x16);
        local_4 = 0x29;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9594;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c264;
        local_10 = operator_new(0xe);
        local_4 = 0x2a;
        break;
      case 0xfb:
        iStackY_28 = 0x72c27f;
        piVar4 = operator_new(0x16);
        local_4 = 0x2b;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9550;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c2b8;
        local_10 = operator_new(0xe);
        local_4 = 0x2c;
        break;
      case 0x10b:
        iStackY_28 = 0x72c0c7;
        piVar4 = operator_new(0x1a);
        local_4 = 10;
        if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
        FUN_0072e310();
        *piVar4 = (int)&PTR_FUN_007f972c;
        *piVar4 = (int)&PTR_FUN_007f96e8;
        goto LAB_0072c0f3;
      case 0x110:
        iStackY_28 = 0x72c183;
        piVar4 = operator_new(0x14);
        local_4 = 0x25;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f961c;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c1bc;
        local_10 = operator_new(0xe);
        local_4 = 0x26;
        break;
      case 300:
        iStackY_28 = 0x72c3df;
        pvVar3 = operator_new(0x1a);
        local_4 = 0x7c;
        if (pvVar3 == (void *)0x0) goto LAB_0072d967;
        piVar4 = (int *)FUN_0072e050();
        goto LAB_0072d969;
      case 0x12d:
        iStackY_28 = 0x72c070;
        piVar4 = operator_new(0x16);
        local_4 = 3;
        if (piVar4 == (int *)0x0) goto LAB_0072c09c;
        FUN_0072a3a0();
        *piVar4 = (int)&PTR_FUN_007f86f8;
        *piVar4 = (int)&PTR_FUN_007f9770;
        goto LAB_0072c09e;
      case 0x135:
        iStackY_28 = 0x72c327;
        piVar4 = operator_new(0x1a);
        local_4 = 0x6f;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f94c8;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c35e;
        local_10 = operator_new(0xe);
        local_4 = 0x70;
LAB_0072be13:
        if (local_10 == (void *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          pcStackY_30 = (char *)0x72be22;
          piStackY_2c = piVar4;
          iStackY_28 = iVar1;
          puVar2 = (undefined4 *)FUN_00740c50();
        }
        iVar5 = *(int *)(param_1 + 0xc);
        local_4 = 0xffffffff;
        *(undefined4 **)(param_1 + 8) = puVar2;
        *(int *)(param_1 + 0xc) = iVar5 + 1;
        if (iVar5 == 0) goto LAB_0072c3c4;
        *(undefined4 **)(iVar1 + 8) = puVar2;
        iStackY_28 = 0x72be4d;
        (**(code **)(*piVar4 + 0x40))();
        goto LAB_0072bc0c;
      case 0x137:
        iStackY_28 = 0x72c14f;
        piVar4 = operator_new(0x22);
        local_4 = 0x13;
        if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
        FUN_0072e310();
        *piVar4 = (int)&PTR_FUN_007f96a4;
        *piVar4 = (int)&PTR_FUN_007f9660;
        goto LAB_0072c0f3;
      }
    }
    else {
      switch(iVar1) {
      case 0x13c:
        iStackY_28 = 0x72c746;
        piVar4 = operator_new(0x22);
        local_4 = 0x1b;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e590();
          *piVar4 = (int)&PTR_FUN_007f9198;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c77d;
        local_10 = operator_new(0xe);
        local_4 = 0x1c;
        goto LAB_0072d129;
      default:
        goto switchD_0072bc6f_caseD_f;
      case 0x144:
        iStackY_28 = 0x72caed;
        pvVar3 = operator_new(0x22);
        local_4 = 0x8d;
        if (pvVar3 == (void *)0x0) {
LAB_0072d967:
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_0072e270();
        }
        goto LAB_0072d969;
      case 0x147:
        iStackY_28 = 0x72c6f4;
        piVar4 = operator_new(0x22);
        local_4 = 0x17;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e590();
          *piVar4 = (int)&PTR_FUN_007f91dc;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c72b;
        local_10 = operator_new(0xe);
        local_4 = 0x18;
        goto LAB_0072d129;
      case 0x14a:
        iStackY_28 = 0x72ca69;
        pvVar3 = operator_new(0x1e);
        local_4 = 0x84;
        if (pvVar3 == (void *)0x0) {
LAB_0072d923:
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_0072e150();
        }
        goto LAB_0072d925;
      case 0x14c:
        iStackY_28 = 0x72c691;
        piVar4 = operator_new(0x22);
        local_4 = 0x15;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f96a4;
          *piVar4 = (int)&PTR_FUN_007f9220;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c6ce;
        local_10 = operator_new(0xe);
        local_4 = 0x16;
        goto LAB_0072d129;
      case 0x195:
        iStackY_28 = 0x72ca3d;
        pvVar3 = operator_new(0x1a);
        local_4 = 0x7b;
        if (pvVar3 == (void *)0x0) goto LAB_0072d967;
        piVar4 = (int *)FUN_0072e030();
        goto LAB_0072d969;
      case 0x1ad:
        iStackY_28 = 0x72c4c9;
        piVar4 = operator_new(0x1a);
        local_4 = 9;
        if (piVar4 == (int *)0x0) {
LAB_0072c0f1:
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f972c;
          *piVar4 = (int)&PTR_FUN_007f93b8;
        }
        goto LAB_0072c0f3;
      case 0x1ae:
        iStackY_28 = 0x72c5a9;
        piVar4 = operator_new(0x16);
        local_4 = 0x11;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072a3a0();
          *piVar4 = (int)&PTR_FUN_007f86f8;
          *piVar4 = (int)&PTR_FUN_007f92a8;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c5e9;
        puVar2 = operator_new(0xe);
        goto joined_r0x0072c5ee;
      case 0x1af:
        iStackY_28 = 0x72c613;
        piVar4 = operator_new(0x16);
        local_4 = 0x12;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072a3a0();
          *piVar4 = (int)&PTR_FUN_007f86f8;
          *piVar4 = (int)&PTR_FUN_007f9264;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c653;
        puVar2 = operator_new(0xe);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = piVar4;
          puVar2[1] = iVar1;
          puVar2[2] = 0;
          *(undefined1 *)(puVar2 + 3) = 0;
        }
        iVar5 = *(int *)(param_1 + 0xc);
        *(undefined4 **)(param_1 + 8) = puVar2;
        *(int *)(param_1 + 0xc) = iVar5 + 1;
        if (iVar5 == 0) goto LAB_0072d6ca;
        *(undefined4 **)(iVar1 + 8) = puVar2;
        goto LAB_0072d791;
      case 0x1b3:
        iStackY_28 = 0x72c7ec;
        piVar4 = operator_new(0x16);
        local_4 = 0x3d;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9110;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c825;
        local_10 = operator_new(0xe);
        local_4 = 0x3e;
        break;
      case 0x1e1:
        iStackY_28 = 0x72c501;
        piVar4 = operator_new(0x1a);
        local_4 = 0xc;
        if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
        FUN_0072a3a0();
        *piVar4 = (int)&PTR_FUN_007f86f8;
        *piVar4 = (int)&PTR_FUN_007f9374;
        goto LAB_0072c0f3;
      case 0x1e2:
        iStackY_28 = 0x72c571;
        piVar4 = operator_new(0x1a);
        local_4 = 0xe;
        if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
        FUN_0072a3a0();
        *piVar4 = (int)&PTR_FUN_007f86f8;
        *piVar4 = (int)&PTR_FUN_007f92ec;
        goto LAB_0072c0f3;
      case 0x1e3:
        iStackY_28 = 0x72c539;
        piVar4 = operator_new(0x1a);
        local_4 = 0xd;
        if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
        FUN_0072a3a0();
        *piVar4 = (int)&PTR_FUN_007f86f8;
        *piVar4 = (int)&PTR_FUN_007f9330;
        goto LAB_0072c0f3;
      case 500:
        iStackY_28 = 0x72c840;
        piVar4 = operator_new(0x1a);
        local_4 = 0x3f;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f90cc;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c877;
        local_10 = operator_new(0xe);
        local_4 = 0x40;
        goto LAB_0072d129;
      case 0x1f5:
        iStackY_28 = 0x72c9e2;
        piVar4 = operator_new(0x1c);
        local_4 = 0x67;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *(undefined2 *)((int)piVar4 + 0x12) = 0;
          piVar4[5] = 0;
          *piVar4 = (int)&PTR_FUN_007f8f78;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72ca22;
        local_10 = operator_new(0xe);
        local_4 = 0x68;
LAB_0072d129:
        if (local_10 == (void *)0x0) {
          puVar2 = (undefined4 *)0x0;
          local_4 = 0xffffffff;
        }
        else {
          pcStackY_30 = (char *)0x72d13c;
          piStackY_2c = piVar4;
          iStackY_28 = iVar1;
          puVar2 = (undefined4 *)FUN_00740c50();
          local_4 = 0xffffffff;
        }
        goto LAB_0072c120;
      case 0x1f7:
        iStackY_28 = 0x72c491;
        piVar4 = operator_new(0x1a);
        local_4 = 8;
        if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
        FUN_0072a3a0();
        *piVar4 = (int)&PTR_FUN_007f86f8;
        *piVar4 = (int)&PTR_FUN_007f93fc;
        goto LAB_0072c0f3;
      case 0x1f9:
        iStackY_28 = 0x72c798;
        piVar4 = operator_new(0x18);
        local_4 = 0x23;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9154;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c7d1;
        local_10 = operator_new(0xe);
        local_4 = 0x24;
        break;
      case 0x1ff:
        iStackY_28 = 0x72ca95;
        pvVar3 = operator_new(0x22);
        local_4 = 0x86;
        if (pvVar3 == (void *)0x0) goto LAB_0072d967;
        piVar4 = (int *)FUN_0072e190();
LAB_0072d969:
        local_4 = 0xffffffff;
        iStackY_28 = 0x72d979;
        FUN_0072b5b0();
        iStackY_28 = 0x72d981;
        (**(code **)(*piVar4 + 0x40))();
        goto LAB_0072bc0c;
      case 0x200:
        iStackY_28 = 0x72cac1;
        pvVar3 = operator_new(0x22);
        local_4 = 0x8b;
        if (pvVar3 == (void *)0x0) goto LAB_0072d923;
        piVar4 = (int *)FUN_0072e230();
LAB_0072d925:
        local_4 = 0xffffffff;
        iStackY_28 = 0x72d935;
        FUN_0072b5b0();
        iStackY_28 = 0x72d93d;
        (**(code **)(*piVar4 + 0x40))();
        goto LAB_0072bc0c;
      case 0x22e:
        iStackY_28 = 0x72c8e6;
        piVar4 = operator_new(0x16);
        local_4 = 0x45;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9044;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c91f;
        local_10 = operator_new(0xe);
        local_4 = 0x46;
        break;
      case 0x22f:
        iStackY_28 = 0x72c892;
        piVar4 = operator_new(0x16);
        local_4 = 0x43;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9088;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c8cb;
        local_10 = operator_new(0xe);
        local_4 = 0x44;
        break;
      case 0x230:
        iStackY_28 = 0x72c93a;
        piVar4 = operator_new(0x16);
        local_4 = 0x47;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f9000;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c973;
        local_10 = operator_new(0xe);
        local_4 = 0x48;
        break;
      case 0x232:
        iStackY_28 = 0x72c98e;
        piVar4 = operator_new(0x16);
        local_4 = 0x57;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e950();
          *piVar4 = (int)&PTR_FUN_007f8fbc;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72c9c7;
        local_10 = operator_new(0xe);
        local_4 = 0x58;
      }
    }
LAB_0072c453:
    if (local_10 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      pcStackY_30 = (char *)0x72c466;
      piStackY_2c = piVar4;
      iStackY_28 = iVar1;
      puVar2 = (undefined4 *)FUN_00740c50();
    }
    local_4 = 0xffffffff;
LAB_0072d6b2:
    iVar5 = *(int *)(param_1 + 0xc);
    *(undefined4 **)(param_1 + 8) = puVar2;
    *(int *)(param_1 + 0xc) = iVar5 + 1;
    if (iVar5 == 0) {
LAB_0072d6ca:
      *(undefined4 **)(param_1 + 4) = puVar2;
    }
    else {
      *(undefined4 **)(iVar1 + 8) = puVar2;
    }
LAB_0072d791:
    iVar1 = *piVar4;
    piVar4 = param_2 + 0x103;
    piVar6 = aiStackY_224;
    for (iVar5 = 0x81; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    (**(code **)(iVar1 + 0x3c))();
    goto LAB_0072bc0c;
  }
  if (1000 < iVar1) {
    if (0x487 < iVar1) {
      if (0x56a < iVar1) {
        if (iVar1 < 0x578) {
          if (iVar1 == 0x577) {
            iStackY_28 = 0x72d830;
            pvVar3 = operator_new(0x1a);
            local_4 = 0x7e;
            if (pvVar3 == (void *)0x0) goto LAB_0072d967;
            piVar4 = (int *)FUN_0072e090();
          }
          else {
            if (iVar1 == 0x571) {
              iStackY_28 = 0x72d804;
              pvVar3 = operator_new(0x22);
              local_4 = 0x87;
              if (pvVar3 == (void *)0x0) goto LAB_0072d923;
              piVar4 = (int *)FUN_0072e1b0();
              goto LAB_0072d925;
            }
            if (iVar1 != 0x572) goto switchD_0072bc6f_caseD_f;
            iStackY_28 = 0x72d7d8;
            pvVar3 = operator_new(0x26);
            local_4 = 0x88;
            if (pvVar3 == (void *)0x0) goto LAB_0072d967;
            piVar4 = (int *)FUN_0072e1d0();
          }
        }
        else {
          if (iVar1 != 0x57e) {
            if (iVar1 != 0x680) goto switchD_0072bc6f_caseD_f;
            iStackY_28 = 0x72d905;
            pvVar3 = operator_new(0x22);
            local_4 = 0x8f;
            if (pvVar3 == (void *)0x0) goto LAB_0072d923;
            piVar4 = (int *)FUN_0072e2b0();
            goto LAB_0072d925;
          }
          iStackY_28 = 0x72d949;
          pvVar3 = operator_new(0x1a);
          local_4 = 0x90;
          if (pvVar3 == (void *)0x0) goto LAB_0072d967;
          piVar4 = (int *)FUN_0072e2d0();
        }
        goto LAB_0072d969;
      }
      if (iVar1 == 0x56a) {
        iStackY_28 = 0x72d761;
        pvVar3 = operator_new(0x16);
        local_4 = 0x7a;
        if (pvVar3 == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_0072e010();
        }
        local_4 = 0xffffffff;
        iStackY_28 = 0x72d791;
        FUN_0072b5b0();
        goto LAB_0072d791;
      }
      switch(iVar1) {
      case 0x49c:
        iStackY_28 = 0x72d735;
        pvVar3 = operator_new(0x1a);
        local_4 = 0x8e;
        if (pvVar3 == (void *)0x0) goto LAB_0072d967;
        piVar4 = (int *)FUN_0072e290();
        goto LAB_0072d969;
      default:
        goto switchD_0072bc6f_caseD_f;
      case 0x4a9:
        iStackY_28 = 0x72d5b0;
        piVar4 = operator_new(0x18);
        local_4 = 0x65;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *(undefined2 *)((int)piVar4 + 0x12) = 0;
          piVar4[5] = 0;
          *piVar4 = (int)&PTR_FUN_007f87c4;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72d5f0;
        local_10 = operator_new(0xe);
        local_4 = 0x66;
        goto LAB_0072d129;
      case 0x560:
        iStackY_28 = 0x72d60b;
        piVar4 = operator_new(0x16);
        local_4 = 0x75;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f8780;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72d644;
        local_10 = operator_new(0xe);
        local_4 = 0x76;
        break;
      case 0x568:
        iStackY_28 = 0x72d65f;
        piVar4 = operator_new(0x16);
        local_4 = 0x77;
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          FUN_0072e310();
          *piVar4 = (int)&PTR_FUN_007f873c;
        }
        iVar1 = *(int *)(param_1 + 8);
        local_4 = 0xffffffff;
        iStackY_28 = 0x72d698;
        local_10 = operator_new(0xe);
        local_4 = 0x78;
        break;
      case 0x569:
        goto switchD_0072d5a2_caseD_569;
      }
      goto LAB_0072c453;
    }
    if (iVar1 == 0x487) {
      iStackY_28 = 0x72d548;
      piVar4 = operator_new(0x26);
      local_4 = 0xb;
      if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
      FUN_0072a3a0();
      *piVar4 = (int)&PTR_FUN_007f86f8;
      *piVar4 = (int)&PTR_FUN_007f8808;
      goto LAB_0072c0f3;
    }
    switch(iVar1) {
    case 0x3e9:
      iStackY_28 = 0x72d262;
      piVar4 = operator_new(0x16);
      local_4 = 6;
      if (piVar4 == (int *)0x0) {
LAB_0072c09c:
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072a3a0();
        *piVar4 = (int)&PTR_FUN_007f86f8;
        *piVar4 = (int)&PTR_FUN_007f8a28;
      }
      goto LAB_0072c09e;
    default:
      goto switchD_0072bc6f_caseD_f;
    case 0x3f2:
      iStackY_28 = 0x72d29c;
      piVar4 = operator_new(0x16);
      local_4 = 7;
      if (piVar4 == (int *)0x0) goto LAB_0072c09c;
      FUN_0072a3a0();
      *piVar4 = (int)&PTR_FUN_007f86f8;
      *piVar4 = (int)&PTR_FUN_007f89e4;
LAB_0072c09e:
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72c0b0;
      puVar2 = operator_new(0xe);
joined_r0x0072c5ee:
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = piVar4;
        puVar2[1] = iVar1;
        puVar2[2] = 0;
        *(undefined1 *)(puVar2 + 3) = 0;
      }
      goto LAB_0072d6b2;
    case 0x3fa:
      iStackY_28 = 0x72d2d6;
      piVar4 = operator_new(0x16);
      local_4 = 0x2f;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e310();
        *piVar4 = (int)&PTR_FUN_007f89a0;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72d30f;
      local_10 = operator_new(0xe);
      local_4 = 0x30;
      goto LAB_0072c453;
    case 0x3fb:
      iStackY_28 = 0x72d51c;
      pvVar3 = operator_new(0x22);
      local_4 = 0x8a;
      if (pvVar3 == (void *)0x0) goto LAB_0072d967;
      piVar4 = (int *)FUN_0072e210();
      goto LAB_0072d969;
    case 0x3fc:
      iStackY_28 = 0x72d32a;
      piVar4 = operator_new(0x1a);
      local_4 = 0x35;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e310();
        *piVar4 = (int)&PTR_FUN_007f895c;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72d361;
      local_10 = operator_new(0xe);
      local_4 = 0x36;
      break;
    case 0x41c:
      iStackY_28 = 0x72d4c4;
      pvVar3 = operator_new(0x1c);
      local_4 = 0x82;
      if (pvVar3 == (void *)0x0) goto LAB_0072d967;
      piVar4 = (int *)FUN_0072e110();
      goto LAB_0072d969;
    case 0x41d:
      iStackY_28 = 0x72d4f0;
      pvVar3 = operator_new(0x1c);
      local_4 = 0x83;
      if (pvVar3 == (void *)0x0) goto LAB_0072d923;
      piVar4 = (int *)FUN_0072e130();
      goto LAB_0072d925;
    case 0x422:
      iStackY_28 = 0x72d37c;
      piVar4 = operator_new(0x1a);
      local_4 = 0x37;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e310();
        *piVar4 = (int)&PTR_FUN_007f8918;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72d3b3;
      local_10 = operator_new(0xe);
      local_4 = 0x38;
      break;
    case 0x483:
      iStackY_28 = 0x72d3ce;
      piVar4 = operator_new(0x1a);
      local_4 = 0x5d;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072eaa0();
        *piVar4 = (int)&PTR_FUN_007f88d4;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72d405;
      local_10 = operator_new(0xe);
      local_4 = 0x5e;
      break;
    case 0x484:
      iStackY_28 = 0x72d420;
      piVar4 = operator_new(0x1a);
      local_4 = 0x5f;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072eaa0();
        *piVar4 = (int)&PTR_FUN_007f8890;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72d457;
      local_10 = operator_new(0xe);
      local_4 = 0x60;
      break;
    case 0x485:
      iStackY_28 = 0x72d472;
      piVar4 = operator_new(0x1a);
      local_4 = 0x61;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072eaa0();
        *piVar4 = (int)&PTR_FUN_007f884c;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72d4a9;
      local_10 = operator_new(0xe);
      local_4 = 0x62;
    }
    goto LAB_0072d129;
  }
  if (iVar1 == 1000) {
    iStackY_28 = 0x72d1f8;
    piVar4 = operator_new(0x16);
    local_4 = 5;
    if (piVar4 == (int *)0x0) goto LAB_0072c09c;
    FUN_0072a3a0();
    *piVar4 = (int)&PTR_FUN_007f86f8;
    *piVar4 = (int)&PTR_FUN_007f8a6c;
    goto LAB_0072c09e;
  }
  if (iVar1 < 0x2bf) {
    if (iVar1 == 0x2be) {
      iStackY_28 = 0x72cebc;
      pvVar3 = operator_new(0x1a);
      local_4 = 0x85;
      if (pvVar3 == (void *)0x0) goto LAB_0072d967;
      piVar4 = (int *)FUN_0072e170();
      goto LAB_0072d969;
    }
    switch(iVar1) {
    case 0x234:
      iStackY_28 = 0x72cd6a;
      piVar4 = operator_new(0x16);
      local_4 = 0x55;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e950();
        *piVar4 = (int)&PTR_FUN_007f8d58;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72cda3;
      local_10 = operator_new(0xe);
      local_4 = 0x56;
      goto LAB_0072c453;
    case 0x235:
      iStackY_28 = 0x72cd16;
      piVar4 = operator_new(0x16);
      local_4 = 0x53;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e950();
        *piVar4 = (int)&PTR_FUN_007f8d9c;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72cd4f;
      local_10 = operator_new(0xe);
      local_4 = 0x54;
      goto LAB_0072c453;
    default:
      goto switchD_0072bc6f_caseD_f;
    case 0x23a:
      iStackY_28 = 0x72ccc4;
      piVar4 = operator_new(0x22);
      local_4 = 0x41;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e310();
        *piVar4 = (int)&PTR_FUN_007f8de0;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72ccfb;
      local_10 = operator_new(0xe);
      local_4 = 0x42;
      break;
    case 0x23b:
      iStackY_28 = 0x72ce90;
      pvVar3 = operator_new(0x22);
      local_4 = 0x8c;
      if (pvVar3 == (void *)0x0) goto LAB_0072d923;
      piVar4 = (int *)FUN_0072e250();
      goto LAB_0072d925;
    case 0x25c:
      iStackY_28 = 0x72ce64;
      pvVar3 = operator_new(0x1e);
      local_4 = 0x7f;
      if (pvVar3 == (void *)0x0) goto LAB_0072d967;
      piVar4 = (int *)FUN_0072e0b0();
      goto LAB_0072d969;
    case 0x29e:
      iStackY_28 = 0x72cbae;
      piVar4 = operator_new(0x16);
      local_4 = 4;
      if (piVar4 == (int *)0x0) goto LAB_0072c09c;
      FUN_0072a3a0();
      *piVar4 = (int)&PTR_FUN_007f86f8;
      *piVar4 = (int)&PTR_FUN_007f8ef0;
      goto LAB_0072c09e;
    case 0x2a6:
      iStackY_28 = 0x72cc20;
      piVar4 = operator_new(0x22);
      local_4 = 0x19;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e590();
        *piVar4 = (int)&PTR_FUN_007f8e68;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72cc57;
      local_10 = operator_new(0xe);
      local_4 = 0x1a;
      break;
    case 0x2b2:
      iStackY_28 = 0x72ce12;
      piVar4 = operator_new(0x1a);
      local_4 = 0x69;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072eaa0();
        *piVar4 = (int)&PTR_FUN_007f8cd0;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72ce49;
      local_10 = operator_new(0xe);
      local_4 = 0x6a;
      break;
    case 0x2b5:
      iStackY_28 = 0x72cbe8;
      piVar4 = operator_new(0x22);
      local_4 = 0x14;
      if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
      FUN_0072e310();
      *piVar4 = (int)&PTR_FUN_007f96a4;
      *piVar4 = (int)&PTR_FUN_007f8eac;
      goto LAB_0072c0f3;
    case 0x2b8:
      iStackY_28 = 0x72cdbe;
      piVar4 = operator_new(0x16);
      local_4 = 0x5b;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e950();
        *piVar4 = (int)&PTR_FUN_007f8d14;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72cdf7;
      local_10 = operator_new(0xe);
      local_4 = 0x5c;
      goto LAB_0072c453;
    case 0x2bd:
      iStackY_28 = 0x72cc72;
      piVar4 = operator_new(0x1a);
      local_4 = 0x31;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0072e310();
        *piVar4 = (int)&PTR_FUN_007f8e24;
      }
      iVar1 = *(int *)(param_1 + 8);
      local_4 = 0xffffffff;
      iStackY_28 = 0x72cca9;
      local_10 = operator_new(0xe);
      local_4 = 0x32;
    }
    goto LAB_0072d129;
  }
  switch(iVar1) {
  case 0x371:
    iStackY_28 = 0x72d1cc;
    pvVar3 = operator_new(0x22);
    local_4 = 0x89;
    if (pvVar3 == (void *)0x0) goto LAB_0072d923;
    piVar4 = (int *)FUN_0072e1f0();
    goto LAB_0072d925;
  default:
switchD_0072bc6f_caseD_f:
    iStackY_28 = 0x72d871;
    iVar1 = FUN_004fdae0();
    if (iVar1 == 0x8c) {
      piStackY_2c = param_2 + 2;
      iStackY_28 = *param_2 + 0x216;
      pcStackY_30 = s_ERROR___Unknown_trigger_type___s_008729c8;
      uStackY_34 = 0x72d8eb;
      FUN_00429a00();
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    else {
      iStackY_28 = 0x72d885;
      pvVar3 = operator_new(0x20);
      local_4 = 0x91;
      if (pvVar3 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0072e2f0();
      }
      local_4 = 0xffffffff;
      *(int *)((int)piVar4 + 0x12) = iVar1;
      iStackY_28 = 0x72d8bc;
      (**(code **)(*piVar4 + 0x40))();
      iStackY_28 = 0x72d8c4;
      FUN_0072b5b0();
    }
    goto LAB_0072bc0c;
  case 0x382:
    iStackY_28 = 0x72d040;
    piVar4 = operator_new(0x16);
    local_4 = 0x59;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_0072e950();
      *piVar4 = (int)&PTR_FUN_007f8b7c;
    }
    iVar1 = *(int *)(param_1 + 8);
    local_4 = 0xffffffff;
    iStackY_28 = 0x72d079;
    local_10 = operator_new(0xe);
    local_4 = 0x5a;
    goto LAB_0072c453;
  case 0x38b:
    iStackY_28 = 0x72d14c;
    piVar4 = operator_new(0x16);
    local_4 = 0x73;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_0072e310();
      *piVar4 = (int)&PTR_FUN_007f8ab0;
    }
    iVar1 = *(int *)(param_1 + 8);
    local_4 = 0xffffffff;
    iStackY_28 = 0x72d185;
    local_10 = operator_new(0xe);
    local_4 = 0x74;
    goto LAB_0072c453;
  case 0x3cc:
    iStackY_28 = 0x72d094;
    piVar4 = operator_new(0x1a);
    local_4 = 99;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_0072e310();
      *piVar4 = (int)&PTR_FUN_007f8b38;
    }
    iVar1 = *(int *)(param_1 + 8);
    local_4 = 0xffffffff;
    iStackY_28 = 0x72d0cb;
    local_10 = operator_new(0xe);
    local_4 = 100;
    goto LAB_0072d129;
  case 0x3d2:
    iStackY_28 = 0x72d1a0;
    pvVar3 = operator_new(0x20);
    local_4 = 0x80;
    if (pvVar3 == (void *)0x0) goto LAB_0072d967;
    piVar4 = (int *)FUN_0072e0d0();
    goto LAB_0072d969;
  case 0x3d6:
    iStackY_28 = 0x72cfcd;
    piVar4 = operator_new(0x118);
    local_4 = 0xf;
    if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
    FUN_0072a3a0();
    *piVar4 = (int)&PTR_FUN_007f86f8;
    *piVar4 = (int)&PTR_FUN_007f8c04;
    break;
  case 0x3d9:
    iStackY_28 = 0x72d008;
    piVar4 = operator_new(0x118);
    local_4 = 0x10;
    if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
    FUN_0072a3a0();
    *piVar4 = (int)&PTR_FUN_007f86f8;
    *piVar4 = (int)&PTR_FUN_007f8bc0;
    break;
  case 0x3dd:
    iStackY_28 = 0x72cf05;
    piVar4 = operator_new(0x12);
    local_4 = 0;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_0072a3a0();
      *piVar4 = (int)&PTR_FUN_007f86f8;
      *piVar4 = (int)&PTR_FUN_007f85ac;
    }
    iVar1 = *(int *)(param_1 + 8);
    local_4 = 0xffffffff;
    iStackY_28 = 0x72cf43;
    puVar2 = operator_new(0xe);
    goto joined_r0x0072cf48;
  case 0x3de:
    iStackY_28 = 0x72cf5a;
    piVar4 = operator_new(0x12);
    local_4 = 1;
    if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
    FUN_0072a3a0();
    *piVar4 = (int)&PTR_FUN_007f86f8;
    *piVar4 = (int)&PTR_FUN_007f8c8c;
    break;
  case 0x3df:
    iStackY_28 = 0x72cf92;
    piVar4 = operator_new(0x12);
    local_4 = 2;
    if (piVar4 == (int *)0x0) goto LAB_0072c0f1;
    FUN_0072a3a0();
    *piVar4 = (int)&PTR_FUN_007f86f8;
    *piVar4 = (int)&PTR_FUN_007f8c48;
    break;
  case 999:
    iStackY_28 = 0x72d0e3;
    piVar4 = operator_new(0x1a);
    local_4 = 0x6d;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_0072e310();
      *piVar4 = (int)&PTR_FUN_007f8af4;
    }
    iVar1 = *(int *)(param_1 + 8);
    local_4 = 0xffffffff;
    iStackY_28 = 0x72d11a;
    local_10 = operator_new(0xe);
    local_4 = 0x6e;
    goto LAB_0072d129;
  }
LAB_0072c0f3:
  iVar1 = *(int *)(param_1 + 8);
  local_4 = 0xffffffff;
  iStackY_28 = 0x72c105;
  puVar2 = operator_new(0xe);
joined_r0x0072cf48:
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = piVar4;
    puVar2[1] = iVar1;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
  }
LAB_0072c120:
  iVar5 = *(int *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 8) = puVar2;
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  if (iVar5 == 0) {
LAB_0072c3c4:
    *(undefined4 **)(param_1 + 4) = puVar2;
    iStackY_28 = 0x72c3d3;
    (**(code **)(*piVar4 + 0x40))();
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar2;
    iStackY_28 = 0x72c143;
    (**(code **)(*piVar4 + 0x40))();
  }
  goto LAB_0072bc0c;
switchD_0072d5a2_caseD_569:
  iStackY_28 = 0x72d6d9;
  pvVar3 = operator_new(0x16);
  local_4 = 0x79;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_0072dff0();
  }
  local_4 = 0xffffffff;
  iStackY_28 = 0x72d709;
  FUN_0072b5b0();
  iVar1 = *piVar4;
  piVar4 = param_2 + 0x103;
  piVar6 = aiStackY_224;
  for (iVar5 = 0x81; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  (**(code **)(iVar1 + 0x3c))();
  goto LAB_0072bc0c;
}


