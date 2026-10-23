// FUN_007a1b9d @ 7a1b9d size=109

undefined4 * FUN_007a1b9d(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_008001a0;
  FUN_0079a34a(&DAT_0083f6f4);
  puVar1 = (undefined4 *)FUN_0079e6f1(unaff_EBP + 8);
  extraout_ECX[2] = *puVar1;
  *puVar1 = 0;
  FUN_007a77fa(*(undefined4 *)(unaff_EBP + 8));
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


