// Unwind@007d93e8 @ 7d93e8 size=50

void Unwind_007d93e8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x9c) = *(int *)(unaff_EBP + -0x14) + 0x221c4;
  }
  FUN_006d5460();
  return;
}


