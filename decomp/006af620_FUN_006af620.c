// FUN_006af620 @ 6af620 size=39

void __fastcall FUN_006af620(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(param_1[1]);
  param_1[1] = 0;
  (**(code **)(*(int *)((int)param_1 + 0x12) + 0x14))();
  *(undefined4 *)((int)param_1 + 10) = 0;
  return;
}


