// FUN_00582900 @ 582900 size=57

void __thiscall FUN_00582900(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  WaitForSingleObjectEx(*(HANDLE *)((int)param_1 + 0x12),0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x24))(param_2);
  if (cVar1 == '\0') {
    FUN_00582ca0(param_2);
  }
  ReleaseMutex(*(HANDLE *)((int)param_1 + 0x12));
  return;
}


