// thunk_FUN_00590730 @ 5a9690 size=5

void __fastcall thunk_FUN_00590730(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_007c9e44;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eb3d0;
  param_1[2] = &PTR_LAB_007eb3cc;
  uStack_4 = 2;
  FUN_005918c0();
  iVar1 = *(int *)((int)param_1 + 0x15a);
  piVar4 = (int *)0x0;
  piVar3 = *(int **)(iVar1 + 4);
  while (piVar3 != (int *)0x0) {
    piVar4 = (int *)piVar3[2];
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    FUN_00796cd8(piVar3);
    piVar3 = piVar4;
  }
  *(int **)(iVar1 + 4) = piVar4;
  *(int **)(iVar1 + 8) = piVar4;
  *(int **)(iVar1 + 0xc) = piVar4;
  (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x14))();
  if (*(int **)((int)param_1 + 0x15a) != piVar4) {
    (**(code **)**(int **)((int)param_1 + 0x15a))(1);
  }
  if (*(int **)((int)param_1 + 0x156) != piVar4) {
    (**(code **)**(int **)((int)param_1 + 0x156))(1);
  }
  if ((int *)param_1[0x19c] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x19c])(1);
  }
  if ((int *)param_1[0x19d] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x19d])(1);
  }
  if ((int *)param_1[0x19e] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x19e])(1);
  }
  if ((int *)param_1[0x19f] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x19f])(1);
  }
  if ((int *)param_1[0x1a0] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x1a0])(1);
  }
  if ((int *)param_1[0x1a1] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x1a1])(1);
  }
  if ((int *)param_1[0x1a2] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x1a2])(1);
  }
  if ((int *)param_1[0x1a3] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x1a3])(1);
  }
  if ((int *)param_1[0x1a4] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x1a4])(1);
  }
  if ((int *)param_1[0x1a5] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x1a5])(1);
  }
  if ((int *)param_1[0x1a6] != piVar4) {
    (*(code *)**(undefined4 **)param_1[0x1a6])(1);
  }
  param_1[0x1a7] = &PTR_LAB_007eb42c;
  piVar3 = (int *)param_1[0x1a8];
  while (piVar3 != piVar4) {
    piVar2 = (int *)piVar3[2];
    FUN_00796cd8(piVar3);
    piVar3 = piVar2;
  }
  param_1[0x1a8] = piVar4;
  param_1[0x1a9] = piVar4;
  param_1[0x1aa] = piVar4;
  uStack_4 = uStack_4 & 0xffffff00;
  param_1[0x51] = &PTR_LAB_007e3b70;
  piVar3 = (int *)param_1[0x52];
  if ((int *)param_1[0x52] != piVar4) {
    do {
      piVar2 = (int *)piVar3[2];
      FUN_00796cd8(piVar3);
      piVar4 = (int *)0x0;
      piVar3 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  param_1[0x52] = piVar4;
  param_1[0x53] = piVar4;
  param_1[0x54] = piVar4;
  FUN_0043fb30();
  uStack_4 = 0xffffffff;
  FUN_0058ede0();
  ExceptionList = pvStack_c;
  return;
}


