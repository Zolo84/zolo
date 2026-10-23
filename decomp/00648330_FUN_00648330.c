// FUN_00648330 @ 648330 size=180

void __fastcall FUN_00648330(int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d26f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_007f0438;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f0424;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f0420;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_LAB_007f041c;
  local_4 = 0;
  FUN_006d4290(*(undefined4 *)((int)param_1 + 0x72));
  if (*(undefined4 **)((int)param_1 + 0x72) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x72))(1);
  }
  piVar2 = (int *)param_1[1];
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  (**(code **)(*param_1 + 0x10))();
  local_4 = 0xffffffff;
  FUN_00434e10();
  ExceptionList = pvStack_c;
  return;
}


