// FUN_006d3690 @ 6d3690 size=328

void __fastcall FUN_006d3690(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d9291;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f74bc;
  param_1[2] = &PTR_LAB_007f74b8;
  local_4 = 3;
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  FUN_00584770();
  FUN_0040fe60(param_1);
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1c])(1);
  }
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1d])(1);
  }
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1e])(1);
  }
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  iVar1 = param_1[0x1a];
  if (iVar1 != 0) {
    FUN_006d30f0();
    FUN_00796cd8(iVar1);
  }
  piVar5 = *(int **)((int)param_1 + 0x16);
  while (piVar5 != (int *)0x0) {
    piVar2 = (int *)piVar5[2];
    puVar3 = (undefined4 *)*piVar5;
    piVar5 = piVar2;
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  (**(code **)(*(int *)((int)param_1 + 0x12) + 0x14))();
  *(undefined ***)((int)param_1 + 0x4e) = &PTR_LAB_007f74d4;
  iVar1 = *(int *)((int)param_1 + 0x52);
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    FUN_00796cd8(iVar1);
    iVar1 = iVar4;
  }
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  FUN_004161c0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004161c0();
  local_4 = 4;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


