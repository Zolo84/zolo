// FUN_004d31d0 @ 4d31d0 size=1502

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d31d0(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  int local_dc;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  if (*(int *)(iVar8 + 0x3d8) == *(int *)(param_1 + 0x12a)) {
    if (*(char *)(param_1 + 0x19) == '\0') {
      if (*(char *)(param_1 + 0x16) != '\0') {
        iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
        iVar8 = *(int *)(iVar8 + 0x482);
        iVar9 = FUN_0044e1d0();
        if (iVar8 == iVar9) {
          bVar5 = true;
          goto LAB_004d3248;
        }
      }
      goto LAB_004d3246;
    }
    bVar5 = true;
  }
  else {
LAB_004d3246:
    bVar5 = false;
  }
LAB_004d3248:
  if (DAT_00dc1913 == '\0') {
    iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    piVar4 = *(int **)(*(int *)(iVar8 + 0x482) + 0x2c);
    if (bVar5) {
      iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      piVar4 = *(int **)(*(int *)(iVar8 + 0x482) + 0x2c);
    }
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      iVar8 = *piVar4;
      *(float *)(param_1 + 0x24) =
           *(float *)(iVar8 + 0x1fe) + *(float *)(iVar8 + 0x6a) + *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x2c) =
           *(float *)(iVar8 + 0x202) + *(float *)(iVar8 + 0x72) + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x28) =
           *(float *)(iVar8 + 0x206) + *(float *)(iVar8 + 0x6e) + *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x30) =
           *(float *)(iVar8 + 0x20a) + *(float *)(iVar8 + 0x76) + *(float *)(param_1 + 0x30);
      piVar4 = piVar2;
    }
    goto LAB_004d35e8;
  }
  if (bVar5) {
    iVar8 = *(int *)(param_1 + 0x120);
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1 + 0x154)];
    local_dc = (&DAT_0089cad8)[*(int *)(param_1 + 0x150)];
