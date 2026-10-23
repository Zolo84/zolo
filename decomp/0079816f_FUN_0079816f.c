// FUN_0079816f @ 79816f size=96

undefined4 * FUN_0079816f(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0079720d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_007fff5c;
  FUN_00798a48();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0079720d();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_007fff24;
  FUN_007989f2(uVar1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


