// FUN_004d5c30 @ 4d5c30 size=390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004d5c30(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined3 uVar5;
  uint uVar4;
  
  iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  uVar4 = *(uint *)(param_1 + 0x12a);
  if (*(uint *)(iVar3 + 0x3d8) != uVar4) goto LAB_004d5db1;
  uVar5 = (undefined3)(uVar4 >> 8);
  uVar4 = CONCAT31(uVar5,*(char *)(param_1 + 0x19));
  if (*(char *)(param_1 + 0x19) == '\0') {
    uVar4 = CONCAT31(uVar5,*(char *)(param_1 + 0x16));
    if (*(char *)(param_1 + 0x16) == '\0') goto LAB_004d5db1;
    iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    uVar1 = *(uint *)(iVar3 + 0x482);
    uVar4 = FUN_0044e1d0();
    if (uVar1 != uVar4) goto LAB_004d5db1;
  }
  uVar4 = CONCAT31((int3)(uVar4 >> 8),*(char *)(param_1 + 0x16));
  if (*(char *)(param_1 + 0x16) != '\0') {
    iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    uVar1 = *(uint *)(iVar3 + 0x482);
    uVar4 = FUN_0044e1d0();
    if (uVar1 == uVar4) goto LAB_004d5db1;
    FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    iVar3 = FUN_004e9f40();
    if (iVar3 == 0) {
      iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      iVar3 = *(int *)(iVar3 + 0x12);
    }
    iVar3 = FUN_004e9370(iVar3);
    fVar2 = *(float *)(iVar3 + 0x268) * _DAT_008775a0;
    if (DAT_0087759c <= fVar2) {
      fVar2 = DAT_0087759c;
    }
    fVar2 = (*(float *)(iVar3 + 0x280) + *(float *)(param_1 + 0x24)) - fVar2;
    uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                     (ushort)(fVar2 < _DAT_007e7ed0) << 8 |
                     (ushort)(NAN(fVar2) || NAN(_DAT_007e7ed0)) << 10 |
                     (ushort)(fVar2 == _DAT_007e7ed0) << 0xe);
    if (fVar2 < _DAT_007e7ed0 || (fVar2 == _DAT_007e7ed0) != 0) goto LAB_004d5db1;
  }
  uVar4 = CONCAT31((int3)(uVar4 >> 8),*(char *)(param_1 + 0x19));
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    iVar3 = FUN_004e9f40();
    if (iVar3 == 0) {
      iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      iVar3 = *(int *)(iVar3 + 0x12);
    }
    iVar3 = FUN_004e9370(iVar3);
    fVar2 = *(float *)(iVar3 + 0x26c) * _DAT_008775a0;
    if (DAT_0087759c <= fVar2) {
      fVar2 = DAT_0087759c;
    }
    fVar2 = *(float *)(iVar3 + 0x270) - fVar2;
    uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                     (ushort)(fVar2 < _DAT_007e7ed0) << 8 |
                     (ushort)(NAN(fVar2) || NAN(_DAT_007e7ed0)) << 10 |
                     (ushort)(fVar2 == _DAT_007e7ed0) << 0xe);
    if (fVar2 < _DAT_007e7ed0 || (fVar2 == _DAT_007e7ed0) != 0) {
LAB_004d5db1:
      return uVar4 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


