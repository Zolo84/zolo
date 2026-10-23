// FUN_006a83b0 @ 6a83b0 size=156

undefined4 * __fastcall FUN_006a83b0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d5a73;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00445090();
  local_4 = 0;
  *param_1 = &PTR_FUN_007f66cc;
  *(undefined ***)((int)param_1 + 10) = &PTR_FUN_007f66c4;
  *(undefined ***)((int)param_1 + 0xe) = &PTR_LAB_007f66b0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007f66ac;
  *(undefined1 *)(param_1 + 0x4f22) = 0;
  *(undefined1 *)((int)param_1 + 0x13c89) = 0;
  pvVar1 = operator_new(0x2b8);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_0068f4e0(param_1);
  }
  param_1[0x4f21] = piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar2 + 0xc))();
  ExceptionList = pvStack_c;
  return param_1;
}


