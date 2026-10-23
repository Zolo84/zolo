// FUN_005f3be0 @ 5f3be0 size=787

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005f3be0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  double dVar11;
  char local_108 [260];
  
  iVar3 = FUN_00428ee0();
  if ((iVar3 == 0) || (iVar3 == 8)) {
    return (undefined4 *)0x0;
  }
  cVar2 = FUN_004d5e60();
  if (cVar2 == '\0') {
    cVar2 = FUN_004d5c30();
    if ((cVar2 != '\0') || (cVar2 = FUN_004d5dc0(), cVar2 != '\0')) {
      uVar4 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00ce125c,uVar4);
      return &DAT_00ce125c;
    }
    FUN_004d5b00();
    uVar4 = FUN_0042b6c9(s_CONVOY_TRANSPORTSNEEDED_0085d924);
    FUN_007a630a(&DAT_00ce125c,uVar4);
LAB_005f3ee5:
    return &DAT_00ce125c;
  }
  uVar4 = FUN_0042b6c9();
  FUN_007a630a(&DAT_00ce125c,uVar4);
  bVar1 = true;
  if (_DAT_007e3380 < *(float *)(iVar3 + 0x13e)) {
    dVar11 = (double)*(float *)(iVar3 + 0x13e);
    uVar4 = FUN_0042b6c9(s_CONVOY_ENERGY_0085d9b0);
    FUN_007a630a(local_108,uVar4,dVar11);
    uVar6 = 0xffffffff;
    pcVar5 = local_108;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar5 = (char *)&DAT_00ce125c;
    do {
      pcVar9 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    pcVar5 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    bVar1 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar3 + 0x132)) {
    dVar11 = (double)*(float *)(iVar3 + 0x132);
    uVar4 = FUN_0042b6c9(s_CONVOY_RARE_MATERIALS_0085d998);
    FUN_007a630a(local_108,uVar4,dVar11);
    uVar6 = 0xffffffff;
    pcVar5 = local_108;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar5 = (char *)&DAT_00ce125c;
    do {
      pcVar9 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    pcVar5 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    bVar1 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar3 + 0x12e)) {
    dVar11 = (double)*(float *)(iVar3 + 0x12e);
    uVar4 = FUN_0042b6c9(s_CONVOY_OIL_0085d98c);
    FUN_007a630a(local_108,uVar4,dVar11);
    uVar6 = 0xffffffff;
    pcVar5 = local_108;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar5 = (char *)&DAT_00ce125c;
    do {
      pcVar9 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    pcVar5 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    bVar1 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar3 + 0x136)) {
    dVar11 = (double)*(float *)(iVar3 + 0x136);
    uVar4 = FUN_0042b6c9(s_CONVOY_METAL_0085d97c);
    FUN_007a630a(local_108,uVar4,dVar11);
    uVar6 = 0xffffffff;
    pcVar5 = local_108;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar5 = (char *)&DAT_00ce125c;
    do {
      pcVar9 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    pcVar5 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    bVar1 = false;
  }
  if (*(float *)(iVar3 + 0x13a) <= _DAT_007e3380) {
    if (!bVar1) goto LAB_005f3ee5;
    pcVar5 = (char *)FUN_0042b6c9();
  }
  else {
    dVar11 = (double)*(float *)(iVar3 + 0x13a);
    uVar4 = FUN_0042b6c9(s_CONVOY_SUPPLIES_0085d96c);
    FUN_007a630a(local_108,uVar4,dVar11);
    pcVar5 = local_108;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar10 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_00ce125c;
  do {
    pcVar9 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar2 != '\0');
  pcVar5 = pcVar10 + -uVar6;
  pcVar10 = pcVar9 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
  return &DAT_00ce125c;
}


