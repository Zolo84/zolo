// FUN_004cff40 @ 4cff40 size=153

undefined4 __thiscall FUN_004cff40(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 local_20;
  undefined4 local_8;
  
  param_4 = param_4 >> 1;
  if (param_2 < param_3 + param_4) {
    local_20 = (undefined4 *)(param_1 + 4);
  }
  else {
    local_20 = (undefined4 *)(param_1 + 8);
    param_3 = param_3 + param_4;
  }
  if (param_4 == 1) {
    local_8 = *(undefined4 *)*local_20;
    FUN_00796cd8(*local_20);
    *local_20 = 0;
  }
  else {
    local_8 = FUN_004cff40(param_2,param_3,param_4);
  }
  return local_8;
}


