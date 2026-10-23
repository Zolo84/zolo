// Unwind@007d4b48 @ 7d4b48 size=39

void Unwind_007d4b48(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x10) + 0x12;
  }
  thunk_FUN_006a9770();
  return;
}


