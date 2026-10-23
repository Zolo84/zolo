// FUN_00616810 @ 616810 size=986

undefined4 * __fastcall FUN_00616810(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  double dVar12;
  undefined8 uVar13;
  char local_108 [260];
  
  iVar8 = (&DAT_0089cad8)[*(int *)(param_1 + 0x2e)];
  if (iVar8 == 0) {
    return (undefined4 *)0x0;
  }
  DAT_00cf8908._0_1_ = 0;
  FUN_00760760();
  pcVar2 = (char *)FUN_007637f0();
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar2 = (char *)&DAT_00cf8908;
  do {
    pcVar9 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar2 = &DAT_00839650;
  do {
    pcVar10 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar2 = (char *)&DAT_00cf8908;
  do {
    pcVar9 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  fVar11 = (float10)FUN_005885d0();
  dVar12 = (double)fVar11;
  uVar3 = FUN_0042b6c9(s_OURLEATION_0085d160);
  FUN_007a630a(local_108,uVar3,dVar12);
  uVar5 = 0xffffffff;
  pcVar2 = local_108;
  do {
    pcVar10 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar2 = (char *)&DAT_00cf8908;
  do {
    pcVar9 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar2 = &DAT_00839650;
  do {
    pcVar10 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar2 = (char *)&DAT_00cf8908;
  do {
    pcVar9 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  dVar12 = (double)*(float *)(iVar8 + 0x334c);
  uVar3 = FUN_0042b6c9(s_BELILIGINFO_0085d154);
  FUN_007a630a(local_108,uVar3,dVar12);
  uVar5 = 0xffffffff;
  pcVar2 = local_108;
  do {
    pcVar10 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar2 = (char *)&DAT_00cf8908;
  do {
    pcVar9 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar2 = &DAT_00839650;
  do {
    pcVar10 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar2 = (char *)&DAT_00cf8908;
  do {
    pcVar9 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if ((*(char *)(*(int *)(iVar8 + 0x12da) + (*(int *)(DAT_00d0ca90 + 6) + 1) * 0x2c) != '\0') ||
     ((*(int *)(iVar8 + 0x3350) != 0 &&
      (*(int *)(iVar8 + 0x3350) == *(int *)(DAT_00d0ca90 + 0x3350))))) {
    pcVar2 = (char *)FUN_0042b6c9();
    uVar5 = 0xffffffff;
    do {
      pcVar10 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar2 = (char *)&DAT_00cf8908;
    do {
      pcVar9 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar2 = pcVar10 + -uVar5;
    pcVar10 = pcVar9 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar2 = &DAT_00839650;
    do {
      pcVar10 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar2 = (char *)&DAT_00cf8908;
    do {
      pcVar9 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar2 = pcVar10 + -uVar5;
    pcVar10 = pcVar9 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  iVar6 = *(int *)(*(int *)(iVar8 + 0x12da) + 0x3b30);
  if (iVar6 != 0) {
    (**(code **)(*(int *)((&DAT_0089cad8)[iVar6] + 0xe) + 0xc))();
    uVar3 = FUN_0042b6c9(s_DIP_PUPPET_SHORT_0085d120);
    FUN_007a630a(local_108,uVar3);
    uVar5 = 0xffffffff;
    pcVar2 = local_108;
    do {
      pcVar10 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar2 = (char *)&DAT_00cf8908;
    do {
      pcVar9 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar2 = pcVar10 + -uVar5;
    pcVar10 = pcVar9 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar2 = &DAT_00839650;
    do {
      pcVar10 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar2 = (char *)&DAT_00cf8908;
    do {
      pcVar9 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar2 = pcVar10 + -uVar5;
    pcVar10 = pcVar9 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  uVar3 = *(undefined4 *)(iVar8 + 0x3954);
  uVar4 = FUN_0044ab40();
  uVar13 = CONCAT44(uVar3,uVar4);
  uVar3 = FUN_0042b6c9(s_EYR_T_IC_00858490);
  FUN_007a630a(local_108,s__s___d__d_0085d10c,uVar3,uVar13);
  uVar5 = 0xffffffff;
  pcVar2 = local_108;
  do {
    pcVar10 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar8 = -1;
  pcVar2 = (char *)&DAT_00cf8908;
  do {
    pcVar9 = pcVar2;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar2 = &DAT_00839650;
  do {
    pcVar10 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar8 = -1;
  pcVar2 = (char *)&DAT_00cf8908;
  do {
    pcVar9 = pcVar2;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  iVar8 = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  do {
    fVar11 = (float10)FUN_004a45e0();
    uVar3 = FUN_0070d200(iVar8,(double)fVar11);
    FUN_007a630a(local_108,s__s_____2f_0085f628,uVar3);
    uVar5 = 0xffffffff;
    pcVar2 = local_108;
    do {
      pcVar10 = pcVar2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar2 = (char *)&DAT_00cf8908;
    do {
      pcVar9 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar2 = pcVar10 + -uVar5;
    pcVar10 = pcVar9 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    iVar8 = iVar8 + 1;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    if (5 < iVar8) {
      return &DAT_00cf8908;
    }
  } while( true );
}


