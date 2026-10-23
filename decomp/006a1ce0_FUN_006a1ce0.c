// FUN_006a1ce0 @ 6a1ce0 size=76

undefined4 FUN_006a1ce0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = FUN_0051b230();
  if (*(int *)(iVar4 + 0x254) == 8) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x2aa) + 4);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      cVar3 = (**(code **)(*(int *)(*piVar2 + 0x22e) + 8))();
      piVar2 = piVar1;
      if (cVar3 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}


