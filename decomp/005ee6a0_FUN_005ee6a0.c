// FUN_005ee6a0 @ 5ee6a0 size=558

void __fastcall FUN_005ee6a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce9d6;
  iVar1 = *(int *)(param_1 + 0xbc);
  piVar6 = *(int **)(iVar1 + 4);
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (piVar6 != (int *)0x0) {
    piVar2 = (int *)piVar6[2];
    if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar6)(1);
    }
    FUN_00796cd8(piVar6);
    piVar6 = piVar2;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x14))();
  iVar1 = DAT_00ab27b4 + DAT_008477ac * 0x4b2;
  piVar6 = *(int **)(*(int *)(iVar1 + 0x1c2) + 4);
  while (piVar6 != (int *)0x0) {
    uVar8 = 0;
    piVar2 = (int *)piVar6[2];
    iVar3 = *piVar6;
    piVar6 = piVar2;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x248) == DAT_00d0ca90)) {
      pvVar7 = operator_new(0x98);
      uStack_4 = 0;
      if (pvVar7 != (void *)0x0) {
        uVar8 = FUN_005c79d0(iVar3,*(undefined4 *)(param_1 + 0xbc));
      }
      uStack_4 = 0xffffffff;
      iVar3 = *(int *)(param_1 + 0xbc);
      iVar4 = *(int *)(iVar3 + 8);
      puVar9 = operator_new(0xe);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = uVar8;
        puVar9[1] = iVar4;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
      }
      iVar5 = *(int *)(iVar3 + 0xc);
      *(undefined4 **)(iVar3 + 8) = puVar9;
      *(int *)(iVar3 + 0xc) = iVar5 + 1;
      if (iVar5 == 0) {
        *(undefined4 **)(iVar3 + 4) = puVar9;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar9;
      }
    }
  }
  iVar1 = *(int *)(iVar1 + 0x46a);
  if (iVar1 != 0) {
    piVar6 = *(int **)(iVar1 + 0x34);
    while (piVar6 != (int *)0x0) {
      iVar1 = *piVar6;
      piVar6 = (int *)piVar6[2];
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x248) == DAT_00d0ca90)) {
        pvVar7 = operator_new(0x98);
        uStack_4 = 1;
        if (pvVar7 == (void *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_005c79d0(iVar1,*(undefined4 *)(param_1 + 0xbc));
        }
        uStack_4 = 0xffffffff;
        iVar1 = *(int *)(param_1 + 0xbc);
        iVar3 = *(int *)(iVar1 + 8);
        puVar9 = operator_new(0xe);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar8;
          puVar9[1] = iVar3;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined4 **)(iVar1 + 8) = puVar9;
        *(int *)(iVar1 + 0xc) = iVar4 + 1;
        if (iVar4 == 0) {
          *(undefined4 **)(iVar1 + 4) = puVar9;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar9;
        }
      }
    }
  }
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
}


