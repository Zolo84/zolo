// FUN_004eee30 @ 4eee30 size=183

undefined4 __thiscall FUN_004eee30(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int local_150 [81];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c01eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426f50(param_2);
  local_4 = 0;
  FUN_004271a0(local_150,4);
  pvVar1 = operator_new(local_150[0] * 4);
  *(void **)(param_1 + 4) = pvVar1;
  FUN_00427220(param_1 + 8,4,0x2d00);
  FUN_00427220(*(undefined4 *)(param_1 + 4),4,local_150[0]);
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_c;
  return 1;
}


