// FUN_00639390 @ 639390 size=94

void __fastcall FUN_00639390(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d1d68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef9d0;
  param_1[2] = &PTR_LAB_007ef9cc;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x7e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x7e))(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


