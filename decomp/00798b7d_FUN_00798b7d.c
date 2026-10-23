// FUN_00798b7d @ 798b7d size=89

void FUN_00798b7d(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_00674910(0);
  sVar1 = _strlen("string too long");
  FUN_00674d80("string too long",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00798bd7(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_LAB_007fff94;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_00829080);
}


