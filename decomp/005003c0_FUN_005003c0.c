// FUN_005003c0 @ 5003c0 size=494

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005003c0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x130) == 0x8c) {
    iVar2 = FUN_0044c630(*(undefined4 *)(param_1 + 0x88));
  }
  else {
    iVar2 = FUN_0044c620(*(undefined4 *)(param_2 + 4));
  }
  fVar1 = *(float *)(iVar2 + 0x44) + *(float *)(param_2 + 0x44);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2cc) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x48) + *(float *)(param_2 + 0x48);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2d0) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x4c) + *(float *)(param_2 + 0x4c);
  if (fVar1 < DAT_00dc1744) {
    fVar1 = DAT_00dc1744;
  }
  *(float *)(param_1 + 0x2d4) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x50) + *(float *)(param_2 + 0x50);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2d8) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x30) + *(float *)(param_2 + 0x30);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x114) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x54) + *(float *)(param_2 + 0x54);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2dc) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x58) + *(float *)(param_2 + 0x58);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2e0) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x5c) + *(float *)(param_2 + 0x5c);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2e4) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x2c) + *(float *)(param_2 + 0x2c);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x118) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x60) + *(float *)(param_2 + 0x60);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2e8) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x6c) + *(float *)(param_2 + 0x6c);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2f4) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x68) + *(float *)(param_2 + 0x68);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2f0) = fVar1;
  fVar1 = *(float *)(iVar2 + 100) + *(float *)(param_2 + 100);
  if (fVar1 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    return;
  }
  *(float *)(param_1 + 0x2ec) = fVar1;
  return;
}


