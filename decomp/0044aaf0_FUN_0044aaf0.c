// FUN_0044aaf0 @ 44aaf0 size=71

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0044aaf0(int param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)(*(int *)(param_1 + 0x396c) + param_2);
  if (fVar1 <= (float10)_DAT_007e5440) {
    fVar1 = (float10)_DAT_007e5440;
  }
  fVar1 = (float10)*(int *)(param_1 + 0x3968) / fVar1;
  if ((float10)_DAT_007e3374 < fVar1) {
    fVar1 = (float10)_DAT_007e3374;
  }
  return fVar1;
}


