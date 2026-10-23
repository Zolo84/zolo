// Unwind@007c9b66 @ 7c9b66 size=52

void Unwind_007c9b66(void)

{
  int unaff_EBP;
  
  if (unaff_EBP == 0x2dc) {
    uRamffffffbc = 0;
  }
  else {
    *(int *)(unaff_EBP + -800) = unaff_EBP + -300;
  }
  FUN_0058e730();
  return;
}


