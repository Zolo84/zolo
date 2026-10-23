// FUN_00642260 @ 642260 size=64

int __fastcall FUN_00642260(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x86);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar2[2];
    iVar4 = *piVar2;
    cVar3 = FUN_00433910();
    piVar2 = piVar1;
  } while (cVar3 == '\0');
  iVar4 = FUN_00428460(iVar4 + 0xaa);
  if (iVar4 == 0) {
    return 0;
  }
  return iVar4 + -8;
}


