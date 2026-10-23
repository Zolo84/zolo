// FUN_004b4b80 @ 4b4b80 size=2044

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b4b80(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float10 fVar15;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint uStack_40;
  float local_38 [11];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007be5eb;
  pvStack_c = ExceptionList;
  pfVar14 = local_38;
  for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
    *pfVar14 = 0.0;
    pfVar14 = pfVar14 + 1;
  }
  local_4c = 0.0;
  local_50 = 0.0;
  local_54 = 0.0;
  local_48 = 0.0;
  ExceptionList = &pvStack_c;
  iVar13 = (**(code **)(**(int **)(param_1 + 0x80) + 0xc))();
  piVar4 = *(int **)(iVar13 + 4);
  do {
    if (piVar4 == (int *)0x0) {
      puVar10 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar13 = FUN_004bf290();
        uVar5 = *(undefined4 *)(iVar13 + 6);
        iVar13 = *(int *)(param_1 + 0x78);
        puVar11 = operator_new(0x50);
        if (puVar11 == (undefined2 *)0x0) {
          puVar11 = (undefined2 *)0x0;
        }
        else {
          puVar11[3] = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          *(undefined1 *)((int)puVar11 + 3) = 0;
          *(undefined1 *)(puVar11 + 1) = 0;
          puVar11[4] = 0;
          *(undefined4 *)(puVar11 + 5) = 0;
        }
        puVar10[1] = puVar11;
        *(undefined1 *)(puVar10 + 2) = 0;
        *(undefined1 *)((int)puVar10 + 9) = 1;
        *puVar10 = &PTR_FUN_007e72a8;
        *(undefined1 *)((int)puVar10 + 10) = 0;
        *puVar11 = 0x10c;
        iVar7 = puVar10[1];
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined2 *)(iVar7 + 0xc) = *(undefined2 *)(iVar13 + 0x14);
        iVar13 = puVar10[1];
        uStack_40 = (uint)puVar10 & 0xff000000;
        *(uint *)(iVar13 + 2) = uStack_40;
        *(undefined2 *)(iVar13 + 6) = 0;
        *puVar10 = &PTR_FUN_007e7288;
        *(undefined4 *)(puVar10[1] + 0xe) = uVar5;
        *(float *)(puVar10[1] + 0x12) = local_4c;
        *(float *)(puVar10[1] + 0x16) = local_50;
        *(float *)(puVar10[1] + 0x1a) = local_48;
        *(float *)(puVar10[1] + 0x1e) = local_54;
        iVar13 = 0;
        do {
          *(undefined4 *)(iVar13 + 0x22 + puVar10[1]) = *(undefined4 *)((int)local_38 + iVar13);
          iVar13 = iVar13 + 4;
        } while (iVar13 < 0x2c);
        *(undefined1 *)(puVar10[1] + 0x4e) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_00565ca0(puVar10);
      pfVar14 = local_38;
      iVar13 = 0xb;
      *(float *)(param_1 + 0xdc) = local_54 + *(float *)(param_1 + 0xdc);
      *(float *)(param_1 + 0xe4) = local_50 + *(float *)(param_1 + 0xe4);
      *(float *)(param_1 + 0xe0) = local_4c + *(float *)(param_1 + 0xe0);
      *(float *)(param_1 + 0xe8) = local_48 + *(float *)(param_1 + 0xe8);
      pfVar12 = (float *)(param_1 + 0xb0);
      do {
        fVar1 = *pfVar14;
        pfVar14 = pfVar14 + 1;
        iVar13 = iVar13 + -1;
        *pfVar12 = *pfVar12 + fVar1;
        pfVar12 = pfVar12 + 1;
      } while (iVar13 != 0);
      if (_DAT_007e3374 < *(float *)(param_1 + 0xc4)) {
        *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
      }
      ExceptionList = pvStack_c;
      return;
    }
    piVar2 = (int *)piVar4[2];
    piVar3 = *(int **)(*piVar4 + 0x26);
