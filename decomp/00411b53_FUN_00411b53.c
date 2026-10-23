// FUN_00411b53 @ 411b53 size=96

undefined4 * __fastcall FUN_00411b53(undefined4 *param_1)

{
  int local_8;
  
  FUN_00583720();
  *param_1 = &PTR_FUN_007e35c0;
  param_1[3] = 0;
  param_1[2] = 0;
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    param_1[local_8 + 5] = 0;
  }
  return param_1;
}


