// FUN_004d8840 @ 4d8840 size=204

bool FUN_004d8840(int param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  param_1 = param_1 * 0x4b2;
  FUN_004d8ba0(*(undefined4 *)(param_1 + 0x3b2 + DAT_00ab27b4),
               *(undefined4 *)(param_1 + 0x3b6 + DAT_00ab27b4),&local_10);
  iVar1 = FUN_005841a0();
  if (iVar1 < local_10) {
    return false;
  }
  iVar1 = FUN_005841b0();
  if (iVar1 < local_c) {
    return false;
  }
  FUN_004d8ba0(*(undefined4 *)(param_1 + 0x3ba + DAT_00ab27b4),
               *(undefined4 *)(param_1 + 0x3be + DAT_00ab27b4),&local_8);
  if (((int)local_8 < 0x100) && (local_4 < 0x300)) {
    return false;
  }
  iVar1 = FUN_005841a0();
  if (iVar1 < local_10) {
    return false;
  }
  return -1 < local_4;
}


