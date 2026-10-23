// FUN_005377e0 @ 5377e0 size=114

int __thiscall FUN_005377e0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*(int *)(*param_1 + 8) == 0) break;
    iVar1 = *param_2;
    if ((iVar1 == 2) || ((0x526 < iVar1 && (iVar1 < 0x52b)))) {
      puVar2 = &DAT_0083a374;
    }
    else {
      puVar2 = &DAT_00850e44;
    }
    iVar1 = FUN_007a6628(*(int *)(*param_1 + 8),puVar2,param_2 + 1);
    iVar1 = ((iVar1 < 0) - 1 & 2) - 2;
    param_3 = param_3 + -1;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return -2;
}


