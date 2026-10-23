// FUN_004161c0 @ 4161c0 size=224

void __fastcall FUN_004161c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007b9c57;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e36fc;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e36e8;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007e36e4;
  local_4 = 1;
  piVar4 = (int *)param_1[1];
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  FUN_005837f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425b80();
  local_4 = 0xffffffff;
  *param_1 = &PTR_LAB_007e36b4;
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


