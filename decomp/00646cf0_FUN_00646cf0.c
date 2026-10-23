// FUN_00646cf0 @ 646cf0 size=4174

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00646cf0(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *extraout_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  void *in_stack_000023fc;
  undefined4 *in_stack_0000241c;
  void *pvStack_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = 0xffff;
  uStack_2 = 0xffff;
  uStack_8 = 0x26bb;
  uStack_6 = 0x7d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007a69e0();
  FUN_006446b0();
  *(undefined2 *)((int)extraout_ECX + 0xc2) = 0;
  *(undefined1 *)(extraout_ECX + 0x30) = 0;
  *(undefined1 *)((int)extraout_ECX + 0xbf) = 0;
  *(undefined1 *)((int)extraout_ECX + 0xbe) = 0;
  *(undefined2 *)(extraout_ECX + 0x31) = 0;
  *(undefined4 *)((int)extraout_ECX + 0xc6) = 0;
  *(undefined2 *)((int)extraout_ECX + 0xde) = 0;
  extraout_ECX[0x38] = 0;
  *extraout_ECX = &PTR_FUN_007f0390;
  extraout_ECX[2] = &PTR_LAB_007f038c;
  (**(code **)(*DAT_00bd0e18 + 0x20))();
  *(undefined4 *)((int)extraout_ECX + 0xb2) = 0x4b;
  extraout_ECX[0x2e] = *(undefined4 *)((int)in_stack_0000241c + 0x16);
  puVar8 = in_stack_0000241c;
  puVar11 = extraout_ECX + 0x2f;
  for (iVar5 = 0x3a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  pcVar3 = (char *)FUN_0042b6c9();
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
  pcVar9 = pcVar9 + -uVar6;
  pcVar3 = (char *)register0x00000010;
  for (uVar7 = uVar6 >> 2; pcVar3 = pcVar3 + 4, uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar3 = pcVar3 + 1;
  }
  FUN_006ec610();
  (**(code **)(*(int *)((&DAT_0089cad8)[extraout_ECX[0x2e]] + 0xe) + 0xc))();
  FUN_007a630a();
  FUN_004361a0();
  bVar2 = false;
  piVar10 = in_stack_0000241c + 10;
  pvStack_c = (void *)0x5;
  do {
    if (0 < *piVar10) {
      if (bVar2) {
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_0083bf48;
        do {
          pcVar9 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      piVar4 = (int *)FUN_004e9370();
      pcVar3 = (char *)(**(code **)(*piVar4 + 0xc))();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      bVar2 = true;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    piVar10 = piVar10 + 1;
    pvStack_c = (void *)((int)pvStack_c + -1);
  } while (pvStack_c != (void *)0x0);
  pvStack_c = (void *)0x5;
  piVar10 = in_stack_0000241c + 0x14;
  do {
    if (0 < *piVar10) {
      if (bVar2) {
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_0083bf48;
        do {
          pcVar9 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      uStack_8 = 0x11;
      uStack_6 = (undefined2)*piVar10;
      uStack_4 = (undefined2)((uint)*piVar10 >> 0x10);
      iVar5 = FUN_00428460();
      if ((iVar5 != 0) && ((int *)(iVar5 + -8) != (int *)0x0)) {
        pcVar3 = (char *)(**(code **)(*(int *)(iVar5 + -8) + 0xc))();
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
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        bVar2 = true;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
    }
    piVar10 = piVar10 + 1;
    pvStack_c = (void *)((int)pvStack_c + -1);
  } while (pvStack_c != (void *)0x0);
  pvStack_c = (void *)0x5;
  piVar10 = in_stack_0000241c + 0x1e;
  do {
    if (0 < *piVar10) {
      if (bVar2) {
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_0083bf48;
        do {
          pcVar9 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      uStack_8 = (undefined2)piVar10[5];
      uStack_6 = (undefined2)*piVar10;
      uStack_4 = (undefined2)((uint)*piVar10 >> 0x10);
      iVar5 = FUN_00428ee0();
      if ((iVar5 != 0) && ((int *)(iVar5 + -8) != (int *)0x0)) {
        pcVar3 = (char *)(**(code **)(*(int *)(iVar5 + -8) + 0xc))();
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
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        bVar2 = true;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
    }
    piVar10 = piVar10 + 1;
    pvStack_c = (void *)((int)pvStack_c + -1);
  } while (pvStack_c != (void *)0x0);
  if (_DAT_007e3380 < (float)extraout_ECX[0x65]) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if (_DAT_007e3380 < (float)extraout_ECX[99]) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if (_DAT_007e3380 < (float)extraout_ECX[0x62]) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if (_DAT_007e3380 < (float)extraout_ECX[100]) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if (_DAT_007e3380 < (float)extraout_ECX[0x61]) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if ((float)extraout_ECX[0x66] <= _DAT_007e3380) {
    if (bVar2) goto LAB_006474e9;
    pcVar3 = (char *)FUN_0042b6c9();
  }
  else {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    pcVar3 = (char *)&param_1;
  }
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
  iVar5 = -1;
  pcVar3 = &stack0x00000408;
  do {
    pcVar12 = pcVar3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar12 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar12;
  } while (cVar1 != '\0');
  pcVar3 = pcVar9 + -uVar6;
  pcVar9 = pcVar12 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
LAB_006474e9:
  FUN_004361a0();
  bVar2 = false;
  piVar10 = in_stack_0000241c + 0xf;
  pvStack_c = (void *)0x5;
  do {
    if (0 < *piVar10) {
      if (bVar2) {
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_0083bf48;
        do {
          pcVar9 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      piVar4 = (int *)FUN_004e9370();
      pcVar3 = (char *)(**(code **)(*piVar4 + 0xc))();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      bVar2 = true;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    piVar10 = piVar10 + 1;
    pvStack_c = (void *)((int)pvStack_c + -1);
  } while (pvStack_c != (void *)0x0);
  pvStack_c = (void *)0x5;
  piVar10 = in_stack_0000241c + 0x19;
  do {
    if (0 < *piVar10) {
      if (bVar2) {
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_0083bf48;
        do {
          pcVar9 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      uStack_8 = 0x11;
      uStack_6 = (undefined2)*piVar10;
      uStack_4 = (undefined2)((uint)*piVar10 >> 0x10);
      iVar5 = FUN_00428460();
      if ((iVar5 != 0) && ((int *)(iVar5 + -8) != (int *)0x0)) {
        pcVar3 = (char *)(**(code **)(*(int *)(iVar5 + -8) + 0xc))();
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
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        bVar2 = true;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
    }
    piVar10 = piVar10 + 1;
    pvStack_c = (void *)((int)pvStack_c + -1);
  } while (pvStack_c != (void *)0x0);
  pvStack_c = (void *)0x5;
  piVar10 = in_stack_0000241c + 0x28;
  do {
    if (0 < *piVar10) {
      if (bVar2) {
        uVar6 = 0xffffffff;
        pcVar3 = &DAT_0083bf48;
        do {
          pcVar9 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      uStack_8 = (undefined2)piVar10[5];
      uStack_6 = (undefined2)*piVar10;
      uStack_4 = (undefined2)((uint)*piVar10 >> 0x10);
      iVar5 = FUN_00428ee0();
      if ((iVar5 != 0) && ((int *)(iVar5 + -8) != (int *)0x0)) {
        pcVar3 = (char *)(**(code **)(*(int *)(iVar5 + -8) + 0xc))();
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
        iVar5 = -1;
        pcVar3 = &stack0x00000408;
        do {
          pcVar12 = pcVar3;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar9 + -uVar6;
        pcVar9 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar9 = pcVar9 + 4;
        }
        bVar2 = true;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
    }
    piVar10 = piVar10 + 1;
    pvStack_c = (void *)((int)pvStack_c + -1);
  } while (pvStack_c != (void *)0x0);
  if ((float)extraout_ECX[0x65] < _DAT_007e3380) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if ((float)extraout_ECX[99] < _DAT_007e3380) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if ((float)extraout_ECX[0x62] < _DAT_007e3380) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if ((float)extraout_ECX[100] < _DAT_007e3380) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if ((float)extraout_ECX[0x61] < _DAT_007e3380) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if ((float)extraout_ECX[0x66] < _DAT_007e3380) {
    if (bVar2) {
      pcVar3 = (char *)FUN_0042b6c9();
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
      iVar5 = -1;
      pcVar3 = &stack0x00000408;
      do {
        pcVar12 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = pcVar12 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    FUN_0042b6c9();
    FUN_007a630a();
    uVar6 = 0xffffffff;
    pcVar3 = (char *)&param_1;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    bVar2 = true;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if (*(char *)(in_stack_0000241c + 0x38) != '\0') {
    FUN_0042b6c9();
    FUN_007a630a();
    FUN_004361a0();
  }
  FUN_0042b6c9();
  FUN_004361a0();
  if (!bVar2) {
    pcVar3 = (char *)FUN_0042b6c9();
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
    iVar5 = -1;
    pcVar3 = &stack0x00000408;
    do {
      pcVar12 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar12;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  FUN_004361a0();
  iVar5 = extraout_ECX[0x2e];
  if ((&DAT_0089cad8)[iVar5] != 0) {
    FUN_0042b6c9();
    FUN_004361a0();
    (**(code **)(*(int *)((&DAT_0089cad8)[iVar5] + 0xe) + 0xc))();
    FUN_004361a0();
  }
  FUN_00644950();
  FUN_0043e780();
  iVar5 = **(int **)((int)extraout_ECX + 0xae);
  FUN_0044b1c0();
  (**(code **)(iVar5 + 0x2c))();
  (**(code **)(**(int **)((int)extraout_ECX + 0xae) + 0x34))();
  iVar5 = *(int *)((int)extraout_ECX + 0xae);
  *(undefined4 *)(iVar5 + 0x22) = 0;
  *(undefined4 *)(iVar5 + 0x26) = 10;
  *(undefined1 *)(iVar5 + 0x67) = 0;
  FUN_00413d60();
  FUN_00415f20();
  (**(code **)(**(int **)((int)extraout_ECX + 0x96) + 0x38))();
  ExceptionList = in_stack_000023fc;
  return extraout_ECX;
}


