// FUN_006081f0 @ 6081f0 size=152

void __fastcall FUN_006081f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007cfe78;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_007ed740;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007ed72c;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007ed728;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_LAB_007ed724;
  local_4 = 0;
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


