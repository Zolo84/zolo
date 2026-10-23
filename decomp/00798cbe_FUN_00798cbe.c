// FUN_00798cbe @ 798cbe size=93

undefined4 * FUN_00798cbe(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_007a986a(iVar2);
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 3) = uVar1;
  FUN_00674910(0);
  FUN_00674710(iVar2 + 0xc,0,DAT_007f33d8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_007fffb4;
  return extraout_ECX;
}


