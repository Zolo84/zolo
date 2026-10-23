// FUN_00434e10 @ 434e10 size=289

void __fastcall FUN_00434e10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007ba847;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_LAB_007e4240;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e422c;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007e4228;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_LAB_007e4224;
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
  (**(code **)(*param_1 + 0x10))();
  if (*(undefined4 **)((int)param_1 + 0x42) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x42))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x46) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x46))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x4a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x4a))(1);
  }
  FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x52));
  local_4._0_1_ = 2;
  FUN_005837f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00425b80();
  local_4 = 0xffffffff;
  *param_1 = (int)&PTR_LAB_007e4284;
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


