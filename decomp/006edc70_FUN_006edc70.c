// FUN_006edc70 @ 6edc70 size=167

undefined4 * __thiscall FUN_006edc70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da473;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433570(param_2,0,0xffffffff);
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0xaa) = 0;
  param_1[0x2b] = param_3;
  *param_1 = &PTR_FUN_007f8060;
  param_1[2] = &PTR_LAB_007f805c;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007f8058;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00414c80(s_gfx_interface_prickar_bmp_0085ff0c);
  }
  param_1[0x2c] = piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar2 + 0x34))(5);
  ExceptionList = param_1;
  return param_1;
}


