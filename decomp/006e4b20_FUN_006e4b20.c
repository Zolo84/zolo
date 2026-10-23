// FUN_006e4b20 @ 6e4b20 size=158

void __fastcall FUN_006e4b20(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007da0a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7ed8;
  param_1[2] = &PTR_LAB_007f7ed4;
  iVar1 = param_1[0x16];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  local_4 = 0xffffffff;
  FUN_00441ec0();
  ExceptionList = pvStack_c;
  return;
}


