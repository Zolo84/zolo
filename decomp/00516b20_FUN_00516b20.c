// FUN_00516b20 @ 516b20 size=338

void __fastcall FUN_00516b20(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c1cb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e8838;
  param_1[2] = &PTR_LAB_007e8834;
  param_1[5] = &PTR_LAB_007e8820;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_007e8818;
  *(undefined ***)((int)param_1 + 0x22) = &PTR_LAB_007e87e8;
  local_4 = 0;
  if (*(int *)(DAT_00ab27b4 + 0x46a + param_1[3] * 0x4b2) != 0) {
    FUN_004e2d80(param_1);
  }
  cVar4 = (**(code **)(**(int **)((int)param_1 + 0x2aa) + 8))();
  while (cVar4 == '\0') {
    iVar1 = **(int **)(*(int *)((int)param_1 + 0x2aa) + 4);
    iVar2 = *(int *)(iVar1 + 0x248);
    if (iVar2 != param_1[0x92]) {
      (**(code **)(*(int *)(iVar2 + 0x4504) + 0x18))(iVar1);
    }
    puVar3 = (undefined4 *)**(int **)(*(int *)((int)param_1 + 0x2aa) + 4);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    cVar4 = (**(code **)(**(int **)((int)param_1 + 0x2aa) + 8))();
  }
  if (*(undefined4 **)((int)param_1 + 0x2aa) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2aa))(1);
  }
  cVar4 = (**(code **)(**(int **)((int)param_1 + 0x2ae) + 8))();
  while (cVar4 == '\0') {
    puVar3 = (undefined4 *)**(int **)(*(int *)((int)param_1 + 0x2ae) + 4);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    cVar4 = (**(code **)(**(int **)((int)param_1 + 0x2ae) + 8))();
  }
  if (*(undefined4 **)((int)param_1 + 0x2ae) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2ae))(1);
  }
  local_4 = 0xffffffff;
  FUN_00519d80();
  ExceptionList = pvStack_c;
  return;
}


