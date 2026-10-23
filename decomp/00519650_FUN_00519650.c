// FUN_00519650 @ 519650 size=212

void FUN_00519650(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1d11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x7e);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_00adcf30 = 0;
  }
  else {
    DAT_00adcf30 = FUN_00414c80(s_gfx_interface_battle_progress_A__0084adbc);
  }
  local_4 = 0xffffffff;
  pvVar1 = operator_new(0x7e);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    DAT_00adcf34 = 0;
  }
  else {
    DAT_00adcf34 = FUN_00414c80(s_gfx_interface_battle_progress_B__0084ad98);
  }
  local_4 = 0xffffffff;
  pvVar1 = operator_new(0x7e);
  local_4 = 2;
  if (pvVar1 != (void *)0x0) {
    DAT_00adcf38 = FUN_00414c80(s_gfx_interface_battle_progress_ma_0084ad6c);
    ExceptionList = local_c;
    return;
  }
  DAT_00adcf38 = 0;
  ExceptionList = local_c;
  return;
}


