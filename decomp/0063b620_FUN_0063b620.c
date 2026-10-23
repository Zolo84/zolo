// FUN_0063b620 @ 63b620 size=207

void __fastcall FUN_0063b620(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d2028;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007efb64;
  param_1[2] = &PTR_LAB_007efb60;
  local_4 = 0;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x21])(1);
  }
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x33])(1);
  }
  if ((undefined4 *)param_1[0x23] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x23])(1);
  }
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
  }
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x24])(1);
  }
  piVar2 = param_1 + 0x2c;
  iVar1 = 7;
  do {
    if ((undefined4 *)piVar2[-7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[-7])(1);
    }
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


