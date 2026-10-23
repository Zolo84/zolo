// FUN_00535b80 @ 535b80 size=211

int __thiscall FUN_00535b80(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint local_8;
  
  local_8 = local_8 & 0xff000000;
  piVar1 = (int *)FUN_00534391();
  iVar2 = *piVar1;
  while( true ) {
    if (iVar2 == 4) {
      FUN_005343dc();
      return 0;
    }
    iVar2 = FUN_0054f130(param_1);
    if (iVar2 != 0) {
      return iVar2;
    }
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 != 0x524) {
      return -2;
    }
    FUN_005343dc();
    iVar2 = FUN_007a7b3c(*param_1 + 0x10);
    if (iVar2 < 0) break;
    FUN_0045b6e0(local_8,param_2 << 0x10,iVar2);
    piVar1 = (int *)FUN_00534391();
    if (*piVar1 == 8) {
      FUN_005343dc();
    }
    piVar1 = (int *)FUN_00534391();
    iVar2 = *piVar1;
  }
  return -2;
}


