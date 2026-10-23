// Unwind@007e0458 @ 7e0458 size=39

void Unwind_007e0458(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 8;
  }
  FUN_00428ca0();
  return;
}


