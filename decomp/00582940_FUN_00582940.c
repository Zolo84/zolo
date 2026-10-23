// FUN_00582940 @ 582940 size=43

void __thiscall FUN_00582940(int *param_1,undefined4 param_2)

{
  WaitForSingleObjectEx(*(HANDLE *)((int)param_1 + 0x12),0xffffffff,0);
  (**(code **)(*param_1 + 0x18))(param_2);
  ReleaseMutex(*(HANDLE *)((int)param_1 + 0x12));
  return;
}


