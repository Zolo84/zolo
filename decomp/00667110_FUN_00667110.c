// FUN_00667110 @ 667110 size=283

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00667110(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float local_c;
  float local_8;
  
  local_c = 0.0;
  local_8 = 0.0;
  piVar4 = *(int **)(param_1 + 0x26);
  if (*(int **)(param_1 + 0x26) != (int *)0x0) {
    do {
      piVar1 = (int *)piVar4[2];
      if (*(int *)(*piVar4 + 0x134) != 0x1e) {
        iVar3 = FUN_004fccd0();
        if (iVar3 == 0) {
          local_c = local_c + _DAT_007e3374;
        }
        else if (iVar3 == 2) {
          local_8 = local_8 + _DAT_007e3374;
        }
      }
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
    if ((local_c != _DAT_007e3380) || (local_8 != _DAT_007e3380)) {
      if ((DAT_00dc1743 != '\0') && (_DAT_007e3380 < local_8)) {
        fVar2 = _DAT_00877348 * local_8;
        local_8 = (float)(int)ROUND(fVar2);
        if ((float)(int)ROUND(fVar2) == _DAT_007e3380) {
          local_8 = local_8 + _DAT_007e3374;
        }
      }
      if (local_c < local_8) {
        if ((float10)local_8 < (float10)local_c + (float10)_DAT_007e5e34) {
          return (float10)_DAT_007e3374;
        }
        return ((float10)local_c + (float10)_DAT_007e5e34) / (float10)local_8;
      }
      return (float10)local_8 / (float10)local_c;
    }
  }
  return (float10)_DAT_007e3380;
}


