// FUN_007120b0 @ 7120b0 size=608

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_007120b0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  DAT_00d4b2d0 = 0;
  DAT_00d4b2d4 = 0;
  DAT_00d4b2d8 = 0;
  DAT_00d4b2dc = 0;
  piVar4 = *(int **)(param_1 + 0x1272);
  if (piVar4 != (int *)0x0) {
    do {
      if (0xff < DAT_00d4b2d4) break;
      DAT_00d4bae4 = *piVar4;
      cVar1 = FUN_007119e0(DAT_00d4bae4);
      iVar2 = DAT_00d4bae4;
      if (cVar1 != '\0') {
        (&DAT_00d4b2e4)[DAT_00d4b2d4] = DAT_00d4b2dc;
        iVar2 = *(int *)(iVar2 + 0x12);
        DAT_00d4b2d8 = iVar2;
        if (iVar2 < 0) {
          (&DAT_00d4b6e4)[DAT_00d4b2d4] = 0xffffffff;
        }
        else {
          (&DAT_00d4b6e4)[DAT_00d4b2d4] = iVar2;
          DAT_00d4b2d0 = DAT_00d4b2d0 + iVar2;
        }
        DAT_00d4b2d4 = DAT_00d4b2d4 + 1;
      }
      DAT_00d4b2dc = DAT_00d4b2dc + 1;
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != (int *)0x0);
    if (DAT_00d4b2d4 == 1) {
      return DAT_00d4b2e4;
    }
    if (0 < DAT_00d4b2d0) {
      if (DAT_00877644 == -3) {
        iVar5 = -10000;
        iVar2 = -1;
        iVar3 = 0;
        _DAT_00d4b2e0 = -10000;
        DAT_00d4b2dc = -1;
        if (0 < DAT_00d4b2d4) {
          piVar4 = &DAT_00d4b6e4;
          do {
            DAT_00d4b2d8 = *piVar4;
            if ((0 < DAT_00d4b2d8) && (iVar5 < DAT_00d4b2d8)) {
              iVar2 = iVar3;
              iVar5 = DAT_00d4b2d8;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
            DAT_00d4b2dc = iVar2;
            _DAT_00d4b2e0 = iVar5;
          } while (iVar3 < DAT_00d4b2d4);
        }
        return (&DAT_00d4b2e4)[DAT_00d4b2dc];
      }
      _DAT_00d4b2e0 = _rand();
      _DAT_00d4b2e0 = _DAT_00d4b2e0 % DAT_00d4b2d0;
      iVar2 = 0;
      if (DAT_00d4b2d4 < 1) {
        return 0;
      }
      piVar4 = &DAT_00d4b6e4;
      do {
        DAT_00d4b2d8 = *piVar4;
        if (0 < DAT_00d4b2d8) {
          if (_DAT_00d4b2e0 < DAT_00d4b2d8) {
            return (&DAT_00d4b2e4)[iVar2];
          }
          _DAT_00d4b2e0 = _DAT_00d4b2e0 - DAT_00d4b2d8;
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < DAT_00d4b2d4);
      return 0;
    }
  }
  if (-4 < DAT_00877644) {
    if (DAT_00877644 < -1) {
      return DAT_00d4b2e4;
    }
    if (DAT_00877644 == -1) {
      iVar2 = _rand();
      return (&DAT_00d4b2e4)[iVar2 % DAT_00d4b2d4];
    }
  }
  DAT_00d4b2d0 = (int)ROUND(((_DAT_007e4088 - (float)DAT_00877644) /
                            ((float)DAT_00d4b2d4 - _DAT_007e3374)) * _DAT_007e4088);
  DAT_00d4b2d8 = 10000 - (DAT_00d4b2d4 + -1) * DAT_00d4b2d0;
  _DAT_00d4b2e0 = _rand();
  _DAT_00d4b2e0 = _DAT_00d4b2e0 % 10000;
  iVar2 = 0;
  if (DAT_00d4b2d4 < 1) {
    return 0;
  }
  do {
    if (_DAT_00d4b2e0 <= DAT_00d4b2d8) {
      return (&DAT_00d4b2e4)[iVar2];
    }
    DAT_00d4b2d8 = DAT_00d4b2d8 + DAT_00d4b2d0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < DAT_00d4b2d4);
  return 0;
}


