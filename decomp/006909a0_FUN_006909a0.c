// FUN_006909a0 @ 6909a0 size=41

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006909a0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x5c);
  do {
    if (piVar2 == (int *)0x0) {
      return (float10)_DAT_007e3d28;
    }
    piVar1 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*piVar1 != param_2);
  return (float10)(float)piVar1[1];
}


