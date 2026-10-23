// FUN_00580d40 @ 580d40 size=125

void __fastcall FUN_00580d40(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c8d08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eae1c;
  local_4 = 0;
  (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3]);
  (**(code **)(*(int *)param_1[4] + 8))((int *)param_1[4]);
  piVar1 = (int *)param_1[5];
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*(int *)param_1[6] + 8))((int *)param_1[6]);
  (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
  CoUninitialize();
  FUN_00582020();
  ExceptionList = piVar1;
  return;
}


