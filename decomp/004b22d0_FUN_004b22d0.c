// FUN_004b22d0 @ 4b22d0 size=256

int __thiscall FUN_004b22d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be48b;
  local_c = ExceptionList;
  piVar4 = *(int **)(param_1 + 0xc);
  do {
    if (piVar4 == (int *)0x0) goto LAB_004b232f;
    piVar1 = (int *)piVar4[1];
    iVar8 = *piVar4;
    iVar2 = *(int *)(iVar8 + 4);
    piVar4 = piVar1;
  } while (((iVar2 == 0) || (*(int *)(iVar2 + 0xa0) != *(int *)(param_2 + 0xe))) ||
          (*(short *)(iVar2 + 0x9e) != *(short *)(param_2 + 0xc)));
  iVar8 = *(int *)(iVar8 + 4);
  if (iVar8 == 0) {
LAB_004b232f:
    ExceptionList = &local_c;
    pvVar5 = operator_new(0xa8);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_004b0e90(param_2);
    }
    local_4 = 0xffffffff;
    puVar6 = operator_new(8);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = param_2;
    }
    iVar2 = *(int *)(param_1 + 0xc);
    puVar7 = operator_new(0xe);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = puVar6;
      puVar7[1] = iVar2;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    *(undefined4 **)(param_1 + 0xc) = puVar7;
    *(int *)(param_1 + 0x10) = iVar3 + 1;
    iVar8 = param_2;
    if (iVar3 == 0) {
      *(undefined4 **)(param_1 + 8) = puVar7;
    }
    else {
      *(undefined4 **)(iVar2 + 8) = puVar7;
    }
  }
  ExceptionList = local_c;
  return iVar8;
}


