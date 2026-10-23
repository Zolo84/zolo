// FUN_007a67a1 @ 7a67a1 size=35

void FUN_007a67a1(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_007aaed2(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


