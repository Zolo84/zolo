// FUN_00711c60 @ 711c60 size=765

void FUN_00711c60(void)

{
  char cVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int extraout_ECX;
  int iVar7;
  void *in_stack_000020f0;
  int in_stack_00002100;
  undefined1 *puVar8;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  void *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_007dbd2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a69e0();
  *(undefined1 *)(extraout_ECX + 0x1234) = 0;
  uStack_20 = 0x1c96;
  uStack_1e = 0x71;
  puVar2 = (undefined2 *)FUN_0044df10();
  local_24 = *puVar2;
  local_8 = (undefined1 *)&local_24;
  local_22 = (undefined2)*(undefined4 *)(puVar2 + 1);
  uStack_20 = (undefined2)((uint)*(undefined4 *)(puVar2 + 1) >> 0x10);
  piVar3 = (int *)FUN_00498640();
  piVar3 = (int *)(**(code **)(*piVar3 + 0x28))();
  if (*piVar3 != 0) {
    ExceptionList = in_stack_000020f0;
    return;
  }
  if (*(char *)(extraout_ECX + 0x1237) == '\0') {
    if ((*(char *)(extraout_ECX + 0x1236) == '\0') && (*(char *)(extraout_ECX + 0x1238) == '\0')) {
      FUN_00700e60();
      *(undefined1 *)(extraout_ECX + 0x1235) = 1;
    }
  }
  else {
    FUN_0044df10();
    FUN_00700e50();
    FUN_004739f0();
  }
  iVar7 = *(int *)(extraout_ECX + 0x1272);
  while( true ) {
    if (iVar7 == 0) {
      ExceptionList = in_stack_000020f0;
      return;
    }
    cVar1 = FUN_007119e0();
    if (cVar1 != '\0') break;
    iVar7 = *(int *)(iVar7 + 8);
  }
  piVar3 = *(int **)(extraout_ECX + 0x1272);
  iVar7 = 0;
  if (piVar3 == (int *)0x0) {
    ExceptionList = in_stack_000020f0;
    return;
  }
  while (iVar7 != in_stack_00002100) {
    piVar3 = (int *)piVar3[2];
    iVar7 = iVar7 + 1;
    if (piVar3 == (int *)0x0) {
      ExceptionList = in_stack_000020f0;
      return;
    }
  }
  if (*piVar3 == 0) {
    ExceptionList = in_stack_000020f0;
    return;
  }
  if ((((*(char *)(extraout_ECX + 0x126c) == '\0') && (*(char *)(extraout_ECX + 0x1238) == '\0')) &&
      (*(int *)(extraout_ECX + 0x24) != DAT_00d0ca90)) &&
     ((*(int *)(extraout_ECX + 0x1256) != 0 ||
      (iVar7 = (**(code **)(*(int *)(extraout_ECX + 0x23ac) + 4))(), 0 < iVar7)))) {
    iVar7 = (**(code **)(*(int *)(extraout_ECX + 0x126e) + 4))();
    uVar5 = *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 6);
    piVar3 = (int *)(*(int *)(extraout_ECX + 0x24) + 0xe);
    if (iVar7 < 2) {
      (**(code **)(*piVar3 + 0xc))();
      FUN_006ea3b0(1,uVar5,&DAT_0088ebf8);
    }
    else {
      uVar4 = (**(code **)(*piVar3 + 0xc))();
      FUN_006ea5c0(2,uVar5,&DAT_0088ebf8,uVar4);
    }
  }
  else if (*(int *)(extraout_ECX + 0x24) == DAT_00d0ca90) {
    FUN_0079168d();
    iVar7 = (**(code **)(*(int *)(extraout_ECX + 0x126e) + 4))();
    if (iVar7 < 2) {
      uVar5 = FUN_0042b6c9(s_EVENT_SIMPLE_008729a8);
      FUN_007a630a(&stack0x000000f0,uVar5);
    }
    else {
      puVar8 = &stack0xfffffff0;
      uVar5 = FUN_0042b6c9(s_EVENT_SELECTION_008729b8);
      FUN_007a630a(&stack0x000000f0,uVar5,puVar8);
    }
    pvVar6 = operator_new(0x16);
    if (pvVar6 != (void *)0x0) {
      FUN_006e9330();
    }
    FUN_006e97f0();
  }
  cVar1 = FUN_0042e980();
  if (cVar1 == '\0') {
    ExceptionList = in_stack_000020f0;
    return;
  }
  if ((-1 < *(int *)(extraout_ECX + 0x122c)) && (*(int *)(extraout_ECX + 0x122c) < DAT_00877690)) {
    FUN_004e9370();
  }
  FUN_00713790(*(undefined4 *)(extraout_ECX + 0x24));
  ExceptionList = in_stack_000020f0;
  return;
}


