// FUN_0079dc48 @ 79dc48 size=309

undefined4 * FUN_0079dc48(void)

{
  uint *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int unaff_EBP;
  uint uVar7;
  undefined4 *puVar8;
  float10 fVar9;
  
  FUN_007a9c5c();
  FUN_0079f574(unaff_EBP + -0x24,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar2 = FUN_007a1c0a(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x34) = *(undefined1 *)(unaff_EBP + 0x23);
    FUN_00674910(0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(uint *)(unaff_EBP + -0x28) < *(uint *)(unaff_EBP + -0x1c)) {
      FUN_00674e40(*(uint *)(unaff_EBP + -0x1c),0);
    }
    uVar7 = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      do {
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          puVar4 = &DAT_00800310;
        }
        else {
          FUN_007a0a47();
          puVar4 = (undefined2 *)(*(int *)(unaff_EBP + -0x20) + uVar7 * 2);
        }
        uVar3 = FUN_007a5796(CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4));
        *(undefined1 *)(unaff_EBP + 0x20) = uVar3;
        FUN_00797965(1,*(undefined4 *)(unaff_EBP + 0x20));
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(unaff_EBP + -0x1c));
    }
    puVar8 = *(undefined4 **)(unaff_EBP + -0x30);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = &DAT_007f0c98;
    }
    puVar5 = (undefined4 *)FUN_007aadca();
    *puVar5 = 0;
    fVar9 = (float10)FUN_007a5b84(puVar8,unaff_EBP + 0x1c,0);
    *(double *)(unaff_EBP + -0x14) = (double)fVar9;
    if ((*(undefined4 **)(unaff_EBP + 0x1c) == puVar8) ||
       (piVar6 = (int *)FUN_007aadca(), *piVar6 != 0)) {
      *puVar1 = *puVar1 | 2;
    }
    else {
      **(undefined8 **)(unaff_EBP + 0x28) = *(undefined8 *)(unaff_EBP + -0x14);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00674910(1);
  }
  puVar8 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar8 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar8[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_007a0afc(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar8;
}


