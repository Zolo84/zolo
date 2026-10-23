// FUN_00608b40 @ 608b40 size=1532

void FUN_00608b40(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  void *in_stack_00001010;
  int in_stack_00001020;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined **local_c;
  int *local_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  local_8 = (int *)&LAB_007cff61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a69e0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  local_c = &PTR_FUN_007e5258;
  iVar12 = 0;
  piVar10 = &DAT_0089cad8;
  iVar11 = 0;
  do {
    iVar7 = iVar11;
    piVar1 = local_8;
    if ((*piVar10 != 0) &&
       (cVar3 = FUN_005861c0(iVar12), piVar2 = local_4, piVar1 = local_8, cVar3 != '\0')) {
      local_4 = operator_new(0xe);
      if (local_4 == (int *)0x0) {
        local_4 = (int *)0x0;
      }
      else {
        *local_4 = iVar12;
        local_4[1] = (int)piVar2;
        local_4[2] = 0;
        *(undefined1 *)(local_4 + 3) = 0;
      }
      iVar7 = iVar11 + 1;
      piVar1 = local_4;
      if (iVar11 != 0) {
        piVar2[2] = (int)local_4;
        piVar1 = local_8;
      }
    }
    local_8 = piVar1;
    piVar10 = piVar10 + 1;
    iVar12 = iVar12 + 1;
    iVar11 = iVar7;
  } while ((int)piVar10 < 0x89d038);
  if (iVar7 != 0) {
    pcVar4 = (char *)FUN_0042b6c9(s_DIGUAR_0085e964);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar4 + 1;
      cVar3 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8;
    pcVar4 = pcVar13 + -uVar8;
    pcVar13 = &stack0x00000010;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00608290(&stack0x00000010,&local_c,*(undefined4 *)(in_stack_00001020 + 6),99999);
    pvVar5 = operator_new(0x50);
    if (pvVar5 != (void *)0x0) {
      uVar17 = 0;
      puVar14 = &stack0x00000010;
      uVar15 = 1;
      uVar16 = extraout_ECX;
      uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar6,puVar14,uVar15,uVar16,uVar17);
    }
  }
  (*(code *)local_c[4])();
  iVar11 = 0;
  piVar10 = &DAT_0089cad8;
  do {
    iVar12 = iVar7;
    piVar1 = local_8;
    if ((*piVar10 != 0) &&
       (cVar3 = FUN_005861c0(*(undefined4 *)(in_stack_00001020 + 6)), piVar2 = local_4,
       piVar1 = local_8, cVar3 != '\0')) {
      local_4 = operator_new(0xe);
      if (local_4 == (int *)0x0) {
        local_4 = (int *)0x0;
      }
      else {
        *local_4 = iVar11;
        local_4[1] = (int)piVar2;
        local_4[2] = 0;
        *(undefined1 *)(local_4 + 3) = 0;
      }
      iVar12 = iVar7 + 1;
      piVar1 = local_4;
      if (iVar7 != 0) {
        piVar2[2] = (int)local_4;
        piVar1 = local_8;
      }
    }
    local_8 = piVar1;
    piVar10 = piVar10 + 1;
    iVar11 = iVar11 + 1;
    iVar7 = iVar12;
  } while ((int)piVar10 < 0x89d038);
  if (iVar12 != 0) {
    pcVar4 = (char *)FUN_0042b6c9(s_DIGUAR2_0085e95c);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar4 + 1;
      cVar3 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8;
    pcVar4 = pcVar13 + -uVar8;
    pcVar13 = &stack0x00000010;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00608290(&stack0x00000010,&local_c,*(undefined4 *)(in_stack_00001020 + 6),99999);
    pvVar5 = operator_new(0x50);
    if (pvVar5 != (void *)0x0) {
      uVar17 = 0;
      puVar14 = &stack0x00000010;
      uVar15 = 1;
      uVar16 = extraout_ECX;
      uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar6,puVar14,uVar15,uVar16,uVar17);
    }
  }
  (*(code *)local_c[4])();
  iVar11 = 0;
  piVar10 = &DAT_0089cad8;
  do {
    piVar1 = local_4;
    iVar7 = iVar12;
    piVar2 = local_8;
    if ((*piVar10 != 0) && (*(char *)(iVar11 + 0x3354 + in_stack_00001020) != '\0')) {
      local_4 = operator_new(0xe);
      if (local_4 == (int *)0x0) {
        local_4 = (int *)0x0;
      }
      else {
        *local_4 = iVar11;
        local_4[1] = (int)piVar1;
        local_4[2] = 0;
        *(undefined1 *)(local_4 + 3) = 0;
      }
      iVar7 = iVar12 + 1;
      piVar2 = local_4;
      if (iVar12 != 0) {
        piVar1[2] = (int)local_4;
        piVar2 = local_8;
      }
    }
    local_8 = piVar2;
    piVar10 = piVar10 + 1;
    iVar11 = iVar11 + 1;
    iVar12 = iVar7;
  } while ((int)piVar10 < 0x89d038);
  if (iVar7 != 0) {
    pcVar4 = (char *)FUN_0042b6c9(s_WECLAIMSON_0085e950);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar4 + 1;
      cVar3 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8;
    pcVar4 = pcVar13 + -uVar8;
    pcVar13 = &stack0x00000010;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00608290(&stack0x00000010,&local_c,*(undefined4 *)(in_stack_00001020 + 6),99999);
    pvVar5 = operator_new(0x50);
    if (pvVar5 != (void *)0x0) {
      uVar17 = 0;
      puVar14 = &stack0x00000010;
      uVar15 = 7;
      uVar16 = extraout_ECX;
      uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar6,puVar14,uVar15,uVar16,uVar17);
    }
  }
  (*(code *)local_c[4])();
  iVar11 = 0;
  piVar10 = &DAT_0089cad8;
  do {
    piVar1 = local_4;
    iVar12 = iVar7;
    piVar2 = local_8;
    if ((*piVar10 != 0) && (*(char *)(iVar11 + 0x34ac + in_stack_00001020) != '\0')) {
      local_4 = operator_new(0xe);
      if (local_4 == (int *)0x0) {
        local_4 = (int *)0x0;
      }
      else {
        *local_4 = iVar11;
        local_4[1] = (int)piVar1;
        local_4[2] = 0;
        *(undefined1 *)(local_4 + 3) = 0;
      }
      iVar12 = iVar7 + 1;
      piVar2 = local_4;
      if (iVar7 != 0) {
        piVar1[2] = (int)local_4;
        piVar2 = local_8;
      }
    }
    local_8 = piVar2;
    piVar10 = piVar10 + 1;
    iVar11 = iVar11 + 1;
    iVar7 = iVar12;
  } while ((int)piVar10 < 0x89d038);
  if (iVar12 != 0) {
    pcVar4 = (char *)FUN_0042b6c9(s_CONTROLSBY_0085e944);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar4 + 1;
      cVar3 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8;
    pcVar4 = pcVar13 + -uVar8;
    pcVar13 = &stack0x00000010;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00608290(&stack0x00000010,&local_c,*(undefined4 *)(in_stack_00001020 + 6),99999);
    pvVar5 = operator_new(0x50);
    if (pvVar5 != (void *)0x0) {
      uVar17 = 0;
      puVar14 = &stack0x00000010;
      uVar15 = 1;
      uVar16 = extraout_ECX;
      uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar6,puVar14,uVar15,uVar16,uVar17);
    }
  }
  (*(code *)local_c[4])();
  iVar11 = 0;
  piVar10 = &DAT_0089cad8;
  do {
    piVar1 = local_4;
    iVar7 = iVar12;
    piVar2 = local_8;
    if ((*piVar10 != 0) && (*(char *)(*piVar10 + 0x34ac + *(int *)(in_stack_00001020 + 6)) != '\0'))
    {
      local_4 = operator_new(0xe);
      if (local_4 == (int *)0x0) {
        local_4 = (int *)0x0;
      }
      else {
        *local_4 = iVar11;
        local_4[1] = (int)piVar1;
        local_4[2] = 0;
        *(undefined1 *)(local_4 + 3) = 0;
      }
      iVar7 = iVar12 + 1;
      piVar2 = local_4;
      if (iVar12 != 0) {
        piVar1[2] = (int)local_4;
        piVar2 = local_8;
      }
    }
    local_8 = piVar2;
    piVar10 = piVar10 + 1;
    iVar11 = iVar11 + 1;
    iVar12 = iVar7;
  } while ((int)piVar10 < 0x89d038);
  if (iVar7 != 0) {
    pcVar4 = (char *)FUN_0042b6c9(s_WECONTROLS_0085e938);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar4 + 1;
      cVar3 = *pcVar4;
      pcVar4 = pcVar13;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8;
    pcVar4 = pcVar13 + -uVar8;
    pcVar13 = &stack0x00000010;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00608290(&stack0x00000010,&local_c,*(undefined4 *)(in_stack_00001020 + 6),99999);
    pvVar5 = operator_new(0x50);
    if (pvVar5 != (void *)0x0) {
      uVar17 = 0;
      puVar14 = &stack0x00000010;
      uVar15 = 1;
      uVar16 = extraout_ECX;
      uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar6,puVar14,uVar15,uVar16,uVar17);
    }
  }
  (*(code *)local_c[4])();
  local_c = &PTR_LAB_007e3ff0;
  piVar10 = local_8;
  while (piVar10 != (int *)0x0) {
    piVar1 = (int *)piVar10[2];
    FUN_00796cd8(piVar10);
    piVar10 = piVar1;
  }
  ExceptionList = in_stack_00001010;
  return;
}


