// FUN_007997f3 @ 7997f3 size=114

undefined4 * FUN_007997f3(void)

{
  undefined1 uVar1;
  size_t sVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_LAB_0080007c;
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(unaff_EBP + 8);
  uVar1 = *(undefined1 *)(unaff_EBP + 0xb);
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  *(undefined1 *)(extraout_ECX + 6) = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00674910(0);
  sVar2 = _strlen(&DAT_0085b098);
  FUN_00674d80(&DAT_0085b098,sVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_00800074;
  return extraout_ECX;
}


