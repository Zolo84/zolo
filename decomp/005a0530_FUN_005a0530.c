// FUN_005a0530 @ 5a0530 size=1642

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a0530(undefined4 param_1,int *param_2)

{
  char cVar1;
  float10 fVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  float10 fVar15;
  char acStack_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cad64;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar4 = FUN_004136a0();
  puVar5 = operator_new(0x50);
  local_4 = 0;
  puVar11 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00598ae0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00433f00();
    *(undefined4 *)((int)puVar5 + 0x3e) = uVar4;
    *(undefined4 *)((int)puVar5 + 0x42) = param_1;
    *(undefined2 *)((int)puVar5 + 0x4a) = 0;
    puVar5[0x13] = 0;
    *puVar5 = &PTR_FUN_007eb380;
    puVar5[2] = &PTR_LAB_007eb37c;
    puVar11 = puVar5;
  }
  local_4 = 0xffffffff;
  FUN_0044df10();
  FUN_00598c30();
  pcVar6 = operator_new(0x104);
  local_4 = 2;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)(**(code **)(*param_2 + 0xc))();
    uVar8 = 0xffffffff;
    *(undefined ***)pcVar6 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar13 = pcVar13 + -uVar8;
    pcVar14 = pcVar6;
    for (uVar9 = uVar8 >> 2; pcVar14 = pcVar14 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar6 = &PTR_LAB_007eb23c;
    if (pcVar7 != (char *)0x0) {
      uVar8 = 0xffffffff;
      do {
        pcVar14 = pcVar7;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar7 = pcVar14 + -uVar8;
      pcVar14 = pcVar6 + 8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar14 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_4 = 0xffffffff;
  if (*(int *)((int)puVar11 + 0x32) < *(int *)((int)puVar11 + 0x36)) {
    *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar6;
    *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar6 = operator_new(0x104);
  local_4 = 3;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)FUN_0050a560();
    uVar8 = 0xffffffff;
    *(undefined ***)pcVar6 = &PTR_LAB_007eb264;
    pcVar14 = &DAT_0083bf04;
    do {
      pcVar13 = pcVar14;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar14 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar13 = pcVar13 + -uVar8;
    pcVar14 = pcVar6;
    for (uVar9 = uVar8 >> 2; pcVar14 = pcVar14 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar14 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(undefined ***)pcVar6 = &PTR_LAB_007eb23c;
    if (pcVar7 != (char *)0x0) {
      uVar8 = 0xffffffff;
      do {
        pcVar14 = pcVar7;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar7 = pcVar14 + -uVar8;
      pcVar14 = pcVar6 + 8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar14 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  local_4 = 0xffffffff;
  if (*(int *)((int)puVar11 + 0x32) < *(int *)((int)puVar11 + 0x36)) {
    *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar6;
    *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar6 = operator_new(0x108);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    iVar12 = *(int *)((int)param_2 + 0x32);
    uVar8 = 0xffffffff;
    *(undefined ***)pcVar6 = &PTR_LAB_007eb264;
    pcVar7 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar7;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar14 = pcVar14 + -uVar8;
    pcVar7 = pcVar6;
    for (uVar9 = uVar8 >> 2; pcVar7 = pcVar7 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar7 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(float *)(pcVar6 + 0x104) = (float)iVar12;
    *(undefined ***)pcVar6 = &PTR_LAB_007eb304;
    FUN_007a630a(pcVar6 + 8,&PTR_PTR_0083c9e8);
  }
  if (*(int *)((int)puVar11 + 0x32) < *(int *)((int)puVar11 + 0x36)) {
    *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar6;
    *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  pcVar6 = operator_new(0x108);
  local_4 = 4;
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    fVar15 = (float10)FUN_0050a030();
    uVar8 = 0xffffffff;
    *(undefined ***)pcVar6 = &PTR_LAB_007eb264;
    pcVar7 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar7;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar14;
    } while (cVar1 != '\0');
    fVar2 = (float10)_DAT_007e4088;
    uVar8 = ~uVar8;
    pcVar14 = pcVar14 + -uVar8;
    pcVar7 = pcVar6;
    for (uVar9 = uVar8 >> 2; pcVar7 = pcVar7 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar7 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(float *)(pcVar6 + 0x104) = (float)(fVar15 * fVar2);
    *(undefined ***)pcVar6 = &PTR_LAB_007eb304;
    FUN_007a630a(pcVar6 + 8,&PTR_PTR_0083c9e8);
  }
  local_4 = 0xffffffff;
  if (*(int *)((int)puVar11 + 0x32) < *(int *)((int)puVar11 + 0x36)) {
    *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar6;
    *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  if (*(int *)((int)param_2 + 0x5e) == 0) {
    pcVar6 = operator_new(0x104);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      uVar8 = 0xffffffff;
      *(undefined ***)pcVar6 = &PTR_LAB_007eb264;
      pcVar7 = &DAT_0083bf04;
      do {
        pcVar14 = pcVar7;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar14 = pcVar14 + -uVar8;
      pcVar7 = pcVar6;
      for (uVar9 = uVar8 >> 2; pcVar7 = pcVar7 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar7 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(undefined ***)pcVar6 = &PTR_LAB_007eb23c;
      uVar8 = 0xffffffff;
      pcVar7 = &DAT_0088ebf8;
      do {
        pcVar14 = pcVar7;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar7 = pcVar14 + -uVar8;
      pcVar14 = pcVar6 + 8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar14 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    if (*(int *)((int)puVar11 + 0x36) <= *(int *)((int)puVar11 + 0x32)) {
      FUN_00405ad0();
      goto LAB_005a0a45;
    }
    *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar6;
  }
  else {
    pcVar6 = operator_new(0x104);
    local_4 = 5;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar7 = (char *)(**(code **)(**(int **)((int)param_2 + 0x5e) + 0xc))();
      uVar8 = 0xffffffff;
      *(undefined ***)pcVar6 = &PTR_LAB_007eb264;
      pcVar14 = &DAT_0083bf04;
      do {
        pcVar13 = pcVar14;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar13 = pcVar13 + -uVar8;
      pcVar14 = pcVar6;
      for (uVar9 = uVar8 >> 2; pcVar14 = pcVar14 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar14 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar14 = pcVar14 + 1;
      }
      *(undefined ***)pcVar6 = &PTR_LAB_007eb23c;
      if (pcVar7 != (char *)0x0) {
        uVar8 = 0xffffffff;
        do {
          pcVar14 = pcVar7;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar7 = pcVar14 + -uVar8;
        pcVar14 = pcVar6 + 8;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar14 = pcVar14 + 1;
        }
      }
    }
    local_4 = 0xffffffff;
    if (*(int *)((int)puVar11 + 0x36) <= *(int *)((int)puVar11 + 0x32)) {
      FUN_00405ad0();
      goto LAB_005a0a45;
    }
    *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar6;
  }
  *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
LAB_005a0a45:
  bVar3 = false;
  acStack_40c[0] = '\0';
  iVar12 = 0;
  do {
    if ((*(uint *)((int)param_2 + 0x1e) & 1 << ((byte)iVar12 & 0x1f)) != 0) {
      if (bVar3) {
        uVar8 = 0xffffffff;
        pcVar6 = &DAT_0083bf48;
        do {
          pcVar7 = pcVar6;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar10 = -1;
        pcVar6 = acStack_40c;
        do {
          pcVar14 = pcVar6;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar14 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar14;
        } while (cVar1 != '\0');
        pcVar6 = pcVar7 + -uVar8;
        pcVar7 = pcVar14 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      pcVar6 = (char *)FUN_0050aa70();
      uVar8 = 0xffffffff;
      do {
        pcVar7 = pcVar6;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar6 = acStack_40c;
      do {
        pcVar14 = pcVar6;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar14 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar14;
      } while (cVar1 != '\0');
      pcVar6 = pcVar7 + -uVar8;
      pcVar7 = pcVar14 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      bVar3 = true;
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x1f);
  pcVar6 = operator_new(0x104);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    uVar8 = 0xffffffff;
    *(undefined ***)pcVar6 = &PTR_LAB_007eb264;
    pcVar7 = &DAT_0083bf04;
    do {
      pcVar14 = pcVar7;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar14 = pcVar14 + -uVar8;
    pcVar7 = pcVar6;
    for (uVar9 = uVar8 >> 2; pcVar7 = pcVar7 + 4, uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar7 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(undefined ***)pcVar6 = &PTR_LAB_007eb23c;
    if (&stack0x00000000 != (undefined1 *)0x40c) {
      uVar8 = 0xffffffff;
      pcVar7 = acStack_40c;
      do {
        pcVar14 = pcVar7;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar7 = pcVar14 + -uVar8;
      pcVar14 = pcVar6 + 8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar14 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  if (*(int *)((int)puVar11 + 0x32) < *(int *)((int)puVar11 + 0x36)) {
    *(char **)(*(int *)((int)puVar11 + 0x2e) + *(int *)((int)puVar11 + 0x32) * 4) = pcVar6;
    *(int *)((int)puVar11 + 0x32) = *(int *)((int)puVar11 + 0x32) + 1;
  }
  else {
    FUN_00405ad0();
  }
  FUN_00598ca0();
  ExceptionList = pvStack_c;
  return;
}


