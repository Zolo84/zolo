// FUN_00608040 @ 608040 size=237

void __fastcall FUN_00608040(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007cfe57;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_007ef008;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007eefb8;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007eefbc;
  local_4 = 1;
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x11])(1);
  }
  puVar3 = (undefined4 *)param_1[1];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    puVar3 = puVar1;
  }
  (**(code **)(*param_1 + 0x10))();
  FUN_00796cd8(param_1[0x13]);
  local_4._0_1_ = 2;
  FUN_005837f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425b80();
  local_4 = 0xffffffff;
  *param_1 = (int)&PTR_LAB_007e3b70;
  iVar4 = param_1[1];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


