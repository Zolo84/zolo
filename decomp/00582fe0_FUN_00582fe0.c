// FUN_00582fe0 @ 582fe0 size=163

void __fastcall FUN_00582fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007c8f0e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eaf14;
  local_4 = 1;
  local_14 = 5;
  piVar3 = param_1 + 8;
  do {
    puVar2 = (undefined4 *)piVar3[1];
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      FUN_007a77fa(*puVar2);
      puVar2 = puVar1;
    }
    (**(code **)(*piVar3 + 0x14))();
    piVar3 = (int *)((int)piVar3 + 0x12);
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_4 = local_4 & 0xffffff00;
  FUN_007a8882(param_1 + 8,0x12,5,FUN_00583610);
  local_4 = 0xffffffff;
  FUN_00580d40();
  ExceptionList = pvStack_c;
  return;
}


