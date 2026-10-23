// FUN_006ce6b0 @ 6ce6b0 size=155

undefined4 * __thiscall FUN_006ce6b0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((int)param_1 + 0x11e) = 0;
  *(undefined1 *)((int)param_1 + 0x11d) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  param_1[2] = &PTR_LAB_007f7408;
  param_1[0x45] = param_2;
  *param_1 = &PTR_FUN_007f73f4;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 0x122) = 0;
  param_1[0x46] = 0;
  ExceptionList = local_c;
  return param_1;
}


