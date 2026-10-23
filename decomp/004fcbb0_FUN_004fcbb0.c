// FUN_004fcbb0 @ 4fcbb0 size=274

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004fcbb0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  
  iVar2 = __ftol();
  fVar1 = (param_2 - (float)iVar2) * _DAT_007e4088;
  iVar3 = _rand();
  if (iVar3 % 100 < (int)ROUND(fVar1)) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == *(int *)(param_1 + 0x84) || iVar2 - *(int *)(param_1 + 0x84) < 0) {
    if (*(char *)(param_1 + 0x15f) == '\0') {
      param_2 = _DAT_00dc1654;
      if (*(char *)(param_1 + 0x160) != '\0') {
        param_2 = _DAT_00dc1650;
      }
    }
    else {
      iVar2 = FUN_00522770();
      param_2 = *(float *)(iVar2 + 0xe30a) * _DAT_00dc164c;
    }
  }
  else {
    if (*(char *)(param_1 + 0x15f) == '\0') {
      param_2 = _DAT_00dc1648;
      if (*(char *)(param_1 + 0x160) != '\0') {
        param_2 = _DAT_00dc1644;
      }
    }
    else {
      iVar2 = FUN_00522770();
      param_2 = *(float *)(iVar2 + 0xe30a) * _DAT_00dc1640;
    }
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  if (_DAT_007e686c < param_2) {
    param_2 = 99.0;
  }
  iVar2 = _rand();
  fVar1 = (float)(iVar2 % 100);
  uVar4 = (uint3)(CONCAT22((short)((uint)(iVar2 / 100) >> 0x10),
                           (ushort)(fVar1 < param_2) << 8 |
                           (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                           (ushort)(fVar1 == param_2) << 0xe) >> 8);
  if (fVar1 >= param_2) {
    return CONCAT31(uVar4,1);
  }
  return (uint)uVar4 << 8;
}


