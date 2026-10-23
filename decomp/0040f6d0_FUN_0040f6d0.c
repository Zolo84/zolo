// FUN_0040f6d0 @ 40f6d0 size=28

void __fastcall FUN_0040f6d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    FreeLibrary(*(HMODULE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


