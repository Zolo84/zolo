// FUN_0061ed40 @ 61ed40 size=159

undefined4 * __thiscall FUN_0061ed40(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0e53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *param_1 = &PTR_FUN_007ef598;
  param_1[2] = &PTR_LAB_007ef594;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x18);
  local_4 = 0;
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  pvVar1 = operator_new(0x98);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005c79d0(param_2,0);
  }
  param_1[0xf] = uVar2;
  param_1[0x10] = 0;
  ExceptionList = local_c;
  return param_1;
}


