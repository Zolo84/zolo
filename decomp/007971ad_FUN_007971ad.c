// FUN_007971ad @ 7971ad size=96

undefined4 * FUN_007971ad(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0079720d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_007ffec4;
  FUN_00797b33();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0079720d();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_FUN_007ffe8c;
  FUN_00797a8f(uVar1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


