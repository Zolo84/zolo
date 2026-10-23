// FUN_00425ae0 @ 425ae0 size=51

undefined4 * __thiscall FUN_00425ae0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_007e3af0;
  FUN_00796cd8(param_1[1]);
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


