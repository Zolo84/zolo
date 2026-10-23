// FUN_0049f380 @ 49f380 size=664

undefined4 * __thiscall FUN_0049f380(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void **ppvVar5;
  char cVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  bool bVar18;
  int *local_1c;
  int *local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007bde63;
  iVar13 = (&DAT_0089cad8)[param_2];
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  DAT_008c6b94._0_1_ = 0;
  ppvVar5 = &pvStack_c;
  pvStack_c = ExceptionList;
  if (iVar13 != 0) {
    piVar4 = *(int **)(param_1 + 0xe8b6);
    ExceptionList = &pvStack_c;
    while (piVar8 = local_18, piVar2 = local_1c, piVar4 != (int *)0x0) {
      piVar1 = (int *)piVar4[2];
      iVar11 = DAT_00ab27b4 + *piVar4 * 0x4b2;
      piVar4 = piVar1;
      local_1c = piVar2;
      local_18 = piVar8;
      if (*(int *)(iVar11 + 0x3d4) == iVar13) {
        uVar9 = *(undefined4 *)(iVar11 + 0x12);
        pvVar7 = operator_new(0xe);
        local_4._0_1_ = 1;
        if (pvVar7 == (void *)0x0) {
          local_18 = (int *)0x0;
        }
        else {
          local_18 = (int *)FUN_0049a7a0(uVar9,piVar8,0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar11 = local_14 + 1;
        bVar18 = local_14 != 0;
        local_1c = local_18;
        local_14 = iVar11;
        if (bVar18) {
          piVar8[2] = (int)local_18;
          local_1c = piVar2;
        }
      }
    }
    piVar4 = *(int **)(param_1 + 0xe8c8);
joined_r0x0049f468:
    piVar1 = piVar8;
    local_1c = piVar2;
    piVar2 = local_1c;
    if (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      iVar11 = DAT_00ab27b4 + *piVar4 * 0x4b2;
      piVar4 = piVar2;
      piVar2 = local_1c;
      piVar8 = piVar1;
      if (*(int *)(iVar11 + 0x3d4) == iVar13) {
        uVar9 = *(undefined4 *)(iVar11 + 0x12);
        for (piVar3 = local_1c; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
          cVar6 = (*(code *)PTR_FUN_007e3798)(*piVar3,uVar9);
          if (cVar6 != '\0') {
            if (piVar3 != (int *)0x0) goto joined_r0x0049f468;
            break;
          }
        }
        iVar11 = *(int *)(iVar11 + 0x12);
        piVar8 = operator_new(0xe);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = iVar11;
          piVar8[1] = (int)piVar1;
          piVar8[2] = 0;
          *(undefined1 *)(piVar8 + 3) = 0;
        }
        iVar11 = local_14 + 1;
        bVar18 = local_14 != 0;
        piVar2 = piVar8;
        local_14 = iVar11;
        if (bVar18) {
          piVar1[2] = (int)piVar8;
          piVar2 = local_1c;
        }
      }
      goto joined_r0x0049f468;
    }
joined_r0x0049f518:
    ppvVar5 = ExceptionList;
    if (piVar2 != (int *)0x0) {
      piVar4 = (int *)piVar2[2];
      local_14 = local_14 + -1;
      uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + *piVar2 * 0x4b2) + 0xc))();
      uVar10 = FUN_0042b6c9(s_PEACEPROV_0083d640);
      FUN_007a630a(&DAT_008c9cf4,uVar10,uVar9);
      uVar12 = 0xffffffff;
      pcVar15 = &DAT_008c9cf4;
      do {
        pcVar17 = pcVar15;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar17 = pcVar15 + 1;
        cVar6 = *pcVar15;
        pcVar15 = pcVar17;
      } while (cVar6 != '\0');
      uVar12 = ~uVar12;
      iVar13 = -1;
      pcVar15 = (char *)&DAT_008c6b94;
      do {
        pcVar16 = pcVar15;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar16 = pcVar15 + 1;
        cVar6 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar6 != '\0');
      pcVar15 = pcVar17 + -uVar12;
      pcVar17 = pcVar16 + -1;
      for (uVar14 = uVar12 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar17 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar17 = pcVar17 + 1;
      }
      piVar2 = piVar4;
      if (local_14 < 2) goto LAB_0049f597;
      pcVar15 = &DAT_0083bf48;
      goto LAB_0049f5ac;
    }
  }
  while (ExceptionList = ppvVar5, local_1c != (int *)0x0) {
    piVar4 = (int *)local_1c[2];
    FUN_00796cd8(local_1c);
    ppvVar5 = ExceptionList;
    local_1c = piVar4;
  }
  ExceptionList = pvStack_c;
  return &DAT_008c6b94;
LAB_0049f597:
  if (0 < local_14) {
    pcVar15 = (char *)FUN_0042b6c9(s_INVAND_0083bf40);
LAB_0049f5ac:
    uVar12 = 0xffffffff;
    do {
      pcVar17 = pcVar15;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar17 = pcVar15 + 1;
      cVar6 = *pcVar15;
      pcVar15 = pcVar17;
    } while (cVar6 != '\0');
    uVar12 = ~uVar12;
    iVar13 = -1;
    pcVar15 = (char *)&DAT_008c6b94;
    do {
      pcVar16 = pcVar15;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar16 = pcVar15 + 1;
      cVar6 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar6 != '\0');
    pcVar15 = pcVar17 + -uVar12;
    pcVar17 = pcVar16 + -1;
    for (uVar14 = uVar12 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar17 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar17 = pcVar17 + 1;
    }
  }
  goto joined_r0x0049f518;
}


