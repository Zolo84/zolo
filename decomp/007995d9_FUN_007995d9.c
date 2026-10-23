// FUN_007995d9 @ 7995d9 size=207

undefined4 FUN_007995d9(void)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_007a9c5c();
  if (*extraout_ECX != **(int **)(unaff_EBP + 8)) {
    iVar2 = FUN_007996a8(unaff_EBP + -0x3c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    sVar3 = _strlen(&DAT_0085b098);
    iVar2 = FUN_00676ec0(0,*(undefined4 *)(iVar2 + 8),&DAT_0085b098,sVar3);
    if (iVar2 == 0) {
LAB_0079967c:
      bVar1 = false;
    }
    else {
      uVar4 = FUN_007996a8(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_007996a8(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar2 = FUN_00676e10(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00674910(1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00674910(1);
      if (iVar2 != 0) goto LAB_0079967c;
      bVar1 = true;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00674910(1);
    if (!bVar1) {
      uVar4 = 0;
      goto LAB_00799699;
    }
  }
  uVar4 = 1;
LAB_00799699:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


