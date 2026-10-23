// FUN_00442250 @ 442250 size=71

uint __thiscall FUN_00442250(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint in_EAX;
  uint3 uVar2;
  
  if (param_2 < *(int *)(param_1 + 0x20)) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if (param_3 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  uVar2 = (uint3)(uVar1 >> 8);
  if (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) < param_2) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,param_3 <= (int)(*(int *)(param_1 + 0x1c) + uVar1));
}


