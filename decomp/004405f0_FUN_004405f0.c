// FUN_004405f0 @ 4405f0 size=168

void __fastcall FUN_004405f0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bb038;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e4834;
  param_1[2] = &PTR_LAB_007e4830;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e482c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x21])(1);
  }
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  if ((undefined4 *)param_1[0x23] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x23])(1);
  }
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x24])(1);
  }
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


