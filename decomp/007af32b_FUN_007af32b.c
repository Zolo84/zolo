// FUN_007af32b @ 7af32b size=179

undefined4 FUN_007af32b(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (DAT_00dc5b4c == 3) {
    if (param_1 < 0x3f9) {
      DAT_00dc5b44 = param_1;
      return 1;
    }
  }
  else if (DAT_00dc5b4c == 2) {
    uVar2 = param_1 + 0xf & 0xfffffff0;
    if (uVar2 < 0x781) {
      DAT_0087f624 = uVar2;
      return 1;
    }
  }
  else if ((DAT_00dc5b4c == 1) && (param_1 != 0)) {
    FUN_007af092(&param_1);
    if ((byte)param_1 < 6) {
      uVar2 = uVar2 + 0xf & 0xfffffff0;
      if ((uVar2 < 0x781) && (iVar1 = FUN_007b0347(), iVar1 != 0)) {
        DAT_0087f624 = uVar2;
        DAT_00dc5b4c = 2;
        return 1;
      }
    }
    else if ((uVar2 < 0x3f9) && (iVar1 = FUN_007af3de(uVar2), iVar1 != 0)) {
      DAT_00dc5b44 = uVar2;
      DAT_00dc5b4c = 3;
      return 1;
    }
  }
  return 0;
}


