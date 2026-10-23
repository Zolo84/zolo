// FUN_007a1cf6 @ 7a1cf6 size=114

undefined4 * FUN_007a1cf6(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00800244;
  FUN_0079a34a(&DAT_0083f6f4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_007a1aff(&DAT_0080035c,0);
  extraout_ECX[2] = uVar1;
  uVar1 = FUN_007a1aff(&PTR_LAB_0087301c,0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = uVar1;
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


