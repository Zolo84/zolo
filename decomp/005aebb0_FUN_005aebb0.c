// FUN_005aebb0 @ 5aebb0 size=85

undefined4 * __fastcall FUN_005aebb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00428000();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ec514;
  FUN_00428280(&DAT_0088f254);
  *(undefined4 *)((int)param_1 + 10) = 0;
  ExceptionList = local_c;
  return param_1;
}


