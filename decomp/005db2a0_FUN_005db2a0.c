// FUN_005db2a0 @ 5db2a0 size=104

void __fastcall FUN_005db2a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cdb48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ecfc4;
  param_1[2] = &PTR_LAB_007ecfc0;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ecfbc;
  local_4 = 0;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


