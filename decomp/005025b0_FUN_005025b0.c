// FUN_005025b0 @ 5025b0 size=33

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short __thiscall FUN_005025b0(int param_1,float param_2)

{
  byte bVar1;
  
  param_2 = *(float *)(param_1 + 0x2d8) - param_2;
  bVar1 = param_2 < _DAT_007e855c |
          (byte)((ushort)((ushort)(NAN(param_2) || NAN(_DAT_007e855c)) << 10) >> 8) |
          (byte)((ushort)((ushort)(param_2 == _DAT_007e855c) << 0xe) >> 8);
  if (param_2 >= _DAT_007e855c && (param_2 == _DAT_007e855c) == 0) {
    return CONCAT11(bVar1,1);
  }
  return (ushort)bVar1 << 8;
}


