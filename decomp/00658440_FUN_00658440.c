// FUN_00658440 @ 658440 size=13490

void __thiscall FUN_00658440(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  undefined2 uVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  char *pcVar19;
  undefined4 uVar20;
  int *piStack_22c;
  uint uStack_224;
  undefined2 uStack_21e;
  undefined2 uStack_21c;
  uint uStack_218;
  uint uStack_214;
  int iStack_210;
  undefined1 auStack_20c [256];
  undefined1 auStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d3350;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x13da4) != 0) {
    return;
  }
  if (DAT_00bda0fc == '\x01') {
    ExceptionList = &local_c;
    if (*(undefined4 **)(param_1 + 0x13d40) != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      (**(code **)**(undefined4 **)(param_1 + 0x13d40))(1);
    }
    *(undefined4 *)(param_1 + 0x13d40) = 0;
    uVar9 = param_2[1];
    uVar10 = *param_2;
    FUN_0064eb30(uVar10,uVar9);
    FUN_00592e40(uVar10,uVar9);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  piVar7 = (int *)FUN_006436d0(0x39);
  cVar5 = (**(code **)(*piVar7 + 0x20))(*param_2,param_2[1]);
  if (cVar5 != '\0') {
    if (*(undefined4 **)(param_1 + 0x13d40) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x13d40))(1);
    }
    pvVar8 = operator_new(0x76);
    uStack_4 = 0;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_006482d0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x13d40) = uVar9;
    cVar5 = FUN_0042e980();
    if (cVar5 != '\0') {
      iVar16 = 0;
      do {
        FUN_007a630a(auStack_20c,s_GAMESPEED_d_00867004,iVar16);
        pvVar8 = operator_new(0x254);
        uStack_4 = 1;
        if (pvVar8 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT31((int3)((uint)*(int *)(*DAT_00d12b40 + 0x36a) >> 8),
                           iVar16 != *(int *)(*DAT_00d12b40 + 0x36a));
          iVar14 = iVar16;
          uVar10 = FUN_0042b6c9(auStack_20c);
          uVar9 = FUN_00648170(0xc,uVar10,uVar9,iVar14);
        }
        uStack_4 = 0xffffffff;
        iVar14 = *(int *)(param_1 + 0x13d40);
        iVar17 = *(int *)(iVar14 + 8);
        puVar11 = operator_new(0xe);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = uVar9;
          puVar11[1] = iVar17;
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        iVar1 = *(int *)(iVar14 + 0xc);
        *(undefined4 **)(iVar14 + 8) = puVar11;
        *(int *)(iVar14 + 0xc) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(iVar14 + 4) = puVar11;
        }
        else {
          *(undefined4 **)(iVar17 + 8) = puVar11;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < 8);
      puVar11 = operator_new(0x36);
      uStack_4 = 2;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
        uVar9 = *(undefined4 *)(param_1 + 0x13d40);
        FUN_00433f00();
        *(undefined4 *)((int)puVar11 + 0x2e) = 5;
        *(undefined4 *)((int)puVar11 + 0x32) = uVar9;
        *puVar11 = &PTR_FUN_007f0a64;
        puVar11[2] = &PTR_LAB_007f0a60;
        *(undefined2 *)(puVar11 + 3) = uVar6;
      }
      uStack_4 = 0xffffffff;
      iVar16 = *(int *)(param_1 + 0x13d40);
      iVar14 = *(int *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = puVar11;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar12;
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 **)(iVar16 + 4) = puVar12;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar12;
      }
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 3;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      if (*(int *)(*DAT_00d12b40 + 0x40a) == 1) {
        pcVar19 = s_RCDM_HIDE_WEATHER_00866ff0;
      }
      else {
        pcVar19 = s_RCDM_SHOW_WEATHER_00866fdc;
      }
      uVar9 = FUN_0042b6c9(pcVar19);
      uVar9 = FUN_00648170(0xf,uVar9,1,0);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(param_1 + 0x13d40);
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 4;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      if (*(int *)(*DAT_00d12b40 + 0x40e) == 1) {
        pcVar19 = s_RCDM_HIDE_ICONS_00866fcc;
      }
      else {
        pcVar19 = s_RCDM_SHOW_ICONS_00866fbc;
      }
      uVar9 = FUN_0042b6c9(pcVar19);
      uVar9 = FUN_00648170(0x10,uVar9,1,0);
    }
    iVar16 = *(int *)(param_1 + 0x13d40);
    uStack_4 = 0xffffffff;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    puVar11 = operator_new(0x36);
    uStack_4 = 5;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
      uVar9 = *(undefined4 *)(param_1 + 0x13d40);
      FUN_00433f00();
      *(undefined4 *)((int)puVar11 + 0x2e) = 5;
      *(undefined4 *)((int)puVar11 + 0x32) = uVar9;
      *puVar11 = &PTR_FUN_007f0a64;
      puVar11[2] = &PTR_LAB_007f0a60;
      *(undefined2 *)(puVar11 + 3) = uVar6;
    }
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(param_1 + 0x13d40);
    iVar14 = *(int *)(iVar16 + 8);
    puVar12 = operator_new(0xe);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      *puVar12 = puVar11;
      puVar12[1] = iVar14;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar12;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar12;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar12;
    }
    if (DAT_00dc191a != '\0') {
      iVar16 = 0;
      do {
        FUN_007a630a(auStack_20c,s_RCDM_CASUALTIES_REP_STYLE__d_00866f9c,iVar16);
        pvVar8 = operator_new(0x254);
        uStack_4 = 6;
        if (pvVar8 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT31((int3)((uint)*(int *)(*DAT_00d12b40 + 0x412) >> 8),
                           iVar16 != *(int *)(*DAT_00d12b40 + 0x412));
          iVar14 = iVar16;
          uVar10 = FUN_0042b6c9(auStack_20c);
          uVar9 = FUN_00648170(0x25,uVar10,uVar9,iVar14);
        }
        uStack_4 = 0xffffffff;
        iVar14 = *(int *)(param_1 + 0x13d40);
        iVar17 = *(int *)(iVar14 + 8);
        puVar11 = operator_new(0xe);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = uVar9;
          puVar11[1] = iVar17;
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        iVar1 = *(int *)(iVar14 + 0xc);
        *(undefined4 **)(iVar14 + 8) = puVar11;
        *(int *)(iVar14 + 0xc) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(iVar14 + 4) = puVar11;
        }
        else {
          *(undefined4 **)(iVar17 + 8) = puVar11;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < 3);
      puVar11 = operator_new(0x36);
      uStack_4 = 7;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
        uVar9 = *(undefined4 *)(param_1 + 0x13d40);
        FUN_00433f00();
        *(undefined4 *)((int)puVar11 + 0x2e) = 5;
        *(undefined4 *)((int)puVar11 + 0x32) = uVar9;
        *puVar11 = &PTR_FUN_007f0a64;
        puVar11[2] = &PTR_LAB_007f0a60;
        *(undefined2 *)(puVar11 + 3) = uVar6;
      }
      uStack_4 = 0xffffffff;
      iVar16 = *(int *)(param_1 + 0x13d40);
      iVar14 = *(int *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      iVar17 = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = puVar11;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      iVar1 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar12;
      *(int *)(iVar16 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(iVar16 + 4) = puVar12;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar12;
      }
      do {
        FUN_007a630a(auStack_20c,s_RCDM_EQUIPMENT_REP_STYLE__d_00866f80,iVar17);
        pvVar8 = operator_new(0x254);
        uStack_4 = 8;
        if (pvVar8 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = CONCAT31((int3)((uint)*(int *)(*DAT_00d12b40 + 0x416) >> 8),
                           iVar17 != *(int *)(*DAT_00d12b40 + 0x416));
          iVar16 = iVar17;
          uVar10 = FUN_0042b6c9(auStack_20c);
          uVar9 = FUN_00648170(0x26,uVar10,uVar9,iVar16);
        }
        uStack_4 = 0xffffffff;
        iVar16 = *(int *)(param_1 + 0x13d40);
        iVar14 = *(int *)(iVar16 + 8);
        puVar11 = operator_new(0xe);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = uVar9;
          puVar11[1] = iVar14;
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        iVar1 = *(int *)(iVar16 + 0xc);
        *(undefined4 **)(iVar16 + 8) = puVar11;
        *(int *)(iVar16 + 0xc) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined4 **)(iVar16 + 4) = puVar11;
        }
        else {
          *(undefined4 **)(iVar14 + 8) = puVar11;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < 3);
      puVar11 = operator_new(0x36);
      uStack_4 = 9;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
        uVar9 = *(undefined4 *)(param_1 + 0x13d40);
        FUN_00433f00();
        *(undefined4 *)((int)puVar11 + 0x2e) = 5;
        *(undefined4 *)((int)puVar11 + 0x32) = uVar9;
        *puVar11 = &PTR_FUN_007f0a64;
        puVar11[2] = &PTR_LAB_007f0a60;
        *(undefined2 *)(puVar11 + 3) = uVar6;
      }
      uStack_4 = 0xffffffff;
      iVar16 = *(int *)(param_1 + 0x13d40);
      iVar14 = *(int *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = puVar11;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar12;
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 **)(iVar16 + 4) = puVar12;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar12;
      }
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 10;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      if (*(int *)(*DAT_00d12b40 + 0x41a) == 1) {
        pcVar19 = s_RCDM_HIDE_UNIT_DETAILS_00866f68;
      }
      else {
        pcVar19 = s_RCDM_SHOW_UNIT_DETAILS_00866f50;
      }
      uVar9 = FUN_0042b6c9(pcVar19);
      uVar9 = FUN_00648170(0x27,uVar9,1,0);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(param_1 + 0x13d40);
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0xb;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      if (*(int *)(*DAT_00d12b40 + 0x41e) == 1) {
        pcVar19 = s_RCDM_HIDE_MODIFIERS_DETAILS_00866f34;
      }
      else {
        pcVar19 = s_RCDM_SHOW_MODIFIERS_DETAILS_00866f18;
      }
      uVar9 = FUN_0042b6c9(pcVar19);
      uVar9 = FUN_00648170(0x28,uVar9,1,0);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(param_1 + 0x13d40);
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    puVar11 = operator_new(0x36);
    uStack_4 = 0xc;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
      uVar9 = *(undefined4 *)(param_1 + 0x13d40);
      FUN_00433f00();
      *(undefined4 *)((int)puVar11 + 0x2e) = 5;
      *(undefined4 *)((int)puVar11 + 0x32) = uVar9;
      *puVar11 = &PTR_FUN_007f0a64;
      puVar11[2] = &PTR_LAB_007f0a60;
      *(undefined2 *)(puVar11 + 3) = uVar6;
    }
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(param_1 + 0x13d40);
    iVar14 = *(int *)(iVar16 + 8);
    puVar12 = operator_new(0xe);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      *puVar12 = puVar11;
      puVar12[1] = iVar14;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar12;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar12;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar12;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0xd;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar20 = 0;
      uVar10 = 1;
      uVar9 = FUN_0042b6c9(s_RCDM_COUNTERS_00866f08);
      uVar9 = FUN_00648170(0xd,uVar9,uVar10,uVar20);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(param_1 + 0x13d40);
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0xe;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar20 = 0;
      uVar10 = 1;
      uVar9 = FUN_0042b6c9(s_RCDM_SPRITES_00866ef8);
      uVar9 = FUN_00648170(0xe,uVar9,uVar10,uVar20);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(param_1 + 0x13d40);
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    goto LAB_0065b8d2;
  }
  cVar5 = (**(code **)(**(int **)(param_1 + 0x21de4 + *(int *)(param_1 + 0x21e62) * 4) + 0x58))
                    (*param_2,param_2[1]);
  if (cVar5 == '\x01') {
    ExceptionList = local_c;
    return;
  }
  cVar5 = FUN_00657690(*param_2,param_2[1]);
  if (cVar5 == '\x01') {
    switch(*(undefined4 *)(param_1 + 0x21e62)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
      goto switchD_00658f6a_caseD_0;
    default:
      ExceptionList = local_c;
      return;
    }
  }
  piVar7 = (int *)(param_1 + 0x13d40);
  if (*(int *)(param_1 + 0x13d40) != 0) {
    ExceptionList = local_c;
    return;
  }
  iVar16 = FUN_00652570(*param_2,param_2[1]);
  if ((iVar16 == 2) || (iVar16 == 4)) {
    iVar16 = FUN_00652bb0(*param_2,param_2[1]);
  }
  if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*piVar7)(1);
  }
  *piVar7 = 0;
  switch(iVar16) {
  case 1:
  case 3:
  case 0xd:
    iVar16 = *(int *)(param_1 + 0x21e6a);
    *(undefined4 *)(param_1 + 0x13d3a) = *(undefined4 *)(iVar16 + 0x18);
    *(undefined2 *)(param_1 + 0x13d3e) = *(undefined2 *)(iVar16 + 0x1c);
    *(undefined4 *)(param_1 + 0x13d36) = *(undefined4 *)(param_1 + 0x21e6e);
    if (iVar16 == 0) {
      uStack_21e = (undefined2)DAT_0088f28e;
      uStack_21c = (undefined2)((uint)DAT_0088f28e >> 0x10);
      *(uint *)(param_1 + 0x13d2a) = CONCAT22(uStack_21e,DAT_0088f28c);
      *(undefined2 *)(param_1 + 0x13d2e) = uStack_21c;
    }
    else {
      *(undefined4 *)(param_1 + 0x13d2a) = *(undefined4 *)(iVar16 + 0x18);
      *(undefined2 *)(param_1 + 0x13d2e) = *(undefined2 *)(iVar16 + 0x1c);
    }
    iStack_210 = param_1 + 0x13d2a;
    (**(code **)(**(int **)(param_1 + 0x13d30) + 0x14))();
    uStack_218 = uStack_218 & 0xffffff00;
    *(undefined4 *)(param_1 + 0x13d26) = *(undefined4 *)(param_1 + 0x13d30);
    uStack_214 = uStack_214 & 0xffffff00;
    uStack_224 = uStack_224 & 0xffffff00;
    iVar16 = DAT_00ab27b4 + *(int *)(param_1 + 0x21e6e) * 0x4b2;
    for (piVar7 = *(int **)(*(int *)(iVar16 + 0x1c2) + 4); piVar7 != (int *)0x0;
        piVar7 = (int *)piVar7[2]) {
      iVar14 = *piVar7;
      if (*(int *)(iVar14 + 0x248) == param_1) {
        iVar17 = *(int *)(param_1 + 0x13d26);
        iVar1 = *(int *)(iVar17 + 8);
        piVar13 = operator_new(0xe);
        if (piVar13 == (int *)0x0) {
          piVar13 = (int *)0x0;
        }
        else {
          *piVar13 = iVar14;
          piVar13[1] = iVar1;
          piVar13[2] = 0;
          *(undefined1 *)(piVar13 + 3) = 0;
        }
        iVar14 = *(int *)(iVar17 + 0xc);
        *(int **)(iVar17 + 8) = piVar13;
        *(int *)(iVar17 + 0xc) = iVar14 + 1;
        if (iVar14 == 0) {
          *(int **)(iVar17 + 4) = piVar13;
        }
        else {
          *(int **)(iVar1 + 8) = piVar13;
        }
        cVar5 = (**(code **)(*(int *)*piVar7 + 0x28))();
        if (cVar5 != '\0') {
          uVar4 = uStack_214 >> 8;
          uStack_214 = CONCAT31((int3)uVar4,1);
        }
        cVar5 = (**(code **)(*(int *)*piVar7 + 0x30))();
        if (cVar5 != '\0') {
          uVar4 = uStack_218 >> 8;
          uStack_218 = CONCAT31((int3)uVar4,1);
        }
        cVar5 = (**(code **)(*(int *)*piVar7 + 0x2c))();
        if (cVar5 != '\0') {
          uStack_224._1_3_ = (undefined3)(uStack_224 >> 8);
          uStack_224 = CONCAT31(uStack_224._1_3_,1);
        }
      }
    }
    iVar16 = *(int *)(iVar16 + 0x46a);
    if (iVar16 != 0) {
      for (piVar7 = *(int **)(iVar16 + 0x34); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
        iVar16 = *piVar7;
        if (*(int *)(iVar16 + 0x248) == param_1) {
          iVar14 = *(int *)(param_1 + 0x13d26);
          iVar17 = *(int *)(iVar14 + 8);
          piVar13 = operator_new(0xe);
          if (piVar13 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            *piVar13 = iVar16;
            piVar13[1] = iVar17;
            piVar13[2] = 0;
            *(undefined1 *)(piVar13 + 3) = 0;
          }
          iVar16 = *(int *)(iVar14 + 0xc);
          *(int **)(iVar14 + 8) = piVar13;
          *(int *)(iVar14 + 0xc) = iVar16 + 1;
          if (iVar16 == 0) {
            *(int **)(iVar14 + 4) = piVar13;
          }
          else {
            *(int **)(iVar17 + 8) = piVar13;
          }
          uStack_224._1_3_ = (undefined3)(uStack_224 >> 8);
          uStack_224 = CONCAT31(uStack_224._1_3_,1);
        }
      }
    }
    uVar4 = uStack_224;
    pvVar8 = operator_new(0x76);
    uStack_4 = 0x13;
    if (pvVar8 == (void *)0x0) {
      iVar16 = 0;
    }
    else {
      iVar16 = FUN_006482d0();
    }
    piVar7 = (int *)(param_1 + 0x13d40);
    uStack_4 = 0xffffffff;
    *piVar7 = iVar16;
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x14;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = FUN_0042b6c9(s_RCDM_SELECTARMY_00866eb0);
      uVar9 = FUN_00648170(3,uVar9,uStack_214,uVar10);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *piVar7;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x15;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar18 = uStack_224;
      uVar9 = FUN_0042b6c9(s_RCDM_SELECTNAVY_00866ea0);
      uVar9 = FUN_00648170(4,uVar9,uVar18,uVar10);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *piVar7;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x16;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = FUN_0042b6c9(s_RCDM_SELECTAIR_00866e90);
      uVar9 = FUN_00648170(5,uVar9,uStack_218,uVar10);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *piVar7;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    puVar11 = operator_new(0x36);
    uStack_4 = 0x17;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
      iVar16 = *piVar7;
      FUN_00433f00();
      *(undefined4 *)((int)puVar11 + 0x2e) = 5;
      *(int *)((int)puVar11 + 0x32) = iVar16;
      *puVar11 = &PTR_FUN_007f0a64;
      puVar11[2] = &PTR_LAB_007f0a60;
      *(undefined2 *)(puVar11 + 3) = uVar6;
    }
    uStack_4 = 0xffffffff;
    iVar16 = *piVar7;
    iVar14 = *(int *)(iVar16 + 8);
    puVar12 = operator_new(0xe);
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      *puVar12 = puVar11;
      puVar12[1] = iVar14;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar12;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar12;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar12;
    }
    bVar3 = false;
    uStack_224 = uStack_224 & 0xffffff00;
    iVar16 = (**(code **)(*(int *)(*(int *)(param_1 + 0x21e6a) + 0x22) + 4))();
    if (1 < iVar16) {
      iVar16 = *(int *)(param_1 + 0x21e6a);
      iVar14 = (**(code **)(*(int *)(iVar16 + 0x11c) + 4))();
      if ((((iVar14 == 0) && (cVar5 = (**(code **)(*(int *)(iVar16 + 0x22e) + 8))(), cVar5 != '\0'))
          && (iVar16 = FUN_00522770(), iVar16 == DAT_00d0ca90)) &&
         (piVar7 = *(int **)(*(int *)(param_1 + 0x13d26) + 4), piVar7 != (int *)0x0)) {
        do {
          if (bVar3) break;
          piVar13 = (int *)piVar7[2];
          iVar16 = *piVar7;
          iVar14 = (**(code **)(*(int *)(iVar16 + 0x22) + 4))();
          if (((1 < iVar14) && (iVar14 = (**(code **)(*(int *)(iVar16 + 0x11c) + 4))(), iVar14 == 0)
              ) && ((cVar5 = (**(code **)(*(int *)(iVar16 + 0x22e) + 8))(), cVar5 != '\0' &&
                    (iVar16 = FUN_00522770(), iVar16 == DAT_00d0ca90)))) {
            bVar3 = true;
          }
          piVar7 = piVar13;
        } while (piVar13 != (int *)0x0);
        uStack_224._1_3_ = SUB43(uVar4,1);
        uStack_224 = CONCAT31(uStack_224._1_3_,bVar3);
      }
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x18;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = FUN_0042b6c9(s_RCDM_CREATENEW_00866e80);
      uVar9 = FUN_00648170(6,uVar9,uStack_224,uVar10);
    }
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(param_1 + 0x13d40);
    piVar7 = (int *)(param_1 + 0x13d40);
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x19;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar20 = 0;
      uVar9 = FUN_004a2dd0(*(undefined4 *)(param_1 + 0x13d26));
      uVar10 = FUN_0042b6c9(s_RCDM_MERGE_00866e74);
      uVar9 = FUN_00648170(7,uVar10,uVar9,uVar20);
    }
    iVar16 = *piVar7;
    uStack_4 = 0xffffffff;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    iVar16 = FUN_00428ee0(iStack_210);
    if (iVar16 == 0) {
      piVar13 = (int *)0x0;
    }
    else {
      piVar13 = (int *)(iVar16 + -0x14);
    }
    cVar5 = (**(code **)(*piVar13 + 0x2c))();
    if (cVar5 != '\0') {
      puVar11 = operator_new(0x36);
      uStack_4 = 0x1a;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
        iVar16 = *piVar7;
        FUN_00433f00();
        *(undefined4 *)((int)puVar11 + 0x2e) = 5;
        *(int *)((int)puVar11 + 0x32) = iVar16;
        *puVar11 = &PTR_FUN_007f0a64;
        puVar11[2] = &PTR_LAB_007f0a60;
        *(undefined2 *)(puVar11 + 3) = uVar6;
      }
      iVar16 = *piVar7;
      uStack_4 = 0xffffffff;
      iVar14 = *(int *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = puVar11;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar12;
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 **)(iVar16 + 4) = puVar12;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar12;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x1b;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        FUN_00428ee0(iStack_210);
        uVar20 = 0;
        uVar9 = FUN_005174f0(0);
        uVar10 = FUN_0042b6c9(s_RCDM_UNLOAD_00866e68);
        uVar9 = FUN_00648170(8,uVar10,uVar9,uVar20);
      }
      iVar16 = *piVar7;
      uStack_4 = 0xffffffff;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = operator_new(0xe);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = uVar9;
        puVar11[1] = iVar14;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar11;
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
LAB_0065b8c5:
        *(undefined4 **)(iVar16 + 4) = puVar11;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar11;
      }
    }
    break;
  case 6:
    piVar13 = (int *)(param_1 + 0x21e6e);
    *(int *)(param_1 + 0x13d36) = *piVar13;
    pvVar8 = operator_new(0x76);
    uStack_4 = 0x1c;
    if (pvVar8 == (void *)0x0) {
      iVar16 = 0;
    }
    else {
      iVar16 = FUN_006482d0();
    }
    uStack_4 = 0xffffffff;
    *piVar7 = iVar16;
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x1d;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar20 = 0;
      uVar10 = 1;
      uVar9 = FUN_0042b6c9(s_RCDM_ENTERPROVINCE_00866e54);
      uVar9 = FUN_00648170(9,uVar9,uVar10,uVar20);
    }
    iVar16 = *piVar7;
    uStack_4 = 0xffffffff;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    if (DAT_0087b630 != '\0') {
      puVar11 = operator_new(0x36);
      uStack_4 = 0x1e;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
        iVar16 = *piVar7;
        FUN_00433f00();
        *(undefined4 *)((int)puVar11 + 0x2e) = 5;
        *(int *)((int)puVar11 + 0x32) = iVar16;
        *puVar11 = &PTR_FUN_007f0a64;
        puVar11[2] = &PTR_LAB_007f0a60;
        *(undefined2 *)(puVar11 + 3) = uVar6;
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = puVar11;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar12;
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 **)(iVar16 + 4) = puVar12;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar12;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x1f;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(1,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_INDUSTRY_00866e40);
        uVar9 = FUN_00648170(0x11,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = operator_new(0xe);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = uVar9;
        puVar11[1] = iVar14;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar11;
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 **)(iVar16 + 4) = puVar11;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x20;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(2,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_COASTAL_00866e2c);
        uVar9 = FUN_00648170(0x12,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = operator_new(0xe);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = uVar9;
        puVar11[1] = iVar14;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar11;
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 **)(iVar16 + 4) = puVar11;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x21;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(3,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_LAND_00866e1c);
        uVar9 = FUN_00648170(0x13,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = operator_new(0xe);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = uVar9;
        puVar11[1] = iVar14;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar17 = *(int *)(iVar16 + 0xc);
      *(undefined4 **)(iVar16 + 8) = puVar11;
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 **)(iVar16 + 4) = puVar11;
      }
      else {
        *(undefined4 **)(iVar14 + 8) = puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x22;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(4,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_AA_00866e0c);
        uVar9 = FUN_00648170(0x14,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = (undefined4 *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar17 = *(int *)(iVar16 + 0xc);
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 *)(iVar16 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x23;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(5,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_INFRA_00866df8);
        uVar9 = FUN_00648170(0x15,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = (undefined4 *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar17 = *(int *)(iVar16 + 0xc);
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 *)(iVar16 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x24;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(6,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_AIR_BASE_00866de4);
        uVar9 = FUN_00648170(0x16,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = (undefined4 *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar17 = *(int *)(iVar16 + 0xc);
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 *)(iVar16 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x25;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(7,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_NAVAL_BASE_00866dcc);
        uVar9 = FUN_00648170(0x17,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = (undefined4 *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar17 = *(int *)(iVar16 + 0xc);
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 *)(iVar16 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x26;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(8,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_RADAR_STATION_00866db0);
        uVar9 = FUN_00648170(0x18,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = (undefined4 *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar17 = *(int *)(iVar16 + 0xc);
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 *)(iVar16 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x27;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(9,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_NUCLEAR_REACTOR_00866d94);
        uVar9 = FUN_00648170(0x19,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = (undefined4 *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar17 = *(int *)(iVar16 + 0xc);
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 *)(iVar16 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x28;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(10,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_ROCKET_TEST_00866d7c);
        uVar9 = FUN_00648170(0x1a,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar16 = *piVar7;
      iVar14 = *(int *)(iVar16 + 8);
      puVar11 = (undefined4 *)(iVar16 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar14;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar17 = *(int *)(iVar16 + 0xc);
      *(int *)(iVar16 + 0xc) = iVar17 + 1;
      if (iVar17 == 0) {
        *(undefined4 *)(iVar16 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
      if ((DAT_00dc1792 != '\0') &&
         (cVar5 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8b2) + 0x24))(*piVar13), cVar5 == '\0')) {
        puVar11 = operator_new(0x36);
        uStack_4 = 0x29;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
          iVar16 = *piVar7;
          FUN_00433f00();
          *(undefined4 *)((int)puVar11 + 0x2e) = 5;
          *(int *)((int)puVar11 + 0x32) = iVar16;
          *puVar11 = &PTR_FUN_007f0a64;
          puVar11[2] = &PTR_LAB_007f0a60;
          *(undefined2 *)(puVar11 + 3) = uVar6;
        }
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar12 = (undefined4 *)(iVar16 + 8);
        puVar15 = operator_new(0xe);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = puVar11;
          puVar15[1] = iVar14;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        *puVar12 = puVar15;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) {
          *(undefined4 *)(iVar16 + 4) = *puVar12;
        }
        else {
          *(undefined4 *)(iVar14 + 8) = *puVar12;
        }
        cVar5 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))(*piVar13);
        iVar16 = *(int *)(DAT_00ab27b4 + *piVar13 * 0x4b2);
        if (cVar5 == '\0') {
          uVar9 = (**(code **)(iVar16 + 0xc))();
          uVar10 = FUN_0042b6c9(s_RCDM_ADD_CLAIM_00866d24);
          FUN_007a630a(auStack_20c,uVar10,uVar9);
          pvVar8 = operator_new(0x254);
          uStack_4 = 0x2d;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_00648170(0x1f,auStack_20c,1,0);
          }
          uStack_4 = 0xffffffff;
          iVar16 = *piVar7;
          iVar14 = *(int *)(iVar16 + 8);
          puVar11 = (undefined4 *)(iVar16 + 8);
          puVar12 = operator_new(0xe);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            *puVar12 = uVar9;
            puVar12[1] = iVar14;
            puVar12[2] = 0;
            *(undefined1 *)(puVar12 + 3) = 0;
          }
          *puVar11 = puVar12;
          iVar17 = *(int *)(iVar16 + 0xc);
          *(int *)(iVar16 + 0xc) = iVar17 + 1;
          if (iVar17 == 0) {
            *(undefined4 *)(iVar16 + 4) = *puVar11;
          }
          else {
            *(undefined4 *)(iVar14 + 8) = *puVar11;
          }
          uVar9 = FUN_004c7bfa(*(undefined4 *)(DAT_00ab27b4 + 0x288 + *piVar13 * 0x4b2));
          uVar10 = FUN_0042b6c9(s_RCDM_ADD_CLAIM_AREA_00866d10);
          FUN_007a630a(auStack_20c,uVar10,uVar9);
          pvVar8 = operator_new(0x254);
          uStack_4 = 0x2e;
          if (pvVar8 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_00648170(0x21,auStack_20c,1,0);
          }
          uStack_4 = 0xffffffff;
          iVar16 = *piVar7;
          iVar14 = *(int *)(iVar16 + 8);
          puVar11 = (undefined4 *)(iVar16 + 8);
          puVar12 = operator_new(0xe);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            *puVar12 = uVar9;
            puVar12[1] = iVar14;
            puVar12[2] = 0;
            *(undefined1 *)(puVar12 + 3) = 0;
          }
          *puVar11 = puVar12;
          iVar17 = *(int *)(iVar16 + 0xc);
          *(int *)(iVar16 + 0xc) = iVar17 + 1;
          if (iVar17 == 0) {
            *(undefined4 *)(iVar16 + 4) = *puVar11;
          }
          else {
            *(undefined4 *)(iVar14 + 8) = *puVar11;
          }
          uVar9 = FUN_004c7c14(*(undefined4 *)(DAT_00ab27b4 + 0x28c + *piVar13 * 0x4b2));
          uVar10 = FUN_0042b6c9(s_RCDM_ADD_CLAIM_REGION_00866cf8);
          FUN_007a630a(auStack_20c,uVar10,uVar9);
          pvVar8 = operator_new(0x254);
          uStack_4 = 0x2f;
          if (pvVar8 == (void *)0x0) goto LAB_0065a573;
          uVar9 = FUN_00648170(0x23,auStack_20c,1,0);
        }
        else {
          uVar9 = (**(code **)(iVar16 + 0xc))();
          uVar10 = FUN_0042b6c9(s_RCDM_REMOVE_CLAIM_00866d68);
          FUN_007a630a(auStack_20c,uVar10,uVar9);
          pvVar8 = operator_new(0x254);
          uStack_4 = 0x2a;
          if (pvVar8 == (void *)0x0) {
            uStack_218 = 0;
          }
          else {
            uStack_218 = FUN_00648170(0x20,auStack_20c,1,0);
          }
          uStack_4 = 0xffffffff;
          iVar16 = *piVar7;
          iVar14 = *(int *)(iVar16 + 8);
          puVar11 = (undefined4 *)(iVar16 + 8);
          puVar12 = operator_new(0xe);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            *puVar12 = uStack_218;
            puVar12[1] = iVar14;
            puVar12[2] = 0;
            *(undefined1 *)(puVar12 + 3) = 0;
          }
          *puVar11 = puVar12;
          iVar17 = *(int *)(iVar16 + 0xc);
          *(int *)(iVar16 + 0xc) = iVar17 + 1;
          if (iVar17 == 0) {
            *(undefined4 *)(iVar16 + 4) = *puVar11;
          }
          else {
            *(undefined4 *)(iVar14 + 8) = *puVar11;
          }
          uVar9 = FUN_004c7bfa(*(undefined4 *)(DAT_00ab27b4 + 0x288 + *piVar13 * 0x4b2));
          uVar10 = FUN_0042b6c9(s_RCDM_REMOVE_CLAIM_AREA_00866d50);
          FUN_007a630a(auStack_20c,uVar10,uVar9);
          pvVar8 = operator_new(0x254);
          uStack_4 = 0x2b;
          if (pvVar8 == (void *)0x0) {
            uStack_218 = 0;
          }
          else {
            uStack_218 = FUN_00648170(0x22,auStack_20c,1,0);
          }
          uStack_4 = 0xffffffff;
          iVar16 = *piVar7;
          iVar14 = *(int *)(iVar16 + 8);
          puVar11 = (undefined4 *)(iVar16 + 8);
          puVar12 = operator_new(0xe);
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            *puVar12 = uStack_218;
            puVar12[1] = iVar14;
            puVar12[2] = 0;
            *(undefined1 *)(puVar12 + 3) = 0;
          }
          *puVar11 = puVar12;
          iVar17 = *(int *)(iVar16 + 0xc);
          *(int *)(iVar16 + 0xc) = iVar17 + 1;
          if (iVar17 == 0) {
            *(undefined4 *)(iVar16 + 4) = *puVar11;
          }
          else {
            *(undefined4 *)(iVar14 + 8) = *puVar11;
          }
          uVar9 = FUN_004c7c14(*(undefined4 *)(DAT_00ab27b4 + 0x28c + *piVar13 * 0x4b2));
          uVar10 = FUN_0042b6c9(s_RCDM_REMOVE_CLAIM_REGION_00866d34);
          FUN_007a630a(auStack_20c,uVar10,uVar9);
          pvVar8 = operator_new(0x254);
          uStack_4 = 0x2c;
          if (pvVar8 == (void *)0x0) {
LAB_0065a573:
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_00648170(0x24,auStack_20c,1,0);
          }
        }
LAB_0065a575:
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar11 = (undefined4 *)(iVar16 + 8);
        puVar12 = operator_new(0xe);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          *puVar12 = uVar9;
          puVar12[1] = iVar14;
          puVar12[2] = 0;
          *(undefined1 *)(puVar12 + 3) = 0;
        }
        *puVar11 = puVar12;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) {
LAB_0065b8c3:
          puVar11 = (undefined4 *)*puVar11;
          goto LAB_0065b8c5;
        }
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
    }
    break;
  case 8:
    piVar13 = (int *)(param_1 + 0x21e6e);
    *(undefined4 *)(param_1 + 0x13d36) = *(undefined4 *)(param_1 + 0x21e6e);
    pvVar8 = operator_new(0x76);
    uStack_4 = 0x30;
    if (pvVar8 == (void *)0x0) {
      iVar16 = 0;
    }
    else {
      iVar16 = FUN_006482d0();
    }
    iVar14 = *(int *)(param_1 + 6);
    *piVar7 = iVar16;
    uStack_4 = 0xffffffff;
    iVar16 = *(int *)(*(int *)(DAT_00ab27b4 + 0x3d8 + *piVar13 * 0x4b2) + 6);
    if (iVar14 == iVar16) {
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x31;
      if (pvVar8 == (void *)0x0) {
        uStack_218 = 0;
      }
      else {
        uVar20 = 0;
        uVar10 = 1;
        uVar9 = FUN_0042b6c9(s_RCDM_ENTERPROVINCE_00866e54);
        uStack_218 = FUN_00648170(9,uVar9,uVar10,uVar20);
      }
      iVar17 = *piVar7;
      uStack_4 = 0xffffffff;
      iVar1 = *(int *)(iVar17 + 8);
      puVar11 = (undefined4 *)(iVar17 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uStack_218;
        puVar12[1] = iVar1;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar2 = *(int *)(iVar17 + 0xc);
      *(int *)(iVar17 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar17 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *puVar11;
      }
    }
    else {
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x32;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar10 = 1;
        uVar9 = FUN_0042b6c9(s_RCDM_VIEWPROVINCE_00866ce4);
        uVar9 = FUN_00648170(10,uVar9,uVar10,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar17 = *piVar7;
      iVar1 = *(int *)(iVar17 + 8);
      puVar11 = (undefined4 *)(iVar17 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar1;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar2 = *(int *)(iVar17 + 0xc);
      *(int *)(iVar17 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar17 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *puVar11;
      }
    }
    if (DAT_0087b631 != '\0') {
      puVar11 = operator_new(0x36);
      uStack_4 = 0x33;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
        iVar17 = *piVar7;
        FUN_00433f00();
        *(undefined4 *)((int)puVar11 + 0x2e) = 5;
        *(int *)((int)puVar11 + 0x32) = iVar17;
        *puVar11 = &PTR_FUN_007f0a64;
        puVar11[2] = &PTR_LAB_007f0a60;
        *(undefined2 *)(puVar11 + 3) = uVar6;
      }
      uStack_4 = 0xffffffff;
      iVar17 = *piVar7;
      iVar1 = *(int *)(iVar17 + 8);
      puVar12 = (undefined4 *)(iVar17 + 8);
      puVar15 = operator_new(0xe);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        *puVar15 = puVar11;
        puVar15[1] = iVar1;
        puVar15[2] = 0;
        *(undefined1 *)(puVar15 + 3) = 0;
      }
      *puVar12 = puVar15;
      iVar2 = *(int *)(iVar17 + 0xc);
      *(int *)(iVar17 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar17 + 4) = *puVar12;
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *puVar12;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x34;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar10 = 1;
        uVar9 = FUN_0042b6c9(s_RCDM_DIPLO_00866cd8);
        uVar9 = FUN_00648170(0xb,uVar9,uVar10,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar17 = *piVar7;
      iVar1 = *(int *)(iVar17 + 8);
      puVar11 = (undefined4 *)(iVar17 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar1;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar2 = *(int *)(iVar17 + 0xc);
      *(int *)(iVar17 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar17 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x35;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar10 = 1;
        uVar9 = FUN_0042b6c9(s_RCDM_INTELLIGENCE_00866cc4);
        uVar9 = FUN_00648170(0x1e,uVar9,uVar10,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar17 = *piVar7;
      iVar1 = *(int *)(iVar17 + 8);
      puVar11 = (undefined4 *)(iVar17 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar1;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar2 = *(int *)(iVar17 + 0xc);
      *(int *)(iVar17 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar17 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *puVar11;
      }
    }
    if (iVar14 == iVar16) {
      puVar11 = operator_new(0x36);
      uStack_4 = 0x36;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
        iVar14 = *piVar7;
        FUN_00433f00();
        *(undefined4 *)((int)puVar11 + 0x2e) = 5;
        *(int *)((int)puVar11 + 0x32) = iVar14;
        *puVar11 = &PTR_FUN_007f0a64;
        puVar11[2] = &PTR_LAB_007f0a60;
        *(undefined2 *)(puVar11 + 3) = uVar6;
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar12 = (undefined4 *)(iVar14 + 8);
      puVar15 = operator_new(0xe);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        *puVar15 = puVar11;
        puVar15[1] = iVar17;
        puVar15[2] = 0;
        *(undefined1 *)(puVar15 + 3) = 0;
      }
      *puVar12 = puVar15;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar12;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar12;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x37;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(1,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_INDUSTRY_00866e40);
        uVar9 = FUN_00648170(0x11,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x38;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(2,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_COASTAL_00866e2c);
        uVar9 = FUN_00648170(0x12,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x39;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(3,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_LAND_00866e1c);
        uVar9 = FUN_00648170(0x13,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x3a;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(4,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_AA_00866e0c);
        uVar9 = FUN_00648170(0x14,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x3b;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(5,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_INFRA_00866df8);
        uVar9 = FUN_00648170(0x15,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x3c;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(6,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_AIR_BASE_00866de4);
        uVar9 = FUN_00648170(0x16,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x3d;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(7,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_NAVAL_BASE_00866dcc);
        uVar9 = FUN_00648170(0x17,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x3e;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(8,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_RADAR_STATION_00866db0);
        uVar9 = FUN_00648170(0x18,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
      pvVar8 = operator_new(0x254);
      uStack_4 = 0x3f;
      if (pvVar8 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar20 = 0;
        uVar9 = FUN_0049f030(10,*piVar13);
        uVar10 = FUN_0042b6c9(s_RCDM_BUILD_ROCKET_TEST_00866d7c);
        uVar9 = FUN_00648170(0x1a,uVar10,uVar9,uVar20);
      }
      uStack_4 = 0xffffffff;
      iVar14 = *piVar7;
      iVar17 = *(int *)(iVar14 + 8);
      puVar11 = (undefined4 *)(iVar14 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar9;
        puVar12[1] = iVar17;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      *puVar11 = puVar12;
      iVar1 = *(int *)(iVar14 + 0xc);
      *(int *)(iVar14 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 *)(iVar14 + 4) = *puVar11;
      }
      else {
        *(undefined4 *)(iVar17 + 8) = *puVar11;
      }
    }
    if ((DAT_00dc1792 != '\0') &&
       (cVar5 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8b2) + 0x24))(*piVar13), cVar5 == '\0')) {
      cVar5 = (**(code **)(*(int *)(DAT_00d0ca90 + 0xe8c4) + 0x24))(*piVar13);
      if (cVar5 != '\0') {
        puVar11 = operator_new(0x36);
        uStack_4 = 0x40;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
          iVar16 = *piVar7;
          FUN_00433f00();
          *(undefined4 *)((int)puVar11 + 0x2e) = 5;
          *(int *)((int)puVar11 + 0x32) = iVar16;
          *puVar11 = &PTR_FUN_007f0a64;
          puVar11[2] = &PTR_LAB_007f0a60;
          *(undefined2 *)(puVar11 + 3) = uVar6;
        }
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar12 = (undefined4 *)(iVar16 + 8);
        puVar15 = operator_new(0xe);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = puVar11;
          puVar15[1] = iVar14;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        *puVar12 = puVar15;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) {
          *(undefined4 *)(iVar16 + 4) = *puVar12;
        }
        else {
          *(undefined4 *)(iVar14 + 8) = *puVar12;
        }
        uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + *piVar13 * 0x4b2) + 0xc))();
        uVar10 = FUN_0042b6c9(s_RCDM_REMOVE_CLAIM_00866d68);
        FUN_007a630a(auStack_10c,uVar10,uVar9);
        pvVar8 = operator_new(0x254);
        uStack_4 = 0x41;
        if (pvVar8 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_00648170(0x20,auStack_10c,1,0);
        }
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar11 = (undefined4 *)(iVar16 + 8);
        puVar12 = operator_new(0xe);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          *puVar12 = uVar9;
          puVar12[1] = iVar14;
          puVar12[2] = 0;
          *(undefined1 *)(puVar12 + 3) = 0;
        }
        *puVar11 = puVar12;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) {
          *(undefined4 *)(iVar16 + 4) = *puVar11;
        }
        else {
          *(undefined4 *)(iVar14 + 8) = *puVar11;
        }
        uVar9 = FUN_004c7bfa(*(undefined4 *)(DAT_00ab27b4 + 0x288 + *piVar13 * 0x4b2));
        uVar10 = FUN_0042b6c9(s_RCDM_REMOVE_CLAIM_AREA_00866d50);
        FUN_007a630a(auStack_10c,uVar10,uVar9);
        pvVar8 = operator_new(0x254);
        uStack_4 = 0x42;
        if (pvVar8 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_00648170(0x22,auStack_10c,1,0);
        }
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar11 = (undefined4 *)(iVar16 + 8);
        puVar12 = operator_new(0xe);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          *puVar12 = uVar9;
          puVar12[1] = iVar14;
          puVar12[2] = 0;
          *(undefined1 *)(puVar12 + 3) = 0;
        }
        *puVar11 = puVar12;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) {
          *(undefined4 *)(iVar16 + 4) = *puVar11;
        }
        else {
          *(undefined4 *)(iVar14 + 8) = *puVar11;
        }
        uVar9 = FUN_004c7c14(*(undefined4 *)(DAT_00ab27b4 + 0x28c + *piVar13 * 0x4b2));
        uVar10 = FUN_0042b6c9(s_RCDM_REMOVE_CLAIM_REGION_00866d34);
        FUN_007a630a(auStack_10c,uVar10,uVar9);
        pvVar8 = operator_new(0x254);
        uStack_4 = 0x43;
        if (pvVar8 == (void *)0x0) goto LAB_0065a573;
        uVar9 = FUN_00648170(0x24,auStack_10c,1,0);
        goto LAB_0065a575;
      }
      cVar5 = FUN_004a75d0(iVar16);
      if (cVar5 != '\0') {
        puVar11 = operator_new(0x36);
        uStack_4 = 0x44;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          uVar6 = FUN_00584270(0xd0,0xe8,0xf8);
          iVar16 = *piVar7;
          FUN_00433f00();
          *(undefined4 *)((int)puVar11 + 0x2e) = 5;
          *(int *)((int)puVar11 + 0x32) = iVar16;
          *puVar11 = &PTR_FUN_007f0a64;
          puVar11[2] = &PTR_LAB_007f0a60;
          *(undefined2 *)(puVar11 + 3) = uVar6;
        }
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar12 = (undefined4 *)(iVar16 + 8);
        puVar15 = operator_new(0xe);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          *puVar15 = puVar11;
          puVar15[1] = iVar14;
          puVar15[2] = 0;
          *(undefined1 *)(puVar15 + 3) = 0;
        }
        *puVar12 = puVar15;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) {
          *(undefined4 *)(iVar16 + 4) = *puVar12;
        }
        else {
          *(undefined4 *)(iVar14 + 8) = *puVar12;
        }
        uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + *piVar13 * 0x4b2) + 0xc))();
        uVar10 = FUN_0042b6c9(s_RCDM_ADD_CLAIM_00866d24);
        FUN_007a630a(auStack_10c,uVar10,uVar9);
        pvVar8 = operator_new(0x254);
        uStack_4 = 0x45;
        if (pvVar8 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_00648170(0x1f,auStack_10c,1,0);
        }
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar11 = (undefined4 *)(iVar16 + 8);
        puVar12 = operator_new(0xe);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          *puVar12 = uVar9;
          puVar12[1] = iVar14;
          puVar12[2] = 0;
          *(undefined1 *)(puVar12 + 3) = 0;
        }
        *puVar11 = puVar12;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) {
          *(undefined4 *)(iVar16 + 4) = *puVar11;
        }
        else {
          *(undefined4 *)(iVar14 + 8) = *puVar11;
        }
        uVar9 = FUN_004c7bfa(*(undefined4 *)(DAT_00ab27b4 + 0x288 + *piVar13 * 0x4b2));
        uVar10 = FUN_0042b6c9(s_RCDM_ADD_CLAIM_AREA_00866d10);
        FUN_007a630a(auStack_10c,uVar10,uVar9);
        pvVar8 = operator_new(0x254);
        uStack_4 = 0x46;
        if (pvVar8 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_00648170(0x21,auStack_10c,1,0);
        }
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar11 = (undefined4 *)(iVar16 + 8);
        puVar12 = operator_new(0xe);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          *puVar12 = uVar9;
          puVar12[1] = iVar14;
          puVar12[2] = 0;
          *(undefined1 *)(puVar12 + 3) = 0;
        }
        *puVar11 = puVar12;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) {
          *(undefined4 *)(iVar16 + 4) = *puVar11;
        }
        else {
          *(undefined4 *)(iVar14 + 8) = *puVar11;
        }
        uVar9 = FUN_004c7c14(*(undefined4 *)(DAT_00ab27b4 + 0x28c + *piVar13 * 0x4b2));
        uVar10 = FUN_0042b6c9(s_RCDM_ADD_CLAIM_REGION_00866cf8);
        FUN_007a630a(auStack_10c,uVar10,uVar9);
        pvVar8 = operator_new(0x254);
        uStack_4 = 0x47;
        if (pvVar8 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_00648170(0x23,auStack_10c,1,0);
        }
        uStack_4 = 0xffffffff;
        iVar16 = *piVar7;
        iVar14 = *(int *)(iVar16 + 8);
        puVar11 = (undefined4 *)(iVar16 + 8);
        puVar12 = operator_new(0xe);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          *puVar12 = uVar9;
          puVar12[1] = iVar14;
          puVar12[2] = 0;
          *(undefined1 *)(puVar12 + 3) = 0;
        }
        *puVar11 = puVar12;
        iVar17 = *(int *)(iVar16 + 0xc);
        *(int *)(iVar16 + 0xc) = iVar17 + 1;
        if (iVar17 == 0) goto LAB_0065b8c3;
        *(undefined4 *)(iVar14 + 8) = *puVar11;
      }
    }
  }
  piStack_22c = (int *)(param_1 + 0x13d40);
  iVar16 = *piStack_22c;
