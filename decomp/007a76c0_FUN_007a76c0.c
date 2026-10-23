// FUN_007a76c0 @ 7a76c0 size=111

int FUN_007a76c0(int param_1)

{
  bool bVar1;
  
  if (DAT_00dc5218 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_00dc5c70);
    bVar1 = DAT_00dc5c6c != 0;
    if (bVar1) {
      InterlockedDecrement(&DAT_00dc5c70);
      FUN_007aae71(0x13);
    }
    param_1 = FUN_007a772f(param_1);
    if (bVar1) {
      FUN_007aaed2(0x13);
    }
    else {
      InterlockedDecrement(&DAT_00dc5c70);
    }
  }
  return param_1;
}


