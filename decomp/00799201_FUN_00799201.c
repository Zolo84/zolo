// FUN_00799201 @ 799201 size=95

undefined4 * FUN_00799201(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x20);
  FUN_0079723b();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007991d2(*(undefined4 *)(unaff_EBP + 0xc));
  FUN_00799302(1);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  FUN_0079723b();
  FUN_0074c280();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


