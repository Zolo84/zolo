// FUN_00507cb0 @ 507cb0 size=148

void __fastcall FUN_00507cb0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c15a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e85c0;
  param_1[2] = &PTR_LAB_007e85bc;
  param_1[5] = &PTR_LAB_007e85a8;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_007e85a0;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007e8570;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x2b2) != 0) {
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x2b2) + 0x294) + 0x18))(param_1);
  }
  if (*(int *)((int)param_1 + 0x2ae) != 0) {
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x2ae) + 0x2aa) + 0x18))(param_1);
  }
  local_4 = 0xffffffff;
  FUN_00519d80();
  ExceptionList = pvStack_c;
  return;
}


