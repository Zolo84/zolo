// FUN_005074c0 @ 5074c0 size=91

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_005074c0(int param_1,int param_2,char param_3)

{
  float fVar1;
  undefined2 in_AX;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  
  uVar4 = CONCAT11((char)((ushort)in_AX >> 8),param_3);
  if (param_3 != '\0') {
    fVar1 = *(float *)(param_2 + param_1 * 4);
    uVar4 = (ushort)(fVar1 < _DAT_007e3380) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10
            | (ushort)(fVar1 == _DAT_007e3380) << 0xe;
    if ((fVar1 == _DAT_007e3380) != 0) {
      return uVar4;
    }
  }
  bVar2 = (byte)(uVar4 >> 8);
  uVar3 = 1;
  if (param_1 == 0x10) {
    fVar1 = *(float *)(param_2 + 0x40);
    bVar2 = fVar1 < _DAT_007e3380 |
            (byte)((ushort)((ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10) >> 8) |
            (byte)((ushort)((ushort)(fVar1 == _DAT_007e3380) << 0xe) >> 8);
    if ((fVar1 == _DAT_007e3380) != 0) {
      uVar3 = 0;
    }
  }
  else if (((0x12 < param_1) && (param_1 < 0x15)) && (*(int *)(param_2 + param_1 * 4) == 0x3f800000)
          ) {
    return uVar4 & 0xff00;
  }
  return CONCAT11(bVar2,uVar3);
}


