// FUN_00702a00 @ 702a00 size=29534

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00702a00(char *param_1)

{
  double dVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  int extraout_ECX;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  undefined1 local_1a70 [256];
  undefined1 local_1970 [256];
  undefined1 local_1870 [256];
  char local_1770 [256];
  char local_1670 [256];
  char local_1570 [256];
  undefined1 local_1470 [256];
  char local_1370 [256];
  char local_1270 [256];
  char local_1170 [256];
  char local_1070 [256];
  char local_f70 [256];
  char local_e70 [256];
  char local_d70 [256];
  char local_c70 [256];
  char local_b70 [256];
  char local_a70 [256];
  char local_970 [256];
  char local_870 [256];
  char local_770 [256];
  char local_670 [256];
  char local_570 [256];
  char local_470 [260];
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  undefined1 local_344;
  char acStack_29f [259];
  undefined1 local_19c [8];
  undefined1 local_194 [8];
  undefined1 local_18c [8];
  undefined1 local_184 [144];
  undefined1 local_f4 [8];
  undefined1 local_ec [8];
  undefined1 local_e4 [8];
  undefined1 local_dc [8];
  undefined1 local_d4 [8];
  undefined1 local_cc [8];
  undefined2 local_c4;
  undefined4 local_c2;
  undefined2 local_bc;
  undefined4 local_ba;
  undefined2 local_b4;
  undefined4 local_b2;
  undefined2 local_ac;
  undefined4 local_aa;
  undefined2 local_a4;
  undefined4 local_a2;
  undefined2 local_9c;
  undefined4 local_9a;
  undefined2 local_94;
  undefined4 local_92;
  undefined2 local_8c;
  undefined4 local_8a;
  undefined2 local_84;
  undefined4 local_82;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined2 local_74;
  undefined4 local_72;
  undefined2 local_6c;
  undefined4 local_6a;
  undefined2 local_64;
  undefined4 local_62;
  undefined2 local_5c;
  undefined4 local_5a;
  undefined2 local_54;
  undefined4 local_52;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  char *local_2c;
  undefined8 local_28;
  undefined2 local_20;
  undefined1 uStack_1e;
  char local_1d;
  undefined1 *puVar29;
  undefined *puVar30;
  float fVar31;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007db9cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007a69e0();
  if (*(char *)(extraout_ECX + 0x150) != '\0') {
    local_20 = (undefined2)DAT_00d0ca90;
    uStack_1e = (undefined1)((uint)DAT_00d0ca90 >> 0x10);
    local_1d = (char)((uint)DAT_00d0ca90 >> 0x18);
    local_28._4_4_ = (undefined *)0x702a47;
    cVar11 = (**(code **)(*(int *)(extraout_ECX + 0x13e) + 0x30))();
    if (cVar11 == '\0') goto LAB_007039fa;
  }
  pcVar23 = &DAT_0083d360;
  if ((int)ROUND(*(float *)(extraout_ECX + 8)) < 1) {
    pcVar23 = &DAT_0088ebf8;
  }
  puVar30 = &DAT_0083d360;
  if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
    puVar30 = &DAT_0088ebf8;
  }
  pcVar25 = param_1;
  switch(*(undefined4 *)(extraout_ECX + 0x10)) {
  case 0:
  case 2:
    local_20 = 0x1b28;
    uStack_1e = 0x87;
    local_1d = 0;
    local_28._4_4_ = (undefined *)0x702aac;
    pcVar25 = (char *)FUN_0042b6c9();
    break;
  case 1:
    local_20 = 0x1b18;
    uStack_1e = 0x87;
    local_1d = 0;
    local_28._4_4_ = (undefined *)0x702abf;
    pcVar25 = (char *)FUN_0042b6c9();
    break;
  case 3:
    local_20 = 0x1b04;
    uStack_1e = 0x87;
    local_1d = 0;
    local_28._4_4_ = (undefined *)0x702ad2;
    pcVar25 = (char *)FUN_0042b6c9();
    break;
  case 4:
    local_20 = 0x1af0;
    uStack_1e = 0x87;
    local_1d = 0;
    local_28._4_4_ = (undefined *)0x702ae5;
    pcVar25 = (char *)FUN_0042b6c9();
    break;
  case 5:
    local_20 = 0x51c;
    uStack_1e = 0x86;
    local_1d = 0;
    local_28._4_4_ = (undefined *)0x702af8;
    pcVar25 = (char *)FUN_0042b6c9();
    break;
  case 6:
    local_20 = 0x530;
    uStack_1e = 0x86;
    local_1d = 0;
    local_28._4_4_ = (undefined *)0x702b0b;
    pcVar25 = (char *)FUN_0042b6c9();
    break;
  case 7:
    local_20 = 0x544;
    uStack_1e = 0x86;
    local_1d = 0;
    local_28._4_4_ = (undefined *)0x702b1e;
    pcVar25 = (char *)FUN_0042b6c9();
  }
  uVar6 = local_28._2_2_;
  uVar4 = (undefined2)local_28;
  local_28._0_2_ = SUB42(param_1,0);
  uVar5 = (undefined2)local_28;
  local_28._2_2_ = (undefined2)((uint)param_1 >> 0x10);
  uVar7 = local_28._2_2_;
  local_20 = SUB42(pcVar25,0);
  uVar8 = local_20;
  uStack_2e = (undefined2)((uint)pcVar25 >> 0x10);
  uVar3 = uStack_2e;
  uStack_1e = (undefined1)((uint)pcVar25 >> 0x10);
  uVar9 = uStack_1e;
  local_1d = (char)((uint)pcVar25 >> 0x18);
  cVar11 = local_1d;
  uStack_36 = uVar7;
  uStack_2e = uVar7;
  local_28._0_4_ = pcVar23;
  switch(*(undefined4 *)(extraout_ECX + 4)) {
  case 0:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703471;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x347b;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_N_REVOLT_00871990;
    break;
  case 1:
    iVar13 = *(int *)(extraout_ECX + 0xc);
    if (iVar13 < 1) {
      iVar13 = 0xc;
    }
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._4_4_ = (char *)0x7034b6;
    uVar14 = __ftol();
    local_28 = (double)CONCAT44(uVar14,puVar30);
    local_2c = s_EE_RRISK_00871984;
    goto LAB_0070309b;
  default:
    pcVar23 = s_A_Not_yet_described_Event_Comman_00870288;
    goto LAB_00709d2d;
  case 6:
    iVar13 = *(int *)(extraout_ECX + 0x24);
    if (iVar13 < 1) {
      if ((&DAT_0089cad8)[*(int *)(extraout_ECX + 0xc)] == 0) {
        ExceptionList = local_10;
        return;
      }
      local_20 = 0x3533;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(extraout_ECX + 0xc)] + 0xe) + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_ALL_0087196c;
    }
    else {
      if (iVar13 != 1) {
        if (iVar13 == 2) {
          local_20 = 0x34f7;
          uStack_1e = 0x70;
          local_1d = 0;
          uVar14 = FUN_005857c0();
          local_20 = (undefined2)uVar14;
          uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
          local_1d = (char)((uint)uVar14 >> 0x18);
          local_28._4_4_ = s_EE_ALL_MAJOR_00871974;
          break;
        }
        if (iVar13 != 3) {
          ExceptionList = local_10;
          return;
        }
        local_20 = 0x34e1;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_005857c0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = s_EE_ALL_MAJOR_00871974;
        goto LAB_00703e87;
      }
      local_20 = 0x350d;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_005857c0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_ALL_MAJOR_00871974;
    }
    goto LAB_00703015;
  case 7:
    if ((&DAT_0089cad8)[*(int *)(extraout_ECX + 0xc)] == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x3559;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(extraout_ECX + 0xc)] + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_INHERIT_00871960;
    goto LAB_00703015;
  case 8:
    if (*(int *)(extraout_ECX + 0x10) != 1) {
      pcVar23 = &DAT_0083d360;
      if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
        pcVar23 = &DAT_0088ebf8;
      }
      local_20 = 0x35ca;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x1930;
      local_28._4_4_ = pcVar23;
      goto LAB_007035d1;
    }
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    local_20 = 0x35a7;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x193c;
    local_28._4_4_ = puVar30;
    goto LAB_00703a8c;
  case 9:
    local_20 = 0x95a4;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a2f0();
    local_34 = 6;
    local_20 = 0x95b1;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_32 = (undefined2)uVar14;
    uStack_30 = (undefined2)((uint)uVar14 >> 0x10);
    local_20 = SUB42(&local_34,0);
    uStack_1e = (undefined1)((uint)&local_34 >> 0x10);
    local_1d = (char)((uint)&local_34 >> 0x18);
    local_28._4_4_ = (char *)0x7095bd;
    iVar13 = FUN_00428460();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -0xc) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x95d8;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -0xc) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_WAKE_LEADER_0087045c;
    break;
  case 10:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70372b;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_TAG_008718e4;
    goto LAB_00703015;
  case 0xb:
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = 0x37d0;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar19 = __ftol();
    local_20 = (undefined2)uVar19;
    uStack_1e = (undefined1)((uint)uVar19 >> 0x10);
    local_1d = (char)((uint)uVar19 >> 0x18);
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = (char *)0x7037d8;
    local_28._4_4_ = puVar30;
    uVar14 = FUN_004af740();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_RELATION_008718c8;
    goto LAB_0070309b;
  case 0xc:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = 0x37f1;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar19 = __ftol();
    local_20 = (undefined2)uVar19;
    uStack_1e = (undefined1)((uint)uVar19 >> 0x10);
    local_1d = (char)((uint)uVar19 >> 0x18);
    local_28._0_2_ = 0x37f8;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)uVar14;
    local_28._4_4_ = (char *)FUN_004af740();
    local_28._0_2_ = 0x18b8;
    goto LAB_0070997c;
  case 0xd:
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70382f;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x383c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x3845;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = puVar30;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_POP_008718b0;
    goto LAB_00709b1a;
  case 0xe:
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7038c3;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x38d0;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x38d9;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = puVar30;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_P_MAN_0087189c;
    goto LAB_00709b1a;
  case 0xf:
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70390d;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x391a;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x3923;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = puVar30;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_P_MINE_00871890;
    goto LAB_00709b1a;
  case 0x11:
    local_82 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_84,0);
    uStack_1e = (undefined1)((uint)&local_84 >> 0x10);
    local_1d = (char)((uint)&local_84 >> 0x18);
    local_84 = 7;
    local_28._4_4_ = (char *)0x703943;
    iVar13 = FUN_00428460();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if (iVar13 == 8) {
      ExceptionList = local_10;
      return;
    }
    if (*(char *)(iVar13 + 0x1264) != '\0') {
      local_20 = 0xebf8;
      uStack_1e = 0x88;
      local_1d = 0;
      local_28._4_4_ = param_1;
      local_28._0_2_ = 0x3971;
      local_28._2_2_ = 0x70;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    iVar13 = iVar13 + 0x1020;
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._4_4_ = s_EE_TRIGGER_00871884;
    break;
  case 0x12:
    local_92 = *(undefined4 *)(extraout_ECX + 0x20);
    local_20 = SUB42(&local_94,0);
    uStack_1e = (undefined1)((uint)&local_94 >> 0x10);
    local_1d = (char)((uint)&local_94 >> 0x18);
    local_94 = 7;
    local_28._4_4_ = (char *)0x7039b5;
    iVar13 = FUN_00428460();
    if ((iVar13 != 0) && (iVar13 != 8)) {
      iVar18 = DAT_00d0ca90;
      if (-1 < *(int *)(extraout_ECX + 0x24)) {
        iVar18 = (&DAT_0089cad8)[*(int *)(extraout_ECX + 0x14)];
      }
      if (iVar18 == 0) {
        local_20 = 0xebf8;
        uStack_1e = 0x88;
        local_1d = 0;
        local_28._4_4_ = param_1;
        local_28._0_2_ = 0x3a42;
        local_28._2_2_ = 0x70;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      if (*(char *)(iVar13 + 0x1264) == '\0') {
        uVar14 = *(undefined4 *)(extraout_ECX + 0x18);
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x703a22;
        uVar14 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
        local_28 = (double)CONCAT44(uVar14,iVar13 + 0x1020);
        local_2c = s_EE_EVENT_00871878;
        goto LAB_00709b1a;
      }
    }
LAB_007039fa:
    local_1d = 0;
    uStack_1e = 0x88;
    local_20 = 0xebf8;
    local_28._4_4_ = param_1;
    local_28._0_2_ = 0x39ff;
    local_28._2_2_ = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x13:
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    local_20 = 0x3a85;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x1870;
    local_28._4_4_ = puVar30;
    goto LAB_00703a8c;
  case 0x14:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x3ad2;
    local_28._2_2_ = 0x70;
    uVar14 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(extraout_ECX + 0xc)] + 0xe) + 0xc))();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_CB_00871868;
    goto LAB_00709b1a;
  case 0x15:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703ae6;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x3af0;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_CAPITAL_0087185c;
    break;
  case 0x17:
    if (*(int *)(extraout_ECX + 0x24) < 1) {
      uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703b77;
      piVar16 = (int *)FUN_004e9370();
      local_20 = 0x3b81;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*piVar16 + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_ADDCORE_00871840;
      break;
    }
    iVar13 = *(int *)(extraout_ECX + 0x14);
    if ((&DAT_0089cad8)[iVar13] == 0) {
      local_20 = (undefined2)iVar13;
      uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
      local_1d = (char)((uint)iVar13 >> 0x18);
      local_28._4_4_ = (char *)0x703b21;
      pcVar23 = (char *)FUN_004af740();
    }
    else {
      local_20 = 0x3b19;
      uStack_1e = 0x70;
      local_1d = 0;
      pcVar23 = (char *)(**(code **)(*(int *)((&DAT_0089cad8)[iVar13] + 0xe) + 0xc))();
    }
    uVar21 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    pcVar23 = pcVar25 + -uVar21;
    pcVar25 = local_d70;
    for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
      pcVar23 = pcVar23 + 4;
      pcVar25 = pcVar25 + 4;
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *pcVar25 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      pcVar25 = pcVar25 + 1;
    }
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703b52;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x3b5c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x184c;
    local_28._4_4_ = local_d70;
    goto LAB_007035d1;
  case 0x18:
    if (*(int *)(extraout_ECX + 0x24) < 1) {
      uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703c08;
      piVar16 = (int *)FUN_004e9370();
      local_20 = 0x3c12;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*piVar16 + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_REMCORE_00871824;
      break;
    }
    iVar13 = *(int *)(extraout_ECX + 0x14);
    if ((&DAT_0089cad8)[iVar13] == 0) {
      local_20 = (undefined2)iVar13;
      uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
      local_1d = (char)((uint)iVar13 >> 0x18);
      local_28._4_4_ = (char *)0x703bb2;
      pcVar23 = (char *)FUN_004af740();
    }
    else {
      local_20 = 0x3baa;
      uStack_1e = 0x70;
      local_1d = 0;
      pcVar23 = (char *)(**(code **)(*(int *)((&DAT_0089cad8)[iVar13] + 0xe) + 0xc))();
    }
    uVar21 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    pcVar23 = pcVar25 + -uVar21;
    pcVar25 = local_f70;
    for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
      pcVar23 = pcVar23 + 4;
      pcVar25 = pcVar25 + 4;
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *pcVar25 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      pcVar25 = pcVar25 + 1;
    }
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703be3;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x3bed;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x1830;
    local_28._4_4_ = local_f70;
    goto LAB_007035d1;
  case 0x19:
    if (*(int *)(extraout_ECX + 0x24) < 1) {
      local_20 = 0x3c9b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703ca1;
      piVar16 = (int *)FUN_004e9370();
      local_20 = 0x3cab;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*piVar16 + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_ADDCLAIM_00871808;
      break;
    }
    iVar13 = *(int *)(extraout_ECX + 0x14);
    if ((&DAT_0089cad8)[iVar13] == 0) {
      local_20 = (undefined2)iVar13;
      uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
      local_1d = (char)((uint)iVar13 >> 0x18);
      local_28._4_4_ = (undefined *)0x703c43;
      pcVar23 = (char *)FUN_004af740();
    }
    else {
      local_20 = 0x3c3b;
      uStack_1e = 0x70;
      local_1d = 0;
      pcVar23 = (char *)(**(code **)(*(int *)((&DAT_0089cad8)[iVar13] + 0xe) + 0xc))();
    }
    uVar21 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    pcVar23 = pcVar25 + -uVar21;
    pcVar25 = local_970;
    for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
      pcVar23 = pcVar23 + 4;
      pcVar25 = pcVar25 + 4;
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *pcVar25 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      pcVar25 = pcVar25 + 1;
    }
    local_20 = 0x3c72;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703c78;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x3c82;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x1814;
    local_28._4_4_ = local_970;
    goto LAB_007035d1;
  case 0x1a:
    local_20 = 0x3cbd;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (iVar13 < 1) {
      local_20 = 0x3d43;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703d49;
      piVar16 = (int *)FUN_004e9370();
      local_20 = 0x3d53;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*piVar16 + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_REMCLAIM_008717ec;
      break;
    }
    local_20 = 0x3cc8;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703cce;
    iVar13 = FUN_00465c30();
    if (iVar13 == 0) {
      local_20 = 0x3ce7;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703ced;
      pcVar23 = (char *)FUN_004af740();
    }
    else {
      local_20 = 0x3cde;
      uStack_1e = 0x70;
      local_1d = 0;
      pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    }
    uVar21 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    pcVar23 = pcVar25 + -uVar21;
    pcVar25 = local_1170;
    for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
      pcVar23 = pcVar23 + 4;
      pcVar25 = pcVar25 + 4;
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *pcVar25 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      pcVar25 = pcVar25 + 1;
    }
    local_20 = 0x3d1c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703d22;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x3d2c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x17f8;
    local_28._4_4_ = local_1170;
    goto LAB_007035d1;
  case 0x1b:
    local_20 = 0x3d69;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4e0();
    if (iVar13 == -2) {
      local_20 = 0x3de3;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x3de8;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703dee;
      piVar16 = (int *)FUN_004e9370();
      local_20 = 0x3df8;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*piVar16 + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_SECEDE_2_008717c8;
      break;
    }
    if (iVar13 == -1) {
      local_20 = 0x3dbc;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x3dc1;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703dc7;
      piVar16 = (int *)FUN_004e9370();
      local_20 = 0x3dd1;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*piVar16 + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_SECEDE_1_008717d4;
      break;
    }
    goto LAB_00703d75;
  case 0x1c:
    local_20 = 0x3e0a;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4e0();
    if (iVar13 == -2) {
      local_20 = 0x3e73;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x3e78;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703e7e;
      uVar14 = FUN_004c7bfa();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_SECEDE_AREA_2_00871790;
      goto LAB_00703e87;
    }
    if (iVar13 != -1) {
      local_20 = 0x3e1b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703e21;
      iVar13 = FUN_00465c30();
      local_20 = 0x3e2d;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703e35;
      FUN_0070a4b0();
      local_28._4_4_ = (char *)0x703e3a;
      local_28._4_4_ = (char *)__ftol();
      local_28._0_2_ = 0x3e40;
      local_28._2_2_ = 0x70;
      local_28._4_4_ = (char *)FUN_004c7bfa();
      local_28._0_2_ = 0x17b8;
      goto LAB_00703a8c;
    }
    local_20 = 0x3e53;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x3e58;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703e5e;
    uVar14 = FUN_004c7bfa();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_SECEDE_AREA_1_008717a4;
    goto LAB_00703015;
  case 0x1d:
    local_20 = 0x3eb8;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4e0();
    if (iVar13 == -2) {
      local_20 = 0x3f20;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x3f25;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703f2b;
      uVar14 = FUN_004c7c14();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_SECEDE_REGION_2_00871754;
      break;
    }
    if (iVar13 != -1) {
      local_20 = 0x3ec9;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703ecf;
      iVar13 = FUN_00465c30();
      local_20 = 0x3eda;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x703ee2;
      FUN_0070a4b0();
      local_28._4_4_ = (char *)0x703ee7;
      local_28._4_4_ = (char *)__ftol();
      local_28._0_2_ = 0x3eed;
      local_28._2_2_ = 0x70;
      local_28._4_4_ = (char *)FUN_004c7c14();
      local_28._0_2_ = 0x177c;
      goto LAB_007035d1;
    }
    local_20 = 0x3f00;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x3f05;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703f0b;
    uVar14 = FUN_004c7c14();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_SECEDE_REGION_1_00871768;
    goto LAB_00703e87;
  case 0x1e:
