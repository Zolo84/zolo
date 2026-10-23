// FUN_0079a8e5 @ 79a8e5 size=174

void FUN_0079a8e5(void)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_EBP;
  
  FUN_007a9c5c();
  puVar4 = (undefined4 *)FUN_007aadca();
  *puVar4 = 0;
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  uVar5 = FUN_0074c2a0(unaff_EBP + 0x1c);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = FUN_0079ad7b(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar6,uVar5);
  uVar6 = FUN_007aab24(unaff_EBP + -0x30,unaff_EBP + -0x10,uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0074c280();
  cVar3 = FUN_0079bd57(unaff_EBP + 0x14);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  if (*(int *)(unaff_EBP + -0x10) != unaff_EBP + -0x30) {
    piVar7 = (int *)FUN_007aadca();
    if (*piVar7 == 0) {
      **(undefined4 **)(unaff_EBP + 0x24) = uVar6;
      goto LAB_0079a975;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_0079a975:
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  *puVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar4[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


