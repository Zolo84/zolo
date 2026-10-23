// FUN_004ef3b0 @ 4ef3b0 size=136

int __thiscall FUN_004ef3b0(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_5;
  for (iVar3 = DAT_00877690; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      FUN_004eef70(param_2,param_3 + iVar3,*(undefined4 *)(param_1 + 0xb408),param_4);
      iVar2 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0xb408) + iVar2 * 4);
        iVar2 = iVar2 + 1;
        param_5[iVar1] = param_5[iVar1] + 1;
      } while (iVar2 < param_4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  iVar2 = 0;
  iVar3 = DAT_00877690;
  if (0 < DAT_00877690) {
    do {
      param_5 = param_5 + 1;
      if (*param_5 != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar2;
}


