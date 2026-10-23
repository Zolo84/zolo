// FUN_005d90f0 @ 5d90f0 size=978

void __fastcall FUN_005d90f0(int param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void **ppvVar6;
  char cVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  undefined **ppuVar16;
  undefined4 *puStack_2c;
  void *pvStack_28;
  undefined1 auStack_24 [4];
  undefined **ppuStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cd99a;
  iVar14 = *(int *)(param_1 + 0xbc);
  ppvVar6 = &pvStack_c;
  piVar5 = *(int **)(iVar14 + 4);
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar6, piVar5 != (int *)0x0) {
    piVar2 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    ppvVar6 = ExceptionList;
    piVar5 = piVar2;
  }
  *(undefined4 *)(iVar14 + 4) = 0;
  *(undefined4 *)(iVar14 + 8) = 0;
  *(undefined4 *)(iVar14 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))();
  puStack_18 = (undefined4 *)0x0;
  puStack_1c = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  ppuStack_20 = &PTR_LAB_007e378c;
  uStack_4._0_1_ = 0;
  uStack_4._1_3_ = 0;
  piVar5 = *(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
  puVar13 = puStack_1c;
  ppuVar16 = ppuStack_20;
  while (puStack_1c = puVar13, ppuStack_20 = ppuVar16, piVar5 != (int *)0x0) {
    piVar2 = (int *)piVar5[2];
    iVar14 = *piVar5;
    ppuVar1 = ppuVar16 + 0xb;
    uVar10 = *(undefined4 *)(iVar14 + 0xc);
    FUN_004174a0(puStack_1c);
    (*(code *)*ppuVar1)(&puStack_2c,ppuVar16,uVar10);
    puVar9 = puStack_18;
    piVar5 = piVar2;
    puVar13 = puStack_1c;
    ppuVar16 = ppuStack_20;
    if (puStack_2c == (undefined4 *)0x0) {
      uVar10 = *(undefined4 *)(iVar14 + 0xc);
      pvVar8 = operator_new(0xe);
      uStack_4._0_1_ = 1;
      if (pvVar8 == (void *)0x0) {
        puStack_18 = (undefined4 *)0x0;
      }
      else {
        puStack_18 = (undefined4 *)FUN_0049a7a0(uVar10,puVar9,0);
      }
      uStack_4._0_1_ = 0;
      iVar14 = iStack_14 + 1;
      bVar15 = iStack_14 != 0;
      puVar13 = puStack_18;
      iStack_14 = iVar14;
      ppuVar16 = ppuStack_20;
      if (bVar15) {
        puVar9[2] = puStack_18;
        puVar13 = puStack_1c;
      }
    }
  }
  bVar15 = false;
  puVar13 = puStack_1c;
  while (puVar13 != (undefined4 *)0x0) {
    if (bVar15) {
      puVar9 = operator_new(0x32);
      uStack_4._0_1_ = 2;
      puStack_2c = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        FUN_00433f00();
        *(undefined4 *)((int)puVar9 + 0x2e) = 10;
        *puVar9 = &PTR_FUN_007ec904;
        puVar9[2] = &PTR_LAB_007ec900;
      }
      uStack_4._0_1_ = 0;
      iVar14 = *(int *)(param_1 + 0xbc);
      iVar3 = *(int *)(iVar14 + 8);
      puStack_2c = operator_new(0xe);
      uStack_4._0_1_ = 3;
      if (puStack_2c == (undefined4 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_005926a0(puVar9,iVar3,0);
      }
      iVar4 = *(int *)(iVar14 + 0xc);
      uStack_4._0_1_ = 0;
      *(undefined4 *)(iVar14 + 8) = uVar10;
      *(int *)(iVar14 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 *)(iVar14 + 4) = uVar10;
      }
      else {
        *(undefined4 *)(iVar3 + 8) = uVar10;
      }
    }
    puVar9 = (undefined4 *)puVar13[2];
    puVar11 = (undefined4 *)FUN_004e9370(*puVar13);
    puStack_2c = puVar11;
    pvStack_28 = operator_new(0x54);
    uStack_4._0_1_ = 4;
    if (pvStack_28 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_005efbe0(*(undefined4 *)((int)puVar11 + 0x12),1);
    }
    uStack_4._0_1_ = 0;
    iVar14 = *(int *)(param_1 + 0xbc);
    iVar3 = *(int *)(iVar14 + 8);
    pvStack_28 = operator_new(0xe);
    uStack_4._0_1_ = 5;
    if (pvStack_28 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_005926a0(uVar10,iVar3,0);
    }
    iVar4 = *(int *)(iVar14 + 0xc);
    uStack_4._0_1_ = 0;
    *(undefined4 *)(iVar14 + 8) = uVar10;
    *(int *)(iVar14 + 0xc) = iVar4 + 1;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar14 + 4) = uVar10;
    }
    else {
      *(undefined4 *)(iVar3 + 8) = uVar10;
    }
    bVar15 = true;
    if (*(int *)((int)puVar11 + 0x12) == 0) {
      iVar14 = *(int *)(DAT_00d0ca90 + 0x21e5a);
    }
    else {
      iVar14 = *(int *)((int)puVar11 + 0x1c2);
    }
    piVar5 = *(int **)(iVar14 + 4);
    if ((((puVar11[0x95] != 8) && (puVar11[0x95] != 9)) && (*(int *)((int)puVar11 + 0x46a) != 0)) &&
       (cVar7 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4) + 0x2c)
                )(), cVar7 != '\0')) {
      piVar5 = *(int **)(*(int *)((int)puVar11 + 0x46a) + 0x34);
    }
    while (puVar13 = puVar9, piVar5 != (int *)0x0) {
      piVar2 = (int *)piVar5[2];
      iVar14 = *piVar5;
      piVar12 = (int *)(**(code **)(**(int **)(DAT_00d0ca90 + 0x21e5a) + 0x28))(auStack_24,iVar14);
      piVar5 = piVar2;
      if ((*piVar12 != 0) && (*(int *)((int)puVar11 + 0x12) == *(int *)(iVar14 + 0xc))) {
        pvStack_28 = operator_new(0x98);
        uStack_4._0_1_ = 6;
        if (pvStack_28 == (void *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_005c79d0(iVar14,*(undefined4 *)(param_1 + 0xbc));
        }
        uStack_4._0_1_ = 0;
        iVar14 = *(int *)(param_1 + 0xbc);
        iVar3 = *(int *)(iVar14 + 8);
        puVar13 = operator_new(0xe);
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          *puVar13 = uVar10;
          puVar13[1] = iVar3;
          puVar13[2] = 0;
          *(undefined1 *)(puVar13 + 3) = 0;
        }
        iVar4 = *(int *)(iVar14 + 0xc);
        *(undefined4 **)(iVar14 + 8) = puVar13;
        *(int *)(iVar14 + 0xc) = iVar4 + 1;
        puVar11 = puStack_2c;
        if (iVar4 == 0) {
          *(undefined4 **)(iVar14 + 4) = puVar13;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar13;
        }
      }
    }
  }
  FUN_004353e0();
  ppuStack_20 = &PTR_LAB_007e378c;
  puVar13 = puStack_1c;
  while (puVar13 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)puVar13[2];
    FUN_00796cd8(puVar13);
    puVar13 = puVar9;
  }
  ExceptionList = pvStack_c;
  return;
}


