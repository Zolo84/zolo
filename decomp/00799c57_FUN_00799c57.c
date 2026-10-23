// FUN_00799c57 @ 799c57 size=131

int * FUN_00799c57(void)

{
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  if (1 < *(uint *)(*extraout_ECX + 4)) {
    FUN_0074c240();
    pvVar1 = operator_new(0x28);
    *(void **)(unaff_EBP + -0x10) = pvVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0079a177(*extraout_ECX);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *extraout_ECX = iVar2;
  }
  FUN_0079a297(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    sVar3 = _strlen(&DAT_0085b098);
    FUN_00674d80(&DAT_0085b098,sVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


