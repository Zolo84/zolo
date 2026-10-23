// FUN_00426d20 @ 426d20 size=68

undefined4 * __thiscall FUN_00426d20(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_007e3ba0;
  if (param_1[0x1b] != 0) {
    FUN_007a6429(param_1[0x1b]);
  }
  DAT_0088f21c = DAT_0088f21c + 1;
  FUN_00791646(DAT_0088f21c);
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


