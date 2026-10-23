// FUN_005e47f0 @ 5e47f0 size=256

void __fastcall FUN_005e47f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007ce1b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_007ed27c;
  param_1[2] = &PTR_LAB_007ed278;
  local_4 = 0;
  *(undefined4 *)(DAT_00d0ca90 + 0x13da4) = 0;
  iVar1 = param_1[0x19];
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
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1d])(1);
  }
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1e])(1);
  }
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1c])(1);
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  piVar2 = param_1 + 0x23;
  iVar1 = 4;
  do {
    if ((undefined4 *)piVar2[-4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[-4])(1);
    }
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
  }
  local_4 = 0xffffffff;
  FUN_00441ec0();
  ExceptionList = pvStack_c;
  return;
}


