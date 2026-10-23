// FUN_0041c020 @ 41c020 size=45

void FUN_0041c020(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x100;
  do {
    iVar2 = iVar3 + iVar1 >> 1;
    if (*(int *)(param_2 + iVar2 * 4) <= param_1) {
      iVar1 = iVar2;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
  } while (iVar2 - iVar1 != 1);
  return;
}