joined_r0x0065b8d0:
  if (iVar16 == 0) {
    ExceptionList = local_c;
    return;
  }
LAB_0065b8d2:
  FUN_006483f0();
  ExceptionList = local_c;
  return;
switchD_00658f6a_caseD_0:
  if (*(undefined4 **)(param_1 + 0x13d40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x13d40))(1);
  }
  *(undefined4 *)(param_1 + 0x13d40) = 0;
  cVar5 = FUN_004e2240(*param_2,param_2[1]);
  if (cVar5 != '\0') {
    pvVar8 = operator_new(0x76);
    uStack_4 = 0xf;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_006482d0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x13d40) = uVar9;
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x10;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar20 = 0;
      uVar10 = 1;
      uVar9 = FUN_0042b6c9(s_RCDM_LOCATEARMIES_00866ee4);
      uVar9 = FUN_00648170(0,uVar9,uVar10,uVar20);
    }
    iVar16 = *(int *)(param_1 + 0x13d40);
    uStack_4 = 0xffffffff;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x11;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar20 = 0;
      uVar10 = 1;
      uVar9 = FUN_0042b6c9(s_RCDM_LOCATENAVIES_00866ed0);
      uVar9 = FUN_00648170(1,uVar9,uVar10,uVar20);
    }
    iVar16 = *(int *)(param_1 + 0x13d40);
    uStack_4 = 0xffffffff;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
    pvVar8 = operator_new(0x254);
    uStack_4 = 0x12;
    if (pvVar8 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar20 = 0;
      uVar10 = 1;
      uVar9 = FUN_0042b6c9(s_RCDM_LOCATEAIRS_00866ec0);
      uVar9 = FUN_00648170(2,uVar9,uVar10,uVar20);
    }
    iVar16 = *(int *)(param_1 + 0x13d40);
    uStack_4 = 0xffffffff;
    iVar14 = *(int *)(iVar16 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar14;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar17 = *(int *)(iVar16 + 0xc);
    *(undefined4 **)(iVar16 + 8) = puVar11;
    *(int *)(iVar16 + 0xc) = iVar17 + 1;
    if (iVar17 == 0) {
      *(undefined4 **)(iVar16 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar14 + 8) = puVar11;
    }
  }
  iVar16 = *(int *)(param_1 + 0x13d40);
  goto joined_r0x0065b8d0;
}


