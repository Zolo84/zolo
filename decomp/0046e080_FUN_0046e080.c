// FUN_0046e080 @ 46e080 size=3154

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0046e080(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float afStack_8 [2];
  
  bVar13 = false;
  local_34 = 1.0;
  local_38 = 0.0;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  bVar15 = false;
  bVar14 = false;
  bVar16 = false;
  bVar10 = false;
  if (*(int *)(DAT_00d0ca90 + 0x21e20) != 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xca) + 0x8c) + 0x50))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xce) + 0x8c) + 0x50))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xd2) + 0x8c) + 0x50))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xd6) + 0x8c) + 0x50))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xda) + 0x8c) + 0x50))();
    iVar2 = *(int *)(DAT_00d0ca90 + 0x21e20);
    bVar13 = *(char *)(*(int *)(*(int *)(iVar2 + 0xca) + 0x8c) + 0x86) != '\0';
    if (bVar13) {
      local_38 = *(float *)(*(int *)(iVar2 + 0xca) + 0xa0) * _DAT_007e68d0;
      local_34 = _DAT_007e3374 - local_38;
    }
    bVar14 = *(char *)(*(int *)(*(int *)(iVar2 + 0xce) + 0x8c) + 0x86) != '\0';
    if (bVar14) {
      local_2c = *(float *)(*(int *)(iVar2 + 0xce) + 0xa0) * _DAT_007e68d0;
      local_34 = local_34 - local_2c;
    }
    bVar15 = *(char *)(*(int *)(*(int *)(iVar2 + 0xd2) + 0x8c) + 0x86) != '\0';
    if (bVar15) {
      local_30 = *(float *)(*(int *)(iVar2 + 0xd2) + 0xa0) * _DAT_007e68d0;
      local_34 = local_34 - local_30;
    }
    bVar16 = *(char *)(*(int *)(*(int *)(iVar2 + 0xd6) + 0x8c) + 0x86) != '\0';
    if (bVar16) {
      local_28 = *(float *)(*(int *)(iVar2 + 0xd6) + 0xa0) * _DAT_007e68d0;
      local_34 = local_34 - local_28;
    }
    if (*(char *)(*(int *)(*(int *)(iVar2 + 0xda) + 0x8c) + 0x86) != '\0') {
      local_24 = *(float *)(*(int *)(iVar2 + 0xda) + 0xa0) * _DAT_007e68d0;
      bVar10 = true;
      local_34 = local_34 - local_24;
    }
  }
  iVar2 = *DAT_00d12b40;
  iVar3 = *(int *)(iVar2 + 0x3be);
  if ((iVar3 < 0) || (bVar9 = true, bVar13)) {
    bVar9 = false;
  }
  iVar4 = *(int *)(iVar2 + 0x3c6);
  if ((iVar4 < 0) || (bVar13 = true, bVar14)) {
    bVar13 = false;
  }
  iVar5 = *(int *)(iVar2 + 0x3c2);
  if ((iVar5 < 0) || (bVar14 = true, bVar15)) {
    bVar14 = false;
  }
  iVar6 = *(int *)(iVar2 + 0x3ce);
  if ((iVar6 < 0) || (bVar15 = true, bVar16)) {
    bVar15 = false;
  }
  iVar2 = *(int *)(iVar2 + 0x3ca);
  if ((iVar2 < 0) || (bVar16 = true, bVar10)) {
    bVar16 = false;
  }
  iVar11 = FUN_0044ab40();
  fStack_18 = (float)iVar11;
  iVar11 = FUN_0044ab40();
  if (iVar11 < 1) {
    fStack_18 = 1.0;
  }
  if (bVar9) {
    fVar17 = (float10)FUN_004a3450();
    local_38 = (float)(fVar17 + (float10)_DAT_007e68cc);
    piVar8 = *(int **)(param_1 + 0x3654);
    while (piVar8 != (int *)0x0) {
      piVar7 = (int *)piVar8[2];
      iVar11 = *piVar8;
      piVar8 = piVar7;
      if (*(int *)(iVar11 + 0x1c) != 0) {
        fVar17 = (float10)FUN_0075b2d0();
        local_1c = (float)(fVar17 + (float10)local_1c);
      }
    }
    fStack_10 = *(float *)(param_1 + 0x3a70);
    fStack_14 = *(float *)(param_1 + 0x3a88);
    fVar17 = (float10)FUN_0049c570();
    fStack_10 = (float)((((float10)local_1c - (float10)fStack_14) + (float10)fStack_10 + fVar17) -
                       (float10)*(float *)(param_1 + 0x3ab8));
    fVar17 = (float10)FUN_00442c00(4);
    local_1c = (float)((float10)fStack_10 - fVar17);
    if ((iVar3 == 1) && (*(float *)(param_1 + 0x39c8) < local_1c + _DAT_007e3848)) {
      fVar17 = (float10)FUN_0049dd20(0x3f800000);
      if ((float10)local_38 < (float10)local_1c / fVar17) {
        local_38 = (float)((float10)local_1c / fVar17);
      }
    }
    if (local_38 < _DAT_007e3380) {
      local_38 = 0.0;
    }
    if (local_34 < local_38) {
      local_38 = local_34;
    }
    local_34 = local_34 - local_38;
  }
  if (bVar14) {
    if (DAT_00dc1540 == '\0') {
      fVar1 = *(float *)(param_1 + 0x39f0);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x3998);
    }
    local_30 = fVar1 + fVar1;
    if (((local_30 <= *(float *)(param_1 + 0x39c4)) &&
        (local_30 = fVar1, *(float *)(param_1 + 0x234) < _DAT_007e4090)) && (iVar3 != 1)) {
      if (*(float *)(param_1 + 0x3bd0) <= *(float *)(param_1 + 0x39c4)) {
        if (*(float *)(param_1 + 0x39c4) < *(float *)(param_1 + 0x3bb8)) {
          local_20 = fVar1 * _DAT_007e67f8;
        }
      }
      else {
        local_20 = fVar1 * _DAT_007e3650;
        local_30 = fVar1 * _DAT_007e67f8;
      }
    }
    fStack_c = *(float *)(param_1 + 0x3a8c);
    fStack_14 = *(float *)(param_1 + 0x3abc);
    fStack_10 = *(float *)(param_1 + 0x3b64);
    afStack_8[0] = *(float *)(param_1 + 0x3a74);
    fVar17 = (float10)FUN_00442c00(5);
    fVar18 = (fVar17 + (float10)fStack_10 + (float10)fStack_14 + (float10)fStack_c) -
             (float10)afStack_8[0];
    fVar17 = (float10)local_30 - fVar18;
    local_30 = (float)fVar17;
    if (fVar17 < (float10)_DAT_007e3380) {
      local_30 = 0.0;
    }
    fVar1 = local_30;
    fVar18 = (float10)local_20 - fVar18;
    local_20 = (float)fVar18;
    if (fVar18 < (float10)_DAT_007e3380) {
      local_20 = 0.0;
    }
    if (*(float *)(param_1 + 0x39c4) < *(float *)(param_1 + 0x3bb8)) {
      if ((*(float *)(param_1 + 0x3bd0) < *(float *)(param_1 + 0x39c4)) &&
         (fVar1 = (local_30 - *(float *)(param_1 + 0x39c4)) + *(float *)(param_1 + 0x3bd0),
         local_30 <= fVar1)) {
        local_30 = fVar1;
      }
    }
    else {
      local_30 = 0.0;
      local_20 = fVar1;
    }
    fVar17 = (float10)FUN_0049b210(0x3f800000,0);
    if (fVar17 < (float10)_DAT_007e3374) {
      fVar17 = (float10)_DAT_007e3374;
    }
    local_30 = (float)((float10)local_30 / fVar17);
    local_20 = (float)((float10)local_20 / fVar17);
    if (local_30 < _DAT_007e3380) {
      local_30 = 0.0;
    }
    if (local_34 < local_30) {
      local_30 = local_34;
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x3b34)) {
      local_30 = 0.0;
      local_20 = 0.0;
    }
    local_34 = local_34 - local_30;
  }
  if (iVar4 == 1) {
    fVar17 = (float10)FUN_0044ab50();
    fVar17 = fVar17 / (float10)fStack_18 + (float10)_DAT_007e68cc;
    local_2c = (float)fVar17;
    if ((float10)local_34 < fVar17) {
      local_2c = local_34;
    }
    local_34 = local_34 - local_2c;
  }
  if (bVar9) {
    if (_DAT_007e3380 < *(float *)(param_1 + 0x234)) {
      local_34 = local_34 + local_38;
      local_38 = local_38 * _DAT_007e67f8;
      if (local_38 < _DAT_007e3380) {
        local_38 = 0.0;
      }
      if (local_34 < local_38) {
        local_38 = local_34;
      }
      local_34 = local_34 - local_38;
    }
    local_34 = local_38 + local_34;
    fVar17 = (float10)FUN_0049dd20(0x3f800000);
    if ((*(float *)(param_1 + 0x39c8) < local_1c + _DAT_007e3848) &&
       ((float10)local_38 < (float10)local_1c / fVar17)) {
      local_38 = (float)((float10)local_1c / fVar17);
    }
    if (local_38 < _DAT_007e3380) {
      local_38 = 0.0;
    }
    if (local_34 < local_38) {
      local_38 = local_34;
    }
    local_34 = local_34 - local_38;
  }
  if (iVar6 == 1) {
    local_28 = *(float *)(param_1 + 0x39f4) / fStack_18;
    if (local_34 < local_28) {
      local_28 = local_34;
    }
    local_34 = local_34 - local_28;
  }
  if (iVar2 == 1) {
    local_24 = *(float *)(param_1 + 0x3a00) / fStack_18;
    if (local_34 < local_24) {
      local_24 = local_34;
    }
    local_34 = local_34 - local_24;
  }
  if ((bVar14) && (local_30 < local_20)) {
    local_34 = local_34 + local_30;
    local_30 = local_20;
    if (local_34 < local_20) {
      local_30 = local_34;
    }
    local_34 = local_34 - local_30;
  }
  if (bVar13) {
    local_34 = local_2c + local_34;
    fVar17 = (float10)FUN_0044ab50();
    fVar17 = fVar17 / (float10)fStack_18 + (float10)_DAT_007e68cc;
    local_2c = (float)fVar17;
    if ((float10)local_34 < fVar17) {
      local_2c = local_34;
    }
    local_34 = local_34 - local_2c;
  }
  if (((bVar9) && (iVar5 != 1)) && (_DAT_007e3380 < *(float *)(param_1 + 0x234))) {
    local_38 = local_38 + local_34;
    local_34 = _DAT_007e3380;
  }
  if (bVar15) {
    local_34 = local_34 + local_28;
    local_28 = *(float *)(param_1 + 0x39f4) / fStack_18;
    if (local_34 < local_28) {
      local_28 = local_34;
    }
    local_34 = local_34 - local_28;
  }
  if (bVar16) {
    local_34 = local_34 + local_24;
    local_24 = *(float *)(param_1 + 0x3a00) / fStack_18;
    if (local_34 < local_24) {
      local_24 = local_34;
    }
    local_34 = local_34 - local_24;
  }
  if (*(float *)(param_1 + 0x3b34) == _DAT_007e3380) {
    if ((iVar5 == 1) || (!bVar9)) {
      local_30 = local_30 + local_34;
      goto LAB_0046e947;
    }
  }
  else if (!bVar9) goto LAB_0046e947;
  local_38 = local_38 + local_34;
