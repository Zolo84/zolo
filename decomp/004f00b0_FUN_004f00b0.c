// FUN_004f00b0 @ 4f00b0 size=45

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004f00b0(int param_1)

{
  int *piVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_007e3380;
  for (piVar1 = *(int **)(param_1 + 0x26); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    fVar2 = (float10)*(float *)(*piVar1 + 0x2ec) * (float10)*(float *)(*piVar1 + 0xec) *
            (float10)_DAT_007e46cc + fVar2;
  }
  return fVar2;
}


