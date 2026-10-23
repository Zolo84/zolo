// FUN_0079a403 @ 79a403 size=119

undefined1 * FUN_0079a403(void)

{
  undefined1 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined1 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_00674910(0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x10] = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_00674910(0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x20] = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_00674910(0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x30] = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_00674910(0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0079a4ef(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


