// FUN_007999f3 @ 7999f3 size=269

undefined4 * FUN_007999f3(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  pvVar1 = operator_new(0x28);
  *(void **)(unaff_EBP + -0x10) = pvVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007997f3(0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *extraout_ECX = uVar2;
  FUN_007996df();
  FUN_0079a403(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_00799b00(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  sVar4 = _strlen(&DAT_0085b098);
  iVar3 = FUN_00676ec0(0,*(undefined4 *)(iVar3 + 8),&DAT_0085b098,sVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(bool *)(unaff_EBP + 0xb) = iVar3 == 0;
  FUN_00674910(1);
  if (*(char *)(unaff_EBP + 0xb) != '\0') {
    *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
    FUN_00674910(0);
    sVar4 = _strlen("bad locale name");
    FUN_00674d80("bad locale name",sVar4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00798f6f(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_008292c8);
  }
  FUN_00799dd5(unaff_EBP + -0x7c,*(undefined4 *)(unaff_EBP + 0xc),*extraout_ECX,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0079a47a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


