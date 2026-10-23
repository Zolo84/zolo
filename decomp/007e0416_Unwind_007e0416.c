// Unwind@007e0416 @ 7e0416 size=37

void Unwind_007e0416(void)

{
  int unaff_EBP;
  
  if (unaff_EBP == 0x48) {
    uRamfffffff8 = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x50) = unaff_EBP + -0x40;
  }
  FUN_00428ca0();
  return;
}


