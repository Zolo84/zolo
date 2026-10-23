// FUN_0065d1b0 @ 65d1b0 size=180

undefined4 * __thiscall
FUN_0065d1b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3563;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0065cdb0(param_4,param_5);
  local_4 = 0;
  *param_1 = &PTR_FUN_007f0ae4;
  param_1[2] = &PTR_LAB_007f0ae0;
  FUN_00425ba0(s_info_message_0086701c);
  pvVar1 = operator_new(0x68);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0043da60(param_2,0x29a);
  }
  param_1[8] = uVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006d4290(uVar2);
  param_1[9] = param_3;
  ExceptionList = local_c;
  return param_1;
}


