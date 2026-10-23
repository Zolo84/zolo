// FUN_005f83d0 @ 5f83d0 size=49

undefined4 * __thiscall
FUN_005f83d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00414c80(param_4);
  *param_1 = &PTR_FUN_007ed9d4;
  param_1[2] = &PTR_LAB_007ed9d0;
  *(undefined4 *)((int)param_1 + 0x7e) = param_3;
  *(undefined4 *)((int)param_1 + 0x82) = param_2;
  return param_1;
}


