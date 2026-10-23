// FUN_0079f213 @ 79f213 size=686

undefined4 * FUN_0079f213(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int unaff_EBP;
  int iVar11;
  undefined4 uVar12;
  
  FUN_007a9c5c();
  cVar2 = **(char **)(unaff_EBP + 0x1c);
  if ((cVar2 == '+') || (cVar2 == '-')) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
  }
  else if ((cVar2 == '0') &&
          ((cVar2 = (*(char **)(unaff_EBP + 0x1c))[1], cVar2 == 'x' || (cVar2 == 'X')))) {
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  uVar5 = FUN_0074c2a0(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar6 = (int *)FUN_007a10f1(uVar5,0,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0074c280();
  FUN_007a0772(unaff_EBP + -0x34);
  iVar11 = *piVar6;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar5 = (**(code **)(iVar11 + 8))();
  pcVar10 = *(char **)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
  pcVar7 = (char *)&DAT_007f0c98;
  if (pcVar10 != (char *)0x0) {
    pcVar7 = pcVar10;
  }
  bVar4 = false;
  if ('\0' < *pcVar7) {
    pcVar7 = (char *)&DAT_007f0c98;
    if (pcVar10 != (char *)0x0) {
      pcVar7 = pcVar10;
    }
    iVar11 = *(int *)(unaff_EBP + 0x20);
    bVar4 = false;
    while (((cVar2 = *pcVar7, cVar2 != '\x7f' && ('\0' < cVar2)) &&
           ((uint)(int)cVar2 < (uint)(iVar11 - *(int *)(unaff_EBP + -0x14))))) {
      iVar11 = iVar11 - cVar2;
      puVar1 = (undefined1 *)(iVar11 + *(int *)(unaff_EBP + 0x1c));
      FUN_007a9270(iVar11 + 1 + *(int *)(unaff_EBP + 0x1c),puVar1,
                   (*(int *)(unaff_EBP + 0x20) - iVar11) + 1);
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
      *puVar1 = 0x2c;
      if ('\0' < pcVar7[1]) {
        pcVar7 = pcVar7 + 1;
      }
      bVar4 = true;
    }
  }
  uVar8 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0x14);
  if (((int)uVar8 < 1) || (uVar8 <= *(uint *)(unaff_EBP + 0x20))) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(uint *)(unaff_EBP + -0x10) = uVar8 - *(int *)(unaff_EBP + 0x20);
  }
  uVar8 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 0x1c0;
  if (uVar8 == 0x40) {
    uVar12 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    if (uVar8 == 0x100) {
      iVar11 = *(int *)(unaff_EBP + -0x14);
      pcVar10 = *(char **)(unaff_EBP + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar5 = FUN_0079c11f((int)*pcVar10);
        FUN_0079e709(uVar5);
        pcVar10 = pcVar10 + 1;
      }
      iVar11 = *(int *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + *(int *)(unaff_EBP + -0x14);
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) - *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x20);
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        FUN_0079e709(*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar12 = *(undefined4 *)(unaff_EBP + 0x10);
    }
    else {
      iVar11 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        FUN_0079e709(*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar12 = *(undefined4 *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (bVar4) {
    while( true ) {
      iVar9 = FUN_007a9a90(*(undefined4 *)(unaff_EBP + 0x1c),&DAT_0087488c);
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar5;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar12;
      for (iVar11 = iVar9; iVar11 != 0; iVar11 = iVar11 + -1) {
        uVar5 = FUN_0079c11f((int)**(char **)(unaff_EBP + 0x10));
        FUN_0079e709(uVar5);
        *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
      }
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar9;
      piVar6 = (int *)(unaff_EBP + 0x20);
      *piVar6 = *piVar6 - iVar9;
      uVar5 = *(undefined4 *)(unaff_EBP + -0x24);
      uVar12 = *(undefined4 *)(unaff_EBP + -0x20);
      if (*piVar6 == 0) break;
      if (*(short *)(unaff_EBP + -0x1c) != 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        *(undefined4 *)(unaff_EBP + -0x14) = uVar12;
        FUN_0079e709(*(undefined4 *)(unaff_EBP + -0x1c));
        uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar12 = *(undefined4 *)(unaff_EBP + -0x14);
      }
      *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
      *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + -1;
    }
  }
  else {
    pcVar10 = *(char **)(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
    iVar11 = *(int *)(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + 0x10) = uVar12;
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar5 = FUN_0079c11f((int)*pcVar10);
      FUN_0079e709(uVar5);
      pcVar10 = pcVar10 + 1;
    }
    uVar5 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar12 = *(undefined4 *)(unaff_EBP + 0x10);
  }
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  iVar11 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + 0x10) = uVar12;
  *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 0x14) = 0;
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    FUN_0079e709(*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


