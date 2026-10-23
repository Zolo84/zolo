// FUN_00575a00 @ 575a00 size=56

void __fastcall FUN_00575a00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_007ea73c;
  if (*(char *)((int)param_1 + 10) != '\0') {
    FUN_00796cd8(param_1[1]);
    *param_1 = &PTR_LAB_007e3ebc;
    return;
  }
  FUN_00796cd8(param_1[1]);
  *param_1 = &PTR_LAB_007e3ebc;
  return;
}


