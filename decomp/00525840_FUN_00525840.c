// FUN_00525840 @ 525840 size=144

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00525840(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iStack_4;
  
  uVar5 = (**(code **)(*param_1 + 0x2c))();
  if ((char)uVar5 == '\0') {
LAB_00525850:
    return uVar5 & 0xffffff00;
  }
  iVar7 = 0;
  bVar4 = false;
  iStack_4 = 0;
  piVar8 = *(int **)((int)param_1 + 0x26);
  if (*(int **)((int)param_1 + 0x26) != (int *)0x0) {
    do {
      piVar2 = (int *)piVar8[2];
      iVar3 = *piVar8;
      iVar6 = FUN_004fccd0();
      if (iVar6 == 0) {
        iVar7 = iVar7 + 1;
        uVar5 = 0;
      }
      else {
        uVar5 = iVar6 - 2;
        if (uVar5 == 0) {
          iStack_4 = iStack_4 + 1;
        }
      }
      if (*(int *)(iVar3 + 0x134) == 0x1a) goto LAB_00525850;
      fVar1 = *(float *)(iVar3 + 0x2e8);
      uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                       (ushort)(fVar1 < _DAT_007e3380) << 8 |
                       (ushort)(NAN(fVar1) || NAN(_DAT_007e3380)) << 10 |
                       (ushort)(fVar1 == _DAT_007e3380) << 0xe);
      if ((fVar1 == _DAT_007e3380) == 0) {
        bVar4 = true;
      }
      piVar8 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (2 < iVar7) {
      return uVar5;
    }
    if (bVar4) {
      return CONCAT31((int3)((uint)iStack_4 >> 8),iVar7 <= iStack_4);
    }
  }
  return uVar5 & 0xffffff00;
}


