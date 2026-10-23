// FUN_007a57c4 @ 7a57c4 size=127

int FUN_007a57c4(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00dc5218;
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
  }
  if (iVar1 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_00dc5c70);
    bVar2 = DAT_00dc5c6c != 0;
    if (bVar2) {
      InterlockedDecrement(&DAT_00dc5c70);
      FUN_007aae71(0x13);
    }
    param_1 = FUN_007a5843(param_1,param_2);
    if (bVar2) {
      FUN_007aaed2(0x13);
    }
    else {
      InterlockedDecrement(&DAT_00dc5c70);
    }
  }
  return param_1;
}


