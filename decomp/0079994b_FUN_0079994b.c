// FUN_0079994b @ 79994b size=168

undefined4 * FUN_0079994b(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *extraout_ECX;
  undefined4 *puVar5;
  int unaff_EBP;
  undefined4 uVar6;
  int *piVar7;
  
  FUN_007a9c5c();
  pvVar2 = operator_new(0x28);
  *(void **)(unaff_EBP + -0x10) = pvVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar7 = *(int **)(unaff_EBP + 8);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0079a177(*piVar7);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *extraout_ECX = uVar3;
  iVar1 = *piVar7;
  puVar5 = *(undefined4 **)(iVar1 + 0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &DAT_007f0c98;
  }
  FUN_0079a403(*(undefined4 *)(iVar1 + 0x10),puVar5);
  piVar7 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar5 = *(undefined4 **)(*piVar7 + 0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &DAT_007f0c98;
  }
  uVar3 = *extraout_ECX;
  uVar6 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar4 = FUN_0079a4ef(*(uint *)(*piVar7 + 0x10) & *(uint *)(unaff_EBP + 0x10),puVar5);
  FUN_00799dd5(uVar4,uVar6,uVar3,piVar7);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


