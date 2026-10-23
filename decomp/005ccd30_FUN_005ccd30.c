// FUN_005ccd30 @ 5ccd30 size=409

void __fastcall FUN_005ccd30(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cd438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ecae0;
  param_1[2] = &PTR_LAB_007ecadc;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ecad8;
  local_4 = 0;
  piVar2 = (int *)((int)param_1 + 0xc26);
  iVar1 = 5;
  do {
    if ((undefined4 *)piVar2[-0x2cc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[-0x2cc])(1);
    }
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(undefined4 **)((int)param_1 + 0xe6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xe6))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x10a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x10a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xea) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xea))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xf2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xf2))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x10e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x10e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xee) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xee))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xe2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xe2))(1);
  }
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x33])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xde) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xde))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xd6) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xd6))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xda) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xda))(1);
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x31])(1);
  }
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x32])(1);
  }
  if ((undefined4 *)param_1[0x45] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x45])(1);
  }
  if ((undefined4 *)param_1[0x311] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x311])(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