LAB_00703d75:
    local_20 = 0x3d7a;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703d80;
    iVar13 = FUN_00465c30();
    local_20 = 0x3d8d;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x3d92;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703d98;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x3da4;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703dac;
    local_28._4_4_ = (char *)(**(code **)(*piVar16 + 0xc))();
    local_28._0_2_ = 0x17e0;
    goto LAB_007035d1;
  case 0x1f:
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703879;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x3886;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x388f;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = puVar30;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_P_RR_008718a8;
    goto LAB_00709b1a;
  case 0x20:
    local_9a = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_9c,0);
    uStack_1e = (undefined1)((uint)&local_9c >> 0x10);
    local_1d = (char)((uint)&local_9c >> 0x18);
    local_9c = 6;
    local_28._4_4_ = (char *)0x703619;
    piVar16 = (int *)FUN_0050b140();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x362b;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_SLEADER_00871924;
    break;
  case 0x21:
    local_20 = SUB42(&local_44,0);
    uStack_1e = (undefined1)((uint)&local_44 >> 0x10);
    local_1d = (char)((uint)&local_44 >> 0x18);
    local_44 = 9;
    local_42 = (undefined2)*(undefined4 *)(extraout_ECX + 0xc);
    uStack_40 = (undefined2)((uint)*(undefined4 *)(extraout_ECX + 0xc) >> 0x10);
    local_28._4_4_ = (char *)0x70364b;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x3666;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_SMINISTER_00871914;
    break;
  case 0x22:
    local_52 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_54,0);
    uStack_1e = (undefined1)((uint)&local_54 >> 0x10);
    local_1d = (char)((uint)&local_54 >> 0x18);
    local_54 = 9;
    local_28._4_4_ = (char *)0x703686;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x36a1;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_WMINISTER_00871904;
    break;
  case 0x23:
    local_62 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_64,0);
    uStack_1e = (undefined1)((uint)&local_64 >> 0x10);
    local_1d = (char)((uint)&local_64 >> 0x18);
    local_64 = 10;
    local_28._4_4_ = (char *)0x7036c1;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x36dc;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_STEAM_008718f8;
    break;
  case 0x24:
    local_72 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_74,0);
    uStack_1e = (undefined1)((uint)&local_74 >> 0x10);
    local_1d = (char)((uint)&local_74 >> 0x18);
    local_74 = 10;
    local_28._4_4_ = (char *)0x7036fc;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x3717;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_WTEAM_008718ec;
    break;
  case 0x25:
    local_20 = 0x9467;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7;
    local_28._0_2_ = 0x9475;
    local_28._2_2_ = 0x70;
    FUN_00477fc0();
    local_20 = SUB42(local_e4,0);
    uStack_1e = (undefined1)((uint)local_e4 >> 0x10);
    local_1d = (char)((uint)local_e4 >> 0x18);
    local_28._4_4_ = (char *)0x709481;
    iVar13 = FUN_0070a550();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x9493;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a570();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_SLEEP_008704a0;
    goto LAB_00703e87;
  case 0x26:
    local_20 = 0x3f40;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703f46;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_WAR_0087174c;
    goto LAB_00703015;
  case 0x27:
  case 0x2b:
    pcVar23 = &DAT_0088ebf8;
LAB_00709d2d:
    uVar21 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    pcVar25 = pcVar25 + -uVar21;
    goto LAB_00709d3f;
  case 0x28:
    local_20 = 0x3f91;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703f97;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_INDY_0087172c;
    goto LAB_00703015;
  case 0x29:
    local_20 = 0x3f5b;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703f61;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_PROTECT_00871740;
    goto LAB_00703e87;
  case 0x2a:
    iVar13 = extraout_ECX + 0x28;
    local_28._0_4_ = local_1970;
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._4_4_ = s_scenarios__s_0083b864;
    local_2c = (char *)0x7033c5;
    FUN_007a630a();
    local_28._4_4_ = local_1970;
    local_20 = 0x90e0;
    uStack_1e = 0x83;
    local_1d = 0;
    local_28._0_2_ = 0x33df;
    local_28._2_2_ = 0x70;
    FUN_00534930();
    local_8 = 0;
    local_20 = 0x33f1;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_00535cb0();
    local_20 = SUB42(local_1a70,0);
    uStack_1e = (undefined1)((uint)local_1a70 >> 0x10);
    local_1d = (char)((uint)local_1a70 >> 0x18);
    local_28._4_4_ = s_EE_CHANGE_CAMPAIGN_008719a8;
    local_28._0_2_ = 0x3407;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_2c = (char *)0x703411;
    local_28._0_2_ = uVar5;
    local_28._2_2_ = uVar7;
    FUN_007a630a();
    local_8 = 0xffffffff;
    local_20 = 0x3426;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_005349a0();
    ExceptionList = local_10;
    return;
  case 0x2c:
    local_20 = 0x199c;
    uStack_1e = 0x87;
    goto LAB_0070343e;
  case 0x2d:
    local_b2 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_b4,0);
    uStack_1e = (undefined1)((uint)&local_b4 >> 0x10);
    local_1d = (char)((uint)&local_b4 >> 0x18);
    local_b4 = 9;
    local_28._4_4_ = (char *)0x702bb7;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2bd2;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_HOS_00871ae8;
    break;
  case 0x2e:
    local_8a = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_8c,0);
    uStack_1e = (undefined1)((uint)&local_8c >> 0x10);
    local_1d = (char)((uint)&local_8c >> 0x18);
    local_8c = 9;
    local_28._4_4_ = (char *)0x702bfb;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2c16;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_HOG_00871ae0;
    break;
  case 0x2f:
    local_20 = SUB42(&local_3c,0);
    uStack_1e = (undefined1)((uint)&local_3c >> 0x10);
    local_1d = (char)((uint)&local_3c >> 0x18);
    local_3c = 9;
    local_3a = (undefined2)*(undefined4 *)(extraout_ECX + 0xc);
    uStack_38 = (undefined2)((uint)*(undefined4 *)(extraout_ECX + 0xc) >> 0x10);
    local_28._4_4_ = (char *)0x702c36;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2c51;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_FGNMIN_00871ad4;
    break;
  case 0x30:
    local_7a = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_7c,0);
    uStack_1e = (undefined1)((uint)&local_7c >> 0x10);
    local_1d = (char)((uint)&local_7c >> 0x18);
    local_7c = 9;
    local_28._4_4_ = (char *)0x702c71;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2c8c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ARMMIN_00871ac8;
    break;
  case 0x31:
    local_ba = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_bc,0);
    uStack_1e = (undefined1)((uint)&local_bc >> 0x10);
    local_1d = (char)((uint)&local_bc >> 0x18);
    local_bc = 9;
    local_28._4_4_ = (char *)0x702cb5;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2cd0;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_SECMIN_00871abc;
    break;
  case 0x32:
    local_6a = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_6c,0);
    uStack_1e = (undefined1)((uint)&local_6c >> 0x10);
    local_1d = (char)((uint)&local_6c >> 0x18);
    local_6c = 9;
    local_28._4_4_ = (char *)0x702cf0;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2d0b;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_INTMIN_00871ab0;
    break;
  case 0x33:
    local_aa = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_ac,0);
    uStack_1e = (undefined1)((uint)&local_ac >> 0x10);
    local_1d = (char)((uint)&local_ac >> 0x18);
    local_ac = 9;
    local_28._4_4_ = (char *)0x702d34;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2d4f;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_STAFF_00871aa4;
    break;
  case 0x34:
    local_5a = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_5c,0);
    uStack_1e = (undefined1)((uint)&local_5c >> 0x10);
    local_1d = (char)((uint)&local_5c >> 0x18);
    local_5c = 9;
    local_28._4_4_ = (char *)0x702d6f;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2d8a;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_CARMY_00871a98;
    break;
  case 0x35:
    local_c2 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_c4,0);
    uStack_1e = (undefined1)((uint)&local_c4 >> 0x10);
    local_1d = (char)((uint)&local_c4 >> 0x18);
    local_c4 = 9;
    local_28._4_4_ = (char *)0x702db3;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2dce;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_CNAVY_00871a8c;
    break;
  case 0x36:
    local_4a = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_4c,0);
    uStack_1e = (undefined1)((uint)&local_4c >> 0x10);
    local_1d = (char)((uint)&local_4c >> 0x18);
    local_4c = 9;
    local_28._4_4_ = (char *)0x702dee;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2e09;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_CAIR_00871a84;
    break;
  case 0x37:
    local_a2 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = SUB42(&local_a4,0);
    uStack_1e = (undefined1)((uint)&local_a4 >> 0x10);
    local_1d = (char)((uint)&local_a4 >> 0x18);
    local_a4 = 9;
    local_28._4_4_ = (char *)0x702e32;
    iVar13 = FUN_00428ee0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -8) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x2e4d;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -8) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_MINISTER_00871a78;
    break;
  case 0x38:
    puVar30 = &DAT_0083d360;
    if (*(float *)(extraout_ECX + 8) <= _DAT_007e3380) {
      puVar30 = &DAT_0088ebf8;
    }
    if (*(int *)(extraout_ECX + 0x20) == 0) {
      local_2c = *(char **)(DAT_00d0ca90 + 6);
    }
    else {
      local_2c = *(char **)(extraout_ECX + 0xc);
    }
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = SUB42(puVar30,0);
    local_28._2_2_ = (undefined2)((uint)puVar30 >> 0x10);
    uStack_30 = 0x3778;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_004af740();
    uStack_30 = 0x18d4;
    goto LAB_00703781;
  case 0x39:
    local_20 = 0x3fac;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x703fb5;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703fc0;
    local_28._4_4_ = (char *)FUN_00496e60();
    local_28._0_2_ = 0x1720;
    goto LAB_0070997c;
  case 0x3a:
    local_20 = 0x3fd2;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x1714;
    goto LAB_00703a8c;
  case 0x3b:
    local_20 = 0x1704;
    uStack_1e = 0x87;
    goto LAB_0070343e;
  case 0x3c:
    puVar30 = &DAT_0088ebf8;
    local_20 = 0x3ff8;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x6;
    local_28._0_2_ = 0x4006;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00477fc0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70400c;
    iVar13 = FUN_00428460();
    if ((iVar13 != 0) && ((int *)(iVar13 + -0xc) != (int *)0x0)) {
      local_20 = 0x401f;
      uStack_1e = 0x70;
      local_1d = 0;
      puVar30 = (undefined *)(**(code **)(*(int *)(iVar13 + -0xc) + 0xc))();
    }
    local_20 = 0x4028;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x704031;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x16f4;
    local_28._4_4_ = puVar30;
    goto LAB_00703a8c;
  case 0x3d:
    local_20 = 0x4047;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x6;
    local_28._0_2_ = 0x4055;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00477fc0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70405b;
    iVar13 = FUN_00428460();
    if ((iVar13 != 0) && ((int *)(iVar13 + -0xc) != (int *)0x0)) {
      local_20 = 0x4070;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      fVar31 = (float)fVar26;
      local_20 = SUB42(fVar31,0);
      uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
      local_1d = (char)((uint)fVar31 >> 0x18);
      local_28._4_4_ = (char *)0x704079;
      uVar14 = FUN_00516890();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704084;
      local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + -0xc) + 0xc))();
      local_28._0_2_ = 0x16e0;
      goto LAB_00703a8c;
    }
    local_20 = 0x4096;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x70409f;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ADD_LEADER_SKILL_R_008716c8;
    goto LAB_00703015;
  case 0x3e:
    local_20 = 0x16a0;
    uStack_1e = 0x87;
    goto LAB_0070343e;
  case 0x40:
    local_20 = 0x167c;
    uStack_1e = 0x87;
    goto LAB_0070343e;
  case 0x42:
    local_20 = 0x4216;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x70421f;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x11;
    local_28._0_2_ = 0x4230;
    local_28._2_2_ = 0x70;
    FUN_00477fc0();
    local_20 = SUB42(local_cc,0);
    uStack_1e = (undefined1)((uint)local_cc >> 0x10);
    local_1d = (char)((uint)local_cc >> 0x18);
    local_28._4_4_ = (char *)0x70423c;
    piVar16 = (int *)FUN_0070a5a0();
    puVar30 = &DAT_0088ebf8;
    if (piVar16 != (int *)0x0) {
      local_20 = 0x424f;
      uStack_1e = 0x70;
      local_1d = 0;
      puVar30 = (undefined *)(**(code **)(*piVar16 + 0xc))();
    }
    local_20 = 0x4258;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70425e;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x1640;
    local_28._4_4_ = puVar30;
    goto LAB_00703a8c;
  case 0x43:
    local_20 = 0x4274;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x11;
    local_28._0_2_ = 0x4282;
    local_28._2_2_ = 0x70;
    FUN_00477fc0();
    local_20 = SUB42(local_dc,0);
    uStack_1e = (undefined1)((uint)local_dc >> 0x10);
    local_1d = (char)((uint)local_dc >> 0x18);
    local_28._4_4_ = (char *)0x70428e;
    piVar16 = (int *)FUN_0070a5a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x42a0;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_GAIN_TECH_00871630;
    break;
  case 0x44:
    local_20 = 0x15f0;
    uStack_1e = 0x87;
    goto LAB_0070343e;
  case 0x45:
    local_20 = 0x4338;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70433e;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704349;
    fVar26 = (float10)FUN_0070a4b0();
    local_28._4_4_ = (char *)(float)fVar26;
    local_28._0_2_ = 0x4352;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_00516890();
    local_28._0_2_ = 0x15e0;
    goto LAB_0070997c;
  case 0x46:
    local_20 = 0x4367;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x6;
    local_28._0_2_ = 0x4375;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00477fc0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70437b;
    iVar13 = FUN_00428460();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if ((int *)(iVar13 + -0xc) == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x4396;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar13 + -0xc) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_LEADER_LOY_008715d0;
    goto LAB_00703015;
  case 0x47:
    local_20 = 0x43a8;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x9;
    local_28._0_2_ = 0x43b6;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_0070a300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7043bc;
    piVar16 = (int *)FUN_0070a360();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x43ce;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_MINISTER_LOY_008715c0;
    break;
  case 0x48:
    puVar30 = &DAT_0088ebf8;
    local_20 = 0x40b9;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x6;
    local_28._0_2_ = 0x40c7;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00477fc0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7040cd;
    iVar13 = FUN_00428460();
    if ((iVar13 != 0) && ((int *)(iVar13 + -0xc) != (int *)0x0)) {
      local_20 = 0x40e0;
      uStack_1e = 0x70;
      local_1d = 0;
      puVar30 = (undefined *)(**(code **)(*(int *)(iVar13 + -0xc) + 0xc))();
    }
    local_20 = 0x40e9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x7040f2;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x16b4;
    local_28._4_4_ = puVar30;
    goto LAB_00703a8c;
  case 0x49:
    local_20 = 0x4112;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x9;
    local_28._0_2_ = 0x4120;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_0070a300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704126;
    piVar16 = (int *)FUN_0070a360();
    local_20 = 0x4132;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x70413b;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704146;
    local_28._4_4_ = (char *)(**(code **)(*piVar16 + 0xc))();
    local_28._0_2_ = 0x168c;
    goto LAB_00703a8c;
  case 0x4f:
    acStack_29f[3] = '\0';
    if ((*(byte *)(extraout_ECX + 0x10) & 1) != 0) {
      local_20 = 0xc2dc;
      uStack_1e = 0x83;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x70312f;
      pcVar23 = (char *)FUN_0042b6c9();
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      uVar21 = 0xffffffff;
      pcVar23 = &DAT_0083bf48;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
    }
    if ((*(byte *)(extraout_ECX + 0x10) & 2) != 0) {
      local_20 = 0xc2cc;
      uStack_1e = 0x83;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x70319f;
      pcVar23 = (char *)FUN_0042b6c9();
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      uVar21 = 0xffffffff;
      pcVar23 = &DAT_0083bf48;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
    }
    if ((*(byte *)(extraout_ECX + 0x10) & 4) != 0) {
      local_20 = 0xc2a4;
      uStack_1e = 0x83;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x70320f;
      pcVar23 = (char *)FUN_0042b6c9();
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      uVar21 = 0xffffffff;
      pcVar23 = &DAT_0083bf48;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
    }
    if ((*(byte *)(extraout_ECX + 0x10) & 8) != 0) {
      local_20 = 0xc2b4;
      uStack_1e = 0x83;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x70327f;
      pcVar23 = (char *)FUN_0042b6c9();
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      uVar21 = 0xffffffff;
      pcVar23 = &DAT_0083bf48;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
    }
    if ((*(byte *)(extraout_ECX + 0x10) & 0x10) != 0) {
      local_20 = 0xc2f4;
      uStack_1e = 0x83;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x7032ef;
      pcVar23 = (char *)FUN_0042b6c9();
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      uVar21 = 0xffffffff;
      pcVar23 = &DAT_0083bf48;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      iVar13 = -1;
      pcVar23 = acStack_29f + 3;
      do {
        pcVar24 = pcVar23;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar24 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar24;
      } while (cVar11 != '\0');
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = pcVar24 + -1;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
    }
    if (acStack_29f[3] != '\0') {
      uVar21 = 0xffffffff;
      pcVar23 = acStack_29f + 3;
      do {
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar11 != '\0');
      acStack_29f[~uVar21] = '\0';
    }
    local_20 = 0x3379;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70337f;
    piVar16 = (int *)FUN_004e9370();
    local_28._4_4_ = *(char **)(extraout_ECX + 0xc);
    local_28._0_2_ = 0x338a;
    local_28._2_2_ = 0x70;
    piVar15 = (int *)FUN_004e9370();
    local_20 = 0x3396;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70339e;
    local_28._4_4_ = (char *)(**(code **)(*piVar15 + 0xc))();
    pcVar23 = acStack_29f + 3;
    local_2c = s_EE_N_CONVOY_008719bc;
    goto LAB_0070304e;
  case 0x50:
    local_20 = 0x4485;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x70448e;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_SUPPLY_POOL_00871588;
    break;
  case 0x51:
    local_20 = 0x44a3;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x7044ac;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_OIL_POOL_0087157c;
    goto LAB_00703015;
  case 0x52:
    local_20 = 0x44df;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x7044e8;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ENERGY_POOL_00871554;
    break;
  case 0x53:
    local_20 = 0x44fd;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x704506;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_CONVOY_POOL_00871544;
    goto LAB_00703015;
  case 0x54:
    local_20 = 0x4aab;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x704ab4;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_METAL_POOL_00871364;
    goto LAB_00703015;
  case 0x55:
    local_20 = 0x44c1;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x7044ca;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_RARE_MATERIALS_POOL_00871564;
    goto LAB_00703e87;
  case 0x56:
    local_20 = 0x43e0;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7043e6;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x43f2;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x7043fb;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704406;
    local_28._4_4_ = (char *)(**(code **)(*piVar16 + 0xc))();
    local_28._0_2_ = 0x15b0;
    goto LAB_00703a8c;
  case 0x57:
    local_20 = 0x8c8d;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x640;
    goto LAB_007035d1;
  case 0x58:
    local_20 = 0x8ca4;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x630;
    goto LAB_0070997c;
  case 0x59:
    local_20 = 0x8cbb;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x61c;
    goto LAB_00703a8c;
  case 0x5a:
    local_20 = 0x8ce9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x604;
    goto LAB_0070997c;
  case 0x5b:
    local_20 = 0x8d00;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_28 = (double)CONCAT44(local_28._4_4_,puVar30);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_FREE_MP_008705f8;
    goto LAB_0070309b;
  case 0x5c:
    local_20 = 0x8cd2;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x610;
    goto LAB_007035d1;
  case 0x5d:
    local_20 = 0x8d1b;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x5e8;
    goto LAB_0070997c;
  case 0x5e:
    local_20 = 0x8d32;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x5d8;
    goto LAB_0070981d;
  case 0x5f:
    local_20 = 0x8d49;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x5c8;
    goto LAB_007035d1;
  case 0x60:
    local_20 = 0x8d60;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x5b8;
    goto LAB_0070997c;
  case 0x61:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x1954;
