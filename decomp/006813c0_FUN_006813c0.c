// FUN_006813c0 @ 6813c0 size=32

int __thiscall FUN_006813c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*(int *)(iVar1 + 4) != param_2);
  return iVar1;
}


