// FUN_00411d67 @ 411d67 size=230

void __thiscall FUN_00411d67(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007b9a00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x14 + param_3 * 4) != 0) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x14 + param_3 * 4), ExceptionList = &local_10,
     puVar1 != (undefined4 *)0x0)) {
    ExceptionList = &local_10;
    (**(code **)*puVar1)(1);
  }
  pvVar3 = operator_new(0x7e);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_00414c80(param_2);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14 + param_3 * 4) = local_2c;
  FUN_00415d40();
  uVar2 = FUN_00415bd0();
  *(undefined2 *)(*(int *)(*(int *)(param_1 + 8) + param_3 * 4) + 6) = uVar2;
  ExceptionList = local_10;
  return;
}


