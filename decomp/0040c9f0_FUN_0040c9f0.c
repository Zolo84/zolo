// FUN_0040c9f0 @ 40c9f0 size=296

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040c9f0(int *param_1,int *param_2,double *param_3)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *param_2;
  iVar4 = iVar2 - *param_1;
  iVar5 = (*(int *)(param_3 + 6) - iVar2) + *(int *)(param_3 + 3);
  iVar6 = (*(int *)(param_3 + 7) - iVar2) + *(int *)(param_3 + 3);
  if (iVar2 == *param_1) {
    return 2;
  }
  if (((iVar4 < 0) && (0 < iVar5)) && (0 < iVar6)) {
    return 2;
  }
  if (((0 < iVar4) && (iVar5 < 0)) && (iVar6 < 0)) {
    return 2;
  }
  if ((((-1 < iVar4) || (iVar5 < 1)) &&
      (((iVar4 < 1 || (-1 < iVar5)) && ((-1 < iVar4 || (iVar6 < 1)))))) &&
     ((iVar4 < 1 || (-1 < iVar6)))) {
    return 0;
  }
  if ((iVar2 == *(int *)(param_3 + 3) + *(int *)(param_3 + 4)) &&
     (param_2[1] == *(int *)((int)param_3 + 0x1c) + *(int *)((int)param_3 + 0x24))) {
    if (iVar4 < 0) {
      if (*param_3 <= _DAT_007e3348) {
        return 2;
      }
      bVar3 = *param_3 < _DAT_007e33e8;
      goto LAB_0040cacc;
    }
    if (*param_3 <= _DAT_007e33e8) {
      return 2;
    }
    dVar1 = *param_3;
  }
  else {
    if (-1 < iVar4) {
      if (_DAT_007e33f0 < param_3[1]) {
        return 0;
      }
      if (param_3[1] <= _DAT_007e3348) {
        return 2;
      }
      if (_DAT_007e33e8 <= param_3[1]) {
        return 2;
      }
      return 0;
    }
    if (param_3[1] <= _DAT_007e33e8) {
      return 2;
    }
    dVar1 = param_3[1];
  }
  bVar3 = dVar1 < _DAT_007e33f0;
LAB_0040cacc:
  if (!bVar3) {
    return 2;
  }
  return 0;
}


