// FUN_00799b36 @ 799b36 size=289

int * FUN_00799b36(void)

{
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  undefined4 *puVar5;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_007a9c5c();
  pvVar1 = operator_new(0x28);
  *(void **)(unaff_EBP + -0x10) = pvVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0079a177(**(undefined4 **)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
  *extraout_ECX = iVar2;
  FUN_0079a403(*(undefined4 *)(unaff_EBP + 0x10),uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00799b00(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  sVar3 = _strlen(&DAT_0085b098);
  iVar2 = FUN_00676ec0(0,*(undefined4 *)(iVar2 + 8),&DAT_0085b098,sVar3);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(bool *)(unaff_EBP + 0xb) = iVar2 == 0;
  FUN_00674910(1);
  if (*(char *)(unaff_EBP + 0xb) != '\0') {
    *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0x13);
    FUN_00674910(0);
    sVar3 = _strlen("bad locale name");
    FUN_00674d80("bad locale name",sVar3);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00798f6f(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_008292c8);
  }
  iVar2 = *extraout_ECX;
  puVar5 = *(undefined4 **)(iVar2 + 0x1c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &DAT_007f0c98;
  }
  uVar7 = 0;
  uVar6 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar4 = FUN_0079a4ef(*(undefined4 *)(iVar2 + 0x10),puVar5);
  FUN_00799dd5(uVar4,uVar6,iVar2,uVar7);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


