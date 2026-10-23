// FUN_005f17d0 @ 5f17d0 size=342

void __fastcall FUN_005f17d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void **ppvVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cebfb;
  iVar1 = *(int *)(param_1 + 0xc4);
  ppvVar6 = &pvStack_c;
  piVar5 = *(int **)(iVar1 + 4);
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
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0xc4) + 0x14))();
  piVar5 = *(int **)(*(int *)(DAT_00ab27b4 + DAT_008477ac * 0x4b2 + 0x1c2) + 4);
  while (piVar5 != (int *)0x0) {
    uVar8 = 0;
    piVar2 = (int *)piVar5[2];
    iVar1 = *piVar5;
    piVar5 = piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x248) == DAT_00d0ca90)) {
      pvVar7 = operator_new(0x98);
      uStack_4 = 0;
      if (pvVar7 != (void *)0x0) {
        uVar8 = FUN_005c79d0(iVar1,*(undefined4 *)(param_1 + 0xc4));
      }
      uStack_4 = 0xffffffff;
      iVar1 = *(int *)(param_1 + 0xc4);
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
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
}


