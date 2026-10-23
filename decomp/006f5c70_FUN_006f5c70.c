// FUN_006f5c70 @ 6f5c70 size=295

void __fastcall FUN_006f5c70(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007dac98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f827c;
  param_1[2] = &PTR_LAB_007f8278;
  local_4 = 0;
  piVar2 = (int *)((int)param_1 + 0x26);
  iVar1 = 4;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(undefined4 **)((int)param_1 + 0x16) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x16))(1);
  }
  piVar2 = (int *)((int)param_1 + 0x36);
  iVar1 = 7;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = *(int *)((int)param_1 + 0x52);
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  iVar1 = *(int *)((int)param_1 + 0x56);
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  iVar1 = param_1[0x5a];
  if (iVar1 != 0) {
    FUN_006fa1a0();
    FUN_00796cd8(iVar1);
  }
  iVar1 = param_1[0x5b];
  if (iVar1 != 0) {
    FUN_006fa740();
    FUN_00796cd8(iVar1);
  }
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5c])(1);
  }
  FUN_00796cd8(param_1[0x5d]);
  if (*(undefined4 **)((int)param_1 + 0x15a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x15a))(1);
  }
  local_4 = 0xffffffff;
  FUN_006ee460();
  ExceptionList = pvStack_c;
  return;
}


