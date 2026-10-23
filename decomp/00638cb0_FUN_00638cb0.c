// FUN_00638cb0 @ 638cb0 size=127

undefined4 * __thiscall FUN_00638cb0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1cb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef930;
  param_1[2] = &PTR_LAB_007ef92c;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_FUN_007ef928;
  pvVar1 = operator_new(0x3e);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00592ba0();
  }
  param_1[0x2f] = uVar2;
  ExceptionList = local_c;
  return param_1;
}


