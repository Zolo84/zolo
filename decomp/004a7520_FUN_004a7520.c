// FUN_004a7520 @ 4a7520 size=163

uint __fastcall FUN_004a7520(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = FUN_0042dd70(DAT_00893530 + 0x14);
  if ((char)uVar3 == '\0') {
    uVar4 = FUN_00451250(*(undefined4 *)(param_1 + 6));
    uVar3 = uVar4;
    if ((int)uVar4 < 0x14) {
      iVar5 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
      uVar3 = 0;
      if (iVar5 != 0) {
        fVar2 = (float)(int)uVar4;
        iVar5 = FUN_006c8e70(*(undefined4 *)(param_1 + 6),1);
        fVar1 = *(float *)(iVar5 + 0xc);
        uVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),
                         (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 < fVar1) {
          return CONCAT31((int3)(uVar3 >> 8),1);
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}


