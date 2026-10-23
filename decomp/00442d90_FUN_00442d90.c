// FUN_00442d90 @ 442d90 size=2041

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00442d90(int param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char local_100 [256];
  
  pcVar5 = param_2;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    pcVar3 = (char *)FUN_0042b6c9(s_NEG_ONE_0083c304);
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar9 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
  }
  else {
    pcVar3 = (char *)FUN_0042b6c9(s_NEG_TA_0083c30c);
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar9 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  }
  bVar2 = false;
  if (_DAT_007e3380 < *(float *)(param_1 + 4)) {
    uVar4 = FUN_0042b6c9(s_RESOURCE_SUPPLY_0083c2f4);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)*(float *)(param_1 + 4),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 8)) {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_OIL_0083c2dc);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)*(float *)(param_1 + 8),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x14)) {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_METAL_0083c2cc);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)*(float *)(param_1 + 0x14),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x10)) {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_RARE_MATERIALS_0083c2b4);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)*(float *)(param_1 + 0x10),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0xc)) {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_ENERGY_0083c2a4);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)*(float *)(param_1 + 0xc),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (*(float *)(param_1 + 0x18) <= _DAT_007e3380) {
    if (!bVar2) {
      pcVar5 = (char *)FUN_0042b6c9(s_NEG_NOTHING_0083c288);
      goto LAB_0044315a;
    }
  }
  else {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)*(float *)(param_1 + 0x18),uVar4);
    pcVar5 = local_100;
LAB_0044315a:
    uVar6 = 0xffffffff;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
  }
  pcVar5 = (char *)FUN_0042b6c9(s_NEG_FOR_0083c280);
  uVar6 = 0xffffffff;
  do {
    pcVar3 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar8 = -1;
  pcVar5 = param_2;
  do {
    pcVar9 = pcVar5;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  pcVar5 = pcVar3 + -uVar6;
  pcVar3 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar3 = pcVar3 + 1;
  }
  if (_DAT_007e3380 <= *(float *)(param_1 + 4)) {
    bVar2 = false;
  }
  else {
    uVar4 = FUN_0042b6c9(s_RESOURCE_SUPPLY_0083c2f4);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)-*(float *)(param_1 + 4),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (*(float *)(param_1 + 8) < _DAT_007e3380) {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_OIL_0083c2dc);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)-*(float *)(param_1 + 8),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (*(float *)(param_1 + 0x14) < _DAT_007e3380) {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_METAL_0083c2cc);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)-*(float *)(param_1 + 0x14),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (*(float *)(param_1 + 0x10) < _DAT_007e3380) {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_RARE_MATERIALS_0083c2b4);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)-*(float *)(param_1 + 0x10),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (*(float *)(param_1 + 0xc) < _DAT_007e3380) {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_ENERGY_0083c2a4);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)-*(float *)(param_1 + 0xc),uVar4);
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar3 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar3 + -uVar6;
    pcVar3 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    bVar2 = true;
  }
  if (_DAT_007e3380 <= *(float *)(param_1 + 0x18)) {
    if (bVar2) goto LAB_00443552;
    pcVar5 = (char *)FUN_0042b6c9(s_NEG_NOTHING_0083c288);
  }
  else {
    if (bVar2) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_0083bf48;
      do {
        pcVar3 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar3 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar3;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar3 + -uVar6;
      pcVar3 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      }
    }
    uVar4 = FUN_0042b6c9(s_RESOURCE_MONEY_0083c294);
    FUN_007a630a(local_100,s___1f__s_0083c2ec,(double)-*(float *)(param_1 + 0x18),uVar4);
    pcVar5 = local_100;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar3 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar8 = -1;
  pcVar5 = param_2;
  do {
    pcVar9 = pcVar5;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  pcVar5 = pcVar3 + -uVar6;
  pcVar3 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar3 = pcVar3 + 1;
  }
LAB_00443552:
  uVar6 = 0xffffffff;
  pcVar5 = &DAT_0083a6e0;
  do {
    pcVar3 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar8 = -1;
  do {
    pcVar5 = param_2;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + -uVar6;
  pcVar5 = pcVar5 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return;
}


