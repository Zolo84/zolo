// FUN_005b5aa0 @ 5b5aa0 size=96

undefined4 * __fastcall FUN_005b5aa0(undefined4 *param_1)

{
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cbed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00428000();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ec54c;
  local_14 = 2;
  local_12 = 5;
  uStack_10 = 0;
  (*(code *)PTR_FUN_007ec550)(&local_14);
  ExceptionList = (void *)CONCAT22(uStack_e,uStack_10);
  return param_1;
}


