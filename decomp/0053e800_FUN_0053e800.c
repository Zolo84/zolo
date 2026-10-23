// FUN_0053e800 @ 53e800 size=244

undefined4 * __thiscall FUN_0053e800(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = ExceptionList;
  puStack_8 = &LAB_007c3033;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 2;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[3] = &PTR_LAB_007e3ac0;
  *param_1 = &PTR_FUN_007e3a28;
  param_1[3] = &PTR_LAB_007e39f8;
  local_4 = 1;
  piVar3 = *(int **)(param_2 + 0x10);
  if (piVar3 == (int *)0x0) {
    ExceptionList = pvVar2;
    return param_1;
  }
  do {
    iVar5 = *piVar3;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar1 = *(int *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = iVar1 + 1;
      *(int *)(iVar5 + 8) = iVar1 + 2;
    }
    iVar1 = param_1[5];
    piVar4 = operator_new(0xe);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = iVar5;
      piVar4[1] = iVar1;
      piVar4[2] = 0;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    iVar5 = param_1[6];
    param_1[5] = piVar4;
    param_1[6] = iVar5 + 1;
    if (iVar5 == 0) {
      param_1[4] = piVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
    piVar3 = (int *)piVar3[2];
  } while (piVar3 != (int *)0x0);
  ExceptionList = local_c;
  return param_1;
}


