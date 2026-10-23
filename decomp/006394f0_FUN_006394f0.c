// FUN_006394f0 @ 6394f0 size=1064

undefined4 * __thiscall
FUN_006394f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  int unaff_retaddr;
  undefined4 uVar16;
  char local_20c [256];
  char local_10c [252];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1e14;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  *(undefined ***)((int)param_1 + 0x46) = &PTR_LAB_007ef278;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)param_1 + 0x62) = param_3;
  *(undefined1 *)((int)param_1 + 0x66) = 1;
  *param_1 = &PTR_FUN_007efa24;
  param_1[2] = &PTR_LAB_007efa20;
  pvVar5 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00414c80(s_gfx_interface_tech_team_noimage__0085ed58);
  }
  *(undefined4 *)((int)param_1 + 0x3a) = uVar6;
  *(undefined1 *)(param_1 + 0xe) = 0;
  local_4._0_1_ = 1;
  uVar4 = (undefined1)local_4;
  local_4._0_1_ = 1;
  if (DAT_00dc1780 == '\0') {
    local_4._0_1_ = uVar4;
    pvVar5 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (pvVar5 == (void *)0x0) goto LAB_006395f0;
    uVar6 = FUN_00414c80(s_gfx_interface_team_select_bmp_00861348);
  }
  else {
    pvVar5 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar5 == (void *)0x0) {
LAB_006395f0:
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00414c80(s_gfx_interface_team_select_big_bm_00861368);
    }
  }
  param_1[0xd] = uVar6;
  local_4._0_1_ = 1;
  param_1[0x17] = param_4;
  if (param_2 != 0) {
    *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(param_2 + 0xc);
    *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x10);
    FUN_007a630a(local_10c,s_gfx_interface_pics__s_bmp_0085d184,param_2 + 0x87);
    if (DAT_00dc3a00 == '\0') {
      uVar12 = 0xffffffff;
      pcVar14 = local_10c;
      do {
        pcVar15 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar15 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar15;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar14 = pcVar15 + -uVar12;
      pcVar15 = local_20c;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar15 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
    else {
      FUN_007a630a(local_20c,s__s__s_0083a350,&DAT_00dc3a00,local_10c);
    }
    iVar7 = FUN_007a6615(local_20c,&DAT_0082eeb4);
    if (iVar7 == 0) {
      uVar12 = 0xffffffff;
      pcVar14 = local_10c;
      do {
        pcVar15 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar15 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar15;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar14 = pcVar15 + -uVar12;
      pcVar15 = local_20c;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar15 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar15 = pcVar15 + 1;
      }
      iVar7 = FUN_007a6615(local_20c,&DAT_0082eeb4);
      if (iVar7 == 0) goto LAB_00639716;
    }
    FUN_007a6429(iVar7);
    (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x2c))(local_10c);
    uVar6 = FUN_00413d60(s_leader_minister_palette_bmp_0085ed3c);
    FUN_00415f20(uVar6);
  }
LAB_00639716:
  pvVar5 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00433570(s_gfx_interface_tech_team_noteam_b_00861324,0,0xffffffff);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x3e) = uVar6;
  pvVar5 = operator_new(0x1aa);
  local_4._0_1_ = 6;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar16 = 0;
    uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar8 = FUN_0042b6c9(s_REPLACETEAM_00861318);
    uVar6 = FUN_0043acc0(uVar8,uVar6,uVar16);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x42) = uVar6;
  *(undefined4 *)((int)param_1 + 0x62) = param_3;
  pvVar5 = operator_new(0x7e);
  local_4._0_1_ = 7;
  if (pvVar5 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_00414c80(s_gfx_interface_dollar_bmp_008612fc);
  }
  param_1[0x16] = piVar9;
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*piVar9 + 0x34))(2);
  *(undefined1 *)(param_1[0x16] + 0x68) = 1;
  if (unaff_retaddr != 0) {
    iVar7 = 0;
    do {
      if (*(char *)(unaff_retaddr + 0x1a + iVar7) != '\0') {
        puVar10 = operator_new(0x84);
        puStack_8._0_1_ = 8;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          FUN_00414c80(s_gfx_interface_tc_icons_bmp_008612e0);
          puStack_8._0_1_ = 9;
          *puVar10 = &PTR_FUN_007ef9d0;
          puVar10[2] = &PTR_LAB_007ef9cc;
          FUN_00415b90(0x6d);
          FUN_00415b50(iVar7);
          *(undefined1 *)((int)puVar10 + 0x82) = 1;
          pvVar5 = operator_new(0x7e);
          puStack_8._0_1_ = 10;
          if (pvVar5 == (void *)0x0) {
            *(undefined4 *)((int)puVar10 + 0x7e) = 0;
          }
          else {
            uVar6 = FUN_00414c80(s_gfx_interface_tc_icon_overlay_bm_008612bc);
            *(undefined4 *)((int)puVar10 + 0x7e) = uVar6;
          }
        }
        iVar2 = *(int *)((int)param_1 + 0x4e);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        puVar11 = operator_new(0xe);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = puVar10;
          puVar11[1] = iVar2;
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        iVar3 = *(int *)((int)param_1 + 0x52);
        *(undefined4 **)((int)param_1 + 0x4e) = puVar11;
        *(int *)((int)param_1 + 0x52) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)((int)param_1 + 0x4a) = puVar11;
        }
        else {
          *(undefined4 **)(iVar2 + 8) = puVar11;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x6d);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


