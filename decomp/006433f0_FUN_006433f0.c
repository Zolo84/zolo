// FUN_006433f0 @ 6433f0 size=85

void __fastcall FUN_006433f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0x42;
  piVar3 = param_1;
  do {
    if ((*piVar3 != 0) && (piVar1 = (int *)param_1[*(int *)(*piVar3 + 0x92)], piVar1 != (int *)0x0))
    {
      (**(code **)(*piVar1 + 0x18))(0xfffffc18,0xfffffc18);
      (**(code **)(piVar1[0xf4] + 0x18))(0xfffffc18,0xfffffc18);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


