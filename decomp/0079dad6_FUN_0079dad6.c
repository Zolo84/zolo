// FUN_0079dad6 @ 79dad6 size=215

undefined1 * FUN_0079dad6(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int unaff_EBP;
  uint uVar4;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_007a0afc(0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar4 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc) >> 1;
  uVar3 = uVar4;
  while( true ) {
    FUN_007a03f8(uVar3,0);
    FUN_007a0a47();
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    FUN_007a0a47();
    if (uVar4 <= (uint)((int)((-(uint)(iVar1 != 0) & iVar1 + *(int *)(unaff_EBP + -0x18) * 2) -
                             *(int *)(unaff_EBP + -0x1c)) >> 1)) {
      FUN_007a71b0(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),uVar4 * 2);
    }
    if (uVar4 <= *(uint *)(unaff_EBP + -0x18)) break;
    uVar3 = uVar4 - *(int *)(unaff_EBP + -0x18);
  }
  FUN_007a0461(uVar4);
  puVar2 = *(undefined1 **)(unaff_EBP + 8);
  *puVar2 = *(undefined1 *)(unaff_EBP + -0x20);
  FUN_007a0afc(0);
  FUN_007a0789(unaff_EBP + -0x20,0,DAT_00800314);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_007a0afc(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


