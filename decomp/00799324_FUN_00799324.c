// FUN_00799324 @ 799324 size=209

int * FUN_00799324(void)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int extraout_ECX;
  int *piVar7;
  int unaff_EBP;
  
  FUN_007a9c5c();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 < 0) {
    *(undefined1 *)(unaff_EBP + -0x1c) = *(undefined1 *)(unaff_EBP + 0xb);
    FUN_00674910(0);
    sVar3 = _strlen("invalid ios::iword/pword index");
    FUN_00674d80("invalid ios::iword/pword index",sVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00798f6f(unaff_EBP + -0x1c);
    *(undefined ***)(unaff_EBP + -0x38) = &PTR_LAB_007ffff4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x38,&DAT_00829258);
  }
  piVar4 = *(int **)(extraout_ECX + 0x18);
  piVar7 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    do {
      piVar6 = piVar4;
      if (piVar4[1] == iVar1) goto LAB_007993e4;
      piVar6 = piVar7;
      if (((piVar7 == (int *)0x0) && (piVar4[2] == 0)) && (piVar4[3] == 0)) {
        piVar6 = piVar4;
      }
      piVar4 = (int *)*piVar4;
      piVar7 = piVar6;
    } while (piVar4 != (int *)0x0);
    if (piVar6 != (int *)0x0) {
      piVar6[1] = iVar1;
      goto LAB_007993e4;
    }
  }
  puVar5 = operator_new(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)(extraout_ECX + 0x18);
    puVar5[1] = iVar1;
    *puVar5 = uVar2;
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  *(undefined4 **)(extraout_ECX + 0x18) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    FUN_0079c351();
  }
  piVar6 = *(int **)(extraout_ECX + 0x18);
LAB_007993e4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar6;
}


