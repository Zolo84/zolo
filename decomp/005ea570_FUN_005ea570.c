// FUN_005ea570 @ 5ea570 size=137

void __fastcall FUN_005ea570(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007ce728;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed47c;
  param_1[2] = &PTR_LAB_007ed478;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed474;
  local_4 = 0;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x35])(1);
  }
  piVar2 = param_1 + 0x30;
  iVar1 = 5;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


