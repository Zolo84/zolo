// Unwind@007d3788 @ 7d3788 size=39

void Unwind_007d3788(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x18) + 0x12;
  }
  FUN_0040d120();
  return;
}


