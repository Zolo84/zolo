// FUN_005dbd30 @ 5dbd30 size=97

void __fastcall FUN_005dbd30(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cdc28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed040;
  param_1[2] = &PTR_LAB_007ed03c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  local_4 = 0xffffffff;
  FUN_005dd080();
  ExceptionList = pvStack_c;
  return;
}


