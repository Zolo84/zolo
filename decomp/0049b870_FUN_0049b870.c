// FUN_0049b870 @ 49b870 size=3292

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0049b870(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  double dVar12;
  char *pcVar13;
  double dVar14;
  float local_214;
  char local_208 [516];
  
  DAT_008c4b94._0_1_ = 0;
  fVar11 = (float10)FUN_00442c00();
  if ((float10)_DAT_007e3380 < fVar11) {
    FUN_00442c00();
  }
  FUN_0049b530();
  FUN_0042b6c9(s_RES_DRO_0083d4e4);
  FUN_007a630a();
  uVar6 = 0xffffffff;
  pcVar13 = local_208;
  do {
    pcVar10 = pcVar13;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar13 + 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar10;
  } while (cVar3 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar13 = (char *)&DAT_008c4b94;
  do {
    pcVar9 = pcVar13;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar13 + 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar9;
  } while (cVar3 != '\0');
  pcVar13 = pcVar10 + -uVar6;
  pcVar10 = pcVar9 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3a18 + param_2 * 4)) {
    FUN_0042b6c9(s_RES_DRO_PROD_0083d4d4);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3a30 + param_2 * 4)) {
    FUN_0042b6c9(s_RES_DRO_CONVOY_IN_0083d4c0);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3b50 + param_2 * 4)) {
    FUN_0042b6c9(s_RES_DRO_CONVOYED_FROM_PUPPETS_0083d4a0);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3aa8 + param_2 * 4)) {
    FUN_0042b6c9(s_RES_DRO_PUPPET_0083d490);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3b38 + param_2 * 4)) {
    FUN_0042b6c9(s_RES_DRO_PUPPET_TO_PROVINCIAL_DEP_0083d46c);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3a78 + param_2 * 4)) {
    FUN_0042b6c9(s_RES_DRO_TRADE_IN_0083d458);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (*(float *)(param_1 + 0x3a90 + param_2 * 4) != _DAT_007e3380) {
    FUN_0042b6c9(s_RES_DRO_CONVERTED_0083d444);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3a60 + param_2 * 4)) {
    FUN_0042b6c9(s_RES_DRO_TRADE_OUT_0083d430);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3a48 + param_2 * 4)) {
    FUN_0042b6c9(s_RES_DRO_CONVOY_OUT_0083d41c);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (*(float *)(param_1 + 0x3ac0 + param_2 * 4) < _DAT_007e3380) {
    FUN_0042b6c9(s_RES_DRO_MASTER_0083d40c);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  local_214 = 0.0;
  if (param_2 == 1) {
    local_214 = *(float *)(param_1 + 0x398c);
  }
  else if (param_2 == 2) {
    local_214 = *(float *)(param_1 + 0x3994);
  }
  else if (param_2 == 3) {
    local_214 = *(float *)(param_1 + 0x3990);
  }
  else if (param_2 == 0) {
    if (_DAT_007e3380 < *(float *)(param_1 + 0x39a4)) {
      FUN_0042b6c9(s_RES_DRO_USAGE_0083d3fc);
      FUN_007a630a();
      uVar6 = 0xffffffff;
      pcVar13 = local_208;
      do {
        pcVar10 = pcVar13;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar10;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar13 = (char *)&DAT_008c4b94;
      do {
        pcVar9 = pcVar13;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar9;
      } while (cVar3 != '\0');
      pcVar13 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x39a8)) {
      pcVar13 = s_RES_DRO_ALLIED_USAGE_0083d3e4;
      goto LAB_0049c06d;
    }
  }
  else if (param_2 == 5) {
    if (_DAT_007e3380 < *(float *)(param_1 + 0x39a0)) {
      FUN_0042b6c9(s_RES_DRO_USAGE_0083d3fc);
      FUN_007a630a();
      uVar6 = 0xffffffff;
      pcVar13 = local_208;
      do {
        pcVar10 = pcVar13;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar10;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar13 = (char *)&DAT_008c4b94;
      do {
        pcVar9 = pcVar13;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar9;
      } while (cVar3 != '\0');
      pcVar13 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x39ac)) {
      pcVar13 = s_RES_DRO_ALLIED_USAGE_0083d3e4;
LAB_0049c06d:
      FUN_0042b6c9(pcVar13);
      FUN_007a630a();
      uVar6 = 0xffffffff;
      pcVar13 = local_208;
      do {
        pcVar10 = pcVar13;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar10;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar13 = (char *)&DAT_008c4b94;
      do {
        pcVar9 = pcVar13;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar9;
      } while (cVar3 != '\0');
      pcVar13 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
  }
  else if (param_2 == 4) {
    uVar6 = 0xffffffff;
    pcVar13 = &DAT_00839650;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_0042b6c9(s_RES_MONEY_ON_TECH_0083d3d0);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar13 = &DAT_00839650;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x39c8)) {
      FUN_00586a70(0xb,0,param_1);
      FUN_00451250();
    }
    pcVar13 = s_RES_MONEY_ON_SPY_0083d3bc;
    goto LAB_0049c06d;
  }
  fVar11 = (float10)FUN_00442c00();
  if (fVar11 != (float10)_DAT_007e3380) {
    uVar6 = 0xffffffff;
    pcVar13 = &DAT_00839650;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_00442c00();
    FUN_0042b6c9(s_RES_OFFMAP_0083d3b0);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (_DAT_007e3380 < local_214) {
    FUN_0042b6c9(s_RES_DRO_USAGE_0083d3fc);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if ((param_2 == 5) || (param_2 == 0)) {
    if (DAT_00dc1885 == '\0') goto LAB_0049c26f;
    fVar1 = *(float *)(param_1 + 0x3b20 + param_2 * 4);
  }
  else {
    if (DAT_00dc1860 == '\0') goto LAB_0049c26f;
    fVar1 = *(float *)(param_1 + 0x3b20 + param_2 * 4);
  }
  if (_DAT_007e3380 < fVar1) {
    FUN_0042b6c9(s_RES_DRO_OVER_STOCKPILE_LIMIT_LOS_0083d38c);
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
LAB_0049c26f:
  if ((DAT_00dc1540 != '\0') && (param_2 != 4)) {
    uVar4 = FUN_0042b6c9();
    FUN_007a630a(local_208,&DAT_0083d368,uVar4);
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    local_214 = 0.0;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
    switch(param_2) {
    case 0:
      local_214 = *(float *)(param_1 + 0x39b4);
      break;
    case 1:
      local_214 = *(float *)(param_1 + 0x39bc);
      break;
    case 2:
      local_214 = *(float *)(param_1 + 0x39b8);
      break;
    case 3:
      local_214 = *(float *)(param_1 + 0x39c0);
      break;
    case 4:
      local_214 = *(float *)(param_1 + 0x39c8);
      break;
    case 5:
      local_214 = *(float *)(param_1 + 0x39c4);
    }
    fVar1 = *(float *)(param_1 + 0x3bbc + param_2 * 4) - local_214;
    fVar2 = fVar1;
    if (fVar1 <= _DAT_007e3380) {
      fVar2 = -fVar1;
    }
    puVar5 = &DAT_0083d364;
    if (fVar1 <= _DAT_007e3380) {
      puVar5 = &DAT_0083d360;
    }
    dVar14 = (double)fVar2;
    dVar12 = (double)*(float *)(param_1 + 0x3bbc + param_2 * 4);
    uVar4 = FUN_0042b6c9(s_RES_DRO_CRITICAL_STOCKPILE_0083d344);
    FUN_007a630a(local_208,uVar4,dVar12,puVar5,dVar14);
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
    fVar1 = *(float *)(param_1 + 0x3ba4 + param_2 * 4) - local_214;
    fVar2 = fVar1;
    if (fVar1 <= _DAT_007e3380) {
      fVar2 = -fVar1;
    }
    puVar5 = &DAT_0083d364;
    if (fVar1 <= _DAT_007e3380) {
      puVar5 = &DAT_0083d360;
    }
    dVar14 = (double)fVar2;
    dVar12 = (double)*(float *)(param_1 + 0x3ba4 + param_2 * 4);
    uVar4 = FUN_0042b6c9(s_RES_DRO_DESIRED_STOCKPILE_0083d328);
    FUN_007a630a(local_208,uVar4,dVar12,puVar5,dVar14);
    uVar6 = 0xffffffff;
    pcVar13 = local_208;
    do {
      pcVar10 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar13 = (char *)&DAT_008c4b94;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar3 != '\0');
    pcVar13 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; cVar3 = DAT_00dc1860, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar10 = pcVar10 + 1;
    }
    if ((cVar3 != '\0') || (DAT_00dc1885 != '\0')) {
      if ((param_2 == 5) || (param_2 == 0)) {
        cVar3 = DAT_00dc1885;
      }
      if (cVar3 != '\0') {
        local_214 = *(float *)(param_1 + 0x3b08 + param_2 * 4) - local_214;
        fVar1 = local_214;
        if (local_214 <= _DAT_007e3380) {
          fVar1 = -local_214;
        }
        puVar5 = &DAT_0083d364;
        if (local_214 <= _DAT_007e3380) {
          puVar5 = &DAT_0083d360;
        }
        dVar14 = (double)fVar1;
        dVar12 = (double)*(float *)(param_1 + 0x3b08 + param_2 * 4);
        uVar4 = FUN_0042b6c9(s_RES_DRO_STOCKPILE_LIMIT_0083d310);
        FUN_007a630a(local_208,uVar4,dVar12,puVar5,dVar14);
        uVar6 = 0xffffffff;
        pcVar13 = local_208;
        do {
          pcVar10 = pcVar13;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar10;
        } while (cVar3 != '\0');
        uVar6 = ~uVar6;
        iVar7 = -1;
        pcVar13 = (char *)&DAT_008c4b94;
        do {
          pcVar9 = pcVar13;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar9 = pcVar13 + 1;
          cVar3 = *pcVar13;
          pcVar13 = pcVar9;
        } while (cVar3 != '\0');
        pcVar13 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
    }
  }
  return &DAT_008c4b94;
}


