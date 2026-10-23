// FUN_00577fb0 @ 577fb0 size=773

void __fastcall FUN_00577fb0(int *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  undefined **ppuVar12;
  int *unaff_EBX;
  int *piVar13;
  bool bVar14;
  void *apvStack_28 [2];
  undefined **ppuStack_20;
  undefined **ppuStack_1c;
  undefined **ppuStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8993;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = (**(code **)(*param_1 + 0x10))();
  while (iVar5 != 0) {
    FUN_00565c30(iVar5);
    iVar5 = (**(code **)(*param_1 + 0x10))();
  }
  if (DAT_00dc4b5e != '\0') {
    uVar6 = (**(code **)(param_1[4] + 4))(param_1[2]);
    FUN_00429a00(s______Cleaning_Events_Queue_______00856f10,uVar6);
  }
  ppuStack_1c = (undefined **)0x0;
  ppuStack_18 = (undefined **)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  ppuStack_20 = &PTR_LAB_007ead48;
  piVar10 = param_1 + 4;
  uStack_4 = 0;
  cVar4 = (**(code **)(param_1[4] + 8))();
  ppuVar2 = (undefined **)0x0;
  piVar13 = piVar10;
  while (cVar4 == '\0') {
    puVar7 = (undefined4 *)(**(code **)(*piVar13 + 0x38))(apvStack_28);
    piVar9 = *(int **)*puVar7;
    FUN_00796cd8(piVar10);
    iVar5 = (**(code **)(*piVar9 + 8))();
    if ((((iVar5 != 0xa0) || (iVar5 = *(int *)(piVar9[1] + 0x16), iVar5 == 0)) || (iVar5 == 0x158))
       || (ppuVar8 = ppuVar2, ppuVar3 = ppuStack_20, (&DAT_0089cad8)[iVar5] != 0)) {
      apvStack_28[0] = operator_new(0xe);
      puStack_8._0_1_ = 1;
      if (apvStack_28[0] == (void *)0x0) {
        ppuVar8 = (undefined **)0x0;
      }
      else {
        ppuVar8 = (undefined **)FUN_00579550(piVar9,ppuVar2,0);
      }
      ppuVar12 = (undefined **)((int)ppuStack_18 + 1);
      bVar14 = ppuStack_18 != (undefined **)0x0;
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      piVar13 = unaff_EBX;
      ppuVar3 = ppuVar8;
      ppuStack_1c = ppuVar8;
      ppuStack_18 = ppuVar12;
      if (bVar14) {
        ppuVar2[2] = (undefined *)ppuVar8;
        ppuVar3 = ppuStack_20;
      }
    }
    ppuStack_20 = ppuVar3;
    cVar4 = (**(code **)(*piVar13 + 8))();
    ppuVar2 = ppuVar8;
  }
  if (param_1[2] != 0) {
    uVar6 = FUN_00578f90();
    piVar9 = (int *)FUN_00579020(uVar6);
    while (piVar9 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar9 + 8))();
      if (((iVar5 != 0xa0) || (iVar5 = *(int *)(piVar9[1] + 0x16), iVar5 == 0)) ||
         ((iVar5 == 0x158 || (ppuVar8 = ppuVar2, ppuVar3 = ppuStack_1c, (&DAT_0089cad8)[iVar5] != 0)
          ))) {
        ppuVar8 = operator_new(0xe);
        if (ppuVar8 == (undefined **)0x0) {
          ppuVar8 = (undefined **)0x0;
        }
        else {
          *ppuVar8 = (undefined *)piVar9;
          ppuVar8[1] = (undefined *)ppuVar2;
          ppuVar8[2] = (undefined *)0x0;
          *(undefined1 *)(ppuVar8 + 3) = 0;
        }
        iVar5 = iStack_14 + 1;
        bVar14 = iStack_14 != 0;
        piVar13 = piVar10;
        ppuVar3 = ppuVar8;
        ppuStack_18 = ppuVar8;
        iStack_14 = iVar5;
        if (bVar14) {
          ppuVar2[2] = (undefined *)ppuVar8;
          ppuVar3 = ppuStack_1c;
        }
      }
      ppuStack_1c = ppuVar3;
      if (param_1[2] == 0) break;
      uVar6 = FUN_00578f90();
      piVar9 = (int *)FUN_00579020(uVar6);
      ppuVar2 = ppuVar8;
    }
  }
  ppuVar2 = ppuStack_1c;
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00(s_Valid_Events____d_00856ef8,iStack_14);
    ppuVar2 = ppuStack_1c;
  }
  while (ppuVar2 != (undefined **)0x0) {
    ppuVar8 = (undefined **)ppuVar2[2];
    puVar1 = *ppuVar2;
    iVar5 = *(int *)(puVar1 + 4);
    ppuVar2 = ppuVar8;
    if ((int)*(char *)(iVar5 + 3) + ((int)*(char *)(iVar5 + 4) + *(short *)(iVar5 + 6) * 0xc) * 0x1e
        < 1) {
      (**(code **)(*piVar13 + 0x34))(puVar1);
    }
    else if (param_1[1] == 0) {
      param_1[2] = 1;
      param_1[3] = 1;
      piVar10 = operator_new(0xc);
      if (piVar10 == (int *)0x0) {
        param_1[1] = 0;
      }
      else {
        *piVar10 = (int)puVar1;
        piVar10[1] = 0;
        piVar10[2] = 0;
        param_1[1] = (int)piVar10;
      }
    }
    else {
      uVar11 = param_1[2] + 1;
      param_1[2] = uVar11;
      if ((uint)(param_1[3] << 1) <= uVar11) {
        param_1[3] = param_1[3] << 1;
      }
      FUN_00579570(puVar1,uVar11,param_1[3],param_1[3]);
    }
  }
  ppuVar2 = ppuStack_1c;
  if (DAT_00dc4b5e != '\0') {
    uVar6 = (**(code **)(*piVar13 + 4))(param_1[2]);
    FUN_00429a00(s_Queue____d_event_s__Heap____d_ev_00856ea4,uVar6);
    ppuVar2 = ppuStack_1c;
  }
  while (ppuVar2 != (undefined **)0x0) {
    ppuVar8 = (undefined **)ppuVar2[2];
    FUN_00796cd8(ppuVar2);
    ppuVar2 = ppuVar8;
  }
  ExceptionList = pvStack_c;
  return;
}


