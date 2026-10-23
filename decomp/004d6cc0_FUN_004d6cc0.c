// FUN_004d6cc0 @ 4d6cc0 size=175

undefined4 * __fastcall FUN_004d6cc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf9e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007e3858;
  param_1[2] = &PTR_LAB_007e386c;
  local_4 = 1;
  FUN_004d8990();
  local_4._0_1_ = 2;
  FUN_004e05c0();
  param_1[5] = &PTR_LAB_007e4130;
  local_4 = CONCAT31(local_4._1_3_,3);
  *param_1 = &PTR_FUN_007e7ee4;
  param_1[2] = &PTR_LAB_007e7ee0;
  param_1[3] = &PTR_LAB_007e7edc;
  param_1[4] = &PTR_LAB_007e7ed8;
  param_1[5] = &PTR_FUN_007e7ed4;
  FUN_004d6e40();
  ExceptionList = local_c;
  return param_1;
}


