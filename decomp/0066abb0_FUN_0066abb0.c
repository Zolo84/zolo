// FUN_0066abb0 @ 66abb0 size=415

void __thiscall FUN_0066abb0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piStack_1c;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d3f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x10))();
  (**(code **)(*(int *)(param_1 + 0x2a) + 0x10))();
  (**(code **)(*(int *)(param_1 + 0x40) + 0x10))();
  uVar10 = 0x66abf7;
  iVar7 = param_2;
  FUN_0066b0e0(param_2);
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 10)) {
    FUN_00446d10(iVar1);
    FUN_0049a190(uVar10,iVar7);
  }
  FUN_0066b470(param_2);
  iStack_14 = 0;
  piVar2 = *(int **)(param_2 + 0x4508);
  uStack_4 = 0;
  piVar4 = (int *)0x0;
  piVar5 = (int *)0x0;
  iVar1 = iStack_14;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    piVar3 = (int *)*piVar2;
    cVar6 = (**(code **)(*piVar3 + 0x30))();
    piVar9 = piVar5;
    piStack_1c = piVar4;
    iStack_14 = iVar1;
    if ((cVar6 != '\0') && (iVar7 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))(), 0 < iVar7)) {
      puVar8 = operator_new(0x1c);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *(undefined2 *)(puVar8 + 1) = 0;
        *(undefined4 *)((int)puVar8 + 6) = 0;
        *(undefined4 *)((int)puVar8 + 10) = 0;
        *(undefined2 *)((int)puVar8 + 0x12) = 0;
        *(undefined1 *)(puVar8 + 4) = 0;
        *(undefined1 *)((int)puVar8 + 0xf) = 0;
        *(undefined1 *)((int)puVar8 + 0xe) = 0;
        *puVar8 = &PTR_FUN_007f0c1c;
        if (piVar3 != (int *)0x0) {
          puVar8[1] = piVar3[6];
          *(short *)(puVar8 + 2) = (short)piVar3[7];
        }
      }
      piVar9 = operator_new(0xe);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        *piVar9 = (int)puVar8;
        piVar9[1] = (int)piVar5;
        piVar9[2] = 0;
        *(undefined1 *)(piVar9 + 3) = 0;
      }
      iStack_14 = iVar1 + 1;
      piStack_1c = piVar9;
      if (iVar1 != 0) {
        piVar5[2] = (int)piVar9;
        piStack_1c = piVar4;
      }
    }
    piVar4 = piStack_1c;
    piVar5 = piVar9;
    iVar1 = iStack_14;
  }
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar2;
  }
  ExceptionList = pvStack_c;
  return;
}


