// FUN_007a29b6 @ 7a29b6 size=207

undefined1 * FUN_007a29b6(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int unaff_EBP;
  uint uVar4;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_00674910(0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar4 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc);
  uVar3 = uVar4;
  while( true ) {
    FUN_00797965(uVar3,0);
    FUN_00797b07();
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    FUN_00797b07();
    if (uVar4 <= (-(uint)(iVar1 != 0) & *(int *)(unaff_EBP + -0x18) + iVar1) -
                 *(int *)(unaff_EBP + -0x1c)) {
      FUN_007a71b0(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),uVar4);
    }
    if (uVar4 <= *(uint *)(unaff_EBP + -0x18)) break;
    uVar3 = uVar4 - *(int *)(unaff_EBP + -0x18);
  }
  FUN_007a3549(uVar4);
  puVar2 = *(undefined1 **)(unaff_EBP + 8);
  *puVar2 = *(undefined1 *)(unaff_EBP + -0x20);
  FUN_00674910(0);
  FUN_00674710(unaff_EBP + -0x20,0,DAT_007f33d8);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


