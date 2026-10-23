// FUN_005f10e0 @ 5f10e0 size=184

void __fastcall FUN_005f10e0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cebb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed69c;
  param_1[2] = &PTR_LAB_007ed698;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed694;
  local_4 = 0;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x33])(1);
  }
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x32])(1);
  }
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x31])(1);
  }
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  if ((undefined4 *)param_1[0x34] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x34])(1);
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


