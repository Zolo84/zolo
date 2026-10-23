// FUN_006cefe0 @ 6cefe0 size=198

void __fastcall FUN_006cefe0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d9048;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7414;
  param_1[2] = &PTR_LAB_007f7410;
  param_1[3] = &PTR_LAB_007f740c;
  local_4 = 0;
  piVar2 = (int *)((int)param_1 + 0x56);
  iVar1 = 0x20;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(undefined4 **)((int)param_1 + 0x15a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x15a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x156) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x156))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x15e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x15e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x162) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x162))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x166) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x166))(1);
  }
  local_4 = 0xffffffff;
  FUN_00437fb0();
  ExceptionList = pvStack_c;
  return;
}


