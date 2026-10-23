// FUN_00616c00 @ 616c00 size=247

undefined4 * __thiscall FUN_00616c00(undefined4 *param_1,int param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d08c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_007ef3ec;
  param_1[2] = &PTR_LAB_007ef3e8;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x10);
  param_1[0xe] = param_3;
  param_1[0xd] = 0;
  FUN_007a630a(local_10c,s_gfx_interface_pics__s_bmp_0085d184,param_2 + 0x2a);
  FUN_0061e550(param_1 + 0xd,local_10c,0);
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00434930(0xd0,0x2a,0,0);
  }
  param_1[0xf] = iVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined2 *)(iVar2 + 0x5a) = 0xffff;
  uVar3 = FUN_007637c0();
  FUN_004361a0(uVar3);
  ExceptionList = local_c;
  return param_1;
}


