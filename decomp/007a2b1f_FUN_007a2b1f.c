// FUN_007a2b1f @ 7a2b1f size=302

undefined4 * FUN_007a2b1f(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int unaff_EBP;
  uint uVar6;
  float10 fVar7;
  
  FUN_007a9c5c();
  FUN_007a3597(unaff_EBP + -0x24,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar2 = FUN_0079bd57(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x34) = *(undefined1 *)(unaff_EBP + 0x27);
    FUN_00674910(0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(uint *)(unaff_EBP + -0x28) < *(uint *)(unaff_EBP + -0x1c)) {
      FUN_00674e40(*(uint *)(unaff_EBP + -0x1c),0);
    }
    uVar6 = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      do {
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          puVar3 = &DAT_007f0c98;
        }
        else {
          FUN_00797b07();
          puVar3 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + uVar6);
        }
        *(undefined1 *)(unaff_EBP + 0x20) = *(undefined1 *)puVar3;
        FUN_00797965(1,*(undefined4 *)(unaff_EBP + 0x20));
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(unaff_EBP + -0x1c));
    }
    puVar3 = *(undefined4 **)(unaff_EBP + -0x30);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = &DAT_007f0c98;
    }
    puVar4 = (undefined4 *)FUN_007aadca();
    *puVar4 = 0;
    fVar7 = (float10)FUN_007a5b84(puVar3,unaff_EBP + 0x1c,0);
    *(double *)(unaff_EBP + -0x14) = (double)fVar7;
    if ((*(undefined4 **)(unaff_EBP + 0x1c) == puVar3) ||
       (piVar5 = (int *)FUN_007aadca(), *piVar5 != 0)) {
      **(uint **)(unaff_EBP + 0x24) = **(uint **)(unaff_EBP + 0x24) | 2;
    }
    else {
      **(undefined8 **)(unaff_EBP + 0x28) = *(undefined8 *)(unaff_EBP + -0x14);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00674910(1);
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00674910(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


