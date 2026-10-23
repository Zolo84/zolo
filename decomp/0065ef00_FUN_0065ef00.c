// FUN_0065ef00 @ 65ef00 size=241

void __fastcall FUN_0065ef00(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d37b7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f0b2c;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f0b14;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f0b18;
  local_4 = 1;
  FUN_0040fe60();
  piVar4 = (int *)param_1[1];
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    puVar2 = (undefined4 *)*piVar4;
    FUN_0065f920();
    piVar4 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  FUN_005837f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425b80();
  iVar3 = param_1[1];
  *param_1 = &PTR_LAB_007f0b5c;
  while (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8);
    FUN_00796cd8();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


