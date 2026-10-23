// FUN_007a2216 @ 7a2216 size=77

void FUN_007a2216(void)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  FUN_00798acc(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)FUN_0074c240();
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  DAT_00dc5094 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


