// FUN_0075d520 @ 75d520 size=292

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0075d520(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_004d7870(&local_8,param_1);
  FUN_004d7870(&local_10,param_2);
  fVar2 = (float)(local_10 - local_8);
  fVar1 = (float)(local_c - local_4) / fVar2;
  if (fVar2 <= _DAT_007e3380) {
    if (_DAT_007e3380 <= fVar2) {
      if (_DAT_007e3380 < (float)(local_c - local_4)) {
        return 0;
      }
    }
    else if (fVar1 <= _DAT_007e5e34) {
      if (_DAT_007e3380 < fVar1) {
        return 5;
      }
      if (fVar1 < _DAT_007fa4a0) {
        return 0;
      }
      return 7;
    }
  }
  else {
    if (_DAT_007e5e34 < fVar1) {
      return 0;
    }
    if (_DAT_007e3380 < fVar1) {
      return 1;
    }
    if (_DAT_007fa4a0 <= fVar1) {
      return 3;
    }
  }
  return 4;
}


