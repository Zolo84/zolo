// FUN_004321e0 @ 4321e0 size=164

uint FUN_004321e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = FUN_004318d0(param_1,param_2,param_3,param_4,param_5);
  if (((char)uVar1 != '\0') &&
     ((*(int *)(param_3 + 0x46a) == 0 || (uVar1 = *(uint *)(param_4 + 0x46a), uVar1 == 0)))) {
    uVar1 = FUN_005216c0(param_4);
    if ((char)uVar1 != '\0') {
      if ((*(int *)(param_3 + 0x254) == 8) && (*(int *)(param_4 + 0x254) == 8)) {
        return 1;
      }
      uVar1 = 0;
      if ((*(int *)(param_3 + 0x46a) != 0) &&
         (uVar1 = *(uint *)(*(int *)(param_3 + 0x46a) + 0x44), uVar1 == *(uint *)(param_4 + 0x12)))
      {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      if ((*(int *)(param_4 + 0x46a) != 0) &&
         (uVar1 = *(uint *)(param_3 + 0x12), *(uint *)(*(int *)(param_4 + 0x46a) + 0x44) == uVar1))
      {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
    }
  }
  return uVar1 & 0xffffff00;
}


