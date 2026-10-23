// FUN_004fd370 @ 4fd370 size=349

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004fd370(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_4;
  
  fVar4 = (float10)FUN_0044aaf0(0);
  local_4 = (float)fVar4;
  cVar1 = FUN_0042ddd0(param_1 + 0x66);
  if (cVar1 == '\0') {
    local_4 = DAT_008772b0 + local_4;
  }
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x6c) != 0)) {
    if (0 < *(int *)(*(int *)(param_1 + 0x6c) + 0xc)) {
      iVar2 = FUN_0051b230();
      if ((*(int *)(iVar2 + 0x254) != 8) && (*(int *)(iVar2 + 0x254) != 9)) {
        cVar1 = FUN_0042ddd0(param_1 + 0x66);
        if (cVar1 == '\0') {
          _param_2 = DAT_008772b0;
        }
        else {
          _param_2 = 0.0;
        }
        FUN_0051b230();
        fVar4 = (float10)FUN_004ecea0();
        local_4 = (float)((fVar4 + (float10)_param_2 + (float10)local_4) * (float10)_DAT_007e34c0);
      }
    }
    if (local_4 < _DAT_007e3374) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x28))();
      if (cVar1 != '\0') {
        iVar2 = FUN_0051c480();
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0x6c);
          FUN_0051c480();
          iVar3 = FUN_0050a580();
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x22) + 4))();
          if (iVar2 <= iVar3) {
            iVar2 = FUN_0051c480();
            if (((*(byte *)(iVar2 + 0x1e) & 1) != 0) &&
               (local_4 = _DAT_00dc16f4 + local_4, _DAT_007e3374 < local_4)) {
              local_4 = 1.0;
            }
          }
        }
      }
    }
    cVar1 = FUN_0051cb20();
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x15f) != '\0')) {
      return (float10)*(float *)(*(int *)(param_1 + 0x5c) + 0xe2f6) + (float10)local_4;
    }
  }
  return (float10)local_4;
}


