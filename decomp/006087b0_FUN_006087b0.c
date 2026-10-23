// FUN_006087b0 @ 6087b0 size=790

void FUN_006087b0(void)

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
  int iVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  int *piStack00000008;
  void *in_stack_00002010;
  int in_stack_00002020;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined **local_c;
  int *local_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  local_8 = (int *)&LAB_007cfef7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a69e0();
  piVar12 = DAT_00d615e4;
  if (*(int *)(in_stack_00002020 + 0x3350) != 0) {
    FUN_006083e0(in_stack_00002020,*(int *)(in_stack_00002020 + 0x3350),0);
    piVar12 = DAT_00d615e4;
  }
  while (piVar12 != (int *)0x0) {
    piVar1 = (int *)piVar12[2];
    iVar10 = *piVar12;
    FUN_00608640(in_stack_00002020,*(undefined4 *)(iVar10 + 0x22),
                 *(undefined4 *)(*(int *)(iVar10 + 0x26) + 0x22));
    FUN_00608640(in_stack_00002020,*(undefined4 *)(iVar10 + 0x26),
                 *(undefined4 *)(*(int *)(iVar10 + 0x22) + 0x22));
    piVar12 = piVar1;
  }
  local_c = &PTR_FUN_007e5258;
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  iVar11 = 0;
  piStack00000008 = &DAT_0089cad8;
  iVar10 = 0;
  do {
    iVar7 = iVar10;
    piVar12 = local_8;
    if ((*piStack00000008 != 0) &&
       (cVar3 = FUN_005861a0(iVar11), piVar1 = local_4, piVar12 = local_8, cVar3 != '\0')) {
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
      iVar7 = iVar10 + 1;
      piVar12 = local_4;
      if (iVar10 != 0) {
        piVar1[2] = (int)local_4;
        piVar12 = local_8;
      }
    }
    local_8 = piVar12;
    iVar11 = iVar11 + 1;
    piStack00000008 = piStack00000008 + 1;
    iVar10 = iVar7;
  } while ((int)piStack00000008 < 0x89d038);
  if (iVar7 != 0) {
    pcVar4 = (char *)FUN_0042b6c9(s_DIACCESS_0085e92c);
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
    uVar16 = *(undefined4 *)(in_stack_00002020 + 6);
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00608290(&stack0x00000010,&local_c,uVar16,99999);
    pvVar5 = operator_new(0x50);
    if (pvVar5 != (void *)0x0) {
      uVar17 = 0;
      puVar14 = &stack0x00000010;
      uVar15 = 2;
      uVar16 = extraout_ECX;
      uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar6,puVar14,uVar15,uVar16,uVar17);
    }
  }
  (*(code *)local_c[4])();
  iVar10 = 0;
  piVar12 = &DAT_0089cad8;
  do {
    iVar11 = iVar7;
    piVar1 = local_8;
    if ((*piVar12 != 0) &&
       (cVar3 = FUN_005861a0(*(undefined4 *)(in_stack_00002020 + 6)), piVar2 = local_4,
       piVar1 = local_8, cVar3 != '\0')) {
      local_4 = operator_new(0xe);
      if (local_4 == (int *)0x0) {
        local_4 = (int *)0x0;
      }
      else {
        *local_4 = iVar10;
        local_4[1] = (int)piVar2;
        local_4[2] = 0;
        *(undefined1 *)(local_4 + 3) = 0;
      }
      iVar11 = iVar7 + 1;
      piVar1 = local_4;
      if (iVar7 != 0) {
        piVar2[2] = (int)local_4;
        piVar1 = local_8;
      }
    }
    local_8 = piVar1;
    piVar12 = piVar12 + 1;
    iVar10 = iVar10 + 1;
    iVar7 = iVar11;
  } while ((int)piVar12 < 0x89d038);
  if (iVar11 != 0) {
    pcVar4 = (char *)FUN_0042b6c9(s_DIACCESS2_0085e920);
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
    uVar16 = *(undefined4 *)(in_stack_00002020 + 6);
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00608290(&stack0x00000010,&local_c,uVar16,99999);
    pvVar5 = operator_new(0x50);
    if (pvVar5 != (void *)0x0) {
      uVar17 = 0;
      puVar14 = &stack0x00000010;
      uVar15 = 2;
      uVar16 = extraout_ECX;
      uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar6,puVar14,uVar15,uVar16,uVar17);
    }
  }
  (*(code *)local_c[4])();
  local_c = &PTR_LAB_007e3ff0;
  piVar12 = local_8;
  while (piVar12 != (int *)0x0) {
    piVar1 = (int *)piVar12[2];
    FUN_00796cd8(piVar12);
    piVar12 = piVar1;
  }
  ExceptionList = in_stack_00002010;
  return;
}


