// FUN_0043f070 @ 43f070 size=198

undefined4 * __thiscall
FUN_0043f070(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007baf3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414ed0(param_2,param_3,0x10);
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e469c;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined1 *)((int)param_1 + 0x8e) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_007e4654;
  param_1[2] = &PTR_LAB_007e4650;
  param_1[0x24] = 0;
  if (param_4 != 0) {
    pvVar1 = operator_new(0x7e);
    local_4._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00414c80(param_4);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    param_1[0x24] = uVar2;
    FUN_00415d30(*(undefined4 *)((int)param_1 + 0x62));
  }
  ExceptionList = local_c;
  return param_1;
}


