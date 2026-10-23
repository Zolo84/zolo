// FUN_004d41d0 @ 4d41d0 size=3012

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d41d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  cVar5 = FUN_004d5e60();
  if (cVar5 == '\0') {
    return;
  }
  local_8 = 0;
  local_c = 0;
  local_20 = 0.0;
  iVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 0x150)];
  local_24 = 0.0;
  local_18 = 0.0;
  iVar2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x154)];
  local_10 = 0.0;
  local_14 = 0.0;
  bVar9 = *(int *)(*(int *)(iVar1 + 0x12da) + 0x3b30) == *(int *)(param_1 + 0x154);
  iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
  iVar6 = (**(code **)**(undefined4 **)(iVar6 + 0x482))();
  iVar6 = *(int *)(iVar6 + 0x6c);
  puVar7 = (undefined4 *)FUN_0044e1d0();
  iVar8 = (**(code **)*puVar7)();
  bVar10 = iVar6 != *(int *)(iVar8 + 0x6c);
  iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  iVar6 = (**(code **)**(undefined4 **)(iVar6 + 0x482))();
  iVar6 = *(int *)(iVar6 + 0x6c);
  puVar7 = (undefined4 *)FUN_0044e1d0();
  iVar8 = (**(code **)*puVar7)();
  bVar11 = iVar6 == *(int *)(iVar8 + 0x6c);
  iVar6 = *(int *)(param_1 + 0x12e);
  (**(code **)(*(int *)(param_1 + 0x10a) + 4))();
  iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  if (*(int *)(iVar8 + 0x3d4) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
    FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    FUN_0044b280(uVar3);
  }
  iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
  if (*(int *)(iVar8 + 0x3d4) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
    FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    FUN_0044b280(uVar3);
  }
  iVar8 = __ftol();
  iVar6 = iVar6 - iVar8;
  fStack_1c = (float)iVar6;
  if (_DAT_007e3380 < (float)iVar6) {
    fStack_1c = (fStack_1c + fStack_1c + _DAT_007e3848) * _DAT_008775a8;
  }
  if (bVar11) {
    local_c = *(int *)(iVar2 + 0x117de);
  }
  else {
    iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    if (*(int *)(iVar6 + 0x3d8) == iVar2) {
      FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      iVar6 = FUN_004e9f40();
    }
    else {
      FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      iVar6 = FUN_004e9f80(iVar2);
    }
    bVar12 = false;
    if (iVar6 == 0) {
      iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      iVar6 = *(int *)(iVar6 + 0x12);
      bVar12 = iVar6 == 0;
    }
    if ((!bVar12 && -1 < iVar6) && (iVar8 = FUN_004e9370(iVar6), *(int *)(iVar8 + 0x3d8) == iVar2))
    {
      local_c = iVar6;
    }
  }
  if (bVar10) {
    iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (*(int *)(iVar6 + 0x3d8) == iVar1) {
      FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      iVar6 = FUN_004e9f40();
    }
    else {
      FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      iVar6 = FUN_004e9f80(iVar1);
    }
    bVar12 = false;
    if (iVar6 == 0) {
      iVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      iVar6 = *(int *)(iVar6 + 0x12);
      bVar12 = iVar6 == 0;
    }
    if ((!bVar12 && -1 < iVar6) && (iVar8 = FUN_004e9370(iVar6), *(int *)(iVar8 + 0x3d8) == iVar1))
    {
      iVar8 = FUN_004e9370(iVar6);
      local_20 = *(float *)(iVar8 + 0x280);
      local_24 = *(float *)(iVar8 + 0x270);
      local_14 = *(float *)(iVar8 + 0x278);
      local_10 = *(float *)(iVar8 + 0x27c);
      local_18 = *(float *)(iVar8 + 0x274);
      local_8 = iVar6;
    }
  }
  else {
    local_8 = *(int *)(iVar1 + 0x117de);
    if (bVar9) {
      if (DAT_00dc1540 != '\0') {
        if (*(float *)(iVar2 + 0x3b20) == _DAT_007e3380) {
          local_20 = DAT_008775fc;
          if (DAT_00dc18cc != '\0') {
            local_20 = *(float *)(iVar1 + 0x3bbc) * _DAT_008775f8;
          }
          local_20 = *(float *)(iVar1 + 0x39b4) - local_20;
        }
        if (*(float *)(iVar2 + 0x3b34) == _DAT_007e3380) {
          local_24 = DAT_008775fc;
          if (DAT_00dc18cc != '\0') {
            local_24 = *(float *)(iVar1 + 0x3bd0) * _DAT_008775f8;
          }
          local_24 = *(float *)(iVar1 + 0x39c4) - local_24;
        }
        if (*(float *)(iVar2 + 0x3b24) == _DAT_007e3380) {
          local_10 = DAT_008775fc;
          if (DAT_00dc18cc != '\0') {
            local_10 = *(float *)(iVar1 + 0x3bc0) * DAT_008775fc;
          }
          local_10 = *(float *)(iVar1 + 0x39bc) - local_10;
        }
        if (*(float *)(iVar2 + 0x3b2c) == _DAT_007e3380) {
          local_18 = DAT_008775fc;
          if (DAT_00dc18cc != '\0') {
            local_18 = *(float *)(iVar1 + 0x3bc8) * DAT_008775fc;
          }
          local_18 = *(float *)(iVar1 + 0x39c0) - local_18;
        }
        if (*(float *)(iVar2 + 0x3b28) == _DAT_007e3380) {
          if (DAT_00dc18cc == '\0') {
            local_14 = *(float *)(iVar1 + 0x39b8) - DAT_008775fc;
          }
          else {
            local_14 = *(float *)(iVar1 + 0x39b8) - *(float *)(iVar1 + 0x3bc4) * DAT_008775fc;
          }
        }
      }
    }
    else {
      local_10 = *(float *)(iVar1 + 0x39bc);
      local_18 = *(float *)(iVar1 + 0x39c0);
      local_20 = *(float *)(iVar1 + 0x39b4) - *(float *)(iVar1 + 0x4096) * _DAT_007e3650;
      local_14 = *(float *)(iVar1 + 0x39b8);
      local_24 = *(float *)(iVar1 + 0x39c4) - *(float *)(iVar1 + 0x4092) * _DAT_007e3650;
    }
  }
  if ((*(char *)(param_1 + 0x1a) == '\0') || (local_10 < _DAT_007e3380)) {
    local_10 = 0.0;
  }
  if ((*(char *)(param_1 + 0x17) == '\0') || (local_18 < _DAT_007e3380)) {
    local_18 = 0.0;
  }
  if ((*(char *)(param_1 + 0x18) == '\0') || (local_14 < _DAT_007e3380)) {
    local_14 = 0.0;
  }
  if ((*(char *)(param_1 + 0x16) == '\0') || (local_20 < _DAT_007e3380)) {
    local_20 = 0.0;
  }
  if (local_24 < _DAT_007e3380) {
    local_24 = 0.0;
  }
  if (fStack_1c < local_10) {
    local_10 = fStack_1c;
  }
  if (fStack_1c < local_18) {
    local_18 = fStack_1c;
  }
  if (fStack_1c < local_14) {
    local_14 = fStack_1c;
  }
  if (fStack_1c < local_24) {
    local_24 = fStack_1c;
  }
  if (fStack_1c < local_20) {
    local_20 = fStack_1c;
  }
  if (local_20 <= _DAT_007e3380) {
LAB_004d48d9:
    if (local_20 < _DAT_007e3380) goto LAB_004d48ea;
  }
  else {
    if (!bVar11) {
      if (0 < local_c) {
        iVar6 = FUN_004e9370(local_c);
        fVar4 = *(float *)(iVar6 + 0x268) * _DAT_008775a0;
        if (DAT_0087759c <= fVar4) {
          fVar4 = DAT_0087759c;
        }
        if (fVar4 < *(float *)(iVar6 + 0x280) + local_20) {
          local_20 = fVar4 - *(float *)(iVar6 + 0x280);
        }
      }
      goto LAB_004d48d9;
    }
    if ((bVar9) || (local_8 < 1)) goto LAB_004d48d9;
    iVar6 = FUN_004e9370(local_8);
    fVar4 = *(float *)(iVar6 + 0x268) * _DAT_008775a0;
    if (DAT_0087759c <= fVar4) {
      fVar4 = DAT_0087759c;
    }
    local_20 = fVar4;
    if ((DAT_00dc1888 != '\0') &&
       (local_20 = fVar4 * _DAT_00dc188c, DAT_0087759c < fVar4 * _DAT_00dc188c)) {
      local_20 = DAT_0087759c;
    }
    if (local_20 < *(float *)(iVar6 + 0x280)) {
      local_20 = *(float *)(iVar6 + 0x280) - local_20;
      goto LAB_004d48d9;
    }
LAB_004d48ea:
    local_20 = 0.0;
  }
  if (fStack_1c < local_20) {
    local_20 = fStack_1c;
  }
  if ((*(char *)(param_1 + 0x19) != '\0') || (bVar9)) {
LAB_004d492d:
    if (bVar11) {
      if ((!bVar9) && (0 < local_8)) {
        iVar6 = FUN_004e9370(local_8);
        fVar4 = *(float *)(iVar6 + 0x26c) * _DAT_008775a0;
        if (DAT_0087759c <= fVar4) {
          fVar4 = DAT_0087759c;
        }
        local_24 = fVar4;
        if ((DAT_00dc1888 != '\0') &&
           (local_24 = fVar4 * _DAT_00dc188c, DAT_0087759c < fVar4 * _DAT_00dc188c)) {
          local_24 = DAT_0087759c;
        }
        if (*(float *)(iVar6 + 0x270) <= local_24) goto LAB_004d4a51;
        local_24 = *(float *)(iVar6 + 0x270) - local_24;
      }
    }
    else {
LAB_004d4939:
      if ((0 < local_c) && (iVar6 = FUN_004e9370(local_c), *(int *)(iVar6 + 0x3d8) == iVar2)) {
        fVar4 = *(float *)(iVar6 + 0x26c) * _DAT_008775a0;
        if (DAT_0087759c <= fVar4) {
          fVar4 = DAT_0087759c;
        }
        if (fVar4 < *(float *)(iVar6 + 0x270) + local_24) {
          local_24 = fVar4 - *(float *)(iVar6 + 0x270);
          if (_DAT_007e3380 <= local_24) goto LAB_004d4a59;
          goto LAB_004d4a51;
        }
      }
    }
    if (_DAT_007e3380 <= local_24) goto LAB_004d4a59;
  }
  else {
    if (!bVar11) goto LAB_004d4939;
    if (DAT_00dc1888 != '\0') goto LAB_004d492d;
  }
