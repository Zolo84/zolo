// FUN_00403080 @ 403080 size=1945

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00403080(double *param_1,int *param_2,int *param_3,double param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST1;
  double local_10;
  
  fVar6 = (float10)fpatan((float10)(param_3[1] - param_2[1]),(float10)(*param_3 - *param_2));
  if (((float10)(param_3[1] - param_2[1]) != (float10)_DAT_007e3348) &&
     ((float10)(*param_3 - *param_2) != (float10)_DAT_007e3348)) {
    fsin((float10)(double)fVar6);
  }
  fsin(((float10)_DAT_007e3330 - (float10)param_4) * (float10)_DAT_007e3358);
  fsin((float10)param_4);
  iVar2 = __ftol();
  *(int *)(param_1 + 2) = iVar2;
  iVar3 = __ftol();
  fVar6 = extraout_ST0 - (float10)(iVar3 << 1) * (float10)_DAT_007e3330;
  if (fVar6 < (float10)_DAT_007e3348) {
    fVar6 = fVar6 + (float10)_DAT_007e3310;
  }
  *param_1 = (double)fVar6;
  iVar3 = __ftol();
  fVar6 = extraout_ST0_00 - (float10)(iVar3 << 1) * (float10)_DAT_007e3330;
  if (fVar6 < (float10)_DAT_007e3348) {
    fVar6 = fVar6 + (float10)_DAT_007e3310;
  }
  local_10 = (double)fVar6;
  param_1[1] = (double)fVar6;
  uVar4 = __ftol();
  fVar6 = (float10)_DAT_007e32f0;
  *(undefined4 *)((int)param_1 + 0x14) = uVar4;
  if ((extraout_ST1 < fVar6) || ((float10)_DAT_007e3338 <= extraout_ST1)) {
    if (((float10)_DAT_007e3328 <= extraout_ST1) && (extraout_ST1 < (float10)_DAT_007e3318)) {
      fcos(extraout_ST1);
      uVar4 = __ftol();
      *(undefined4 *)(param_1 + 8) = uVar4;
      fVar6 = (float10)FUN_007a5e20();
      fVar6 = (float10)_DAT_007e3310 - fVar6;
      goto LAB_0040325b;
    }
    if ((extraout_ST1 < (float10)_DAT_007e3338) || ((float10)_DAT_007e3328 <= extraout_ST1)) {
      fsin(extraout_ST1);
      uVar4 = __ftol();
      *(undefined4 *)((int)param_1 + 0x44) = uVar4;
      fVar5 = (float10)FUN_007a5d50();
      fVar6 = (float10)_DAT_007e3348;
      *param_1 = (double)fVar5;
      if (fVar5 < fVar6) {
        *param_1 = (double)(fVar5 + (float10)_DAT_007e3310);
      }
      fVar6 = (float10)*param_1;
    }
    else {
      fsin(extraout_ST1);
      uVar4 = __ftol();
      *(undefined4 *)((int)param_1 + 0x44) = uVar4;
      fVar6 = (float10)FUN_007a5d50();
      fVar6 = (float10)_DAT_007e3330 - fVar6;
      *param_1 = (double)fVar6;
    }
    fcos(fVar6);
    uVar4 = __ftol();
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  else {
    fcos(extraout_ST1);
    uVar4 = __ftol();
    *(undefined4 *)(param_1 + 8) = uVar4;
    fVar6 = (float10)FUN_007a5e20();
LAB_0040325b:
    *param_1 = (double)fVar6;
    fVar6 = (float10)fsin(fVar6);
    if (fVar6 * (float10)iVar2 < (float10)_DAT_007e3348) {
      uVar4 = __ftol();
      *(undefined4 *)((int)param_1 + 0x44) = uVar4;
    }
    else {
      uVar4 = __ftol();
      *(undefined4 *)((int)param_1 + 0x44) = uVar4;
    }
  }
  fVar6 = (float10)local_10;
  if ((fVar6 < (float10)_DAT_007e32f0) || ((float10)_DAT_007e3338 <= fVar6)) {
    if ((fVar6 < (float10)_DAT_007e3328) || ((float10)_DAT_007e3318 <= fVar6)) {
      if ((fVar6 < (float10)_DAT_007e3338) || ((float10)_DAT_007e3328 <= fVar6)) {
        fsin(fVar6);
        uVar4 = __ftol();
        *(undefined4 *)((int)param_1 + 0x4c) = uVar4;
        fVar5 = (float10)FUN_007a5d50();
        fVar6 = (float10)_DAT_007e3348;
        param_1[1] = (double)fVar5;
        if (fVar5 < fVar6) {
          param_1[1] = (double)(fVar5 + (float10)_DAT_007e3310);
        }
        fVar6 = (float10)param_1[1];
      }
      else {
        fsin(fVar6);
        uVar4 = __ftol();
        *(undefined4 *)((int)param_1 + 0x4c) = uVar4;
        fVar6 = (float10)FUN_007a5d50();
        fVar6 = (float10)_DAT_007e3330 - fVar6;
        param_1[1] = (double)fVar6;
      }
      fcos(fVar6);
      uVar4 = __ftol();
      *(undefined4 *)(param_1 + 9) = uVar4;
    }
    else {
      fcos(fVar6);
      uVar4 = __ftol();
      *(undefined4 *)(param_1 + 9) = uVar4;
      fVar5 = (float10)FUN_007a5e20();
      fVar6 = (float10)_DAT_007e3310;
      param_1[1] = (double)(fVar6 - fVar5);
      fVar6 = (float10)fsin(fVar6 - fVar5);
      if (fVar6 * (float10)iVar2 < (float10)_DAT_007e3348) goto LAB_0040346c;
      uVar4 = __ftol();
      *(undefined4 *)((int)param_1 + 0x4c) = uVar4;
    }
  }
  else {
    fcos(fVar6);
    uVar4 = __ftol();
    *(undefined4 *)(param_1 + 9) = uVar4;
    fVar6 = (float10)FUN_007a5e20();
    param_1[1] = (double)fVar6;
    fVar6 = (float10)fsin(fVar6);
    if (fVar6 * (float10)iVar2 < (float10)_DAT_007e3348) {
LAB_0040346c:
      uVar4 = __ftol();
      *(undefined4 *)((int)param_1 + 0x4c) = uVar4;
    }
    else {
      uVar4 = __ftol();
      *(undefined4 *)((int)param_1 + 0x4c) = uVar4;
    }
  }
  iVar3 = param_2[1];
  *(int *)(param_1 + 3) = *param_2 - *(int *)(param_1 + 8);
  bVar1 = *param_1 == _DAT_007e3348;
  *(int *)((int)param_1 + 0x1c) = iVar3 - *(int *)((int)param_1 + 0x44);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1 + 9);
  *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 0x4c);
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x44);
  if ((bVar1) || (param_1[1] < *param_1)) {
    *(int *)(param_1 + 7) = iVar2;
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) <= *(int *)(param_1 + 5)) {
      iVar3 = *(int *)(param_1 + 5);
    }
    *(int *)(param_1 + 7) = iVar3;
  }
  if ((_DAT_007e3340 < *param_1) || (param_1[1] < _DAT_007e3340)) {
    iVar3 = *(int *)((int)param_1 + 0x24);
    if (*(int *)((int)param_1 + 0x24) <= *(int *)((int)param_1 + 0x2c)) {
      iVar3 = *(int *)((int)param_1 + 0x2c);
    }
    *(int *)((int)param_1 + 0x3c) = iVar3;
  }
  else {
    *(int *)((int)param_1 + 0x3c) = iVar2;
  }
  if ((_DAT_007e3330 < *param_1) || (param_1[1] < _DAT_007e3330)) {
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 5) <= *(int *)(param_1 + 4)) {
      iVar3 = *(int *)(param_1 + 5);
    }
    *(int *)(param_1 + 6) = iVar3;
  }
  else {
    *(int *)(param_1 + 6) = -iVar2;
  }
  if ((_DAT_007e3320 < *param_1) || (param_1[1] < _DAT_007e3320)) {
    iVar3 = *(int *)((int)param_1 + 0x24);
    if (*(int *)((int)param_1 + 0x2c) <= *(int *)((int)param_1 + 0x24)) {
      iVar3 = *(int *)((int)param_1 + 0x2c);
    }
    *(int *)((int)param_1 + 0x34) = iVar3;
  }
  else {
    *(int *)((int)param_1 + 0x34) = -iVar2;
  }
  if (_DAT_007e32f0 <= *param_1) {
    if ((*param_1 < _DAT_007e3338) || (_DAT_007e3330 <= *param_1)) {
      if ((*param_1 < _DAT_007e3330) || (_DAT_007e3328 <= *param_1)) {
        if (_DAT_007e3318 <= *param_1) {
          iVar3 = *(int *)(param_1 + 4);
          goto joined_r0x00403768;
        }
      }
      else if (*(int *)(param_1 + 4) == -iVar2) {
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      }
    }
    else if (*(int *)(param_1 + 4) == -iVar2) {
      *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
joined_r0x00403768:
    if (iVar3 == iVar2) {
      *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + -1;
    }
  }
  if (_DAT_007e32f0 <= param_1[1]) {
    if ((_DAT_007e3338 <= param_1[1]) && (param_1[1] < _DAT_007e3330)) {
      if (*(int *)(param_1 + 5) == -iVar2) {
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      }
      goto LAB_004037f8;
    }
    if ((_DAT_007e3330 <= param_1[1]) && (param_1[1] < _DAT_007e3328)) {
      if (*(int *)(param_1 + 5) == -iVar2) {
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      }
      goto LAB_004037f8;
    }
    if (param_1[1] < _DAT_007e3318) goto LAB_004037f8;
    iVar3 = *(int *)(param_1 + 5);
  }
  else {
    iVar3 = *(int *)(param_1 + 5);
  }
  if (iVar3 == iVar2) {
    *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + -1;
  }
LAB_004037f8:
  if (param_1[1] <= *param_1) {
    param_1[1] = param_1[1] + _DAT_007e3310;
  }
  return;
}


