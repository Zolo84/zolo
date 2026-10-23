// FUN_006a8570 @ 6a8570 size=111

void __fastcall FUN_006a8570(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5a88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f66cc;
  *(undefined ***)((int)param_1 + 10) = &PTR_FUN_007f66c4;
  *(undefined ***)((int)param_1 + 0xe) = &PTR_LAB_007f66b0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007f66ac;
  local_4 = 0;
  if ((undefined4 *)param_1[0x4f21] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4f21])(1);
  }
  local_4 = 0xffffffff;
  FUN_00444340();
  ExceptionList = pvStack_c;
  return;
}


