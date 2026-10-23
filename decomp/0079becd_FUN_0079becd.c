// FUN_0079becd @ 79becd size=77

void FUN_0079becd(void)

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
  DAT_00dc5000 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


