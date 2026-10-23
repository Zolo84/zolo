// FUN_004a4690 @ 4a4690 size=138

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a4690(float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  int *piVar8;
  float10 fVar9;
  
  if (param_1 == 0.0) {
    return (float10)_DAT_007e3380;
  }
  puVar1 = (undefined4 *)((int)param_1 + 4);
  param_1 = 0.0;
  piVar5 = (int *)*puVar1;
  while (piVar5 != (int *)0x0) {
    piVar4 = (int *)piVar5[2];
    piVar8 = *(int **)(*piVar5 + 0x26);
    while (piVar5 = piVar4, piVar8 != (int *)0x0) {
      piVar5 = (int *)piVar8[2];
      iVar6 = *piVar8;
      fVar2 = *(float *)(iVar6 + 0xec);
      fVar3 = *(float *)(iVar6 + 0xf0);
      fVar7 = *(float *)(iVar6 + 0x10c) * *(float *)(iVar6 + 0xf0) * _DAT_007e543c;
      fVar9 = (float10)FUN_004fd370(1);
      param_1 = (float)((float10)(fVar7 * (fVar2 / fVar3)) / fVar9 + (float10)param_1);
      piVar8 = piVar5;
    }
  }
  return (float10)_DAT_00d7cec4 * (float10)param_1 + (float10)_DAT_00d7cec4 * (float10)param_1;
}


