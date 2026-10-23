// FUN_006a3eb0 @ 6a3eb0 size=65

void __fastcall FUN_006a3eb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_006a6230();
  (**(code **)(*param_1 + 0x224))();
  iVar1 = *(int *)((int)param_1 + 10);
  uVar2 = (**(code **)(*(int *)param_1[0x23] + 0xc))();
  uVar2 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar2);
  FUN_00458570(s_BuildPlan___d_of__s_plans_to_bui_00868e34,*(undefined4 *)((int)param_1 + 6),uVar2);
  return;
}


