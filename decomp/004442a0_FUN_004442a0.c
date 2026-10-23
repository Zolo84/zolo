// FUN_004442a0 @ 4442a0 size=91

undefined4 __fastcall FUN_004442a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 6);
  if ((&DAT_00dc0fd4)[iVar1] != 1) {
    return 0;
  }
  if ((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) {
    iVar2 = 0;
    piVar3 = (int *)(DAT_00bd1500 + 0x3cc);
    do {
      if (*piVar3 == iVar1) {
        if (iVar2 == *(int *)(DAT_00bd1500 + 900)) {
          return 1;
        }
        if ((*piVar3 == iVar1) && (iVar2 != *(int *)(DAT_00bd1500 + 900))) {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = (int *)((int)piVar3 + 0x3e);
    } while (iVar2 < 0x20);
  }
  return 1;
}