LAB_0070997c:
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x709986;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = param_1;
    uStack_30 = 0x9990;
    uStack_2e = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x62:
    local_20 = 0x3f76;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x703f7c;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_PEACE_00871734;
    break;
  case 99:
    local_20 = 0x4ac9;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a520();
    if (iVar13 != 0) {
      local_20 = 0x4ad4;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      fVar31 = (float)fVar26;
      local_20 = SUB42(fVar31,0);
      uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
      local_1d = (char)((uint)fVar31 >> 0x18);
      local_28._4_4_ = (char *)0x704add;
      uVar14 = FUN_00516890();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704ae8;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x4aee;
      local_28._2_2_ = 0x70;
      local_28._4_4_ = (char *)FUN_004af740();
      local_28._0_2_ = 0x1354;
      goto LAB_0070997c;
    }
    local_20 = 0x4b01;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x704b0a;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_WAR_ENTRY_US_00871344;
    break;
  case 100:
    local_20 = 0x4dbb;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704dc1;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ACCESS_00871290;
    goto LAB_00703e87;
  case 0x65:
    local_20 = 0x4b1f;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704b25;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_MAKE_PUPPET_00871334;
    goto LAB_00703015;
  case 0x66:
    local_20 = 0x4da0;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704da6;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_COUP_NATION_0087129c;
    goto LAB_00703015;
  case 0x67:
    puVar30 = &DAT_00871678;
    local_20 = 0x41b8;
    uStack_1e = 0x70;
    local_1d = 0;
    local_28._0_2_ = uVar4;
    local_28._2_2_ = uVar6;
    iVar13 = FUN_00496e60();
    if (iVar13 != -1) {
      local_20 = 0x41c4;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x41c9;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7041d1;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x41dd;
      local_28._2_2_ = 0x70;
      uVar14 = FUN_0070a300();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (undefined *)0x7041e3;
      piVar16 = (int *)FUN_0070a580();
      if (piVar16 != (int *)0x0) {
        local_20 = 0x41f1;
        uStack_1e = 0x70;
        local_1d = 0;
        puVar30 = (undefined *)(**(code **)(*piVar16 + 0xc))();
      }
    }
    local_20 = 0x41fa;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704200;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x1650;
    local_28._4_4_ = puVar30;
    goto LAB_00703a8c;
  case 0x68:
    puVar30 = &DAT_00871678;
    local_20 = 0x4167;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_00496e60();
    if (-1 < iVar13) {
      local_20 = 0x4172;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x4177;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70417f;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x418b;
      local_28._2_2_ = 0x70;
      uVar14 = FUN_0070a300();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704191;
      piVar16 = (int *)FUN_0070a580();
      if (piVar16 != (int *)0x0) {
        local_20 = 0x419f;
        uStack_1e = 0x70;
        local_1d = 0;
        puVar30 = (undefined *)(**(code **)(*piVar16 + 0xc))();
      }
    }
    local_20 = SUB42(puVar30,0);
    uStack_1e = (undefined1)((uint)puVar30 >> 0x10);
    local_1d = (char)((uint)puVar30 >> 0x18);
    local_28._4_4_ = s_EE_DELETE_UNIT_00871668;
    break;
  case 0x69:
    local_20 = 0x50fe;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5116;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5130;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705136;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5121;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705129;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5109;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70510f;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705143;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SOFT_ATTACK_008711d4;
    goto LAB_0070514e;
  case 0x6a:
    local_20 = 0x5185;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x519d;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x51b7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7051bd;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x51a8;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7051b0;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5190;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705196;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x7051ca;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_HARD_ATTACK_008711c4;
    goto LAB_007051d5;
  case 0x6b:
    local_20 = 0x520c;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5224;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x523e;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705244;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x522f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705237;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5217;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70521d;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705251;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_AIR_ATTACK_008711b4;
    goto LAB_00704fce;
  case 0x6c:
    local_20 = 0x5268;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5280;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x529a;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7052a0;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x528b;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705293;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5273;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705279;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x7052ad;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SUB_ATTACK_008711a4;
    goto LAB_0070514e;
  case 0x6d:
    local_20 = 0x52c4;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x52dc;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x52f6;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7052fc;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x52e7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7052ef;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x52cf;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7052d5;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705309;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_CONVOY_ATTACK_00871190;
    goto LAB_007051d5;
  case 0x6e:
    local_20 = 0x5320;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5338;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5352;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705358;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5343;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70534b;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x532b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705331;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705365;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_NAVAL_ATTACK_00871180;
    goto LAB_00704fce;
  case 0x6f:
    local_20 = 0x537c;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5394;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x53ae;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7053b4;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x539f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7053a7;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5387;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70538d;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x7053c1;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_STRATEGIC_ATTACK_0087116c;
    goto LAB_0070514e;
  case 0x70:
    local_20 = 0x53d8;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x53f0;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x540a;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705410;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x53fb;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705403;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x53e3;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7053e9;
      uVar14 = FUN_004ff3a0();
    }
    if (DAT_00dc1749 == '\0') {
      local_20 = 0x1158;
      uStack_1e = 0x87;
    }
    else {
      local_20 = 0x9f70;
      uStack_1e = 0x84;
    }
    local_1d = 0;
    local_28._4_4_ = (char *)0x705435;
    pcVar23 = (char *)FUN_0042b6c9();
    local_28._4_4_ = (char *)0x70543f;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = pcVar23;
    goto LAB_00704fda;
  case 0x71:
    local_20 = 0x5005;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x501d;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5037;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70503d;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5028;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705030;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5010;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705016;
      uVar14 = FUN_004ff3a0();
    }
    if (DAT_00dc1749 == '\0') {
      local_20 = 0x9f48;
    }
    else {
      local_20 = 0x9f54;
    }
    local_1d = 0;
    uStack_1e = 0x84;
    local_28._4_4_ = (char *)0x705062;
    pcVar23 = (char *)FUN_0042b6c9();
    local_28._4_4_ = (char *)0x70506c;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x11e4;
    local_32 = 0x87;
    local_3c = 0x5085;
    local_3a = 0x70;
    uStack_38 = uVar5;
    local_2c = pcVar23;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x72:
    local_20 = 0x50a2;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x50ba;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x50d4;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7050da;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x50c5;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7050cd;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x50ad;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7050b3;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x7050e7;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_BINFO_SO_00849fa4;
    goto LAB_00704fce;
  case 0x73:
    local_20 = 0x4f7e;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x4f96;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x4fb0;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x704fb6;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x4fa1;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x704fa9;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x4f89;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704f8f;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x704fc3;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_BINFO_SP_00849f1c;
    goto LAB_00704fce;
  case 0x74:
    local_20 = 0x5c89;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5ca1;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5cbb;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705cc1;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5cac;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705cb4;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5c94;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705c9a;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705ccf;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    local_28._4_4_ = (char *)(float)fVar26;
    local_28._0_2_ = 0x5cd8;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_00516890();
    local_2c = s_EE_MORALE_00871078;
    uStack_30 = 0x5cec;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x1084;
    goto LAB_00704fdf;
  case 0x75:
    local_20 = 0x5456;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x546e;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5488;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70548e;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5479;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705481;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5461;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705467;
      uVar14 = FUN_004ff3a0();
    }
    if (DAT_00dc1749 == '\0') {
      local_20 = 0x1148;
      uStack_1e = 0x87;
    }
    else {
      local_20 = 0x9f34;
      uStack_1e = 0x84;
    }
    local_1d = 0;
    local_28._4_4_ = (char *)0x7054b3;
    pcVar23 = (char *)FUN_0042b6c9();
    local_28._4_4_ = (char *)0x7054bd;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = pcVar23;
    goto LAB_007051e1;
  case 0x76:
    local_20 = 0x54d4;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x54ec;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5506;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70550c;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x54f7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7054ff;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x54df;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7054e5;
      uVar14 = FUN_004ff3a0();
    }
    if (DAT_00dc1749 == '\0') {
      local_20 = 0x1134;
      uStack_1e = 0x87;
    }
    else {
      local_20 = 0xa064;
      uStack_1e = 0x84;
    }
    local_1d = 0;
    local_28._4_4_ = (char *)0x705531;
    pcVar23 = (char *)FUN_0042b6c9();
    local_28._4_4_ = (char *)0x70553b;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = pcVar23;
    goto LAB_0070515a;
  case 0x77:
    local_20 = 0x5694;
    uStack_1e = 0x70;
    local_1d = 0;
    local_28._0_2_ = uVar4;
    local_28._2_2_ = uVar6;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = 0x569e;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x56f6;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5710;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705716;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5701;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705709;
        uVar14 = FUN_0070c0c0();
      }
      local_20 = 0x5722;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a4d0();
      if (iVar13 == 0) goto LAB_0070575b;
      local_20 = 0;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x70572f;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x573a;
      local_28._2_2_ = 0x70;
      FUN_00789c90();
      local_20 = 0x5744;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      local_20 = 0x574f;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a380();
      fVar27 = fVar27 * (float10)(float)fVar26;
    }
    else {
      local_20 = 0x56a9;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7056af;
      uVar14 = FUN_004ff3a0();
      local_20 = 0x56bb;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a4d0();
      if (iVar13 == 0) goto LAB_0070575b;
      local_20 = 0;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x7056cc;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x56d7;
      local_28._2_2_ = 0x70;
      FUN_00789ce0();
      local_20 = 0x56e1;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      local_20 = 0x56ec;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a380();
      fVar27 = fVar27 * (float10)(float)fVar26;
    }
    fVar31 = (float)(fVar27 * (float10)_DAT_007e543c);
LAB_0070575b:
    local_20 = 0x5762;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a540();
    local_34 = (undefined2)uVar14;
    uVar3 = local_34;
    local_32 = (undefined2)((uint)uVar14 >> 0x10);
    uVar4 = local_32;
    if (cVar12 == '\0') {
      local_28._4_4_ = &DAT_008710f4;
      local_28._0_2_ = 0x581a;
      local_28._2_2_ = 0x70;
      local_20 = uVar8;
      uStack_1e = uVar9;
      local_1d = cVar11;
      local_28._4_4_ = (char *)FUN_0042b6c9();
      dVar1 = (double)fVar31;
      local_2c = SUB84(dVar1,0);
      local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      uStack_30 = 0x1110;
      uStack_2e = 0x87;
      local_34 = 0x5833;
      local_32 = 0x70;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      uStack_38 = 0x10e0;
      uStack_36 = 0x87;
      uStack_40 = 0x5843;
      uStack_3e = 0x70;
      local_3c = uVar5;
      local_3a = uVar7;
      local_34 = uVar3;
      local_32 = uVar4;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x5771;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    if (iVar13 == 0) {
      local_28._4_4_ = &DAT_008710f4;
      local_28._0_2_ = 0x57c7;
      local_28._2_2_ = 0x70;
      local_20 = uVar8;
      uStack_1e = uVar9;
      local_1d = cVar11;
      local_28._4_4_ = (char *)FUN_0042b6c9();
      local_28._0_2_ = 0x57cf;
      local_28._2_2_ = 0x70;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_2c = SUB84(dVar1,0);
      local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      uStack_30 = 0x1110;
      uStack_2e = 0x87;
      local_34 = 0x57e4;
      local_32 = 0x70;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      uStack_38 = 0x10e0;
      uStack_36 = 0x87;
      uStack_40 = 0x57f4;
      uStack_3e = 0x70;
      local_3c = uVar5;
      local_3a = uVar7;
      local_34 = uVar3;
      local_32 = uVar4;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_28._4_4_ = (char *)0x70577d;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_BUILD_COST_00871110;
    uStack_30 = 0x5792;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    local_34 = 0x10fc;
    local_32 = 0x87;
    local_3c = 0x57a2;
    local_3a = 0x70;
    uStack_38 = uVar5;
    uStack_30 = uVar3;
    uStack_2e = uVar4;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x78:
    local_20 = 0x5860;
    uStack_1e = 0x70;
    local_1d = 0;
    local_28._0_2_ = uVar4;
    local_28._2_2_ = uVar6;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = 0x586a;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x58c5;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x58df;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7058e5;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x58d0;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7058d8;
        uVar14 = FUN_0070c0c0();
      }
      local_20 = 0x58f2;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a4d0();
      if (iVar13 == 0) goto LAB_0070592d;
      local_20 = 0;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x7058ff;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x590a;
      local_28._2_2_ = 0x70;
      FUN_00789c90();
      local_20 = 0x5911;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a390();
      local_20 = 0x5921;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      fVar26 = fVar26 * (float10)iVar13;
    }
    else {
      local_20 = 0x5875;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70587b;
      uVar14 = FUN_004ff3a0();
      local_20 = 0x5888;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a4d0();
      if (iVar13 == 0) goto LAB_0070592d;
      local_20 = 0;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x705899;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x58a4;
      local_28._2_2_ = 0x70;
      FUN_00789ce0();
      local_20 = 0x58ab;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a390();
      local_20 = 0x58bb;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      fVar26 = fVar26 * (float10)iVar13;
    }
    fVar31 = (float)(fVar26 * (float10)_DAT_007e543c);
