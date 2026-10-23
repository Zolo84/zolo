// FUN_005b0900 @ 5b0900 size=163

void __fastcall FUN_005b0900(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007cb9d8;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e80e4;
  local_4 = 0;
  if (*(char *)((int)param_1 + 0x12) != '\0') {
    iVar1 = param_1[3];
    while (iVar1 != 0) {
      piVar2 = *(int **)param_1[1];
      (**(code **)(*piVar2 + 0x3c))();
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)();
      }
      FUN_004eeac0();
      iVar1 = param_1[3];
    }
  }
  iVar1 = param_1[1];
  *param_1 = &PTR_LAB_007e8b04;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_00796cd8();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


