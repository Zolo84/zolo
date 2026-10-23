// FUN_0079c976 @ 79c976 size=130

bool __thiscall
FUN_0079c976(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  size_t sVar2;
  bool bVar3;
  
  *param_5 = param_3;
  *param_8 = param_6;
  iVar1 = *param_5;
  bVar3 = iVar1 != param_4;
  while( true ) {
    if (iVar1 == param_4) {
      return bVar3;
    }
    if (*param_8 == param_7) {
      return bVar3;
    }
    iVar1 = FUN_0079bfa9(*param_8,iVar1,param_4 - iVar1,param_2,param_1 + 8);
    if (iVar1 == -2) {
      *param_5 = param_4;
      return bVar3;
    }
    if (iVar1 == -1) break;
    if (iVar1 == 0) {
      sVar2 = _strlen((char *)*param_5);
      iVar1 = sVar2 + 1;
    }
    *param_5 = *param_5 + iVar1;
    *param_8 = *param_8 + 2;
    bVar3 = false;
    iVar1 = *param_5;
  }
  return (bool)2;
}


