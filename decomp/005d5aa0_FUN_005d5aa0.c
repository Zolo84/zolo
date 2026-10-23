// FUN_005d5aa0 @ 5d5aa0 size=307

void __fastcall FUN_005d5aa0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  void **ppvVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cd70b;
  iVar7 = *(int *)(param_1 + 0xca);
  ppvVar6 = &pvStack_c;
  piVar4 = *(int **)(iVar7 + 4);
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar6, piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    ppvVar6 = ExceptionList;
    piVar4 = piVar1;
  }
  *(undefined4 *)(iVar7 + 4) = 0;
  *(undefined4 *)(iVar7 + 8) = 0;
  *(undefined4 *)(iVar7 + 0xc) = 0;
  puVar5 = DAT_00d77b7a;
  while (puVar5 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)puVar5[2];
    uVar2 = *puVar5;
    iVar7 = FUN_00428ee0(param_1 + 0xbc);
    uVar11 = 0;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar7 + -8;
    }
    iVar8 = FUN_004fd5a0();
    puVar5 = puVar10;
    if (iVar8 == iVar7) {
      pvVar9 = operator_new(0x80);
      uStack_4 = 0;
      if (pvVar9 != (void *)0x0) {
        uVar11 = FUN_005dcb20(uVar2,0);
      }
      uStack_4 = 0xffffffff;
      iVar7 = *(int *)(param_1 + 0xca);
      iVar8 = *(int *)(iVar7 + 8);
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = uVar11;
        puVar10[1] = iVar8;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
      }
      iVar3 = *(int *)(iVar7 + 0xc);
      *(undefined4 **)(iVar7 + 8) = puVar10;
      *(int *)(iVar7 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar7 + 4) = puVar10;
      }
      else {
        *(undefined4 **)(iVar8 + 8) = puVar10;
      }
    }
  }
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
}


