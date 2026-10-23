// FUN_006a9d10 @ 6a9d10 size=45

void __fastcall FUN_006a9d10(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0xf) = 1;
  (**(code **)(*param_1 + 0xb8))();
  if (*(int **)((int)param_1 + 0x12) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x12) + 0x120))(param_1);
    return;
  }
  (**(code **)(*param_1 + 0xbc))();
  return;
}


