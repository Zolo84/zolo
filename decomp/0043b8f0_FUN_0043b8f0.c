// FUN_0043b8f0 @ 43b8f0 size=293

undefined4 * __thiscall
FUN_0043b8f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bac3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  local_4 = 1;
  *param_1 = &PTR_FUN_007e4510;
  param_1[2] = &PTR_LAB_007e450c;
  FUN_0043bb70(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0,param_11);
  puVar1 = operator_new(0x1e);
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_LAB_007e36b4;
    local_4._0_1_ = 3;
    FUN_00425a80(&DAT_0082eeb0);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_00583720();
    *(undefined4 *)((int)puVar1 + 0x12) = &PTR_FUN_007e3858;
    *(undefined ***)((int)puVar1 + 0x1a) = &PTR_LAB_007e386c;
    *(undefined4 *)((int)puVar1 + 0x12) = &PTR_LAB_007e36e8;
    *puVar1 = &PTR_FUN_007e36fc;
    *(undefined ***)((int)puVar1 + 0x1a) = &PTR_LAB_007e36e4;
  }
  *(undefined4 **)((int)param_1 + 0x3a) = puVar1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  ExceptionList = local_c;
  return param_1;
}


