// FUN_006098c0 @ 6098c0 size=309

undefined4 * __thiscall FUN_006098c0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0059;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  *param_1 = &PTR_FUN_007ef12c;
  param_1[2] = &PTR_LAB_007ef128;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_plate_decision_bmp_0085e9cc,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0xd] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00414c80(s_gfx_interface_icon_decision_bmp_0085e9ac);
  }
  param_1[0xe] = piVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar4 + 0x34))(2);
  *(undefined4 *)(*(int *)((int)param_1 + 0x2e) + 0x24) = DAT_00d0ca90;
  cVar1 = FUN_0072a2c0();
  if (cVar1 == '\0') {
    *(undefined1 *)((int)param_1 + 0x32) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x32) = 1;
  }
  FUN_007a630a(&DAT_00cf3704,s_gfx_events_pics__s_bmp_0085e994,
               *(int *)((int)param_1 + 0x2e) + 0x22a6);
  pvVar2 = operator_new(0x7e);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_00414c80(&DAT_00cf3704);
    param_1[0xf] = uVar3;
    ExceptionList = param_1;
    return param_1;
  }
  param_1[0xf] = 0;
  ExceptionList = param_1;
  return param_1;
}


