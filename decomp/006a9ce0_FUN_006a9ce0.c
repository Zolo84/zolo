// FUN_006a9ce0 @ 6a9ce0 size=33

void __fastcall FUN_006a9ce0(int *param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  (**(code **)(*param_1 + 0xb8))();
  if (*(int **)((int)param_1 + 0x12) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x12) + 0x11c))(param_1);
  }
  return;
}


