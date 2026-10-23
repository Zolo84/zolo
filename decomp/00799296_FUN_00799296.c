// FUN_00799296 @ 799296 size=80

void FUN_00799296(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_00800048;
  iVar1 = extraout_ECX[9];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 0) ||
     ((&DAT_00dc4fbc)[iVar1] = (&DAT_00dc4fbc)[iVar1] + -1,
     (char)(&DAT_00dc4fbc)[extraout_ECX[9]] < '\x01')) {
    FUN_0079947b();
  }
  FUN_0074c280();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


