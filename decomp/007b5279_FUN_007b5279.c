// FUN_007b5279 @ 7b5279 size=111

int FUN_007b5279(int param_1)

{
  bool bVar1;
  
  if (DAT_00dc5218 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_00dc5c70);
    bVar1 = DAT_00dc5c6c != 0;
    if (bVar1) {
      InterlockedDecrement(&DAT_00dc5c70);
      FUN_007aae71(0x13);
    }
    param_1 = FUN_007b52e8(param_1);
    if (bVar1) {
      FUN_007aaed2(0x13);
    }
    else {
      InterlockedDecrement(&DAT_00dc5c70);
    }
  }
  return param_1;
}


