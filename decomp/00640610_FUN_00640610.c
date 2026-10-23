// FUN_00640610 @ 640610 size=443

void __fastcall FUN_00640610(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  int iStack_24;
  int local_20;
  undefined1 auStack_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d219b;
  pvStack_c = ExceptionList;
  local_20 = -1;
  piVar1 = *(int **)(*(int *)(param_1 + 0xf4) + 0x22);
  piVar2 = *(int **)(*(int *)(param_1 + 0xf4) + 4);
  iVar10 = 0;
  ExceptionList = &pvStack_c;
  fVar11 = (float10)FUN_00436060();
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    piVar3 = (int *)*piVar2;
    if ((piVar3 != (int *)0x0) && (piVar1 == piVar3)) {
      local_20 = iVar10;
    }
    (**(code **)(*piVar3 + 0xc))();
    iVar10 = iVar10 + 1;
  }
  FUN_00436030();
  iVar10 = *(int *)(param_1 + 0xf4);
  iVar9 = 0;
  piVar1 = *(int **)(iVar10 + 4);
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    FUN_00796cd8(piVar1);
    piVar1 = piVar2;
  }
  *(undefined4 *)(iVar10 + 4) = 0;
  *(undefined4 *)(iVar10 + 8) = 0;
  *(undefined4 *)(iVar10 + 0xc) = 0;
  iVar10 = DAT_00877554;
  iStack_24 = FUN_004a30c0();
  if (iVar10 <= iStack_24) {
    iStack_24 = iVar10;
  }
  if (0 < iStack_24) {
    do {
      uVar6 = FUN_0044ae20(auStack_14,iVar9);
      iVar10 = FUN_00428ee0(uVar6);
      uVar6 = 0;
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = iVar10 + -8;
      }
      pvVar7 = operator_new(0x68);
      uStack_4 = 0;
      if (pvVar7 != (void *)0x0) {
        uVar6 = FUN_006394f0(iVar10,param_1,iVar9);
      }
      uStack_4 = 0xffffffff;
      iVar10 = *(int *)(param_1 + 0xf4);
      iVar4 = *(int *)(iVar10 + 8);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = uVar6;
        puVar8[1] = iVar4;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar5 = *(int *)(iVar10 + 0xc);
      *(undefined4 **)(iVar10 + 8) = puVar8;
      *(int *)(iVar10 + 0xc) = iVar5 + 1;
      if (iVar5 == 0) {
        *(undefined4 **)(iVar10 + 4) = puVar8;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar8;
      }
      if (iVar9 == local_20) {
        (**(code **)(**(int **)(param_1 + 0xf4) + 0x38))(uVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iStack_24);
  }
  FUN_004353e0();
  FUN_00436130((float)fVar11);
  ExceptionList = pvStack_c;
  return;
}


