// FUN_005073a0 @ 5073a0 size=159

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005073a0(int param_1,int param_2,char param_3)

{
  float fVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  
  if (param_3 != '\0') {
    fVar1 = *(float *)(param_2 + param_1 * 4);
    if ((fVar1 == _DAT_007e3380) != 0) {
      return (uint)(ushort)((ushort)(fVar1 < _DAT_007e3380) << 8 |
                            (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10 |
                           (ushort)(fVar1 == _DAT_007e3380) << 0xe);
    }
  }
  uVar3 = 1;
  uVar2 = 0;
  switch(param_1) {
  case 0xb:
    if ((_DAT_007e3380 <= *(float *)(param_2 + 0x2c)) &&
       (*(float *)(param_2 + 0x28) < *(float *)(param_2 + 0x2c))) {
      uVar3 = 0;
    }
    uVar2 = (uint)(ushort)((ushort)(DAT_00877334 < _DAT_007e3d28) << 8 |
                           (ushort)(NAN(DAT_00877334) || NAN(_DAT_007e3d28)) << 10 |
                          (ushort)(DAT_00877334 == _DAT_007e3d28) << 0xe);
    if ((DAT_00877334 == _DAT_007e3d28) != 0) {
      return uVar2;
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    fVar1 = *(float *)(param_2 + param_1 * 4);
    uVar4 = (ushort)(fVar1 < _DAT_007e3380) << 8 | (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10
            | (ushort)(fVar1 == _DAT_007e3380) << 0xe;
    uVar2 = (uint)uVar4;
    if ((fVar1 == _DAT_007e3380) != 0) {
      return (uint)(uVar4 >> 8) << 8;
    }
    break;
  case 0x14:
  case 0x15:
    if (*(int *)(param_2 + param_1 * 4) != 0x3f800000) break;
  case 0x11:
    uVar3 = 0;
  }
  return CONCAT31((int3)(uVar2 >> 8),uVar3);
}


