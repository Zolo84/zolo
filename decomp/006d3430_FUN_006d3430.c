// FUN_006d3430 @ 6d3430 size=452

undefined4 * __fastcall FUN_006d3430(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9249;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007e3858;
  param_1[2] = &PTR_LAB_007e386c;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x12) = &PTR_LAB_007e36b4;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_00418f40();
  *(undefined4 *)((int)param_1 + 0x12) = &PTR_FUN_007f751c;
  param_1[9] = &PTR_LAB_007f7508;
  param_1[0xb] = &PTR_LAB_007f7504;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xc] = &PTR_LAB_007e36b4;
  local_4._0_1_ = 4;
  FUN_00425a80(&DAT_0082eeb0);
  local_4._0_1_ = 5;
  FUN_00583720();
  *(undefined ***)((int)param_1 + 0x42) = &PTR_FUN_007e3858;
  *(undefined ***)((int)param_1 + 0x4a) = &PTR_LAB_007e386c;
  param_1[0xc] = &PTR_FUN_007e36fc;
  *(undefined ***)((int)param_1 + 0x42) = &PTR_LAB_007e36e8;
  *(undefined ***)((int)param_1 + 0x4a) = &PTR_LAB_007e36e4;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined ***)((int)param_1 + 0x4e) = &PTR_LAB_007f74d4;
  local_4 = CONCAT31(local_4._1_3_,7);
  *param_1 = &PTR_FUN_007f74bc;
  param_1[2] = &PTR_LAB_007f74b8;
  *(undefined4 *)((int)param_1 + 0xe) = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  FUN_006d37e0();
  FUN_0040fd60(param_1,1000,0);
  FUN_0040fd60(param_1,0x898,4);
  FUN_0040fd60(param_1,0x9c4,2);
  FUN_00441f50();
  param_1[0x18] = 0;
  FUN_00584770();
  uVar1 = FUN_005842f0(s_gfx_interface_cursor_inactive_bm_0086cc64);
  param_1[0x20] = uVar1;
  uVar1 = FUN_005842f0(s_gfx_interface_cursor_active_bmp_008577f4);
  param_1[0x1f] = uVar1;
  ExceptionList = local_c;
  return param_1;
}


