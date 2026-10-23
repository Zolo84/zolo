// FUN_004bd9b0 @ 4bd9b0 size=34

void __thiscall FUN_004bd9b0(int *param_1,int param_2)

{
  if ((*(int *)((int)param_1 + 0x46) != 0) &&
     (*(int *)(*(int *)((int)param_1 + 0x46) + 0x22) <= *(int *)(param_2 + 0x22))) {
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_2);
  return;
}


