// FUN_006e83e0 @ 6e83e0 size=1780

void __thiscall FUN_006e83e0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  void *pvVar13;
  int unaff_EBX;
  int *piVar14;
  int unaff_EBP;
  int unaff_ESI;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80 [9];
  undefined4 uStack_5c;
  void *pvStack_38;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da194;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_00415bd0();
  FUN_00415be0();
  uVar2 = FUN_004136a0();
  pvVar3 = operator_new(0x1aa);
  uVar4 = 0;
  local_4 = 0;
  if (pvVar3 != (void *)0x0) {
    uVar4 = uVar2;
    uVar5 = FUN_0042b6c9(s_CANCEL_0083bafc);
    uVar4 = FUN_0043acc0(uVar5,uVar4);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = uVar4;
  pvVar3 = operator_new(0x1aa);
  local_4 = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar2;
    uVar5 = FUN_0042b6c9(&DAT_00839384);
    uVar4 = FUN_0043acc0(uVar5,uVar4);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = uVar4;
  pvVar3 = operator_new(0x1aa);
  local_4 = 2;
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_0042b6c9(s_DEFAULT_0086d558);
    uVar2 = FUN_0043acc0(uVar4,uVar2);
  }
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  piVar9 = local_80;
  local_4 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x28))();
  iVar6 = FUN_00415be0();
  iVar6 = iVar6 + -0x30;
  iVar7 = FUN_00415bd0();
  iVar10 = **(int **)(param_1 + 0x26);
  iVar15 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
  iVar7 = FUN_00415bd0(local_80[0] + iVar6);
  (**(code **)(iVar10 + 0x18))((iStack_84 - iVar7 / 2) + iVar15);
  iVar10 = **(int **)(param_1 + 0x2a);
  iVar7 = FUN_00415bd0(iStack_88 + iVar6);
  (**(code **)(iVar10 + 0x18))((iVar15 * 2 - iVar7 / 2) + iStack_8c);
  iVar10 = **(int **)(param_1 + 0x22);
  iVar6 = FUN_00415bd0((int)pvVar3 + iVar6);
  (**(code **)(iVar10 + 0x18))((iVar15 * 3 - iVar6 / 2) + unaff_EBX);
  *(undefined4 *)(*(int *)(param_1 + 0x22) + 0x88) = 0xd;
  *(undefined4 *)(*(int *)(param_1 + 0x26) + 0x88) = 0xe;
  *(undefined4 *)(*(int *)(param_1 + 0x2a) + 0x88) = 100;
  puVar8 = operator_new(0x18);
  uStack_20 = 3;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = DAT_00bd1bac;
    *puVar8 = &PTR_LAB_007e474c;
    piVar9 = operator_new(0x1e);
    if (piVar9 == (int *)0x0) {
      puVar8[1] = 0;
    }
    else {
      piVar9[1] = 0;
      piVar9[2] = 0;
      piVar9[3] = 0;
      *(undefined1 *)(piVar9 + 4) = 0;
      *piVar9 = (int)&PTR_LAB_007e36b4;
      uStack_20._0_1_ = 5;
      piVar11 = piVar9;
      FUN_00425a80(&DAT_0082eeb0);
      puVar22 = (undefined4 *)((int)piVar9 + 0x1a);
      uStack_20 = CONCAT31(uStack_20._1_3_,6);
      FUN_00583720();
      *(undefined ***)((int)piVar9 + 0x12) = &PTR_FUN_007e3858;
      *puVar22 = &PTR_LAB_007e386c;
      *piVar9 = (int)&PTR_FUN_007e36fc;
      *(undefined ***)((int)piVar9 + 0x12) = &PTR_LAB_007e36e8;
      *(undefined ***)((int)piVar9 + 0x1a) = &PTR_LAB_007e36e4;
      puVar8[1] = piVar9;
      piVar9 = piVar11;
    }
  }
  uStack_20 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x18) = puVar8;
  iVar10 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,1,0);
  *(int *)(param_1 + 0x32) = iVar10;
  *(int *)(iVar10 + 0xaa) = unaff_ESI + 0x1e;
  *(int *)(iVar10 + 0xae) = unaff_EBP + 0x151;
  *(undefined1 *)(*(int *)(param_1 + 0x32) + 0x68) = 1;
  iVar10 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,2,0);
  *(int *)(param_1 + 0x36) = iVar10;
  *(int *)(iVar10 + 0xaa) = unaff_ESI + 0x1e;
  *(int *)(iVar10 + 0xae) = unaff_EBP + 0x162;
  *(undefined1 *)(*(int *)(param_1 + 0x36) + 0x68) = 1;
  iVar10 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,3,0);
  *(int *)(param_1 + 0x3a) = iVar10;
  *(int *)(iVar10 + 0xaa) = unaff_ESI + 0x1e;
  *(int *)(iVar10 + 0xae) = unaff_EBP + 0x173;
  *(undefined1 *)(*(int *)(param_1 + 0x3a) + 0x68) = 1;
  iVar10 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,4,0);
  *(int *)(param_1 + 0x3e) = iVar10;
  *(int *)(iVar10 + 0xaa) = unaff_ESI + 0x1e;
  *(int *)(iVar10 + 0xae) = unaff_EBP + 0x184;
  *(undefined1 *)(*(int *)(param_1 + 0x3e) + 0x68) = 1;
  pvVar3 = operator_new(0x72);
  uStack_20 = 7;
  if (pvVar3 == (void *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)FUN_00434930(0xfe,0xfe,0,0);
  }
  *(int **)(param_1 + 0x14) = piVar11;
  uStack_20 = 0xffffffff;
  (**(code **)(*piVar11 + 0x34))(unaff_ESI + 0x30,unaff_EBP + 0x3c);
  FUN_004353f0(8);
  puVar12 = &DAT_00d3635d;
  do {
    *puVar12 = puVar12[-2];
    puVar12[-1] = puVar12[-3];
    puVar12[3] = puVar12[2];
    puVar12 = puVar12 + 0x1a;
  } while ((int)puVar12 < 0xd37cdb);
  pvVar13 = operator_new(0x7e);
  uStack_28 = 8;
  if (pvVar13 == (void *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)FUN_00414c80(s_gfx_settings_bg_settings_listbox_0086f1cc);
  }
  *(int **)(param_1 + 0x2e) = piVar11;
  uStack_28 = 0xffffffff;
  (**(code **)(*piVar11 + 0x18))((int)piVar9 + 0x1e,(int)pvVar3 + 0x32);
  if (DAT_0086d5cc != 2) {
    piVar9 = &DAT_0086d5cc;
    piVar11 = (int *)&DAT_0086d5c8;
    do {
      piVar14 = (int *)0x0;
      if (*piVar9 == 0) {
        iVar10 = *piVar11;
        pcVar16 = s_gfx_settings_msg_setting_pause_b_0086f1a8;
        puVar8 = &uStack_5c;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = *(undefined2 *)pcVar16;
        *(char *)((int)puVar8 + 2) = pcVar16[2];
        pcVar16 = s_gfx_settings_msg_setting_box_bmp_0086f184;
        pcVar17 = &stack0xffffff5c;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar17 = pcVar17 + 4;
        }
        *pcVar17 = *pcVar16;
        piVar9 = (int *)s_gfx_settings_msg_setting_log_bmp_0086f160;
        piVar18 = local_80;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar18 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar18 = piVar18 + 1;
        }
        *(char *)piVar18 = (char)*piVar9;
        iVar10 = iVar10 * 0x1a;
        if ((&DAT_00d3635b)[iVar10] == '\x01') {
          if ((&DAT_00d3635f)[iVar10] == '\0') {
            piVar14 = (int *)&stack0xffffff5c;
            if ((&DAT_00d3635a)[iVar10] == '\0') {
              piVar14 = local_80;
            }
          }
          else {
            piVar14 = &uStack_5c;
          }
        }
        FUN_007a630a(&DAT_00d37cd0,s__s_SETUP_0086d54c,*(undefined4 *)(&DAT_00d36362 + iVar10));
        uVar2 = FUN_0042b6c9(&DAT_00d37cd0);
        pvVar3 = operator_new(0x56);
        uStack_30 = 9;
        if (pvVar3 == (void *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar11;
          uVar5 = 0xf2;
          uVar4 = FUN_004136a0(piVar11[3]);
          iVar10 = FUN_006da890(uVar4,uVar2,piVar14,uVar5,iVar10);
        }
        uStack_30 = 0xffffffff;
        uVar1 = FUN_00584270(0xff,0xff,0);
        *(undefined2 *)(iVar10 + 0x1e) = uVar1;
        if (iVar10 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = iVar10 + 0x12;
        }
        iVar6 = *(int *)(param_1 + 0x14);
        iVar7 = *(int *)(iVar6 + 8);
        piVar9 = operator_new(0xe);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          *piVar9 = iVar10;
          piVar9[1] = iVar7;
          piVar9[2] = 0;
          *(undefined1 *)(piVar9 + 3) = 0;
        }
        iVar10 = *(int *)(iVar6 + 0xc);
        *(int **)(iVar6 + 8) = piVar9;
        *(int *)(iVar6 + 0xc) = iVar10 + 1;
        if (iVar10 == 0) {
LAB_006e8a8d:
          *(int **)(iVar6 + 4) = piVar9;
        }
        else {
          *(int **)(iVar7 + 8) = piVar9;
        }
      }
      else if (*piVar9 == 1) {
        pvVar3 = operator_new(0x23e);
        uStack_30 = 10;
        if (pvVar3 == (void *)0x0) {
          iVar10 = 0;
        }
        else {
          uVar21 = 1;
          uVar20 = 0;
          uVar2 = FUN_00584270(0xff,0xff,0xff);
          uVar19 = 0xfa;
          piVar9 = piVar11;
          uVar4 = FUN_0042b6c9(piVar11[2]);
          uVar5 = FUN_004136a0(piVar11[3]);
          iVar10 = FUN_00433f90(uVar5,uVar4,uVar19,uVar2,uVar20,uVar21);
          piVar11 = piVar9;
        }
        iVar6 = *(int *)(param_1 + 0x14);
        uStack_30 = 0xffffffff;
        iVar7 = *(int *)(iVar6 + 8);
        piVar9 = operator_new(0xe);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          *piVar9 = iVar10;
          piVar9[1] = iVar7;
          piVar9[2] = 0;
          *(undefined1 *)(piVar9 + 3) = 0;
        }
        iVar10 = *(int *)(iVar6 + 0xc);
        *(int **)(iVar6 + 8) = piVar9;
        *(int *)(iVar6 + 0xc) = iVar10 + 1;
        if (iVar10 == 0) goto LAB_006e8a8d;
        *(int **)(iVar7 + 8) = piVar9;
      }
      piVar14 = piVar11 + 5;
      piVar9 = piVar11 + 5;
      piVar11 = piVar11 + 4;
    } while (*piVar14 != 2);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = pvStack_38;
  return;
}


