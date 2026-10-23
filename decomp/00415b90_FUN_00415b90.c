// FUN_00415b90 @ 415b90 size=53

void __thiscall FUN_00415b90(int *param_1,int param_2)

{
  *(int *)((int)param_1 + 0x4e) = param_2;
  if (*(int *)((int)param_1 + 0x62) != 0) {
    *(int *)((int)param_1 + 0x56) = *(int *)(*(int *)((int)param_1 + 0x62) + 4) / param_2;
    (**(code **)(*param_1 + 0x38))(0);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  (**(code **)(*param_1 + 0x38))(0);
  return;
}


