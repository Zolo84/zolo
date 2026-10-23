// FUN_004c2450 @ 4c2450 size=176

undefined4 * __thiscall
FUN_004c2450(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007befd3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004b82e0(param_2,param_3,param_4,param_5);
  local_4 = 0;
  *param_1 = &PTR_FUN_007e7924;
  param_1[2] = &PTR_LAB_007e7910;
  pvVar1 = operator_new(0x20);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005826d0(&DAT_00857438,4,*(undefined4 *)(param_2 + 0x3f2),
                         *(undefined4 *)(param_2 + 0x3f6));
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x2c] = uVar2;
  FUN_00582940(uVar2);
  ExceptionList = local_c;
  return param_1;
}


