// FUN_006411a0 @ 6411a0 size=120

void __fastcall FUN_006411a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d2228;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007efdf0;
  param_1[2] = &PTR_LAB_007efdec;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007efde8;
  local_4 = 0;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2d])(1);
  }
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2e])(1);
  }
  local_4 = 0xffffffff;
  FUN_004338f0();
  ExceptionList = pvStack_c;
  return;
}


