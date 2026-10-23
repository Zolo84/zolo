// FUN_00600d20 @ 600d20 size=348

void __fastcall FUN_00600d20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cf81b;
  iVar7 = *(int *)(param_1 + 0x86);
  ppvVar5 = &pvStack_c;
  piVar9 = *(int **)(iVar7 + 4);
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar5, piVar9 != (int *)0x0) {
    piVar1 = (int *)piVar9[2];
    if ((undefined4 *)*piVar9 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar9)(1);
    }
    FUN_00796cd8(piVar9);
    ppvVar5 = ExceptionList;
    piVar9 = piVar1;
  }
  *(undefined4 *)(iVar7 + 4) = 0;
  *(undefined4 *)(iVar7 + 8) = 0;
  *(undefined4 *)(iVar7 + 0xc) = 0;
  puVar2 = *(undefined4 **)(DAT_00d0ca90 + 0x4508);
  while (puVar2 != (undefined4 *)0x0) {
    piVar9 = (int *)*puVar2;
    puVar2 = (undefined4 *)puVar2[2];
    iVar7 = FUN_00522770();
    if ((iVar7 == DAT_00d0ca90) && (cVar6 = (**(code **)(*piVar9 + 0x2c))(), cVar6 == '\0')) {
      pvVar8 = operator_new(0x98);
      uStack_4 = 0;
      if (pvVar8 == (void *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_005c79d0(piVar9,*(undefined4 *)(param_1 + 0x86));
      }
      uStack_4 = 0xffffffff;
      iVar7 = *(int *)(param_1 + 0x86);
      iVar3 = *(int *)(iVar7 + 8);
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = piVar9;
        puVar10[1] = iVar3;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
      }
      iVar4 = *(int *)(iVar7 + 0xc);
      *(undefined4 **)(iVar7 + 8) = puVar10;
      *(int *)(iVar7 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 **)(iVar7 + 4) = puVar10;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar10;
      }
      (**(code **)(*piVar9 + 0x34))(1);
    }
  }
  FUN_004353e0();
  FUN_00435fd0();
  ExceptionList = pvStack_c;
  return;
}


