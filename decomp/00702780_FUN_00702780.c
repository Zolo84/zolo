// FUN_00702780 @ 702780 size=69

undefined4 * __fastcall FUN_00702780(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_FUN_007f85ac;
  *param_1 = &PTR_FUN_007f857c;
  uVar1 = FUN_007a8d6d(&DAT_0088ebf8);
  *(undefined4 *)((int)param_1 + 0x16) = uVar1;
  *(undefined4 *)((int)param_1 + 0x12) = 0xffffffff;
  return param_1;
}


