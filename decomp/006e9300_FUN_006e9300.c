// FUN_006e9300 @ 6e9300 size=35

int FUN_006e9300(int param_1)

{
  uint3 uVar1;
  
  param_1 = param_1 * 0x1a;
  uVar1 = (uint3)((uint)param_1 >> 8);
  if (*(int *)(&DAT_00d36354 + param_1) == 4) {
    return CONCAT31(uVar1,(&DAT_00d3635a)[param_1]);
  }
  return (uint)uVar1 << 8;
}


