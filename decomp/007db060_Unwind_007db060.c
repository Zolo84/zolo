// Unwind@007db060 @ 7db060 size=39

void Unwind_007db060(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0xc) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x10) + 4;
  }
  FUN_006f91e0();
  return;
}


