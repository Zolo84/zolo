// FUN_005cbd10 @ 5cbd10 size=104

void __fastcall FUN_005cbd10(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cd288;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eca0c;
  param_1[2] = &PTR_LAB_007eca08;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007eca04;
  local_4 = 0;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


