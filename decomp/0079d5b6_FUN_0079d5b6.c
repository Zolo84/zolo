// FUN_0079d5b6 @ 79d5b6 size=435

undefined4 * FUN_0079d5b6(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  
  FUN_007a9c5c();
  iVar6 = *(int *)(unaff_EBP + 0x14);
  uVar4 = FUN_0074c2a0(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007a10f1(uVar4,0,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0074c280();
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_007a0afc(0);
  uVar2 = *(uint *)(iVar6 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((uVar2 & 0x4000) == 0) {
    uVar4 = FUN_0079c11f((*(char *)(unaff_EBP + 0x1c) != '\0') + '0');
    FUN_007a03f8(1,uVar4);
  }
  else {
    if (*(char *)(unaff_EBP + 0x1c) == '\0') {
      uVar5 = FUN_0079f4c1(unaff_EBP + -0x1c);
      uVar4 = DAT_00800314;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_007a0789(uVar5,0,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      uVar5 = FUN_0079f4d8(unaff_EBP + -0x1c);
      uVar4 = DAT_00800314;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_007a0789(uVar5,0,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    FUN_007a0afc(1);
  }
  uVar2 = *(uint *)(iVar6 + 0x14);
  if (((int)uVar2 < 1) || (uVar2 <= *(uint *)(unaff_EBP + -0x24))) {
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  }
  else {
    *(uint *)(unaff_EBP + 0x1c) = uVar2 - *(int *)(unaff_EBP + -0x24);
  }
  if ((*(uint *)(iVar6 + 0xc) & 0x1c0) != 0x40) {
    iVar7 = *(int *)(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_0079e709(*(undefined4 *)(unaff_EBP + 0x18));
    }
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  puVar8 = *(undefined2 **)(unaff_EBP + -0x28);
  if (puVar8 == (undefined2 *)0x0) {
    puVar8 = &DAT_00800310;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x24);
    do {
      FUN_0079e709(*puVar8);
      puVar8 = puVar8 + 1;
      piVar1 = (int *)(unaff_EBP + 0x14);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar6 + 0x14) = 0;
  iVar6 = *(int *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x10);
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    FUN_0079e709(*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_007a0afc(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


