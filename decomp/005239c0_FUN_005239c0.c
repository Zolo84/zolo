// FUN_005239c0 @ 5239c0 size=53

uint __fastcall FUN_005239c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (0 < (int)piVar3) {
    piVar2 = *(int **)(param_1 + 0x26);
    do {
      if (piVar2 == (int *)0x0) {
        return 1;
      }
      piVar3 = (int *)piVar2[2];
      iVar1 = *piVar2;
      piVar2 = piVar3;
    } while (*(char *)(iVar1 + 0x15c) != '\0');
  }
  return (uint)piVar3 & 0xffffff00;
}


