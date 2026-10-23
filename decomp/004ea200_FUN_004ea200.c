// FUN_004ea200 @ 4ea200 size=258

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004ea200(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x12) != 0) {
    uVar4 = FUN_004e9f80(param_2);
    if (0 < (int)uVar4) {
      iVar5 = FUN_004e9f80(param_2);
      fVar1 = *(float *)(DAT_00ab27b4 + 0x270 + iVar5 * 0x4b2);
      iVar5 = DAT_00ab27b4 + iVar5 * 0x4b2;
      if (fVar1 < _DAT_007e3380 == 0 && (fVar1 == _DAT_007e3380) == 0) {
        return CONCAT31((int3)(CONCAT22((short)((uint)DAT_00ab27b4 >> 0x10),
                                        (ushort)(fVar1 < _DAT_007e3380) << 8 |
                                        (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10 |
                                        (ushort)(fVar1 == _DAT_007e3380) << 0xe) >> 8),1);
      }
      if (*(int *)(iVar5 + 0x3d4) != 0) {
        iVar2 = *(int *)(iVar5 + 0x12);
        iVar6 = FUN_0044e1b0();
        if (iVar6 == iVar2) {
          fVar1 = *(float *)(*(int *)(iVar5 + 0x3d4) + 0x39c4);
          if (fVar1 < _DAT_007e3380 == 0 && (fVar1 == _DAT_007e3380) == 0) {
            return CONCAT31((int3)(CONCAT22((short)((uint)iVar6 >> 0x10),
                                            (ushort)(fVar1 < _DAT_007e3380) << 8 |
                                            (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10 |
                                            (ushort)(fVar1 == _DAT_007e3380) << 0xe) >> 8),1);
          }
        }
      }
      uVar3 = *(uint *)(iVar5 + 0x482);
      uVar4 = FUN_0044e1d0();
      if (uVar4 == uVar3) {
        fVar1 = *(float *)(param_2 + 0x39c4);
        uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                         (ushort)(fVar1 < _DAT_007e3380) << 8 |
                         (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10 |
                         (ushort)(fVar1 == _DAT_007e3380) << 0xe);
        if (fVar1 >= _DAT_007e3380 && (fVar1 == _DAT_007e3380) == 0) {
          return CONCAT31((int3)(uVar4 >> 8),1);
        }
      }
      if (*(int *)(param_1 + 0x3d4) != 0) {
        uVar3 = *(uint *)(iVar5 + 0x12);
        uVar4 = FUN_0044e1b0();
        if (uVar4 == uVar3) {
          fVar1 = *(float *)(*(int *)(param_1 + 0x3d4) + 0x39c4);
          uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                           (ushort)(fVar1 < _DAT_007e3380) << 8 |
                           (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10 |
                           (ushort)(fVar1 == _DAT_007e3380) << 0xe);
          if (fVar1 >= _DAT_007e3380 && (fVar1 == _DAT_007e3380) == 0) {
            return CONCAT31((int3)(uVar4 >> 8),1);
          }
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}


