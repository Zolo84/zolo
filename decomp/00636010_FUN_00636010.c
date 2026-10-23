// FUN_00636010 @ 636010 size=316

void __fastcall FUN_00636010(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d1bab;
  iVar1 = *(int *)(param_1 + 0x116);
  piVar5 = *(int **)(iVar1 + 4);
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
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
  piVar5 = *(int **)(*(int *)(param_1 + 0x90) + 0x3b6c);
  while (piVar5 != (int *)0x0) {
    piVar2 = (int *)piVar5[2];
    iVar1 = *piVar5;
    puVar6 = operator_new(0x34);
    uStack_4 = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_00433f00();
      *(undefined2 *)((int)puVar6 + 0x2e) = 0;
      puVar6[0xc] = 0;
      *puVar6 = &PTR_FUN_007ef768;
      puVar6[2] = &PTR_LAB_007ef764;
      *(undefined4 *)((int)puVar6 + 0x2e) = *(undefined4 *)(iVar1 + 0xc);
      *(undefined2 *)((int)puVar6 + 0x32) = *(undefined2 *)(iVar1 + 0x10);
    }
    uStack_4 = 0xffffffff;
    iVar1 = *(int *)(param_1 + 0x116);
    iVar3 = *(int *)(iVar1 + 8);
    puVar7 = operator_new(0xe);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = puVar6;
      puVar7[1] = iVar3;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 **)(iVar1 + 8) = puVar7;
    *(int *)(iVar1 + 0xc) = iVar4 + 1;
    piVar5 = piVar2;
    if (iVar4 == 0) {
      *(undefined4 **)(iVar1 + 4) = puVar7;
    }
    else {
      *(undefined4 **)(iVar3 + 8) = puVar7;
    }
  }
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
}


