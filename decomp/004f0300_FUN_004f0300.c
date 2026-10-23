// FUN_004f0300 @ 4f0300 size=155

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004f0300(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 extraout_var;
  undefined2 uVar6;
  uint3 uVar5;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = (float10)FUN_0044a9c0(*(undefined4 *)(param_1 + 0x212),*(undefined4 *)(param_2 + 0x12));
  fVar8 = (float10)_DAT_007e82b8;
  piVar4 = *(int **)(param_1 + 0x26);
  uVar6 = extraout_var;
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar3 = *piVar4;
    uVar6 = (undefined2)((uint)piVar4 >> 0x10);
    if (*(float *)(iVar3 + 0x2f0) <= *(float *)(iVar3 + 0x2f4)) {
      fVar1 = *(float *)(iVar3 + 0x2f0);
    }
    else {
      fVar1 = *(float *)(iVar3 + 0x2f4);
    }
    piVar4 = piVar2;
    if ((float10)fVar1 < fVar8) {
      if (*(float *)(iVar3 + 0x2f0) <= *(float *)(iVar3 + 0x2f4)) {
        fVar8 = (float10)*(float *)(iVar3 + 0x2f0);
      }
      else {
        fVar8 = (float10)*(float *)(iVar3 + 0x2f4);
      }
    }
  }
  fVar8 = fVar8 * (float10)_DAT_007e543c;
  uVar5 = (uint3)(CONCAT22(uVar6,(ushort)(fVar7 < fVar8) << 8 |
                                 (ushort)(NAN(fVar7) || NAN(fVar8)) << 10 |
                                 (ushort)(fVar7 == fVar8) << 0xe) >> 8);
  if (fVar7 >= fVar8 && (fVar7 == fVar8) == 0) {
    return (uint)uVar5 << 8;
  }
  return CONCAT31(uVar5,1);
}


