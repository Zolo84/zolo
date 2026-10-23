// FUN_00698650 @ 698650 size=63

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00698650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  bool bVar1;
  
  bVar1 = _DAT_007e3380 <= param_4;
  param_1[1] = param_3;
  param_1[2] = param_2;
  *param_1 = &PTR_LAB_007f46c0;
  if (bVar1) {
    param_1[3] = param_4;
    return param_1;
  }
  param_1[3] = _DAT_007e3380;
  return param_1;
}


