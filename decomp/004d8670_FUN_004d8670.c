// FUN_004d8670 @ 4d8670 size=185

undefined4 FUN_004d8670(int param_1)

{
  int iVar1;
  
  if (((0 < param_1) && (param_1 != DAT_008477ac)) &&
     (*(int *)(DAT_00ab27b4 + 0x254 + param_1 * 0x4b2) != 10)) {
    DAT_008477ac = param_1;
    FUN_004dcb20(DAT_00a98448,DAT_00a98440);
    iVar1 = DAT_00ab27b4 + DAT_008477ac * 0x4b2;
    FUN_004d87e0(*(int *)(DAT_00ab27b4 + 0x3b2 + DAT_008477ac * 0x4b2) - DAT_00847858,
                 *(int *)(iVar1 + 0x3b6) - DAT_0084785c,
                 *(int *)(DAT_00ab27b4 + 0x3ba + DAT_008477ac * 0x4b2) - DAT_00847858,
                 *(int *)(iVar1 + 0x3be) - DAT_0084785c);
    return 1;
  }
  return 0;
}


