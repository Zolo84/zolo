// FUN_006ae8c0 @ 6ae8c0 size=182

void __fastcall FUN_006ae8c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5e03;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f7128;
  param_1[9] = &PTR_FUN_007f7120;
  local_4 = 0;
  (*(code *)PTR_FUN_007f714c)(param_1[1]);
  param_1[1] = 0;
  (**(code **)(*(int *)((int)param_1 + 0x12) + 0x14))();
  *(undefined4 *)((int)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_007f70f4;
  puStack_8 = (undefined1 *)0x1;
  (*(code *)PTR_FUN_007f7114)(param_1[1]);
  param_1[1] = 0;
  (**(code **)(*(int *)((int)param_1 + 0x12) + 0x14))();
  *(undefined4 *)((int)param_1 + 10) = 0;
  pvStack_c = (void *)0xffffffff;
  *(int *)((int)param_1 + 0x12) = (int)&PTR_LAB_007f70c4;
  iVar2 = *(int *)((int)param_1 + 0x16);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  ExceptionList = unaff_EBX;
  return;
}


