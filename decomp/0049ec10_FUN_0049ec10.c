// FUN_0049ec10 @ 49ec10 size=280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049ec10(int *param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  char cVar2;
  
  switch(param_2) {
  case 0:
    fVar1 = param_3 + (float)param_1[0xe6d];
    if (param_3 + (float)param_1[0xe6d] < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0xe6d] = (int)fVar1;
    return;
  case 1:
    fVar1 = param_3 + (float)param_1[0xe6f];
    if (param_3 + (float)param_1[0xe6f] < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0xe6f] = (int)fVar1;
    return;
  case 2:
    fVar1 = param_3 + (float)param_1[0xe6e];
    if (param_3 + (float)param_1[0xe6e] < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0xe6e] = (int)fVar1;
    return;
  case 3:
    fVar1 = param_3 + (float)param_1[0xe70];
    if (param_3 + (float)param_1[0xe70] < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0xe70] = (int)fVar1;
    return;
  case 4:
    cVar2 = (**(code **)(*param_1 + 0x1c))();
    param_3 = param_3 + (float)param_1[0xe72];
    if ((cVar2 != '\0') && (param_3 < _DAT_007e3380)) {
      param_3 = _DAT_007e3380;
    }
    param_1[0xe72] = (int)param_3;
    return;
  case 5:
    fVar1 = param_3 + (float)param_1[0xe71];
    if (param_3 + (float)param_1[0xe71] < _DAT_007e3380) {
      fVar1 = _DAT_007e3380;
    }
    param_1[0xe71] = (int)fVar1;
  }
  return;
}


