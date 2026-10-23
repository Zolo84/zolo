// FUN_004d1b30 @ 4d1b30 size=288

undefined4 * __thiscall
FUN_004d1b30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined1 param_9)

{
  undefined2 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf4c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = param_4;
  local_4._0_1_ = 1;
  *(undefined2 *)((int)param_1 + 0x2e) = param_5;
  FUN_00519130(0x2c,7,2);
  local_4._0_1_ = 2;
  param_1[0x33] = param_7;
  param_1[0x34] = param_6;
  *param_1 = &PTR_FUN_007e7e90;
  param_1[2] = &PTR_LAB_007e7e7c;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e7e74;
  *(undefined1 *)((int)param_1 + 0x1a) = param_9;
  pvVar3 = operator_new(0x30);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00417900();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)param_1 + 0x16) = uVar4;
  FUN_00418140(param_2);
  if (param_8 != 0) {
    FUN_004182e0(param_8);
  }
  param_1[7] = param_3;
  iVar2 = DAT_00893530;
  param_1[9] = *(undefined4 *)(DAT_00893530 + 0x14);
  uVar1 = *(undefined2 *)(iVar2 + 0x18);
  param_1[8] = 0xffffffff;
  *(undefined2 *)(param_1 + 10) = uVar1;
  ExceptionList = local_c;
  return param_1;
}


