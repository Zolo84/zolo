// FUN_004cfe30 @ 4cfe30 size=272

void __thiscall FUN_004cfe30(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 *local_28;
  int *local_24;
  
  param_5 = param_5 >> 1;
  if (param_3 < param_4 + param_5) {
    local_24 = param_1 + 1;
  }
  else {
    local_24 = param_1 + 2;
    param_4 = param_4 + param_5;
  }
  if (param_5 == 1) {
    local_28 = operator_new(0xc);
    if (local_28 == (undefined4 *)0x0) {
      local_28 = (undefined4 *)0x0;
    }
    else {
      *local_28 = param_2;
      local_28[1] = 0;
      local_28[2] = 0;
    }
    *local_24 = (int)local_28;
  }
  else {
    FUN_004cfe30(param_2,param_3,param_4,param_5);
  }
  if (*(float *)(*(int *)*local_24 + 4) < *(float *)(*param_1 + 4)) {
    iVar1 = *(int *)*local_24;
    *(int *)*local_24 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