LAB_0070592d:
    local_20 = 0x5934;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a540();
    local_34 = (undefined2)uVar14;
    uVar3 = local_34;
    local_32 = (undefined2)((uint)uVar14 >> 0x10);
    uVar4 = local_32;
    if (cVar12 == '\0') {
      local_28._4_4_ = s_T_DAYS_008710c8;
      local_28._0_2_ = 0x59fa;
      local_28._2_2_ = 0x70;
      local_20 = uVar8;
      uStack_1e = uVar9;
      local_1d = cVar11;
      local_28._4_4_ = (char *)FUN_0042b6c9();
      local_28._0_2_ = SUB42(fVar31,0);
      local_28._2_2_ = (undefined2)((uint)fVar31 >> 0x10);
      local_2c = (char *)0x705a04;
      uVar14 = FUN_00516890();
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      uStack_30 = 0x10d0;
      uStack_2e = 0x87;
      local_34 = 0x5a18;
      local_32 = 0x70;
      local_2c = pcVar23;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      uStack_38 = 0x10b4;
      uStack_36 = 0x87;
      uStack_40 = 0x5a2b;
      uStack_3e = 0x70;
      local_3c = uVar5;
      local_3a = uVar7;
      local_34 = uVar3;
      local_32 = uVar4;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x5943;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    if (iVar13 == 0) {
      local_28._4_4_ = s_T_DAYS_008710c8;
      local_28._0_2_ = 0x599c;
      local_28._2_2_ = 0x70;
      local_20 = uVar8;
      uStack_1e = uVar9;
      local_1d = cVar11;
      local_28._4_4_ = (char *)FUN_0042b6c9();
      local_28._0_2_ = 0x59a4;
      local_28._2_2_ = 0x70;
      fVar26 = (float10)FUN_0070a4b0();
      local_28._0_4_ = (char *)(float)fVar26;
      local_2c = (char *)0x7059ad;
      uVar14 = FUN_00516890();
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      uStack_30 = 0x10d0;
      uStack_2e = 0x87;
      local_34 = 0x59c1;
      local_32 = 0x70;
      local_2c = pcVar23;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      uStack_38 = 0x10b4;
      uStack_36 = 0x87;
      uStack_40 = 0x59d4;
      uStack_3e = 0x70;
      local_3c = uVar5;
      local_3a = uVar7;
      local_34 = uVar3;
      local_32 = uVar4;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_28._4_4_ = (char *)0x70594f;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_BUILD_TIME_008710d0;
    uStack_30 = 0x5964;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    local_34 = 0x10fc;
    local_32 = 0x87;
    local_3c = 0x5977;
    local_3a = 0x70;
    uStack_38 = uVar5;
    uStack_30 = uVar3;
    uStack_2e = uVar4;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x79:
    local_20 = 0x5a48;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5a60;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5a7a;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705a80;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5a6b;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705a73;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5a53;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705a59;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705a8d;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_REQ_MANPOWER_008710a4;
    goto LAB_00704fce;
  case 0x7a:
    local_20 = 0x5aa4;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5abc;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5ad6;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705adc;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5ac7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705acf;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5aaf;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705ab5;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705ae9;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SPEED_00849f10;
    goto LAB_0070514e;
  case 0x7b:
    local_20 = 0x5c10;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5c28;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5c42;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705c48;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5c33;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705c3b;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5c1b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705c21;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705c56;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    local_28._4_4_ = (char *)(float)fVar26;
    local_28._0_2_ = 0x5c5f;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_00516890();
    local_2c = s_EE_MAX_ORG_00871098;
    uStack_30 = 0x5c73;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x1084;
    goto LAB_0070515f;
  case 0x7c:
    local_20 = 0x5d02;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5d1a;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5d34;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705d3a;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5d25;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705d2d;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5d0d;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705d13;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705d48;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    local_28._4_4_ = (char *)(float)fVar26;
    local_28._0_2_ = 0x5d51;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_00516890();
    local_2c = s_EE_WEIGHT_00849e98;
    uStack_30 = 0x5d65;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    goto LAB_0070623b;
  case 0x7d:
    local_20 = 0x5d75;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5d8d;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5da7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705dad;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5d98;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705da0;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5d80;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705d86;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705dba;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SUPPLY_CONSUMPTION_00871060;
    uStack_30 = 0x5dcf;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x11e4;
    local_32 = 0x87;
    local_3c = 0x5ddf;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x7e:
    local_20 = 0x5dfc;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5e14;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5e2e;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705e34;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5e1f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705e27;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5e07;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705e0d;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705e41;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_FUEL_CONSUMPTION_0087104c;
    uStack_30 = 0x5e56;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x11e4;
    local_32 = 0x87;
    local_3c = 0x5e66;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x7f:
    local_20 = 0x5e83;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5e9b;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5eb5;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705ebb;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5ea6;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705eae;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5e8e;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705e94;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705ec9;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    local_28._4_4_ = (char *)(float)fVar26;
    local_28._0_2_ = 0x5ed2;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_00516890();
    local_2c = s_EE_RANGE_00871040;
    uStack_30 = 0x5ee6;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    goto LAB_007061a8;
  case 0x80:
    local_20 = 0x5ef6;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5f0e;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5f28;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705f2e;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5f19;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705f21;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5f01;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705f07;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705f3b;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_VISIBILITY_00871030;
    goto LAB_0070610a;
  case 0x81:
    local_20 = SUB42(local_194,0);
    uStack_1e = (undefined1)((uint)local_194 >> 0x10);
    local_1d = (char)((uint)local_194 >> 0x18);
    local_28._4_4_ = (char *)0x5;
    local_28._0_2_ = 0x5f5b;
    local_28._2_2_ = 0x70;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_2c = SUB84(dVar1,0);
    local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
    uStack_30 = 0x5f66;
    uStack_2e = 0x70;
    FUN_007a96e3();
    local_20 = 0x5f70;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5f88;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5fa2;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705fa8;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5f93;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705f9b;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x5f7b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705f81;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705fb5;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_AIR_DETECTION_0087101c;
    uStack_30 = 0x5fca;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x11e4;
    local_32 = 0x87;
    local_3c = 0x5fda;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x82:
    local_20 = SUB42(local_18c,0);
    uStack_1e = (undefined1)((uint)local_18c >> 0x10);
    local_1d = (char)((uint)local_18c >> 0x18);
    local_28._4_4_ = (char *)0x5;
    local_28._0_2_ = 0x60a5;
    local_28._2_2_ = 0x70;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_2c = SUB84(dVar1,0);
    local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
    uStack_30 = 0x60b0;
    uStack_2e = 0x70;
    FUN_007a96e3();
    local_20 = 0x60ba;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x60d2;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x60ec;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7060f2;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x60dd;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7060e5;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x60c5;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7060cb;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x7060ff;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SUB_DETECTION_00870ff0;
LAB_0070610a:
    uStack_30 = 0x6114;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x11e4;
    local_32 = 0x87;
    local_3c = 0x6124;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x83:
    local_20 = SUB42(local_19c,0);
    uStack_1e = (undefined1)((uint)local_19c >> 0x10);
    local_1d = (char)((uint)local_19c >> 0x18);
    local_28._4_4_ = (char *)0x5;
    local_28._0_2_ = 0x6000;
    local_28._2_2_ = 0x70;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_2c = SUB84(dVar1,0);
    local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
    uStack_30 = 0x600b;
    uStack_2e = 0x70;
    FUN_007a96e3();
    local_20 = 0x6015;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x602d;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x6047;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70604d;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x6038;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706040;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x6020;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706026;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x70605a;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SURFACE_DETECTION_00871004;
    uStack_30 = 0x606f;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x11e4;
    local_32 = 0x87;
    local_3c = 0x607f;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x84:
    local_20 = 0x61d4;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x61ec;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x6206;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70620c;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x61f7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7061ff;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x61df;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7061e5;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x70621a;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    local_28._4_4_ = (char *)(float)fVar26;
    local_28._0_2_ = 0x6223;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_00516890();
    local_2c = s_EE_AIRCRAFT_CAPACITY_00870fc8;
    uStack_30 = 0x6237;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
LAB_0070623b:
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0xfe0;
    local_32 = 0x87;
    local_3c = 0x624a;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x85:
    local_20 = 0x6141;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x6159;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x6173;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706179;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x6164;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70616c;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x614c;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706152;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x706187;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    local_28._4_4_ = (char *)(float)fVar26;
    local_28._0_2_ = 0x6190;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_00516890();
    local_2c = s_EE_TRANSPORT_CAPACITY_00849fc8;
    uStack_30 = 0x61a4;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
LAB_007061a8:
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0xfe0;
    local_32 = 0x87;
    local_3c = 0x61b7;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x86:
    local_20 = 0x5b00;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a540();
    if (cVar12 == '\0') {
      local_20 = 0x5b1a;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705b20;
      uVar14 = FUN_004ff320();
    }
    else {
      local_20 = 0x5b0b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705b13;
      uVar14 = FUN_0070c0c0();
    }
    local_28._4_4_ = (char *)0x705b2d;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SPEED_CAP_ART_00849ed8;
    goto LAB_007051d5;
  case 0x87:
    local_20 = 0x5b44;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a540();
    if (cVar12 == '\0') {
      local_20 = 0x5b5e;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705b64;
      uVar14 = FUN_004ff320();
    }
    else {
      local_20 = 0x5b4f;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705b57;
      uVar14 = FUN_0070c0c0();
    }
    local_28._4_4_ = (char *)0x705b71;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SPEED_CAP_ENG_00849ea4;
LAB_00704fce:
    uStack_30 = 0x4fd8;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
LAB_00704fda:
    local_34 = 0x11e4;
LAB_00704fdf:
    local_32 = 0x87;
    local_3c = 0x4fe8;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x88:
    local_20 = 0x5bcc;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a540();
    if (cVar12 == '\0') {
      local_20 = 0x5be6;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705bec;
      uVar14 = FUN_004ff320();
    }
    else {
      local_20 = 0x5bd7;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705bdf;
      uVar14 = FUN_0070c0c0();
    }
    local_28._4_4_ = (char *)0x705bf9;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SPEED_CAP_AA_00849eb8;
    goto LAB_007051d5;
  case 0x89:
    local_20 = 0x5b88;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a540();
    if (cVar12 == '\0') {
      local_20 = 0x5ba2;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705ba8;
      uVar14 = FUN_004ff320();
    }
    else {
      local_20 = 0x5b93;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705b9b;
      uVar14 = FUN_0070c0c0();
    }
    local_28._4_4_ = (char *)0x705bb5;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_SPEED_CAP_AT_00849ec8;
LAB_0070514e:
    uStack_30 = 0x5158;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
LAB_0070515a:
    local_34 = 0x11e4;
LAB_0070515f:
    local_32 = 0x87;
    local_3c = 0x5168;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x8a:
    local_20 = 0x5552;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x556a;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5584;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70558a;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5575;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70557d;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x555d;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705563;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705597;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_OUT_OF_FUEL_SPEED_00849ef8;
LAB_007051d5:
    uStack_30 = 0x51df;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
LAB_007051e1:
    local_34 = 0x11e4;
    local_32 = 0x87;
    local_3c = 0x51ef;
    local_3a = 0x70;
    uStack_38 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x8b:
    local_20 = 0x55ae;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x55c6;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x55e0;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7055e6;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x55d1;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7055d9;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x55b9;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7055bf;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x7055f3;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_OUT_OF_FUEL_COMBAT_MOD_00849e64;
    uStack_30 = 0x560e;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x1120;
    goto LAB_00704fdf;
  case 0x8c:
    local_20 = 0x5621;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar12 = FUN_0070a530();
    if (cVar12 == '\0') {
      local_20 = 0x5639;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar12 = FUN_0070a540();
      if (cVar12 == '\0') {
        local_20 = 0x5653;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x705659;
        uVar14 = FUN_004ff320();
      }
      else {
        local_20 = 0x5644;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70564c;
        uVar14 = FUN_0070c0c0();
      }
    }
    else {
      local_20 = 0x562c;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x705632;
      uVar14 = FUN_004ff3a0();
    }
    local_28._4_4_ = (char *)0x705666;
    local_20 = uVar8;
    uStack_1e = uVar9;
    local_1d = cVar11;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._0_2_ = SUB82(dVar1,0);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
    local_28._4_4_ = (char *)((ulonglong)dVar1 >> 0x20);
    local_2c = s_EE_OUT_OF_SUPPLY_COMBAT_MOD_00849e48;
    uStack_30 = 0x5681;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    local_34 = 0x1120;
    goto LAB_0070515f;
  case 0x8d:
    local_20 = 0x6267;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a530();
    if (cVar11 == '\0') {
      local_20 = 0x62a4;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7062aa;
      pcVar23 = (char *)FUN_004ff320();
      local_20 = 0x62b6;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x62bb;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7062c3;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x62cf;
      local_28._2_2_ = 0x70;
      uVar14 = FUN_0044e050();
    }
    else {
      local_20 = 0x6272;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706278;
      pcVar23 = (char *)FUN_004ff3a0();
      local_20 = 0x6284;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x6289;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706291;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x629d;
      local_28._2_2_ = 0x70;
      uVar14 = FUN_0044e100();
    }
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_NEW_MODEL_00870fb8;
    local_28._0_2_ = 0x62df;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_2c = s__s__s___s_00870fac;
    goto LAB_007030a6;
  case 0x8e:
    local_20 = 0x62f2;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a530();
    if (cVar11 == '\0') {
      local_20 = 0x62fd;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706303;
      uVar14 = FUN_004ff320();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_ACTIVATE_UNIT_TYPE_00870f94;
      local_28._0_2_ = 0x6316;
      local_28._2_2_ = 0x70;
      local_28._4_4_ = (char *)FUN_0042b6c9();
      local_28._0_2_ = 0xf8c;
      local_28._2_2_ = 0x87;
      local_2c = param_1;
      uStack_30 = 0x6325;
      uStack_2e = 0x70;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x6340;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x706346;
    uVar14 = FUN_004ff3a0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ACTIVATE_UNIT_TYPE_00870f94;
    local_28._0_2_ = 0x6359;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_2_ = 0xf8c;
    local_28._2_2_ = 0x87;
    goto LAB_00703a97;
  case 0x8f:
    local_20 = 0x636b;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a530();
    if (cVar11 != '\0') {
      local_20 = 0x63b9;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7063bf;
      uVar14 = FUN_004ff3a0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_DEACTIVATE_UNIT_TYPE_00870f74;
      local_28._0_2_ = 0x63d2;
      local_28._2_2_ = 0x70;
      local_28._4_4_ = (char *)FUN_0042b6c9();
      local_28._0_2_ = 0xf8c;
      local_28._2_2_ = 0x87;
      local_2c = param_1;
      uStack_30 = 0x63e1;
      uStack_2e = 0x70;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x6376;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70637c;
    uVar14 = FUN_004ff320();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_DEACTIVATE_UNIT_TYPE_00870f74;
    local_28._0_2_ = 0x638f;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_2_ = 0xf8c;
    local_28._2_2_ = 0x87;
    local_2c = param_1;
    uStack_30 = 0x639e;
    uStack_2e = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x90:
    local_20 = 0xf64;
    goto LAB_007063fc;
  case 0x91:
    local_20 = 0x8896;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70889c;
    uVar14 = FUN_004f56c0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ALLOW_BUILDING_00870778;
    goto LAB_00703015;
  case 0x92:
    local_20 = 0x88b1;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x88be;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00496e60();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = (char *)0x7088c4;
    pcVar23 = (char *)FUN_004f56c0();
    local_2c = s_EE_BUILDING_PROD_MOD_00870760;
    goto LAB_0070304e;
  case 0x93:
    local_20 = 0x88d9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x88e6;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00496e60();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = (char *)0x7088ec;
    uVar14 = FUN_004f62e0();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_CONVOY_PROD_MOD_0087074c;
    goto LAB_00709b1a;
  case 0x94:
    local_20 = 0x6432;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x1754;
    local_28._2_2_ = 0x86;
    local_2c = (char *)0x706447;
    pcVar23 = (char *)FUN_0042b6c9();
    local_2c = s__s____1f____00870f58;
    goto LAB_007030a6;
  case 0x95:
    local_20 = 0x6459;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70645f;
    uVar14 = FUN_004ff300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_NUCLEAR_CARRIER_NEW_00870f40;
    goto LAB_00703e87;
  case 0x96:
    local_20 = 0xee8;
    goto LAB_007063fc;
  case 0x97:
    local_20 = 0x647b;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x706484;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_MAX_REACTOR_SIZE_00870f18;
    local_28._0_2_ = 0x6497;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_2_ = 0xb9e0;
    local_28._2_2_ = 0x85;
    goto LAB_007035dc;
  case 0x98:
    local_20 = 0x64a9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xf08;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x7064be;
    local_28._0_4_ = (char *)FUN_0042b6c9();
    local_2c = s__s__0f____00870efc;
    goto LAB_00703059;
  case 0x99:
    local_20 = 0xf2c;
LAB_007063fc:
    local_1d = 0;
    uStack_1e = 0x87;
    local_28._4_4_ = (char *)0x706406;
    uVar14 = FUN_0042b6c9();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = &DAT_0083a374;
    local_2c = (char *)0x706415;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x9a:
    local_20 = 0x64e4;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x7064ed;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_MINISUB_BONUS_00870ec4;
    local_28._0_2_ = 0x6500;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_2_ = 0xb9e0;
    local_28._2_2_ = 0x85;
    local_2c = param_1;
    uStack_30 = 0x650f;
    uStack_2e = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x9b:
    local_20 = 0x652c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x706534;
    uVar14 = FUN_0070c0c0();
    local_20 = 0x653d;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x706546;
    uVar19 = FUN_00516890();
    local_20 = (undefined2)uVar19;
    uStack_1e = (undefined1)((uint)uVar19 >> 0x10);
    local_1d = (char)((uint)uVar19 >> 0x18);
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = s_EE_SURPRISE_00870eb8;
    uStack_30 = 0x655b;
    uStack_2e = 0x70;
    local_28._4_4_ = pcVar23;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = 0xea8;
    uStack_2e = 0x87;
    goto LAB_0070378c;
  case 0x9c:
    local_20 = 0x656d;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x706575;
    uVar14 = FUN_0070c0c0();
    local_20 = 0x657e;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x706587;
    uVar19 = FUN_00516890();
    local_20 = (undefined2)uVar19;
    uStack_1e = (undefined1)((uint)uVar19 >> 0x10);
    local_1d = (char)((uint)uVar19 >> 0x18);
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = s_EE_INTELLIGENCE_00870e98;
    uStack_30 = 0x659c;
    uStack_2e = 0x70;
    local_28._4_4_ = pcVar23;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = 0xea8;
    uStack_2e = 0x87;
    uStack_38 = 0x65ab;
    uStack_36 = 0x70;
    local_34 = uVar5;
    local_32 = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x9d:
    local_20 = 0x65c8;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7065d0;
    uVar14 = FUN_0070c0c0();
    local_20 = 0x65d9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x7065e2;
    uVar19 = FUN_00516890();
    local_20 = (undefined2)uVar19;
    uStack_1e = (undefined1)((uint)uVar19 >> 0x10);
    local_1d = (char)((uint)uVar19 >> 0x18);
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = s_EE_ARMY_DETECTION_00870e84;
    uStack_30 = 0x65f7;
    uStack_2e = 0x70;
    local_28._4_4_ = pcVar23;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = 0xea8;
    uStack_2e = 0x87;
    uStack_38 = 0x6606;
    uStack_36 = 0x70;
    local_34 = uVar5;
    local_32 = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x9e:
    local_20 = 0x6623;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x70662c;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0xe74;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x706640;
    local_28._4_4_ = pcVar23;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = s__s__s_d_00870e6c;
    local_34 = 0x664f;
    local_32 = 0x70;
    uStack_30 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x9f:
    local_20 = SUB42(local_184,0);
    uStack_1e = (undefined1)((uint)local_184 >> 0x10);
    local_1d = (char)((uint)local_184 >> 0x18);
    local_28._4_4_ = (char *)0x5;
    local_28._0_2_ = 0x6675;
    local_28._2_2_ = 0x70;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_2c = SUB84(dVar1,0);
    local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
    local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
    uStack_30 = 0x6680;
    uStack_2e = 0x70;
    FUN_007a96e3();
    local_20 = 0x668a;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x706692;
    local_28._4_4_ = (char *)FUN_0070c0c0();
    local_20 = SUB42(local_184,0);
    uStack_1e = (undefined1)((uint)local_184 >> 0x10);
    local_1d = (char)((uint)local_184 >> 0x18);
    local_28._0_2_ = 0xe50;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x7066a9;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = s__s__s___s_00870fac;
    local_34 = 0x66b8;
    local_32 = 0x70;
    uStack_30 = uVar5;
    uStack_2e = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0xa0:
    local_20 = 0x66d5;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    switch(uVar14) {
    case 7:
      local_20 = 0xe3c;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x7066f7;
      pcVar23 = (char *)FUN_0042b6c9();
      break;
    case 8:
      local_20 = 0xe24;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x70670d;
      pcVar23 = (char *)FUN_0042b6c9();
      break;
    default:
      pcVar23 = s_Unknown_Which_Type_00870d98;
      break;
    case 0xf:
      local_20 = 0xe14;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x706720;
      pcVar23 = (char *)FUN_0042b6c9();
      break;
    case 0x10:
      local_20 = 0xe04;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x706733;
      pcVar23 = (char *)FUN_0042b6c9();
      break;
    case 0x11:
      local_20 = 0xdf0;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x706746;
      pcVar23 = (char *)FUN_0042b6c9();
      break;
    case 0x12:
      local_20 = 0xdd4;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x706759;
      pcVar23 = (char *)FUN_0042b6c9();
      break;
    case 0x13:
      local_20 = 0xdc0;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x70676c;
      pcVar23 = (char *)FUN_0042b6c9();
      break;
    case 0x14:
      local_20 = 0xdac;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (undefined *)0x70677f;
      pcVar23 = (char *)FUN_0042b6c9();
    }
    local_20 = 0x678f;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s__s_____2f____00870d88;
    goto LAB_007030a6;
  case 0xa1:
    local_20 = 0x6976;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xd10;
    local_28._2_2_ = 0x87;
    local_2c = "Ph";
    pcVar23 = (char *)FUN_0042b6c9();
    local_2c = s__s_____0f____00870d00;
    goto LAB_007030a6;
  case 0xa2:
    local_20 = 0x69a3;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xcec;
    local_28._2_2_ = 0x87;
    local_2c = "Ph";
    local_28._0_4_ = (char *)FUN_0042b6c9();
    local_2c = s__s_____0f____00870d00;
    goto LAB_00703059;
  case 0xa3:
    local_20 = 0x69d0;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xcd8;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x7069eb;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = s__s_____0f____00870d00;
    local_34 = 0x69fa;
    local_32 = 0x70;
    uStack_30 = uVar5;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0xa4:
    local_20 = 0x6a17;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 == 1) {
      local_20 = 0x6a83;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      local_20 = 0x6a91;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a480();
      dVar1 = (double)((fVar27 + (float10)(float)fVar26) * (float10)_DAT_007e4088);
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x6aa7;
      local_28._2_2_ = 0x70;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
      local_2c = SUB84(dVar1,0);
      local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      uStack_30 = 0xcc4;
      uStack_2e = 0x87;
      local_34 = 0x6ac2;
      local_32 = 0x70;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      local_34 = 0xc9c;
      local_32 = 0x87;
      local_3c = 0x6ad1;
      local_3a = 0x70;
      uStack_38 = uVar5;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    if (iVar13 == 2) {
      local_20 = 2;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x706a56;
      fVar26 = (float10)FUN_0054ed30();
      dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0xcc4;
      local_28._2_2_ = 0x87;
      local_2c = (char *)0x706a71;
      local_28._0_4_ = (char *)FUN_0042b6c9();
      local_2c = s__s_____1f____00870cb4;
      goto LAB_00703059;
    }
    local_20 = 0x6a24;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xcc4;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x706a3f;
    pcVar23 = (char *)FUN_0042b6c9();
    local_2c = s__s_____1f____00870cb4;
    goto LAB_007030a6;
  case 0xa5:
    local_20 = 0x6aee;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 == 1) {
      local_20 = 0x6b86;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0xc84;
LAB_00706b91:
      local_28._2_2_ = 0x87;
      local_2c = (char *)0x706b9b;
      uVar14 = FUN_0042b6c9();
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      local_2c = s__s_____1f____00870c58;
      local_34 = 0x6baa;
      local_32 = 0x70;
      uStack_30 = uVar5;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    if (iVar13 != 2) {
      local_20 = 0x6b03;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a490();
      fVar26 = (float10)_DAT_007e4088;
      local_20 = 0x6b13;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar28 = (float10)FUN_0070a4b0();
      dVar1 = (double)(fVar28 + (float10)(float)(fVar27 * fVar26));
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x6b23;
      local_28._2_2_ = 0x70;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_2c = SUB84(dVar1,0);
      local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      uStack_30 = 0xc84;
      uStack_2e = 0x87;
      local_34 = 0x6b38;
      local_32 = 0x70;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      local_34 = 0xc68;
      local_32 = 0x87;
      local_3c = 0x6b47;
      local_3a = 0x70;
      uStack_38 = uVar5;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0xd;
    uStack_1e = 0;
    local_1d = 0;
    local_28._4_4_ = (char *)0x706b69;
    fVar26 = (float10)FUN_0054ed30();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xc84;
    goto LAB_0070905c;
  case 0xa6:
    local_20 = 0x6bc7;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 == 1) {
      local_20 = 0x6c63;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0xc38;
      local_28._2_2_ = 0x87;
      local_2c = (char *)0x706c78;
      uVar14 = FUN_0042b6c9();
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      local_2c = s__s_____2f_00870c18;
      local_34 = 0x6c87;
      local_32 = 0x70;
      uStack_30 = uVar5;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    if (iVar13 != 2) {
      local_20 = 0x6bd8;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      local_20 = 0x6be6;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a4a0();
      dVar1 = (double)(fVar27 + (float10)(float)fVar26);
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x6bf6;
      local_28._2_2_ = 0x70;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_2c = SUB84(dVar1,0);
      local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      uStack_30 = 0xc38;
      uStack_2e = 0x87;
      local_34 = 0x6c0b;
      local_32 = 0x70;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      local_34 = 0xc24;
      local_32 = 0x87;
      local_3c = 0x6c1a;
      local_3a = 0x70;
      uStack_38 = uVar5;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0xe;
    uStack_1e = 0;
    local_1d = 0;
    local_28._4_4_ = (char *)0x706c3c;
    fVar26 = (float10)FUN_0054ed30();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xc38;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x706c51;
    local_28._0_4_ = (char *)FUN_0042b6c9();
    local_2c = s__s_____2f_00870c18;
    goto LAB_00703059;
  case 0xa7:
    local_20 = 0x6908;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x706911;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_CARRIER_LEVEL_00870d40;
    local_28._0_2_ = 0x6924;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_2_ = 0xde54;
    local_28._2_2_ = 0x85;
    goto LAB_00703a97;
  case 0xa8:
    local_20 = 0xed8;
    goto LAB_00708937;
  case 0xa9:
    local_20 = 0x6ca4;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6cbe;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x6cd6;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706cdc;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6cc9;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706ccf;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6caf;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706cb7;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x6ce8;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xc04;
    goto LAB_00706cf3;
  case 0xaa:
    local_20 = 0x6d2a;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6d44;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x6d5c;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706d62;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6d4f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706d55;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6d35;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706d3d;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x6d6e;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xbe4;
    goto LAB_00706d79;
  case 0xab:
    local_20 = 0x6db0;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6dca;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x6de2;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706de8;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6dd5;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706ddb;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6dbb;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706dc3;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x6df4;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xbd0;
    goto LAB_00707f0f;
  case 0xac:
    local_20 = 0x6e0b;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6e25;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x6e3d;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706e43;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6e30;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706e36;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6e16;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706e1e;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x6e4f;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xbc0;
    goto LAB_00706cf3;
  case 0xad:
    local_20 = 0x6e66;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6e80;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x6e98;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706e9e;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6e8b;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706e91;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6e71;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706e79;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x6eaa;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xbb0;
    goto LAB_00706d79;
  case 0xae:
    local_20 = 0x6ec1;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6edb;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x6ef3;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706ef9;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6ee6;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706eec;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6ecc;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706ed4;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x6f05;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xba0;
    goto LAB_00707f0f;
  case 0xaf:
    local_20 = 0x6f1c;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6f36;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x6f4e;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706f54;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6f41;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706f47;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6f27;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706f2f;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x6f60;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb90;
    goto LAB_00706cf3;
  case 0xb0:
    local_20 = 0x6f77;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6f91;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x6fa9;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706faf;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6f9c;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706fa2;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6f82;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706f8a;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x6fbb;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb7c;
    goto LAB_00706d79;
  case 0xb1:
    local_20 = 0x6fd2;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x6fec;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7004;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70700a;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x6ff7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x706ffd;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x6fdd;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706fe5;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7016;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb68;
    goto LAB_00707f0f;
  case 0xb2:
    local_20 = 0x702d;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7047;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x705f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707065;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7052;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707058;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7038;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707040;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7071;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb58;
    goto LAB_00706cf3;
  case 0xb3:
    local_20 = 0x7088;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x70a2;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x70ba;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7070c0;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x70ad;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7070b3;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7093;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70709b;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x70cc;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb44;
    goto LAB_00706d79;
  case 0xb4:
    local_20 = 0x70e3;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x70fd;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7115;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70711b;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7108;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70710e;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x70ee;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7070f6;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7127;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb30;
    goto LAB_00707f0f;
  case 0xb5:
    local_20 = 0x713e;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7158;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7170;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707176;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7163;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707169;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7149;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707151;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7182;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb20;
    goto LAB_00706cf3;
  case 0xb6:
    local_20 = 0x7199;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x71b3;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x71cb;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7071d1;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x71be;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7071c4;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x71a4;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7071ac;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x71dd;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb10;
    goto LAB_00706d79;
  case 0xb7:
    local_20 = 0x71f4;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x720e;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7226;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70722c;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7219;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70721f;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x71ff;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707207;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7238;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xb00;
    goto LAB_00707f0f;
  case 0xb8:
    local_20 = 0x724f;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7269;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7281;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707287;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7274;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70727a;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x725a;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707262;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7293;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xaf0;
    goto LAB_00706cf3;
  case 0xb9:
    local_20 = 0x72aa;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x72c4;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x72dc;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7072e2;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x72cf;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7072d5;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x72b5;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7072bd;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x72ee;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xadc;
    goto LAB_00706d79;
  case 0xba:
    local_20 = 0x7305;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x731f;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7337;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70733d;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x732a;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707330;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7310;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707318;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7349;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xacc;
    goto LAB_00707f0f;
  case 0xbb:
    local_20 = 0x7360;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x737a;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7392;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707398;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7385;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70738b;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x736b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707373;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x73a4;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xab8;
    goto LAB_00706cf3;
  case 0xbc:
    local_20 = 0x73bb;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x73d5;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x73ed;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7073f3;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x73e0;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7073e6;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x73c6;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7073ce;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x73ff;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xaa8;
    goto LAB_00706d79;
  case 0xbd:
    local_20 = 0x7416;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7430;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7448;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70744e;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x743b;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707441;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7421;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707429;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x745a;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xa94;
    goto LAB_00707f0f;
  case 0xbe:
    local_20 = 0x7471;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x748b;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x74a3;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7074a9;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7496;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70749c;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x747c;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707484;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x74b5;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xa84;
    goto LAB_00706cf3;
  case 0xbf:
    local_20 = 0x74cc;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x74e6;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x74fe;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707504;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x74f1;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7074f7;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x74d7;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7074df;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7510;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xa70;
    goto LAB_00706d79;
  case 0xc0:
    local_20 = 0x7527;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7541;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7559;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70755f;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x754c;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707552;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7532;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70753a;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x756b;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xa5c;
    goto LAB_00707f0f;
  case 0xc1:
    local_20 = 0x7582;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x759c;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x75b4;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7075ba;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x75a7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7075ad;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x758d;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707595;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x75c6;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xa48;
    goto LAB_00706cf3;
  case 0xc2:
    local_20 = 0x75dd;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x75f7;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x760f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707615;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7602;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707608;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x75e8;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7075f0;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7621;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xa34;
    goto LAB_00706d79;
  case 0xc3:
    local_20 = 0x7638;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7652;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x766a;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707670;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x765d;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707663;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7643;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70764b;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x767c;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xa20;
    goto LAB_00707f0f;
  case 0xc4:
    local_20 = 0x7693;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x76ad;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x76c5;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7076cb;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x76b8;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7076be;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x769e;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7076a6;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x76d7;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0xa10;
    goto LAB_00706cf3;
  case 0xc5:
    local_20 = 0x76ee;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7708;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7720;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707726;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7713;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707719;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x76f9;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707701;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7732;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x9fc;
    goto LAB_00706d79;
  case 0xc6:
    local_20 = 0x7749;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7763;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x777b;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707781;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x776e;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707774;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7754;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70775c;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x778d;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x9e8;
    goto LAB_00707f0f;
  case 199:
    local_20 = 0x77a4;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x77be;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x77d6;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7077dc;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x77c9;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7077cf;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x77af;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7077b7;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x77e8;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x9d4;
    goto LAB_00706cf3;
  case 200:
    local_20 = 0x77ff;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7819;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7831;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707837;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7824;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70782a;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x780a;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707812;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7843;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x9c0;
    goto LAB_00706d79;
  case 0xc9:
    local_20 = 0x785a;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7874;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x788c;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707892;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x787f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707885;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7865;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70786d;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x789e;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x9ac;
    goto LAB_00707f0f;
  case 0xca:
    local_20 = 0x78b5;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x78cf;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x78e7;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7078ed;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x78da;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7078e0;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x78c0;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7078c8;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x78f9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x99c;
    goto LAB_00706cf3;
  case 0xcb:
    local_20 = 0x7910;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x792a;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7942;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707948;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7935;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70793b;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x791b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707923;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7954;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x98c;
    goto LAB_00706d79;
  case 0xcc:
    local_20 = 0x796b;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7985;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x799d;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7079a3;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7990;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707996;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7976;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70797e;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x79af;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x97c;
    goto LAB_00707f0f;
  case 0xcd:
    local_20 = 0x79c6;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x79e0;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x79f8;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7079fe;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x79eb;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7079f1;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x79d1;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7079d9;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7a0a;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x96c;
    goto LAB_00706cf3;
  case 0xce:
    local_20 = 0x7a21;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7a3b;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7a53;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707a59;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7a46;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707a4c;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7a2c;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707a34;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7a65;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x95c;
    goto LAB_00706d79;
  case 0xcf:
    local_20 = 0x7a7c;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7a96;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7aae;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707ab4;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7aa1;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707aa7;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7a87;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707a8f;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7ac0;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x94c;
    goto LAB_00707f0f;
  case 0xd0:
    local_20 = 0x7ad7;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7af1;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7b09;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707b0f;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7afc;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707b02;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7ae2;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707aea;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7b1b;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x93c;
    goto LAB_00706cf3;
  case 0xd1:
    local_20 = 0x7b32;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7b4c;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7b64;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707b6a;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7b57;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707b5d;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7b3d;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707b45;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7b76;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x928;
    goto LAB_00706d79;
  case 0xd2:
    local_20 = 0x7b8d;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7ba7;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7bbf;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707bc5;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7bb2;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707bb8;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7b98;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707ba0;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7bd1;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x918;
    goto LAB_00707f0f;
  case 0xd3:
    local_20 = 0x7be8;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7c02;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7c1a;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707c20;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7c0d;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707c13;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7bf3;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707bfb;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7c2c;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x908;
    goto LAB_00706cf3;
  case 0xd4:
    local_20 = 0x7c43;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7c5d;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7c75;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707c7b;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7c68;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707c6e;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7c4e;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707c56;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7c87;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x8f8;
    goto LAB_00706d79;
  case 0xd5:
    local_20 = 0x7c9e;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7cb8;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7cd0;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707cd6;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7cc3;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707cc9;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7ca9;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707cb1;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7ce2;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x8e8;
    goto LAB_00707f0f;
  case 0xd6:
    local_20 = 0x7cf9;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7d13;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7d2b;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707d31;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7d1e;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707d24;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7d04;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707d0c;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7d3d;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x8d8;
    goto LAB_00706cf3;
  case 0xd7:
    local_20 = 0x6936;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x11;
    local_28._0_2_ = 0x6944;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00477fc0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70694a;
    piVar16 = (int *)FUN_0070a5a0();
    local_20 = 0x6954;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_DEACTIVATE_TECH_00870d2c;
    local_28._0_2_ = 0x6964;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_2_ = 0xd24;
    local_28._2_2_ = 0x87;
    goto LAB_00703a97;
  case 0xd8:
  case 0x11a:
  case 0x11c:
  case 0x11d:
  case 0x11f:
switchD_00702b34_caseD_d8:
    local_20 = 0xea3c;
    uStack_1e = 0x85;
    goto LAB_00702b40;
  case 0xd9:
    local_20 = 0x4df6;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704dfc;
    uVar14 = FUN_004ff300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_BUILD_DIVISION_00871268;
    goto LAB_00703015;
  case 0xda:
    local_20 = 0x4f2c;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    fVar31 = (float)iVar13;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x704f3b;
    local_28._4_4_ = (char *)FUN_00516890();
    local_28._0_2_ = 0x4f41;
    local_28._2_2_ = 0x70;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x4f4d;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x4f52;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x4f5b;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = pcVar23;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = (char *)0x704f63;
    local_2c = (char *)FUN_00496e60();
    uStack_30 = 0x4f69;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_004f56c0();
    uStack_30 = 0x11f4;
LAB_00703781:
    uStack_2e = 0x87;
    local_34 = 0x378b;
    local_32 = 0x70;
    uVar14 = FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    goto LAB_0070378c;
  case 0xdb:
    local_20 = 0x4e3b;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x4e40;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704e46;
    uVar14 = FUN_004ff300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ADD_DIVISION_00871248;
    goto LAB_00703015;
  case 0xdc:
    local_20 = 0x4e11;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704e17;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x4e21;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704e29;
    local_28._4_4_ = (char *)FUN_0070a4f0();
    local_28._0_2_ = 0x1258;
    goto LAB_00703a8c;
  case 0xdd:
    local_20 = 0x8b9b;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    fVar31 = (float)-iVar13;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x708bac;
    iVar13 = FUN_00516890();
    puVar30 = &DAT_0083d360;
    if (iVar13 < 1) {
      puVar30 = &DAT_0088ebf8;
    }
    local_20 = 0x8bc4;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x8bc9;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708bd1;
    local_28._4_4_ = (char *)FUN_00496e60();
    local_28._0_2_ = 0x8bdd;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_0070a300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708be3;
    piVar16 = (int *)FUN_0070a3a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x8bf7;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    iVar13 = -iVar13;
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._0_2_ = 0x8c02;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = puVar30;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_DAMAGE_DIVISION_00870668;
    goto LAB_00709b1a;
  case 0xde:
    local_20 = 0x4e7b;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x4e80;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704e88;
    local_28._4_4_ = (char *)FUN_00496e60();
    local_28._0_2_ = 0x4e94;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_0070a300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704e9a;
    piVar16 = (int *)FUN_0070a3a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x4eae;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a3c0();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x4ebd;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_REMOVE_DIVISION_00871224;
    goto LAB_00703015;
  case 0xdf:
    local_20 = 0x4ecf;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x4ed4;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704edc;
    local_28._4_4_ = (char *)FUN_00496e60();
    local_28._0_2_ = 0x4ee8;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_0070a300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704eee;
    piVar16 = (int *)FUN_0070a3a0();
    local_20 = 0x4efa;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704f08;
    piVar15 = (int *)FUN_004e9370();
    local_20 = 0x4f12;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar15 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704f1a;
    local_28._4_4_ = (char *)(**(code **)(*piVar16 + 0xc))();
    local_28._0_2_ = 0x120c;
    goto LAB_007035d1;
  case 0xe0:
    local_20 = 0x8c14;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    fVar31 = (float)-iVar13;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x708c25;
    iVar13 = FUN_00516890();
    puVar30 = &DAT_0083d360;
    if (iVar13 < 1) {
      puVar30 = &DAT_0088ebf8;
    }
    local_20 = 0x8c3d;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x8c42;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708c4a;
    local_28._4_4_ = (char *)FUN_00496e60();
    local_28._0_2_ = 0x8c56;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_0070a300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708c5c;
    piVar16 = (int *)FUN_0070a3a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x8c70;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    iVar13 = -iVar13;
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._0_2_ = 0x8c7b;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = puVar30;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_DISORG_DIVISION_00870654;
    goto LAB_00709b1a;
  case 0xe1:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_COUNTERATTACK_00871a24;
    goto LAB_0070304e;
  case 0xe2:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_28 = (double)CONCAT44(local_28._4_4_,pcVar23);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_ASSAULT_00871a18;
    goto LAB_00709b1a;
  case 0xe3:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_28 = (double)CONCAT44(local_28._4_4_,pcVar23);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_ENCIRCLEMENT_00871a08;
    goto LAB_0070309b;
  case 0xe4:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_AMBUSH_008719fc;
    goto LAB_0070304e;
  case 0xe5:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_28 = (double)CONCAT44(local_28._4_4_,pcVar23);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_DELAY_008719f0;
    goto LAB_00709b1a;
  case 0xe6:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_28 = (double)CONCAT44(local_28._4_4_,pcVar23);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_TACTICAL_WITHDRAWAL_008719d8;
    goto LAB_0070309b;
  case 0xe7:
    dVar1 = (double)*(float *)(extraout_ECX + 8);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_BREAKTHROUGH_008719c8;
LAB_0070304e:
    uStack_30 = 0x3058;
    uStack_2e = 0x70;
    local_28._0_4_ = pcVar23;
    local_2c = (char *)FUN_0042b6c9();
    goto LAB_00703059;
  case 0xe8:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x702ff5;
    uVar14 = FUN_00514070();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ENABLE_TASK_00871a48;
    break;
  case 0xe9:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    if (_DAT_007e3380 <= *(float *)(extraout_ECX + 8)) {
      local_28._4_4_ = (char *)0x702e78;
      uVar14 = FUN_007604a0();
    }
    else {
      local_28._4_4_ = (char *)0x702e71;
      uVar14 = FUN_00760540();
    }
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    uVar21 = (int)ROUND(*(float *)(extraout_ECX + 8)) >> 0x1f;
    local_28._4_4_ = (char *)(((int)ROUND(*(float *)(extraout_ECX + 8)) ^ uVar21) - uVar21);
    local_28._0_2_ = 0x1a6c;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x702ea0;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = param_1;
    uStack_30 = 0x2eaa;
    uStack_2e = 0x70;
    FUN_007a630a();
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x702ebc;
    iVar13 = FUN_0044dc80();
    iVar13 = iVar13 + 1;
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._4_4_ = s_EE_DOMESTIC_CURRENT_00871a58;
    local_28._0_2_ = 0x2ecd;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_4_ = local_1770;
    local_2c = (char *)0x702eda;
    FUN_007a630a();
    pcVar23 = local_1770;
    goto LAB_007093ea;
  case 0xea:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x702ef1;
    local_28._4_4_ = (char *)FUN_007604a0();
    iVar13 = (int)ROUND(*(float *)(extraout_ECX + 8));
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._0_2_ = 0xcd48;
    local_28._2_2_ = 0x83;
    local_2c = (char *)0x702f14;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = param_1;
    uStack_30 = 0x2f1e;
    uStack_2e = 0x70;
    FUN_007a630a();
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x702f30;
    iVar13 = FUN_0044dc80();
    iVar13 = iVar13 + 1;
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._4_4_ = s_EE_DOMESTIC_CURRENT_00871a58;
    local_28._0_2_ = 0x2f41;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_4_ = local_1270;
    local_2c = (char *)0x702f4e;
    FUN_007a630a();
    pcVar23 = local_1270;
    goto LAB_007093ea;
  case 0xeb:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    if (_DAT_007e3380 <= *(float *)(extraout_ECX + 8)) {
      local_28._4_4_ = (char *)0x702f7c;
      uVar14 = FUN_007604a0();
    }
    else {
      local_28._4_4_ = (char *)0x702f75;
      uVar14 = FUN_00760540();
    }
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    uVar21 = (int)ROUND(*(float *)(extraout_ECX + 8)) >> 0x1f;
    local_28._4_4_ = (char *)(((int)ROUND(*(float *)(extraout_ECX + 8)) ^ uVar21) - uVar21);
    local_28._0_2_ = 0x1a6c;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x702fa4;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = param_1;
    uStack_30 = 0x2fae;
    uStack_2e = 0x70;
    FUN_007a630a();
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x702fc0;
    iVar13 = FUN_0044dc80();
    iVar13 = iVar13 + 1;
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._4_4_ = s_EE_DOMESTIC_CURRENT_00871a58;
    local_28._0_2_ = 0x2fd1;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_4_ = local_1570;
    local_2c = (char *)0x702fde;
    FUN_007a630a();
    pcVar23 = local_1570;
    goto LAB_007093ea;
  case 0xec:
    local_20 = 0x42b2;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x11;
    local_28._0_2_ = 0x42c0;
    local_28._2_2_ = 0x70;
    FUN_00477fc0();
    local_20 = SUB42(local_ec,0);
    uStack_1e = (undefined1)((uint)local_ec >> 0x10);
    local_1d = (char)((uint)local_ec >> 0x18);
    local_28._4_4_ = (char *)0x7042cc;
    piVar16 = (int *)FUN_0070a5a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x42de;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_START_RESEARCH_0087161c;
    break;
  case 0xed:
    local_20 = 0x42f0;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x11;
    local_28._0_2_ = 0x42fe;
    local_28._2_2_ = 0x70;
    FUN_00477fc0();
    local_20 = SUB42(local_d4,0);
    uStack_1e = (undefined1)((uint)local_d4 >> 0x10);
    local_1d = (char)((uint)local_d4 >> 0x18);
    local_28._4_4_ = (char *)0x70430a;
    piVar16 = (int *)FUN_0070a5a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x431c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_PRIO_RESEARCH_00871608;
    break;
  case 0xee:
    local_20 = 0x1300;
    uStack_1e = 0x87;
    goto LAB_0070343e;
  case 0xef:
    local_20 = 0x4b69;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a510();
    switch(uVar14) {
    case 0:
      local_20 = 0x4b80;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_00496e60();
      if (iVar13 < 1) {
        local_20 = 0x4ba5;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(DAT_00d0ca90 + 0xe) + 0xc))();
      }
      else {
        local_20 = 0x4b8b;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x704b91;
        pcVar23 = (char *)FUN_004af740();
      }
      local_20 = 0x12ec;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (char *)0x704bb6;
      uVar14 = FUN_0042b6c9();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x12d8;
      local_28._4_4_ = pcVar23;
      break;
    case 1:
      local_20 = 0x4bc9;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_00496e60();
      if (iVar13 < 1) {
        local_20 = 0x4bee;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(DAT_00d0ca90 + 0xe) + 0xc))();
      }
      else {
        local_20 = 0x4bd4;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (undefined *)0x704bda;
        pcVar23 = (char *)FUN_004af740();
      }
      local_20 = 0x4bfb;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_005857c0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x12d8;
      local_28._4_4_ = pcVar23;
      break;
    case 2:
      local_20 = 0x4c0e;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_00496e60();
      if (iVar13 < 1) {
        local_20 = 0x4c33;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(DAT_00d0ca90 + 0xe) + 0xc))();
      }
      else {
        local_20 = 0x4c19;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (undefined *)0x704c1f;
        pcVar23 = (char *)FUN_004af740();
      }
      local_20 = 0x4c40;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_005857c0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x12d8;
      local_28._4_4_ = pcVar23;
      break;
    case 3:
      local_20 = 0x4c53;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_00496e60();
      if (iVar13 < 1) {
        local_20 = 0x4c78;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(DAT_00d0ca90 + 0xe) + 0xc))();
      }
      else {
        local_20 = 0x4c5e;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (undefined *)0x704c64;
        pcVar23 = (char *)FUN_004af740();
      }
      local_20 = 0x4c85;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_005857c0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x12d8;
      local_28._4_4_ = pcVar23;
      break;
    default:
      goto switchD_00704b72_default;
    }
    goto LAB_007035d1;
  case 0xf0:
    local_20 = 0x4c98;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (iVar13 != 1) {
      if (iVar13 == 2) {
        local_20 = 0x4cca;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4f0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x704cd6;
        local_28._4_4_ = (char *)FUN_005857c0();
        local_28._0_2_ = 0x12c4;
        goto LAB_0070981d;
      }
      if (iVar13 != 3) {
        ExceptionList = local_10;
        return;
      }
      local_20 = 0x4cac;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4f0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704cb8;
      local_28._4_4_ = (char *)FUN_005857c0();
      local_28._0_2_ = 0x12c4;
      goto LAB_0070997c;
    }
    local_20 = 0x4ce8;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4f0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704cf4;
    local_28._4_4_ = (char *)FUN_005857c0();
    local_28._0_2_ = 0x12c4;
    goto LAB_007035d1;
  case 0xf1:
    local_20 = 0x1324;
    uStack_1e = 0x87;
    goto LAB_00702b40;
  case 0xf2:
    local_20 = 0x4b44;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704b4a;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_END_MASTERY_00871314;
    break;
  case 0xf3:
    local_20 = 0x4d06;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4c0();
    if (iVar13 != 1) {
      local_20 = 0x4d85;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704d8b;
      uVar14 = FUN_004af740();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_END_ACCESS_008712ac;
      break;
    }
    local_20 = 0x4d12;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704d18;
    uVar14 = FUN_004af740();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = &DAT_008712bc;
    local_2c = (char *)0x704d2a;
    FUN_007a630a();
    local_20 = 0x4d3c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_END_ACCESS_008712ac;
    local_28._0_2_ = 0x4d4c;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_4_ = local_1370;
    local_2c = (char *)0x704d59;
    FUN_007a630a();
    uVar21 = 0xffffffff;
    pcVar23 = local_1370;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    pcVar25 = pcVar25 + -uVar21;
    iVar13 = -1;
    do {
      pcVar23 = param_1;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar23 = param_1 + 1;
      cVar11 = *param_1;
      param_1 = pcVar23;
    } while (cVar11 != '\0');
    param_1 = pcVar23 + -1;
    goto LAB_00709d3f;
  case 0xf4:
    local_20 = 0x8d77;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708d7d;
    iVar13 = FUN_00465c30();
    local_20 = 0x8d89;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708d8f;
    iVar18 = FUN_00465c30();
    local_20 = 0x8d9d;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708da5;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = 0x5a8;
    goto LAB_00703a8c;
  case 0xf5:
    local_20 = 0x8db7;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708dbd;
    iVar13 = FUN_00465c30();
    local_20 = 0x8dc9;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708dcf;
    iVar18 = FUN_00465c30();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if (iVar18 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x8dee;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708df6;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = 0x594;
    goto LAB_007035d1;
  case 0xf6:
    local_20 = 0x57c;
    uStack_1e = 0x87;
    goto LAB_00702b40;
  case 0xf7:
    local_20 = 0x8e12;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708e18;
    iVar13 = FUN_00465c30();
    if (iVar13 == 0) {
      local_20 = 0x8e26;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a4e0();
      if (iVar13 != -1) {
        ExceptionList = local_10;
        return;
      }
      iVar13 = DAT_00d0ca90;
      if (DAT_00d0ca90 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    local_20 = 0x8e46;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x8e4b;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708e53;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = 0x568;
    goto LAB_007035d1;
  case 0xf8:
    local_20 = 0x8e65;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708e6b;
    iVar13 = FUN_00465c30();
    if (iVar13 == 0) {
      local_20 = 0x8e79;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a4e0();
      if (iVar13 != -1) {
        ExceptionList = local_10;
        return;
      }
      iVar13 = DAT_00d0ca90;
      if (DAT_00d0ca90 == 0) {
        ExceptionList = local_10;
        return;
      }
    }
    local_20 = 0x8e99;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x8e9e;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708ea6;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = 0x558;
    goto LAB_00703a8c;
  case 0xf9:
    local_20 = 0x8eb8;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 == 1) {
      local_20 = 0x8f7a;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x540;
      goto LAB_00706b91;
    }
    if (iVar13 != 2) {
      local_20 = 0x8ecd;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a3d0();
      fVar26 = (float10)_DAT_007e4088;
      local_20 = 0x8edd;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar28 = (float10)FUN_0070a4b0();
      fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
      if (fVar28 < (float10)_DAT_007e3374) {
        fVar28 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar28;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x8f02;
      local_28._2_2_ = 0x70;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_2c = SUB84(dVar1,0);
      local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      uStack_30 = 0x540;
      uStack_2e = 0x87;
      local_34 = 0x8f17;
      local_32 = 0x70;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      local_34 = 0xc68;
      local_32 = 0x87;
      local_3c = 0x8f26;
      local_3a = 0x70;
      uStack_38 = uVar5;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x21;
    uStack_1e = 0;
    local_1d = 0;
    local_28._4_4_ = (char *)0x708f48;
    fVar26 = (float10)FUN_0054ed30();
    fVar26 = fVar26 * (float10)_DAT_007e4088;
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x540;
    goto LAB_0070905c;
  case 0xfa:
    local_20 = 0x8fa6;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 == 1) {
      local_20 = 0x9078;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x528;
      goto LAB_00706b91;
    }
    if (iVar13 != 2) {
      local_20 = 0x8fbb;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a3e0();
      fVar26 = (float10)_DAT_007e4088;
      local_20 = 0x8fcb;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar28 = (float10)FUN_0070a4b0();
      fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
      if (fVar28 < (float10)_DAT_007e3374) {
        fVar28 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar28;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x8ff0;
      local_28._2_2_ = 0x70;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_2c = SUB84(dVar1,0);
      local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
      local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
      uStack_30 = 0x528;
      uStack_2e = 0x87;
      local_34 = 0x9005;
      local_32 = 0x70;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      local_34 = 0xc68;
      local_32 = 0x87;
      local_3c = 0x9014;
      local_3a = 0x70;
      uStack_38 = uVar5;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x22;
    uStack_1e = 0;
    local_1d = 0;
    local_28._4_4_ = (char *)0x709036;
    fVar26 = (float10)FUN_0054ed30();
    fVar26 = fVar26 * (float10)_DAT_007e4088;
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x528;
    goto LAB_0070905c;
  case 0xfb:
    local_20 = 0x90a4;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7090aa;
    iVar13 = FUN_00465c30();
    local_20 = 0x90b6;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7090bc;
    iVar18 = FUN_00465c30();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if (iVar18 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x90db;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7090e3;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = 0x514;
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x7090f3;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = param_1;
    uStack_30 = 0x90fd;
    uStack_2e = 0x70;
    FUN_007a630a();
    local_20 = 0x9107;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if ((float)iVar13 <= _DAT_007e3380) {
      ExceptionList = local_10;
      return;
    }
    uVar21 = 0xffffffff;
    pcVar23 = &DAT_0083bf1c;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    iVar13 = -1;
    pcVar23 = param_1;
    do {
      pcVar24 = pcVar23;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar24 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar11 != '\0');
    pcVar23 = pcVar25 + -uVar21;
    pcVar25 = pcVar24 + -1;
    for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
      pcVar23 = pcVar23 + 4;
      pcVar25 = pcVar25 + 4;
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *pcVar25 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      pcVar25 = pcVar25 + 1;
    }
    local_20 = 0x9154;
    uStack_1e = 0x70;
    local_1d = 0;
    puVar17 = (undefined4 *)FUN_00462830();
    local_28._4_4_ = (char *)*puVar17;
    local_20 = 0x9168;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4c0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709171;
    FUN_0042dc20();
    iVar13 = (int)&local_28 + 4;
    local_28._4_4_ = local_1470;
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._0_2_ = 0x9181;
    local_28._2_2_ = 0x70;
    FUN_00791b3b();
    local_20 = SUB42(local_1470,0);
    uStack_1e = (undefined1)((uint)local_1470 >> 0x10);
    local_1d = (char)((uint)local_1470 >> 0x18);
    local_28._4_4_ = s_TRADE_EXPIRATION_DATE_0085f080;
    local_28._0_2_ = 0x919a;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_4_ = local_1670;
    local_2c = (char *)0x7091a7;
    FUN_007a630a();
    pcVar23 = local_1670;
    goto LAB_007093ea;
  case 0xfc:
    local_20 = 0x91bc;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7091c2;
    iVar13 = FUN_00465c30();
    local_20 = 0x91ce;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7091d4;
    iVar18 = FUN_00465c30();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if (iVar18 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x91f2;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7091fa;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = 0x4fc;
    goto LAB_00703a8c;
  case 0xfd:
    local_20 = 0x920c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709212;
    iVar13 = FUN_00465c30();
    local_20 = 0x921e;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709224;
    iVar18 = FUN_00465c30();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if (iVar18 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x9243;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70924b;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = 0x4ec;
    goto LAB_007035d1;
  case 0xfe:
    local_20 = 0x925d;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709263;
    iVar13 = FUN_00465c30();
    local_20 = 0x926f;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709275;
    iVar18 = FUN_00465c30();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if (iVar18 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x9295;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_00442b90();
    local_344 = 1;
    local_368 = -*(float *)(extraout_ECX + 0x15e);
    local_36c = -*(float *)(extraout_ECX + 0x162);
    local_360 = -*(float *)(extraout_ECX + 0x15a);
    local_35c = -*(float *)(extraout_ECX + 0x156);
    local_364 = -*(float *)(extraout_ECX + 0x152);
    local_358 = -*(float *)(extraout_ECX + 0x166);
    local_20 = SUB42(local_470,0);
    uStack_1e = (undefined1)((uint)local_470 >> 0x10);
    local_1d = (char)((uint)local_470 >> 0x18);
    local_28._4_4_ = (char *)0x709302;
    FUN_00442d90();
    local_20 = SUB42(local_470,0);
    uStack_1e = (undefined1)((uint)local_470 >> 0x10);
    local_1d = (char)((uint)local_470 >> 0x18);
    local_28._4_4_ = (char *)0x709315;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
    local_28._0_2_ = 0x931d;
    local_28._2_2_ = 0x70;
    uVar14 = (**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = s_EE_TRADE_DEAL_008704dc;
    uStack_30 = 0x932d;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    local_34 = 0x9337;
    local_32 = 0x70;
    uStack_30 = uVar5;
    uStack_2e = uVar7;
    FUN_007a630a();
    local_20 = 0x9341;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4c0();
    if ((float)iVar13 <= _DAT_007e3380) {
      ExceptionList = local_10;
      return;
    }
    uVar21 = 0xffffffff;
    pcVar23 = &DAT_0083bf1c;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    iVar13 = -1;
    pcVar23 = param_1;
    do {
      pcVar24 = pcVar23;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar24 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar24;
    } while (cVar11 != '\0');
    pcVar23 = pcVar25 + -uVar21;
    pcVar25 = pcVar24 + -1;
    for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
      pcVar23 = pcVar23 + 4;
      pcVar25 = pcVar25 + 4;
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *pcVar25 = *pcVar23;
      pcVar23 = pcVar23 + 1;
      pcVar25 = pcVar25 + 1;
    }
    local_20 = 0x938e;
    uStack_1e = 0x70;
    local_1d = 0;
    puVar17 = (undefined4 *)FUN_00462830();
    local_2c = (char *)*puVar17;
    local_28._0_2_ = *(undefined2 *)(puVar17 + 1);
    local_20 = 0x93a2;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4c0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7093ab;
    FUN_0042dc20();
    local_28._4_4_ = local_1870;
    local_20 = SUB42(&local_2c,0);
    uStack_1e = (undefined1)((uint)&local_2c >> 0x10);
    local_1d = (char)((uint)&local_2c >> 0x18);
    local_28._0_2_ = 0x93bb;
    local_28._2_2_ = 0x70;
    FUN_00791b3b();
    local_20 = SUB42(local_1870,0);
    uStack_1e = (undefined1)((uint)local_1870 >> 0x10);
    local_1d = (char)((uint)local_1870 >> 0x18);
    local_28._4_4_ = s_TRADE_EXPIRATION_DATE_0085f080;
    local_28._0_2_ = 0x93d4;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
    local_28._0_4_ = local_470;
    local_2c = (char *)0x7093e1;
    FUN_007a630a();
    pcVar23 = local_470;
LAB_007093ea:
    uVar21 = 0xffffffff;
    do {
      pcVar25 = pcVar23;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar25 = pcVar23 + 1;
      cVar11 = *pcVar23;
      pcVar23 = pcVar25;
    } while (cVar11 != '\0');
    uVar21 = ~uVar21;
    pcVar25 = pcVar25 + -uVar21;
    iVar13 = -1;
    do {
      pcVar23 = param_1;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar23 = param_1 + 1;
      cVar11 = *param_1;
      param_1 = pcVar23;
    } while (cVar11 != '\0');
    param_1 = pcVar23 + -1;
LAB_00709d3f:
    for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar25;
      pcVar25 = pcVar25 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *param_1 = *pcVar25;
      pcVar25 = pcVar25 + 1;
      param_1 = param_1 + 1;
    }
switchD_00704b72_default:
    ExceptionList = local_10;
    return;
  case 0xff:
    local_20 = 0x9410;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709416;
    uVar14 = FUN_0070d200();
    local_20 = 0x9422;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if ((float10)_DAT_007e3380 <= fVar26) {
      local_20 = 0x4ac;
    }
    else {
      local_20 = 0x4c4;
    }
    local_1d = 0;
    uStack_1e = 0x87;
    local_28._4_4_ = (char *)0x709445;
    uVar19 = FUN_0042b6c9();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70944f;
    FUN_0070a4b0();
    local_28._4_4_ = (char *)0x709454;
    uVar21 = __ftol();
    local_28._4_4_ = (char *)((uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f));
    local_28._0_2_ = (undefined2)uVar19;
    local_28._2_2_ = (undefined2)((uint)uVar19 >> 0x10);
    goto LAB_00703a97;
  case 0x100:
    local_20 = 0x4437;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = (char *)0x704445;
    local_2c = (char *)FUN_00496e60();
    uStack_30 = 0x444b;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0070d200();
    uStack_30 = 0x1598;
    goto LAB_00704454;
  case 0x101:
    local_20 = 0x4418;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    fVar31 = (float)fVar26;
    local_20 = SUB42(fVar31,0);
    uStack_1e = (undefined1)((uint)fVar31 >> 0x10);
    local_1d = (char)((uint)fVar31 >> 0x18);
    local_28._4_4_ = (char *)0x704421;
    uVar14 = FUN_00516890();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._0_2_ = 0x15a4;
    local_28._4_4_ = pcVar23;
    goto LAB_007035d1;
  case 0x102:
    local_20 = 0x7f87;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        local_20 = 0x7f9c;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar27 = (float10)FUN_0070a410();
        fVar26 = (float10)_DAT_007e4088;
        local_20 = 0x7fac;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar28 = (float10)FUN_0070a4b0();
        fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
        if (fVar28 < (float10)_DAT_007e3374) {
          fVar28 = (float10)_DAT_007e3374;
        }
        dVar1 = (double)fVar28;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = 0x7fd1;
        local_28._2_2_ = 0x70;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_2c = SUB84(dVar1,0);
        local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
        local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
        uStack_30 = 0x860;
        uStack_2e = 0x87;
        local_34 = 0x7fe6;
        local_32 = 0x70;
        uVar14 = FUN_0042b6c9();
        uStack_30 = (undefined2)uVar14;
        uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
        local_34 = 0xc68;
        local_32 = 0x87;
        local_3c = 0x7ff5;
        local_3a = 0x70;
        uStack_38 = uVar5;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 5;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x708017;
      fVar26 = (float10)FUN_0054ed30();
      fVar26 = fVar26 * (float10)_DAT_007e4088;
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x860;
LAB_007087c9:
      local_28._2_2_ = 0x87;
      local_2c = (char *)0x7087d3;
      pcVar23 = (char *)FUN_0042b6c9();
      local_2c = s__s_____1f____00870c58;
      goto LAB_007030a6;
    }
    local_20 = 0x8049;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x860;
    goto LAB_0070905c;
  case 0x103:
    local_20 = 0x8075;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        local_20 = 0x808a;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar27 = (float10)FUN_0070a420();
        fVar26 = (float10)_DAT_007e4088;
        local_20 = 0x809a;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar28 = (float10)FUN_0070a4b0();
        fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
        if (fVar28 < (float10)_DAT_007e3374) {
          fVar28 = (float10)_DAT_007e3374;
        }
        dVar1 = (double)fVar28;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = 0x80bf;
        local_28._2_2_ = 0x70;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_2c = SUB84(dVar1,0);
        local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
        local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
        uStack_30 = 0x848;
        uStack_2e = 0x87;
        local_34 = 0x80d4;
        local_32 = 0x70;
        uVar14 = FUN_0042b6c9();
        uStack_30 = (undefined2)uVar14;
        uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
        local_34 = 0xc68;
        local_32 = 0x87;
        local_3c = 0x80e3;
        local_3a = 0x70;
        uStack_38 = uVar5;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 6;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x708105;
      fVar26 = (float10)FUN_0054ed30();
      fVar26 = fVar26 * (float10)_DAT_007e4088;
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x848;
      goto LAB_007087c9;
    }
    local_20 = 0x8137;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x848;
    goto LAB_0070905c;
  case 0x104:
    local_20 = 0x8163;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        local_20 = 0x8178;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar27 = (float10)FUN_0070a430();
        fVar26 = (float10)_DAT_007e4088;
        local_20 = 0x8188;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar28 = (float10)FUN_0070a4b0();
        fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
        if (fVar28 < (float10)_DAT_007e3374) {
          fVar28 = (float10)_DAT_007e3374;
        }
        dVar1 = (double)fVar28;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = 0x81ad;
        local_28._2_2_ = 0x70;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_2c = SUB84(dVar1,0);
        local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
        local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
        uStack_30 = 0x830;
        uStack_2e = 0x87;
        local_34 = 0x81c2;
        local_32 = 0x70;
        uVar14 = FUN_0042b6c9();
        uStack_30 = (undefined2)uVar14;
        uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
        local_34 = 0xc68;
        local_32 = 0x87;
        local_3c = 0x81d1;
        local_3a = 0x70;
        uStack_38 = uVar5;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 7;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x7081f3;
      fVar26 = (float10)FUN_0054ed30();
      fVar26 = fVar26 * (float10)_DAT_007e4088;
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x830;
      goto LAB_007087c9;
    }
    local_20 = 0x8225;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x830;
    goto LAB_0070905c;
  case 0x105:
    local_20 = 0x8251;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        local_20 = 0x8266;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar27 = (float10)FUN_0070a440();
        fVar26 = (float10)_DAT_007e4088;
        local_20 = 0x8276;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar28 = (float10)FUN_0070a4b0();
        fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
        if (fVar28 < (float10)_DAT_007e3374) {
          fVar28 = (float10)_DAT_007e3374;
        }
        dVar1 = (double)fVar28;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = 0x829b;
        local_28._2_2_ = 0x70;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_2c = SUB84(dVar1,0);
        local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
        local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
        uStack_30 = 0x818;
        uStack_2e = 0x87;
        local_34 = 0x82b0;
        local_32 = 0x70;
        uVar14 = FUN_0042b6c9();
        uStack_30 = (undefined2)uVar14;
        uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
        local_34 = 0xc68;
        local_32 = 0x87;
        local_3c = 0x82bf;
        local_3a = 0x70;
        uStack_38 = uVar5;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 8;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x7082e1;
      fVar26 = (float10)FUN_0054ed30();
      fVar26 = fVar26 * (float10)_DAT_007e4088;
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x818;
      goto LAB_007087c9;
    }
    local_20 = 0x8313;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x818;
    goto LAB_0070905c;
  case 0x106:
    local_20 = 0x833f;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 == 2) {
        local_20 = 0x14;
        uStack_1e = 0;
        local_1d = 0;
        local_28._4_4_ = (char *)0x70839c;
        FUN_0054ed30();
        local_20 = 0x83a1;
        uStack_1e = 0x70;
        local_1d = 0;
        iVar13 = __ftol();
        if (iVar13 < 0) {
          iVar13 = 0;
        }
        local_20 = (undefined2)iVar13;
        uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
        local_1d = (char)((uint)iVar13 >> 0x18);
        local_28._4_4_ = s_EE_MAX_AMPHIB_MOD_NEW_00870800;
        local_28._0_2_ = 0x83b7;
        local_28._2_2_ = 0x70;
        local_28._4_4_ = (char *)FUN_0042b6c9();
        local_28._0_2_ = 0xf51c;
        local_28._2_2_ = 0x83;
        local_2c = param_1;
        uStack_30 = 0x83c6;
        uStack_2e = 0x70;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 0x8350;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x8355;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = __ftol();
      if (iVar13 < 0) {
        iVar13 = 0;
      }
      local_20 = (undefined2)iVar13;
      uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
      local_1d = (char)((uint)iVar13 >> 0x18);
      local_28._4_4_ = s_EE_MAX_AMPHIB_MOD_NEW_00870800;
      local_28._0_2_ = 0x836b;
      local_28._2_2_ = 0x70;
      local_28._4_4_ = (char *)FUN_0042b6c9();
      local_28._0_2_ = 0xf51c;
      local_28._2_2_ = 0x83;
      local_2c = param_1;
      uStack_30 = 0x837a;
      uStack_2e = 0x70;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x83e3;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x83e8;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = __ftol();
    local_20 = 0x83f5;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar18 = FUN_0070a3f0();
    iVar13 = iVar13 + iVar18;
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    local_20 = 0x8402;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    puVar30 = &DAT_0088ebf8;
    if ((float10)_DAT_007e3380 <= fVar26) {
      puVar30 = &DAT_0083d360;
    }
    local_20 = (undefined2)iVar13;
    uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
    local_1d = (char)((uint)iVar13 >> 0x18);
    local_28._4_4_ = (char *)0x708421;
    FUN_0070a4b0();
    local_28._4_4_ = "PWh";
    local_28._4_4_ = (char *)__ftol();
    local_28._0_2_ = SUB42(puVar30,0);
    local_28._2_2_ = (undefined2)((uint)puVar30 >> 0x10);
    local_2c = s_EE_MAX_AMPHIB_MOD_NEW_00870800;
    uStack_30 = 0x8437;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uStack_30 = 0x7f0;
    goto LAB_00706d8a;
  case 0x107:
    local_20 = 0x8449;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        local_20 = 0x845e;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar27 = (float10)FUN_0070a450();
        fVar26 = (float10)_DAT_007e4088;
        local_20 = 0x846e;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar28 = (float10)FUN_0070a4b0();
        fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
        if (fVar28 < (float10)_DAT_007e3374) {
          fVar28 = (float10)_DAT_007e3374;
        }
        dVar1 = (double)fVar28;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = 0x8493;
        local_28._2_2_ = 0x70;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_2c = SUB84(dVar1,0);
        local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
        local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
        uStack_30 = 0x7d8;
        uStack_2e = 0x87;
        local_34 = 0x84a8;
        local_32 = 0x70;
        uVar14 = FUN_0042b6c9();
        uStack_30 = (undefined2)uVar14;
        uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
        local_34 = 0xc68;
        local_32 = 0x87;
        local_3c = 0x84b7;
        local_3a = 0x70;
        uStack_38 = uVar5;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 9;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x7084d9;
      fVar26 = (float10)FUN_0054ed30();
      fVar26 = fVar26 * (float10)_DAT_007e4088;
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x7d8;
      goto LAB_007087c9;
    }
    local_20 = 0x850b;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x7d8;
    goto LAB_0070905c;
  case 0x108:
    local_20 = 0x8537;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        local_20 = 0x854c;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar27 = (float10)FUN_0070a460();
        fVar26 = (float10)_DAT_007e4088;
        local_20 = 0x855c;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar28 = (float10)FUN_0070a4b0();
        fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
        if (fVar28 < (float10)_DAT_007e3374) {
          fVar28 = (float10)_DAT_007e3374;
        }
        dVar1 = (double)fVar28;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = 0x8581;
        local_28._2_2_ = 0x70;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_2c = SUB84(dVar1,0);
        local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
        local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
        uStack_30 = 0x7c4;
        uStack_2e = 0x87;
        local_34 = 0x8596;
        local_32 = 0x70;
        uVar14 = FUN_0042b6c9();
        uStack_30 = (undefined2)uVar14;
        uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
        local_34 = 0xc68;
        local_32 = 0x87;
        local_3c = 0x85a5;
        local_3a = 0x70;
        uStack_38 = uVar5;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 10;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x7085c7;
      fVar26 = (float10)FUN_0054ed30();
      fVar26 = fVar26 * (float10)_DAT_007e4088;
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x7c4;
      goto LAB_007087c9;
    }
    local_20 = 0x85f9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x7c4;
    goto LAB_0070905c;
  case 0x109:
    local_20 = 0x8811;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a530();
    if (cVar11 == '\0') {
      local_20 = 0x8858;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70885e;
      puVar30 = (undefined *)FUN_004ff320();
      local_20 = 0x886a;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x886f;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x708877;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x8883;
      local_28._2_2_ = 0x70;
      uVar14 = FUN_0044e050();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x78c;
      local_28._4_4_ = puVar30;
    }
    else {
      local_20 = 0x881c;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x708822;
      puVar30 = (undefined *)FUN_004ff3a0();
      local_20 = 0x882e;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x8833;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70883b;
      local_28._4_4_ = (char *)FUN_00496e60();
      local_28._0_2_ = 0x8847;
      local_28._2_2_ = 0x70;
      uVar14 = FUN_0044e100();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x78c;
      local_28._4_4_ = puVar30;
    }
    goto LAB_00703a8c;
  case 0x10a:
    local_20 = 0x8625;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        local_20 = 0x863a;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar27 = (float10)FUN_0070a470();
        fVar26 = (float10)_DAT_007e4088;
        local_20 = 0x864a;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar28 = (float10)FUN_0070a4b0();
        fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
        if (fVar28 < (float10)_DAT_007e3374) {
          fVar28 = (float10)_DAT_007e3374;
        }
        dVar1 = (double)fVar28;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = 0x866f;
        local_28._2_2_ = 0x70;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_2c = SUB84(dVar1,0);
        local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
        local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
        uStack_30 = 0x7b0;
        uStack_2e = 0x87;
        local_34 = 0x8684;
        local_32 = 0x70;
        uVar14 = FUN_0042b6c9();
        uStack_30 = (undefined2)uVar14;
        uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
        local_34 = 0xc68;
        local_32 = 0x87;
        local_3c = 0x8693;
        local_3a = 0x70;
        uStack_38 = uVar5;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 0xb;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x7086b5;
      fVar26 = (float10)FUN_0054ed30();
      fVar26 = fVar26 * (float10)_DAT_007e4088;
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x7b0;
      goto LAB_007087c9;
    }
    local_20 = 0x86e7;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x7b0;
    goto LAB_0070905c;
  case 0x10b:
    local_20 = 0x8901;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x11;
    local_28._0_2_ = 0x890f;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00477fc0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708915;
    piVar16 = (int *)FUN_0070a5a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x8927;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_INFO_MAY_CAUSE_00870738;
    break;
  case 0x10c:
    local_20 = 0x724;
