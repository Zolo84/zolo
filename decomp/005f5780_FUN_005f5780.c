// FUN_005f5780 @ 5f5780 size=185

void __fastcall FUN_005f5780(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007cef16;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed92c;
  param_1[2] = &PTR_LAB_007ed928;
  local_4 = 1;
  piVar2 = *(int **)((int)param_1 + 0x92);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00796cd8(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  if (*(undefined4 **)((int)param_1 + 0x7e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x7e))(1);
  }
  if (*(undefined4 **)((int)param_1 + 0x82) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x82))(1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00434e10();
  local_4 = 0xffffffff;
  FUN_00415250();
  ExceptionList = pvStack_c;
  return;
}


