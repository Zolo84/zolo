// FUN_0061e410 @ 61e410 size=200

void __fastcall FUN_0061e410(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d0da8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef514;
  param_1[2] = &PTR_LAB_007ef510;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_FUN_007ef50c;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x8a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8a))(1);
  }
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28])(1);
  }
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x27])(1);
  }
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
  }
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x86) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x86))(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


