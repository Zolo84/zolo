// FUN_00509ed0 @ 509ed0 size=56

int __fastcall FUN_00509ed0(int param_1)

{
  uint3 uVar1;
  
  if (*(int *)(param_1 + 0x5e) != 0) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x5e) >> 8),1);
  }
  uVar1 = (uint3)((uint)DAT_00893530 >> 8);
  if ((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(param_1 + 0x52)) {
    return (uint)uVar1 << 8;
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return (uint)uVar1 << 8;
  }
  if (*(int *)(param_1 + 0x62) == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x62) >> 8),*(char *)(param_1 + 0x2d) == '\0');
}


