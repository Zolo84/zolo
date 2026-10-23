// FUN_0050b570 @ 50b570 size=144

void __fastcall FUN_0050b570(undefined4 *param_1)

{
  uint uVar1;
  uint local_8;
  
  uVar1 = local_8;
  local_8 = local_8 & 0xff000000;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(uint *)((int)param_1 + 0x12) = local_8;
  local_8 = uVar1 & 0xff000000;
  *param_1 = &PTR_LAB_007e8754;
  param_1[6] = local_8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3e800000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0xbf800000;
  *(undefined1 *)((int)param_1 + 0x32) = 1;
  return;
}


