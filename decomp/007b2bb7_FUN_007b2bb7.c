// FUN_007b2bb7 @ 7b2bb7 size=304

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007b2bb7(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_007e3348) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_0087f7b0;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_007b2c42:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_007e3348 < param_3) goto LAB_007b2cdd;
        if (param_3 < _DAT_007e3348) goto LAB_007b2c74;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_007b2ce7(param_3);
        if (_DAT_007e3348 < param_3) {
          dVar2 = _DAT_0087f7b0;
          if (iVar3 == 1) {
            dVar2 = -_DAT_0087f7b0;
          }
          goto LAB_007b2cdd;
        }
        if (param_3 < _DAT_007e3348) {
          dVar2 = _DAT_0087f7d0;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_007b2cdd;
        }
      }
      dVar2 = 1.0;
      goto LAB_007b2cdd;
    }
    if (_DAT_007e7828 < dVar1) goto LAB_007b2cdd;
    if (_DAT_007e7828 <= dVar1) {
LAB_007b2c07:
      *param_4 = _DAT_0087f7b8;
      return 1;
    }
  }
  else {
    if ((param_3._4_4_ != -0x100000) || (param_3._0_4_ != 0)) goto LAB_007b2c42;
    if (dVar1 <= _DAT_007e7828) {
      if (_DAT_007e7828 <= dVar1) goto LAB_007b2c07;
      goto LAB_007b2cdd;
    }
  }
LAB_007b2c74:
  dVar2 = 0.0;
LAB_007b2cdd:
  *param_4 = dVar2;
  return 0;
}


