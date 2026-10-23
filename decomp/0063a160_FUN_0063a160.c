// FUN_0063a160 @ 63a160 size=751

undefined4 * __thiscall FUN_0063a160(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int local_21c;
  char local_20c [256];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1ebe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  *(undefined ***)((int)param_1 + 0x2e) = &PTR_LAB_007ef278;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x46) = 0;
  param_1[0x12] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_007efa74;
  param_1[2] = &PTR_LAB_007efa70;
  if (param_3 != 0) {
    *(undefined4 *)((int)param_1 + 0x46) = *(undefined4 *)(param_3 + 0xc);
    *(undefined2 *)((int)param_1 + 0x4a) = *(undefined2 *)(param_3 + 0x10);
  }
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_tech_team_noimage__0085ed58);
  }
  param_1[0x13] = uVar4;
  param_1[0x14] = param_4;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_2 == 0) goto LAB_0063a42a;
  param_1[0x10] = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x10);
  FUN_007a630a(local_10c,s_gfx_interface_pics__s_bmp_0085d184,param_2 + 0x87);
  if (DAT_00dc3a00 == '\0') {
    uVar8 = 0xffffffff;
    pcVar10 = local_10c;
    do {
      pcVar11 = pcVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar10 = pcVar11 + -uVar8;
    pcVar11 = local_20c;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    FUN_007a630a(local_20c,s__s__s_0083a350,&DAT_00dc3a00,local_10c);
  }
  iVar5 = FUN_007a6615(local_20c,&DAT_0082eeb4);
  if (iVar5 == 0) {
    uVar8 = 0xffffffff;
    pcVar10 = local_10c;
    do {
      pcVar11 = pcVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar10 = pcVar11 + -uVar8;
    pcVar11 = local_20c;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    iVar5 = FUN_007a6615(local_20c,&DAT_0082eeb4);
    if (iVar5 != 0) goto LAB_0063a304;
  }
  else {
LAB_0063a304:
    FUN_007a6429(iVar5);
    (**(code **)(*(int *)param_1[0x13] + 0x2c))(local_10c);
    uVar4 = FUN_00413d60(s_leader_minister_palette_bmp_0085ed3c);
    FUN_00415f20(uVar4);
  }
  local_21c = 0;
  do {
    if (*(char *)(param_2 + 0x1a + local_21c) != '\0') {
      puVar6 = operator_new(0x84);
      local_4._0_1_ = 3;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_00414c80(s_gfx_interface_tc_icons_bmp_008612e0);
        local_4._0_1_ = 4;
        *puVar6 = &PTR_FUN_007ef9d0;
        puVar6[2] = &PTR_LAB_007ef9cc;
        FUN_00415b90(0x6d);
        FUN_00415b50(local_21c);
        *(undefined1 *)((int)puVar6 + 0x82) = 1;
        pvVar3 = operator_new(0x7e);
        local_4._0_1_ = 5;
        if (pvVar3 == (void *)0x0) {
          *(undefined4 *)((int)puVar6 + 0x7e) = 0;
        }
        else {
          uVar4 = FUN_00414c80(s_gfx_interface_tc_icon_overlay_bm_008612bc);
          *(undefined4 *)((int)puVar6 + 0x7e) = uVar4;
        }
      }
      iVar5 = *(int *)((int)param_1 + 0x36);
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar7 = operator_new(0xe);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = puVar6;
        puVar7[1] = iVar5;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
      }
      iVar2 = *(int *)((int)param_1 + 0x3a);
      *(undefined4 **)((int)param_1 + 0x36) = puVar7;
      *(int *)((int)param_1 + 0x3a) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)((int)param_1 + 0x32) = puVar7;
      }
      else {
        *(undefined4 **)(iVar5 + 8) = puVar7;
      }
    }
    local_21c = local_21c + 1;
  } while (local_21c < 0x6d);
LAB_0063a42a:
  *(undefined4 *)(param_1[0x13] + 0xe) = 1;
  ExceptionList = local_c;
  return param_1;
}


