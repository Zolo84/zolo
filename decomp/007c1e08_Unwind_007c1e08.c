// Unwind@007c1e08 @ 7c1e08 size=39

void Unwind_007c1e08(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 8;
  }
  FUN_00432dc0();
  return;
}


