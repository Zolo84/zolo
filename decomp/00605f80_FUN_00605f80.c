// FUN_00605f80 @ 605f80 size=159

void __fastcall FUN_00605f80(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cfc68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eee34;
  param_1[2] = &PTR_LAB_007eee30;
  local_4 = 0;
  if (*(undefined4 **)((int)param_1 + 0x15a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x15a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x15e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x15e))(1);
  }
  piVar2 = (int *)((int)param_1 + 0x17a);
  iVar1 = 6;
  do {
    if ((undefined4 *)piVar2[-6] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[-6])(1);
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


