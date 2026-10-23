// FUN_006f8280 @ 6f8280 size=1533

undefined4 * __fastcall FUN_006f8280(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  char *local_118;
  char local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007daf0a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  local_4 = 1;
  *param_1 = &PTR_FUN_007f830c;
  param_1[2] = &PTR_LAB_007f8308;
  local_118 = &DAT_0088ebf8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  iVar5 = FUN_00428460(&DAT_00d61394);
  if ((iVar5 == 0) || (iVar5 == 8)) {
    switch(*(undefined4 *)(DAT_00bdc100 + 10)) {
    case 0:
    case 1:
      local_118 = s_gfx_interface_frontend_endgame_q_0086fb04;
      break;
    case 3:
    case 4:
      iVar5 = -1;
      pcVar6 = (char *)(DAT_00d615c2 + 0x2a);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (iVar5 == -2) {
        local_118 = s_gfx_interface_frontend_endgame_a_0086fab4;
      }
      else {
        FUN_007a630a(local_10c,s_gfx_interface_frontend_endgame___0086fadc,
                     (char *)(DAT_00d615c2 + 0x2a));
        local_118 = local_10c;
      }
      break;
    case 5:
    case 6:
      iVar5 = -1;
      pcVar6 = (char *)(DAT_00d615c6 + 0x2a);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (iVar5 == -2) {
        local_118 = s_gfx_interface_frontend_endgame_a_0086fa88;
      }
      else {
        FUN_007a630a(local_10c,s_gfx_interface_frontend_endgame___0086fadc,
                     (char *)(DAT_00d615c6 + 0x2a));
        local_118 = local_10c;
      }
      break;
    case 7:
    case 8:
      iVar5 = -1;
      pcVar6 = (char *)(DAT_00d615ca + 0x2a);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (iVar5 == -2) {
        local_118 = s_gfx_interface_frontend_endgame_c_0086fa58;
      }
      else {
        FUN_007a630a(local_10c,s_gfx_interface_frontend_endgame___0086fadc,
                     (char *)(DAT_00d615ca + 0x2a));
        local_118 = local_10c;
      }
    }
  }
  else {
    uVar10 = 0xffffffff;
    *(undefined1 *)(param_1 + 10) = 1;
    local_118 = s_gfx_interface_frontend_endgame_b_0086fb2c;
    pcVar6 = (char *)(iVar5 + 0x1020);
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    pcVar6 = operator_new(~uVar10);
    uVar10 = 0xffffffff;
    param_1[8] = pcVar6;
    pcVar12 = (char *)(iVar5 + 0x1020);
    do {
      pcVar14 = pcVar12;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar12 + 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar14;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar12 = pcVar14 + -uVar10;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar6 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = (char *)(iVar5 + 0x20);
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    pcVar6 = operator_new(~uVar10);
    uVar10 = 0xffffffff;
    param_1[9] = pcVar6;
    pcVar12 = (char *)(iVar5 + 0x20);
    do {
      pcVar14 = pcVar12;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar12 + 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar14;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar12 = pcVar14 + -uVar10;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar6 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar6 = pcVar6 + 1;
    }
    pvVar7 = operator_new(0x7e);
    local_4._0_1_ = 2;
    if (pvVar7 == (void *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      uVar8 = FUN_0044b160(*(undefined4 *)(iVar5 + 0x124e));
      piVar9 = (int *)FUN_00414c80(uVar8);
    }
    *(int **)((int)param_1 + 0x36) = piVar9;
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(*piVar9 + 0x34))(4);
    (**(code **)(**(int **)((int)param_1 + 0x36) + 0x38))(0);
    uVar8 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
    FUN_00415f20(uVar8);
  }
  pvVar7 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00414c80(local_118);
  }
  param_1[7] = uVar8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_118 = (char *)0x1;
  if (1 < DAT_00877690) {
    iVar13 = 0x4b2;
    iVar5 = DAT_00ab27b4;
    do {
      iVar3 = *(int *)(iVar13 + 0x19e + iVar5);
      piVar9 = (int *)(iVar13 + 0x19e + iVar5);
      if (0 < iVar3) {
        iVar4 = *(int *)(iVar13 + 0x3d8 + iVar5);
        piVar1 = (int *)(iVar13 + 0x3d8 + iVar5);
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x3350) == DAT_00d615c2) {
            param_1[3] = param_1[3] + iVar3;
          }
          if (*(int *)(*piVar1 + 0x3350) == DAT_00d615c6) {
            param_1[4] = param_1[4] + *piVar9;
          }
          if (*(int *)(*piVar1 + 0x3350) == DAT_00d615ca) {
            param_1[5] = param_1[5] + *piVar9;
          }
          param_1[6] = param_1[6] + *piVar9;
          iVar5 = DAT_00ab27b4;
        }
      }
      local_118 = (char *)((int)local_118 + 1);
      iVar13 = iVar13 + 0x4b2;
    } while ((int)local_118 < DAT_00877690);
  }
  DAT_00d42c04 = 0;
  DAT_00d42c05 = 0;
  DAT_00d42c06 = 0;
  iVar5 = *(int *)(*(int *)(DAT_00d615c2 + 0x22) + 4);
  while (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 8);
    uVar8 = __ftol();
    param_1[3] = uVar8;
    uVar8 = __ftol();
    param_1[6] = uVar8;
    DAT_00d42c06 = 1;
  }
  iVar5 = *(int *)(*(int *)(DAT_00d615c6 + 0x22) + 4);
  while (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 8);
    uVar8 = __ftol();
    param_1[4] = uVar8;
    uVar8 = __ftol();
    param_1[6] = uVar8;
    DAT_00d42c04 = 1;
  }
  iVar5 = *(int *)(*(int *)(DAT_00d615ca + 0x22) + 4);
  while (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 8);
    uVar8 = __ftol();
    param_1[5] = uVar8;
    uVar8 = __ftol();
    param_1[6] = uVar8;
    DAT_00d42c05 = 1;
  }
  pvVar7 = operator_new(0x7e);
  local_4._0_1_ = 4;
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00414c80(DAT_00d615c2 + 0x12a);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x2a) = uVar8;
  pvVar7 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00414c80(DAT_00d615c6 + 0x12a);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x2e) = uVar8;
  pvVar7 = operator_new(0x7e);
  local_4._0_1_ = 6;
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00414c80(DAT_00d615ca + 0x12a);
  }
  *(undefined4 *)((int)param_1 + 0x32) = uVar8;
  local_4._0_1_ = 1;
  pcVar6 = (char *)FUN_005857c0();
  uVar10 = 0xffffffff;
  do {
    pcVar12 = pcVar6;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar12 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar12;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  pcVar6 = pcVar12 + -uVar10;
  pcVar12 = (char *)&DAT_00d42b04;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar12 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar12 = pcVar12 + 1;
  }
  pcVar6 = (char *)FUN_005857c0();
  uVar10 = 0xffffffff;
  do {
    pcVar12 = pcVar6;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar12 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar12;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  pcVar6 = pcVar12 + -uVar10;
  pcVar12 = (char *)&DAT_00d42904;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar12 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar12 = pcVar12 + 1;
  }
  pcVar6 = (char *)FUN_005857c0();
  uVar10 = 0xffffffff;
  do {
    pcVar12 = pcVar6;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar12 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar12;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  pcVar6 = pcVar12 + -uVar10;
  pcVar12 = (char *)&DAT_00d42a04;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar12 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar12 = pcVar12 + 1;
  }
  pvVar7 = operator_new(0x40);
  local_4 = CONCAT31(local_4._1_3_,7);
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_006fdf40(100,400,0x1a,0x65,0);
  }
  *(undefined4 *)((int)param_1 + 0x3a) = uVar8;
  ExceptionList = pvStack_c;
  return param_1;
}


