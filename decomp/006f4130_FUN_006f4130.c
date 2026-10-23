// FUN_006f4130 @ 6f4130 size=1865

undefined4 __thiscall FUN_006f4130(int *param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  void *pvVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  int iStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007daaf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005821b0();
  iVar4 = (**(code **)(*param_2 + 8))();
  iVar15 = DAT_00bd1500;
  if (0x133 < iVar4) {
LAB_006f4864:
    ExceptionList = pvStack_c;
    return 0;
  }
  if (iVar4 == 0x133) {
    iVar15 = param_2[1];
    if (*(int *)((int)param_1 + *(int *)(iVar15 + 0xe) * 4 + 0x16) != 0) {
      ExceptionList = pvStack_c;
      return 3;
    }
    pvVar9 = operator_new(0x22a);
    uStack_4 = 0;
    if (pvVar9 == (void *)0x0) {
      *(undefined4 *)((int)param_1 + *(int *)(iVar15 + 0xe) * 4 + 0x16) = 0;
      ExceptionList = pvStack_c;
      return 3;
    }
    uVar10 = FUN_006f8f00((int)param_1 + 0xe2,*(undefined4 *)(iVar15 + 0xe));
    *(undefined4 *)((int)param_1 + *(int *)(iVar15 + 0xe) * 4 + 0x16) = uVar10;
    ExceptionList = pvStack_c;
    return 3;
  }
  switch(iVar4) {
  case 0:
    if ((*(int *)(param_2[1] + 0xe) == *(int *)(DAT_00bd1500 + 900)) ||
       (*(int *)(param_2[1] + 0xe) != -1)) {
      uVar3 = FUN_00584270(0xff,0xff);
      *(undefined2 *)(*(int *)((int)param_1 + 0xba) + 0x5a) = uVar3;
    }
    else {
      uVar3 = FUN_00584270(0,0xff);
      *(undefined2 *)(*(int *)((int)param_1 + 0xba) + 0x5a) = uVar3;
    }
    iVar15 = *(int *)(*(int *)((int)param_1 + 0xba) + 0x3e);
    FUN_004361a0();
    if (iVar15 != 0) {
      FUN_005918b0();
    }
    FUN_004351b0();
    uVar10 = 3;
    break;
  case 1:
    FUN_005823d0();
    uVar10 = 1;
    break;
  case 2:
    iVar15 = param_2[1];
    DAT_00d432ca = *(undefined4 *)(iVar15 + 0xe);
    iVar4 = FUN_007a8730((char *)((int)param_1 + 0xe2));
    if (iVar4 == 0) {
      ExceptionList = pvStack_c;
      return 3;
    }
    if (*(undefined4 **)((int)param_1 + 0x1e2) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x1e2))();
    }
    pvVar9 = operator_new(0xb0);
    uStack_4 = 1;
    if (pvVar9 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_006fc370();
    }
    *(undefined4 *)((int)param_1 + 0x1e2) = uVar10;
    uVar11 = 0xffffffff;
    pcVar16 = (char *)(iVar15 + 0x12);
    do {
      pcVar17 = pcVar16;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar17 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar17;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    uStack_4 = 0xffffffff;
    pcVar16 = pcVar17 + -uVar11;
    pcVar17 = (char *)((int)param_1 + 0xe2);
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar17 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar17 = pcVar17 + 1;
    }
    piVar14 = *(int **)((int)param_1 + 0xc2);
    *(undefined1 *)((int)param_1 + 0x1f6) = 0;
    *(undefined1 *)((int)param_1 + 0x1f7) = 0;
    *(undefined4 *)((int)param_1 + 0x1ee) = 0xffffffff;
    if (*(char *)((int)piVar14 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar14 + 0x60))();
    *(undefined1 *)((int)piVar14 + 0x86) = 1;
    *(undefined4 *)((int)param_1 + 0x1ee) = 0xffffffff;
    *(undefined4 *)((int)param_1 + 0x9e) = 0x79c;
    if (*(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) == -1) {
      ExceptionList = pvStack_c;
      return 3;
    }
    *(undefined4 *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) = 0xffffffff;
    FUN_0057d8e0();
    ExceptionList = pvStack_c;
    return 3;
  case 3:
    iVar4 = param_2[1];
    piVar14 = (int *)(DAT_00bd1500 + 0x3b0);
    cVar2 = FUN_0042e980();
    if ((cVar2 != '\0') && (*(int *)(*DAT_00d12b40 + 0x36e) == 0)) {
      iVar5 = 0;
      if (0 < *(int *)(iVar15 + 0xb70)) {
        piVar13 = (int *)(iVar15 + 0x3cc);
        do {
          if (*piVar13 == *(int *)(iVar4 + 0x12)) goto LAB_006f43e6;
          iVar5 = iVar5 + 1;
          piVar13 = (int *)((int)piVar13 + 0x3e);
        } while (iVar5 < *(int *)(iVar15 + 0xb70));
      }
    }
    iVar5 = 0;
    if (0 < *(int *)(iVar15 + 0xb70)) {
      while (*piVar14 != *(int *)(iVar4 + 0xe)) {
        iVar5 = iVar5 + 1;
        piVar14 = (int *)((int)piVar14 + 0x3e);
        if (*(int *)(iVar15 + 0xb70) <= iVar5) {
          ExceptionList = pvStack_c;
          return 3;
        }
      }
      *(undefined4 *)(iVar15 + 0x3cc + iVar5 * 0x3e) = *(undefined4 *)(iVar4 + 0x12);
      FUN_00405ad0(s_CountryID__d_0086f81c);
LAB_006f43e6:
      FUN_005824f0();
      ExceptionList = pvStack_c;
      return 3;
    }
    goto LAB_006f47f5;
  default:
    goto LAB_006f4864;
  case 7:
    if (*(int *)((int)param_1 + 0x1e2) != 0) {
      uVar10 = (**(code **)(*param_1 + 0x1c))();
      FUN_00582330(uVar10);
      iStack_20 = 0;
      if (0 < *(int *)(*(int *)(*(int *)((int)param_1 + 0x1e2) + 0xa4) + 0x2cde)) {
        param_2 = (int *)0x4;
        iVar15 = DAT_00d685a6;
        do {
          iVar4 = *(int *)(iVar15 + 0x277e + *(int *)((int)param_2 + iVar15) * 4);
          if (*(int *)(iVar4 + 0x13c86) != *(int *)(iVar4 + 6)) {
            puVar6 = operator_new(0xc);
            uStack_4 = 3;
            if (puVar6 != (undefined4 *)0x0) {
              uVar10 = *(undefined4 *)(iVar4 + 0x13c86);
              uVar1 = *(undefined4 *)(iVar4 + 6);
              pvVar9 = operator_new(0x1a);
              uStack_4 = CONCAT31(uStack_4._1_3_,4);
              if (pvVar9 != (void *)0x0) {
                FUN_0042d6c0();
              }
              FUN_0042d320();
              *puVar6 = &PTR_FUN_007e62c0;
              *(undefined1 *)((int)puVar6 + 10) = 0;
              *(undefined2 *)puVar6[1] = 0x15;
              iVar15 = puVar6[1];
              *(undefined4 *)(iVar15 + 8) = DAT_0088f29c;
              *(undefined2 *)(iVar15 + 0xc) = DAT_0088f2a0;
              puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0);
              iVar15 = puVar6[1];
              *(undefined4 *)(iVar15 + 2) = *puVar7;
              *(undefined2 *)(iVar15 + 6) = *(undefined2 *)(puVar7 + 1);
              *puVar6 = &PTR_FUN_007e6020;
              *(undefined4 *)(puVar6[1] + 0xe) = uVar1;
              *(undefined4 *)(puVar6[1] + 0x12) = uVar10;
              *(undefined1 *)(puVar6[1] + 0x16) = 1;
              *(undefined1 *)(puVar6[1] + 0x17) = 0;
              *(undefined1 *)(puVar6[1] + 0x18) = 0;
            }
            uStack_4 = 0xffffffff;
            FUN_00565c70();
            iVar15 = DAT_00d685a6;
          }
          iStack_20 = iStack_20 + 1;
          param_2 = (int *)((int)param_2 + 4);
        } while (iStack_20 < *(int *)(*(int *)(*(int *)((int)param_1 + 0x1e2) + 0xa4) + 0x2cde));
      }
    }
    puVar6 = operator_new(0xc);
    uStack_4 = 5;
    if (puVar6 != (undefined4 *)0x0) {
      puVar8 = operator_new(0xd0);
      uStack_4 = CONCAT31(uStack_4._1_3_,6);
      if (puVar8 == (undefined2 *)0x0) {
        puVar8 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d6c0();
      }
      puVar6[1] = puVar8;
      *(undefined1 *)(puVar6 + 2) = 0;
      *(undefined1 *)((int)puVar6 + 9) = 1;
      *puVar6 = &PTR_FUN_007ea31c;
      *(undefined1 *)((int)puVar6 + 10) = 0;
      *puVar8 = 6;
      iVar15 = puVar6[1];
      *(undefined4 *)(iVar15 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar15 + 0xc) = DAT_0088f2a0;
      puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0);
      iVar15 = puVar6[1];
      *(undefined4 *)(iVar15 + 2) = *puVar7;
      *(undefined2 *)(iVar15 + 6) = *(undefined2 *)(puVar7 + 1);
      *puVar6 = &PTR_FUN_007ea2bc;
      puVar7 = (undefined4 *)(*DAT_00d12b40 + 0x362);
      puVar6 = (undefined4 *)(puVar6[1] + 0xe);
      for (iVar15 = 0x30; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)puVar7;
    }
    uStack_4 = 0xffffffff;
    FUN_00565c70();
    pvVar9 = operator_new(0xc);
    uStack_4 = 7;
    if (pvVar9 != (void *)0x0) {
      FUN_005669c0(&DAT_0088f29c);
    }
    uStack_4 = 0xffffffff;
    FUN_00565c70();
    uVar10 = 3;
    break;
  case 8:
    FUN_0057df90();
    uVar10 = (**(code **)(*param_1 + 0x1c))();
    FUN_00582330(uVar10);
    iStack_20 = 0;
    if (0 < *(int *)(*(int *)(*(int *)((int)param_1 + 0x1e2) + 0xa4) + 0x2cde)) {
      param_2 = (int *)0x4;
      iVar15 = DAT_00d685a6;
      do {
        iVar4 = *(int *)(iVar15 + 0x277e + *(int *)((int)param_2 + iVar15) * 4);
        if (*(int *)(iVar4 + 0x13c86) != *(int *)(iVar4 + 6)) {
          puVar6 = operator_new(0xc);
          uStack_4 = 2;
          if (puVar6 != (undefined4 *)0x0) {
            uVar10 = *(undefined4 *)(iVar4 + 0x13c86);
            uVar1 = *(undefined4 *)(iVar4 + 6);
            FUN_00465510(0x15);
            *puVar6 = &PTR_FUN_007e6020;
            *(undefined4 *)(puVar6[1] + 0xe) = uVar1;
            *(undefined4 *)(puVar6[1] + 0x12) = uVar10;
            *(undefined1 *)(puVar6[1] + 0x16) = 1;
            *(undefined1 *)(puVar6[1] + 0x17) = 0;
            *(undefined1 *)(puVar6[1] + 0x18) = 0;
          }
          uStack_4 = 0xffffffff;
          FUN_00565c70();
          iVar15 = DAT_00d685a6;
        }
        iStack_20 = iStack_20 + 1;
        param_2 = (int *)((int)param_2 + 4);
      } while (iStack_20 < *(int *)(*(int *)(*(int *)((int)param_1 + 0x1e2) + 0xa4) + 0x2cde));
    }
    uVar10 = 3;
    break;
  case 9:
    FUN_00582280();
    if (DAT_00bd1500 != 0) {
      FUN_0057e0f0(*(undefined4 *)(param_2[1] + 0xe));
    }
LAB_006f47f5:
    uVar10 = 3;
    break;
  case 10:
    *(undefined1 *)(param_1 + 4) = 0;
    uVar10 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar10;
}


