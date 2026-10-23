// FUN_006191d0 @ 6191d0 size=180

undefined4 FUN_006191d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    if (DAT_00dc179c != 2) {
      if (DAT_00dc179c != 3) {
        return 0;
      }
      return 1;
    }
  }
  else if (param_1 == 1) {
    if ((DAT_00dc179c != 1) && (DAT_00dc179c != 3)) {
      return 0;
    }
  }
  else {
    iVar6 = FUN_0044c640(param_1);
    piVar4 = *(int **)(DAT_00d0ca90 + 0x2a0);
    do {
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      piVar2 = (int *)piVar4[2];
      iVar3 = *piVar4;
      iVar7 = FUN_00428ee0(iVar3);
      piVar4 = piVar2;
    } while ((((iVar7 == 0) || (iVar1 = iVar7 + -8, iVar1 == 0)) ||
             ((*(int *)(iVar3 + 6) != param_1 &&
              ((*(int *)(iVar7 + 0xb2) == 0 || (*(int *)(*(int *)(iVar7 + 0xb2) + 4) != 10)))))) ||
            ((cVar5 = FUN_004a4a50(iVar1,param_1), cVar5 == '\0' || (iVar1 == iVar6))));
  }
  return 1;
}


