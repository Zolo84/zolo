// FUN_0079b895 @ 79b895 size=220

int FUN_0079b895(void)

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
  if (iVar3 == 0) {
    if ((*(char *)(unaff_EBP + 0x10) == '\0') || (cVar1 = FUN_0079959e(), cVar1 == '\0')) {
      *(char **)(unaff_EBP + 0x10) = s_missing_locale_facet_0087486c;
      FUN_007a982d(unaff_EBP + 0x10);
      *(undefined ***)(unaff_EBP + -0x1c) = &PTR_FUN_0080014c;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_00826e30);
    }
    iVar3 = DAT_00d4c24c;
    if (DAT_00d4c24c == 0) {
      puVar4 = operator_new(8);
      *(undefined4 **)(unaff_EBP + 0x10) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[1] = 0;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *puVar4 = &PTR_FUN_008000d0;
        FUN_0079a34a(&DAT_0083f6f4);
        FUN_0079a47a();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_0074dba0(puVar4);
      DAT_00d4c24c = iVar3;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00798b68();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


