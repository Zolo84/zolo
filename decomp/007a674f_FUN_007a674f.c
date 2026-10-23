// FUN_007a674f @ 7a674f size=35

void FUN_007a674f(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_007aae71(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


