// FUN_00570f60 @ 570f60 size=56

void __fastcall FUN_00570f60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_007eaa3c;
  if (*(char *)((int)param_1 + 10) != '\0') {
    FUN_00796cd8(param_1[1]);
    *param_1 = &PTR_LAB_007e3ebc;
    return;
  }
  FUN_00796cd8(param_1[1]);
  *param_1 = &PTR_LAB_007e3ebc;
  return;
}


