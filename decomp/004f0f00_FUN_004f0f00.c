// FUN_004f0f00 @ 4f0f00 size=157

void __fastcall FUN_004f0f00(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c02b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e8338;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e8330;
  param_1[2] = &PTR_LAB_007e831c;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x16) != 0) {
    iVar1 = FUN_004e9370(*(int *)((int)param_1 + 0x16));
    (**(code **)(*(int *)(iVar1 + 0x1a) + 0x18))(param_1);
  }
  *param_1 = &PTR_FUN_007e82e8;
  param_1[2] = &PTR_LAB_007e8308;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e82e0;
  local_4 = 1;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


