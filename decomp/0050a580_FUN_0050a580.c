// FUN_0050a580 @ 50a580 size=134

undefined4 __fastcall FUN_0050a580(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x26);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x22);
    if (iVar1 == 0) {
      return DAT_00dc15cc;
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return DAT_00dc15d8;
      }
      return DAT_00dc15d4;
    }
    return DAT_00dc15d0;
  }
  if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x22);
    if (iVar1 == 0) {
      return DAT_00dc15ec;
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return DAT_00dc15f8;
      }
      return DAT_00dc15f4;
    }
    return DAT_00dc15f0;
  }
  if (iVar1 != 2) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x22);
  if (iVar1 == 0) {
    return DAT_00dc15dc;
  }
  if (iVar1 == 1) {
    return DAT_00dc15e0;
  }
  if (iVar1 != 2) {
    return DAT_00dc15e8;
  }
  return DAT_00dc15e4;
}


