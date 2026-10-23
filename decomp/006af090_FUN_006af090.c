// FUN_006af090 @ 6af090 size=136

void __fastcall FUN_006af090(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d5e4b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007f70f4;
  local_4 = 0;
  (*(code *)PTR_FUN_007f7114)(param_1[1]);
  param_1[1] = 0;
  (**(code **)(*(int *)((int)param_1 + 0x12) + 0x14))();
  *(undefined4 *)((int)param_1 + 10) = 0;
  puStack_8 = (undefined1 *)0xffffffff;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f70c4;
  iVar2 = *(int *)((int)param_1 + 0x16);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  ExceptionList = param_1;
  return;
}


