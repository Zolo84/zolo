// FUN_0040e880 @ 40e880 size=61

undefined4 * __thiscall FUN_0040e880(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_007e34f8;
  if (param_1[7] != 0) {
    FUN_00796cd8(param_1[7]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


