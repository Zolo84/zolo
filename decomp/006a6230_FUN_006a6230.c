// FUN_006a6230 @ 6a6230 size=80

void __fastcall FUN_006a6230(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)param_1 + 10);
  uVar2 = (**(code **)(*(int *)param_1[0x23] + 0xc))((double)*(float *)(param_1[0x10] + 0x44));
  uVar2 = (**(code **)(*param_1 + 0xf0))(uVar2);
  uVar2 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(*(undefined4 *)((int)param_1 + 6),uVar2);
  FUN_00458570(s__s_has_started_Plan___d___s__for_0086916c,uVar2);
  FUN_006a2910();
  return;
}


