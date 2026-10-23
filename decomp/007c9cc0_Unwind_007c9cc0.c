// Unwind@007c9cc0 @ 7c9cc0 size=39

void Unwind_007c9cc0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 0x2e;
  }
  FUN_005920a0();
  return;
}


