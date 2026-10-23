// FUN_0044f5b0 @ 44f5b0 size=913

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044f5b0(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  
  iVar2 = *(int *)((int)param_2 + 6);
  fVar6 = (float10)FUN_005885d0();
  if (fVar6 != (float10)_DAT_007e3380) {
    return;
  }
  param_2 = 0.0;
  if (*(char *)(*(int *)(param_1 + 0x12da) + iVar2 * 0x2c + 0x2c) != '\0') {
    param_2 = -200.0;
  }
  uVar1 = FUN_00760760();
  switch(uVar1) {
  case 0:
    iVar2 = FUN_00760760();
    if (((iVar2 < 3) || (6 < iVar2)) && ((iVar2 = FUN_00760760(), iVar2 < 7 || (9 < iVar2))))
    goto switchD_0044f622_default;
    break;
  case 1:
    iVar2 = FUN_00760760();
    if ((iVar2 < 3) || (6 < iVar2)) {
      iVar2 = FUN_00760760();
      if ((6 < iVar2) && (iVar2 < 10)) {
        param_2 = -100.0;
      }
    }
    else {
      param_2 = -100.0;
    }
    goto switchD_0044f622_default;
  case 2:
    iVar2 = FUN_00760760();
    if ((2 < iVar2) && (iVar2 < 7)) {
      param_2 = -50.0;
      goto switchD_0044f622_default;
    }
    iVar2 = FUN_00760760();
    if (iVar2 < 7) goto switchD_0044f622_default;
    bVar5 = SBORROW4(iVar2,9);
    iVar3 = iVar2 + -9;
    bVar4 = iVar2 == 9;
    goto LAB_0044f846;
  case 3:
    iVar2 = FUN_00760760();
    if (iVar2 != 0) {
      iVar2 = FUN_00760760();
      if (iVar2 == 1) {
        param_2 = -100.0;
        goto switchD_0044f622_default;
      }
      iVar2 = FUN_00760760();
      if (iVar2 == 9) break;
      iVar2 = FUN_00760760();
      if (iVar2 == 8) {
        param_2 = -100.0;
        goto switchD_0044f622_default;
      }
LAB_0044f74f:
      iVar2 = FUN_00760760();
      if ((6 < iVar2) && (iVar2 < 10)) {
        param_2 = -25.0;
        goto switchD_0044f622_default;
      }
      goto LAB_0044f830;
    }
    break;
  case 4:
  case 5:
    iVar2 = FUN_00760760();
    if (iVar2 != 0) {
      iVar2 = FUN_00760760();
      if (iVar2 == 1) {
        param_2 = -100.0;
        goto switchD_0044f622_default;
      }
LAB_0044f7d9:
      iVar2 = FUN_00760760();
      if (iVar2 != 9) {
        iVar2 = FUN_00760760();
        if (iVar2 == 8) {
          param_2 = -100.0;
          goto switchD_0044f622_default;
        }
        goto LAB_0044f74f;
      }
    }
    break;
  case 6:
    iVar2 = FUN_00760760();
    if (iVar2 != 0) {
      iVar2 = FUN_00760760();
      if (iVar2 == 1) {
        param_2 = -100.0;
        goto switchD_0044f622_default;
      }
      goto LAB_0044f7d9;
    }
    break;
  case 7:
    iVar2 = FUN_00760760();
    if ((2 < iVar2) && (iVar2 < 7)) {
      param_2 = -25.0;
      goto switchD_0044f622_default;
    }
LAB_0044f830:
    iVar2 = FUN_00760760();
    if (iVar2 < 0) goto switchD_0044f622_default;
    bVar5 = SBORROW4(iVar2,2);
    iVar3 = iVar2 + -2;
    bVar4 = iVar2 == 2;
LAB_0044f846:
    if (bVar4 || bVar5 != iVar3 < 0) {
      param_2 = -50.0;
    }
    goto switchD_0044f622_default;
  case 8:
    iVar2 = FUN_00760760();
    if ((iVar2 < 3) || (6 < iVar2)) {
      iVar2 = FUN_00760760();
      if ((-1 < iVar2) && (iVar2 < 3)) {
        param_2 = -100.0;
      }
    }
    else {
      param_2 = -50.0;
    }
    goto switchD_0044f622_default;
  case 9:
    iVar2 = FUN_00760760();
    if ((2 < iVar2) && (iVar2 < 7)) {
      param_2 = -100.0;
      goto switchD_0044f622_default;
    }
    iVar2 = FUN_00760760();
    if ((iVar2 < 0) || (2 < iVar2)) goto switchD_0044f622_default;
    break;
  default:
    goto switchD_0044f622_default;
  }
  param_2 = -150.0;
switchD_0044f622_default:
  iVar2 = FUN_00760760();
  iVar3 = FUN_00760760();
  if (iVar3 == iVar2) {
    param_2 = 25.0;
  }
  else if (param_2 == _DAT_007e3380) {
    return;
  }
  FUN_00588600(param_2);
  FUN_00588600(param_2);
  return;
}


