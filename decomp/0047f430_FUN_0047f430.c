// FUN_0047f430 @ 47f430 size=1103

undefined4 __thiscall FUN_0047f430(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd443;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00449290(*(int *)(param_2 + 4) + 0x14);
  FUN_00460220();
  FUN_004734e0();
  local_4 = 0;
  iVar4 = FUN_00428ee0();
  if ((((iVar4 == 0) || (iVar4 == 8)) || (iVar5 = FUN_00428ee0(), iVar5 == 0)) || (iVar5 == 8))
  goto LAB_0047f81e;
  cVar3 = FUN_00586640();
  if ((cVar3 != '\0') &&
     (iVar7 = *(int *)(param_1 + 0x12da), iVar6 = FUN_00584c90(),
     *(char *)(iVar7 + 0x31 + iVar6 * 0x2c) != '\0')) {
    FUN_00584c90();
    iVar7 = FUN_00586940();
    if ((iVar7 != 0) && (iVar7 = *(int *)(param_1 + 6), iVar6 = FUN_00584c90(), iVar6 == iVar7)) {
      (**(code **)(**(int **)(iVar5 + 0x1a) + 0x18))();
      FUN_00485f30();
      FUN_00458280();
      FUN_00485f30();
      FUN_00499ec0();
    }
  }
  puVar11 = &DAT_008a11c4;
  for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  DAT_008a11c4._0_1_ = 0;
  cVar3 = FUN_0043ea10();
  bVar13 = cVar3 == '\x01';
  DAT_008a56c4 = 0;
  cVar3 = FUN_0043ea10();
  if (cVar3 == '\x01') {
    bVar13 = false;
LAB_0047f5bf:
    uVar10 = *(undefined4 *)(param_1 + 6);
  }
  else {
    if (!bVar13) goto LAB_0047f5bf;
    uVar10 = *(undefined4 *)(param_1 + 6);
  }
  (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
  uVar8 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
  FUN_006ead30(0x28,uVar10,uVar8);
  cVar3 = FUN_0042dd70();
  if (((cVar3 == '\0') && (!bVar13)) &&
     (iVar7 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x1e) + 0x22) + 4))(), 0 < iVar7)) {
    FUN_00584c90();
    FUN_00451160();
  }
  iVar6 = *(int *)(iVar4 + 0x1e);
  iVar7 = iVar4 + 0x22;
  if (iVar5 + -8 == iVar6) {
    iVar6 = *(int *)(iVar4 + 0x1a);
    iVar7 = iVar4 + 0x1d3ca;
  }
  puVar11 = (undefined4 *)(iVar7 + 8 + *(int *)(param_1 + 6) * 0x15c);
  for (iVar12 = 0x56; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  iVar7 = iVar7 + 4;
  iVar12 = 0x158;
  do {
    iVar7 = iVar7 + 0x15c;
    iVar12 = iVar12 + -1;
    *(undefined1 *)(*(int *)(param_1 + 6) + -0x158 + iVar7) = 0;
  } while (iVar12 != 0);
  for (iVar7 = *(int *)(*(int *)(iVar6 + 0x22) + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
    cVar3 = FUN_0042e980();
    if ((cVar3 != '\0') && (cVar3 = FUN_005861e0(), cVar3 != '\0')) {
      pvVar9 = operator_new(0xc);
      local_4._0_1_ = 1;
      if (pvVar9 != (void *)0x0) {
        FUN_00458280();
        uVar10 = FUN_00458280();
        uVar15 = 2;
        uVar14 = 0x14;
        uVar8 = FUN_0045fec0(0x14,2,uVar10);
        FUN_00464820(0x89,uVar8,uVar14,uVar15,uVar10);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00565ca0();
    }
    FUN_00462580();
    FUN_00462580();
    FUN_006ad630();
  }
  piVar2 = *(int **)(*(int *)(iVar5 + 0x1a) + 4);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar5 = (&DAT_0089cad8)[*piVar2];
    FUN_00586940();
    piVar2 = piVar1;
    if (iVar5 != 0) {
      FUN_0044bb10();
    }
  }
  cVar3 = (**(code **)(*(int *)(iVar4 + 0x3a772) + 0x24))();
  if (cVar3 == '\0') {
    uVar10 = *(undefined4 *)(param_1 + 6);
    iVar5 = *(int *)(iVar4 + 0x3a77a);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar10;
      puVar11[1] = iVar5;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar7 = *(int *)(iVar4 + 0x3a77e);
    *(undefined4 **)(iVar4 + 0x3a77a) = puVar11;
    *(int *)(iVar4 + 0x3a77e) = iVar7 + 1;
    if (iVar7 == 0) {
      *(undefined4 **)(iVar4 + 0x3a776) = puVar11;
    }
    else {
      *(undefined4 **)(iVar5 + 8) = puVar11;
    }
  }
LAB_0047f81e:
  FUN_005886c0();
  FUN_00462380();
  if (DAT_00a98440 == 3) {
    FUN_004dcb20();
  }
  while (iStack_1c != 0) {
    iStack_1c = *(int *)(iStack_1c + 8);
    FUN_00796cd8();
  }
  ExceptionList = pvStack_c;
  return 3;
}


