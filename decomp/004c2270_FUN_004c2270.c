// FUN_004c2270 @ 4c2270 size=433

undefined4 * __thiscall FUN_004c2270(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007befb5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = param_1;
  puVar1 = operator_new(0x84);
  local_4 = 0;
  puVar4 = (undefined4 *)0x0;
  local_10 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004bc800(0);
    local_4._0_1_ = 1;
    FUN_004c4760();
    puVar1[0x14] = &PTR_FUN_007e7a0c;
    local_4._0_1_ = 2;
    FUN_004c4870(&local_17,0,&local_18);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004c4870(&local_15,0,&local_16);
    *puVar1 = &PTR_FUN_007e79a8;
    puVar4 = puVar1;
  }
  local_4 = 0xffffffff;
  puVar1 = operator_new(0x84);
  local_4 = 4;
  local_10 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004bc800(1);
    local_4._0_1_ = 5;
    FUN_004c4760();
    puVar1[0x14] = &PTR_FUN_007e7a0c;
    local_4._0_1_ = 6;
    FUN_004c4870(&local_16,0,&local_15);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004c4870(&local_18,0,&local_17);
    *puVar1 = &PTR_FUN_007e79a8;
  }
  local_4 = 0xffffffff;
  FUN_004b82e0(param_2,param_3,puVar1,puVar4);
  local_4 = 8;
  *param_1 = &PTR_FUN_007e7924;
  param_1[2] = &PTR_LAB_007e7910;
  param_1[0x1d] = 1;
  pvVar2 = operator_new(0x20);
  local_4._0_1_ = 9;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005826d0(&DAT_00857438,4,*(undefined4 *)(param_2 + 0x3f2),
                         *(undefined4 *)(param_2 + 0x3f6));
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  param_1[0x2c] = uVar3;
  FUN_00582940(uVar3);
  ExceptionList = local_c;
  return param_1;
}


