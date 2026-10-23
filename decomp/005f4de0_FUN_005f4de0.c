// FUN_005f4de0 @ 5f4de0 size=393

void __fastcall FUN_005f4de0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_007cee8b;
  pvStack_c = ExceptionList;
  piVar8 = (int *)0x0;
  local_14 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if (*(int *)(*(int *)(param_1 + 0x7e) + 0x3e) != 0) {
    ExceptionList = &pvStack_c;
    iVar3 = FUN_00428ee0();
    if (iVar3 == 0) {
      local_14 = (int *)0x0;
    }
    else {
      local_14 = (int *)(iVar3 + -8);
    }
  }
  FUN_00436030();
  iVar3 = *(int *)(param_1 + 0x7e);
  piVar4 = *(int **)(iVar3 + 4);
  while (piVar4 != (int *)0x0) {
    piVar8 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)();
    }
    FUN_00796cd8();
    piVar4 = piVar8;
  }
  *(int **)(iVar3 + 4) = piVar8;
  *(int **)(iVar3 + 8) = piVar8;
  *(int **)(iVar3 + 0xc) = piVar8;
  piVar4 = *(int **)(DAT_00d0ca90 + 0x3b6c);
  if (piVar4 != piVar8) {
    while( true ) {
      piVar7 = (int *)piVar4[2];
      iVar3 = *piVar4;
      piVar4 = operator_new(0x54);
      if (piVar4 == piVar8) {
        uVar5 = 0;
      }
      else {
        piStack_4 = piVar8;
        uVar5 = FUN_005f2a00(iVar3);
      }
      piStack_4 = (int *)0xffffffff;
      iVar3 = *(int *)(param_1 + 0x7e);
      iVar1 = *(int *)(iVar3 + 8);
      puVar6 = operator_new(0xe);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = uVar5;
        puVar6[1] = iVar1;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar2 = *(int *)(iVar3 + 0xc);
      *(undefined4 **)(iVar3 + 8) = puVar6;
      *(int *)(iVar3 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)(iVar3 + 4) = puVar6;
      }
      else {
        *(undefined4 **)(iVar1 + 8) = puVar6;
      }
      if (piVar7 == (int *)0x0) break;
      piVar8 = (int *)0x0;
      piVar4 = piVar7;
    }
    piVar8 = (int *)0x0;
  }
  FUN_004353e0();
  if (local_14 != piVar8) {
    for (piVar4 = *(int **)(*(int *)(param_1 + 0x7e) + 4); piVar4 != piVar8;
        piVar4 = (int *)piVar4[2]) {
      piVar7 = (int *)FUN_00428ee0();
      if (piVar7 == piVar8) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = piVar7 + -2;
      }
      if (piVar7 == local_14) {
        FUN_005918b0();
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


