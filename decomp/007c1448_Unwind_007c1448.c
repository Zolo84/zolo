// Unwind@007c1448 @ 7c1448 size=39

void Unwind_007c1448(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 8;
  }
  FUN_00428ca0();
  return;
}


