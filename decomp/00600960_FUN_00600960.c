// FUN_00600960 @ 600960 size=162

undefined4 * __thiscall
FUN_00600960(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cf7c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f83d0(param_2,param_3,param_4);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ee504;
  param_1[2] = &PTR_LAB_007ee500;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00434930(0xe0,0x82,0,0);
  }
  *(int *)((int)param_1 + 0x86) = iVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined1 *)(iVar2 + 0x5e) = 0;
  FUN_00600d20();
  ExceptionList = local_c;
  return param_1;
}


