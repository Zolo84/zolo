// Unwind@007e0028 @ 7e0028 size=39

void Unwind_007e0028(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 8;
  }
  FUN_00428200();
  return;
}


