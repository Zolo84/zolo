// FUN_006ed420 @ 6ed420 size=831

undefined4 * __thiscall
FUN_006ed420(undefined4 *param_1,char *param_2,char *param_3,char *param_4,uint param_5)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007da3fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_007e3b70;
  local_4 = 0;
  FUN_00433f00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f800c;
  *param_1 = &PTR_FUN_007f7fdc;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f7fd8;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 0x6b) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  local_4._0_1_ = 1;
  if (*param_4 != '\0') {
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 2;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00433570(s_gfx_interface_frontend_plate_sce_0086f328,0,0xffffffff);
    }
    local_4._0_1_ = 1;
    *(undefined4 *)((int)param_1 + 0x62) = uVar3;
    pvVar2 = operator_new(0x7e);
    local_4._0_1_ = 3;
    if (pvVar2 == (void *)0x0) {
      local_4 = CONCAT31(local_4._1_3_,1);
      *(undefined4 *)((int)param_1 + 0x66) = 0;
      *(undefined1 *)((int)param_1 + 0x6b) = 1;
    }
    else {
      uVar3 = FUN_00414c80(param_4);
      local_4 = CONCAT31(local_4._1_3_,1);
      *(undefined4 *)((int)param_1 + 0x66) = uVar3;
      *(undefined1 *)((int)param_1 + 0x6b) = 1;
    }
    goto LAB_006ed600;
  }
  if ((param_5 == 0) || (param_5 == 0xa4)) {
    pvVar2 = operator_new(0x7e);
    local_4._0_1_ = 4;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_map_flags_mp_bmp_0086f310);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    *(undefined4 *)((int)param_1 + 0x66) = uVar3;
    *(undefined1 *)((int)param_1 + 0x6a) = 1;
    goto LAB_006ed600;
  }
  *(undefined1 *)((int)param_1 + 0x6a) = 1;
  if (*(int *)(DAT_00d685a6 + 0x277e + param_5 * 4) == 0) {
    pvVar2 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,6);
    if (pvVar2 == (void *)0x0) goto LAB_006ed591;
    uVar3 = FUN_0044b1c0(param_5);
    piVar4 = (int *)FUN_00414c80(uVar3);
  }
  else {
    pvVar2 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar2 == (void *)0x0) {
LAB_006ed591:
      piVar4 = (int *)0x0;
    }
    else {
      uVar3 = FUN_0053a8fa();
      piVar4 = (int *)FUN_00414c80(uVar3);
    }
  }
  *(int **)((int)param_1 + 0x66) = piVar4;
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*piVar4 + 0x34))(0x19);
  uVar3 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar3);
  iVar12 = *(int *)((int)param_1 + 0x66);
  *(undefined4 *)(iVar12 + 0x22) = 0;
  *(undefined4 *)(iVar12 + 0x26) = 5;
  *(undefined1 *)(iVar12 + 0x67) = 0;
LAB_006ed600:
  uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  param_1[0x13] = uVar3;
  uVar8 = 0xffffffff;
  pcVar5 = param_3;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar8);
  uVar8 = 0xffffffff;
  *(char **)((int)param_1 + 0x5a) = pcVar5;
  do {
    pcVar11 = param_3;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar11 = pcVar11 + -uVar8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar5 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pvVar2 = operator_new(~uVar8 + 10);
  *(void **)((int)param_1 + 0x5e) = pvVar2;
  pcVar5 = operator_new(~uVar8 + 1);
  uVar8 = 0xffffffff;
  *(char **)((int)param_1 + 0x52) = pcVar5;
  do {
    pcVar11 = param_2;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar11 = pcVar11 + -uVar8;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar5 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar5 = pcVar5 + 1;
  }
  pbVar6 = *(byte **)((int)param_1 + 0x52);
  iVar12 = 0;
  param_4 = (char *)0x0;
  bVar7 = *pbVar6;
  if (bVar7 != 0) {
    iVar13 = (int)&DAT_00d4141c - (int)pbVar6;
    do {
      pbVar6[iVar13] = bVar7;
      param_5 = (uint)*pbVar6;
      iVar10 = *(int *)(*(int *)(param_1[0x13] + 8) + param_5 * 4);
      if (iVar10 == 0) {
        iVar10 = *(int *)(param_1[0x13] + 4);
      }
      else {
        iVar10 = (int)*(short *)(iVar10 + 6);
      }
      param_4 = (char *)((int)param_4 + iVar10);
      if (0x81 < (int)param_4) {
        (&DAT_00d4141c)[iVar12] = 0x2e;
        (&DAT_00d4141d)[iVar12] = 0x2e;
        (&DAT_00d4141e)[iVar12] = 0x2e;
        iVar12 = iVar12 + 3;
        break;
      }
      bVar7 = pbVar6[1];
      iVar12 = iVar12 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar7 != 0);
  }
  uVar8 = 0xffffffff;
  (&DAT_00d4141c)[iVar12] = 0;
  pcVar5 = &DAT_00d4141c;
  do {
    pcVar11 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar11 + -uVar8;
  pcVar11 = *(char **)((int)param_1 + 0x5e);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar11 = pcVar11 + 1;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  ExceptionList = local_c;
  return param_1;
}


