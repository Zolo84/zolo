// FUN_0065ee30 @ 65ee30 size=176

undefined4 * __fastcall FUN_0065ee30(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d376b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_007f0b5c;
  puVar1 = (undefined4 *)((int)param_1 + 0x12);
  local_4 = 0;
  FUN_00425a80(&DAT_0082eeb0);
  local_4._0_1_ = 1;
  FUN_00583720();
  *puVar1 = &PTR_FUN_007e3858;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007e386c;
  *param_1 = &PTR_FUN_007f0b2c;
  *puVar1 = &PTR_LAB_007f0b18;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f0b14;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0040fd60(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1,3000,0);
  ExceptionList = local_c;
  return param_1;
}


