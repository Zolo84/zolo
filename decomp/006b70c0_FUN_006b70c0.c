// FUN_006b70c0 @ 6b70c0 size=37

int __thiscall FUN_006b70c0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x1a);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*piVar1 != param_2);
  return piVar1[1];
}


