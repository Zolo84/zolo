// FUN_004cb3ad @ 4cb3ad size=429

void __thiscall FUN_004cb3ad(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *local_40;
  undefined1 local_24 [4];
  undefined4 *local_20;
  int *local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  undefined4 *local_8;
  
  local_c = *(int **)(param_2 + 0x2c);
  while (local_c != (int *)0x0) {
    local_1c = local_c;
    local_10 = *local_c;
    local_c = (int *)local_c[2];
    (**(code **)(*param_1 + 0xc))(local_10);
    *(int **)(local_10 + 0x482) = param_1;
  }
  (**(code **)(*(int *)(param_2 + 0x28) + 0x10))();
  local_8 = *(undefined4 **)(param_2 + 0x3e);
  while (local_8 != (undefined4 *)0x0) {
    puVar1 = local_8 + 2;
    local_20 = local_8;
    local_14 = (undefined4 *)*local_8;
    local_8 = (undefined4 *)*puVar1;
    if ((int *)*local_14 != param_1) {
      FUN_004ca017(*local_14,local_14[1]);
      puVar1 = (undefined4 *)FUN_004c7fad(local_24,param_2);
      local_18 = *(int *)*puVar1;
      FUN_004ca017(param_1,*(undefined4 *)(local_18 + 4));
      FUN_004ca017(param_2,-*(int *)(local_18 + 4));
    }
  }
  local_40 = *(undefined4 **)(param_2 + 0x3e);
  while (local_40 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)local_40[2];
    FUN_00796cd8(*local_40);
    FUN_00796cd8(local_40);
    local_40 = puVar1;
  }
  *(undefined4 *)(param_2 + 0x3e) = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)(param_2 + 0x46) = 0;
  FUN_004c968b();
  return;
}


