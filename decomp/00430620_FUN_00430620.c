// FUN_00430620 @ 430620 size=126

undefined4 * __thiscall FUN_00430620(undefined4 *param_1,undefined1 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba443;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_007e4048;
  param_1[2] = &PTR_LAB_007e4034;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e402c;
  FUN_00428d30();
  FUN_005847c0();
  *(undefined1 *)((int)param_1 + 0x16) = param_2;
  ExceptionList = local_c;
  return param_1;
}


