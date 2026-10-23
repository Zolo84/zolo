// FUN_00501b20 @ 501b20 size=458

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00501b20(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x130) == 0x8c) {
    iVar2 = FUN_0044c630(*(undefined4 *)(param_1 + 0x88));
  }
  else {
    iVar2 = FUN_0044c620(*(undefined4 *)(param_2 + 4));
  }
  fVar1 = *(float *)(iVar2 + 0x74) + *(float *)(param_2 + 0x74);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2d0) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x78) + *(float *)(param_2 + 0x78);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2d4) = fVar1;
  fVar1 = *(float *)(iVar2 + 0xa4) + *(float *)(param_2 + 0xa4);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2d8) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x30) + *(float *)(param_2 + 0x30);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x114) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x2c) + *(float *)(param_2 + 0x2c);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x118) = fVar1;
  fVar1 = *(float *)(iVar2 + 0xa8) + *(float *)(param_2 + 0xa8);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2dc) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x54) + *(float *)(param_2 + 0x54);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2e0) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x58) + *(float *)(param_2 + 0x58);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2e4) = fVar1;
  fVar1 = *(float *)(iVar2 + 0xac) + *(float *)(param_2 + 0xac);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2e8) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x98) + *(float *)(param_2 + 0x98);
  if (fVar1 < _DAT_007e3380) {
    fVar1 = _DAT_007e3380;
  }
  *(float *)(param_1 + 0x2ec) = fVar1;
  fVar1 = *(float *)(iVar2 + 0x9c) + *(float *)(param_2 + 0x9c);
  if (fVar1 < _DAT_007e3380) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    return;
  }
  *(float *)(param_1 + 0x2f0) = fVar1;
  return;
}


