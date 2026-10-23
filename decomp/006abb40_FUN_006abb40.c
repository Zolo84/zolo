// FUN_006abb40 @ 6abb40 size=138

int __thiscall FUN_006abb40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2;
  iVar6 = 0;
  param_2 = *(int *)(param_2 + 0x290);
  if (0 < param_2) {
    iVar7 = 0;
    do {
      iVar2 = FUN_004e9370(*(undefined4 *)(iVar7 + *(int *)(iVar1 + 0x298)));
      iVar3 = *(int *)(iVar1 + 0x254);
      if ((iVar3 == 8) || (iVar3 == 9)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if ((*(int *)(iVar2 + 0x254) == 8) || (*(int *)(iVar2 + 0x254) == 9)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      if (cVar5 == cVar4) {
        iVar3 = FUN_00527cb0(*(undefined4 *)(param_1 + 10));
        iVar6 = iVar6 + iVar3;
      }
      iVar7 = iVar7 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return iVar6;
  }
  return 0;
}


