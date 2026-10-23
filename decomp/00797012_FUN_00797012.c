// FUN_00797012 @ 797012 size=106

int * FUN_00797012(void)

{
  char cVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_007ffe78;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_007ffe74;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  cVar1 = *(char *)(unaff_EBP + 0x10);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_007ffe6c;
  if (cVar1 != '\0') {
    FUN_007979be(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


