// FUN_00639940 @ 639940 size=265

void __fastcall FUN_00639940(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007d1e3b;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007efa24;
  param_1[2] = &PTR_LAB_007efa20;
  local_4 = 1;
  piVar4 = *(int **)((int)param_1 + 0x4a);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar1;
  }
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  if (*(undefined4 **)((int)param_1 + 0x3a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x3a))(1);
  }
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x3e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x3e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x42) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x42))(1);
  }
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  *(undefined ***)((int)param_1 + 0x46) = &PTR_LAB_007ef278;
  iVar3 = *(int *)((int)param_1 + 0x4a);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  local_4 = 2;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


