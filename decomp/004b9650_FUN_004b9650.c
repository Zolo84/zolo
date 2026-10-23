// FUN_004b9650 @ 4b9650 size=833

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004b9650(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int local_1c;
  float local_14;
  float fStack_c;
  float local_8;
  
  iVar2 = (&DAT_0089cad8)[*(int *)((int)*(int **)(param_1 + 0x80) + 0x4a)];
  if ((iVar2 != 0) &&
     (iVar3 = (&DAT_0089cad8)[*(int *)(*(int *)(param_1 + 0x84) + 0x4a)], iVar3 != 0)) {
    if (*(int *)(param_1 + 0x74) == 1) {
      local_8 = (*(float *)(iVar2 + 0x37ce) - _DAT_007e3374) * _DAT_007e4088;
      fVar1 = *(float *)(iVar3 + 0x37ce);
    }
    else if (*(int *)(param_1 + 0x74) == 3) {
      local_8 = (*(float *)(iVar2 + 0x37ca) - _DAT_007e3374) * _DAT_007e4088;
      fVar1 = *(float *)(iVar3 + 0x37ca);
    }
    else {
      local_8 = (*(float *)(iVar2 + 0x37d2) - _DAT_007e3374) * _DAT_007e4088;
      fVar1 = *(float *)(iVar3 + 0x37d2);
    }
    local_1c = 0;
    local_14 = 100000.0;
    local_8 = local_8 - (fVar1 - _DAT_007e3374) * _DAT_007e4088;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x80) + 0xc))();
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + 8);
        fStack_c = 0.0;
        iVar3 = FUN_0051c480();
        if (iVar3 != 0) {
          iVar3 = FUN_0051c480();
          fStack_c = (float)*(int *)(iVar3 + 0x22) * _DAT_007e4090;
          iVar3 = FUN_0051c480();
          if ((*(uint *)(iVar3 + 0x1e) >> 4 & 1) != 0) {
            fStack_c = fStack_c - _DAT_007e5e34;
          }
          iVar3 = FUN_0051c480();
          if ((*(uint *)(iVar3 + 0x1e) >> 0xd & 1) != 0) {
            fStack_c = fStack_c - _DAT_007e3374;
          }
        }
        FUN_0051c480();
        fVar5 = (float10)FUN_00509fb0();
        fVar5 = (float10)fStack_c - fVar5 * (float10)_DAT_007e3428;
        if (fVar5 < (float10)local_14) {
          local_1c = FUN_0051c480();
          local_14 = (float)fVar5;
        }
      } while (iVar2 != 0);
      if (local_1c != 0) {
        fVar5 = (float10)FUN_00509fb0();
        local_8 = (float)(fVar5 + (float10)local_8);
        if ((*(uint *)(local_1c + 0x1e) >> 4 & 1) != 0) {
          local_8 = local_8 + _DAT_007e67e0;
        }
      }
    }
    iVar3 = 0;
    local_14 = 100000.0;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + 8);
        fStack_c = 0.0;
        iVar4 = FUN_0051c480();
        if (iVar4 != 0) {
          iVar4 = FUN_0051c480();
          fStack_c = (float)*(int *)(iVar4 + 0x22) * _DAT_007e4090;
          iVar4 = FUN_0051c480();
          if ((*(uint *)(iVar4 + 0x1e) >> 4 & 1) != 0) {
            fStack_c = fStack_c - _DAT_007e5e34;
          }
          iVar4 = FUN_0051c480();
          if ((*(uint *)(iVar4 + 0x1e) >> 0xd & 1) != 0) {
            fStack_c = fStack_c - _DAT_007e3374;
          }
        }
        FUN_0051c480();
        fVar5 = (float10)FUN_00509fb0();
        fVar5 = (float10)fStack_c - fVar5 * (float10)_DAT_007e3428;
        if (fVar5 < (float10)local_14) {
          iVar3 = FUN_0051c480();
          local_14 = (float)fVar5;
        }
      } while (iVar2 != 0);
      if (iVar3 != 0) {
        fVar5 = (float10)FUN_00509fb0();
        local_8 = (float)((float10)local_8 - fVar5);
        if ((*(uint *)(iVar3 + 0x1e) >> 4 & 1) != 0) {
          local_8 = local_8 - _DAT_007e67e0;
        }
      }
    }
    if (_DAT_007e3380 <= local_8) {
      if (_DAT_007e3380 < local_8) {
        if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x1e) >> 0xd & 1) != 0)) {
          local_8 = local_8 - _DAT_007e67e0;
        }
        iVar2 = _rand();
        if (iVar2 % 1000 < (int)ROUND(local_8)) {
          return *(undefined4 *)(param_1 + 0x84);
        }
      }
    }
    else {
      if ((local_1c != 0) && ((*(uint *)(local_1c + 0x1e) >> 0xd & 1) != 0)) {
        local_8 = local_8 + _DAT_007e67e0;
      }
      iVar2 = _rand();
      if (iVar2 % 1000 < (int)ROUND(-local_8)) {
        return *(undefined4 *)(param_1 + 0x80);
      }
    }
  }
  return 0;
}


