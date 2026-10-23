// FUN_007a6772 @ 7a6772 size=47

void FUN_007a6772(uint param_1)

{
  if ((0x87cb47 < param_1) && (param_1 < 0x87cda9)) {
    FUN_007aaed2(((int)(param_1 - 0x87cb48) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


