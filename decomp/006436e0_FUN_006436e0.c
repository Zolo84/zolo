// FUN_006436e0 @ 6436e0 size=216

undefined4 * __thiscall FUN_006436e0(undefined4 *param_1,undefined4 param_2)

{
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2434;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0043abd0();
  *(undefined4 *)((int)param_1 + 0x1aa) = 0;
  *(undefined4 *)((int)param_1 + 0x3c2) = 0;
  *(undefined4 *)((int)param_1 + 0x3c6) = 0;
  *(undefined4 *)((int)param_1 + 0x3ca) = 0;
  *(undefined1 *)((int)param_1 + 0x3ce) = 0;
  *(undefined ***)((int)param_1 + 0x3be) = &PTR_LAB_007e378c;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00415020();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)param_1 + 0x44e) = param_2;
  *param_1 = &PTR_FUN_007f011c;
  param_1[2] = &PTR_LAB_007f0118;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007f0114;
  (*(code *)PTR_FUN_007f0134)(0xfffffc18,0xfffffc18);
  (**(code **)(param_1[0xf4] + 0x18))(0xfffffc18,0xfffffc18);
  *(undefined1 *)((int)param_1 + 0x452) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  FUN_006d4370(param_1);
  ExceptionList = unaff_EDI;
  return param_1;
}


