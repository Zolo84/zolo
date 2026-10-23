// FUN_00797ff4 @ 797ff4 size=95

int * FUN_00797ff4(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_007fff10;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_007fff0c;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_007fff04;
  FUN_007993f5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


