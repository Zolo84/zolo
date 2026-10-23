// FUN_00798381 @ 798381 size=101

void FUN_00798381(void)

{
  char cVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_007fff24;
  cVar1 = *(char *)(extraout_ECX + 0x12);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (cVar1 != '\0') {
    FUN_007989cb();
  }
  iVar2 = extraout_ECX[0x11];
  if (iVar2 != 0) {
    FUN_00674910(1);
    FUN_00796cd8(iVar2);
  }
  FUN_0074c280();
  *extraout_ECX = &PTR_FUN_007fff5c;
  FUN_0074c280();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


