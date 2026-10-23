// FUN_006fc370 @ 6fc370 size=1325

undefined4 * __thiscall FUN_006fc370(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int local_28;
  int local_20;
  undefined4 *local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db3b7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007f843c;
  param_1[2] = &PTR_LAB_007f8438;
  iVar11 = *(int *)(DAT_00bd1bac + 4);
  iVar3 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  puVar14 = &DAT_00bce5ec;
  for (iVar8 = 0x158; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  uVar9 = 0xffffffff;
  local_28 = iVar11 + -0x400 >> 1;
  param_1[0x27] = 0;
  local_4 = 1;
  pcVar4 = param_2;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = operator_new(~uVar9);
  uVar9 = 0xffffffff;
  param_1[3] = pcVar4;
  pcVar12 = param_2;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar12 = pcVar15 + -uVar9;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar4 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar4 = (char *)param_1[3];
  do {
    pcVar12 = pcVar4;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar4 = pcVar12 + -uVar9;
  pcVar12 = (char *)&DAT_00d42c28;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar4 = &DAT_0082ef90;
  do {
    pcVar12 = pcVar4;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar12;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar4 = (char *)&DAT_00d42c28;
  do {
    pcVar15 = pcVar4;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  pcVar4 = pcVar12 + -uVar9;
  pcVar12 = pcVar15 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar12 = pcVar12 + 1;
  }
  iVar11 = FUN_007a6615(&DAT_00d42c28,&DAT_0082eeb4);
  if (iVar11 == 0) {
    uVar9 = 0xffffffff;
    do {
      pcVar4 = param_2;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar4 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar4;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar4 = pcVar4 + -uVar9;
    pcVar12 = (char *)param_1[3];
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar4 = (char *)param_1[3];
    do {
      pcVar12 = pcVar4;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar4 = pcVar12 + -uVar9;
    pcVar12 = (char *)&DAT_00d42c28;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar4 = &DAT_0082ef90;
    do {
      pcVar12 = pcVar4;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    iVar11 = -1;
    pcVar4 = (char *)&DAT_00d42c28;
    do {
      pcVar15 = pcVar4;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    pcVar4 = pcVar12 + -uVar9;
    pcVar12 = pcVar15 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar12 = pcVar12 + 1;
    }
    param_1[0x2a] = 0;
    thunk_FUN_00444300();
    iVar11 = param_1[0x2a];
    if (iVar11 != 0) {
      FUN_005349a0();
      FUN_00796cd8(iVar11);
    }
    FUN_006cd210();
    pvVar5 = operator_new(0x714);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_00534930(&DAT_00d42c28,&DAT_008390e0);
      goto LAB_006fc5c7;
    }
  }
  else {
    param_1[0x2a] = 0;
    thunk_FUN_00444300();
    iVar11 = param_1[0x2a];
    if (iVar11 != 0) {
      FUN_005349a0();
      FUN_00796cd8(iVar11);
    }
    FUN_006cd210();
    pvVar5 = operator_new(0x714);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_00534930(&DAT_00d42c28,&DAT_008390e0);
      goto LAB_006fc5c7;
    }
  }
  uVar6 = 0;
LAB_006fc5c7:
  local_4._0_1_ = 1;
  param_1[0x2a] = uVar6;
  FUN_00535cd0();
  iVar11 = DAT_00d685a6;
  piVar13 = param_1 + 4;
  param_1[0x29] = DAT_00d685a6;
  param_1[0x28] = *(undefined4 *)(iVar11 + 0x2cde);
  piVar7 = piVar13;
  for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  param_2 = (char *)(local_28 + 0x120);
  local_28 = local_28 + 0x3b0;
  local_20 = 0;
  if (0 < (int)param_1[0x28]) {
    local_1c = &DAT_00bce5ec;
    do {
      iVar11 = *(int *)((int)piVar13 + param_1[0x29] + (-0xc - (int)param_1));
      pvVar5 = operator_new(0xb4);
      local_4._0_1_ = 4;
      if (pvVar5 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar8 = iVar11;
        uVar6 = FUN_0053a87c(iVar11);
        piVar7 = (int *)FUN_006edc70(uVar6,iVar8);
      }
      *piVar13 = (int)piVar7;
      local_4._0_1_ = 1;
      uVar2 = (undefined1)local_4;
      local_4._0_1_ = 1;
      if (*(char *)(*(int *)(param_1[0x29] + 0x277e + iVar11 * 4) + 0x13c84) == '\0') {
        local_4._0_1_ = uVar2;
        (**(code **)(*piVar7 + 0x18))(param_2,iVar3 + 0x50);
        if ((int)param_1[0x28] < 0xb) {
          param_2 = (char *)((int)param_2 + 0x48);
        }
        else {
          *(undefined4 *)(*piVar13 + 0xe) = 1;
          param_2 = (char *)((int)param_2 + 0x24);
        }
      }
      else {
        (**(code **)(*piVar7 + 0x18))(local_28,iVar3 + 0x50);
        local_28 = local_28 + -0x48;
        if (param_1[0x27] == 0) {
          pvVar5 = operator_new(0x7e);
          local_4._0_1_ = 5;
          if (pvVar5 == (void *)0x0) {
            local_4._0_1_ = 1;
            param_1[0x27] = 0;
          }
          else {
            uVar6 = FUN_00414c80(s_gfx_interface_frontend_vs_bmp_0086fee4);
            local_4._0_1_ = 1;
            param_1[0x27] = uVar6;
          }
        }
      }
      uVar6 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
      FUN_00415f20(uVar6);
      iVar11 = *piVar13;
      piVar13 = piVar13 + 1;
      *(undefined1 *)(iVar11 + 0xa2) = 0;
      *local_1c = 0;
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
    } while (local_20 < (int)param_1[0x28]);
  }
  if (param_1[0x27] != 0) {
    local_28 = local_28 - (int)param_2;
    if (local_28 < 0) {
      local_28 = 0;
    }
    iVar11 = FUN_00415bd0();
    (**(code **)(*(int *)param_1[0x27] + 0x18))((local_28 - iVar11) / 2 + (int)param_2,iVar3 + 0x50)
    ;
  }
  param_1[0x24] = 0xffffffff;
  pvVar5 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00414c80(s_gfx_interface_shield_border_bmp_0086fec4);
  }
  param_1[0x25] = uVar6;
  if (*(char *)(param_1[0x29] + 0x2ce2) != '\0') {
    iVar11 = *(int *)(param_1[0x29] + 0x2cea);
    if (iVar11 != -1) {
      *(int *)(*DAT_00d12b40 + 0x362) = iVar11;
    }
    if (*(int *)(param_1[0x29] + 0x2cee) != -1) {
      *(int *)(*DAT_00d12b40 + 0x366) = *(int *)(param_1[0x29] + 0x2cee);
    }
    if (*(int *)(param_1[0x29] + 0x2cf6) != -1) {
      *(int *)(*DAT_00d12b40 + 0x36e) = *(int *)(param_1[0x29] + 0x2cf6);
    }
    if (*(int *)(param_1[0x29] + 0x2cf2) != -1) {
      *(int *)(*DAT_00d12b40 + 0x36a) = *(int *)(param_1[0x29] + 0x2cf2);
    }
  }
  param_1[0x2b] = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


