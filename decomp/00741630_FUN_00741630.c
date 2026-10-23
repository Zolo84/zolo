// FUN_00741630 @ 741630 size=110

int __thiscall FUN_00741630(int param_1,char *param_2,char *param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1e) != 4) {
    return 0;
  }
  iVar3 = 0;
  iVar4 = 2 - (int)param_2;
  while( true ) {
    iVar1 = Ordinal_16(*(undefined4 *)(param_1 + 0x22),param_2,1,0);
    if (iVar1 == -1) {
      uVar2 = Ordinal_111();
      *(undefined4 *)(param_1 + 0x36) = uVar2;
      return -1;
    }
    if (iVar1 == 0) {
      return -1;
    }
    if (param_3 == param_2 + iVar4) {
      return -1;
    }
    if (*param_2 == param_4) break;
    iVar3 = iVar3 + 1;
    param_2 = param_2 + 1;
  }
  return iVar3 + 1;
}


