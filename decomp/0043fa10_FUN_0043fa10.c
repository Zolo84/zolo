// FUN_0043fa10 @ 43fa10 size=274

int * __thiscall FUN_0043fa10(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007baf9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0xb6);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00433570(param_2,param_3,0xffffffff);
    *(undefined4 *)((int)piVar2 + 0xb2) = 0;
    *piVar2 = (int)&PTR_FUN_007e46e8;
    piVar2[2] = (int)&PTR_LAB_007e46e4;
    *(undefined ***)((int)piVar2 + 0x7e) = &PTR_LAB_007e46e0;
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)piVar2 + 0xaa) = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)((int)piVar2 + 0xae) = *(undefined4 *)(param_1 + 0x22);
  (**(code **)(*piVar2 + 0x18))(*(undefined4 *)(param_1 + 0x1e),*(undefined4 *)(param_1 + 0x22));
  if ((param_2 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x2a);
    if (iVar3 < 1) {
      iVar3 = FUN_00415be0();
    }
    *(int *)(param_1 + 0x22) = *(int *)(param_1 + 0x22) + iVar3;
  }
  if ((param_2 & 2) != 0) {
    iVar3 = *(int *)(param_1 + 0x2a);
    if (iVar3 < 1) {
      iVar3 = FUN_00415bd0();
    }
    *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + iVar3;
  }
  iVar3 = *(int *)(param_1 + 8);
  puVar4 = operator_new(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = piVar2;
    puVar4[1] = iVar3;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 8) = puVar4;
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 4) = puVar4;
  }
  else {
    *(undefined4 **)(iVar3 + 8) = puVar4;
  }
  ExceptionList = unaff_EBX;
  return piVar2;
}


