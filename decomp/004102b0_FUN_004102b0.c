// FUN_004102b0 @ 4102b0 size=62

undefined4 * __thiscall FUN_004102b0(undefined4 *param_1,undefined4 param_2)

{
  FUN_0058ed20(param_2);
  *(undefined1 *)(param_1 + 0x46) = (undefined1)param_2;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *param_1 = &PTR_FUN_007e3578;
  param_1[2] = &PTR_LAB_007e3574;
  return param_1;
}


