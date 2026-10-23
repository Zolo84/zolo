// FUN_006ed760 @ 6ed760 size=235

void __fastcall FUN_006ed760(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007da447;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7fdc;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f7fd8;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f800c;
  local_4 = 1;
  if (*(undefined4 **)((int)param_1 + 0x66) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x66))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x62) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x62))(1);
  }
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x5a));
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x52));
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x5e));
  FUN_007a77fa(*(undefined4 *)((int)param_1 + 0x56));
  local_4._0_1_ = 2;
  FUN_005837f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425b80();
  *param_1 = &PTR_LAB_007e3b70;
  iVar2 = param_1[1];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


