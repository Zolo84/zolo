// FUN_00690af0 @ 690af0 size=35

int __thiscall FUN_00690af0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x25a);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*(int *)(iVar1 + 0x48) != param_2);
  return iVar1;
}


