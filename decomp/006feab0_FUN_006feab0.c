// FUN_006feab0 @ 6feab0 size=174

void __fastcall FUN_006feab0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007db5b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f8500;
  param_1[2] = &PTR_LAB_007f84fc;
  local_4 = 0;
  FUN_00796cd8(param_1[3]);
  if (*(undefined4 **)((int)param_1 + 0x26) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x26))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x2a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2a))(1);
  }
  FUN_00796cd8(param_1[4]);
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x2e));
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x32));
  local_4 = 1;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


