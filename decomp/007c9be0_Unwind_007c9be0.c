// Unwind@007c9be0 @ 7c9be0 size=41

void Unwind_007c9be0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -8) = 0;
  }
  else {
    *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -0x10) + 0x1b0;
  }
  FUN_0058e730();
  return;
}


