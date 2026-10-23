// FUN_0079eed4 @ 79eed4 size=741

void FUN_0079eed4(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int unaff_EBP;
  int iVar9;
  int iVar10;
  size_t _MaxCount;
  
  FUN_007a9c5c();
  uVar2 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0x14);
  if (0 < (int)uVar2) {
    if ((uint)(*(int *)(unaff_EBP + 0x20) + *(int *)(unaff_EBP + 0x24)) < uVar2) {
      *(uint *)(unaff_EBP + -0x10) =
           (uVar2 - *(int *)(unaff_EBP + 0x20)) - *(int *)(unaff_EBP + 0x24);
      goto LAB_0079ef09;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
LAB_0079ef09:
  uVar2 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 0x1c0;
  if (uVar2 == 0x40) {
    uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    if (uVar2 == 0x100) {
      if ((*(int *)(unaff_EBP + 0x24) != 0) &&
         ((cVar1 = **(char **)(unaff_EBP + 0x1c), cVar1 == '+' || (cVar1 == '-')))) {
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0x10);
        uVar6 = FUN_0079c11f((int)cVar1);
        FUN_0079e709(uVar6);
        *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
        *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) + -1;
        *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x18);
      }
      iVar10 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_0079e709(*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
      uVar8 = *(undefined4 *)(unaff_EBP + -0x18);
    }
    else {
      iVar10 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_0079e709(*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
      uVar8 = *(undefined4 *)(unaff_EBP + -0x18);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  _MaxCount = *(size_t *)(unaff_EBP + 0x24);
  puVar3 = (undefined4 *)FUN_007a9a85();
  pvVar4 = _memchr(*(void **)(unaff_EBP + 0x1c),(int)*(char *)*puVar3,_MaxCount);
  if (pvVar4 != (void *)0x0) {
    uVar5 = FUN_0074c2a0(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar5 = FUN_007a10f1(uVar5,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
    FUN_0074c280();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
    iVar10 = (int)pvVar4 - *(int *)(unaff_EBP + 0x1c);
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x1c);
    iVar9 = iVar10 + 1;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar8;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar6 = FUN_0079c11f((int)**(char **)(unaff_EBP + 0x10));
      FUN_0079e709(uVar6);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    uVar6 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 4))();
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x20);
    FUN_0079e709(uVar6);
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar9;
    uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) - iVar9;
  }
  pvVar4 = _memchr(*(void **)(unaff_EBP + 0x1c),0x65,*(size_t *)(unaff_EBP + 0x24));
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
    iVar10 = (int)pvVar4 - *(int *)(unaff_EBP + 0x1c);
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x1c);
    iVar9 = iVar10 + 1;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar8;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar6 = FUN_0079c11f((int)**(char **)(unaff_EBP + 0x10));
      FUN_0079e709(uVar6);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    uVar6 = FUN_0079c11f(0x30);
    iVar10 = *(int *)(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x20);
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      FUN_0079e709(uVar6);
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    pcVar7 = &DAT_0083f6ec;
    if ((*(byte *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 4) == 0) {
      pcVar7 = &DAT_00874888;
    }
    cVar1 = *pcVar7;
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x10);
    uVar6 = FUN_0079c11f((int)cVar1);
    FUN_0079e709(uVar6);
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar9;
    uVar6 = *(undefined4 *)(unaff_EBP + -0x24);
    uVar8 = *(undefined4 *)(unaff_EBP + -0x20);
    *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) - iVar9;
  }
  pcVar7 = *(char **)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
  iVar10 = *(int *)(unaff_EBP + 0x24);
  *(undefined4 *)(unaff_EBP + 0x10) = uVar8;
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    uVar6 = FUN_0079c11f((int)*pcVar7);
    FUN_0079e709(uVar6);
    pcVar7 = pcVar7 + 1;
  }
  uVar6 = FUN_0079c11f(0x30);
  iVar10 = *(int *)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x10);
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    FUN_0079e709(uVar6);
  }
  iVar10 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x20);
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    FUN_0079e709(*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + -0x2c);
  puVar3[1] = *(undefined4 *)(unaff_EBP + -0x28);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


