// FUN_004fd5d0 @ 4fd5d0 size=483

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004fd5d0(int param_1,char param_2)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float local_4;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    return (float10)_DAT_007e3380;
  }
  local_4 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0xf0) * _DAT_007e543c;
  if ((param_2 == '\0') ||
     ((iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x11c) + 4))(), iVar4 == 0 &&
      (*(int *)(*(int *)(param_1 + 0x6c) + 0x176) == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x22e) + 8))();
  bVar6 = cVar3 != '\0';
  if (*(char *)(param_1 + 0x15f) == '\0') {
    if (*(char *)(param_1 + 0x161) == '\0') {
      fVar7 = ((float10)*(float *)(param_1 + 0xec) / (float10)*(float *)(param_1 + 0xf0)) *
              (float10)local_4;
      if (bVar2) {
        return fVar7 * (float10)_DAT_008775c8;
      }
      if (!bVar6) {
        return fVar7;
      }
      if (*(int *)(*(int *)(param_1 + 0x6c) + 0xc) != *(int *)(*(int *)(param_1 + 0x6c) + 0x212)) {
        return fVar7;
      }
      return fVar7 * (float10)_DAT_008775c4;
    }
    if ((bVar6) &&
       (iVar4 = FUN_004e9370(*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0xc)),
       *(int *)(iVar4 + 0x46a) != 0)) {
      return (float10)_DAT_008775c4 * (float10)local_4;
    }
    if (bVar2) {
      return (float10)_DAT_008775d8 * (float10)local_4;
    }
    if (bVar6) {
      return (float10)_DAT_008775d4 * (float10)local_4;
    }
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))();
    if (*(int *)(iVar4 + 0x2ae) != 0) {
      return (float10)_DAT_007e3380;
    }
    local_4 = (*(float *)(param_1 + 0xec) / *(float *)(param_1 + 0xf0)) * local_4;
    fVar1 = _DAT_008775b8;
    if ((bVar2) || (fVar1 = _DAT_008775b4, bVar6)) {
      local_4 = fVar1 * local_4;
    }
    iVar4 = FUN_0051c480();
    if ((iVar4 != 0) && (iVar4 = FUN_0051c480(), (*(byte *)(iVar4 + 0x1e) & 1) != 0)) {
      iVar4 = *(int *)(param_1 + 0x6c);
      FUN_0051c480();
      iVar5 = FUN_0050a580();
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x22) + 4))();
      if (iVar4 <= iVar5) {
        return (float10)local_4 * (float10)_DAT_007e4094;
      }
    }
  }
  return (float10)local_4;
}


