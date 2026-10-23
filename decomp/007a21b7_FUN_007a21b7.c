// FUN_007a21b7 @ 7a21b7 size=95

undefined4 * FUN_007a21b7(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0xc);
  *extraout_ECX = &PTR_FUN_00800334;
  uVar1 = FUN_0079a34a(&DAT_0083f6f4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_007a0b95(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


