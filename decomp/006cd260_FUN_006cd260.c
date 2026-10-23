// FUN_006cd260 @ 6cd260 size=121

int * __fastcall FUN_006cd260(int *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d8e0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = (int)&PTR_LAB_007f73a0;
  local_4 = 0;
  puVar1 = operator_new(0x424);
  *param_1 = (int)puVar1;
  *puVar1 = 0x137;
  *(undefined4 *)(*param_1 + 4) = 0x424;
  *(undefined4 *)(*param_1 + 8) = 0xfb;
  *(undefined1 *)(*param_1 + 0x422) = 0;
  ExceptionList = local_c;
  return param_1;
}


