// FUN_007442f0 @ 7442f0 size=51

void __fastcall FUN_007442f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_007fa1f0;
  if ((param_1[7] != 2) && (param_1[7] != 1)) {
    CloseHandle((HANDLE)param_1[6]);
  }
  *param_1 = &PTR_LAB_007fa1e8;
  DAT_00d4c340 = DAT_00d4c340 + -1;
  return;
}


