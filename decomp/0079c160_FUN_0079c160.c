// FUN_0079c160 @ 79c160 size=107

undefined4 FUN_0079c160(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_00dc5c70);
  bVar2 = DAT_00dc5c6c != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
  }
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_00dc5008;
  }
  uVar1 = FUN_0079c00c(0,param_1,param_2,param_3,0);
  if (bVar2) {
    FUN_007aaed2(0x13);
  }
  else {
    InterlockedDecrement(&DAT_00dc5c70);
  }
  return uVar1;
}


