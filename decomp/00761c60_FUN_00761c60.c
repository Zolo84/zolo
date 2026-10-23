// FUN_00761c60 @ 761c60 size=264

undefined4 * __fastcall FUN_00761c60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e07f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  *(undefined ***)((int)param_1 + 0x6a) = &PTR_LAB_007fa54c;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x21] = &PTR_LAB_007e378c;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  *(undefined ***)((int)param_1 + 0x96) = &PTR_LAB_007e378c;
  param_1[0x2a] = &PTR_LAB_007e378c;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *param_1 = &PTR_FUN_007fa53c;
  param_1[2] = &PTR_LAB_007fa528;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa520;
  *(undefined4 *)((int)param_1 + 0x16) = 5;
  *(undefined4 *)((int)param_1 + 0x26) = 4;
  param_1[0x1f] = 0xa4;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 3000;
  *(undefined4 *)((int)param_1 + 0x22) = 3000;
  *(undefined4 *)((int)param_1 + 0xba) = DAT_00d590d8;
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  ExceptionList = local_c;
  return param_1;
}


