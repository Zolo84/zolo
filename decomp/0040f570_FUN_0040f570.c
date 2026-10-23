// FUN_0040f570 @ 40f570 size=36

void __fastcall FUN_0040f570(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_007e3508;
  if (param_1[1] == 1) {
    FreeLibrary((HMODULE)param_1[2]);
    param_1[1] = 0;
  }
  return;
}


