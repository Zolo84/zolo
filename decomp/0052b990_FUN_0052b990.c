// FUN_0052b990 @ 52b990 size=213

undefined4 * __thiscall FUN_0052b990(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c22ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00519130(0x2c,7,2);
  local_4 = 0;
  param_1[0x27] = param_2;
  *param_1 = &PTR_FUN_007e8d18;
  param_1[2] = &PTR_LAB_007e8d14;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e8d10;
  pvVar1 = operator_new(0x94);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00416810(s_gfx_interface_hq_bmp_0084b45c);
  }
  local_4._0_1_ = 0;
  param_1[0x29] = uVar2;
  pvVar1 = operator_new(0x94);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00416810(s_gfx_interface_profsmall_bmp_0084b440);
  }
  param_1[0x28] = piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar3 + 0x34))(3);
  ExceptionList = param_1;
  return param_1;
}


