// FUN_0079a177 @ 79a177 size=288

undefined4 * FUN_0079a177(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *extraout_ECX;
  int iVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_007a9c5c();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_LAB_0080007c;
  iVar1 = *(int *)(unaff_EBP + 8);
  extraout_ECX[2] = 0;
  extraout_ECX[3] = *(undefined4 *)(iVar1 + 0xc);
  extraout_ECX[4] = *(undefined4 *)(iVar1 + 0x10);
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(iVar1 + 0x14);
  *(undefined1 *)(extraout_ECX + 6) = *(undefined1 *)(iVar1 + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00674910(0);
  FUN_00674710(iVar1 + 0x18,0,DAT_007f33d8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_00800074;
  FUN_00798acc();
  bVar6 = iVar1 == DAT_00dc4fcc;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar6) {
    uVar3 = FUN_0079a34a(&DAT_0083f6f4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00799dd5(uVar3,0x3f,extraout_ECX,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0079a47a();
  }
  else {
    FUN_00798acc();
    iVar5 = extraout_ECX[3];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar5 != 0) {
      pvVar4 = _malloc(iVar5 << 2);
      extraout_ECX[2] = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_0079c351();
      }
      iVar5 = extraout_ECX[3];
      while (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar5 * 4);
        *(int *)(extraout_ECX[2] + iVar5 * 4) = iVar2;
        if (iVar2 != 0) {
          FUN_0079723b();
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00798b68();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


