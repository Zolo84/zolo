// FUN_007a5c92 @ 7a5c92 size=84

undefined8 FUN_007a5c92(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  InterlockedIncrement(&DAT_00dc5c70);
  uVar2 = DAT_00dc522c;
  uVar1 = DAT_00dc5214;
  if (DAT_00dc5c6c == 0) {
    InterlockedDecrement(&DAT_00dc5c70);
  }
  else {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
    uVar2 = DAT_00dc522c;
    uVar1 = DAT_00dc5214;
    FUN_007aaed2(0x13);
  }
  return CONCAT44(uVar2,uVar1);
}


