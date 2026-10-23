// FUN_00664680 @ 664680 size=147

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00664680(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  undefined2 extraout_var;
  float10 fVar7;
  float10 fVar8;
  
  piVar6 = *(int **)(param_2 + 0x26);
  do {
    if (piVar6 == (int *)0x0) {
      return param_2 & 0xffffff00;
    }
    piVar1 = (int *)piVar6[2];
    iVar2 = *piVar6;
    iVar3 = *(int *)(*(int *)(param_1 + 10) + 0x120);
    fVar4 = *(float *)(iVar2 + 0xf4);
    fVar7 = (float10)FUN_004fd510();
    fVar8 = fVar7 * (float10)*(float *)(iVar3 + 0x164) * (float10)_DAT_007e543c;
    fVar7 = (float10)fVar4;
    param_2 = CONCAT22(extraout_var,
                       (ushort)(fVar8 < fVar7) << 8 | (ushort)(NAN(fVar8) || NAN(fVar7)) << 10 |
                       (ushort)(fVar8 == fVar7) << 0xe);
    if ((fVar8 < fVar7 == 0 && (fVar8 == fVar7) == 0) ||
       (param_2 = CONCAT31((int3)(param_2 >> 8),*(char *)(iVar2 + 0x157)),
       *(char *)(iVar2 + 0x157) != '\0')) break;
    fVar4 = *(float *)(iVar2 + 0xec);
    fVar5 = *(float *)(iVar2 + 0xf0) * *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x168)
            * _DAT_007e543c;
    param_2 = CONCAT22((short)((uint)*(int *)(param_1 + 10) >> 0x10),
                       (ushort)(fVar5 < fVar4) << 8 | (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                       (ushort)(fVar5 == fVar4) << 0xe);
    piVar6 = piVar1;
  } while (fVar5 < fVar4 || (fVar5 == fVar4) != 0);
  return CONCAT31((int3)(param_2 >> 8),1);
}


