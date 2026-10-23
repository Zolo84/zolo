// FUN_0079a297 @ 79a297 size=179

void FUN_0079a297(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar4;
  
  FUN_007a9c5c();
  FUN_00798acc();
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(extraout_ECX + 0xc) <= uVar1) {
    uVar4 = uVar1 + 1;
    if (uVar4 < 0x20) {
      uVar4 = 0x20;
    }
    iVar2 = FUN_007aa7f5(*(undefined4 *)(extraout_ECX + 8),uVar4 << 2);
    *(int *)(unaff_EBP + 0xc) = iVar2;
    if (iVar2 == 0) {
      FUN_0079c351();
    }
    *(undefined4 *)(extraout_ECX + 8) = *(undefined4 *)(unaff_EBP + 0xc);
    while (*(uint *)(extraout_ECX + 0xc) < uVar4) {
      *(undefined4 *)(*(int *)(extraout_ECX + 8) + *(int *)(extraout_ECX + 0xc) * 4) = 0;
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
    }
  }
  FUN_0079723b();
  if (*(int *)(*(int *)(extraout_ECX + 8) + uVar1 * 4) != 0) {
    puVar3 = (undefined4 *)FUN_0074c240();
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  iVar2 = *(int *)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar2 + uVar1 * 4) = *(undefined4 *)(unaff_EBP + 8);
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


