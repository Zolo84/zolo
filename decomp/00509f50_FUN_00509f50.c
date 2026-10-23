// FUN_00509f50 @ 509f50 size=81

void __thiscall FUN_00509f50(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (10 < param_2) {
    param_2 = 10;
  }
  if (*(int *)(param_1 + 0x32) != 0) {
    FUN_004b2de0(param_1,param_2);
  }
  *(int *)(param_1 + 0x32) = param_2;
  if (*(float *)(param_1 + 0x36) < (float)(int)(&DAT_0084a0ec)[param_2]) {
    *(float *)(param_1 + 0x36) = (float)(int)(&DAT_0084a0ec)[param_2];
    return;
  }
  return;
}


