// Unwind@007df223 @ 7df223 size=39

void Unwind_007df223(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + -0x18) + 0x18;
  }
  FUN_00743d20();
  return;
}


