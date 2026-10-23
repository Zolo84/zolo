// FUN_006a1c70 @ 6a1c70 size=98

undefined4 __thiscall FUN_006a1c70(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_0051b230();
  if (*(int *)(iVar4 + 0x254) == 8) {
    piVar2 = *(int **)(param_1 + 0xb4);
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      cVar3 = (**(code **)(*(int *)(*piVar2 + 0x22e) + 8))();
      piVar2 = piVar1;
      if ((cVar3 == '\0') &&
         (iVar4 = *(int *)(param_2 + 0xc), iVar5 = FUN_0051c0c0(), iVar5 == iVar4)) {
        return 1;
      }
    }
  }
  return 0;
}


