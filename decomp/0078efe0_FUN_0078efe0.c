// FUN_0078efe0 @ 78efe0 size=169

undefined4 * __thiscall FUN_0078efe0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e1558;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    puVar1 = operator_new(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = *puVar2;
    }
  }
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(*param_1 + 0x1c))();
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = operator_new(4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      goto LAB_0078f064;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_0078f064:
  *param_2 = puVar2;
  FUN_00796cd8();
  ExceptionList = pvStack_c;
  return param_2;
}


