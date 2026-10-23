// Unwind@007bb438 @ 7bb438 size=39

void Unwind_007bb438(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x50) == 0) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x50) + 0xe;
  }
  FUN_0040d120();
  return;
}


