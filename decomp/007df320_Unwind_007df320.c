// Unwind@007df320 @ 7df320 size=39

void Unwind_007df320(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x10) + 0x18;
  }
  FUN_00744070();
  return;
}


