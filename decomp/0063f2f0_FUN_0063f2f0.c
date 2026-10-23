// FUN_0063f2f0 @ 63f2f0 size=393

void __fastcall FUN_0063f2f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d2118;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007efd00;
  param_1[2] = &PTR_LAB_007efcfc;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007efcf8;
  local_4 = 0;
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x32])(1);
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x31])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x116) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x116))(1);
  }
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x33])(1);
  }
  if ((undefined4 *)param_1[0x3d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3d])(1);
  }
  piVar2 = param_1 + 0x34;
  iVar1 = 9;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(undefined4 **)((int)param_1 + 0x102) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x102))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x106) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x106))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x10a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x10a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x10e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x10e))(1);
  }
  if ((undefined4 *)param_1[0x3e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3e])(1);
  }
  if ((undefined4 *)param_1[0x3f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3f])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x112) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x112))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x11a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x11a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x11e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x11e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x122) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x122))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x126) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x126))(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


