// FUN_006b58b0 @ 6b58b0 size=40

int __thiscall FUN_006b58b0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xb62);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*piVar1 != param_2);
  return piVar1[1];
}


