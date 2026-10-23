// FUN_006a62d0 @ 6a62d0 size=68

void __fastcall FUN_006a62d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)param_1 + 10);
  uVar2 = (**(code **)(*(int *)param_1[0x23] + 0xc))();
  uVar2 = (**(code **)(*param_1 + 0xf0))(uVar2);
  uVar2 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(*(undefined4 *)((int)param_1 + 6),uVar2);
  FUN_00458570(s__s_has_canceled_Plan___d___s__fo_008691e0,uVar2);
  FUN_006a9d10();
  return;
}


