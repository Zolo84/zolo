// FUN_0040f530 @ 40f530 size=56

undefined4 * __thiscall FUN_0040f530(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_007e3508;
  if (param_1[1] == 1) {
    FreeLibrary((HMODULE)param_1[2]);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