LAB_00708937:
    local_1d = 0;
    uStack_1e = 0x87;
    local_28._4_4_ = (char *)0x708941;
    uVar14 = FUN_0042b6c9();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = &DAT_0083a374;
    goto LAB_00703020;
  case 0x10d:
    local_20 = 0x70c;
    uStack_1e = 0x87;
    local_1d = 0;
    local_28._4_4_ = (char *)0x70895b;
    uVar14 = FUN_0042b6c9();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = &DAT_0083a374;
    goto LAB_00703e92;
  case 0x10e:
    local_20 = 0x896d;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x11;
    local_28._0_2_ = 0x897b;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00477fc0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708981;
    piVar16 = (int *)FUN_0070a5a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x8993;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ACTIVATE_TECH_008706f8;
    break;
  case 0x10f:
    local_20 = 0x89a5;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x89b8;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00496e60();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = (char *)0x7089be;
    uVar14 = FUN_00514070();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_TASK_EFFICIENCY_008706e4;
    goto LAB_0070309b;
  case 0x110:
    local_20 = 0x8713;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        local_20 = 0x8728;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar27 = (float10)FUN_005162f0();
        fVar26 = (float10)_DAT_007e4088;
        local_20 = 0x8738;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar28 = (float10)FUN_0070a4b0();
        fVar28 = fVar28 + (float10)(float)(fVar27 * fVar26);
        if (fVar28 < (float10)_DAT_007e3374) {
          fVar28 = (float10)_DAT_007e3374;
        }
        dVar1 = (double)fVar28;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = 0x875d;
        local_28._2_2_ = 0x70;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_2c = SUB84(dVar1,0);
        local_28._0_2_ = (undefined2)((ulonglong)dVar1 >> 0x20);
        local_28._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x30);
        uStack_30 = 0x79c;
        uStack_2e = 0x87;
        local_34 = 0x8772;
        local_32 = 0x70;
        uVar14 = FUN_0042b6c9();
        uStack_30 = (undefined2)uVar14;
        uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
        local_34 = 0xc68;
        local_32 = 0x87;
        local_3c = 0x8781;
        local_3a = 0x70;
        uStack_38 = uVar5;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 0xc;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x7087a3;
      fVar26 = (float10)FUN_0054ed30();
      fVar26 = fVar26 * (float10)_DAT_007e4088;
      if (fVar26 < (float10)_DAT_007e3374) {
        fVar26 = (float10)_DAT_007e3374;
      }
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x79c;
      goto LAB_007087c9;
    }
    local_20 = 0x87e5;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 < (float10)_DAT_007e3374) {
      fVar26 = (float10)_DAT_007e3374;
    }
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x79c;
LAB_0070905c:
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x709066;
    local_28._0_4_ = (char *)FUN_0042b6c9();
    local_2c = s__s_____1f____00870c58;
