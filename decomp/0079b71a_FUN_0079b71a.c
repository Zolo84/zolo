// FUN_0079b71a @ 79b71a size=159

undefined4 * FUN_0079b71a(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_0080011c;
  FUN_00798acc();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_0079a34a(&DAT_0083f6f4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0079a05b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0079a47a();
  if (extraout_ECX[5] != 0) {
    FUN_007a77fa(extraout_ECX[4]);
    extraout_ECX[5] = 0;
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    extraout_ECX[4] = DAT_00dc4fd8;
  }
  else {
    extraout_ECX[4] = *(int *)(unaff_EBP + 8);
    extraout_ECX[5] = (uint)*(byte *)(unaff_EBP + 0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


