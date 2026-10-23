// FUN_005f7ed0 @ 5f7ed0 size=1236

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005f7ed0(int param_1,int param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  double dVar15;
  double dVar16;
  char local_108 [260];
  
  if (DAT_00dc195f != '\0') {
    param_2 = param_2 + -0x2c;
  }
  if ((0x9d < param_3) && (param_3 < 0xbc)) {
    if ((param_2 < 0x281) || (0x28e < param_2)) {
      if ((param_2 < 0x29f) || (0x2b1 < param_2)) {
        if ((param_2 < 0x2bf) || (0x2cf < param_2)) {
          if ((param_2 < 0x2e0) || (0x2f0 < param_2)) {
            if ((param_2 < 0x2ff) || (0x310 < param_2)) goto LAB_005f808d;
            uVar4 = FUN_0042b6c9(s_RESOURCE_SUPPLY_0083c2f4);
            dVar16 = (double)*(float *)(param_1 + 0xbc);
            uVar5 = FUN_0042b6c9(s_RESOURCE_SUPPLY_0083c2f4);
            fVar1 = *(float *)(param_1 + 0xa8);
          }
          else {
            uVar4 = FUN_0042b6c9(s_RESOURCE_METAL_0083c2cc);
            dVar16 = (double)*(float *)(param_1 + 0xb8);
            uVar5 = FUN_0042b6c9(s_RESOURCE_METAL_0083c2cc);
            fVar1 = *(float *)(param_1 + 0xa4);
          }
        }
        else {
          uVar4 = FUN_0042b6c9(s_RESOURCE_ENERGY_0083c2a4);
          dVar16 = (double)*(float *)(param_1 + 0xb4);
          uVar5 = FUN_0042b6c9(s_RESOURCE_ENERGY_0083c2a4);
          fVar1 = *(float *)(param_1 + 0xa0);
        }
      }
      else {
        uVar4 = FUN_0042b6c9(s_RESOURCE_RARE_MATERIALS_0083c2b4);
        dVar16 = (double)*(float *)(param_1 + 0xb0);
        uVar5 = FUN_0042b6c9(s_RESOURCE_RARE_MATERIALS_0083c2b4);
        fVar1 = *(float *)(param_1 + 0x9c);
      }
    }
    else {
      uVar4 = FUN_0042b6c9(s_RESOURCE_OIL_0083c2dc);
      dVar16 = (double)*(float *)(param_1 + 0xac);
      uVar5 = FUN_0042b6c9(s_RESOURCE_OIL_0083c2dc);
      fVar1 = *(float *)(param_1 + 0x98);
    }
    dVar15 = (double)fVar1;
    uVar6 = FUN_0042b6c9(s_COV_EDIT_RES_0085db50);
    FUN_007a630a(&DAT_00ce6a98,uVar6,dVar15,uVar5,dVar16,uVar4);
    return &DAT_00ce6a98;
  }
LAB_005f808d:
  if ((((param_2 < 0x344) || (0x362 < param_2)) || (param_3 < 0xac)) || (0xbb < param_3)) {
    cVar3 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x20))(param_2,param_3);
    if (cVar3 == '\0') {
      return (undefined4 *)0x0;
    }
    puVar9 = (undefined4 *)FUN_0042b6c9(s_CONVOY_DELETE_IRO_0085db3c);
    return puVar9;
  }
  iVar7 = FUN_00428ee0(param_1 + 0x7e);
  if (iVar7 == 0) {
    return (undefined4 *)0x0;
  }
  if (iVar7 == 8) {
    return (undefined4 *)0x0;
  }
  cVar3 = FUN_004d5e60();
  if (cVar3 == '\0') {
    uVar4 = FUN_004d5b00();
    uVar5 = FUN_0042b6c9(s_CONVOY_TRANSPORTSNEEDED_0085d924);
    FUN_007a630a(&DAT_00ce6a98,uVar5,uVar4);
    return &DAT_00ce6a98;
  }
  uVar4 = FUN_0042b6c9(s_CONVOY_DAILYSHIPPING_0085d9c0);
  FUN_007a630a(&DAT_00ce6a98,uVar4);
  bVar2 = true;
  if (_DAT_007e3380 < *(float *)(iVar7 + 0x13e)) {
    dVar16 = (double)*(float *)(iVar7 + 0x13e);
    uVar4 = FUN_0042b6c9(s_CONVOY_ENERGY_0085d9b0);
    FUN_007a630a(local_108,uVar4,dVar16);
    uVar10 = 0xffffffff;
    pcVar8 = local_108;
    do {
      pcVar14 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar3 != '\0');
    uVar10 = ~uVar10;
    iVar11 = -1;
    pcVar8 = (char *)&DAT_00ce6a98;
    do {
      pcVar13 = pcVar8;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar13 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar3 != '\0');
    pcVar8 = pcVar14 + -uVar10;
    pcVar14 = pcVar13 + -1;
    for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
    bVar2 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar7 + 0x132)) {
    dVar16 = (double)*(float *)(iVar7 + 0x132);
    uVar4 = FUN_0042b6c9(s_CONVOY_RARE_MATERIALS_0085d998);
    FUN_007a630a(local_108,uVar4,dVar16);
    uVar10 = 0xffffffff;
    pcVar8 = local_108;
    do {
      pcVar14 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar3 != '\0');
    uVar10 = ~uVar10;
    iVar11 = -1;
    pcVar8 = (char *)&DAT_00ce6a98;
    do {
      pcVar13 = pcVar8;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar13 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar3 != '\0');
    pcVar8 = pcVar14 + -uVar10;
    pcVar14 = pcVar13 + -1;
    for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
    bVar2 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar7 + 0x12e)) {
    dVar16 = (double)*(float *)(iVar7 + 0x12e);
    uVar4 = FUN_0042b6c9(s_CONVOY_OIL_0085d98c);
    FUN_007a630a(local_108,uVar4,dVar16);
    uVar10 = 0xffffffff;
    pcVar8 = local_108;
    do {
      pcVar14 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar3 != '\0');
    uVar10 = ~uVar10;
    iVar11 = -1;
    pcVar8 = (char *)&DAT_00ce6a98;
    do {
      pcVar13 = pcVar8;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar13 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar3 != '\0');
    pcVar8 = pcVar14 + -uVar10;
    pcVar14 = pcVar13 + -1;
    for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
    bVar2 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar7 + 0x136)) {
    dVar16 = (double)*(float *)(iVar7 + 0x136);
    uVar4 = FUN_0042b6c9(s_CONVOY_METAL_0085d97c);
    FUN_007a630a(local_108,uVar4,dVar16);
    uVar10 = 0xffffffff;
    pcVar8 = local_108;
    do {
      pcVar14 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar3 != '\0');
    uVar10 = ~uVar10;
    iVar11 = -1;
    pcVar8 = (char *)&DAT_00ce6a98;
    do {
      pcVar13 = pcVar8;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar13 = pcVar8 + 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar3 != '\0');
    pcVar8 = pcVar14 + -uVar10;
    pcVar14 = pcVar13 + -1;
    for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
    bVar2 = false;
  }
  if (*(float *)(iVar7 + 0x13a) <= _DAT_007e3380) {
    if (!bVar2) {
      return &DAT_00ce6a98;
    }
    pcVar8 = (char *)FUN_0042b6c9(s_CONVOY_NADA_0085d960);
  }
  else {
    dVar16 = (double)*(float *)(iVar7 + 0x13a);
    uVar4 = FUN_0042b6c9(s_CONVOY_SUPPLIES_0085d96c);
    FUN_007a630a(local_108,uVar4,dVar16);
    pcVar8 = local_108;
  }
  uVar10 = 0xffffffff;
  do {
    pcVar14 = pcVar8;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar14 = pcVar8 + 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar14;
  } while (cVar3 != '\0');
  uVar10 = ~uVar10;
  iVar7 = -1;
  pcVar8 = (char *)&DAT_00ce6a98;
  do {
    pcVar13 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar8 + 1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar13;
  } while (cVar3 != '\0');
  pcVar8 = pcVar14 + -uVar10;
  pcVar14 = pcVar13 + -1;
  for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar14 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar14 = pcVar14 + 1;
  }
  return &DAT_00ce6a98;
}


