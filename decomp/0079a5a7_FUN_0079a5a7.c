// FUN_0079a5a7 @ 79a5a7 size=426

void FUN_0079a5a7(void)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int unaff_EBP;
  
  FUN_007a9c5c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  if ((*(uint *)(iVar1 + 0xc) & 0x4000) == 0) {
    puVar6 = (undefined4 *)FUN_007aadca();
    *puVar6 = 0;
    uVar5 = FUN_0074c2a0(unaff_EBP + -0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    uVar4 = FUN_0079ad7b(unaff_EBP + -0x48,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar4,uVar5);
    uVar7 = FUN_007aad40(unaff_EBP + -0x48,unaff_EBP + -0x18,uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0074c280();
    if (*(int *)(unaff_EBP + -0x18) != unaff_EBP + -0x48) {
      piVar8 = (int *)FUN_007aadca();
      if ((*piVar8 == 0) && (uVar7 < 2)) {
        *(uint *)(unaff_EBP + -0x10) = uVar7;
      }
    }
  }
  else {
    uVar4 = FUN_0074c2a0(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0079b971(uVar4,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0074c280();
    *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
    FUN_00674910(0);
    FUN_0079b4fd(1,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar5 = FUN_0074d6e0(unaff_EBP + -0x38);
    uVar4 = DAT_007f33d8;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0079b5ca(uVar5,0,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00674910(1);
    FUN_00797965(1,0);
    uVar5 = FUN_0074d700(unaff_EBP + -0x38);
    uVar4 = DAT_007f33d8;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0079b5ca(uVar5,0,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00674910(1);
    puVar6 = *(undefined4 **)(unaff_EBP + -0x24);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = &DAT_007f0c98;
    }
    uVar4 = FUN_0079baf9(unaff_EBP + 0xc,unaff_EBP + 0x14,2,puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    FUN_00674910(1);
  }
  cVar3 = FUN_0079bd57(unaff_EBP + 0x14);
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
  puVar6 = *(undefined4 **)(unaff_EBP + 8);
  *puVar6 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar6[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


