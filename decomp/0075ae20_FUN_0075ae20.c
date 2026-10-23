// FUN_0075ae20 @ 75ae20 size=158

float10 __fastcall FUN_0075ae20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  float local_8;
  
  iVar2 = 0;
  iVar3 = 0;
  local_8 = 0.0;
  if (0 < *(int *)(*(int *)(param_1 + 0x18) + 0x13a)) {
    do {
      FUN_0075a0f0(iVar3);
      iVar1 = __ftol();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
      local_8 = (float)((float10)iVar1 / extraout_ST0 + (float10)local_8);
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x18) + 0x13a));
    if (iVar2 != 0) {
      return (float10)local_8 / (float10)iVar2;
    }
  }
  return (float10)local_8;
}


