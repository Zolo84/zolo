// FUN_007996df @ 7996df size=202

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_007996df(void)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  int unaff_EBP;
  
  FUN_007a9c5c();
  FUN_00798acc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (DAT_00dc4fd0 == 0) {
    pvVar2 = operator_new(0x28);
    *(void **)(unaff_EBP + -0x14) = pvVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (pvVar2 == (void *)0x0) {
      DAT_00dc4fd0 = 0;
    }
    else {
      DAT_00dc4fd0 = FUN_007997f3(0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_007a63e8(FUN_007997a9);
    *(undefined4 *)(DAT_00dc4fd0 + 0x10) = 0x3f;
    sVar3 = _strlen(&DAT_0083f6f4);
    FUN_00674d80(&DAT_0083f6f4,sVar3);
    DAT_00dc4fcc = DAT_00dc4fd0;
    FUN_0079723b();
    _DAT_00dc4fc8 = DAT_00dc4fcc;
  }
  iVar1 = DAT_00dc4fd0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


