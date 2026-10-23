// FUN_007a32c1 @ 7a32c1 size=217

undefined4 * FUN_007a32c1(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x14) = DAT_00800308;
  *(undefined1 *)(unaff_EBP + -0x10) = DAT_0080030c;
  *(undefined1 *)(unaff_EBP + -0x24) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_00674910(0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    *(undefined1 *)(unaff_EBP + -0x12) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  else {
    *(char *)(unaff_EBP + -0x12) = *(char *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x11) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  iVar5 = 0x10;
  while( true ) {
    FUN_00797965(iVar5,0);
    uVar2 = *(undefined4 *)(extraout_ECX + 8);
    *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
    FUN_00797b07();
    iVar4 = FUN_007ab270(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + 0x1c),
                         unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x18),uVar2);
    if (iVar4 != 0) break;
    iVar5 = iVar5 * 2;
  }
  FUN_00797b07();
  iVar5 = *(int *)(unaff_EBP + -0x20);
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    puVar1 = (undefined1 *)(iVar5 + 1);
    iVar5 = iVar5 + 1;
    *(undefined1 *)(unaff_EBP + 0x1c) = *puVar1;
    FUN_0074d720(*(undefined4 *)(unaff_EBP + 0x1c));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


