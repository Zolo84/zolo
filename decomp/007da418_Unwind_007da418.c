// Unwind@007da418 @ 7da418 size=39

void Unwind_007da418(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) + 0x12;
  }
  FUN_00435fe0();
  return;
}


