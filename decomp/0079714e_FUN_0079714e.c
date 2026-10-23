// FUN_0079714e @ 79714e size=95

int * FUN_0079714e(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_007ffe80;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_007ffe74;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_007ffe64;
  FUN_007993f5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


