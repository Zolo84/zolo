// FUN_0079ac3f @ 79ac3f size=246

void FUN_0079ac3f(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  
  FUN_007a9c5c();
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar6 = (undefined4 *)(unaff_EBP + -0x18);
  while( true ) {
    puVar3 = (undefined4 *)FUN_007aadca();
    *puVar3 = 0;
    uVar4 = FUN_0074c2a0(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = FUN_0079ad7b(unaff_EBP + -0x38,unaff_EBP + 0xc,unaff_EBP + 0x14,0x800,uVar4);
    uVar4 = FUN_007aad40(unaff_EBP + -0x38,unaff_EBP + -0x14,uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar6 = uVar4;
    FUN_0074c280();
    cVar2 = FUN_0079bd57(unaff_EBP + 0x14);
    if (cVar2 != '\0') {
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(unaff_EBP + -0x14) == unaff_EBP + -0x38) break;
    piVar5 = (int *)FUN_007aadca();
    if (*piVar5 != 0) break;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar6 = puVar6 + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_0079ad09;
    cVar2 = FUN_0079bd57(unaff_EBP + 0x14);
    if (cVar2 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      Peek();
    }
    if (*(char *)(unaff_EBP + 0x11) != ':') break;
    FUN_0079b543();
  }
  *puVar1 = *puVar1 | 2;
LAB_0079ad09:
  if ((*puVar1 & 2) == 0) {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  }
  puVar6 = *(undefined4 **)(unaff_EBP + 8);
  *puVar6 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar6[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


