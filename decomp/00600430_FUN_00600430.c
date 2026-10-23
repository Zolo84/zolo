// FUN_00600430 @ 600430 size=325

void __fastcall FUN_00600430(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cf7a6;
  iVar1 = *(int *)(param_1 + 0x9cec);
  piVar3 = *(int **)(iVar1 + 4);
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    FUN_00796cd8(piVar3);
    piVar3 = piVar2;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 0x9cf0);
  piVar3 = *(int **)(iVar1 + 4);
  while (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    FUN_00796cd8(piVar3);
    piVar3 = piVar2;
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  if (*(undefined4 **)(param_1 + 0x9cec) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x9cec))(1);
  }
  if (*(undefined4 **)(param_1 + 0x9cf0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x9cf0))(1);
  }
  pvVar4 = operator_new(0x72);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00434930(200,0x50,0,0);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9cec) = uVar5;
  pvVar4 = operator_new(0x72);
  uStack_4 = 1;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00434930(200,0x50,0,0);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9cf0) = uVar5;
  FUN_005ffd60();
  ExceptionList = pvStack_c;
  return;
}


