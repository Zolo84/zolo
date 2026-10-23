// FUN_00498a40 @ 498a40 size=155

undefined4 * __thiscall FUN_00498a40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bde03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x23) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_007e64c0;
  param_1[2] = &PTR_LAB_007e64ac;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e64a4;
  FUN_00428d60(param_3);
  FUN_005896e0(param_2);
  ExceptionList = local_c;
  return param_1;
}


