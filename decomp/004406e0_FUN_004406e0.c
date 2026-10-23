// FUN_004406e0 @ 4406e0 size=115

uint __thiscall FUN_004406e0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  param_2 = param_2 - (*(int *)(param_1 + 0x6e) + *(int *)(param_1 + 0x1a) +
                      *(int *)(param_1 + 0x12));
  param_3 = param_3 - (*(int *)(param_1 + 0x72) + *(uint *)(param_1 + 0x1e) +
                      *(int *)(param_1 + 0x16));
  if (param_2 < 0) {
    return *(uint *)(param_1 + 0x1e) & 0xffffff00;
  }
  uVar1 = FUN_00415bd0();
  if ((int)uVar1 <= param_2) {
    return uVar1 & 0xffffff00;
  }
  iVar2 = FUN_00415be0();
  if (param_3 < -iVar2) {
    return -iVar2 & 0xffffff00;
  }
  iVar2 = FUN_00415be0();
  return CONCAT31((int3)((uint)(iVar2 * 2) >> 8),param_3 < iVar2 * 2);
}


