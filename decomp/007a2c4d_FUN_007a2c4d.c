// FUN_007a2c4d @ 7a2c4d size=138

undefined4 * FUN_007a2c4d(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int unaff_EBP;
  
  FUN_007a9c5c();
  FUN_007a3597(unaff_EBP + -0x1c,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar3 = FUN_0079bd57(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    FUN_00674710(unaff_EBP + -0x1c,0,DAT_007f33d8);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


