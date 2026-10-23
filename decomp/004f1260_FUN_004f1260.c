// FUN_004f1260 @ 4f1260 size=169

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004f1260(int param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)_DAT_007e8410;
  *(float *)(param_1 + 0x42) = param_2;
  fVar5 = param_2 * fVar5 + *(float *)(param_1 + 0x3e);
  *(float *)(param_1 + 0x3e) = fVar5;
  fVar6 = param_2 / ((_DAT_007e3374 - *(float *)(param_1 + 0x4e)) * (float)*(int *)(param_1 + 0x24))
          + *(float *)(param_1 + 0x46);
  *(float *)(param_1 + 0x46) = fVar6;
  if (_DAT_007e3374 < fVar6) {
    *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  }
  if (_DAT_007e384c < fVar5) {
    *(undefined4 *)(param_1 + 0x3e) = 0x40400000;
  }
  if (_DAT_007e840c < *(float *)(param_1 + 0x3e)) {
    fVar5 = *(float *)(param_1 + 0x3e) - _DAT_007e3374;
    *(float *)(param_1 + 0x3e) = fVar5;
    bVar2 = NAN(_DAT_007e3380);
    bVar3 = fVar5 < _DAT_007e3380;
    bVar4 = fVar5 == _DAT_007e3380;
    if (bVar3 != 0) {
      *(undefined4 *)(param_1 + 0x3e) = 0;
    }
    return CONCAT31((int3)(CONCAT22((short)((uint)param_2 >> 0x10),
                                    (ushort)bVar3 << 8 | (ushort)(NAN(fVar5) || bVar2) << 10 |
                                    (ushort)bVar4 << 0xe) >> 8),1);
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + 6);
  if ((&DAT_00dc0fd4)[uVar1] != 0) {
    *(undefined4 *)(param_1 + 0x4e) = 0;
  }
  return uVar1 & 0xffffff00;
}


