// FUN_005ee8d0 @ 5ee8d0 size=304

void __fastcall FUN_005ee8d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce9eb;
  iVar1 = *(int *)(param_1 + 0x11c);
  piVar8 = *(int **)(iVar1 + 4);
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (piVar8 != (int *)0x0) {
    piVar2 = (int *)piVar8[2];
    if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar8)(1);
    }
    FUN_00796cd8(piVar8);
    piVar8 = piVar2;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x14))();
  puVar7 = *(undefined4 **)(DAT_00ab27b4 + 0x1e + DAT_008477ac * 0x4b2);
  while (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar7[2];
    uVar4 = *puVar7;
    pvVar9 = operator_new(0x54);
    uStack_4 = 0;
    if (pvVar9 == (void *)0x0) {
      uStack_10 = 0;
    }
    else {
      uStack_10 = FUN_005d1b70(uVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x11c);
    uStack_4 = 0xffffffff;
    iVar5 = *(int *)(iVar1 + 8);
    puVar10 = operator_new(0xe);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10[1] = iVar5;
      *puVar10 = uStack_10;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0;
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    *(undefined4 **)(iVar1 + 8) = puVar10;
    *(int *)(iVar1 + 0xc) = iVar6 + 1;
    puVar7 = puVar3;
    if (iVar6 == 0) {
      *(undefined4 **)(iVar1 + 4) = puVar10;
    }
    else {
      *(undefined4 **)(iVar5 + 8) = puVar10;
    }
  }
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
}


