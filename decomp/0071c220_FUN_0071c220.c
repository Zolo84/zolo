// FUN_0071c220 @ 71c220 size=56

void __fastcall FUN_0071c220(undefined4 *param_1)

{
  uint local_8;
  
  local_8 = local_8 & 0xff000000;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[2] = local_8;
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}


