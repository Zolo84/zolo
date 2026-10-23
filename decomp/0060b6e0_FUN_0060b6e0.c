// FUN_0060b6e0 @ 60b6e0 size=643

undefined4 * __thiscall FUN_0060b6e0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int local_218;
  char local_20c [256];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0185;
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
  *param_1 = &PTR_FUN_007ef22c;
  param_1[2] = &PTR_LAB_007ef228;
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_tech_team_noimage__0085ed58);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x13] = uVar4;
  param_1[0x15] = param_3;
  if (param_2 == 0) goto LAB_0060b93e;
  iVar5 = *(int *)(param_2 + 0x1c);
  param_1[0x10] = *(undefined4 *)(iVar5 + 0xc);
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(iVar5 + 0x10);
  if (2 < param_3) {
    FUN_007a630a(local_10c,s_gfx_interface_pics__s_bmp_0085d184,*(int *)(param_2 + 0x1c) + 0x87);
    if (DAT_00dc3a00 == '\0') {
      uVar7 = 0xffffffff;
      pcVar9 = local_10c;
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = local_20c;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    else {
      FUN_007a630a(local_20c,s__s__s_0083a350,&DAT_00dc3a00,local_10c);
    }
    iVar5 = FUN_007a6615(local_20c,&DAT_0082eeb4);
    if (iVar5 == 0) {
      uVar7 = 0xffffffff;
      pcVar9 = local_10c;
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = local_20c;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      iVar5 = FUN_007a6615(local_20c,&DAT_0082eeb4);
      if (iVar5 == 0) goto LAB_0060b8a7;
    }
    FUN_007a6429(iVar5);
    (**(code **)(*(int *)param_1[0x13] + 0x2c))(local_10c);
    uVar4 = FUN_00413d60(s_leader_minister_palette_bmp_0085ed3c);
    FUN_00415f20(uVar4);
  }
LAB_0060b8a7:
  local_218 = 0;
  do {
    if (*(char *)(*(int *)(param_2 + 0x1c) + 0x1a + local_218) != '\0') {
      pvVar3 = operator_new(0x84);
      local_4._0_1_ = 3;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_006392d0(local_218,1);
      }
      iVar5 = *(int *)((int)param_1 + 0x36);
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar6 = operator_new(0xe);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = uVar4;
        puVar6[1] = iVar5;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar2 = *(int *)((int)param_1 + 0x3a);
      *(undefined4 **)((int)param_1 + 0x36) = puVar6;
      *(int *)((int)param_1 + 0x3a) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)((int)param_1 + 0x32) = puVar6;
      }
      else {
        *(undefined4 **)(iVar5 + 8) = puVar6;
      }
    }
    local_218 = local_218 + 1;
  } while (local_218 < 0x6d);
LAB_0060b93e:
  *(undefined4 *)(param_1[0x13] + 0xe) = 1;
  ExceptionList = local_c;
  return param_1;
}