joined_r0x004b4bf5:
    piVar4 = piVar2;
  } while (piVar3 == (int *)0x0);
  piVar4 = (int *)*piVar3;
  piVar3 = (int *)piVar3[2];
  if (_DAT_007e3380 < (float)piVar4[0x3d] - (float)piVar4[0x20]) {
    iVar13 = *(int *)(piVar4[0x1b] + 0x264);
    if (iVar13 == 0) {
      if (*(char *)((int)piVar4 + 0x161) != '\0') {
        iVar13 = 0x1e;
LAB_004b4c4f:
        if (((*(char *)((int)piVar4 + 0x161) == '\0') ||
            (cVar6 = (**(code **)(*piVar4 + 0x14))(), cVar6 == '\0')) ||
           ((float)piVar4[0x3d] - (float)piVar4[0x20] <= _DAT_00dc174c)) goto joined_r0x004b4bf5;
      }
    }
    else if ((iVar13 == 0x1e) || (iVar13 == 0x1f)) goto LAB_004b4c4f;
    iVar7 = __ftol();
    if (0 < iVar7) {
      do {
        iVar8 = _rand();
        fVar1 = (float)(iVar8 % 3 + 1) * (float)_DAT_007e46d8;
        switch(iVar13) {
        case 0xc:
          iVar8 = _rand();
          if (iVar8 % 100 < 0x33) {
            iVar8 = *(int *)(param_1 + 0x78);
            fVar15 = (float10)_DAT_00dc163c * (float10)fVar1;
            if ((_DAT_007e3380 < *(float *)(iVar8 + 0x1fe) - local_54) &&
               ((float10)_DAT_007e3380 < fVar15)) {
              iVar9 = __ftol();
              if (extraout_ST0 <= (float10)iVar9) {
                local_54 = (float)(extraout_ST0 + (float10)local_54);
              }
              else {
                local_54 = *(float *)(iVar8 + 0x1fe);
              }
              fVar15 = extraout_ST0 - (float10)iVar9;
            }
            if ((_DAT_007e3380 < *(float *)(iVar8 + 0x202) - local_4c) &&
               ((float10)_DAT_007e3380 < fVar15)) {
              iVar9 = __ftol();
              if (extraout_ST0_00 <= (float10)iVar9) {
                local_4c = (float)(extraout_ST0_00 + (float10)local_4c);
              }
              else {
                local_4c = *(float *)(iVar8 + 0x202);
              }
              fVar15 = extraout_ST0_00 - (float10)iVar9;
            }
            if ((_DAT_007e3380 < *(float *)(iVar8 + 0x20a) - local_48) &&
               ((float10)_DAT_007e3380 < fVar15)) {
              iVar9 = __ftol();
              if (extraout_ST0_01 <= (float10)iVar9) {
                local_48 = (float)(extraout_ST0_01 + (float10)local_48);
              }
              else {
                local_48 = *(float *)(iVar8 + 0x20a);
              }
              fVar15 = extraout_ST0_01 - (float10)iVar9;
            }
            if ((_DAT_007e3380 < *(float *)(iVar8 + 0x206) - local_50) &&
               ((float10)_DAT_007e3380 < fVar15)) {
              iVar9 = __ftol();
              if (extraout_ST0_02 <= (float10)iVar9) {
                local_50 = (float)(extraout_ST0_02 + (float10)local_50);
              }
              else {
                local_50 = *(float *)(iVar8 + 0x206);
              }
            }
          }
          else {
            fVar15 = (float10)FUN_004ed0e0();
            if ((float10)_DAT_007e3380 < fVar15 - (float10)local_38[1]) {
              local_38[1] = _DAT_00dc1638 * fVar1 + local_38[1];
              fVar15 = (float10)FUN_004ed0e0();
              if (fVar15 - (float10)local_38[1] < (float10)_DAT_007e3380) {
                fVar15 = (float10)FUN_004ed0e0();
                local_38[1] = (float)fVar15;
              }
            }
          }
          break;
        case 0xd:
          fVar15 = (float10)FUN_004ecea0();
          if ((float10)_DAT_007e46cc < fVar15 - (float10)local_38[5]) {
            fVar1 = _DAT_00dc1634 * fVar1;
            fVar15 = (float10)FUN_004ecea0();
            local_38[5] = (float)(fVar15 * (float10)fVar1 + (float10)local_38[5]);
            fVar15 = (float10)FUN_004ecea0();
            if (fVar15 - (float10)local_38[5] < (float10)_DAT_007e46cc) {
              fVar15 = (float10)FUN_004ecea0();
              local_38[5] = (float)(fVar15 - (float10)_DAT_007e46cc);
            }
          }
          break;
        case 0xe:
        case 0x1f:
          iVar8 = *(int *)(param_1 + 0x78);
          if (((*(int *)(iVar8 + 0x1de) != 0) &&
              (_DAT_007e3380 < *(float *)(*(int *)(iVar8 + 0x1de) + 0x14))) &&
             (local_38[6] = _DAT_00dc1620 * fVar1 + local_38[6],
             *(float *)(*(int *)(iVar8 + 0x1de) + 0x14) - local_38[6] < _DAT_007e3380)) {
            local_38[6] = *(float *)(*(int *)(iVar8 + 0x1de) + 0x14);
          }
          break;
        case 0xf:
          iVar8 = *(int *)(param_1 + 0x78);
          if (((*(int *)(iVar8 + 0x1d6) != 0) &&
              (_DAT_007e3380 < *(float *)(*(int *)(iVar8 + 0x1d6) + 0x14))) &&
             (local_38[4] = _DAT_00dc1624 * fVar1 + local_38[4],
             *(float *)(*(int *)(iVar8 + 0x1d6) + 0x14) - local_38[4] < _DAT_007e3380)) {
            local_38[4] = *(float *)(*(int *)(iVar8 + 0x1d6) + 0x14);
          }
          if (((*(int *)(iVar8 + 0x1ee) != 0) &&
              (_DAT_007e3380 < *(float *)(*(int *)(iVar8 + 0x1ee) + 0x14))) &&
             (local_38[10] = _DAT_00dc1628 * fVar1 + local_38[10],
             *(float *)(*(int *)(iVar8 + 0x1ee) + 0x14) - local_38[10] < _DAT_007e3380)) {
            local_38[10] = *(float *)(*(int *)(iVar8 + 0x1ee) + 0x14);
          }
          if (((*(int *)(iVar8 + 0x1e6) != 0) &&
              (_DAT_007e3380 < *(float *)(*(int *)(iVar8 + 0x1e6) + 0x14))) &&
             (local_38[8] = _DAT_00dc1630 * fVar1 + local_38[8],
             *(float *)(*(int *)(iVar8 + 0x1e6) + 0x14) - local_38[8] < _DAT_007e3380)) {
            local_38[8] = *(float *)(*(int *)(iVar8 + 0x1e6) + 0x14);
          }
          if (((*(int *)(iVar8 + 0x1ea) != 0) &&
              (_DAT_007e3380 < *(float *)(*(int *)(iVar8 + 0x1ea) + 0x14))) &&
             (local_38[9] = _DAT_00dc162c * fVar1 + local_38[9],
             *(float *)(*(int *)(iVar8 + 0x1ea) + 0x14) - local_38[9] < _DAT_007e3380)) {
            local_38[9] = *(float *)(*(int *)(iVar8 + 0x1ea) + 0x14);
          }
          break;
        case 0x11:
        case 0x1a:
        case 0x1e:
          iVar8 = *(int *)(param_1 + 0x78);
          if (((*(int *)(iVar8 + 0x1e2) != 0) &&
              (_DAT_007e3380 < *(float *)(*(int *)(iVar8 + 0x1e2) + 0x14))) &&
             (local_38[7] = _DAT_00dc161c * fVar1 + local_38[7],
             *(float *)(*(int *)(iVar8 + 0x1e2) + 0x14) - local_38[7] < _DAT_007e3380)) {
            local_38[7] = *(float *)(*(int *)(iVar8 + 0x1e2) + 0x14);
          }
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  goto joined_r0x004b4bf5;
}


