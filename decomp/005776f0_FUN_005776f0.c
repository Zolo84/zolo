// FUN_005776f0 @ 5776f0 size=188

undefined4 * __fastcall FUN_005776f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c8929;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[4] = &PTR_FUN_007eacf0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007eacc0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xd] = &PTR_LAB_007eac90;
  *param_1 = &PTR_FUN_007eac5c;
  local_4 = 3;
  if (DAT_00bd00f0 == (undefined2 *)0x0) {
    DAT_00bd00f0 = operator_new(6);
    if (DAT_00bd00f0 == (undefined2 *)0x0) {
      DAT_00bd00f0 = (undefined2 *)0x0;
    }
    else {
      *DAT_00bd00f0 = 0;
      *(undefined4 *)(DAT_00bd00f0 + 1) = 0;
    }
  }
  DAT_00bd00f4 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,s_Scheduler_mutex_00856e50);
  ExceptionList = local_c;
  return param_1;
}


