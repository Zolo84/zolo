// FUN_00607a30 @ 607a30 size=1114

undefined4 * __thiscall
FUN_00607a30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  char *unaff_retaddr;
  char acStack_214 [4];
  undefined4 *local_210;
  char acStack_114 [256];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cfe15;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_007e3b70;
  local_4 = 0;
  local_210 = param_1;
  FUN_00433f00();
  local_4._0_1_ = 1;
  param_1[0x12] = param_5;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_007ef008;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007eefbc;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007eefb8;
  pvVar6 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar6 == (void *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_00414c80();
  }
  param_1[0x11] = piVar7;
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*piVar7 + 0x34))();
  (**(code **)(*(int *)param_1[0x11] + 0x38))();
  acStack_214[0] = '\0';
  param_1[0x10] = local_4;
  iVar8 = 0;
  do {
    cVar2 = *unaff_retaddr;
    unaff_retaddr = unaff_retaddr + 1;
    switch(cVar2) {
    case '\0':
      acStack_114[iVar8] = '\0';
      iVar8 = FUN_004129c4();
      iVar10 = FUN_004129c4();
      if (0x145 < iVar8 + iVar10) {
        uVar12 = 0xffffffff;
        pcVar9 = acStack_214;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        pcVar9 = operator_new(~uVar12);
        uVar12 = 0xffffffff;
        pcVar14 = acStack_214;
        do {
          pcVar15 = pcVar14;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar15 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar15;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        pcVar14 = pcVar15 + -uVar12;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar9 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        }
        acStack_214[0] = '\0';
        FUN_00427b00();
      }
      uVar12 = 0xffffffff;
      pcVar9 = acStack_114;
      do {
        pcVar14 = pcVar9;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar14 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar14;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      iVar8 = -1;
      pcVar9 = acStack_214;
      do {
        pcVar15 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar15 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar15;
      } while (cVar1 != '\0');
      pcVar9 = pcVar14 + -uVar12;
      pcVar14 = pcVar15 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar14 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar14 = pcVar14 + 1;
      }
      if (acStack_214[0] != '\0') {
LAB_00607bdd:
        uVar12 = 0xffffffff;
        pcVar9 = acStack_214;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        pcVar9 = operator_new(~uVar12);
        uVar12 = 0xffffffff;
        pcVar14 = acStack_214;
        do {
          pcVar15 = pcVar14;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar15 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar15;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        pcVar14 = pcVar15 + -uVar12;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar9 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar9 = pcVar9 + 1;
        }
        acStack_214[0] = '\0';
        FUN_00427b00();
      }
      iVar8 = 0;
      break;
    default:
      acStack_114[iVar8] = cVar2;
      iVar8 = iVar8 + 1;
      break;
    case '\n':
    case '\r':
      acStack_114[iVar8] = '\0';
      iVar8 = FUN_004129c4();
      iVar10 = FUN_004129c4();
      if (iVar8 + iVar10 < 0x146) {
        uVar12 = 0xffffffff;
        pcVar9 = acStack_114;
        do {
          pcVar14 = pcVar9;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar14;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12;
        iVar8 = -1;
        pcVar9 = acStack_214;
        do {
          pcVar15 = pcVar9;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar15 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar15;
        } while (cVar1 != '\0');
        pcVar9 = pcVar14 + -uVar12;
        pcVar14 = pcVar15 + -1;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar14 = pcVar14 + 1;
        }
        goto LAB_00607bdd;
      }
      uVar12 = 0xffffffff;
      pcVar9 = acStack_214;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar9 = operator_new(~uVar12);
      uVar12 = 0xffffffff;
      pcVar14 = acStack_214;
      do {
        pcVar15 = pcVar14;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar15 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar15;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar14 = pcVar15 + -uVar12;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar9 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar9 = pcVar9 + 1;
      }
      acStack_214[0] = '\0';
      FUN_00427b00();
      uVar12 = 0xffffffff;
      iVar8 = 0;
      pcVar9 = acStack_114;
      do {
        pcVar14 = pcVar9;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar14 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar14;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      iVar10 = -1;
      pcVar9 = acStack_214;
      do {
        pcVar15 = pcVar9;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar15 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar15;
      } while (cVar1 != '\0');
      pcVar9 = pcVar14 + -uVar12;
      pcVar14 = pcVar15 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar14 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar14 = pcVar14 + 1;
      }
      break;
    case ' ':
      acStack_114[iVar8] = ' ';
      acStack_114[iVar8 + 1] = '\0';
      iVar8 = FUN_004129c4();
      iVar10 = FUN_004129c4();
      if (0x145 < iVar8 + iVar10) {
        FUN_00607fe0();
      }
      uVar12 = 0xffffffff;
      iVar8 = 0;
      pcVar9 = acStack_114;
      do {
        pcVar14 = pcVar9;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar14 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar14;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      iVar10 = -1;
      pcVar9 = acStack_214;
      do {
        pcVar15 = pcVar9;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar15 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar15;
      } while (cVar1 != '\0');
      pcVar9 = pcVar14 + -uVar12;
      pcVar14 = pcVar15 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar14 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    if (cVar2 == '\0') {
      iVar8 = param_1[0x12];
      uVar12 = *(uint *)(iVar8 + 8);
      puVar11 = operator_new(0xe);
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)0x0;
      }
      else {
        *puVar11 = -(uint)(param_1 != (undefined4 *)0x0) & (int)param_1 + 0x12U;
        puVar11[1] = uVar12;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar10 = *(int *)(iVar8 + 0xc);
      *(uint **)(iVar8 + 8) = puVar11;
      *(int *)(iVar8 + 0xc) = iVar10 + 1;
      if (iVar10 == 0) {
        *(uint **)(iVar8 + 4) = puVar11;
      }
      else {
        *(uint **)(uVar12 + 8) = puVar11;
      }
      if (1 < (int)param_1[3]) {
        iVar8 = 0;
        puVar5 = (undefined4 *)param_1[1];
        while (puVar5 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)puVar5[2];
          uVar4 = *puVar5;
          if (0 < iVar8) {
            pvVar6 = operator_new(0x50);
            pvStack_c._0_1_ = 3;
            if (pvVar6 != (void *)0x0) {
              FUN_00607a30(local_4,uVar4,0,param_3);
            }
            pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
            FUN_00427b50();
            FUN_00796cd8();
          }
          iVar8 = iVar8 + 1;
          puVar5 = puVar3;
        }
      }
      ExceptionList = pvStack_14;
      return param_1;
    }
  } while( true );
}


