// FUN_006a37f0 @ 6a37f0 size=172

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a37f0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  float10 fVar3;
  
  FUN_006a2900();
  bVar1 = _DAT_007e68dc <= (float)param_1[0x11];
  param_1[0x23] = param_2;
  if (bVar1) {
    if ((*(int *)(param_2 + 0x254) != 8) &&
       (((param_3 == 0 || (*(int *)(param_2 + 0x482) == 0)) ||
        (*(int *)(param_2 + 0x482) == param_3)))) {
      cVar2 = (**(code **)(*param_1 + 0x22c))();
      if (cVar2 == '\0') {
        fVar3 = (float10)FUN_006ab9d0(param_2);
        if ((*(int *)(param_2 + 0x3d8) != *(int *)((int)param_1 + 10)) &&
           (*(int *)(param_2 + 0x3d4) == *(int *)((int)param_1 + 10))) {
          fVar3 = fVar3 * (float10)_DAT_007e67d4 + (float10)_DAT_007e4088;
        }
        if (fVar3 < (float10)_DAT_007e3380) {
          fVar3 = (float10)_DAT_007e3380;
        }
        param_1[0x11] = (int)(float)(fVar3 + (float10)_DAT_007e682c);
        return;
      }
    }
    param_1[0x11] = -0x40800000;
  }
  return;
}


