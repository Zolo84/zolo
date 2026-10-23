// FUN_0050c360 @ 50c360 size=98

uint __thiscall FUN_0050c360(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  int *piVar6;
  undefined2 extraout_var;
  float10 fVar7;
  
  piVar6 = *(int **)(param_2 + 0x26);
  do {
    if (piVar6 == (int *)0x0) {
      return param_2 & 0xffffff00;
    }
    piVar1 = (int *)piVar6[2];
    iVar2 = *piVar6;
    fVar3 = *(float *)(iVar2 + 0xf4);
    fVar7 = (float10)FUN_004fd510();
    fVar7 = fVar7 * (float10)*(float *)(param_1 + 0x2e);
    fVar4 = (float10)fVar3;
    param_2 = CONCAT22(extraout_var,
                       (ushort)(fVar7 < fVar4) << 8 | (ushort)(NAN(fVar7) || NAN(fVar4)) << 10 |
                       (ushort)(fVar7 == fVar4) << 0xe);
    if (fVar7 < fVar4 == 0 && (fVar7 == fVar4) == 0) break;
    fVar3 = *(float *)(iVar2 + 0xec);
    fVar5 = *(float *)(iVar2 + 0xf0) * *(float *)(param_1 + 0xc);
    param_2 = CONCAT22(extraout_var,
                       (ushort)(fVar5 < fVar3) << 8 | (ushort)(NAN(fVar5) || NAN(fVar3)) << 10 |
                       (ushort)(fVar5 == fVar3) << 0xe);
    piVar6 = piVar1;
  } while (fVar5 < fVar3 || (fVar5 == fVar3) != 0);
  return CONCAT31((int3)(param_2 >> 8),1);
}


