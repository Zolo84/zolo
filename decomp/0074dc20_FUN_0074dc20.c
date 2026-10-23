// FUN_0074dc20 @ 74dc20 size=128

int FUN_0074dc20(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df8d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00798acc();
  local_4 = 0;
  DAT_00d4c258 = param_1;
  FUN_00798acc();
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_00798b68();
  FUN_007a63e8(FUN_0074dd40);
  local_4 = 0xffffffff;
  FUN_00798b68();
  ExceptionList = local_c;
  return param_1;
}


