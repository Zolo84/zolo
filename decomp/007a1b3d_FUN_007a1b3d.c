// FUN_007a1b3d @ 7a1b3d size=96

undefined4 * FUN_007a1b3d(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_008002d4;
  FUN_0079a34a(&DAT_0083f6f4);
  puVar1 = (undefined4 *)FUN_007a592b(unaff_EBP + -0x20);
  extraout_ECX[2] = *puVar1;
  extraout_ECX[3] = puVar1[1];
  extraout_ECX[4] = puVar1[2];
  extraout_ECX[5] = puVar1[3];
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


