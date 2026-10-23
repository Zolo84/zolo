// FUN_00466cb0 @ 466cb0 size=889

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_00466cb0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            undefined4 param_7,int param_8,undefined4 param_9,int param_10,undefined4 param_11,
            int param_12,undefined4 param_13)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = FUN_0044c3d0(param_2,param_4);
  iVar4 = FUN_0044c620(param_2);
  local_4 = (*(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc)) *
            *(float *)(param_1 + 0x11a9c + param_2 * 0x18) *
            *(float *)(*(int *)(param_1 + 0x244) + 0x76);
  if (local_4 < _DAT_007e3380) {
    local_4 = 0.0;
  }
  local_8 = 0.0;
  fVar5 = (float10)local_4;
  local_c = 0.0;
  if ((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] != 0) {
    if (param_3 != 0) {
      iVar3 = FUN_00467030(param_3,param_5,1);
      fVar1 = (float)iVar3;
      iVar3 = FUN_0044c5b0(param_3,param_5);
      iVar4 = FUN_0044c630(param_3);
      local_8 = (*(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc)) *
                *(float *)(param_1 + 0x127bc + param_3 * 0x18) *
                *(float *)(*(int *)(param_1 + 0x244) + 0x76);
      if (local_8 < _DAT_007e3380) {
        local_8 = _DAT_007e3380;
      }
      local_8 = local_8 * fVar1;
      if (_DAT_007e3380 < fVar1) {
        local_c = fVar1;
      }
    }
    if (param_6 != 0) {
      iVar3 = FUN_00467030(param_6,param_7,1);
      fVar1 = (float)iVar3;
      iVar3 = FUN_0044c5b0(param_6,param_7);
      iVar4 = FUN_0044c630(param_6);
      fVar2 = (*(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc)) *
              *(float *)(param_1 + 0x127bc + param_6 * 0x18) *
              *(float *)(*(int *)(param_1 + 0x244) + 0x76);
      if (fVar2 < _DAT_007e3380) {
        fVar2 = _DAT_007e3380;
      }
      local_8 = fVar2 * fVar1 + local_8;
      if (local_c < fVar1) {
        local_c = fVar1;
      }
    }
    if (param_8 != 0) {
      iVar3 = FUN_00467030(param_8,param_9,1);
      fVar1 = (float)iVar3;
      iVar3 = FUN_0044c5b0(param_8,param_9);
      iVar4 = FUN_0044c630(param_8);
      fVar2 = (*(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc)) *
              *(float *)(param_1 + 0x127bc + param_8 * 0x18) *
              *(float *)(*(int *)(param_1 + 0x244) + 0x76);
      if (fVar2 < _DAT_007e3380) {
        fVar2 = _DAT_007e3380;
      }
      local_8 = fVar2 * fVar1 + local_8;
      if (local_c < fVar1) {
        local_c = fVar1;
      }
    }
    if (param_10 != 0) {
      iVar3 = FUN_00467030(param_10,param_11,1);
      fVar1 = (float)iVar3;
      iVar3 = FUN_0044c5b0(param_10,param_11);
      iVar4 = FUN_0044c630(param_10);
      fVar2 = (*(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc)) *
              *(float *)(param_1 + 0x127bc + param_10 * 0x18) *
              *(float *)(*(int *)(param_1 + 0x244) + 0x76);
      if (fVar2 < _DAT_007e3380) {
        fVar2 = _DAT_007e3380;
      }
      local_8 = fVar2 * fVar1 + local_8;
      if (local_c < fVar1) {
        local_c = fVar1;
      }
    }
    if (param_12 != 0) {
      iVar3 = FUN_00467030(param_12,param_13,1);
      fVar1 = (float)iVar3;
      iVar3 = FUN_0044c5b0(param_12,param_13);
      iVar4 = FUN_0044c630(param_12);
      fVar2 = (*(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc)) *
              *(float *)(param_1 + 0x127bc + param_12 * 0x18) *
              *(float *)(*(int *)(param_1 + 0x244) + 0x76);
      if (fVar2 < _DAT_007e3380) {
        fVar2 = _DAT_007e3380;
      }
      local_8 = fVar2 * fVar1 + local_8;
      if (local_c < fVar1) {
        local_c = fVar1;
      }
    }
    iVar3 = FUN_00466b90(param_2,0,param_4,0,1);
    fVar5 = (float10)iVar3;
    if ((float10)local_c <= fVar5) {
      fVar5 = (float10)local_8 / fVar5 + (float10)local_4;
    }
    else {
      fVar5 = (fVar5 * (float10)local_4 + (float10)local_8) / (float10)local_c;
    }
  }
  if (fVar5 < (float10)_DAT_007e3380) {
    fVar5 = (float10)_DAT_007e3380;
  }
  return fVar5;
}


