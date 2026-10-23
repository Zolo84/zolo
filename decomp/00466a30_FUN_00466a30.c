// FUN_00466a30 @ 466a30 size=56

void __fastcall FUN_00466a30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_007e6260;
  if (*(char *)((int)param_1 + 10) != '\0') {
    FUN_00796cd8(param_1[1]);
    *param_1 = &PTR_LAB_007e3ebc;
    return;
  }
  FUN_00796cd8(param_1[1]);
  *param_1 = &PTR_LAB_007e3ebc;
  return;
}


