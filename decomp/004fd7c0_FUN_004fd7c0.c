// FUN_004fd7c0 @ 4fd7c0 size=685

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004fd7c0(int param_1,char param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float local_4;
  
  local_4 = *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0xf0) * _DAT_007e543c;
  if (*(int *)(param_1 + 0x5c) != 0) {
    local_4 = *(float *)(*(int *)(param_1 + 0x5c) + 0x13c3c) * local_4;
  }
  if (*(char *)(param_1 + 0x15f) == '\0') {
    if (*(char *)(param_1 + 0x161) == '\0') {
      iVar3 = *(int *)(param_1 + 0x6c);
      local_4 = (*(float *)(param_1 + 0xec) / *(float *)(param_1 + 0xf0)) * local_4;
      if (iVar3 == 0) {
        return (float10)_DAT_008775bc * (float10)local_4;
      }
      if ((param_2 != '\0') &&
         ((iVar3 = (**(code **)(*(int *)(iVar3 + 0x11c) + 4))(), iVar3 != 0 ||
          (iVar3 = *(int *)(param_1 + 0x6c), *(int *)(iVar3 + 0x176) != 0)))) {
        return (float10)_DAT_008775c0 * (float10)local_4;
      }
      cVar2 = (**(code **)(*(int *)(iVar3 + 0x22e) + 8))();
      if ((cVar2 != '\0') &&
         (*(int *)(*(int *)(param_1 + 0x6c) + 0xc) == *(int *)(*(int *)(param_1 + 0x6c) + 0x212))) {
        return (float10)_DAT_008775bc * (float10)local_4;
      }
    }
    else {
      if (*(int *)(param_1 + 0x6c) == 0) {
        return (float10)_DAT_008775cc * (float10)local_4;
      }
      if ((param_2 != '\0') &&
         (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x11c) + 4))(), iVar3 != 0)) {
        return (float10)_DAT_008775d0 * (float10)local_4;
      }
      iVar3 = FUN_0051b230();
      if ((*(int *)(iVar3 + 0x46a) != 0) &&
         (cVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x22e) + 8))(), cVar2 != '\0')) {
        return (float10)_DAT_008775cc * (float10)local_4;
      }
    }
    goto LAB_004fda64;
  }
  local_4 = (*(float *)(param_1 + 0xec) / *(float *)(param_1 + 0xf0)) * local_4;
  if (*(int *)(param_1 + 0x6c) == 0) {
    return (float10)_DAT_008775ac * (float10)local_4;
  }
  if (((param_2 != '\0') &&
      (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x11c) + 4))(),
      fVar1 = _DAT_008775b0, iVar3 != 0)) ||
     (cVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x22e) + 8))(), fVar1 = _DAT_008775ac
     , cVar2 != '\0')) {
    local_4 = fVar1 * local_4;
  }
  iVar4 = FUN_004e9370(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc));
  iVar3 = *(int *)(iVar4 + 0x254);
  fVar1 = _DAT_007e4080;
  if (iVar3 == 3) {
    iVar3 = *(int *)(iVar4 + 0x250);
    if (((iVar3 == 5) || (fVar1 = _DAT_007e3650, iVar3 == 6)) || (fVar1 = _DAT_007e5e34, iVar3 == 7)
       ) goto LAB_004fd89a;
  }
  else if ((iVar3 == 4) || (iVar3 == 6)) {
LAB_004fd89a:
    if (_DAT_007e3380 < *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xf0) * _DAT_007e543c) {
      fVar1 = fVar1 * _DAT_007e4080;
    }
    local_4 = fVar1 * local_4;
  }
  iVar3 = FUN_0051c480();
  if ((iVar3 != 0) && (iVar3 = FUN_0051c480(), (*(byte *)(iVar3 + 0x1e) & 1) != 0)) {
    iVar3 = *(int *)(param_1 + 0x6c);
    FUN_0051c480();
    iVar4 = FUN_0050a580();
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x22) + 4))();
    if (iVar3 <= iVar4) {
      return (float10)local_4 * (float10)_DAT_007e4094;
    }
  }
LAB_004fda64:
  return (float10)local_4;
}


