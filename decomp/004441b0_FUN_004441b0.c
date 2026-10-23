// FUN_004441b0 @ 4441b0 size=152

undefined4 * __thiscall FUN_004441b0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bb423;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_007e38f8;
  local_4 = 0;
  pvVar1 = operator_new(0x14);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_0053e740(param_2);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      goto LAB_00444219;
    }
  }
  iVar2 = 0;
LAB_00444219:
  param_1[3] = iVar2;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  param_1[4] = param_3;
  *param_1 = &PTR_FUN_007e3878;
  ExceptionList = local_c;
  return param_1;
}


