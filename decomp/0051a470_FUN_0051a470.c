// FUN_0051a470 @ 51a470 size=31

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0051a470(int param_1)

{
  int *piVar1;
  float10 fVar2;
  
  fVar2 = (float10)_DAT_007e3380;
  for (piVar1 = *(int **)(param_1 + 0x26); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    fVar2 = fVar2 + (float10)*(float *)(*piVar1 + 0xec);
  }
  return fVar2;
}


