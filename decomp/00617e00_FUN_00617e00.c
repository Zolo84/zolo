// FUN_00617e00 @ 617e00 size=439

void __fastcall FUN_00617e00(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d0a48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ef494;
  param_1[2] = &PTR_LAB_007ef490;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef48c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x48] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x48])(1);
  }
  if ((undefined4 *)param_1[0x44] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x44])(1);
  }
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x41])(1);
  }
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x33])(1);
  }
  if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x47])(1);
  }
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  piVar2 = param_1 + 0x35;
  iVar1 = 0xc;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((undefined4 *)param_1[0x45] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x45])(1);
  }
  if ((undefined4 *)param_1[0x46] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x46])(1);
  }
  if ((undefined4 *)param_1[0x43] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x43])(1);
  }
  piVar2 = param_1 + 0x5e;
  iVar1 = 10;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x31])(1);
  }
  if ((undefined4 *)param_1[0x34] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x34])(1);
  }
  piVar2 = param_1 + 0x50;
  iVar1 = 7;
  do {
    if ((undefined4 *)piVar2[-7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[-7])(1);
    }
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    if ((undefined4 *)piVar2[7] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[7])(1);
    }
    if ((undefined4 *)piVar2[0x18] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[0x18])(1);
    }
    if ((undefined4 *)piVar2[0x1f] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[0x1f])(1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((undefined4 *)param_1[0x76] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x76])(1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = pvStack_c;
  return;
}


