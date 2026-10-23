// FUN_0049a890 @ 49a890 size=1578

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049a890(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar11 = 6;
  puVar9 = (undefined4 *)(param_1 + 0x3af0);
  do {
    puVar9[-0x18] = 0;
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  *(undefined4 *)(param_1 + 0x3924) = 0;
  *(undefined4 *)(param_1 + 0x3928) = 0;
  *(undefined4 *)(param_1 + 0x392c) = 0;
  *(undefined4 *)(param_1 + 0x3930) = 0;
  *(undefined4 *)(param_1 + 0x3934) = 0;
  *(undefined4 *)(param_1 + 0x3938) = 0;
  *(undefined4 *)(param_1 + 0x393c) = 0;
  *(undefined4 *)(param_1 + 0x3940) = 0;
  *(undefined4 *)(param_1 + 0x3944) = 0;
  *(undefined4 *)(param_1 + 0x3948) = 0;
  *(undefined4 *)(param_1 + 0x394c) = 0;
  local_8 = 0.0;
  if (DAT_0087b630 != '\0') {
    local_8 = *(float *)(param_1 + 0x3852);
  }
  puVar9 = *(undefined4 **)(param_1 + 0xe8a4);
  local_10 = local_8;
  while (puVar9 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar9[2];
    iVar11 = FUN_004e9370(*puVar9);
    fVar12 = (float10)FUN_004ed0e0();
    if (((float10)_DAT_007e3380 < fVar12) && (*(int *)(*DAT_00d12b40 + 0x402) == 0)) {
      cVar8 = FUN_004e8ab0(param_1);
      if (cVar8 == '\0') {
        fVar6 = _DAT_00dc17e8;
        if (*(int *)(iVar11 + 0x3d4) != param_1) {
          fVar6 = _DAT_00dc17ec;
        }
        fVar13 = (float10)fVar6 + (float10)*(float *)(param_1 + 0x13c30);
        if ((float10)_DAT_007e3380 <= fVar13) {
          fVar12 = fVar13 * (float10)(float)fVar12;
        }
        else {
          fVar12 = (float10)_DAT_007e3380;
        }
      }
      else {
        fVar12 = (float10)(float)fVar12;
      }
    }
    local_10 = (float)(fVar12 + (float10)local_10);
    fVar13 = (float10)*(int *)(iVar11 + 0x222) * fVar12 * (float10)_DAT_007e6f10;
    *(float *)(param_1 + 0x392c) = (float)(fVar13 + (float10)*(float *)(param_1 + 0x392c));
    local_8 = (float)(fVar13 + fVar12 + (float10)local_8);
    puVar9 = puVar2;
  }
  if (local_8 < _DAT_007e3380) {
    local_8 = 0.0;
  }
  if (local_10 < _DAT_007e3380) {
    local_10 = 0.0;
  }
  *(float *)(param_1 + 0x3a0c) = local_8;
  *(int *)(param_1 + 0x3954) = (int)ROUND(local_10);
  fVar6 = local_8;
  if ((&DAT_00dc0fd4)[*(int *)(param_1 + 6)] != 0) {
    fVar6 = *(float *)(param_1 + 0x234) * local_8 * _DAT_007e6f0c;
    *(float *)(param_1 + 0x392c) = fVar6 + *(float *)(param_1 + 0x392c);
    fVar6 = fVar6 + local_8;
  }
  *(float *)(param_1 + 0x3928) = *(float *)(param_1 + 0x11a88) * local_8 - local_8;
  fVar7 = (*(float *)(param_1 + 0x37ea) - _DAT_007e3374) * local_8;
  *(float *)(param_1 + 0x3938) = fVar7;
  fVar4 = *(float *)(*(int *)(param_1 + 0x244) + 0x66) * local_8 - local_8;
  *(float *)(param_1 + 0x3930) = fVar4;
  fVar1 = *(float *)(param_1 + 0x3928);
  fVar12 = (float10)FUN_0076bbb0(param_1,0);
  *(float *)(param_1 + 0x393c) = (float)(fVar12 * (float10)local_8);
  cVar8 = FUN_0044beb0();
  if (cVar8 == '\0') {
    fVar5 = *(float *)(param_1 + 0x23c) * local_8 - local_8;
    *(float *)(param_1 + 0x3940) = fVar5;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x240) * local_8 - local_8;
    *(float *)(param_1 + 0x3944) = fVar5;
  }
  fVar5 = fVar5 + (float)(fVar12 * (float10)local_8 + (float10)(fVar6 + fVar1 + fVar7 + fVar4));
  if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) != 0) {
    local_8 = _DAT_00877568 * local_8 - local_8;
    *(float *)(param_1 + 0x394c) = local_8;
    fVar5 = local_8 + fVar5;
  }
  local_8 = fVar5;
  *(int *)(param_1 + 0x3924) = (int)ROUND(local_8);
  FUN_0044ac70();
  iVar11 = __ftol();
  if (DAT_0087b630 != '\0') {
    local_10 = _DAT_00dc186c * local_8;
    if (_DAT_007e3380 <= *(float *)(param_1 + 0x3852)) {
      iVar10 = DAT_00dc1870;
      if (DAT_00dc1870 <= (int)ROUND(local_10)) {
        iVar10 = (int)ROUND(local_10);
      }
    }
    else {
      fVar6 = (float)DAT_00dc1870 + *(float *)(param_1 + 0x3852);
      if (local_10 < fVar6) {
        local_10 = fVar6;
      }
      iVar10 = (int)ROUND(local_10);
    }
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (iVar11 < iVar10) {
      iVar11 = iVar10;
    }
    iVar3 = *(int *)(param_1 + 0x3924);
    if (iVar3 < iVar10) {
      *(int *)(param_1 + 0x3924) = iVar10;
      *(float *)(param_1 + 0x3948) = (float)(iVar10 - iVar3);
    }
  }
  iVar10 = *(int *)(param_1 + 0x3924);
  fVar6 = (float)iVar10;
  *(float *)(param_1 + 0x3af8) = (float)iVar10;
  *(float *)(param_1 + 0x3af4) = fVar6 + fVar6;
  *(float *)(param_1 + 0x3afc) = fVar6 * _DAT_007e34c0;
  if (iVar11 < iVar10) {
    *(int *)(param_1 + 0x3924) = iVar11;
    *(float *)(param_1 + 0x3934) = (float)(iVar11 - iVar10);
  }
  fVar6 = *(float *)(param_1 + 0x39bc) - (float)(*(int *)(param_1 + 0x3924) * 2);
  local_8 = (float)*(int *)(param_1 + 0x3924) * _DAT_007e40b8;
  if (local_8 <= _DAT_007e3374) {
    local_8 = 1.0;
  }
  fVar1 = *(float *)(param_1 + 0x39b4);
  fVar4 = *(float *)(param_1 + 0x39bc);
  local_10 = *(float *)(param_1 + 0x3a1c) + *(float *)(param_1 + 0x3a34) +
             *(float *)(param_1 + 0x3b54) + *(float *)(param_1 + 0x3aac) +
             *(float *)(param_1 + 0x3a7c);
  fVar12 = (float10)FUN_00442c00(1);
  if ((float10)_DAT_007e3380 < fVar12) {
    fVar12 = (float10)FUN_00442c00(1);
    local_10 = (float)(fVar12 + (float10)local_10);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3a94)) {
    local_10 = *(float *)(param_1 + 0x3a94) + local_10;
  }
  fVar13 = (float10)FUN_0049b530(1);
  fVar12 = (float10)local_10;
  local_10 = *(float *)(param_1 + 0x3a18) + *(float *)(param_1 + 0x3a30) +
             *(float *)(param_1 + 0x3b50) + *(float *)(param_1 + 0x3aa8) +
             *(float *)(param_1 + 0x3a78);
  fVar14 = (float10)FUN_00442c00(0);
  if ((float10)_DAT_007e3380 < fVar14) {
    fVar14 = (float10)FUN_00442c00(0);
    local_10 = (float)(fVar14 + (float10)local_10);
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x3a90)) {
    local_10 = *(float *)(param_1 + 0x3a90) + local_10;
  }
  fVar14 = (float10)FUN_0049b530(0);
  fVar14 = (float10)local_10 -
           ((fVar14 - ((float10)*(float *)(param_1 + 0x39a8) + (float10)*(float *)(param_1 + 0x39a4)
                      )) + (float10)*(float *)(param_1 + 0x399c));
  local_c = (float)(((((float10)(float)(fVar12 - fVar13) + (float10)fVar4) -
                     ((float10)fVar1 + (float10)fVar1)) - (fVar14 + fVar14)) /
                   ((float10)*(float *)(param_1 + 0x37e2) + (float10)*(float *)(param_1 + 0x37e2) +
                   (float10)_DAT_007e3374));
  cVar8 = FUN_004442a0();
  if (cVar8 == '\0') {
    if (local_c <= _DAT_007e3380) {
      return;
    }
  }
  else {
    if (*(int *)(*DAT_00d12b40 + 0x3ea) == 0) {
      return;
    }
    local_c = 100000.0;
  }
  if (_DAT_007e3380 < *(float *)(param_1 + 0x37e2)) {
    fVar1 = _DAT_007e3374 / *(float *)(param_1 + 0x37e2);
    if (fVar1 < _DAT_007e3374) {
      fVar1 = _DAT_007e3374;
    }
    if (fVar1 * local_8 <= local_c) {
      local_c = fVar1 * local_8;
    }
    if (fVar6 < local_c) {
      local_c = fVar6;
    }
    if (_DAT_007e3380 < local_c) {
      fVar6 = *(float *)(param_1 + 0x37e2) * local_c;
      fVar1 = fVar6 + *(float *)(param_1 + 0x39b4);
      if (fVar1 < _DAT_007e3380) {
        fVar1 = _DAT_007e3380;
      }
      *(float *)(param_1 + 0x39b4) = fVar1;
      fVar1 = -local_c + *(float *)(param_1 + 0x39bc);
      if (fVar1 < _DAT_007e3380) {
        fVar1 = _DAT_007e3380;
      }
      *(float *)(param_1 + 0x39bc) = fVar1;
      *(float *)(param_1 + 0x3a94) = *(float *)(param_1 + 0x3a94) - local_c;
      *(float *)(param_1 + 0x3a90) = fVar6 + *(float *)(param_1 + 0x3a90);
    }
  }
  return;
}


