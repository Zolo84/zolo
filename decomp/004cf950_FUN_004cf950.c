// FUN_004cf950 @ 4cf950 size=308

undefined4 __fastcall FUN_004cf950(int param_1)

{
  uint uVar1;
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_8 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) == 1) {
      local_8 = **(undefined4 **)(param_1 + 4);
      FUN_00796cd8(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xc) >> 1;
      local_2c = *(uint *)(param_1 + 0xc) + uVar1;
      if (*(uint *)(param_1 + 8) < local_2c) {
        local_38 = (undefined4 *)(*(int *)(param_1 + 4) + 4);
        local_2c = *(uint *)(param_1 + 0xc);
      }
      else {
        local_38 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
      }
      if (uVar1 == 1) {
        local_10 = *(undefined4 *)*local_38;
        FUN_00796cd8(*local_38);
        *local_38 = 0;
      }
      else {
        local_10 = FUN_004cff40(*(uint *)(param_1 + 8),local_2c,uVar1);
      }
      local_8 = local_10;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 1;
    }
  }
  return local_8;
}


