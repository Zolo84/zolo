// FUN_006d9bb0 @ 6d9bb0 size=225

void __fastcall FUN_006d9bb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007d96e7;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7ba0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f7b54;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f7b50;
  local_4 = 1;
  puVar4 = (undefined4 *)param_1[1];
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar4[2];
    FUN_00796cd8(*puVar4);
    FUN_00796cd8(puVar4);
    puVar4 = puVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  local_4._0_1_ = 2;
  FUN_005837f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425b80();
  *param_1 = &PTR_LAB_007e3b70;
  iVar3 = param_1[1];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


