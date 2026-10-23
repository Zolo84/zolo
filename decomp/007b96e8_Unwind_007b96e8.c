// Unwind@007b96e8 @ 7b96e8 size=39

void Unwind_007b96e8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x28;
  }
  FUN_005837f0();
  return;
}


