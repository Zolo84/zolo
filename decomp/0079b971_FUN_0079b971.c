// FUN_0079b971 @ 79b971 size=196

int FUN_0079b971(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int unaff_EBP;
  
  FUN_007a9c5c();
  FUN_00798acc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_0074c210();
  iVar3 = FUN_00799548(uVar2,1);
  if (iVar3 != 0) {
LAB_0079b9f2:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00798b68();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return iVar3;
  }
  if (*(char *)(unaff_EBP + 0x10) != '\0') {
    cVar1 = FUN_0079959e();
    if (cVar1 != '\0') {
      iVar3 = DAT_00d4c250;
      if (DAT_00d4c250 == 0) {
        pvVar4 = operator_new(0x18);
        *(void **)(unaff_EBP + 0x10) = pvVar4;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (pvVar4 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0074d7a0(0);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_0074dc20(uVar2);
        DAT_00d4c250 = iVar3;
      }
      goto LAB_0079b9f2;
    }
  }
  *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_0087486c;
  FUN_007a982d(unaff_EBP + 0x10);
  *(undefined ***)(unaff_EBP + -0x1c) = &PTR_FUN_0080014c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_00826e30);
}