LAB_004d32da:
    bVar6 = false;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x11c);
    iVar9 = (&DAT_0089cad8)[*(int *)(param_1 + 0x150)];
    local_dc = (&DAT_0089cad8)[*(int *)(param_1 + 0x154)];
    if (((local_dc == 0) || (iVar9 == 0)) ||
       (bVar6 = true, *(int *)(*(int *)(iVar9 + 0x12da) + 0x3b30) != *(int *)(local_dc + 6)))
    goto LAB_004d32da;
  }
  if (((local_dc != 0) && (iVar9 != 0)) && (0 < iVar8)) {
    FUN_00442b90();
    local_cc = 0.0;
    local_c8 = 0.0;
    local_c0 = 0.0;
    local_c4 = 0.0;
    iVar8 = FUN_004e9370(iVar8);
    iVar8 = (**(code **)**(undefined4 **)(iVar8 + 0x482))();
    piVar4 = *(int **)(*(int *)(iVar8 + 0x6c) + 4);
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      iVar8 = *piVar4;
      iVar10 = FUN_004c9f81();
      piVar4 = piVar2;
      if (iVar10 == iVar9) {
        if ((bVar6) && (iVar10 = FUN_0044e1d0(), iVar10 == iVar8)) {
          if (DAT_00dc1540 != '\0') {
            if (*(float *)(local_dc + 0x3b20) == _DAT_007e3380) {
              fVar1 = DAT_008775fc;
              if (DAT_00dc18cc != '\0') {
                fVar1 = *(float *)(iVar9 + 0x3bbc) * _DAT_008775f8;
              }
              *(float *)(param_1 + 0x24) =
                   (*(float *)(iVar9 + 0x39b4) - fVar1) + *(float *)(param_1 + 0x24);
            }
            if (*(float *)(local_dc + 0x3b34) == _DAT_007e3380) {
              fVar1 = DAT_008775fc;
              if (DAT_00dc18cc != '\0') {
                fVar1 = *(float *)(iVar9 + 0x3bd0) * _DAT_008775f8;
              }
              *(float *)(param_1 + 0x20) =
                   (*(float *)(iVar9 + 0x39c4) - fVar1) + *(float *)(param_1 + 0x20);
            }
            if (*(float *)(local_dc + 0x3b24) == _DAT_007e3380) {
              fVar1 = DAT_008775fc;
              if (DAT_00dc18cc != '\0') {
                fVar1 = *(float *)(iVar9 + 0x3bc0) * DAT_008775fc;
              }
              *(float *)(param_1 + 0x28) =
                   (*(float *)(iVar9 + 0x39bc) - fVar1) + *(float *)(param_1 + 0x28);
            }
            if (*(float *)(local_dc + 0x3b2c) == _DAT_007e3380) {
              fVar1 = DAT_008775fc;
              if (DAT_00dc18cc != '\0') {
                fVar1 = *(float *)(iVar9 + 0x3bc8) * DAT_008775fc;
              }
              *(float *)(param_1 + 0x2c) =
                   (*(float *)(iVar9 + 0x39c0) - fVar1) + *(float *)(param_1 + 0x2c);
            }
            if (*(float *)(local_dc + 0x3b28) == _DAT_007e3380) {
              fVar1 = DAT_008775fc;
              if (DAT_00dc18cc != '\0') {
                fVar1 = *(float *)(iVar9 + 0x3bc4) * DAT_008775fc;
              }
              *(float *)(param_1 + 0x30) =
                   (*(float *)(iVar9 + 0x39b8) - fVar1) + *(float *)(param_1 + 0x30);
            }
          }
        }
        else {
          piVar2 = *(int **)(iVar8 + 0x2c);
          while (piVar2 != (int *)0x0) {
            piVar3 = (int *)piVar2[2];
            iVar8 = *piVar2;
            *(float *)(param_1 + 0x24) = *(float *)(iVar8 + 0x6a) + *(float *)(param_1 + 0x24);
            *(float *)(param_1 + 0x2c) = *(float *)(iVar8 + 0x72) + *(float *)(param_1 + 0x2c);
            *(float *)(param_1 + 0x28) = *(float *)(iVar8 + 0x6e) + *(float *)(param_1 + 0x28);
            *(float *)(param_1 + 0x30) = *(float *)(iVar8 + 0x76) + *(float *)(param_1 + 0x30);
            *(float *)(param_1 + 0x20) = *(float *)(iVar8 + 0x66) + *(float *)(param_1 + 0x20);
            fVar11 = (float10)FUN_004ec4d0();
            local_cc = (float)((float10)*(float *)(iVar8 + 0x1fe) * fVar11 + (float10)local_cc);
            local_c4 = (float)((float10)*(float *)(iVar8 + 0x202) * fVar11 + (float10)local_c4);
            local_c8 = (float)((float10)*(float *)(iVar8 + 0x206) * fVar11 + (float10)local_c8);
            local_c0 = (float)((float10)*(float *)(iVar8 + 0x20a) * fVar11 + (float10)local_c0);
            piVar2 = piVar3;
          }
        }
      }
    }
    cVar7 = FUN_0044beb0();
    if (cVar7 == '\0') {
      fVar1 = *(float *)(iVar9 + 0x23c);
    }
    else {
      fVar1 = *(float *)(iVar9 + 0x240);
    }
    fVar1 = fVar1 * *(float *)(*(int *)(iVar9 + 0x244) + 0x6e);
    *(float *)(param_1 + 0x24) =
         *(float *)(iVar9 + 0x37f2) * fVar1 * local_cc + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x2c) =
         *(float *)(iVar9 + 0x37fe) * fVar1 * local_c4 + *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x28) =
         *(float *)(iVar9 + 0x37fa) * fVar1 * local_c8 + *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x30) =
         *(float *)(iVar9 + 0x37f6) * fVar1 * local_c0 + *(float *)(param_1 + 0x30);
  }
LAB_004d35e8:
  if ((!bVar5) && (DAT_00dc1888 != '\0')) {
    FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    iVar8 = FUN_004e9f40();
    if (0 < iVar8) {
      iVar8 = FUN_004e9370(iVar8);
      if ((*(int *)(iVar8 + 0x3d8) != 0) &&
         (*(int *)(*(int *)(iVar8 + 0x3d8) + 6) == *(int *)(param_1 + 0x150))) {
        if (_DAT_007e3380 < *(float *)(iVar8 + 0x280)) {
          fVar1 = *(float *)(iVar8 + 0x268) * _DAT_00dc188c * _DAT_008775a0;
          if (DAT_0087759c <= fVar1) {
            fVar1 = DAT_0087759c;
          }
          fVar1 = *(float *)(iVar8 + 0x280) - fVar1;
          if (_DAT_007e3380 < fVar1) {
            *(float *)(param_1 + 0x24) = fVar1 + *(float *)(param_1 + 0x24);
          }
        }
        if (_DAT_007e3380 < *(float *)(iVar8 + 0x270)) {
          fVar1 = *(float *)(iVar8 + 0x26c) * _DAT_00dc188c * _DAT_008775a0;
          if (DAT_0087759c <= fVar1) {
            fVar1 = DAT_0087759c;
          }
          fVar1 = *(float *)(iVar8 + 0x270) - fVar1;
          if (_DAT_007e3380 < fVar1) {
            *(float *)(param_1 + 0x20) = fVar1 + *(float *)(param_1 + 0x20);
            return;
          }
        }
      }
    }
  }
  return;
}


