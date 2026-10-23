// FUN_005cbf10 @ 5cbf10 size=1146

void __fastcall FUN_005cbf10(int param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  undefined **ppuVar15;
  int *piStack_30;
  int *piStack_2c;
  float local_28;
  void *pvStack_24;
  undefined **ppuStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cd2df;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar14 = (float10)FUN_00436060();
  iVar12 = *(int *)(param_1 + 0xbc);
  local_28 = (float)fVar14;
  piVar10 = *(int **)(iVar12 + 4);
  while (piVar10 != (int *)0x0) {
    piVar8 = (int *)piVar10[2];
    if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar10)(1);
    }
    FUN_00796cd8(piVar10);
    piVar10 = piVar8;
  }
  *(undefined4 *)(iVar12 + 4) = 0;
  *(undefined4 *)(iVar12 + 8) = 0;
  *(undefined4 *)(iVar12 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))();
  piStack_1c = (int *)0x0;
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  ppuStack_20 = &PTR_LAB_007e378c;
  uStack_4._0_1_ = 0;
  uStack_4._1_3_ = 0;
  piVar10 = *(int **)(*(int *)(param_1 + 0x90) + 0x4508);
  piVar8 = piStack_1c;
  while (piStack_1c = piVar8, piVar10 != (int *)0x0) {
    piVar8 = (int *)piVar10[2];
    piVar2 = (int *)*piVar10;
    cVar6 = (**(code **)(*piVar2 + 0x28))();
    piVar10 = piVar8;
    piVar8 = piStack_1c;
    if (cVar6 != '\0') {
      iVar12 = piVar2[3];
      ppuVar1 = ppuStack_20 + 0xb;
      ppuVar15 = ppuStack_20;
      FUN_004174a0(piStack_1c);
      (*(code *)*ppuVar1)(&piStack_2c,ppuVar15,iVar12);
      piVar5 = piStack_18;
      piVar8 = piStack_1c;
      if ((piStack_2c == (int *)0x0) && (iVar12 = piVar2[3], iVar12 != 0)) {
        pvVar7 = operator_new(0xe);
        uStack_4._0_1_ = 1;
        if (pvVar7 == (void *)0x0) {
          piStack_18 = (int *)0x0;
        }
        else {
          piStack_18 = (int *)FUN_0049a7a0(iVar12,piVar5,0);
        }
        uStack_4._0_1_ = 0;
        iVar12 = iStack_14 + 1;
        bVar13 = iStack_14 != 0;
        piVar8 = piStack_18;
        iStack_14 = iVar12;
        if (bVar13) {
          piVar5[2] = (int)piStack_18;
          piVar8 = piStack_1c;
        }
      }
    }
  }
  piStack_30 = &DAT_0089cad8;
  do {
    iVar12 = *piStack_30;
    if ((iVar12 != 0) && (cVar6 = FUN_00444270(), cVar6 != '\0')) {
      piVar10 = *(int **)(iVar12 + 0x4508);
      piVar8 = piStack_1c;
      while (piStack_1c = piVar8, piVar10 != (int *)0x0) {
        piVar8 = (int *)piVar10[2];
        piVar2 = (int *)*piVar10;
        cVar6 = (**(code **)(*piVar2 + 0x28))();
        piVar10 = piVar8;
        piVar8 = piStack_1c;
        if (cVar6 != '\0') {
          iVar12 = piVar2[3];
          ppuVar1 = ppuStack_20 + 0xb;
          ppuVar15 = ppuStack_20;
          FUN_004174a0(piStack_1c);
          (*(code *)*ppuVar1)(&piStack_2c,ppuVar15,iVar12);
          piVar5 = piStack_18;
          piVar8 = piStack_1c;
          if ((piStack_2c == (int *)0x0) && (iVar12 = piVar2[3], iVar12 != 0)) {
            piStack_18 = operator_new(0xe);
            if (piStack_18 == (int *)0x0) {
              piStack_18 = (int *)0x0;
            }
            else {
              *piStack_18 = iVar12;
              piStack_18[1] = (int)piVar5;
              piStack_18[2] = 0;
              *(undefined1 *)(piStack_18 + 3) = 0;
            }
            iVar12 = iStack_14 + 1;
            bVar13 = iStack_14 != 0;
            piVar8 = piStack_18;
            iStack_14 = iVar12;
            if (bVar13) {
              piVar5[2] = (int)piStack_18;
              piVar8 = piStack_1c;
            }
          }
        }
      }
    }
    piStack_30 = piStack_30 + 1;
  } while ((int)piStack_30 < 0x89d038);
  bVar13 = false;
  piVar10 = piStack_1c;
  while (piVar10 != (int *)0x0) {
    if (bVar13) {
      piVar8 = operator_new(0x32);
      uStack_4._0_1_ = 2;
      piStack_2c = piVar8;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        FUN_00433f00();
        *(undefined4 *)((int)piVar8 + 0x2e) = 10;
        *piVar8 = (int)&PTR_FUN_007ec904;
        piVar8[2] = (int)&PTR_LAB_007ec900;
      }
      uStack_4._0_1_ = 0;
      iVar12 = *(int *)(param_1 + 0xbc);
      iVar3 = *(int *)(iVar12 + 8);
      piStack_2c = operator_new(0xe);
      uStack_4._0_1_ = 3;
      if (piStack_2c == (int *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_005926a0(piVar8,iVar3,0);
      }
      iVar4 = *(int *)(iVar12 + 0xc);
      uStack_4._0_1_ = 0;
      *(undefined4 *)(iVar12 + 8) = uVar9;
      *(int *)(iVar12 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 *)(iVar12 + 4) = uVar9;
      }
      else {
        *(undefined4 *)(iVar3 + 8) = uVar9;
      }
    }
    piVar8 = (int *)piVar10[2];
    piVar10 = (int *)FUN_004e9370(*piVar10);
    piStack_2c = piVar10;
    pvStack_24 = operator_new(0x54);
    uStack_4._0_1_ = 4;
    if (pvStack_24 == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_005efbe0(*(undefined4 *)((int)piVar10 + 0x12),1);
    }
    uStack_4._0_1_ = 0;
    iVar12 = *(int *)(param_1 + 0xbc);
    iVar3 = *(int *)(iVar12 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar9;
      puVar11[1] = iVar3;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar4 = *(int *)(iVar12 + 0xc);
    *(undefined4 **)(iVar12 + 8) = puVar11;
    *(int *)(iVar12 + 0xc) = iVar4 + 1;
    if (iVar4 == 0) {
      *(undefined4 **)(iVar12 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar3 + 8) = puVar11;
    }
    bVar13 = true;
    piVar2 = *(int **)(*(int *)((int)piStack_2c + 0x1c2) + 4);
    while (piVar10 = piVar8, piVar2 != (int *)0x0) {
      piVar10 = (int *)*piVar2;
      piStack_2c = (int *)piVar2[2];
      piVar2 = piStack_2c;
      if ((piVar10 != (int *)0x0) &&
         (((piVar10[0x92] == DAT_00d0ca90 ||
           (cVar6 = FUN_00444270(), piVar2 = piStack_2c, cVar6 != '\0')) &&
          (cVar6 = (**(code **)(*piVar10 + 0x28))(), piVar2 = piStack_2c, cVar6 != '\0')))) {
        pvStack_24 = operator_new(0x98);
        uStack_4._0_1_ = 5;
        if (pvStack_24 == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_005c79d0(piVar10,*(undefined4 *)(param_1 + 0xbc));
        }
        uStack_4._0_1_ = 0;
        iVar12 = *(int *)(param_1 + 0xbc);
        iVar3 = *(int *)(iVar12 + 8);
        puVar11 = operator_new(0xe);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = uVar9;
          puVar11[1] = iVar3;
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        iVar4 = *(int *)(iVar12 + 0xc);
        *(undefined4 **)(iVar12 + 8) = puVar11;
        *(int *)(iVar12 + 0xc) = iVar4 + 1;
        piVar2 = piStack_2c;
        if (iVar4 == 0) {
          *(undefined4 **)(iVar12 + 4) = puVar11;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar11;
        }
      }
    }
  }
  FUN_004353e0();
  FUN_00436130(local_28);
  ppuStack_20 = &PTR_LAB_007e378c;
  piVar10 = piStack_1c;
  while (piVar10 != (int *)0x0) {
    piVar8 = (int *)piVar10[2];
    FUN_00796cd8(piVar10);
    piVar10 = piVar8;
  }
  ExceptionList = pvStack_c;
  return;
}


