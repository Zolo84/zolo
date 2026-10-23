// FUN_006a96f0 @ 6a96f0 size=90

undefined4 * __thiscall FUN_006a96f0(undefined4 *param_1,undefined4 param_2)

{
  FUN_006adea0();
  *(undefined4 *)((int)param_1 + 10) = param_2;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e8ad4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[10] = &PTR_FUN_007e4c84;
  *param_1 = &PTR_FUN_007f6b7c;
  DAT_00d126ec = DAT_00d126ec + 1;
  return param_1;
}


