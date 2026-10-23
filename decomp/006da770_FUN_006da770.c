// FUN_006da770 @ 6da770 size=233

void __fastcall FUN_006da770(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007d97b7;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7c20;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f7bd4;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f7bd0;
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
  local_4 = 0xffffffff;
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


