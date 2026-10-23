// FUN_00490da0 @ 490da0 size=79

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00490da0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = (float *)(param_1 + 0xe358 + *(int *)(*(int *)(param_2 + 4) + 0xe) * 4);
  *pfVar1 = *pfVar1 - *(float *)(*(int *)(param_2 + 4) + 0x12) * _DAT_007e543c;
  iVar2 = *(int *)(*(int *)(param_2 + 4) + 0xe);
  if (*(float *)(param_1 + 0xe358 + iVar2 * 4) < _DAT_007e34e0) {
    *(undefined4 *)(param_1 + 0xe358 + iVar2 * 4) = 0x3dcccccd;
  }
  return 3;
}


