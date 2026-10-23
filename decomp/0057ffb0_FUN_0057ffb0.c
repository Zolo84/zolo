// FUN_0057ffb0 @ 57ffb0 size=139

undefined1 * __fastcall FUN_0057ffb0(undefined1 *param_1)

{
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x9c) = 1;
  *(undefined2 *)(param_1 + 0x9e) = 1;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x2b11;
  *(undefined2 *)(param_1 + 0xaa) = 0x10;
  *(undefined2 *)(param_1 + 0xa8) = 2;
  *(undefined4 *)(param_1 + 0xa4) = 0x5622;
  GetVersionExA(&local_94);
  return param_1;
}


