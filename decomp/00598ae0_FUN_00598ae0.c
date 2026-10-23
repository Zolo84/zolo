// FUN_00598ae0 @ 598ae0 size=38

undefined4 * __thiscall FUN_00598ae0(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  
  param_1[2] = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  pvVar1 = operator_new(param_2 << 2);
  *param_1 = pvVar1;
  return param_1;
}


