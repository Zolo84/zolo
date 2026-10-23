// Unwind@007c3048 @ 7c3048 size=39

void Unwind_007c3048(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x10) + 0xc;
  }
  FUN_0053f440();
  return;
}


