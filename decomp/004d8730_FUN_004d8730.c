// FUN_004d8730 @ 4d8730 size=135

void FUN_004d8730(void)

{
  int iVar1;
  
  if (0 < DAT_008477ac) {
    iVar1 = DAT_00ab27b4 + DAT_008477ac * 0x4b2;
    FUN_004d87e0(*(int *)(DAT_00ab27b4 + 0x3b2 + DAT_008477ac * 0x4b2) - DAT_00847858,
                 *(int *)(iVar1 + 0x3b6) - DAT_0084785c,
                 *(int *)(DAT_00ab27b4 + 0x3ba + DAT_008477ac * 0x4b2) - DAT_00847858,
                 *(int *)(iVar1 + 0x3be) - DAT_0084785c);
    DAT_008477ac = 0;
    FUN_004dcb20(DAT_00a98448,DAT_00a98440);
  }
  return;
}


