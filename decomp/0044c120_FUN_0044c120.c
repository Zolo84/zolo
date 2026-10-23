// FUN_0044c120 @ 44c120 size=190

int __thiscall FUN_0044c120(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbb8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x158);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004d2c60(param_1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(iVar4 + 8) + 4))(param_2);
  iVar1 = *(int *)(param_1 + 0x3b70);
  piVar5 = operator_new(0xe);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = iVar4;
    piVar5[1] = iVar1;
    piVar5[2] = 0;
    *(undefined1 *)(piVar5 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x3b74);
  *(int **)(param_1 + 0x3b70) = piVar5;
  *(int *)(param_1 + 0x3b74) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(param_1 + 0x3b6c) = piVar5;
  }
  else {
    *(int **)(iVar1 + 8) = piVar5;
  }
  ExceptionList = pvVar3;
  return iVar4;
}


