// FUN_004ef660 @ 4ef660 size=297

void __fastcall FUN_004ef660(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c0248;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e81dc;
  param_1[2] = &PTR_LAB_007e81d8;
  param_1[5] = &PTR_LAB_007e81c4;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_007e81bc;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007e818c;
  local_4 = 0;
  cVar1 = (**(code **)(*(int *)param_1[0xa5] + 8))();
  while (cVar1 == '\0') {
    if ((undefined4 *)**(int **)(param_1[0xa5] + 4) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)**(int **)(param_1[0xa5] + 4))(1);
    }
    cVar1 = (**(code **)(*(int *)param_1[0xa5] + 8))();
  }
  if (*(int *)((int)param_1 + 0x2a6) != 0) {
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x2a6) + 0x2ae) + 0x18))(param_1);
  }
  if ((undefined4 *)param_1[0xa5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xa5])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x29e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x29e))(1);
  }
  if (*(int *)((int)param_1 + 0x2a2) != 0) {
    iVar2 = FUN_0066ee70();
    if (iVar2 != 0) {
      FUN_004d1330(*(undefined4 *)((int)param_1 + 0x2a2));
    }
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x2a2) + 0x218))();
    if (iVar2 != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x2a2) + 0x218))();
      FUN_0066c200();
    }
    if (*(undefined4 **)((int)param_1 + 0x2a2) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x2a2))(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00519d80();
  ExceptionList = pvStack_c;
  return;
}


