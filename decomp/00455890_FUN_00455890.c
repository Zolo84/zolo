// FUN_00455890 @ 455890 size=1075

undefined4 *
FUN_00455890(int param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **ppuVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 local_25c;
  float local_258 [22];
  char local_200 [256];
  undefined1 local_100 [256];
  
  DAT_0089c0c8._0_1_ = 0;
  if (*(int *)(*DAT_00d12b40 + 0x41a) == 0) goto LAB_00455cb4;
  uVar3 = FUN_0042b6c9();
  FUN_007a630a(local_200,uVar3);
  uVar6 = 0xffffffff;
  pcVar10 = local_200;
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  local_25c = 0;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0089c0c8;
  do {
    pcVar11 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  pcVar10 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  iVar7 = -1;
  bVar1 = true;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (param_1 == 0) {
    if (param_2 == 0x8c) {
      if (*param_4 != 0) {
        bVar1 = false;
        local_25c = 1;
        iVar4 = *(int *)((&DAT_00dbf99a)[*param_4] + 0x18);
        if (iVar4 == 0) {
          iVar7 = 0;
        }
        else if (iVar4 == 1) {
          iVar7 = 1;
        }
        else if (iVar4 == 2) goto LAB_004559ac;
      }
    }
    else {
      iVar7 = (&DAT_00dbd1a2)[param_2];
      if (iVar7 < 0xc) {
        iVar7 = 0;
      }
      else {
        if ((0x14 < iVar7) && (iVar7 != 0x8c)) goto LAB_004559ac;
        iVar7 = 1;
      }
    }
  }
  else if (*(char *)(param_1 + 0x15f) == '\0') {
    if (*(char *)(param_1 + 0x160) == '\0') {
      if (*(char *)(param_1 + 0x161) != '\0') {
LAB_004559ac:
        iVar7 = 2;
      }
    }
    else {
      iVar7 = 1;
    }
  }
  else {
    iVar7 = 0;
  }
  if (iVar7 == 0) {
    FUN_00455cd0(local_258,0,param_1,param_2,param_3,param_4,param_5);
    iVar7 = 0;
    pfVar9 = local_258;
    do {
      cVar2 = FUN_005073a0(iVar7,local_258,local_25c);
      if (cVar2 != '\0') {
        bVar1 = true;
        iVar4 = __ftol();
        ppuVar5 = &PTR_PTR_0083c9e8;
        if ((float)iVar4 != *pfVar9) {
          ppuVar5 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(local_100,ppuVar5,(double)*pfVar9);
        FUN_00506dd0(iVar7);
        uVar3 = FUN_0042b6c9(s_UNIT_ATTRIBUTES_LINE_0083c9c8);
        FUN_007a630a(local_200,uVar3);
        uVar6 = 0xffffffff;
        pcVar10 = local_200;
        do {
          pcVar12 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0089c0c8;
        do {
          pcVar11 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar11 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar2 != '\0');
        pcVar10 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar7 < 0x16);
  }
  else if (iVar7 == 1) {
    FUN_00455cd0(local_258,1,param_1,param_2,param_3,param_4,param_5);
    iVar7 = 0;
    pfVar9 = local_258;
    do {
      cVar2 = FUN_00507460(iVar7,local_258,local_25c);
      if (cVar2 != '\0') {
        bVar1 = true;
        iVar4 = __ftol();
        ppuVar5 = &PTR_PTR_0083c9e8;
        if ((float)iVar4 != *pfVar9) {
          ppuVar5 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(local_100,ppuVar5,(double)*pfVar9);
        FUN_00506ff0(iVar7);
        uVar3 = FUN_0042b6c9(s_UNIT_ATTRIBUTES_LINE_0083c9c8);
        FUN_007a630a(local_200,uVar3);
        uVar6 = 0xffffffff;
        pcVar10 = local_200;
        do {
          pcVar12 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0089c0c8;
        do {
          pcVar11 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar11 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar2 != '\0');
        pcVar10 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar7 < 0x12);
  }
  else if (iVar7 == 2) {
    FUN_00455cd0(local_258,2,param_1,param_2,param_3,param_4,param_5);
    iVar7 = 0;
    pfVar9 = local_258;
    do {
      cVar2 = FUN_005074c0(iVar7,local_258,local_25c);
      if (cVar2 != '\0') {
        bVar1 = true;
        iVar4 = __ftol();
        ppuVar5 = &PTR_PTR_0083c9e8;
        if ((float)iVar4 != *pfVar9) {
          ppuVar5 = (undefined **)&DAT_0083c9e0;
        }
        FUN_007a630a(local_100,ppuVar5,(double)*pfVar9);
        FUN_005071b0(iVar7);
        uVar3 = FUN_0042b6c9(s_UNIT_ATTRIBUTES_LINE_0083c9c8);
        FUN_007a630a(local_200,uVar3);
        uVar6 = 0xffffffff;
        pcVar10 = local_200;
        do {
          pcVar12 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar10 = (char *)&DAT_0089c0c8;
        do {
          pcVar11 = pcVar10;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar11 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar2 != '\0');
        pcVar10 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar7 < 0x15);
  }
  if (!bVar1) {
    DAT_0089c0c8._0_1_ = 0;
  }
LAB_00455cb4:
  return &DAT_0089c0c8;
}


