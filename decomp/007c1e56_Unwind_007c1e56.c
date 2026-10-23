// Unwind@007c1e56 @ 7c1e56 size=48

void Unwind_007c1e56(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10c) = *(int *)(unaff_EBP + -0x10) + 0x22;
  }
  FUN_004587d0();
  return;
}


