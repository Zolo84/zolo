// FUN_00436a00 @ 436a00 size=251

void __thiscall FUN_00436a00(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba8cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x24c);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_00436b00(param_3);
    iVar4 = FUN_00434260(*(undefined4 *)(param_1 + 0x56),param_2,uVar3,param_3);
  }
  *(undefined1 *)(iVar4 + 0x248) = param_4;
  *(undefined1 *)(iVar4 + 0x2e) = *(undefined1 *)(param_1 + 0x5d);
  *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(param_1 + 0x5a);
  iVar1 = *(int *)(param_1 + 8);
  local_4 = 0xffffffff;
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
  iVar4 = *(int *)(param_1 + 0xc);
  *(int **)(param_1 + 8) = piVar5;
  *(int *)(param_1 + 0xc) = iVar4 + 1;
  if (iVar4 != 0) {
    *(int **)(iVar1 + 8) = piVar5;
    ExceptionList = local_c;
    return;
  }
  *(int **)(param_1 + 4) = piVar5;
  ExceptionList = local_c;
  return;
}


