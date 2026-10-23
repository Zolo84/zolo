// FUN_00504570 @ 504570 size=73

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __thiscall FUN_00504570(int param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = *(float *)(param_1 + 0xf4);
  uVar2 = (ushort)(fVar1 < _DAT_007e34c0) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_007e34c0)) << 10 |
          (ushort)(fVar1 == _DAT_007e34c0) << 0xe;
  if (fVar1 < _DAT_007e34c0) {
    return uVar2;
  }
  uVar2 = CONCAT11((char)(uVar2 >> 8),*(char *)(param_1 + 0x161));
  if (*(char *)(param_1 + 0x161) != '\0') {
    if (param_2 == 1) {
      fVar1 = *(float *)(param_1 + 0x118);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x2e4);
    }
    uVar2 = (ushort)(fVar1 < _DAT_007e3380) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10
            | (ushort)(fVar1 == _DAT_007e3380) << 0xe;
    if (fVar1 < _DAT_007e3380 || (fVar1 == _DAT_007e3380) != 0) {
      return uVar2;
    }
  }
  return CONCAT11((char)(uVar2 >> 8),1);
}


