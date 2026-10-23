// FUN_0068b9c0 @ 68b9c0 size=141

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0068b9c0(int param_1,int param_2)

{
  float10 fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 extraout_var;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  uVar4 = 0;
  if (*(int *)(param_2 + 0x3d8) != 0) {
    uVar4 = *(uint *)(param_2 + 0x290);
    iVar5 = 0;
    if (0 < (int)uVar4) {
      iVar6 = 0;
      do {
        puVar2 = (undefined4 *)(*(int *)(param_2 + 0x298) + iVar6);
        if (puVar2[1] != 4) {
          iVar3 = FUN_004e9370(*puVar2);
          if ((((*(int *)(iVar3 + 0x254) != 8) && (*(int *)(iVar3 + 0x254) != 9)) &&
              (iVar3 = *(int *)(iVar3 + 0x3d8), iVar3 != 0)) && (iVar3 != *(int *)(param_1 + 10))) {
            fVar7 = (float10)FUN_0068b390(iVar3);
            fVar1 = (float10)_DAT_007e3380;
            if (fVar7 < fVar1 == 0 && (fVar7 == fVar1) == 0) {
              return CONCAT31((int3)(CONCAT22(extraout_var,
                                              (ushort)(fVar7 < fVar1) << 8 |
                                              (ushort)(NAN(fVar7) || NAN(fVar1)) << 10 |
                                              (ushort)(fVar7 == fVar1) << 0xe) >> 8),1);
            }
          }
        }
        uVar4 = *(uint *)(param_2 + 0x290);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar5 < (int)uVar4);
    }
  }
  return uVar4 & 0xffffff00;
}


