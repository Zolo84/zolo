// Unwind@007c1e2f @ 7c1e2f size=39

void Unwind_007c1e2f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10) + 0x14;
  }
  FUN_00428ca0();
  return;
}


