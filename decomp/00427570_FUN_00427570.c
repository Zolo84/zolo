// FUN_00427570 @ 427570 size=23

undefined1 __fastcall FUN_00427570(int param_1)

{
  if (*(char *)(param_1 + 0x13c) == '\x01') {
    *(undefined1 *)(param_1 + 0x13c) = 0;
    return 1;
  }
  return 0;
}


