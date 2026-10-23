// FUN_0079c1cb @ 79c1cb size=145

undefined4
FUN_0079c1cb(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined *param_4)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_00dc5c70);
  bVar2 = DAT_00dc5c6c == 0;
  if (!bVar2) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
  }
  if (param_2 == (undefined1 *)0x0) {
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_00dc500c;
    }
    param_2 = &DAT_0088ebf8;
    param_1 = 0;
  }
  else if (param_4 == (undefined *)0x0) {
    param_4 = &DAT_00dc500c;
  }
  uVar1 = FUN_0079c00c(param_1,param_2,param_3,param_4,0);
  if (bVar2) {
    InterlockedDecrement(&DAT_00dc5c70);
  }
  else {
    FUN_007aaed2(0x13);
  }
  return uVar1;
}


