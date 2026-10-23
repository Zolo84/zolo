// FUN_004172b0 @ 4172b0 size=78

void __thiscall FUN_004172b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)((int)param_1 + 0x4e) = param_2;
  iVar2 = *param_1;
  *(int *)((int)param_1 + 0x56) = *(int *)(*(int *)((int)param_1 + 0x62) + 4) / param_2;
  iVar1 = _rand();
  (**(code **)(iVar2 + 0x38))(iVar1 % *(int *)((int)param_1 + 0x4e));
  iVar2 = FUN_00415be0();
  iVar2 = iVar2 / 2;
  iVar1 = FUN_00415bd0(iVar2);
  FUN_00415a20(iVar1 / 2,iVar2);
  return;
}


