// FUN_005237d0 @ 5237d0 size=114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_005237d0(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  uint3 uVar6;
  
  uVar5 = 0;
  piVar4 = *(int **)(param_1 + 0x26);
  fVar2 = _DAT_007e3380;
  fVar3 = _DAT_007e3380;
  if (*(int **)(param_1 + 0x26) != (int *)0x0) {
    do {
      piVar1 = piVar4 + 2;
      switch(*(undefined4 *)(*piVar4 + 0x134)) {
      case 2:
      case 3:
      case 4:
      case 5:
        fVar3 = fVar3 + _DAT_007e3374;
        break;
      default:
        fVar2 = fVar2 + _DAT_007e3374;
      }
      piVar4 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    uVar5 = (uint)(ushort)((ushort)(fVar3 < _DAT_007e3380) << 8 |
                           (ushort)(NAN(fVar3) || NAN(_DAT_007e3380)) << 10 |
                          (ushort)(fVar3 == _DAT_007e3380) << 0xe);
    if ((fVar3 == _DAT_007e3380) == 0) {
      fVar2 = fVar2 / fVar3;
      fVar3 = (float)_DAT_007e6838;
      uVar6 = (uint3)(byte)(fVar2 < fVar3 |
                            (byte)((ushort)((ushort)(NAN(fVar2) || NAN(fVar3)) << 10) >> 8) |
                           (byte)((ushort)((ushort)(fVar2 == fVar3) << 0xe) >> 8));
      if (fVar2 < fVar3 || (fVar2 == fVar3) != 0) {
        return CONCAT31(uVar6,1);
      }
      return (uint)uVar6 << 8;
    }
  }
  return uVar5;
}


