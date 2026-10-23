// FUN_0060a210 @ 60a210 size=340

undefined4 * __thiscall FUN_0060a210(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d00f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef180;
  param_1[2] = &PTR_LAB_007ef17c;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef178;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe0,0x208,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_alphab_0085b4e8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_date_b_0085ea7c,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x32] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_sort_status_0085ea54,0,0xffffffff);
  }
  param_1[0x33] = uVar2;
  *(undefined1 *)(param_1[0x31] + 0x68) = 1;
  *(undefined1 *)(param_1[0x32] + 0x68) = 1;
  *(undefined1 *)(param_1[0x33] + 0x68) = 1;
  param_1[0x2f] = 0;
  ExceptionList = local_c;
  return param_1;
}


