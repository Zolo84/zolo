// FUN_00561b00 @ 561b00 size=463

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00561b00(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x180) != '\0') {
    return false;
  }
  if (*(int *)(param_1 + 0x288) == 0) {
    return false;
  }
  if (DAT_00d610e2 != '\0') {
    return true;
  }
  if (0 < *(int *)(param_1 + 0x1f6)) {
    return true;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x30) + 4))();
  if (0 < iVar1) {
    return true;
  }
  if (0 < *(short *)(param_1 + 0x3cc)) {
    return true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x21e)) {
    return true;
  }
  if (*(int *)(param_1 + 0x3d4) != *(int *)(param_1 + 0x3d8)) {
    return true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x20e)) {
    return true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x280)) {
    return true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x270)) {
    return true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x27c)) {
    return true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x278)) {
    return true;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x274)) {
    return true;
  }
  if (0 < *(int *)(param_1 + 0x19e)) {
    return true;
  }
  if (*(int *)(param_1 + 0x3ac) == 0) {
    if (_DAT_007e3380 < *(float *)(param_1 + 0x21a)) {
      return true;
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x212)) {
      return true;
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x216)) {
      return true;
    }
    if (*(short *)(param_1 + 0x3d2) < 1) {
      if ((*(int *)(param_1 + 0x254) != 8) && (*(int *)(param_1 + 0x254) != 9)) {
        iVar1 = 1;
        piVar2 = (int *)(param_1 + 0x1ca);
        do {
          if (*(int *)(*piVar2 + 0x18) != 0) {
            return true;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < 0xb);
      }
      return *(int *)(param_1 + 0x3a4) != 0;
    }
    return true;
  }
  return true;
}


