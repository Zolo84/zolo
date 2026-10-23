// FUN_004cf670 @ 4cf670 size=634

void __fastcall FUN_004cf670(int param_1)

{
  uint uVar1;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_8 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) == 1) {
      local_c = **(int **)(param_1 + 4);
      FUN_00796cd8(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xc) >> 1;
      local_30 = *(uint *)(param_1 + 0xc) + uVar1;
      if (*(uint *)(param_1 + 8) < local_30) {
        local_68 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
        local_30 = *(uint *)(param_1 + 0xc);
      }
      else {
        local_68 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
      }
      if (uVar1 == 1) {
        local_14 = *(int *)*local_68;
        FUN_00796cd8(*local_68);
        *local_68 = 0;
      }
      else {
        local_14 = FUN_004cff40(*(uint *)(param_1 + 8),local_30,uVar1);
      }
      local_c = local_14;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
    }
    local_8 = local_c;
  }
  while (local_8 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      local_8 = 0;
    }
    else {
      if (*(int *)(param_1 + 8) == 1) {
        local_38 = **(int **)(param_1 + 4);
        FUN_00796cd8(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0xc) >> 1;
        local_5c = *(uint *)(param_1 + 0xc) + uVar1;
        if (*(uint *)(param_1 + 8) < local_5c) {
          local_6c = (undefined4 *)(*(int *)(param_1 + 4) + 4);
          local_5c = *(uint *)(param_1 + 0xc);
        }
        else {
          local_6c = (undefined4 *)(*(int *)(param_1 + 4) + 8);
        }
        if (uVar1 == 1) {
          local_40 = *(int *)*local_6c;
          FUN_00796cd8(*local_6c);
          *local_6c = 0;
        }
        else {
          local_40 = FUN_004cff40(*(uint *)(param_1 + 8),local_5c,uVar1);
        }
        local_38 = local_40;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
      }
      local_8 = local_38;
    }
  }
  return;
}


