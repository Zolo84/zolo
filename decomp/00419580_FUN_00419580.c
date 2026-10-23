// FUN_00419580 @ 419580 size=65

undefined4 * __thiscall FUN_00419580(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  
  param_1[1] = param_2;
  *param_1 = 0;
  pvVar1 = operator_new(param_2 << 2);
  param_1[2] = pvVar1;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      uVar2 = uVar2 + 1;
      *(undefined4 *)(param_1[2] + -4 + uVar2 * 4) = 0;
    } while (uVar2 < (uint)param_1[1]);
  }
  return param_1;
}


