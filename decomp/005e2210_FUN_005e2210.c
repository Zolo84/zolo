// FUN_005e2210 @ 5e2210 size=475

void __fastcall FUN_005e2210(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void **ppvVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce076;
  iVar8 = *(int *)(param_1 + 0x18e);
  ppvVar6 = &pvStack_c;
  piVar5 = *(int **)(iVar8 + 4);
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar6, piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    ppvVar6 = ExceptionList;
    piVar5 = piVar1;
  }
  *(undefined4 *)(iVar8 + 4) = 0;
  *(undefined4 *)(iVar8 + 8) = 0;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  iVar8 = FUN_00428ee0(param_1 + 0xfc);
  if ((iVar8 != 0) && (iVar8 != 0x14)) {
    puVar12 = *(undefined4 **)(iVar8 + 0x10c);
    while (puVar12 != (undefined4 *)0x0) {
      uVar10 = *puVar12;
      puVar12 = (undefined4 *)puVar12[2];
      cVar7 = FUN_004bf180();
      if (cVar7 != '\0') {
        pvVar9 = operator_new(0xca);
        uStack_4 = 0;
        if (pvVar9 == (void *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_005e98d0(uVar10);
        }
        uStack_4 = 0xffffffff;
        iVar2 = *(int *)(param_1 + 0x18e);
        iVar3 = *(int *)(iVar2 + 8);
        puVar11 = operator_new(0xe);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = uVar10;
          puVar11[1] = iVar3;
          puVar11[2] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        iVar4 = *(int *)(iVar2 + 0xc);
        *(undefined4 **)(iVar2 + 8) = puVar11;
        *(int *)(iVar2 + 0xc) = iVar4 + 1;
        if (iVar4 == 0) {
          *(undefined4 **)(iVar2 + 4) = puVar11;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar11;
        }
      }
    }
    if ((*(int *)(iVar8 + 0x162) != 0) && (cVar7 = FUN_004bf180(), cVar7 != '\0')) {
      pvVar9 = operator_new(0xca);
      uStack_4 = 1;
      if (pvVar9 == (void *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_005e98d0(*(undefined4 *)(iVar8 + 0x162));
      }
      uStack_4 = 0xffffffff;
      iVar8 = *(int *)(param_1 + 0x18e);
      iVar2 = *(int *)(iVar8 + 8);
      puVar12 = operator_new(0xe);
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        *puVar12 = uVar10;
        puVar12[1] = iVar2;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      iVar3 = *(int *)(iVar8 + 0xc);
      *(undefined4 **)(iVar8 + 8) = puVar12;
      *(int *)(iVar8 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar8 + 4) = puVar12;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar12;
      }
    }
  }
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
}


