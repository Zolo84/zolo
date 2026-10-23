// FUN_0065cdb0 @ 65cdb0 size=210

/* WARNING: Removing unreachable block (ram,0x0065ce29) */

undefined4 * __thiscall FUN_0065cdb0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d34c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *param_1 = &PTR_FUN_007f0ab4;
  param_1[2] = &PTR_LAB_007f0ab0;
  param_2 = CONCAT13(param_2._3_1_,0xa0000);
  param_2 = CONCAT22(param_2._2_2_,0x1300);
  *(undefined4 *)((int)param_1 + 0x1a) = param_2;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x7b3;
  ExceptionList = local_c;
  return param_1;
}


