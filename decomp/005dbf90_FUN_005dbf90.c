// FUN_005dbf90 @ 5dbf90 size=286

undefined4 * __thiscall FUN_005dbf90(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cdc69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((int)param_1 + 0xc6) = 0;
  *(undefined2 *)((int)param_1 + 0xca) = 0;
  param_1[0x33] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_007ed094;
  param_1[2] = &PTR_LAB_007ed090;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed08c;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe0,0xbf,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x2f] = uVar2;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe0,0xbf,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar2;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    param_1[0x34] = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_hr_bmp_0085b46c);
    param_1[0x34] = uVar2;
  }
  ExceptionList = local_c;
  return param_1;
}


