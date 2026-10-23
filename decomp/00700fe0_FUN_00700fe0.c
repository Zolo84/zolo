// FUN_00700fe0 @ 700fe0 size=51

bool __thiscall FUN_00700fe0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int local_4;
  
  local_4 = param_1;
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x1d4e4) + 0x28))(&local_4,7);
  if (*piVar1 != 0) {
    return false;
  }
  piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x1d4f6) + 0x28))
                            (&stack0xfffffff8,7,(short)((uint)param_2 >> 0x10));
  return *piVar1 != 0;
}


