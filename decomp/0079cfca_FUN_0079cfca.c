// FUN_0079cfca @ 79cfca size=204

void FUN_0079cfca(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
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
  uVar5 = FUN_0079e75c(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0074c280();
  iVar8 = unaff_EBP + -0x2f;
  if (*(char *)(unaff_EBP + -0x30) != '-') {
    iVar8 = unaff_EBP + -0x30;
  }
  uVar6 = FUN_007aad40(iVar8,unaff_EBP + -0x10,uVar5);
  cVar2 = FUN_007a1c0a(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x10) != iVar8) {
    piVar7 = (int *)FUN_007aadca();
    if ((*piVar7 == 0) && (uVar6 < 0x10000)) {
      if (*(char *)(unaff_EBP + -0x30) == '-') {
        uVar6 = -uVar6;
      }
      **(undefined2 **)(unaff_EBP + 0x24) = (short)uVar6;
      goto LAB_0079d077;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_0079d077:
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


