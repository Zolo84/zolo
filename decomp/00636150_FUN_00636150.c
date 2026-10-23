// FUN_00636150 @ 636150 size=362

void __fastcall FUN_00636150(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float10 fVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d1bcb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar9 = (float10)FUN_00436060();
  iVar1 = *(int *)(param_1 + 0x11a);
  piVar5 = *(int **)(iVar1 + 4);
  while (piVar5 != (int *)0x0) {
    piVar2 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    piVar5 = piVar2;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  piVar5 = DAT_00d615f6;
  while (piVar5 != (int *)0x0) {
    piVar2 = (int *)piVar5[2];
    iVar1 = *piVar5;
    piVar5 = piVar2;
    if (((((&DAT_0089cad8)[*(int *)(iVar1 + 0x16)] != 0) &&
         ((&DAT_0089cad8)[*(int *)(iVar1 + 0x1a)] != 0)) && (*(int *)(iVar1 + 0x1e) == 0)) &&
       (((&DAT_0089cad8)[*(int *)(iVar1 + 0x16)] == DAT_00d0ca90 ||
        ((&DAT_0089cad8)[*(int *)(iVar1 + 0x1a)] == DAT_00d0ca90)))) {
      pvVar6 = operator_new(0x42);
      uVar8 = 0;
      uStack_4 = 0;
      if (pvVar6 != (void *)0x0) {
        uVar8 = FUN_00620ec0(iVar1);
      }
      uStack_4 = 0xffffffff;
      iVar1 = *(int *)(param_1 + 0x11a);
      iVar3 = *(int *)(iVar1 + 8);
      puVar7 = operator_new(0xe);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = uVar8;
        puVar7[1] = iVar3;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 **)(iVar1 + 8) = puVar7;
      *(int *)(iVar1 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 **)(iVar1 + 4) = puVar7;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar7;
      }
    }
  }
  FUN_004353e0();
  FUN_00436130((float)fVar9);
  ExceptionList = pvStack_c;
  return;
}


