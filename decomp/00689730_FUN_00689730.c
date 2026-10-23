// FUN_00689730 @ 689730 size=82

int __thiscall FUN_00689730(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0xa4);
  iVar4 = 0;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)piVar5[2];
    iVar2 = *piVar5;
    cVar3 = (**(code **)(*(int *)(iVar2 + 0x22e) + 8))();
    if (((cVar3 != '\0') && (*(char *)(iVar2 + 0x17b) == '\0')) &&
       (*(int *)(iVar2 + 0xc) == param_2)) {
      iVar4 = iVar4 + 1;
    }
    piVar5 = piVar1;
  } while (piVar1 != (int *)0x0);
  return iVar4;
}


