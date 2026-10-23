// FUN_00622310 @ 622310 size=846

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00622310(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  double dVar12;
  char local_108 [260];
  
  iVar3 = FUN_00428ee0();
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  if (iVar3 == 8) {
    return (undefined4 *)0x0;
  }
  cVar2 = FUN_004d5e60();
  if (cVar2 == '\0') {
    cVar2 = FUN_004d5c30();
    if (cVar2 == '\0') {
      cVar2 = FUN_004d5dc0();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_1 + 0x2c))(param_2,param_3);
        if (cVar2 == '\0') {
          return (undefined4 *)0x0;
        }
        uVar4 = FUN_004d5b00();
        uVar6 = FUN_0042b6c9(s_CONVOY_TRANSPORTSNEEDED_0085d924);
        FUN_007a630a(&DAT_00cfca0c,uVar6,uVar4);
        return &DAT_00cfca0c;
      }
      cVar2 = (**(code **)(*param_1 + 0x2c))();
      if (cVar2 == '\0') {
        return (undefined4 *)0x0;
      }
      pcVar5 = s_CONVOY_NOPATH_0085d93c;
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x2c))(param_2,param_3);
      if (cVar2 == '\0') {
        return (undefined4 *)0x0;
      }
      pcVar5 = s_CONVOY_NOTNEEDED_0085d94c;
    }
    uVar4 = FUN_0042b6c9(pcVar5);
    FUN_007a630a(&DAT_00cfca0c,uVar4);
    return &DAT_00cfca0c;
  }
  uVar4 = FUN_0042b6c9();
  FUN_007a630a(&DAT_00cfca0c,uVar4);
  bVar1 = true;
  if (_DAT_007e3380 < *(float *)(iVar3 + 0x13e)) {
    dVar12 = (double)*(float *)(iVar3 + 0x13e);
    uVar4 = FUN_0042b6c9(s_CONVOY_ENERGY_0085d9b0);
    FUN_007a630a(local_108,uVar4,dVar12);
    uVar7 = 0xffffffff;
    pcVar5 = local_108;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    iVar8 = -1;
    pcVar5 = (char *)&DAT_00cfca0c;
    do {
      pcVar10 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    bVar1 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar3 + 0x132)) {
    dVar12 = (double)*(float *)(iVar3 + 0x132);
    uVar4 = FUN_0042b6c9(s_CONVOY_RARE_MATERIALS_0085d998);
    FUN_007a630a(local_108,uVar4,dVar12);
    uVar7 = 0xffffffff;
    pcVar5 = local_108;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    iVar8 = -1;
    pcVar5 = (char *)&DAT_00cfca0c;
    do {
      pcVar10 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    bVar1 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar3 + 0x12e)) {
    dVar12 = (double)*(float *)(iVar3 + 0x12e);
    uVar4 = FUN_0042b6c9(s_CONVOY_OIL_0085d98c);
    FUN_007a630a(local_108,uVar4,dVar12);
    uVar7 = 0xffffffff;
    pcVar5 = local_108;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    iVar8 = -1;
    pcVar5 = (char *)&DAT_00cfca0c;
    do {
      pcVar10 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    bVar1 = false;
  }
  if (_DAT_007e3380 < *(float *)(iVar3 + 0x136)) {
    dVar12 = (double)*(float *)(iVar3 + 0x136);
    uVar4 = FUN_0042b6c9(s_CONVOY_METAL_0085d97c);
    FUN_007a630a(local_108,uVar4,dVar12);
    uVar7 = 0xffffffff;
    pcVar5 = local_108;
    do {
      pcVar11 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    iVar8 = -1;
    pcVar5 = (char *)&DAT_00cfca0c;
    do {
      pcVar10 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar5 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar11 = pcVar11 + 1;
    }
    bVar1 = false;
  }
  if (*(float *)(iVar3 + 0x13a) <= _DAT_007e3380) {
    if (!bVar1) {
      return &DAT_00cfca0c;
    }
    pcVar5 = (char *)FUN_0042b6c9();
  }
  else {
    dVar12 = (double)*(float *)(iVar3 + 0x13a);
    uVar4 = FUN_0042b6c9(s_CONVOY_SUPPLIES_0085d96c);
    FUN_007a630a(local_108,uVar4,dVar12);
    pcVar5 = local_108;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar11 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_00cfca0c;
  do {
    pcVar10 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar2 != '\0');
  pcVar5 = pcVar11 + -uVar7;
  pcVar11 = pcVar10 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar11 = pcVar11 + 1;
  }
  return &DAT_00cfca0c;
}


