// FUN_004731a0 @ 4731a0 size=251

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004731a0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 extraout_var;
  float10 fVar6;
  float10 fVar7;
  
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
          iVar5 = *(int *)(param_1 + 0x120);
          fVar1 = *(float *)(param_1 + 0x39c8);
          fVar6 = (float10)FUN_00586a70(9,0,(&DAT_0089cad8)[*(int *)(param_1 + 6)]);
          fVar7 = (float10)fVar1 - (float10)_DAT_00877564 * (float10)*(float *)(iVar5 + 0xb0a);
          if (fVar7 < fVar6 != 0 || (fVar7 == fVar6) != 0) {
            return CONCAT31((int3)(CONCAT22(extraout_var,
                                            (ushort)(fVar7 < fVar6) << 8 |
                                            (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                                            (ushort)(fVar7 == fVar6) << 0xe) >> 8),1);
          }
          uVar3 = FUN_004721d0(9,*(undefined4 *)(param_1 + 6));
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}


