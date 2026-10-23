// FUN_006e25b0 @ 6e25b0 size=113

void __fastcall FUN_006e25b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d9e78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7de8;
  param_1[2] = &PTR_LAB_007f7de4;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x8e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x92) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x92))(1);
  }
  local_4 = 0xffffffff;
  FUN_0043ec00();
  ExceptionList = pvStack_c;
  return;
}


