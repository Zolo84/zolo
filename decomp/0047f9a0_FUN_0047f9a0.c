// FUN_0047f9a0 @ 47f9a0 size=1795

undefined4 FUN_0047f9a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  bool bVar15;
  char unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd4e9;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 4);
  ExceptionList = &pvStack_c;
  iVar5 = FUN_00428ee0();
  if ((iVar5 != 0) && (iVar5 != 8)) {
    iVar10 = *(int *)(iVar2 + 0x38);
    iVar12 = *(int *)(iVar2 + 0x3c);
    cVar4 = FUN_00584e20();
    if (cVar4 == '\0') {
      iVar12 = *(int *)(iVar2 + 0x38);
      iVar10 = *(int *)(iVar2 + 0x3c);
    }
    if (((&DAT_0089cad8)[iVar12] != 0) && ((&DAT_0089cad8)[iVar10] != 0)) {
      FUN_004623c0();
      FUN_004623c0();
      FUN_006ad630();
    }
    iVar6 = FUN_00584c90();
    (**(code **)(**(int **)(*(int *)(iVar5 + 0x1a) + 0x22) + 0x18))();
    if (unaff_retaddr == '\x01') {
      FUN_00584cb0();
    }
    FUN_00584c90();
    (**(code **)(**(int **)(*(int *)(iVar5 + 0x1e) + 0x22) + 0x18))();
    if (iVar6 == iVar10) {
      FUN_00584cb0();
    }
    pvVar7 = operator_new(0x3a7b4);
    uStack_4 = 0;
    if (pvVar7 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004862d0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x16) = *(undefined4 *)(iVar5 + 0xe);
    *(undefined2 *)(iVar6 + 0x1a) = *(undefined2 *)(iVar5 + 0x12);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar5 + 0xe);
    *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(iVar5 + 0x12);
    iVar11 = DAT_00893530;
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(DAT_00893530 + 0x14);
    *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)(iVar11 + 0x18);
    piVar13 = DAT_00d615e8;
    pvVar7 = operator_new(0xe);
    uStack_4 = 1;
    if (pvVar7 == (void *)0x0) {
      DAT_00d615e8 = (int *)0x0;
    }
    else {
      DAT_00d615e8 = (int *)FUN_0045ba90();
    }
    uStack_4 = 0xffffffff;
    iVar11 = DAT_00d615ec + 1;
    bVar15 = DAT_00d615ec != 0;
    piVar3 = DAT_00d615e8;
    DAT_00d615ec = iVar11;
    if (bVar15) {
      piVar13[2] = (int)DAT_00d615e8;
      piVar3 = DAT_00d615e4;
    }
    DAT_00d615e4 = piVar3;
    puVar8 = operator_new(0x52a);
    uStack_4 = 2;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_00425b20();
      uStack_4._0_1_ = 3;
      FUN_00428b00();
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_LAB_007e4068;
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      *puVar8 = &PTR_FUN_007e4048;
      puVar8[2] = &PTR_LAB_007e4034;
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_FUN_007e402c;
      FUN_00428d60();
      FUN_005847c0();
      *(undefined1 *)((int)puVar8 + 0x16) = 1;
    }
    *(undefined4 **)(iVar6 + 0x22) = puVar8;
    uStack_4 = 0xffffffff;
    *(undefined4 **)(iVar6 + 0x1d3ce) = puVar8;
    puVar8 = operator_new(0x52a);
    uStack_4 = 5;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_00425b20();
      uStack_4._0_1_ = 6;
      FUN_00428b00();
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_LAB_007e4068;
      uStack_4 = CONCAT31(uStack_4._1_3_,7);
      *puVar8 = &PTR_FUN_007e4048;
      puVar8[2] = &PTR_LAB_007e4034;
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_FUN_007e402c;
      FUN_00428d60();
      FUN_005847c0();
      *(undefined1 *)((int)puVar8 + 0x16) = 1;
    }
    *(undefined4 **)(iVar6 + 0x26) = puVar8;
    uStack_4 = 0xffffffff;
    *(undefined4 **)(iVar6 + 0x3a776) = puVar8;
    FUN_00449290(iVar2 + 0x20);
    FUN_00460220();
    param_1 = 0x158;
    do {
      FUN_00486140();
      FUN_00486140();
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    piVar13 = *(int **)(*(int *)(*(int *)(iVar5 + 0x1e) + 0x22) + 4);
    if (piVar13 != (int *)0x0) {
      do {
        FUN_00449290(iVar2 + 0x2c);
        FUN_00460220();
        iVar6 = *piVar13;
        iVar9 = FUN_0058b630();
        iVar11 = *piVar13;
        bVar1 = *(byte *)(iVar9 + 4 + iVar6);
        iVar6 = FUN_0058b630();
        *(byte *)(iVar6 + 4 + iVar11) = bVar1;
        if (0x5f < bVar1) {
          *(undefined1 *)(iVar6 + 4 + iVar11) = 0x5f;
        }
        iVar6 = FUN_0058b630();
        bVar1 = *(byte *)(iVar6 + 4 + iVar10);
        iVar6 = FUN_0058b630();
        *(byte *)(iVar6 + 4 + iVar10) = bVar1;
        if (0x5f < bVar1) {
          *(undefined1 *)(iVar6 + 4 + iVar10) = 0x5f;
        }
        piVar13 = (int *)piVar13[2];
      } while (piVar13 != (int *)0x0);
    }
    pvVar7 = operator_new(0x3a7b4);
    uStack_4 = 8;
    if (pvVar7 == (void *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = FUN_004862d0();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x16) = *(undefined4 *)(iVar5 + 0xe);
    *(undefined2 *)(iVar10 + 0x1a) = *(undefined2 *)(iVar5 + 0x12);
    *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(iVar5 + 0xe);
    *(undefined2 *)(iVar10 + 0x20) = *(undefined2 *)(iVar5 + 0x12);
    iVar6 = DAT_00893530;
    *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(DAT_00893530 + 0x14);
    *(undefined2 *)(iVar10 + 0x20) = *(undefined2 *)(iVar6 + 0x18);
    piVar13 = DAT_00d615e8;
    DAT_00d615e8 = operator_new(0xe);
    if (DAT_00d615e8 == (int *)0x0) {
      DAT_00d615e8 = (int *)0x0;
    }
    else {
      *DAT_00d615e8 = iVar10;
      DAT_00d615e8[1] = (int)piVar13;
      DAT_00d615e8[2] = 0;
      *(undefined1 *)(DAT_00d615e8 + 3) = 0;
    }
    iVar6 = DAT_00d615ec + 1;
    bVar15 = DAT_00d615ec != 0;
    piVar3 = DAT_00d615e8;
    DAT_00d615ec = iVar6;
    if (bVar15) {
      piVar13[2] = (int)DAT_00d615e8;
      piVar3 = DAT_00d615e4;
    }
    DAT_00d615e4 = piVar3;
    puVar8 = operator_new(0x52a);
    uStack_4 = 9;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_00425b20();
      uStack_4._0_1_ = 10;
      FUN_00428b00();
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_LAB_007e4068;
      uStack_4 = CONCAT31(uStack_4._1_3_,0xb);
      *puVar8 = &PTR_FUN_007e4048;
      puVar8[2] = &PTR_LAB_007e4034;
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_FUN_007e402c;
      FUN_00428d60();
      FUN_005847c0();
      *(undefined1 *)((int)puVar8 + 0x16) = 1;
    }
    *(undefined4 **)(iVar10 + 0x22) = puVar8;
    uStack_4 = 0xffffffff;
    *(undefined4 **)(iVar10 + 0x1d3ce) = puVar8;
    puVar8 = operator_new(0x52a);
    uStack_4 = 0xc;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_00425b20();
      uStack_4._0_1_ = 0xd;
      FUN_00428b00();
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_LAB_007e4068;
      uStack_4 = CONCAT31(uStack_4._1_3_,0xe);
      *puVar8 = &PTR_FUN_007e4048;
      puVar8[2] = &PTR_LAB_007e4034;
      *(undefined ***)((int)puVar8 + 0x12) = &PTR_FUN_007e402c;
      FUN_00428d60();
      FUN_005847c0();
      *(undefined1 *)((int)puVar8 + 0x16) = 1;
    }
    *(undefined4 **)(iVar10 + 0x26) = puVar8;
    uStack_4 = 0xffffffff;
    *(undefined4 **)(iVar10 + 0x3a776) = puVar8;
    FUN_00449290(iVar2 + 0x26);
    FUN_00460220();
    iVar6 = 0x158;
    puVar8 = (undefined4 *)(iVar10 + 0x1d3da);
    do {
      puVar14 = puVar8 + -0x74ea;
      for (iVar10 = 0x56; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      iVar6 = iVar6 + -1;
      puVar14 = puVar8;
      for (iVar10 = 0x56; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      puVar8 = puVar8 + 0x57;
    } while (iVar6 != 0);
    piVar13 = *(int **)(*(int *)(*(int *)(iVar5 + 0x1a) + 0x22) + 4);
    if (piVar13 != (int *)0x0) {
      do {
        FUN_00449290(iVar2 + 0x32);
        FUN_00460220();
        iVar5 = *piVar13;
        iVar10 = FUN_0058b630();
        bVar1 = *(byte *)(iVar10 + 4 + iVar5);
        iVar5 = *piVar13;
        iVar10 = FUN_0058b630();
        *(byte *)(iVar10 + 4 + iVar5) = bVar1;
        if (0x5f < bVar1) {
          *(undefined1 *)(iVar10 + 4 + iVar5) = 0x5f;
        }
        iVar5 = FUN_0058b630();
        bVar1 = *(byte *)(iVar5 + 4 + iVar12);
        iVar5 = FUN_0058b630();
        *(byte *)(iVar5 + 4 + iVar12) = bVar1;
        if (0x5f < bVar1) {
          *(undefined1 *)(iVar5 + 4 + iVar12) = 0x5f;
        }
        piVar13 = (int *)piVar13[2];
      } while (piVar13 != (int *)0x0);
    }
  }
  FUN_005886c0();
  FUN_00462380();
  ExceptionList = pvStack_c;
  return 3;
}


