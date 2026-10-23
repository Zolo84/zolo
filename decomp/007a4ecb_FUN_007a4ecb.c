// FUN_007a4ecb @ 7a4ecb size=89

undefined4 * FUN_007a4ecb(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_008004ac;
  uVar1 = FUN_0079a34a(&DAT_0083f6f4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_007a43f7(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


