// FUN_00414ed0 @ 414ed0 size=323

int * __thiscall FUN_00414ed0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9afb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0088ebf8);
  local_4 = 0;
  FUN_00583720();
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  local_4 = 1;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *param_1 = (int)&PTR_FUN_007e3658;
  param_1[2] = (int)&PTR_LAB_007e3654;
  *(undefined4 *)((int)param_1 + 0x7a) = 0x20;
  puVar1 = operator_new(0x362);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004010a0(param_2,param_3,param_4,1);
    *(undefined4 *)((int)puVar1 + 0x35e) = 1;
    *puVar1 = &PTR_FUN_007e36a4;
    puVar1[10] = &PTR_LAB_007e36a0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 **)((int)param_1 + 0x62) = puVar1;
  *(undefined4 *)((int)param_1 + 0x26) = 0x1e;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  uVar2 = FUN_005841b0();
  uVar3 = FUN_005841a0();
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = uVar3;
  *(undefined4 *)((int)param_1 + 0x4a) = uVar2;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = DAT_00bd1bac;
  DAT_0088ebf4 = DAT_0088ebf4 + 1;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  (**(code **)(*param_1 + 0x18))(0,0);
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  (**(code **)(*param_1 + 0x34))(1);
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  FUN_00407da0();
  ExceptionList = unaff_EBX;
  return param_1;
}


