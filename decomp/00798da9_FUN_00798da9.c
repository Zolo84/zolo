// FUN_00798da9 @ 798da9 size=89

void FUN_00798da9(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_00674910(0);
  sVar1 = _strlen("invalid string position");
  FUN_00674d80("invalid string position",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00798bd7(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_LAB_007fffc4;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_008291a8);
}


