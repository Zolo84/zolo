// FUN_00432d40 @ 432d40 size=115

undefined4 * __fastcall FUN_00432d40(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba55b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_007e40c0;
  param_1[1] = 0;
  pvVar1 = operator_new(0x30);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00417900();
    param_1[2] = uVar2;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}


