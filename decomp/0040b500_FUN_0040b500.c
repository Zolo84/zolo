// FUN_0040b500 @ 40b500 size=125

int __thiscall
FUN_0040b500(int param_1,int param_2,short param_3,short param_4,short param_5,short param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_4 * (int)param_5;
  iVar6 = (int)param_6;
  sVar2 = *(short *)(*(int *)(param_1 + 0x34) + 10);
  iVar3 = 0;
  sVar4 = param_3 + 1;
  cVar1 = *(char *)(param_3 + iVar6 + iVar5 + param_2);
  if (sVar4 == sVar2) {
    return iVar3;
  }
  if (*(char *)(param_2 + sVar4 + iVar6 + iVar5) == cVar1) {
    while( true ) {
      iVar3 = iVar3 + 1;
      sVar4 = sVar4 + 1;
      if (sVar4 == sVar2) break;
      if (iVar3 == 0x3e) {
        return 0x3e;
      }
      if (*(char *)(param_2 + sVar4 + iVar6 + iVar5) != cVar1) {
        return iVar3;
      }
    }
  }
  return iVar3;
}


