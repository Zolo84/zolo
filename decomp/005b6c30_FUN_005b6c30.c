// FUN_005b6c30 @ 5b6c30 size=37

undefined4 * __fastcall FUN_005b6c30(undefined4 *param_1)

{
  void *pvVar1;
  
  param_1[1] = 0;
  param_1[2] = 0x100;
  param_1[3] = 0;
  pvVar1 = operator_new(0x400);
  *param_1 = pvVar1;
  return param_1;
}


