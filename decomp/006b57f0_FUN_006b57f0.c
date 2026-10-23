// FUN_006b57f0 @ 6b57f0 size=47

float10 __thiscall FUN_006b57f0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xba0);
  do {
    if (piVar2 == (int *)0x0) {
      return (float10)*(float *)(param_1 + 0xe0);
    }
    piVar1 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*piVar1 != param_2);
  return (float10)(float)piVar1[1];
}


