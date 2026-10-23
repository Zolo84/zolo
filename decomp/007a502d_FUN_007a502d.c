// FUN_007a502d @ 7a502d size=78

undefined4 FUN_007a502d(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_007a9c5c();
  FUN_00798acc();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_00dc5110 = uVar1;
  FUN_0079723b();
  FUN_007a63e8(FUN_007a52fa);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


