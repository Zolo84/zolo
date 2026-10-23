// FUN_0049dfa0 @ 49dfa0 size=1578

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0049dfa0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  double dVar13;
  double dVar14;
  char local_208 [516];
  
  DAT_008c4b94._0_1_ = 0;
  FUN_0044aba0(*(undefined4 *)(param_1 + 0x3924),*(undefined4 *)(param_1 + 0x3954));
  uVar6 = FUN_0042b6c9(s_IC_DRO_0083d5a4);
  FUN_007a630a(local_208,uVar6);
  uVar7 = 0xffffffff;
  pcVar12 = local_208;
  do {
    pcVar11 = pcVar12;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar12 + 1;
    cVar5 = *pcVar12;
    pcVar12 = pcVar11;
  } while (cVar5 != '\0');
  uVar7 = ~uVar7;
  bVar4 = false;
  iVar8 = -1;
  pcVar12 = (char *)&DAT_008c4b94;
  do {
    pcVar10 = pcVar12;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar10 = pcVar12 + 1;
    cVar5 = *pcVar12;
    pcVar12 = pcVar10;
  } while (cVar5 != '\0');
  pcVar12 = pcVar11 + -uVar7;
  pcVar11 = pcVar10 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar11 = pcVar11 + 1;
  }
  fVar3 = *(float *)(param_1 + 0x3a0c);
  if ((DAT_0087b630 != '\0') && (*(float *)(param_1 + 0x3852) != _DAT_007e3380)) {
    dVar13 = (double)*(float *)(param_1 + 0x3852);
    uVar6 = FUN_0042b6c9();
    FUN_007a630a(local_208,uVar6,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  if (*(float *)(param_1 + 0x3928) != _DAT_007e3380) {
    dVar13 = (double)((*(float *)(param_1 + 0x3928) * _DAT_007e4088) / fVar3);
    dVar14 = (double)*(float *)(param_1 + 0x3928);
    uVar6 = FUN_0042b6c9(s_ROL_IC_MINISTER_0083d594);
    FUN_007a630a(local_208,uVar6,dVar14,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  if (*(float *)(param_1 + 0x392c) != _DAT_007e3380) {
    dVar13 = (double)((*(float *)(param_1 + 0x392c) * _DAT_007e4088) / fVar3);
    dVar14 = (double)*(float *)(param_1 + 0x392c);
    uVar6 = FUN_0042b6c9(s_ROL_IC_DISSENT_0083d584);
    FUN_007a630a(local_208,uVar6,dVar14,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  if (*(float *)(param_1 + 0x3930) != _DAT_007e3380) {
    dVar13 = (double)((*(float *)(param_1 + 0x3930) * _DAT_007e4088) / fVar3);
    dVar14 = (double)*(float *)(param_1 + 0x3930);
    uVar6 = FUN_0042b6c9(s_ROL_IC_POLICY_0083d574);
    FUN_007a630a(local_208,uVar6,dVar14,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  if (*(float *)(param_1 + 0x3938) != _DAT_007e3380) {
    dVar13 = (double)((*(float *)(param_1 + 0x3938) * _DAT_007e4088) / fVar3);
    dVar14 = (double)*(float *)(param_1 + 0x3938);
    uVar6 = FUN_0042b6c9(s_ROL_IC_TECH_0083d568);
    FUN_007a630a(local_208,uVar6,dVar14,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  if (*(float *)(param_1 + 0x393c) != _DAT_007e3380) {
    dVar13 = (double)((*(float *)(param_1 + 0x393c) * _DAT_007e4088) / fVar3);
    dVar14 = (double)*(float *)(param_1 + 0x393c);
    uVar6 = FUN_0042b6c9(s_ROL_IC_DIFF_0083d55c);
    FUN_007a630a(local_208,uVar6,dVar14,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  cVar5 = FUN_0044beb0();
  if (cVar5 == '\0') {
    if (*(float *)(param_1 + 0x3940) != _DAT_007e3380) {
      fVar1 = *(float *)(param_1 + 0x3940);
      fVar2 = *(float *)(param_1 + 0x3940);
      pcVar12 = s_ROL_IC_PEACETIME_0083d538;
      goto LAB_0049e3a3;
    }
  }
  else if (*(float *)(param_1 + 0x3944) != _DAT_007e3380) {
    fVar1 = *(float *)(param_1 + 0x3944);
    fVar2 = *(float *)(param_1 + 0x3944);
    pcVar12 = s_ROL_IC_WARTIME_0083d54c;
LAB_0049e3a3:
    dVar14 = (double)((fVar1 * _DAT_007e4088) / fVar3);
    dVar13 = (double)fVar2;
    uVar6 = FUN_0042b6c9(pcVar12);
    FUN_007a630a(local_208,uVar6,dVar13,dVar14);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  if ((*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) != 0) &&
     (*(float *)(param_1 + 0x394c) != _DAT_007e3380)) {
    dVar13 = (double)((*(float *)(param_1 + 0x394c) * _DAT_007e4088) / fVar3);
    dVar14 = (double)*(float *)(param_1 + 0x394c);
    uVar6 = FUN_0042b6c9(s_ROL_IC_IS_PUPPET_0083d524);
    FUN_007a630a(local_208,uVar6,dVar14,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  if (*(float *)(param_1 + 0x3934) != _DAT_007e3380) {
    dVar13 = (double)((*(float *)(param_1 + 0x3934) * _DAT_007e4088) / fVar3);
    dVar14 = (double)*(float *)(param_1 + 0x3934);
    uVar6 = FUN_0042b6c9(s_ROL_IC_RESOURCE_0083d514);
    FUN_007a630a(local_208,uVar6,dVar14,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    bVar4 = true;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  if (*(float *)(param_1 + 0x3948) == _DAT_007e3380) {
    if (!bVar4) goto LAB_0049e5bd;
  }
  else {
    dVar13 = (double)*(float *)(param_1 + 0x3948);
    uVar6 = FUN_0042b6c9();
    FUN_007a630a(local_208,uVar6,dVar13);
    uVar7 = 0xffffffff;
    pcVar12 = local_208;
    do {
      pcVar11 = pcVar12;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar11;
    } while (cVar5 != '\0');
    uVar7 = ~uVar7;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_008c4b94;
    do {
      pcVar10 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar12 + 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar5 != '\0');
    pcVar12 = pcVar11 + -uVar7;
    pcVar11 = pcVar10 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  FUN_0042b6c9(s_ROL_IC_SUM_0083d4fc);
  FUN_007a630a();
  uVar7 = 0xffffffff;
  pcVar12 = local_208;
  do {
    pcVar11 = pcVar12;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar12 + 1;
    cVar5 = *pcVar12;
    pcVar12 = pcVar11;
  } while (cVar5 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar12 = (char *)&DAT_008c4b94;
  do {
    pcVar10 = pcVar12;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar10 = pcVar12 + 1;
    cVar5 = *pcVar12;
    pcVar12 = pcVar10;
  } while (cVar5 != '\0');
  pcVar12 = pcVar11 + -uVar7;
  pcVar11 = pcVar10 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar11 = pcVar11 + 1;
  }
LAB_0049e5bd:
  return &DAT_008c4b94;
}


