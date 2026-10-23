// FUN_006e9690 @ 6e9690 size=338

void __fastcall FUN_006e9690(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007da237;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7f28;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f7f14;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f7f10;
  iVar1 = *(int *)((int)param_1 + 0x26);
  piVar4 = (int *)0x0;
  local_4 = 1;
  piVar5 = *(int **)(iVar1 + 4);
  while (piVar5 != (int *)0x0) {
    piVar4 = (int *)piVar5[2];
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    FUN_00796cd8(piVar5);
    piVar5 = piVar4;
  }
  *(int **)(iVar1 + 4) = piVar4;
  *(int **)(iVar1 + 8) = piVar4;
  *(int **)(iVar1 + 0xc) = piVar4;
  (**(code **)(**(int **)((int)param_1 + 0x26) + 0x14))();
  if (*(int **)((int)param_1 + 0x26) != piVar4) {
    (**(code **)**(int **)((int)param_1 + 0x26))(1);
  }
  if (*(int **)((int)param_1 + 0x1e) != piVar4) {
    (**(code **)**(int **)((int)param_1 + 0x1e))(1);
  }
  if (*(int **)((int)param_1 + 0x22) != piVar4) {
    (**(code **)**(int **)((int)param_1 + 0x22))(1);
  }
  if (*(int **)((int)param_1 + 0x2a) != piVar4) {
    (**(code **)**(int **)((int)param_1 + 0x2a))(1);
  }
  piVar5 = (int *)param_1[1];
  if ((int *)param_1[1] != piVar4) {
    do {
      puVar2 = (undefined4 *)*piVar5;
      piVar3 = (int *)piVar5[2];
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00796cd8(*puVar2);
        FUN_00796cd8(puVar2);
      }
      FUN_00796cd8(piVar5);
      piVar4 = (int *)0x0;
      piVar5 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  param_1[1] = piVar4;
  param_1[2] = piVar4;
  param_1[3] = piVar4;
  local_4._0_1_ = 2;
  FUN_005837f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425b80();
  *param_1 = &PTR_LAB_007f7f58;
  piVar5 = (int *)param_1[1];
  while (piVar5 != piVar4) {
    piVar3 = (int *)piVar5[2];
    FUN_00796cd8(piVar5);
    piVar5 = piVar3;
  }
  param_1[1] = piVar4;
  param_1[2] = piVar4;
  param_1[3] = piVar4;
  ExceptionList = pvStack_c;
  return;
}


