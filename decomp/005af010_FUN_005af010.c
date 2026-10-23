// FUN_005af010 @ 5af010 size=117

undefined4 * __fastcall FUN_005af010(undefined4 *param_1)

{
  undefined2 local_14;
  undefined4 local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb8b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_004289a0();
  local_14 = 2;
  local_12 = 2;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_007ec53c;
  param_1[2] = &PTR_LAB_007ec52c;
  FUN_00428a80(&local_14);
  ExceptionList = local_c;
  return param_1;
}


