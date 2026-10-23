// FUN_007991d2 @ 7991d2 size=47

int * __thiscall FUN_007991d2(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (*param_1 != *param_2) {
    puVar1 = (undefined4 *)FUN_0074c240();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *param_1 = *param_2;
    FUN_0079723b();
  }
  return param_1;
}


