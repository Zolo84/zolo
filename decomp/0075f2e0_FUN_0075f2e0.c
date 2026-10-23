// FUN_0075f2e0 @ 75f2e0 size=252

undefined4 * __thiscall FUN_0075f2e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int local_2e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e043b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e378c;
  param_1[2] = &PTR_LAB_007fa4ac;
  local_4._0_1_ = 2;
  *param_1 = &PTR_FUN_007fa4c0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa4a4;
  FUN_0075f210();
  local_4._0_1_ = 4;
  while (local_2e != 0) {
    iVar1 = *(int *)(local_2e + 8);
    FUN_00796cd8(local_2e);
    local_2e = iVar1;
  }
  local_4._0_1_ = 3;
  FUN_00428ca0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00425b80();
  *(undefined4 *)((int)param_1 + 0x36) = param_2;
  ExceptionList = local_c;
  return param_1;
}


