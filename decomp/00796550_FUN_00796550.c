// FUN_00796550 @ 796550 size=64

void __fastcall FUN_00796550(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(param_1[1]);
  param_1[1] = 0;
  (**(code **)(*(int *)((int)param_1 + 0x12) + 0x14))();
  *(undefined4 *)((int)param_1 + 10) = 0;
  return;
}


