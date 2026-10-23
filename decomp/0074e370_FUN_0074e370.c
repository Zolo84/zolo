// FUN_0074e370 @ 74e370 size=745

void __fastcall FUN_0074e370(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007df9b5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007fa238;
  param_1[2] = &PTR_LAB_007fa234;
  iVar2 = param_1[0x1b];
  local_4 = 10;
  if (iVar2 != 0) {
    FUN_006ffab0();
    FUN_00796cd8(iVar2);
  }
  piVar3 = param_1 + 0x1c;
  iVar2 = 3;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((undefined4 *)param_1[0x5a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5a])(1);
  }
  if ((undefined4 *)param_1[0x5b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5b])(1);
  }
  (*(code *)**(undefined4 **)((int)param_1 + 0xaa))();
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5c])(1);
  }
  (**(code **)(*(int *)((int)param_1 + 0xaa) + 4))();
  if ((undefined4 *)param_1[0x5d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5d])(1);
  }
  if ((undefined4 *)param_1[0x5e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5e])(1);
  }
  if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5f])(1);
  }
  (**(code **)param_1[0x23])();
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x22])(1);
    param_1[0x22] = 0;
  }
  (**(code **)(param_1[0x23] + 4))();
  WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x18e),3000);
  CloseHandle(*(HANDLE *)((int)param_1 + 0x18e));
  WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x196),3000);
  WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x186),3000);
  CloseHandle(*(HANDLE *)((int)param_1 + 0x186));
  local_4 = 10;
  FUN_00757750();
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_00674910(1);
  iVar2 = param_1[0x52];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_0074af70();
  *(undefined ***)((int)param_1 + 0xaa) = &PTR_LAB_007fa258;
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xae));
  param_1[0x23] = &PTR_LAB_007fa258;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  iVar2 = *(int *)((int)param_1 + 0x5a);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  iVar2 = *(int *)((int)param_1 + 0x4a);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  iVar2 = *(int *)((int)param_1 + 0x3a);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  iVar2 = *(int *)((int)param_1 + 0x2a);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  iVar2 = *(int *)((int)param_1 + 0x1a);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  local_4 = 0xffffffff;
  FUN_006ee460();
  ExceptionList = pvStack_c;
  return;
}


