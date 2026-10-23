// FUN_007a1ca2 @ 7a1ca2 size=84

undefined4 * FUN_007a1ca2(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar1;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00800258;
  FUN_0079a34a(&DAT_0083f6f4);
  uVar1 = FUN_007a5c92();
  *(undefined8 *)(extraout_ECX + 2) = uVar1;
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


