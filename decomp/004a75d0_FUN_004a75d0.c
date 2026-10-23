// FUN_004a75d0 @ 4a75d0 size=119

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a75d0(int param_1,int param_2)

{
  int iVar1;
  
  if ((&DAT_0089cad8)[param_2] == 0) {
    return 0;
  }
  if ((((param_2 != *(int *)(param_1 + 6)) &&
       (*(float *)(*(int *)(param_1 + 0x244) + 0x2e) < _DAT_007e3374)) &&
      (iVar1 = *(int *)(param_1 + 0x12da), *(char *)(iVar1 + param_2 * 0x2c + 0x2c) == '\0')) &&
     (((*(char *)(iVar1 + 0x31 + param_2 * 0x2c) == '\0' && (*(int *)(iVar1 + 0x3b30) != param_2))
      && (*(int *)(*(int *)((&DAT_0089cad8)[param_2] + 0x12da) + 0x3b30) != *(int *)(param_1 + 6))))
     ) {
    return 0;
  }
  return 1;
}


