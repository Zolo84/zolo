// FUN_00432c90 @ 432c90 size=56

undefined4 * __thiscall FUN_00432c90(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR_LAB_007e4078;
  pvVar1 = operator_new(param_2 * 4 + 4);
  param_1[1] = pvVar1;
  param_1[3] = param_2;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_007e40bc;
  return param_1;
}