LAB_00703059:
    local_34 = 0x3062;
    local_32 = 0x70;
    uStack_30 = uVar5;
    uStack_2e = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x111:
    local_20 = 0x89d3;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7089d9;
    pcVar23 = (char *)FUN_0070d200();
    local_20 = 0x89e5;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_00496e60();
    local_2c = pcVar23;
    if (0 < iVar13) {
      local_20 = 0x89f0;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7089f6;
      piVar16 = (int *)FUN_004e9370();
      local_20 = 0x8a02;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x8a0f;
      local_28._2_2_ = 0x70;
      uVar14 = (**(code **)(*piVar16 + 0xc))();
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      uStack_30 = 0x6cc;
      uStack_2e = 0x87;
      local_34 = 0x8a20;
      local_32 = 0x70;
      uVar14 = FUN_0042b6c9();
      uStack_30 = (undefined2)uVar14;
      uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
      uStack_38 = 0x8a2a;
      uStack_36 = 0x70;
      local_34 = uVar5;
      local_32 = uVar7;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x8a45;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4e0();
    if (iVar13 == -4) {
      local_20 = 0x8a51;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x7500;
      local_28._2_2_ = 0x84;
      local_2c = (char *)0x708a66;
      uVar14 = FUN_0042b6c9();
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      uStack_30 = 0x6cc;
      local_2c = pcVar23;
      goto LAB_00708a6d;
    }
    local_20 = 0x8a9c;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_4_ = &DAT_0088ebf8;
    uStack_30 = 0x6cc;
LAB_00704454:
    uStack_2e = 0x87;
    local_34 = 0x445e;
    local_32 = 0x70;
    uVar14 = FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    uStack_38 = 0x4468;
    uStack_36 = 0x70;
    local_34 = uVar5;
    local_32 = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x112:
    local_20 = 0x8ab9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x8acc;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00496e60();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = (char *)0x708ad2;
    uVar14 = FUN_004ff320();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_MAX_POSITIONING_008706b8;
LAB_00709b1a:
    uStack_30 = 0x9b24;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    uVar14 = (char *)local_28;
    local_34 = 0x9b2e;
    local_32 = 0x70;
    uStack_30 = uVar5;
    uStack_2e = uVar7;
    local_28._0_4_ = (char *)uVar14;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x113:
    local_20 = 0x8ae7;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x8afa;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_00496e60();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    local_2c = (char *)0x708b00;
    uVar14 = FUN_004ff320();
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_2c = s_EE_MIN_POSITIONING_008706a4;
    goto LAB_0070309b;
  case 0x114:
    local_20 = 0x94a5;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7094ab;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x94b5;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7094bd;
    local_28._4_4_ = (char *)FUN_0070a4c0();
    local_28._0_2_ = 0x94c3;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0075eeb0();
    local_28._0_2_ = 0x490;
    goto LAB_00703a8c;
  case 0x115:
    local_20 = 0x9564;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70956a;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x9576;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4c0();
    goto LAB_00709576;
  case 0x116:
    local_20 = 0x94d8;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x94dd;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7094e5;
    local_28._4_4_ = (char *)FUN_00496e60();
    local_28._0_2_ = 0x94f1;
    local_28._2_2_ = 0x70;
    FUN_0070a300();
    local_20 = SUB42(local_f4,0);
    uStack_1e = (undefined1)((uint)local_f4 >> 0x10);
    local_1d = (char)((uint)local_f4 >> 0x18);
    local_28._4_4_ = (char *)0x7094fd;
    iVar13 = FUN_0070a320();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x950f;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a340();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709515;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x9521;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709529;
    local_28._4_4_ = (char *)FUN_0070a350();
    local_28._0_2_ = 0x952f;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0075eeb0();
    local_28._0_2_ = 0x480;
    goto LAB_00703a8c;
  case 0x117:
    local_20 = 0x9544;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70954a;
    piVar16 = (int *)FUN_004e9370();
    local_20 = 0x9556;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x955b;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
LAB_00709576:
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70957c;
    uVar14 = FUN_0075eeb0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709587;
    local_28._4_4_ = (char *)(**(code **)(*piVar16 + 0xc))();
    local_28._0_2_ = 0x46c;
    goto LAB_00703a8c;
  case 0x118:
    local_20 = 0x8b15;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x8b1a;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708b22;
    local_28._4_4_ = (char *)FUN_00496e60();
    local_28._0_2_ = 0x8b2e;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_0070a300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708b34;
    piVar16 = (int *)FUN_0070a3a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x8b46;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_LOCK_DIVISION_00870690;
    break;
  case 0x119:
    local_20 = 0x8b58;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x8b5d;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708b65;
    local_28._4_4_ = (char *)FUN_00496e60();
    local_28._0_2_ = 0x8b71;
    local_28._2_2_ = 0x70;
    uVar14 = FUN_0070a300();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x708b77;
    piVar16 = (int *)FUN_0070a3a0();
    if (piVar16 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x8b89;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*piVar16 + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_UNLOCK_DIVISION_0087067c;
    break;
  case 0x120:
    local_20 = 0x67a7;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = (char *)0x7067b5;
    local_2c = (char *)FUN_00496e60();
    uStack_30 = 0x67bd;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0070c0c0();
    local_34 = 0xd70;
    local_32 = 0x87;
    uStack_38 = 0x67ce;
    uStack_36 = 0x70;
    uStack_30 = uVar8;
    uStack_2e = uVar3;
    uVar14 = FUN_0042b6c9();
    local_34 = (undefined2)uVar14;
    local_32 = (undefined2)((uint)uVar14 >> 0x10);
    local_3c = 0x67d8;
    local_3a = 0x70;
    uStack_38 = uVar5;
    uStack_36 = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x121:
    local_20 = 0x67f5;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4c0();
    if (iVar13 == 5) {
      local_20 = 0x687f;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a4b0();
      fVar26 = (float10)_DAT_007e3380;
      local_20 = 0x689b;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7068a7;
      cVar11 = FUN_00492960();
      if ((fVar27 != fVar26) != (bool)cVar11) {
LAB_007068b0:
        local_20 = 0x68b7;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar26 = (float10)FUN_0070a4b0();
        if (fVar26 == (float10)_DAT_007e3380) {
          local_20 = 0xfcd8;
        }
        else {
          local_20 = 0xfccc;
        }
        local_1d = 0;
        uStack_1e = 0x86;
        local_28._4_4_ = (char *)0x7068da;
        uVar14 = FUN_0042b6c9();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7068e2;
        local_28._4_4_ = (char *)FUN_00496e60();
        local_28._0_2_ = 0x68e8;
        local_28._2_2_ = 0x70;
        uVar14 = FUN_0070d200();
        local_28 = (double)CONCAT44(uVar14,pcVar25);
        local_2c = s_EE_AUTO_TRADE_OPTION_CHANGE_00870d54;
        goto LAB_00709b1a;
      }
    }
    else if (iVar13 == 6) {
      local_20 = 0x6845;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a4b0();
      fVar26 = (float10)_DAT_007e3380;
      local_20 = 0x6861;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70686d;
      cVar11 = FUN_00492950();
      if ((fVar27 != fVar26) != (bool)cVar11) goto LAB_007068b0;
    }
    else if (iVar13 == 7) {
      local_20 = 0x680b;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar27 = (float10)FUN_0070a4b0();
      fVar26 = (float10)_DAT_007e3380;
      local_20 = 0x6827;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x706833;
      cVar11 = FUN_0070a400();
      if ((fVar27 != fVar26) != (bool)cVar11) goto LAB_007068b0;
    }
    goto LAB_007096d9;
  case 0x122:
    local_20 = 0x708;
    uStack_1e = 0x86;
LAB_00702b40:
    local_1d = 0;
    local_28._4_4_ = (char *)0x702b4a;
    uVar14 = FUN_0042b6c9();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = param_1;
    local_28._0_2_ = 0x2b54;
    local_28._2_2_ = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x123:
    local_20 = 0x95ea;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7095f0;
    iVar13 = FUN_00465c30();
    local_20 = 0x95fc;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709602;
    iVar18 = FUN_00465c30();
    if (iVar13 == 0) {
      ExceptionList = local_10;
      return;
    }
    if (iVar18 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x961e;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    if (fVar26 == (float10)_DAT_007e3374) {
      local_20 = 0x9636;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70963e;
      local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      local_28._0_2_ = 0x448;
      local_28._2_2_ = 0x87;
      local_2c = (char *)0x70964e;
      uVar14 = FUN_0042b6c9();
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      local_2c = param_1;
      uStack_30 = 0x9658;
      uStack_2e = 0x70;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x9676;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70967e;
    local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_28._0_2_ = 0x430;
LAB_007035d1:
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x7035db;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
LAB_007035dc:
    local_2c = param_1;
    uStack_30 = 0x35e5;
    uStack_2e = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x124:
    local_20 = 0x9690;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709696;
    iVar13 = FUN_00465c30();
    if (iVar13 != 0) {
      local_20 = 0x96a6;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_CHANGE_FLAG_EXT_0087041c;
      break;
    }
    goto LAB_007096d9;
  case 0x125:
    local_20 = 0x96ea;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7096f0;
    iVar13 = FUN_00465c30();
    local_20 = 0x96fc;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709702;
    iVar18 = FUN_00465c30();
    if ((iVar13 == 0) || (iVar18 == 0)) goto switchD_00702b34_caseD_d8;
    bVar2 = true;
    local_20 = 0x9729;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x972e;
    uStack_1e = 0x70;
    local_1d = '\0';
    uVar14 = __ftol();
    bVar10 = true;
    switch(uVar14) {
    default:
      bVar2 = true;
      goto LAB_00709770;
    case 1:
      local_1d = '\0';
      bVar2 = false;
      break;
    case 2:
      bVar10 = false;
    case 0xfffffffe:
      bVar2 = bVar10;
      break;
    case 3:
      bVar2 = false;
LAB_00709770:
      if (iVar13 != iVar18) {
        if (bVar2) {
          local_20 = 0x3d4;
        }
        else {
          local_20 = 0x3c0;
        }
        local_1d = 0;
        uStack_1e = 0x87;
        local_28._4_4_ = (char *)0x7097c7;
        uVar14 = FUN_0042b6c9();
        local_20 = 0x97d5;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar19 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
        local_20 = (undefined2)uVar19;
        uStack_1e = (undefined1)((uint)uVar19 >> 0x10);
        local_1d = (char)((uint)uVar19 >> 0x18);
        local_28._4_4_ = (char *)0x7097dd;
        local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
        local_28._0_2_ = (undefined2)uVar14;
        local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
        local_2c = param_1;
        uStack_30 = 0x97e8;
        uStack_2e = 0x70;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 0x977d;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_CLEAR_ALL_EMBARGOES_2_008703e8;
      goto LAB_00709783;
    case 0xffffffff:
      local_1d = '\0';
    }
    if (iVar13 == iVar18) {
      if (local_1d == '\0') {
        local_20 = 54000;
      }
      else {
        local_20 = 0xd300;
      }
      local_1d = 0;
      uStack_1e = 0x83;
      local_28._4_4_ = (char *)0x70980d;
      uVar14 = FUN_0042b6c9();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x709817;
      local_28._4_4_ = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      local_28._0_2_ = 0x3a4;
LAB_0070981d:
      local_28._2_2_ = 0x87;
      local_2c = (char *)0x709827;
      uVar14 = FUN_0042b6c9();
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      local_2c = param_1;
      uStack_30 = 0x9831;
      uStack_2e = 0x70;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    if (local_1d == '\0') {
      local_20 = 54000;
    }
    else {
      local_20 = 0xd300;
    }
    local_1d = 0;
    uStack_1e = 0x83;
    local_28._4_4_ = (char *)0x709861;
    uVar14 = FUN_0042b6c9();
    if (bVar2) {
      local_20 = 0x390;
    }
    else {
      local_20 = 0x37c;
    }
    local_1d = 0;
    uStack_1e = 0x87;
    local_28._4_4_ = (char *)0x709880;
    pcVar25 = (char *)FUN_0042b6c9();
    local_20 = 0x9890;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar19 = (**(code **)(*(int *)(iVar18 + 0xe) + 0xc))();
    local_20 = (undefined2)uVar19;
    uStack_1e = (undefined1)((uint)uVar19 >> 0x10);
    local_1d = (char)((uint)uVar19 >> 0x18);
    local_28._0_2_ = 0x9899;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)uVar14;
    pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
    local_2c = pcVar25;
    goto LAB_007030a6;
  case 0x126:
    local_20 = 0x96b8;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_0070a4d0();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7096be;
    iVar13 = FUN_00465c30();
    if (iVar13 != 0) {
      local_20 = 0x96ce;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = (**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = s_EE_CHANGE_COUNTRY_NAME_00870404;
      break;
    }
LAB_007096d9:
    local_20 = 0xea3c;
    uStack_1e = 0x85;
LAB_0070343e:
    local_1d = 0;
    local_28._4_4_ = (char *)0x703448;
    uVar14 = FUN_0042b6c9();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = param_1;
    local_28._0_2_ = 0x3452;
    local_28._2_2_ = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x127:
    local_20 = 0x98a7;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a500();
    if (iVar13 == 0) {
      local_20 = 0x98b2;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a540();
      if (cVar11 == '\0') {
        local_20 = 0x98cc;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7098d2;
        uVar14 = FUN_004ff300();
      }
      else {
        local_20 = 0x98bd;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7098c5;
        uVar14 = FUN_0070c0c0();
      }
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7098dd;
      fVar26 = (float10)FUN_0070a4b0();
      local_28 = (double)(fVar26 * (float10)_DAT_007e4088);
      local_2c = s_EE_SET_UNIT_STR_0087036c;
      goto LAB_00709b1a;
    }
    local_20 = 0x98f8;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x9912;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x709918;
      uVar14 = FUN_004ff300();
    }
    else {
      local_20 = 0x9903;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70990b;
      uVar14 = FUN_0070c0c0();
    }
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x709923;
    fVar26 = (float10)FUN_0070a4b0();
    local_28 = (double)(fVar26 * (float10)_DAT_007e4088);
    local_2c = s_EE_ADD_UNIT_STR_0087035c;
    goto LAB_0070309b;
  case 0x128:
    local_20 = 0x9940;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x9945;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = __ftol();
    if (0 < iVar13) {
      local_20 = 0x9952;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a540();
      if (cVar11 == '\0') {
        local_20 = 0x996c;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x709972;
        local_28._4_4_ = (char *)FUN_004ff300();
      }
      else {
        local_20 = 0x995d;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x709965;
        local_28._4_4_ = (char *)FUN_0070c0c0();
      }
      local_20 = (undefined2)iVar13;
      uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
      local_1d = (char)((uint)iVar13 >> 0x18);
      local_28._0_2_ = 0x34c;
      goto LAB_0070997c;
    }
    local_20 = 0x99ab;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x99d1;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7099d7;
      local_28._4_4_ = (char *)FUN_004ff300();
      iVar13 = -iVar13;
      local_20 = (undefined2)iVar13;
      uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
      local_1d = (char)((uint)iVar13 >> 0x18);
      local_28._0_2_ = 0x33c;
    }
    else {
      local_20 = 0x99b6;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7099be;
      local_28._4_4_ = (char *)FUN_0070c0c0();
      iVar13 = -iVar13;
      local_20 = (undefined2)iVar13;
      uStack_1e = (undefined1)((uint)iVar13 >> 0x10);
      local_1d = (char)((uint)iVar13 >> 0x18);
      local_28._0_2_ = 0x33c;
    }
    goto LAB_00703a8c;
  case 0x129:
    local_20 = 0x99ef;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4c0();
    if (iVar13 == 0) {
      local_20 = 0x99fe;
      uStack_1e = 0x70;
      local_1d = 0;
      iVar13 = FUN_0070a4d0();
      if (iVar13 != 0) {
        local_20 = 0x9a70;
        uStack_1e = 0x70;
        local_1d = 0;
        cVar11 = FUN_0070a540();
        if (cVar11 == '\0') {
          local_20 = 0x9a8a;
          uStack_1e = 0x70;
          local_1d = 0;
          uVar14 = FUN_00496e60();
          local_20 = (undefined2)uVar14;
          uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
          local_1d = (char)((uint)uVar14 >> 0x18);
          local_28._4_4_ = (char *)0x709a90;
          uVar14 = FUN_004ff300();
        }
        else {
          local_20 = 0x9a7b;
          uStack_1e = 0x70;
          local_1d = 0;
          uVar14 = FUN_00496e60();
          local_20 = (undefined2)uVar14;
          uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
          local_1d = (char)((uint)uVar14 >> 0x18);
          local_28._4_4_ = (char *)0x709a83;
          uVar14 = FUN_0070c0c0();
        }
        local_20 = 0x9a9c;
        uStack_1e = 0x70;
        local_1d = 0;
        fVar26 = (float10)FUN_0070a4b0();
        dVar1 = (double)fVar26;
        local_28._4_4_ = SUB84(dVar1,0);
        local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
        uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
        local_1d = (char)((ulonglong)dVar1 >> 0x38);
        local_28._0_2_ = (undefined2)uVar14;
        local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
        local_2c = s_EE_STRENGTH_CAP_1_00870314;
        uStack_30 = 0x9ab2;
        uStack_2e = 0x70;
        local_2c = (char *)FUN_0042b6c9();
        local_34 = 0x9abc;
        local_32 = 0x70;
        uStack_30 = uVar5;
        uStack_2e = uVar7;
        FUN_007a630a();
        ExceptionList = local_10;
        return;
      }
      local_20 = 0x9a09;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a540();
      if (cVar11 == '\0') {
        local_20 = 0x9a23;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x709a29;
        uVar14 = FUN_004ff300();
      }
      else {
        local_20 = 0x9a14;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x709a1c;
        uVar14 = FUN_0070c0c0();
      }
      local_20 = 0x9a35;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = (undefined2)uVar14;
      local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
      local_2c = s_EE_STRENGTH_CAP_2_00870328;
      uStack_30 = 0x9a4b;
      uStack_2e = 0x70;
      local_2c = (char *)FUN_0042b6c9();
      local_34 = 0x9a55;
      local_32 = 0x70;
      uStack_30 = uVar5;
      uStack_2e = uVar7;
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    local_20 = 0x9ad7;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    if (iVar13 == 0) {
      local_20 = 0x9ae2;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a540();
      if (cVar11 == '\0') {
        local_20 = 0x9afc;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x709b02;
        uVar14 = FUN_004ff300();
      }
      else {
        local_20 = 0x9aed;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x709af5;
        uVar14 = FUN_0070c0c0();
      }
      local_20 = 0x9b0e;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_2c = s_EE_STRENGTH_CAP_4_00870300;
      goto LAB_00709b1a;
    }
    local_20 = 0x9b49;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x9b63;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x709b69;
      uVar14 = FUN_004ff300();
    }
    else {
      local_20 = 0x9b54;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x709b5c;
      uVar14 = FUN_0070c0c0();
    }
    local_20 = 0x9b75;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_28 = (double)CONCAT44(local_28._4_4_,uVar14);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_2c = s_EE_STRENGTH_CAP_3_008702ec;
LAB_0070309b:
    uStack_30 = 0x30a5;
    uStack_2e = 0x70;
    local_2c = (char *)FUN_0042b6c9();
    pcVar23 = (char *)local_28;
LAB_007030a6:
    local_34 = 0x30af;
    local_32 = 0x70;
    uStack_30 = uVar5;
    uStack_2e = uVar7;
    local_28._0_4_ = pcVar23;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x12a:
    local_20 = 0x7d54;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7d6e;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7d86;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707d8c;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7d79;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707d7f;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7d5f;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707d67;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7d98;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x8c8;
    goto LAB_00706d79;
  case 299:
    local_20 = 0x7daf;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7dc9;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7de1;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707de7;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7dd4;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707dda;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7dba;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707dc2;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7df3;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x8b8;
    goto LAB_00707f0f;
  case 300:
    local_20 = 0x7e0a;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7e24;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7e3c;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707e42;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7e2f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707e35;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7e15;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707e1d;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7e4e;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x8a4;
    goto LAB_00706cf3;
  case 0x12d:
    local_20 = 0x7e65;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7e7f;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7e97;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707e9d;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7e8a;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707e90;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7e70;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707e78;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7ea9;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x890;
LAB_00706d79:
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x706d83;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    uStack_30 = 0xbf4;
    local_2c = pcVar23;
LAB_00706d8a:
    uStack_2e = 0x87;
    uStack_38 = 0x6d93;
    uStack_36 = 0x70;
    local_34 = uVar5;
    local_32 = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x12e:
    local_20 = 0x7ec0;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7eda;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7ef2;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707ef8;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7ee5;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707eeb;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7ecb;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707ed3;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7f04;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x880;
LAB_00707f0f:
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x707f19;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    uStack_30 = 0xbf4;
    uStack_2e = 0x87;
    local_2c = pcVar23;
LAB_0070378c:
    uStack_38 = 0x3795;
    uStack_36 = 0x70;
    local_34 = uVar5;
    local_32 = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x12f:
    local_20 = 0x7f2c;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x7f46;
      uStack_1e = 0x70;
      local_1d = 0;
      cVar11 = FUN_0070a530();
      if (cVar11 == '\0') {
        local_20 = 0x7f5e;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707f64;
        pcVar23 = (char *)FUN_004ff320();
      }
      else {
        local_20 = 0x7f51;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_00496e60();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x707f57;
        pcVar23 = (char *)FUN_004ff3a0();
      }
    }
    else {
      local_20 = 0x7f37;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x707f3f;
      pcVar23 = (char *)FUN_0070c0c0();
    }
    local_20 = 0x7f70;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x870;
LAB_00706cf3:
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x706cfd;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    uStack_30 = 0xbf4;
    uStack_2e = 0x87;
    uStack_38 = 0x6d0d;
    uStack_36 = 0x70;
    local_34 = uVar5;
    local_32 = uVar7;
    local_2c = pcVar23;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x130:
    local_20 = 0x9b8d;
    uStack_1e = 0x70;
    local_1d = 0;
    local_28._0_2_ = uVar4;
    local_28._2_2_ = uVar6;
    uVar14 = FUN_0070a4c0();
    switch(uVar14) {
    case 0:
      local_20 = 0x2e0;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (char *)0x709bac;
      puVar29 = (undefined1 *)FUN_0042b6c9();
      local_20 = 0x9bb6;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x9bbb;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (undefined *)0x709bc1;
      piVar16 = (int *)FUN_004e9370();
      local_20 = 0x9bcb;
      uStack_1e = 0x70;
      local_1d = 0;
      puVar20 = (undefined1 *)(**(code **)(*piVar16 + 0xc))();
      break;
    case 1:
      local_20 = 0x2d8;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (char *)0x709bdf;
      puVar29 = (undefined1 *)FUN_0042b6c9();
      local_20 = 0x9be9;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x9bee;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (undefined *)0x709bf4;
      puVar20 = (undefined1 *)FUN_004c7bfa();
      break;
    case 2:
      local_20 = 0x2cc;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (char *)0x709c08;
      puVar29 = (undefined1 *)FUN_0042b6c9();
      local_20 = 0x9c12;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 0x9c17;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (undefined *)0x709c1d;
      puVar20 = (undefined1 *)FUN_004c7c14();
      break;
    case 3:
      local_20 = 700;
      uStack_1e = 0x87;
      local_1d = 0;
      local_28._4_4_ = (char *)0x709c31;
      puVar29 = (undefined1 *)FUN_0042b6c9();
      local_20 = 0x9c3b;
      uStack_1e = 0x70;
      local_1d = 0;
      FUN_0070a4b0();
      local_20 = 40000;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = __ftol();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (undefined *)0x709c46;
      puVar20 = (undefined1 *)FUN_004c7c2e();
      break;
    default:
      puVar20 = &DAT_0088ebf8;
      puVar29 = &DAT_0088ebf8;
    }
    local_20 = 0x9c5d;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4d0();
    if (iVar13 < 1) {
      uVar21 = 0xffffffff;
      pcVar23 = &DAT_0088ebf8;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_570;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
    }
    else {
      local_20 = 0x9c68;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x709c6e;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x9c9c;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x709ca2;
        uVar14 = FUN_004af740();
        local_28._0_4_ = local_570;
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = &DAT_008712bc;
        local_2c = (char *)0x709cb7;
        FUN_007a630a();
      }
      else {
        local_20 = 0x9c7e;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = (**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._0_4_ = local_570;
        local_28._4_4_ = &DAT_008712bc;
        local_2c = (char *)0x709c90;
        FUN_007a630a();
      }
    }
    local_20 = 0x9ceb;
    uStack_1e = 0x70;
    local_1d = 0;
    cVar11 = FUN_0070a540();
    if (cVar11 == '\0') {
      local_20 = 0x9d05;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x709d0b;
      uVar14 = FUN_004ff300();
    }
    else {
      local_20 = 0x9cf6;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x709cfe;
      uVar14 = FUN_0070c0c0();
    }
    local_20 = SUB42(puVar29,0);
    uStack_1e = (undefined1)((uint)puVar29 >> 0x10);
    local_1d = (char)((uint)puVar29 >> 0x18);
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
    uStack_30 = 0x2ac;
    local_2c = local_570;
    local_28._4_4_ = puVar20;
LAB_00708a6d:
    uStack_2e = 0x87;
    local_34 = 0x8a77;
    local_32 = 0x70;
    uVar14 = FUN_0042b6c9();
    uStack_30 = (undefined2)uVar14;
    uStack_2e = (undefined2)((uint)uVar14 >> 0x10);
    uStack_38 = 0x8a81;
    uStack_36 = 0x70;
    local_34 = uVar5;
    local_32 = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x131:
    local_20 = 0x4e5b;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x4e60;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704e66;
    uVar14 = FUN_004ff380();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ADD_BRIGADE_00871238;
LAB_00703e87:
    local_28._0_2_ = 0x3e91;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
LAB_00703e92:
    local_2c = (char *)0x703e9b;
    local_28._0_2_ = uVar5;
    local_28._2_2_ = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x132:
    local_20 = 0x4dd6;
    uStack_1e = 0x70;
    local_1d = 0;
    FUN_0070a4b0();
    local_20 = 0x4ddb;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = __ftol();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704de1;
    uVar14 = FUN_004ff380();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_BUILD_BRIGADE_0087127c;
    break;
  case 0x133:
    uVar14 = *(undefined4 *)(extraout_ECX + 0xc);
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70300c;
    uVar14 = FUN_00514070();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_DISABLE_TASK_00871a38;
LAB_00703015:
    local_28._0_2_ = 0x301f;
    local_28._2_2_ = 0x70;
    local_28._4_4_ = (char *)FUN_0042b6c9();
LAB_00703020:
    local_2c = (char *)0x703029;
    local_28._0_2_ = uVar5;
    local_28._2_2_ = uVar7;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x134:
    local_20 = 0x451b;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4c0();
    if (iVar13 == 0) {
      local_20 = 0x4564;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x1518;
      goto LAB_007035d1;
    }
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        ExceptionList = local_10;
        return;
      }
      local_20 = 0x2b;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x704536;
      fVar26 = (float10)FUN_0054ed30();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x152c;
      goto LAB_0070997c;
    }
    local_20 = 0x454d;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x152c;
    goto LAB_00703a8c;
  case 0x135:
    local_20 = 0x457b;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a4c0();
    if (iVar13 == 0) {
      local_20 = 0x45c4;
      uStack_1e = 0x70;
      local_1d = 0;
      fVar26 = (float10)FUN_0070a4b0();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x14dc;
      goto LAB_007035d1;
    }
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        ExceptionList = local_10;
        return;
      }
      local_20 = 0x2c;
      uStack_1e = 0;
      local_1d = 0;
      local_28._4_4_ = (char *)0x704596;
      fVar26 = (float10)FUN_0054ed30();
      dVar1 = (double)fVar26;
      local_28._4_4_ = SUB84(dVar1,0);
      local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
      local_1d = (char)((ulonglong)dVar1 >> 0x38);
      local_28._0_2_ = 0x14f8;
      goto LAB_0070997c;
    }
    local_20 = 0x45ad;
    uStack_1e = 0x70;
    local_1d = 0;
    fVar26 = (float10)FUN_0070a4b0();
    dVar1 = (double)fVar26;
    local_28._4_4_ = SUB84(dVar1,0);
    local_20 = (undefined2)((ulonglong)dVar1 >> 0x20);
    uStack_1e = (undefined1)((ulonglong)dVar1 >> 0x30);
    local_1d = (char)((ulonglong)dVar1 >> 0x38);
    local_28._0_2_ = 0x14f8;