LAB_0046e947:
  FUN_0045dcb0(local_38,local_30,local_2c,local_28,local_24);
  if ((*(int *)(DAT_00d0ca90 + 0x21e20) != 0) &&
     (iVar2 = *(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xca), iVar2 != 0)) {
    local_38 = local_38 * _DAT_007e68c8;
    *(float *)(iVar2 + 0xa0) = local_38;
    if (*(float *)(iVar2 + 0xb0) < local_38) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xb0);
    }
    if (*(float *)(iVar2 + 0xa0) < *(float *)(iVar2 + 0xac)) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xac);
    }
    local_2c = local_2c * _DAT_007e68c8;
    iVar2 = *(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xce);
    *(float *)(iVar2 + 0xa0) = local_2c;
    if (*(float *)(iVar2 + 0xb0) < local_2c) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xb0);
    }
    if (*(float *)(iVar2 + 0xa0) < *(float *)(iVar2 + 0xac)) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xac);
    }
    local_30 = local_30 * _DAT_007e68c8;
    iVar2 = *(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xd2);
    *(float *)(iVar2 + 0xa0) = local_30;
    if (*(float *)(iVar2 + 0xb0) < local_30) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xb0);
    }
    if (*(float *)(iVar2 + 0xa0) < *(float *)(iVar2 + 0xac)) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xac);
    }
    local_28 = local_28 * _DAT_007e68c8;
    iVar2 = *(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xd6);
    *(float *)(iVar2 + 0xa0) = local_28;
    if (*(float *)(iVar2 + 0xb0) < local_28) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xb0);
    }
    if (*(float *)(iVar2 + 0xa0) < *(float *)(iVar2 + 0xac)) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xac);
    }
    local_24 = local_24 * _DAT_007e68c8;
    iVar2 = *(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xda);
    *(float *)(iVar2 + 0xa0) = local_24;
    if (*(float *)(iVar2 + 0xb0) < local_24) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xb0);
    }
    if (*(float *)(iVar2 + 0xa0) < *(float *)(iVar2 + 0xac)) {
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0xac);
    }
    piVar8 = *(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xca) + 0x8c);
    puVar12 = (undefined4 *)(**(code **)(*piVar8 + 0x28))(afStack_8);
    *(undefined4 *)((int)piVar8 + 0xaa) = *puVar12;
    *(undefined4 *)((int)piVar8 + 0xae) = puVar12[1];
    piVar8 = *(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xce) + 0x8c);
    puVar12 = (undefined4 *)(**(code **)(*piVar8 + 0x28))(&fStack_c);
    *(undefined4 *)((int)piVar8 + 0xaa) = *puVar12;
    *(undefined4 *)((int)piVar8 + 0xae) = puVar12[1];
    piVar8 = *(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xd2) + 0x8c);
    puVar12 = (undefined4 *)(**(code **)(*piVar8 + 0x28))(&fStack_10);
    *(undefined4 *)((int)piVar8 + 0xaa) = *puVar12;
    *(undefined4 *)((int)piVar8 + 0xae) = puVar12[1];
    piVar8 = *(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xd6) + 0x8c);
    puVar12 = (undefined4 *)(**(code **)(*piVar8 + 0x28))(&fStack_14);
    *(undefined4 *)((int)piVar8 + 0xaa) = *puVar12;
    *(undefined4 *)((int)piVar8 + 0xae) = puVar12[1];
    piVar8 = *(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xda) + 0x8c);
    puVar12 = (undefined4 *)(**(code **)(*piVar8 + 0x28))(&fStack_18);
    *(undefined4 *)((int)piVar8 + 0xaa) = *puVar12;
    *(undefined4 *)((int)piVar8 + 0xae) = puVar12[1];
    FUN_004406a0();
    FUN_004406a0();
    FUN_004406a0();
    FUN_004406a0();
    FUN_004406a0();
    if (*(int *)(DAT_00d0ca90 + 0x21e62) == 0xf) {
      (**(code **)(**(int **)(DAT_00d0ca90 + 0x21e20) + 0x10))(0);
    }
  }
  return;
}


