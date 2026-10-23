// FUN_0079a81d @ 79a81d size=200

void FUN_0079a81d(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int unaff_EBP;
  int iVar8;
  
  FUN_007a9c5c();
  puVar3 = (undefined4 *)FUN_007aadca();
  *puVar3 = 0;
  iVar8 = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_0074c2a0(unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(iVar8 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_0079ad7b(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0074c280();
  iVar8 = unaff_EBP + -0x2f;
  if (*(char *)(unaff_EBP + -0x30) != '-') {
    iVar8 = unaff_EBP + -0x30;
  }
  iVar6 = FUN_007aad40(iVar8,unaff_EBP + -0x10,uVar5);
  cVar2 = FUN_0079bd57(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == iVar8) || (piVar7 = (int *)FUN_007aadca(), *piVar7 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    if (*(char *)(unaff_EBP + -0x30) == '-') {
      iVar6 = -iVar6;
    }
    **(int **)(unaff_EBP + 0x24) = iVar6;
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


