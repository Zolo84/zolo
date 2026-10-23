// FUN_0050a610 @ 50a610 size=1107

/* WARNING: Removing unreachable block (ram,0x0050a962) */
/* WARNING: Removing unreachable block (ram,0x0050a974) */
/* WARNING: Removing unreachable block (ram,0x0050a97e) */
/* WARNING: Removing unreachable block (ram,0x0050a985) */
/* WARNING: Removing unreachable block (ram,0x0050a98b) */
/* WARNING: Removing unreachable block (ram,0x0050a9a3) */
/* WARNING: Removing unreachable block (ram,0x0050a952) */
/* WARNING: Removing unreachable block (ram,0x0050a9a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0050a610(int *param_1)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  undefined8 uVar16;
  double dVar17;
  int *piStack_11c;
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c166b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar6 = FUN_0050a460(*(undefined4 *)((int)param_1 + 0x26));
  (**(code **)(*param_1 + 0xc))();
  FUN_007a630a(&DAT_00ad5acc,s__s__s_0083f54c,uVar6);
  if (*(int *)((int)param_1 + 0x26) == 1) {
    uVar6 = FUN_0050a580();
    uVar7 = FUN_0042b6c9(s_CANCOMMANDN_0084a240);
    uVar16 = CONCAT44(uVar6,uVar7);
  }
  else if (*(int *)((int)param_1 + 0x26) == 2) {
    uVar6 = FUN_0050a580();
    uVar7 = FUN_0042b6c9(s_CANCOMMANDA_0084a24c);
    uVar16 = CONCAT44(uVar6,uVar7);
  }
  else {
    uVar6 = FUN_0050a580();
    uVar7 = FUN_0042b6c9(s_CANCOMMAND_0084a258);
    uVar16 = CONCAT44(uVar6,uVar7);
  }
  FUN_007a630a(acStack_10c,uVar16);
  uVar9 = 0xffffffff;
  pcVar8 = acStack_10c;
  do {
    pcVar14 = pcVar8;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar14;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar10 = -1;
  pcVar8 = (char *)&DAT_00ad5acc;
  do {
    pcVar13 = pcVar8;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar13 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar13;
  } while (cVar1 != '\0');
  pcVar8 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar8 = &DAT_00839650;
  do {
    pcVar14 = pcVar8;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar14;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar10 = -1;
  pcVar8 = (char *)&DAT_00ad5acc;
  do {
    pcVar13 = pcVar8;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar13 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar13;
  } while (cVar1 != '\0');
  pcVar8 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar6 = FUN_0042b6c9(s_LEADER_SKILL_0084a230);
  FUN_007a630a(acStack_10c,uVar6);
  uVar9 = 0xffffffff;
  pcVar8 = acStack_10c;
  do {
    pcVar14 = pcVar8;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar14;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar10 = -1;
  pcVar8 = (char *)&DAT_00ad5acc;
  do {
    pcVar13 = pcVar8;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar13 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar13;
  } while (cVar1 != '\0');
  pcVar8 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar9 = uVar9 & 3; fVar4 = _DAT_007e3380, uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar14 = pcVar14 + 1;
  }
  fVar3 = (float)(int)(&DAT_0084a0ec)[*(int *)((int)param_1 + 0x32)];
  if (fVar3 <= *(float *)((int)param_1 + 0x36)) {
    fVar4 = _DAT_007e3374;
    if (*(float *)((int)param_1 + 0x36) <
        (float)*(int *)(&DAT_0084a0f0 + *(int *)((int)param_1 + 0x32) * 4)) {
      fVar4 = (*(float *)((int)param_1 + 0x36) - fVar3) /
              ((float)*(int *)(&DAT_0084a0f0 + *(int *)((int)param_1 + 0x32) * 4) - fVar3);
    }
  }
  else {
    *(float *)((int)param_1 + 0x36) = fVar3;
  }
  dVar17 = (double)(fVar4 * _DAT_007e4088);
  uVar6 = FUN_0042b6c9(s_LEADER_EXP_0084a224);
  FUN_007a630a(acStack_10c,uVar6,dVar17);
  uVar9 = 0xffffffff;
  pcVar8 = acStack_10c;
  do {
    pcVar14 = pcVar8;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar14 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar14;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar10 = -1;
  pcVar8 = (char *)&DAT_00ad5acc;
  do {
    pcVar13 = pcVar8;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar13 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar13;
  } while (cVar1 != '\0');
  pcVar8 = pcVar14 + -uVar9;
  pcVar14 = pcVar13 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar14 = pcVar14 + 4;
  }
  bVar15 = DAT_00dc195d != '\0';
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar14 = pcVar14 + 1;
  }
  if (bVar15) {
    uVar6 = FUN_0042b6c9(s_LEADER_RETIREMENT_0084a210);
    FUN_007a630a(acStack_10c,uVar6);
    uVar9 = 0xffffffff;
    pcVar8 = acStack_10c;
    do {
      pcVar14 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    iVar10 = -1;
    pcVar8 = (char *)&DAT_00ad5acc;
    do {
      pcVar13 = pcVar8;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar13 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar1 != '\0');
    pcVar8 = pcVar14 + -uVar9;
    pcVar14 = pcVar13 + -1;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  iVar10 = 0;
  do {
    if ((*(uint *)((int)param_1 + 0x1e) & 1 << ((byte)iVar10 & 0x1f)) != 0) {
      pcVar8 = (char *)FUN_0050aa70();
      uVar9 = 0xffffffff;
      do {
        pcVar14 = pcVar8;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar12 = -1;
      pcVar8 = (char *)&DAT_00ad5acc;
      do {
        pcVar13 = pcVar8;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      pcVar8 = pcVar14 + -uVar9;
      pcVar14 = pcVar13 + -1;
      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar8 = &DAT_00839650;
      do {
        pcVar14 = pcVar8;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar12 = -1;
      pcVar8 = (char *)&DAT_00ad5acc;
      do {
        pcVar13 = pcVar8;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      pcVar8 = pcVar14 + -uVar9;
      pcVar14 = pcVar13 + -1;
      for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x1f);
  piStack_11c = (int *)0x0;
  uStack_4 = 0;
  FUN_004b3100(param_1);
  bVar15 = false;
  piVar5 = piStack_11c;
  while (piVar2 = piStack_11c, bVar15) {
    piVar2 = (int *)piVar5[2];
    if (*(int *)(*piVar5 + 4) == 0) {
      (*(code *)PTR_FUN_007e7104)(&stack0xfffffec8,*piVar5);
      (*(code *)PTR_FUN_007e70f8)();
    }
    bVar15 = piVar2 != (int *)0x0;
    piVar5 = piVar2;
  }
  do {
    if (piVar2 == (int *)0x0) {
      while (piStack_11c != (int *)0x0) {
        piStack_11c = (int *)piStack_11c[2];
        FUN_00796cd8();
      }
      ExceptionList = pvStack_c;
      return &DAT_00ad5acc;
    }
    iVar10 = *piVar2;
    uVar9 = 0xffffffff;
    pcVar8 = &DAT_0084a208;
    do {
      pcVar14 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    iVar12 = -1;
    pcVar8 = (char *)&DAT_00ad5acc;
    do {
      pcVar13 = pcVar8;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar13 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar1 != '\0');
    pcVar8 = pcVar14 + -uVar9;
    pcVar14 = pcVar13 + -1;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
    pcVar8 = (char *)FUN_004b3730(param_1,iVar10);
    uVar9 = 0xffffffff;
    do {
      pcVar14 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    iVar10 = -1;
    pcVar8 = (char *)&DAT_00ad5acc;
    do {
      pcVar13 = pcVar8;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar13 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar1 != '\0');
    pcVar8 = pcVar14 + -uVar9;
    pcVar14 = pcVar13 + -1;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}


