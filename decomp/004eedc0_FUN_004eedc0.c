// FUN_004eedc0 @ 4eedc0 size=51

undefined4 * __thiscall FUN_004eedc0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_007e8188;
  param_1[1] = 0;
  FUN_004eee30(param_2);
  pvVar1 = operator_new(0x100000);
  param_1[0x2d02] = pvVar1;
  return param_1;
}


