// FUN_0066eff0 @ 66eff0 size=50

void __fastcall FUN_0066eff0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1b4))();
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x1b4))();
  (**(code **)(*(int *)(**(int **)(iVar2 + 4) + 0x22) + 4))();
  return;
}


