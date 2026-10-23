// FUN_005c1ab0 @ 5c1ab0 size=351

void __fastcall FUN_005c1ab0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007cc878;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ec720;
  param_1[2] = &PTR_LAB_007ec71c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x24])(1);
  }
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  iVar1 = param_1[0x23];
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
  }
  piVar2 = param_1 + 0x33;
  iStack_14 = 2;
  do {
    iVar1 = 4;
    piVar3 = piVar2;
    do {
      if ((undefined4 *)piVar3[-8] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[-8])(1);
      }
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
      }
      piVar3 = piVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    piVar2 = piVar2 + 1;
    iStack_14 = iStack_14 + -1;
  } while (iStack_14 != 0);
  if ((undefined4 *)param_1[0x3b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3b])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0xf2) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xf2))(1);
  }
  if ((undefined4 *)param_1[0x3e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3e])(1);
  }
  iVar1 = *(int *)((int)param_1 + 0xfe);
  if (iVar1 != 0) {
    FUN_0043fb30();
    FUN_00796cd8(iVar1);
  }
  if (*(undefined4 **)((int)param_1 + 0x10a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x10a))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x112) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x112))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x11a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x11a))(1);
  }
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


