// FUN_00798f6f @ 798f6f size=100

undefined4 * FUN_00798f6f(void)

{
  undefined1 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined1 **)(unaff_EBP + -0x10) = &DAT_0088ebf8;
  FUN_007a982d(unaff_EBP + -0x10);
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 3) = *puVar1;
  FUN_00674910(0);
  FUN_00674710(puVar1,0,DAT_007f33d8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_00800038;
  return extraout_ECX;
}


