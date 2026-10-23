// FUN_004258b0 @ 4258b0 size=197

undefined4 * __fastcall FUN_004258b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9f1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x14);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x74))();
  iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
  puVar1[1] = 0xd;
  puVar1[2] = 0;
  *puVar1 = &PTR_LAB_007e38f8;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  puVar1[3] = iVar3;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    puVar1[4] = iVar2;
    *puVar1 = &PTR_FUN_007e3878;
    ExceptionList = local_c;
    return puVar1;
  }
  *puVar1 = &PTR_FUN_007e3878;
  puVar1[4] = 0;
  ExceptionList = local_c;
  return puVar1;
}


