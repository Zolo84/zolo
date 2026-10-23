// FUN_00621e10 @ 621e10 size=60

undefined4 * __thiscall FUN_00621e10(undefined4 *param_1,int param_2)

{
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_007ef768;
  param_1[2] = &PTR_LAB_007ef764;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x10);
  return param_1;
}


