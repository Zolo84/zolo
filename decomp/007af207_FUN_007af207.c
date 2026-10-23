// FUN_007af207 @ 7af207 size=93

undefined4 FUN_007af207(int param_1)

{
  int iVar1;
  
  DAT_00dc5b48 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00dc5b48 != (HANDLE)0x0) {
    DAT_00dc5b4c = FUN_007af0bf();
    if (DAT_00dc5b4c == 3) {
      iVar1 = FUN_007af3de(0x3f8);
    }
    else {
      if (DAT_00dc5b4c != 2) {
        return 1;
      }
      iVar1 = FUN_007b0347();
    }
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00dc5b48);
  }
  return 0;
}


