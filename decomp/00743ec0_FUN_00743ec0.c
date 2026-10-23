// FUN_00743ec0 @ 743ec0 size=51

void __fastcall FUN_00743ec0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_007fa1e0;
  if ((param_1[7] != 2) && (param_1[7] != 1)) {
    CloseHandle((HANDLE)param_1[6]);
  }
  *param_1 = &PTR_LAB_007fa1e8;
  DAT_00d4c340 = DAT_00d4c340 + -1;
  return;
}


