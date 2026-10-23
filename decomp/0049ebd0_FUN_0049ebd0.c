// FUN_0049ebd0 @ 49ebd0 size=53

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049ebd0(int *param_1,float param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  param_2 = param_2 + (float)param_1[0xe72];
  if ((cVar1 != '\0') && (param_2 < _DAT_007e3380)) {
    param_2 = _DAT_007e3380;
  }
  param_1[0xe72] = (int)param_2;
  return;
}


