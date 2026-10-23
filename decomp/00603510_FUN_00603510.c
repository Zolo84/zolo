// FUN_00603510 @ 603510 size=648

undefined4 * __thiscall
FUN_00603510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined **ppuVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iStack_28;
  undefined **local_24;
  undefined **ppuStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cfa36;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = (undefined **)param_1;
  FUN_00414c80(param_4);
  *(undefined4 *)((int)param_1 + 0x7e) = param_3;
  *(undefined4 *)((int)param_1 + 0x82) = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_007eeb8c;
  param_1[2] = &PTR_LAB_007eeb88;
  pvVar8 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar8 == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00434930(299,0x6e,0,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)((int)param_1 + 0x8e) = uVar9;
  FUN_004353e0();
  iVar13 = *(int *)((int)param_1 + 0x8e);
  piVar5 = *(int **)(iVar13 + 4);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    piVar5 = piVar1;
  }
  *(undefined4 *)(iVar13 + 4) = 0;
  *(undefined4 *)(iVar13 + 8) = 0;
  *(undefined4 *)(iVar13 + 0xc) = 0;
  puVar2 = *(undefined4 **)((&DAT_0089cad8)[*(int *)((int)param_1 + 0x7e)] + 0xe8a4);
  (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)((int)param_1 + 0x7e)] + 0xe) + 0xc))();
  puStack_1c = (undefined4 *)0x0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  pvStack_10 = (void *)((uint)pvStack_10 & 0xffffff00);
  ppuStack_20 = &PTR_LAB_007e6f54;
  local_4._0_1_ = 2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar12 = (undefined4 *)puVar2[2];
    iVar10 = FUN_004e9370(*puVar2);
    iVar13 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x7e)];
    puVar2 = puVar12;
    if (iVar13 == *(int *)(iVar10 + 0x3d8)) {
      uVar9 = *(undefined4 *)(iVar10 + 0x288);
      ppuVar6 = ppuStack_20 + 0xb;
      uVar14 = uVar9;
      FUN_004a7ad0(puStack_1c);
      (*(code *)*ppuVar6)(&iStack_28,iVar13,uVar14);
      puVar12 = puStack_18;
      if (iStack_28 == 0) {
        puStack_18 = operator_new(0xe);
        if (puStack_18 == (undefined4 *)0x0) {
          puStack_18 = (undefined4 *)0x0;
        }
        else {
          *puStack_18 = uVar9;
          puStack_18[1] = puVar12;
          puStack_18[2] = 0;
          *(undefined1 *)(puStack_18 + 3) = 0;
        }
        puVar7 = puStack_18;
        if (iStack_14 != 0) {
          puVar12[2] = puStack_18;
          puVar7 = puStack_1c;
        }
        puStack_1c = puVar7;
        iStack_14 = iStack_14 + 1;
        pvVar8 = operator_new(0x48);
        local_4._0_1_ = 3;
        if (pvVar8 == (void *)0x0) {
          param_4 = 0;
        }
        else {
          uVar15 = 1;
          uVar14 = param_3;
          uVar11 = FUN_004c7bfa(uVar9,param_3,1);
          param_4 = FUN_00609650(uVar9,uVar11,uVar14,uVar15);
        }
        iVar13 = *(int *)((int)param_1 + 0x8e);
        local_4._0_1_ = 2;
        iVar10 = *(int *)(iVar13 + 8);
        puVar12 = operator_new(0xe);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          puVar12[1] = iVar10;
          *puVar12 = param_4;
          puVar12[2] = 0;
          *(undefined1 *)(puVar12 + 3) = 0;
        }
        iVar3 = *(int *)(iVar13 + 0xc);
        *(undefined4 **)(iVar13 + 8) = puVar12;
        *(int *)(iVar13 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(iVar13 + 4) = puVar12;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar12;
        }
        *(undefined4 *)(*(int *)((int)param_1 + 0x8e) + 0x26) = param_4;
      }
    }
  }
  (**(code **)(**(int **)((int)param_1 + 0x8e) + 0x38))
            (*(undefined4 *)(*(int **)((int)param_1 + 0x8e))[1]);
  local_24 = &PTR_LAB_007e6f54;
  ppuVar6 = ppuStack_20;
  while (ppuVar6 != (undefined **)0x0) {
    ppuVar4 = (undefined **)ppuVar6[2];
    FUN_00796cd8(ppuVar6);
    ppuVar6 = ppuVar4;
  }
  ExceptionList = pvStack_10;
  return param_1;
}


