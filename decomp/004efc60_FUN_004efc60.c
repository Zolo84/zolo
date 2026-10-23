// FUN_004efc60 @ 4efc60 size=55

uint __fastcall FUN_004efc60(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar1 = *(int **)(param_1 + 0x26);
    do {
      if (piVar1 == (int *)0x0) {
        return 1;
      }
      piVar3 = (int *)piVar1[2];
      iVar2 = *piVar1;
      piVar1 = piVar3;
    } while (*(int *)(iVar2 + 0x134) == 0xf);
  }
  return (uint)piVar3 & 0xffffff00;
}


