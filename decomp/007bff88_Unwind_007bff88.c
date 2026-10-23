// Unwind@007bff88 @ 7bff88 size=39

void Unwind_007bff88(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0xc;
  }
  FUN_00428200();
  return;
}


