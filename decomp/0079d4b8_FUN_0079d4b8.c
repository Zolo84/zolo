// FUN_0079d4b8 @ 79d4b8 size=254

void FUN_0079d4b8(void)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  
  FUN_007a9c5c();
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar7 = (undefined4 *)(unaff_EBP + -0x18);
  while( true ) {
    puVar4 = (undefined4 *)FUN_007aadca();
    *puVar4 = 0;
    uVar5 = FUN_0074c2a0(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar5 = FUN_0079e75c(unaff_EBP + -0x38,unaff_EBP + 0xc,unaff_EBP + 0x14,0x800,uVar5);
    uVar5 = FUN_007aad40(unaff_EBP + -0x38,unaff_EBP + -0x14,uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar7 = uVar5;
    FUN_0074c280();
    cVar2 = FUN_007a1c0a(unaff_EBP + 0x14);
    if (cVar2 != '\0') {
      *puVar1 = *puVar1 | 1;
    }
    if (*(int *)(unaff_EBP + -0x14) == unaff_EBP + -0x38) break;
    piVar6 = (int *)FUN_007aadca();
    if (*piVar6 != 0) break;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar7 = puVar7 + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_0079d58a;
    cVar2 = FUN_007a1c0a(unaff_EBP + 0x14);
    if (cVar2 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      Peek();
    }
    sVar3 = FUN_0079c11f(0x3a);
    if (*(short *)(unaff_EBP + 0x12) != sVar3) break;
    FUN_007a06e5();
  }
  *puVar1 = *puVar1 | 2;
LAB_0079d58a:
  if ((*puVar1 & 2) == 0) {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  }
  puVar7 = *(undefined4 **)(unaff_EBP + 8);
  *puVar7 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar7[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