LAB_00703a8c:
    local_28._2_2_ = 0x87;
    local_2c = (char *)0x703a96;
    uVar14 = FUN_0042b6c9();
    local_28._0_2_ = (undefined2)uVar14;
    local_28._2_2_ = (undefined2)((uint)uVar14 >> 0x10);
LAB_00703a97:
    local_2c = param_1;
    uStack_30 = 0x3aa0;
    uStack_2e = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  case 0x136:
    local_20 = 0x45db;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (0 < iVar13) {
      local_20 = 0x45e6;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7045ec;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x4605;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70460b;
        pcVar23 = (char *)FUN_004af740();
      }
      else {
        local_20 = 0x45fc;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      }
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_e70;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      local_20 = 0x463a;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704640;
      uVar14 = FUN_004c7bfa();
      local_28._4_4_ = local_e70;
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x14c8;
      goto LAB_0070997c;
    }
    local_20 = 0x465a;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704660;
    uVar14 = FUN_004c7bfa();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ADD_CORE_AREA_008714b4;
    break;
  case 0x137:
    local_20 = 0x4675;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (0 < iVar13) {
      local_20 = 0x4680;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704686;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x469f;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7046a5;
        pcVar23 = (char *)FUN_004af740();
      }
      else {
        local_20 = 0x4696;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      }
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_c70;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      local_20 = 0x46d4;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7046da;
      uVar14 = FUN_004c7c14();
      local_28._4_4_ = local_c70;
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x149c;
      goto LAB_0070997c;
    }
    local_20 = 0x46f4;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7046fa;
    uVar14 = FUN_004c7c14();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ADD_CORE_REGION_00871488;
    break;
  case 0x138:
    local_20 = 0x470f;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (0 < iVar13) {
      local_20 = 0x471a;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704720;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x4739;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70473f;
        pcVar23 = (char *)FUN_004af740();
      }
      else {
        local_20 = 0x4730;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      }
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_1070;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      local_20 = 0x476e;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704774;
      uVar14 = FUN_004c7bfa();
      local_28._4_4_ = local_1070;
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x1470;
      goto LAB_0070997c;
    }
    local_20 = 0x478e;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704794;
    uVar14 = FUN_004c7bfa();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_REMOVE_CORE_AREA_0087145c;
    break;
  case 0x139:
    local_20 = 0x47a9;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (0 < iVar13) {
      local_20 = 0x47b4;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7047ba;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x47d3;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7047d9;
        pcVar23 = (char *)FUN_004af740();
      }
      else {
        local_20 = 0x47ca;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      }
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_a70;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      local_20 = 0x4808;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x70480e;
      uVar14 = FUN_004c7c14();
      local_28._4_4_ = local_a70;
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x1444;
      goto LAB_0070997c;
    }
    local_20 = 0x4828;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x70482e;
    uVar14 = FUN_004c7c14();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_REMOVE_CORE_REGION_0087142c;
    break;
  case 0x13a:
    local_20 = 0x4843;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (0 < iVar13) {
      local_20 = 0x484e;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704854;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x486d;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x704873;
        pcVar23 = (char *)FUN_004af740();
      }
      else {
        local_20 = 0x4864;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      }
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_b70;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      local_20 = 0x48a2;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7048a8;
      uVar14 = FUN_004c7bfa();
      local_28._4_4_ = local_b70;
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x1418;
      goto LAB_0070997c;
    }
    local_20 = 0x48c2;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7048c8;
    uVar14 = FUN_004c7bfa();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ADD_CLAIM_AREA_00871404;
    break;
  case 0x13b:
    local_20 = 0x48dd;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (0 < iVar13) {
      local_20 = 0x48e8;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7048ee;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x4907;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x70490d;
        pcVar23 = (char *)FUN_004af740();
      }
      else {
        local_20 = 0x48fe;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      }
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_670;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      local_20 = 0x493c;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704942;
      uVar14 = FUN_004c7c14();
      local_28._4_4_ = local_670;
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x13ec;
      goto LAB_0070997c;
    }
    local_20 = 0x495c;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704962;
    uVar14 = FUN_004c7c14();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_ADD_CLAIM_REGION_008713d8;
    break;
  case 0x13c:
    local_20 = 0x4977;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (0 < iVar13) {
      local_20 = 0x4982;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704988;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x49a1;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x7049a7;
        pcVar23 = (char *)FUN_004af740();
      }
      else {
        local_20 = 0x4998;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      }
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_770;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      local_20 = 0x49d6;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x7049dc;
      uVar14 = FUN_004c7bfa();
      local_28._4_4_ = local_770;
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x13c0;
      goto LAB_0070997c;
    }
    local_20 = 0x49f6;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x7049fc;
    uVar14 = FUN_004c7bfa();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_REMOVE_CLAIM_AREA_008713a8;
    break;
  case 0x13d:
    local_20 = 0x4a11;
    uStack_1e = 0x70;
    local_1d = 0;
    iVar13 = FUN_0070a510();
    if (0 < iVar13) {
      local_20 = 0x4a1c;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_0070a4d0();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704a22;
      iVar13 = FUN_00465c30();
      if (iVar13 == 0) {
        local_20 = 0x4a3b;
        uStack_1e = 0x70;
        local_1d = 0;
        uVar14 = FUN_0070a4d0();
        local_20 = (undefined2)uVar14;
        uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
        local_1d = (char)((uint)uVar14 >> 0x18);
        local_28._4_4_ = (char *)0x704a41;
        pcVar23 = (char *)FUN_004af740();
      }
      else {
        local_20 = 0x4a32;
        uStack_1e = 0x70;
        local_1d = 0;
        pcVar23 = (char *)(**(code **)(*(int *)(iVar13 + 0xe) + 0xc))();
      }
      uVar21 = 0xffffffff;
      do {
        pcVar25 = pcVar23;
        if (uVar21 == 0) break;
        uVar21 = uVar21 - 1;
        pcVar25 = pcVar23 + 1;
        cVar11 = *pcVar23;
        pcVar23 = pcVar25;
      } while (cVar11 != '\0');
      uVar21 = ~uVar21;
      pcVar23 = pcVar25 + -uVar21;
      pcVar25 = local_870;
      for (uVar22 = uVar21 >> 2; uVar22 != 0; uVar22 = uVar22 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar23;
        pcVar23 = pcVar23 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        *pcVar25 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        pcVar25 = pcVar25 + 1;
      }
      local_20 = 0x4a70;
      uStack_1e = 0x70;
      local_1d = 0;
      uVar14 = FUN_00496e60();
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._4_4_ = (char *)0x704a76;
      uVar14 = FUN_004c7c14();
      local_28._4_4_ = local_870;
      local_20 = (undefined2)uVar14;
      uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
      local_1d = (char)((uint)uVar14 >> 0x18);
      local_28._0_2_ = 0x138c;
      goto LAB_0070997c;
    }
    local_20 = 0x4a90;
    uStack_1e = 0x70;
    local_1d = 0;
    uVar14 = FUN_00496e60();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = (char *)0x704a96;
    uVar14 = FUN_004c7c14();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = s_EE_REMOVE_CLAIM_REGION_00871374;
    break;
  case 0xffffffff:
    local_20 = 0xea3c;
    uStack_1e = 0x85;
    local_1d = 0;
    local_28._4_4_ = (char *)0x702b79;
    uVar14 = FUN_0042b6c9();
    local_20 = (undefined2)uVar14;
    uStack_1e = (undefined1)((uint)uVar14 >> 0x10);
    local_1d = (char)((uint)uVar14 >> 0x18);
    local_28._4_4_ = param_1;
    local_28._0_2_ = 0x2b83;
    local_28._2_2_ = 0x70;
    FUN_007a630a();
    ExceptionList = local_10;
    return;
  }
LAB_00709783:
  local_28._0_2_ = 0x978d;
  local_28._2_2_ = 0x70;
  local_28._4_4_ = (char *)FUN_0042b6c9();
  local_2c = (char *)0x709797;
  local_28._0_2_ = uVar5;
  local_28._2_2_ = uVar7;
  FUN_007a630a();
  ExceptionList = local_10;
  return;
}


