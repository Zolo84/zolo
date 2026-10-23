// FUN_006f5530 @ 6f5530 size=182

undefined4 * __thiscall FUN_006f5530(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dac18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee230(param_2);
  *param_1 = &PTR_FUN_007f8258;
  param_1[2] = &PTR_LAB_007f8254;
  local_4 = 0;
  FUN_00583ac0(0x280,0x1e0,0x10,DAT_0088fae8 != 0);
  FUN_0042cab0();
  if (DAT_00bd0e18 != (undefined4 *)0x0) {
    (**(code **)*DAT_00bd0e18)(1);
    DAT_00bd0e18 = (undefined4 *)0x0;
  }
  FUN_00407e90(0);
  FUN_00583f10();
  FUN_00583f10();
  ExceptionList = pvStack_c;
  return param_1;
}


