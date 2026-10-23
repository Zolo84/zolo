// FUN_0073df90 @ 73df90 size=117

uint __fastcall FUN_0073df90(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x1a) != 0) {
    iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
    uVar5 = 0;
    if ((*(int *)(iVar3 + 0x254) != 8) && (uVar5 = 0, *(int *)(iVar3 + 0x254) != 9)) {
      iVar3 = *(int *)(param_1 + 0x1a);
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
        fVar1 = *(float *)(*(int *)(iVar4 + 0x1c6 + iVar3 * 4) + 0x10);
      }
      else {
        iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
        fVar1 = *(float *)(*(int *)(iVar4 + 0x1c6 + iVar3 * 4) + 0x14);
      }
      fVar2 = *(float *)(param_1 + 0x16);
      uVar6 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
              (ushort)(fVar1 == fVar2) << 0xe;
      uVar5 = (uint)uVar6;
      if (fVar1 >= fVar2) {
        return CONCAT31((uint3)(byte)(uVar6 >> 8),1);
      }
    }
  }
  return uVar5;
}


