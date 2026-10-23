// FUN_00741f50 @ 741f50 size=72

int __thiscall FUN_00741f50(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (param_3 == 0) {
      return iVar3;
    }
    iVar1 = Ordinal_16(*(undefined4 *)(param_1 + 0x22),iVar3 + param_2,param_3,0);
    if (iVar1 == -1) break;
    if (iVar1 == 0) {
      return iVar3;
    }
    param_3 = param_3 - iVar1;
    iVar3 = iVar3 + iVar1;
  }
  uVar2 = Ordinal_111();
  *(undefined4 *)(param_1 + 0x36) = uVar2;
  return iVar3;
}


