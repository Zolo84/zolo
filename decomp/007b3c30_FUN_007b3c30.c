// FUN_007b3c30 @ 7b3c30 size=93

undefined4 FUN_007b3c30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_00dc5c70);
  bVar2 = DAT_00dc5c6c != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
  }
  uVar1 = FUN_007b3c8d(param_1,param_2,param_3);
  if (bVar2) {
    FUN_007aaed2(0x13);
  }
  else {
    InterlockedDecrement(&DAT_00dc5c70);
  }
  return uVar1;
}


