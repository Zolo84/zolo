// FUN_004a4610 @ 4a4610 size=119

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a4610(float param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_1 == 0.0) {
    return (float10)_DAT_007e3380;
  }
  puVar1 = (undefined4 *)((int)param_1 + 4);
  param_1 = 0.0;
  piVar4 = (int *)*puVar1;
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar3 = *(int *)(*piVar4 + 0x26);
    while (piVar4 = piVar2, iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + 8);
      fVar5 = (float10)FUN_004fd7c0(0);
      fVar6 = (float10)FUN_004fd370(1);
      param_1 = (float)((float10)(float)fVar5 / fVar6 + (float10)param_1);
    }
  }
  return (float10)_DAT_00d7cec4 * (float10)param_1 + (float10)_DAT_00d7cec4 * (float10)param_1;
}


