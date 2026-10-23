// FUN_00582a20 @ 582a20 size=182

void __fastcall FUN_00582a20(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c8e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_007eaeb4;
  local_4 = 0;
  WaitForSingleObjectEx(*(HANDLE *)((int)param_1 + 0x12),0xffffffff,0);
  puVar3 = (undefined4 *)param_1[1];
  while (puVar3 != (undefined4 *)0x0) {
    iVar1 = *param_1;
    puVar2 = (undefined4 *)puVar3[2];
    (**(code **)(iVar1 + 0x28))(&stack0xffffffdc,*puVar3);
    (**(code **)(iVar1 + 0x1c))();
    FUN_00796cd8();
    puVar3 = puVar2;
  }
  ReleaseMutex(*(HANDLE *)((int)param_1 + 0x12));
  CloseHandle(*(HANDLE *)((int)param_1 + 0x12));
  iVar1 = param_1[1];
  *param_1 = (int)&PTR_LAB_007eaee4;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_00796cd8();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = local_c;
  return;
}


