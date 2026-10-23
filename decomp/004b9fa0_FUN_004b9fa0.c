// FUN_004b9fa0 @ 4b9fa0 size=50

void __fastcall FUN_004b9fa0(int param_1)

{
  if (*(char *)(param_1 + 99) == '\0') {
    *(undefined1 *)(param_1 + 99) = 1;
    (**(code **)(**(int **)(param_1 + 0x80) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x84) + 0x40))();
    FUN_004b2880(param_1);
  }
  return;
}


