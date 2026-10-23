// FUN_0053e630 @ 53e630 size=146

undefined4 * __thiscall FUN_0053e630(undefined4 *param_1,int param_2,int param_3)

{
  int local_10;
  int local_c;
  
  param_1[1] = 0xd;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_007e38f8;
  if (param_2 == 0) {
    local_c = 0;
  }
  else {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    local_c = param_2;
  }
  param_1[3] = local_c;
  if (param_3 == 0) {
    local_10 = 0;
  }
  else {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    local_10 = param_3;
  }
  param_1[4] = local_10;
  *param_1 = &PTR_FUN_007e3878;
  return param_1;
}


