// FUN_00506370 @ 506370 size=109

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00506370(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x232 + param_2 * 4);
  if (0 < iVar2) {
    if (*(float *)(param_1 + 0xf0) != _DAT_007e4088) {
      iVar2 = __ftol();
    }
    iVar1 = __ftol();
    iVar1 = iVar2 - iVar1;
  }
  return iVar1;
}


