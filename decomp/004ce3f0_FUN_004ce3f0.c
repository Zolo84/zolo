// FUN_004ce3f0 @ 4ce3f0 size=670

undefined4 * __thiscall FUN_004ce3f0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *local_6c;
  undefined4 *local_68;
  uint local_5c;
  int local_40;
  int local_38;
  uint local_30;
  int local_14;
  int local_c;
  int local_8;
  
  *param_1 = &PTR_FUN_007e7c1c;
  if (param_1[1] == 0) {
    local_8 = 0;
  }
  else {
    if (param_1[2] == 1) {
      local_c = *(int *)param_1[1];
      FUN_00796cd8(param_1[1]);
      param_1[1] = 0;
    }
    else {
      uVar1 = (uint)param_1[3] >> 1;
      local_30 = param_1[3] + uVar1;
      if ((uint)param_1[2] < local_30) {
        local_68 = (undefined4 *)(param_1[1] + 4);
        local_30 = param_1[3];
      }
      else {
        local_68 = (undefined4 *)(param_1[1] + 8);
      }
      if (uVar1 == 1) {
        local_14 = *(int *)*local_68;
        FUN_00796cd8(*local_68);
        *local_68 = 0;
      }
      else {
        local_14 = FUN_004cff40(param_1[2],local_30,uVar1);
      }
      local_c = local_14;
    }
    param_1[2] = param_1[2] + -1;
    if ((uint)param_1[2] < (uint)param_1[3]) {
      param_1[3] = (uint)param_1[3] >> 1;
    }
    local_8 = local_c;
  }
  while (local_8 != 0) {
    if (param_1[1] == 0) {
      local_8 = 0;
    }
    else {
      if (param_1[2] == 1) {
        local_38 = *(int *)param_1[1];
        FUN_00796cd8(param_1[1]);
        param_1[1] = 0;
      }
      else {
        uVar1 = (uint)param_1[3] >> 1;
        local_5c = param_1[3] + uVar1;
        if ((uint)param_1[2] < local_5c) {
          local_6c = (undefined4 *)(param_1[1] + 4);
          local_5c = param_1[3];
        }
        else {
          local_6c = (undefined4 *)(param_1[1] + 8);
        }
        if (uVar1 == 1) {
          local_40 = *(int *)*local_6c;
          FUN_00796cd8(*local_6c);
          *local_6c = 0;
        }
        else {
          local_40 = FUN_004cff40(param_1[2],local_5c,uVar1);
        }
        local_38 = local_40;
      }
      param_1[2] = param_1[2] + -1;
      if ((uint)param_1[2] < (uint)param_1[3]) {
        param_1[3] = (uint)param_1[3] >> 1;
      }
      local_8 = local_38;
    }
  }
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


