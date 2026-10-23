// FUN_00509d30 @ 509d30 size=214

undefined4 * __fastcall FUN_00509d30(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c15e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  param_1[2] = &PTR_LAB_007e4068;
  FUN_00428000();
  *param_1 = &PTR_FUN_007e8710;
  param_1[2] = &PTR_FUN_007e8708;
  param_1[3] = &PTR_LAB_007e86f0;
  DAT_00adb0ec = DAT_00adb0ec + 1;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 3;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 100;
  uVar1 = FUN_007a8d6d(s_gfx_interface_pics_unknown_bmp_0084a150);
  *(undefined4 *)((int)param_1 + 0x2e) = uVar1;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 3000;
  *(undefined4 *)((int)param_1 + 0x46) = 3000;
  *(undefined4 *)((int)param_1 + 0x4a) = 3000;
  *(undefined4 *)((int)param_1 + 0x4e) = 1;
  *(undefined4 *)((int)param_1 + 0x52) = 1;
  *(undefined4 *)((int)param_1 + 0x56) = 3000;
  *(undefined4 *)((int)param_1 + 0x5a) = 3000;
  *(undefined4 *)((int)param_1 + 0x3e) = 1;
  ExceptionList = local_c;
  return param_1;
}


