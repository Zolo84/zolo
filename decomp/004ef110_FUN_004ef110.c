// FUN_004ef110 @ 4ef110 size=240

int __thiscall
FUN_004ef110(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar1 = (int)param_5;
  local_8 = 1000000;
  iVar5 = (int)param_5 / 2 + -1;
  if (param_6 == (int *)0x0) {
    iVar3 = 0;
    if (0 < (int)param_5) {
      iVar4 = 0;
      do {
        FUN_004eef70(param_2 - iVar5,(iVar3 - iVar5) + param_3,*(int *)(param_1 + 0xb408) + iVar4,
                     param_5);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + (int)param_5 * 4;
      } while (iVar3 < (int)param_5);
    }
    param_6 = *(int **)(param_1 + 0xb408);
  }
  iVar3 = 0;
  if (0 < (int)param_5) {
    do {
      iVar4 = 0;
      param_5 = param_6;
      do {
        if ((*param_5 == param_4) &&
           (iVar2 = (iVar3 - iVar5) * (iVar3 - iVar5) + (iVar4 - iVar5) * (iVar4 - iVar5),
           iVar2 < local_8)) {
          local_8 = iVar2;
        }
        iVar4 = iVar4 + 1;
        param_5 = param_5 + 1;
      } while (iVar4 < iVar1);
      param_6 = param_6 + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
    if (local_8 != 1000000) {
      return local_8;
    }
  }
  return -1;
}


