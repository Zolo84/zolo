// FUN_007b3a87 @ 7b3a87 size=89

undefined4 FUN_007b3a87(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_00dc5c70);
  bVar2 = DAT_00dc5c6c != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
  }
  uVar1 = FUN_007b3ae0(param_1,param_2);
  if (bVar2) {
    FUN_007aaed2(0x13);
  }
  else {
    InterlockedDecrement(&DAT_00dc5c70);
  }
  return uVar1;
}


