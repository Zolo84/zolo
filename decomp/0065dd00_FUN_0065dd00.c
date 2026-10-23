// FUN_0065dd00 @ 65dd00 size=240

undefined4 * __thiscall
FUN_0065dd00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3633;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0065cdb0(param_4,param_5);
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  local_4 = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_007f0b00;
  param_1[2] = &PTR_LAB_007f0afc;
  FUN_00425ba0(s_info_arrow_0086702c);
  param_1[0xc] = 0;
  param_1[9] = param_2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414ed0(0x40,0x40,8);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[10] = uVar2;
  FUN_00415a20(0x20,0x20);
  puVar3 = (undefined4 *)FUN_004d7870(&param_4,param_2);
  param_1[0xf] = *puVar3;
  param_1[0x10] = puVar3[1];
  FUN_00415f20(DAT_0088eb18);
  param_1[0x15] = 0;
  param_1[0x13] = param_3;
  ExceptionList = local_c;
  return param_1;
}


