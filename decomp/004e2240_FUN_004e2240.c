// FUN_004e2240 @ 4e2240 size=61

int __thiscall FUN_004e2240(int param_1,int param_2,int param_3)

{
  uint3 uVar1;
  
  param_2 = param_2 + -8;
  uVar1 = (uint3)((uint)param_2 >> 8);
  if (param_2 < 0) {
    return (uint)uVar1 << 8;
  }
  if (*(int *)(*(int *)(param_1 + 0x2a) + 4) < param_2) {
    return (uint)uVar1 << 8;
  }
  if (param_3 + -0x294 < 0) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,param_3 + -0x294 <= *(int *)(*(int *)(param_1 + 0x2a) + 8));
}


