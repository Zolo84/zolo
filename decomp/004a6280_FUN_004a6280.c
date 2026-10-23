// FUN_004a6280 @ 4a6280 size=252

int FUN_004a6280(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_10;
  int local_c;
  
  iVar2 = (&DAT_0089cad8)[param_1];
  local_c = 10;
  iVar7 = 10;
  if (iVar2 != 0) {
    local_10 = 0;
    iVar10 = 2;
    do {
      iVar7 = FUN_0044c640(iVar10);
      if (iVar7 == 0) {
        return local_c;
      }
      if (*(int *)(iVar7 + 0xba) == 0) {
        return local_c;
      }
      iVar9 = *(int *)(*(int *)(iVar7 + 0xba) + 0x2e);
      if (iVar9 < 1) {
        return local_c;
      }
      piVar5 = *(int **)(iVar2 + 0x2a0);
      do {
        if (piVar5 == (int *)0x0) goto LAB_004a6364;
        piVar3 = (int *)piVar5[2];
        iVar4 = *piVar5;
        iVar8 = FUN_00428ee0(iVar4);
        piVar5 = piVar3;
      } while ((((iVar8 == 0) || (iVar1 = iVar8 + -8, iVar1 == 0)) ||
               ((*(int *)(iVar4 + 6) != iVar10 &&
                ((*(int *)(iVar8 + 0xb2) == 0 || (*(int *)(*(int *)(iVar8 + 0xb2) + 4) != 10))))))
              || ((cVar6 = FUN_004a4a50(iVar1,iVar10), cVar6 == '\0' || (iVar7 == iVar1))));
      iVar7 = _rand();
      iVar9 = iVar9 + iVar7 % 10;
      if (local_10 < iVar9) {
        local_10 = iVar9;
        local_c = iVar10;
      }
LAB_004a6364:
      iVar10 = iVar10 + 1;
      iVar7 = local_c;
    } while (iVar10 < 10);
  }
  return iVar7;
}


