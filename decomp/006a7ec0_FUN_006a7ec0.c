// FUN_006a7ec0 @ 6a7ec0 size=953

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a7ec0(int *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  bool bVar14;
  undefined2 uStack_3c;
  undefined4 *puStack_38;
  undefined2 uStack_34;
  uint uStack_30;
  uint auStack_28 [2];
  undefined **ppuStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5a4e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar4 = (**(code **)(param_1[0x29] + 8))();
  if (cVar4 != '\0') {
    uStack_34 = 1;
    puStack_38 = (undefined4 *)CONCAT13(puStack_38._3_1_,0x10000);
    puStack_38 = (undefined4 *)CONCAT22(puStack_38._2_2_,0x100);
    puStack_38 = (undefined4 *)CONCAT31(puStack_38._1_3_,1);
    uVar5 = FUN_0042df90(auStack_28,&puStack_38);
    cVar4 = FUN_0042dd70(uVar5);
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0xcc))();
      ExceptionList = pvStack_c;
      return;
    }
  }
  iVar6 = (**(code **)(param_1[0x29] + 4))();
  if (1 < iVar6) {
    iVar6 = *(int *)param_1[0x2a];
    FUN_00457e10();
    ppuStack_20 = &PTR_FUN_007e4c84;
    iStack_4 = 0;
    piVar8 = (int *)param_1[0x2a];
    iVar10 = iStack_1c;
    while (iVar9 = iStack_18, iStack_1c = iVar10, iStack_18 = iVar9, piVar8 != (int *)0x0) {
      piVar2 = (int *)piVar8[2];
      iVar13 = *piVar8;
      piVar8 = piVar2;
      iVar10 = iStack_1c;
      if (iVar13 != iVar6) {
        pvVar7 = operator_new(0xe);
        iStack_4._0_1_ = 1;
        if (pvVar7 == (void *)0x0) {
          iStack_18 = 0;
        }
        else {
          iStack_18 = FUN_0045bab0(iVar13,iVar9,0);
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        iVar13 = iStack_14 + 1;
        bVar14 = iStack_14 != 0;
        iVar10 = iStack_18;
        iStack_14 = iVar13;
        if (bVar14) {
          *(int *)(iVar9 + 8) = iStack_18;
          iVar10 = iStack_1c;
        }
      }
    }
    if (iStack_14 != 0) {
      FUN_006aa780(iVar6,&ppuStack_20);
    }
    (*(code *)ppuStack_20[4])();
    (**(code **)(param_1[0x29] + 0x14))();
    FUN_00459df0(iVar6);
    iStack_4 = 0xffffffff;
    FUN_00527230();
  }
  bVar14 = false;
  bVar3 = false;
  piVar8 = (int *)param_1[0x2a];
  if ((int *)param_1[0x2a] != (int *)0x0) {
    do {
      piVar2 = (int *)piVar8[2];
      iVar6 = *piVar8;
      if ((char)param_1[0x30] == '\0') {
        cVar4 = FUN_005177f0();
        if ((cVar4 != '\0') && (cVar4 = (**(code **)(*(int *)(iVar6 + 0x22e) + 8))(), cVar4 != '\0')
           ) {
          bVar14 = true;
        }
        if ((char)param_1[0x30] != '\0') goto LAB_006a809e;
      }
      else {
LAB_006a809e:
        cVar4 = FUN_005177f0();
        if (cVar4 == '\0') {
          bVar3 = true;
        }
      }
      iVar10 = param_1[0x2f];
      iVar9 = FUN_0051b230();
      if ((((iVar9 != iVar10) && (iVar10 != 0)) && ((char)param_1[0x30] != '\0')) &&
         ((cVar4 = (**(code **)(*(int *)(iVar6 + 0x22e) + 8))(), cVar4 != '\0' &&
          (iVar10 = (**(code **)(*(int *)(iVar6 + 0x11c) + 4))(), iVar10 == 0)))) {
        puVar11 = operator_new(0xc);
        iStack_4 = 2;
        puStack_38 = puVar11;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          uVar5 = *(undefined4 *)(param_1[0x2f] + 0x12);
          auStack_28[0] = auStack_28[0] & 0xff000000;
          puVar12 = operator_new(0x1e);
          if (puVar12 == (undefined2 *)0x0) {
            puVar12 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d2d0();
            puVar12[4] = 0;
            *(undefined4 *)(puVar12 + 5) = 0;
            puVar12[7] = 0;
            *(undefined4 *)(puVar12 + 8) = 0;
            FUN_0042d2d0();
          }
          puVar11[1] = puVar12;
          *(undefined1 *)(puVar11 + 2) = 0;
          *(undefined1 *)((int)puVar11 + 9) = 1;
          *puVar11 = &PTR_FUN_007e77e4;
          *(undefined1 *)((int)puVar11 + 10) = 0;
          *puVar12 = 0x34;
          iVar10 = puVar11[1];
          uStack_30 = uStack_30 & 0xff000000;
          *(undefined4 *)(iVar10 + 8) = _DAT_0088f24c;
          *(undefined2 *)(iVar10 + 0xc) = DAT_0088f24e._2_2_;
          iVar10 = puVar11[1];
          *(uint *)(iVar10 + 2) = uStack_30;
          *(undefined2 *)(iVar10 + 6) = 0;
          iVar10 = puVar11[1];
          uStack_3c = (undefined2)uVar5;
          *puVar11 = &PTR_FUN_007e7804;
          *(undefined2 *)(iVar10 + 0x14) = uStack_3c;
          *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar6 + 0x18);
          uVar1 = *(undefined2 *)(iVar6 + 0x1c);
          *(undefined1 *)(iVar10 + 0x16) = 1;
          *(undefined2 *)(iVar10 + 0x12) = uVar1;
          *(uint *)(iVar10 + 0x18) = auStack_28[0];
          *(undefined2 *)(iVar10 + 0x1c) = 0;
        }
        iStack_4 = 0xffffffff;
        FUN_00565c30(puVar11);
      }
      piVar8 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (bVar14) {
      FUN_006a7d40();
    }
    if (bVar3) {
      FUN_006a79c0();
    }
  }
  uVar5 = 0;
  iVar6 = _rand();
  FUN_006ae0d0(iVar6 % 0x48 + 0xc,uVar5);
  ExceptionList = pvStack_c;
  return;
}