LAB_004d4a51:
  local_24 = 0.0;
LAB_004d4a59:
  if (fStack_1c < local_24) {
    local_24 = fStack_1c;
  }
  if ((0 < local_8) && (0 < local_c)) {
    if (bVar10) {
      iVar6 = FUN_004e9370(local_8);
      FUN_004ed460(-local_20,0);
      FUN_004ea3b0(-local_24);
      FUN_004ed3a0(-local_10,0);
      FUN_004ed400(-local_14,0);
      FUN_004ed340(-local_18,0);
      *(undefined4 *)(iVar6 + 0x6e) = 0;
      *(undefined4 *)(iVar6 + 0x76) = 0;
      *(undefined4 *)(iVar6 + 0x72) = 0;
      *(undefined4 *)(iVar6 + 0x6a) = 0;
      *(undefined4 *)(iVar6 + 0x66) = 0;
    }
    else {
      FUN_0049eae0(-local_20);
      FUN_0049eba0(-local_24);
      FUN_0049eb40(-local_10);
      FUN_0049eb10(-local_14);
      FUN_0049eb70(-local_18);
    }
    if (bVar11) {
      FUN_0049eae0(local_20);
      FUN_0049eba0(local_24);
      FUN_0049eb40(local_10);
      FUN_0049eb10(local_14);
      FUN_0049eb70(local_18);
    }
    else {
      FUN_004e9370(local_c);
      FUN_004ed460(local_20,0);
      FUN_004ea3b0(local_24);
      FUN_004ed3a0(local_10,0);
      FUN_004ed400(local_14,0);
      FUN_004ed340(local_18,0);
    }
    if (bVar9) {
      *(float *)(iVar1 + 0x3ac0) = *(float *)(iVar1 + 0x3ac0) - local_20;
      *(float *)(iVar1 + 0x3ad4) = *(float *)(iVar1 + 0x3ad4) - local_24;
      *(float *)(iVar1 + 0x3ac4) = *(float *)(iVar1 + 0x3ac4) - local_10;
      *(float *)(iVar1 + 0x3acc) = *(float *)(iVar1 + 0x3acc) - local_18;
      *(float *)(iVar1 + 0x3ac8) = *(float *)(iVar1 + 0x3ac8) - local_14;
      *(float *)(iVar2 + 0x3b50) = local_20 + *(float *)(iVar2 + 0x3b50);
      *(float *)(iVar2 + 0x3b64) = local_24 + *(float *)(iVar2 + 0x3b64);
      *(float *)(iVar2 + 0x3b54) = local_10 + *(float *)(iVar2 + 0x3b54);
      *(float *)(iVar2 + 0x3b5c) = local_18 + *(float *)(iVar2 + 0x3b5c);
      *(float *)(iVar2 + 0x3b58) = local_14 + *(float *)(iVar2 + 0x3b58);
    }
    else if (bVar11) {
      *(float *)(iVar2 + 0x3a30) = local_20 + *(float *)(iVar2 + 0x3a30);
      *(float *)(iVar2 + 0x3a44) = local_24 + *(float *)(iVar2 + 0x3a44);
      *(float *)(iVar2 + 0x3a34) = local_10 + *(float *)(iVar2 + 0x3a34);
      *(float *)(iVar2 + 0x3a3c) = local_18 + *(float *)(iVar2 + 0x3a3c);
      *(float *)(iVar2 + 0x3a38) = local_14 + *(float *)(iVar2 + 0x3a38);
    }
    else {
      *(float *)(iVar1 + 0x3a48) = local_20 + *(float *)(iVar1 + 0x3a48);
      *(float *)(iVar1 + 0x3a5c) = local_24 + *(float *)(iVar1 + 0x3a5c);
      *(float *)(iVar1 + 0x3a4c) = local_10 + *(float *)(iVar1 + 0x3a4c);
      *(float *)(iVar1 + 0x3a54) = local_18 + *(float *)(iVar1 + 0x3a54);
      *(float *)(iVar1 + 0x3a50) = local_14 + *(float *)(iVar1 + 0x3a50);
    }
  }
  *(float *)(param_1 + 0x136) = local_20;
  *(float *)(param_1 + 0x13a) = local_18;
  *(float *)(param_1 + 0x13e) = local_14;
  *(float *)(param_1 + 0x142) = local_24;
  *(float *)(param_1 + 0x146) = local_10;
  return;
}


