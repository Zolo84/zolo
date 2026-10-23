// FUN_007a14f5 @ 7a14f5 size=207

int FUN_007a14f5(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_007a9c5c();
  FUN_00798acc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_0074c210();
  iVar3 = FUN_00799548(uVar2,1);
  if (iVar3 != 0) {
LAB_007a1580:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00798b68();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return iVar3;
  }
  if (*(char *)(unaff_EBP + 0x10) != '\0') {
    cVar1 = FUN_0079959e();
    if (cVar1 != '\0') {
      iVar3 = DAT_00dc5080;
      if (DAT_00dc5080 == 0) {
        puVar4 = operator_new(0x2c);
        *(undefined4 **)(unaff_EBP + 0x10) = puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          FUN_007a21b7(0,0);
          *puVar4 = &PTR_FUN_008001f8;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_007a2031(puVar4);
        DAT_00dc5080 = iVar3;
      }
      goto LAB_007a1580;
    }
  }
  *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_0087486c;
  FUN_007a982d(unaff_EBP + 0x10);
  *(undefined ***)(unaff_EBP + -0x1c) = &PTR_FUN_0080014c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_00826e30);
}


