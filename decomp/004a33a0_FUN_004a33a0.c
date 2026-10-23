// FUN_004a33a0 @ 4a33a0 size=57

int __fastcall FUN_004a33a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = DAT_00d615d2;
  if (DAT_00d615d2 == 0) {
    return 0;
  }
  do {
    iVar1 = *(int *)(param_1 + 6);
    iVar4 = *(int *)(iVar4 + 8);
    iVar2 = FUN_00584c90();
    if (iVar2 == iVar1) {
      iVar3 = iVar3 + 1;
    }
  } while (iVar4 != 0);
  return iVar3;
}


