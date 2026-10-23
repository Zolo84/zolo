// FUN_0069c2c0 @ 69c2c0 size=197

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0069c2c0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(param_2 + 0x3d4) == *(int *)(param_1 + 10)) {
    return (float10)_DAT_007e3374;
  }
  cVar2 = FUN_004ea200(*(int *)(param_1 + 10));
  if (cVar2 != '\0') {
    return (float10)_DAT_007e40a4;
  }
  fVar4 = (float10)_DAT_007e6988;
  piVar3 = *(int **)(*(int *)(param_1 + 0x48) + 0x2c);
  if (piVar3 != (int *)0x0) {
    do {
      piVar1 = piVar3 + 2;
      fVar5 = (float10)(*(int *)(*piVar3 + 0x3f2) - *(int *)(param_2 + 0x3f2));
      fVar6 = (float10)(*(int *)(*piVar3 + 0x3f6) - *(int *)(param_2 + 0x3f6));
      fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
      if (fVar5 < fVar4) {
        fVar4 = (float10)(float)fVar5;
      }
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  fVar4 = (float10)_DAT_007e3374 - fVar4 * (float10)_DAT_007f5120;
  if (fVar4 < (float10)_DAT_007e3380) {
    fVar4 = (float10)_DAT_007e3380;
  }
  return fVar4;
}


