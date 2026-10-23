// FUN_006a61f0 @ 6a61f0 size=59

void __fastcall FUN_006a61f0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (**(code **)(*param_1 + 0xf0))();
  FUN_00458570(s_Post_Kill_for___d___s___00869154,*(undefined4 *)((int)param_1 + 6),uVar1);
  piVar2 = (int *)(**(code **)(*param_1 + 0xe0))();
  (**(code **)(*piVar2 + 0x214))(param_1);
  FUN_006a9890();
  return;
}


