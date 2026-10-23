// FUN_00587000 @ 587000 size=168

undefined4 * __fastcall FUN_00587000(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c91b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  pvVar1 = operator_new(0x94);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00416730();
  }
  local_4 = 0xffffffff;
  *param_1 = uVar2;
  pvVar1 = operator_new(0x94);
  local_4 = 1;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00416730();
    param_1[1] = uVar2;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}


