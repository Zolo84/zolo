// FUN_004355a0 @ 4355a0 size=62

uint __thiscall FUN_004355a0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = param_2 - *(int *)(param_1 + 0x32);
  param_3 = param_3 - *(int *)(param_1 + 0x36);
  if ((int)uVar1 < 0) {
    return uVar1 & 0xffffff00;
  }
  uVar2 = (uint3)(uVar1 >> 8);
  if (*(int *)(param_1 + 0x2e) <= (int)uVar1) {
    return (uint)uVar2 << 8;
  }
  if (param_3 < 0) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x2a) >> 8),param_3 < *(int *)(param_1 + 0x2a));
}


