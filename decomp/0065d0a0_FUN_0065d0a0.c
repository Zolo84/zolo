// FUN_0065d0a0 @ 65d0a0 size=141

void __fastcall FUN_0065d0a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d3540;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f0acc;
  param_1[2] = &PTR_LAB_007f0ac8;
  local_4 = 0;
  if (param_1[9] != 4) {
    FUN_00648c30(param_1[9]);
  }
  *param_1 = &PTR_FUN_007f0ab4;
  param_1[2] = &PTR_LAB_007f0ab0;
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


