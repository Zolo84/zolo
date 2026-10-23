// Unwind@007c1608 @ 7c1608 size=39

void Unwind_007c1608(void)

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


