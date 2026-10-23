// FUN_0079ce20 @ 79ce20 size=426

void FUN_0079ce20(void)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  if ((*(uint *)(iVar1 + 0xc) & 0x4000) == 0) {
    puVar7 = (undefined4 *)FUN_007aadca();
    *puVar7 = 0;
    uVar5 = FUN_0074c2a0(unaff_EBP + -0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    uVar4 = FUN_0079e75c(unaff_EBP + -0x48,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar4,uVar5);
    uVar8 = FUN_007aad40(unaff_EBP + -0x48,unaff_EBP + -0x18,uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0074c280();
    if (*(int *)(unaff_EBP + -0x18) != unaff_EBP + -0x48) {
      piVar9 = (int *)FUN_007aadca();
      if ((*piVar9 == 0) && (uVar8 < 2)) {
        *(uint *)(unaff_EBP + -0x10) = uVar8;
      }
    }
  }
  else {
    uVar4 = FUN_0074c2a0(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007a10f1(uVar4,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0074c280();
    *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
    FUN_007a0afc(0);
    FUN_007a08a9(1,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar5 = FUN_0079f4c1(unaff_EBP + -0x38);
    uVar4 = DAT_00800314;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_007a0c80(uVar5,0,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_007a0afc(1);
    FUN_007a03f8(1,0);
    uVar5 = FUN_0079f4d8(unaff_EBP + -0x38);
    uVar4 = DAT_00800314;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_007a0c80(uVar5,0,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_007a0afc(1);
    puVar6 = *(undefined2 **)(unaff_EBP + -0x24);
    if (puVar6 == (undefined2 *)0x0) {
      puVar6 = &DAT_00800310;
    }
    uVar4 = FUN_007a1933(unaff_EBP + 0xc,unaff_EBP + 0x14,2,puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    FUN_007a0afc(1);
  }
  cVar3 = FUN_007a1c0a(unaff_EBP + 0x14);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  if (*(int *)(unaff_EBP + -0x10) < 0) {
    *puVar2 = *puVar2 | 2;
  }
  else {
    *(bool *)*(undefined4 *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x10) != 0;
  }
  puVar7 = *(undefined4 **)(unaff_EBP + 8);
  *puVar7 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar7[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


