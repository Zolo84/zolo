// FUN_004fd4d0 @ 4fd4d0 size=58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_004fd4d0(int param_1)

{
  if (*(char *)(param_1 + 0x160) != '\0') {
    return 1;
  }
  if ((*(char *)(param_1 + 0x161) == '\0') && (*(char *)(param_1 + 0x15f) != '\0')) {
    if (_DAT_007e681c <= *(float *)(param_1 + 0x2d4)) {
      return 1;
    }
  }
  return 0;
}


