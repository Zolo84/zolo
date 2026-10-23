// FUN_0049c5d0 @ 49c5d0 size=5966

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049c5d0(int *param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float local_38;
  float local_34;
  int *local_30;
  float local_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bde46;
  piVar13 = param_1 + 0xe86;
  ExceptionList = &pvStack_c;
  for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  local_2c = 0.0;
  param_1[0xe75] = param_1[0xe6d];
  param_1[0xe76] = param_1[0xe6e];
  param_1[0xe77] = param_1[0xe6f];
  param_1[0xe78] = param_1[0xe70];
  param_1[0xe79] = param_1[0xe71];
  param_1[0xe7a] = param_1[0xe72];
  param_1[0xe7b] = param_1[0xe73];
  local_38 = 0.0;
  local_30 = (int *)0x0;
  local_34 = 0.0;
  param_1[0xe85] = (int)(*(float *)((int)param_1 + 0x384e) + (float)param_1[0xe85]);
  param_1[0xe84] = (int)(*(float *)((int)param_1 + 0x384a) + (float)param_1[0xe84]);
  if (DAT_0087b630 == '\0') {
    puVar9 = (undefined4 *)param_1[0x3a29];
    while (puVar9 != (undefined4 *)0x0) {
      uVar4 = FUN_0044e1b0();
      iVar12 = FUN_004e9370(uVar4);
      puVar8 = (undefined4 *)puVar9[2];
      iVar5 = FUN_004e9370(*puVar9);
      puVar9 = puVar8;
      if (((*(int *)(iVar5 + 0x482) != *(int *)(iVar12 + 0x482)) &&
          (iVar12 = FUN_004e9f40(), iVar12 != 0)) &&
         (FUN_004e9370(iVar12), iVar12 != *(int *)(iVar5 + 0x12))) {
        FUN_004ed460(*(undefined4 *)(iVar5 + 0x280),0);
        FUN_004ed460(-*(float *)(iVar5 + 0x280),0);
        FUN_004ed3a0(*(undefined4 *)(iVar5 + 0x27c),0);
        FUN_004ed3a0(-*(float *)(iVar5 + 0x27c),0);
        FUN_004ed400(*(undefined4 *)(iVar5 + 0x278),0);
        FUN_004ed400(-*(float *)(iVar5 + 0x278),0);
        FUN_004ed340(*(undefined4 *)(iVar5 + 0x274),0);
        FUN_004ed340(-*(float *)(iVar5 + 0x274),0);
        FUN_004ea3b0(*(undefined4 *)(iVar5 + 0x270));
        FUN_004ea3b0(-*(float *)(iVar5 + 0x270));
      }
    }
    fVar10 = *(float *)((int)param_1 + 0x3832) + (float)param_1[0xe71];
    if (fVar10 < _DAT_007e3380) {
      fVar10 = _DAT_007e3380;
    }
    param_1[0xe71] = (int)fVar10;
    fVar10 = *(float *)((int)param_1 + 0x3836) + (float)param_1[0xe6d];
    if (fVar10 < _DAT_007e3380) {
      fVar10 = _DAT_007e3380;
    }
    param_1[0xe6d] = (int)fVar10;
    fVar10 = *(float *)((int)param_1 + 0x383e) + (float)param_1[0xe70];
    if (fVar10 < _DAT_007e3380) {
      fVar10 = _DAT_007e3380;
    }
    param_1[0xe70] = (int)fVar10;
    fVar10 = *(float *)((int)param_1 + 0x3842) + (float)param_1[0xe6e];
    if (fVar10 < _DAT_007e3380) {
      fVar10 = _DAT_007e3380;
    }
    param_1[0xe6e] = (int)fVar10;
    fVar10 = *(float *)((int)param_1 + 0x383a) + (float)param_1[0xe6f];
    if (fVar10 < _DAT_007e3380) {
      fVar10 = _DAT_007e3380;
    }
    param_1[0xe6f] = (int)fVar10;
    goto LAB_0049dac0;
  }
  fVar10 = *(float *)((int)param_1 + 0x390e);
  iVar12 = FUN_0044ab40();
  fVar10 = (float)iVar12 * fVar10;
  FUN_0044ad90(fVar10);
  fVar10 = (float)param_1[0x46a3] * _DAT_00d7ca64 * *(float *)((int)param_1 + 0x37ee) * fVar10;
  fVar2 = fVar10 + (float)param_1[0xe71];
  if (fVar2 < _DAT_007e3380) {
    fVar2 = _DAT_007e3380;
  }
  param_1[0xe71] = (int)fVar2;
  param_1[0xe8b] = (int)(fVar10 + (float)param_1[0xe8b]);
  fVar14 = (float10)FUN_0049b260();
  fVar10 = (float)param_1[0xe73];
  param_1[0xe73] = (int)(float)(fVar14 + (float10)fVar10);
  if ((float10)DAT_008775a4 < fVar14 + (float10)fVar10) {
    param_1[0xe73] = (int)DAT_008775a4;
  }
  uVar4 = FUN_0044e1b0();
  iVar12 = FUN_004e9370(uVar4);
  puVar9 = (undefined4 *)param_1[0x3a29];
  while (puVar9 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar9[2];
    iVar5 = FUN_004e9370(*puVar9);
    if ((*(undefined4 **)(iVar5 + 0x482) == (undefined4 *)0x0) || (*(int *)(iVar12 + 0x482) == 0)) {
LAB_0049c9cf:
      fVar14 = (float10)FUN_004ec900();
      fVar14 = fVar14 + (float10)local_38;
      fVar15 = (float10)FUN_004ec7e0();
      fVar15 = fVar15 + (float10)(float)local_30;
      fVar16 = (float10)FUN_004ec5a0();
      fVar16 = fVar16 + (float10)local_2c;
      fVar17 = (float10)FUN_004ec6c0();
      fVar17 = fVar17 + (float10)local_34;
      iVar6 = FUN_004e9f40();
      if (iVar6 != 0) {
        FUN_004e9370(iVar6);
        if (iVar6 == *(int *)(iVar5 + 0x12)) {
          uVar4 = 0;
          fVar18 = (float10)FUN_004ec5a0(0);
          FUN_004ed460((float)fVar18,uVar4);
          uVar4 = 0;
          fVar18 = (float10)FUN_004ec6c0(0);
          FUN_004ed340((float)fVar18,uVar4);
          uVar4 = 0;
          fVar18 = (float10)FUN_004ec900(0);
          FUN_004ed3a0((float)fVar18,uVar4);
          uVar4 = 0;
          fVar18 = (float10)FUN_004ec7e0(0);
          FUN_004ed400((float)fVar18,uVar4);
        }
        else {
          fVar10 = *(float *)(iVar5 + 0x280);
          uVar4 = 0;
          fVar18 = (float10)FUN_004ec5a0(0);
          FUN_004ed460((float)(fVar18 + (float10)fVar10),uVar4);
          fVar10 = *(float *)(iVar5 + 0x27c);
          uVar4 = 0;
          *(undefined4 *)(iVar5 + 0x280) = 0;
          fVar18 = (float10)FUN_004ec900(0);
          FUN_004ed3a0((float)(fVar18 + (float10)fVar10),uVar4);
          fVar10 = *(float *)(iVar5 + 0x278);
          uVar4 = 0;
          *(undefined4 *)(iVar5 + 0x27c) = 0;
          fVar18 = (float10)FUN_004ec7e0(0);
          FUN_004ed400((float)(fVar18 + (float10)fVar10),uVar4);
          fVar10 = *(float *)(iVar5 + 0x274);
          uVar4 = 0;
          *(undefined4 *)(iVar5 + 0x278) = 0;
          fVar18 = (float10)FUN_004ec6c0(0);
          FUN_004ed340((float)(fVar18 + (float10)fVar10),uVar4);
          *(undefined4 *)(iVar5 + 0x274) = 0;
          FUN_004ea3b0(*(undefined4 *)(iVar5 + 0x270));
          *(undefined4 *)(iVar5 + 0x270) = 0;
        }
      }
    }
    else {
      iVar6 = (**(code **)**(undefined4 **)(iVar5 + 0x482))();
      iVar6 = *(int *)(iVar6 + 0x6c);
      iVar7 = (**(code **)**(undefined4 **)(iVar12 + 0x482))();
      if (iVar6 != *(int *)(iVar7 + 0x6c)) goto LAB_0049c9cf;
      fVar14 = (float10)FUN_004ec5a0();
      fVar14 = fVar14 + (float10)(float)param_1[0xe6d];
      if (fVar14 < (float10)_DAT_007e3380) {
        fVar14 = (float10)_DAT_007e3380;
      }
      param_1[0xe6d] = (int)(float)fVar14;
      fVar14 = (float10)FUN_004ec6c0();
      fVar14 = fVar14 + (float10)(float)param_1[0xe70];
      if (fVar14 < (float10)_DAT_007e3380) {
        fVar14 = (float10)_DAT_007e3380;
      }
      param_1[0xe70] = (int)(float)fVar14;
      fVar14 = (float10)FUN_004ec900();
      fVar14 = fVar14 + (float10)(float)param_1[0xe6f];
      if (fVar14 < (float10)_DAT_007e3380) {
        fVar14 = (float10)_DAT_007e3380;
      }
      param_1[0xe6f] = (int)(float)fVar14;
      fVar14 = (float10)FUN_004ec7e0();
      fVar14 = fVar14 + (float10)(float)param_1[0xe6e];
      if (fVar14 < (float10)_DAT_007e3380) {
        fVar14 = (float10)_DAT_007e3380;
      }
      param_1[0xe6e] = (int)(float)fVar14;
      fVar14 = (float10)FUN_004ec900();
      fVar14 = fVar14 + (float10)local_38;
      fVar15 = (float10)FUN_004ec7e0();
      fVar15 = fVar15 + (float10)(float)local_30;
      fVar16 = (float10)FUN_004ec5a0();
      fVar16 = fVar16 + (float10)local_2c;
      fVar17 = (float10)FUN_004ec6c0();
      fVar17 = fVar17 + (float10)local_34;
      fVar18 = (float10)FUN_004ec5a0();
      param_1[0xe86] = (int)(float)(fVar18 + (float10)(float)param_1[0xe86]);
      fVar18 = (float10)FUN_004ec6c0();
      param_1[0xe89] = (int)(float)(fVar18 + (float10)(float)param_1[0xe89]);
      fVar18 = (float10)FUN_004ec7e0();
      param_1[0xe88] = (int)(float)(fVar18 + (float10)(float)param_1[0xe88]);
      fVar18 = (float10)FUN_004ec900();
      param_1[0xe87] = (int)(float)(fVar18 + (float10)(float)param_1[0xe87]);
      fVar10 = *(float *)(iVar5 + 0x270) + (float)param_1[0xe71];
      if (fVar10 < _DAT_007e3380) {
        fVar10 = _DAT_007e3380;
      }
      param_1[0xe71] = (int)fVar10;
      fVar10 = *(float *)(iVar5 + 0x280) + (float)param_1[0xe6d];
      if (fVar10 < _DAT_007e3380) {
        fVar10 = _DAT_007e3380;
      }
      param_1[0xe6d] = (int)fVar10;
      fVar10 = *(float *)(iVar5 + 0x278) + (float)param_1[0xe6e];
      if (fVar10 < _DAT_007e3380) {
        fVar10 = _DAT_007e3380;
      }
      param_1[0xe6e] = (int)fVar10;
      fVar10 = *(float *)(iVar5 + 0x274) + (float)param_1[0xe70];
      if (fVar10 < _DAT_007e3380) {
        fVar10 = _DAT_007e3380;
      }
      param_1[0xe70] = (int)fVar10;
      fVar10 = *(float *)(iVar5 + 0x27c) + (float)param_1[0xe6f];
      if (fVar10 < _DAT_007e3380) {
        fVar10 = _DAT_007e3380;
      }
      param_1[0xe6f] = (int)fVar10;
      *(undefined4 *)(iVar5 + 0x280) = 0;
      *(undefined4 *)(iVar5 + 0x270) = 0;
      *(undefined4 *)(iVar5 + 0x27c) = 0;
      *(undefined4 *)(iVar5 + 0x274) = 0;
      *(undefined4 *)(iVar5 + 0x278) = 0;
    }
    local_2c = (float)fVar16;
    local_30 = (int *)(float)fVar15;
    local_34 = (float)fVar17;
    local_38 = (float)fVar14;
    puVar9 = puVar8;
  }
  param_1[0xe58] = (int)local_38;
  param_1[0xe59] = (int)local_34;
  param_1[0xe57] = (int)local_30;
  param_1[0xe56] = (int)local_2c;
  if (((DAT_00dc1913 != '\0') && (iVar12 = FUN_0044e1d0(), iVar12 != 0)) &&
     ((iVar12 = (**(code **)(*(int *)((int)param_1 + 0xe86a) + 4))(), 1 < iVar12 &&
      (((int)*(char *)(DAT_00893530 + 0x15) +
       ((int)*(char *)(DAT_00893530 + 0x16) + *(short *)(DAT_00893530 + 0x18) * 0xc) * 0x1e) %
       DAT_00dc1914 == 0)))) {
    piVar13 = *(int **)((int)param_1 + 0xe86e);
    while (piVar13 != (int *)0x0) {
      piVar11 = (int *)piVar13[2];
      puVar9 = (undefined4 *)*piVar13;
      puVar8 = (undefined4 *)FUN_0044e1d0();
      piVar13 = piVar11;
      if (((puVar9 != puVar8) && (iVar12 = (**(code **)(puVar9[10] + 4))(), 0 < iVar12)) &&
         (iVar12 = FUN_004e9f80(param_1), 0 < iVar12)) {
        iVar5 = FUN_004e9370(iVar12);
        if (((*(int **)(iVar5 + 0x3d8) != (int *)0x0) && (*(int **)(iVar5 + 0x3d8) == param_1)) &&
           ((iVar6 = FUN_004e9f80(param_1), iVar6 == iVar12 &&
            ((iVar6 = FUN_004e9f40(), 0 < iVar6 && (iVar6 != iVar12)))))) {
          iVar12 = FUN_004e9370(iVar6);
          cVar3 = (**(code **)(*(int *)(iVar12 + 0x158) + 8))();
          if (cVar3 == '\0') {
            if (DAT_00dc1886 == '\0') {
              piVar11 = *(int **)(iVar12 + 0x15c);
              while (piVar11 != (int *)0x0) {
                piVar1 = (int *)piVar11[2];
                iVar6 = *piVar11;
                piVar11 = piVar1;
                if (*(int **)(iVar6 + 0x12a) == param_1) {
                  puVar9 = operator_new(0xc);
                  uStack_4 = 1;
                  if (puVar9 == (undefined4 *)0x0) {
                    puVar9 = (undefined4 *)0x0;
                  }
                  else {
                    FUN_004736e0(0x147,&DAT_0088f230);
                    iVar7 = puVar9[1];
                    *puVar9 = &PTR_FUN_007e6040;
                    *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar6 + 0xc);
                    *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar6 + 0x10);
                    *(undefined4 *)(puVar9[1] + 0x14) = 0;
                  }
                  uStack_4 = 0xffffffff;
                  FUN_00565bf0(puVar9);
                }
              }
            }
            else {
              iVar6 = (**(code **)*puVar9)();
              iVar6 = *(int *)(iVar6 + 0x6c);
              puVar9 = (undefined4 *)FUN_0044e1d0();
              iVar7 = (**(code **)*puVar9)();
              if (iVar6 != *(int *)(iVar7 + 0x6c)) {
                piVar11 = *(int **)(iVar12 + 0x15c);
                while (piVar11 != (int *)0x0) {
                  piVar1 = (int *)piVar11[2];
                  iVar6 = *piVar11;
                  piVar11 = piVar1;
                  if (*(int **)(iVar6 + 0x12a) == param_1) {
                    puVar9 = operator_new(0xc);
                    uStack_4 = 0;
                    if (puVar9 == (undefined4 *)0x0) {
                      puVar9 = (undefined4 *)0x0;
                    }
                    else {
                      FUN_004736e0(0x147,&DAT_0088f230);
                      iVar7 = puVar9[1];
                      *puVar9 = &PTR_FUN_007e6040;
                      *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)(iVar6 + 0xc);
                      *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(iVar6 + 0x10);
                      *(undefined4 *)(puVar9[1] + 0x14) = 0;
                    }
                    uStack_4 = 0xffffffff;
                    FUN_00565bf0(puVar9);
                  }
                }
              }
            }
          }
          FUN_004ea3b0(*(undefined4 *)(iVar12 + 0x270));
          FUN_004ed460(*(undefined4 *)(iVar12 + 0x280),0);
          FUN_004ed400(*(undefined4 *)(iVar12 + 0x278),0);
          FUN_004ed340(*(undefined4 *)(iVar12 + 0x274),0);
          FUN_004ed3a0(*(undefined4 *)(iVar12 + 0x27c),0);
          *(float *)(iVar5 + 0x26c) = *(float *)(iVar12 + 0x26c) + *(float *)(iVar5 + 0x26c);
          *(float *)(iVar5 + 0x268) = *(float *)(iVar12 + 0x268) + *(float *)(iVar5 + 0x268);
          *(undefined4 *)(iVar12 + 0x280) = 0;
          *(undefined4 *)(iVar12 + 0x270) = 0;
          *(undefined4 *)(iVar12 + 0x27c) = 0;
          *(undefined4 *)(iVar12 + 0x274) = 0;
          *(undefined4 *)(iVar12 + 0x278) = 0;
          *(undefined4 *)(iVar12 + 0x26c) = 0;
          *(undefined4 *)(iVar12 + 0x268) = 0;
        }
      }
    }
  }
  fVar10 = *(float *)((int)param_1 + 0x3832) + (float)param_1[0xe71];
  if (fVar10 < _DAT_007e3380) {
    fVar10 = _DAT_007e3380;
  }
  param_1[0xe71] = (int)fVar10;
  fVar10 = *(float *)((int)param_1 + 0x3836) + (float)param_1[0xe6d];
  if (fVar10 < _DAT_007e3380) {
    fVar10 = _DAT_007e3380;
  }
  param_1[0xe6d] = (int)fVar10;
  fVar10 = *(float *)((int)param_1 + 0x383e) + (float)param_1[0xe70];
  if (fVar10 < _DAT_007e3380) {
    fVar10 = _DAT_007e3380;
  }
  param_1[0xe70] = (int)fVar10;
  fVar10 = *(float *)((int)param_1 + 0x3842) + (float)param_1[0xe6e];
  if (fVar10 < _DAT_007e3380) {
    fVar10 = _DAT_007e3380;
  }
  param_1[0xe6e] = (int)fVar10;
  fVar10 = *(float *)((int)param_1 + 0x383a) + (float)param_1[0xe6f];
  if (fVar10 < _DAT_007e3380) {
    fVar10 = _DAT_007e3380;
  }
  param_1[0xe6f] = (int)fVar10;
  if (((DAT_00dc1540 == '\0') ||
      (iVar12 = *(int *)(*(int *)((int)param_1 + 0x12da) + 0x3b30), iVar12 == 0)) ||
     (piVar13 = (int *)(&DAT_0089cad8)[iVar12], piVar13 == (int *)0x0)) goto LAB_0049dac0;
  if (((DAT_00dc18c1 != '\0') && (_DAT_008775f4 < (float)param_1[0xe72])) &&
     ((cVar3 = FUN_004a7520(), cVar3 == '\0' || ((&DAT_00dc0fd4)[*(int *)((int)param_1 + 6)] != 0)))
     ) {
    fVar10 = (float)param_1[0xe72] - _DAT_008775f4;
    param_1[0xeb4] = (int)((float)param_1[0xeb4] - fVar10);
    cVar3 = (**(code **)(*param_1 + 0x1c))();
    fVar2 = -fVar10 + (float)param_1[0xe72];
    if ((cVar3 != '\0') && (fVar2 < _DAT_007e3380)) {
      fVar2 = _DAT_007e3380;
    }
    param_1[0xe72] = (int)fVar2;
    cVar3 = (**(code **)(*piVar13 + 0x1c))();
    fVar2 = fVar10 + (float)piVar13[0xe72];
    if ((cVar3 != '\0') && (fVar2 < _DAT_007e3380)) {
      fVar2 = _DAT_007e3380;
    }
    piVar13[0xe72] = (int)fVar2;
    piVar13[0xeae] = (int)(fVar10 + (float)piVar13[0xeae]);
  }
  local_2c = -NAN;
  puVar9 = (undefined4 *)FUN_0044e1d0();
  (**(code **)*puVar9)();
  cVar3 = FUN_004cce42(piVar13);
  if (cVar3 == '\0') goto LAB_0049dac0;
  puVar9 = (undefined4 *)FUN_0044e1d0();
  (**(code **)*puVar9)();
  fVar10 = (float)FUN_004e9f80(piVar13);
  if (fVar10 == -NAN) goto LAB_0049dac0;
  iVar12 = FUN_004e9370(fVar10);
  if (*(int **)(iVar12 + 0x3d8) == piVar13) {
    iVar12 = FUN_0044e1b0();
    if ((float)iVar12 != fVar10) {
      iVar12 = FUN_004e9370(fVar10);
      if (*(char *)(iVar12 + 0x470) == '\0') goto LAB_0049dac0;
      goto LAB_0049d1ba;
    }
    fVar10 = 0.0;
  }
  else {
    puVar9 = (undefined4 *)FUN_0044e1d0();
    iVar12 = (**(code **)*puVar9)();
    local_30 = *(int **)(*(int *)(iVar12 + 0x6c) + 4);
    iVar12 = -1;
    if (local_30 == (int *)0x0) goto LAB_0049dac0;
    do {
      iVar5 = *local_30;
      local_30 = (int *)local_30[2];
      fVar10 = (float)iVar12;
      fVar2 = local_2c;
      if ((((iVar5 != 0) && (iVar5 = (**(code **)(*(int *)(iVar5 + 0x28) + 4))(), 0 < iVar5)) &&
          (piVar11 = (int *)FUN_004c9f81(), piVar11 == piVar13)) &&
         ((iVar5 = FUN_004e9f40(), 0 < iVar5 &&
          (fVar10 = (float)iVar5, fVar2 = (float)iVar5, 0 < iVar12)))) {
        iVar12 = FUN_004e9370(iVar12);
        iVar6 = FUN_004e9370(iVar5);
        iVar12 = (**(code **)(*(int *)(iVar12 + 0x158) + 4))();
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x158) + 4))();
        fVar10 = local_2c;
        fVar2 = local_2c;
        if (iVar12 < iVar6) {
          fVar10 = (float)iVar5;
          fVar2 = (float)iVar5;
        }
      }
      local_2c = fVar2;
      iVar12 = (int)fVar10;
    } while (local_30 != (int *)0x0);
LAB_0049d1ba:
    if (fVar10 == -NAN) goto LAB_0049dac0;
  }
  local_38 = DAT_008775fc;
  if (DAT_00dc18cc != '\0') {
    local_38 = (float)param_1[0xef0] * DAT_008775fc;
  }
  if (local_38 < (float)param_1[0xe6f]) {
    local_38 = (float)param_1[0xe6f] - local_38;
    if (fVar10 == 0.0) {
      if ((float)piVar13[0xec9] == _DAT_007e3380) {
        param_1[0xeb1] = (int)((float)param_1[0xeb1] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe6f];
        if (-local_38 + (float)param_1[0xe6f] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe6f] = (int)fVar2;
        piVar13[0xeab] = (int)(local_38 + (float)piVar13[0xeab]);
        fVar2 = local_38 + (float)piVar13[0xe6f];
        if (local_38 + (float)piVar13[0xe6f] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        piVar13[0xe6f] = (int)fVar2;
      }
    }
    else {
      iVar12 = FUN_004e9370(fVar10);
      fVar2 = DAT_00877598 - *(float *)(iVar12 + 0x27c);
      if (fVar2 < local_38) {
        local_38 = fVar2;
      }
      if (_DAT_007e3380 < local_38) {
        param_1[0xeb1] = (int)((float)param_1[0xeb1] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe6f];
        if (-local_38 + (float)param_1[0xe6f] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe6f] = (int)fVar2;
        uVar4 = 1;
        piVar13[0xecf] = (int)(local_38 + (float)piVar13[0xecf]);
        FUN_004e9370(fVar10,local_38,1);
        FUN_004ed3a0(local_38,uVar4);
      }
    }
  }
  local_38 = DAT_008775fc;
  if (DAT_00dc18cc != '\0') {
    local_38 = (float)param_1[0xeef] * DAT_008775fc;
  }
  if (local_38 < (float)param_1[0xe6d]) {
    local_38 = (float)param_1[0xe6d] - local_38;
    if (fVar10 == 0.0) {
      if ((float)piVar13[0xec8] == _DAT_007e3380) {
        param_1[0xeb0] = (int)((float)param_1[0xeb0] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe6d];
        if (-local_38 + (float)param_1[0xe6d] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe6d] = (int)fVar2;
        piVar13[0xeaa] = (int)(local_38 + (float)piVar13[0xeaa]);
        fVar2 = local_38 + (float)piVar13[0xe6d];
        if (local_38 + (float)piVar13[0xe6d] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        piVar13[0xe6d] = (int)fVar2;
      }
    }
    else {
      iVar12 = FUN_004e9370(fVar10);
      fVar2 = DAT_0087759c - *(float *)(iVar12 + 0x280);
      if (fVar2 < local_38) {
        local_38 = fVar2;
      }
      if (_DAT_007e3380 < local_38) {
        param_1[0xeb0] = (int)((float)param_1[0xeb0] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe6d];
        if (-local_38 + (float)param_1[0xe6d] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe6d] = (int)fVar2;
        uVar4 = 1;
        piVar13[0xece] = (int)(local_38 + (float)piVar13[0xece]);
        FUN_004e9370(fVar10,local_38,1);
        FUN_004ed460(local_38,uVar4);
      }
    }
  }
  local_38 = DAT_008775fc;
  if (DAT_00dc18cc != '\0') {
    local_38 = (float)param_1[0xef2] * DAT_008775fc;
  }
  if (local_38 < (float)param_1[0xe70]) {
    local_38 = (float)param_1[0xe70] - local_38;
    if (fVar10 == 0.0) {
      if ((float)piVar13[0xecb] == _DAT_007e3380) {
        param_1[0xeb3] = (int)((float)param_1[0xeb3] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe70];
        if (-local_38 + (float)param_1[0xe70] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe70] = (int)fVar2;
        piVar13[0xead] = (int)(local_38 + (float)piVar13[0xead]);
        fVar2 = local_38 + (float)piVar13[0xe70];
        if (local_38 + (float)piVar13[0xe70] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        piVar13[0xe70] = (int)fVar2;
      }
    }
    else {
      iVar12 = FUN_004e9370(fVar10);
      fVar2 = DAT_00877598 - *(float *)(iVar12 + 0x274);
      if (fVar2 < local_38) {
        local_38 = fVar2;
      }
      if (_DAT_007e3380 < local_38) {
        param_1[0xeb3] = (int)((float)param_1[0xeb3] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe70];
        if (-local_38 + (float)param_1[0xe70] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe70] = (int)fVar2;
        uVar4 = 1;
        piVar13[0xed1] = (int)(local_38 + (float)piVar13[0xed1]);
        FUN_004e9370(fVar10,local_38,1);
        FUN_004ed340(local_38,uVar4);
      }
    }
  }
  local_38 = DAT_008775fc;
  if (DAT_00dc18cc != '\0') {
    local_38 = (float)param_1[0xef1] * DAT_008775fc;
  }
  if (local_38 < (float)param_1[0xe6e]) {
    local_38 = (float)param_1[0xe6e] - local_38;
    if (fVar10 == 0.0) {
      if ((float)piVar13[0xeca] == _DAT_007e3380) {
        param_1[0xeb2] = (int)((float)param_1[0xeb2] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe6e];
        if (-local_38 + (float)param_1[0xe6e] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe6e] = (int)fVar2;
        fVar2 = local_38 + (float)piVar13[0xe6e];
        if (local_38 + (float)piVar13[0xe6e] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        piVar13[0xe6e] = (int)fVar2;
        piVar13[0xeac] = (int)(local_38 + (float)piVar13[0xeac]);
      }
    }
    else {
      iVar12 = FUN_004e9370(fVar10);
      fVar2 = DAT_00877598 - *(float *)(iVar12 + 0x278);
      if (fVar2 < local_38) {
        local_38 = fVar2;
      }
      if (_DAT_007e3380 < local_38) {
        param_1[0xeb2] = (int)((float)param_1[0xeb2] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe6e];
        if (-local_38 + (float)param_1[0xe6e] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe6e] = (int)fVar2;
        uVar4 = 1;
        piVar13[0xed0] = (int)(local_38 + (float)piVar13[0xed0]);
        FUN_004e9370(fVar10,local_38,1);
        FUN_004ed400(local_38,uVar4);
      }
    }
  }
  if ((DAT_00dc18c0 != '\0') && (_DAT_008775f8 * (float)param_1[0xef4] < (float)param_1[0xe71])) {
    local_38 = (float)param_1[0xe71] - _DAT_008775f8 * (float)param_1[0xef4];
    if (fVar10 == 0.0) {
      if ((float)piVar13[0xecd] == _DAT_007e3380) {
        param_1[0xeb5] = (int)((float)param_1[0xeb5] - local_38);
        fVar10 = -local_38 + (float)param_1[0xe71];
        if (-local_38 + (float)param_1[0xe71] < _DAT_007e3380) {
          fVar10 = _DAT_007e3380;
        }
        param_1[0xe71] = (int)fVar10;
        piVar13[0xeaf] = (int)(local_38 + (float)piVar13[0xeaf]);
        fVar10 = local_38 + (float)piVar13[0xe71];
        if (local_38 + (float)piVar13[0xe71] < _DAT_007e3380) {
          fVar10 = _DAT_007e3380;
        }
        piVar13[0xe71] = (int)fVar10;
      }
    }
    else {
      iVar12 = FUN_004e9370(fVar10);
      fVar2 = DAT_0087759c - *(float *)(iVar12 + 0x270);
      if (fVar2 < local_38) {
        local_38 = fVar2;
      }
      if (_DAT_007e3380 < local_38) {
        param_1[0xeb5] = (int)((float)param_1[0xeb5] - local_38);
        fVar2 = -local_38 + (float)param_1[0xe71];
        if (-local_38 + (float)param_1[0xe71] < _DAT_007e3380) {
          fVar2 = _DAT_007e3380;
        }
        param_1[0xe71] = (int)fVar2;
        piVar13[0xed3] = (int)(local_38 + (float)piVar13[0xed3]);
        FUN_004e9370(fVar10,local_38);
        FUN_004ea3b0(local_38);
      }
    }
  }
LAB_0049dac0:
  fVar10 = *(float *)((int)param_1 + 0x4086) + *(float *)((int)param_1 + 0x408e);
  fVar2 = *(float *)((int)param_1 + 0x409a) + *(float *)((int)param_1 + 0x4092);
  param_1[0xe6c] = 0;
  if (fVar10 < fVar2) {
    fVar10 = fVar2;
  }
  param_1[0xe66] = (int)fVar10;
  fVar10 = *(float *)((int)param_1 + 0x409e) + *(float *)((int)param_1 + 0x4096);
  fVar2 = *(float *)((int)param_1 + 0x4082) + *(float *)((int)param_1 + 0x408a);
  if (fVar10 < fVar2) {
    fVar10 = fVar2;
  }
  param_1[0xe68] = *(int *)((int)param_1 + 0x4092);
  param_1[0xe69] = *(int *)((int)param_1 + 0x4096);
  param_1[0xe67] = (int)fVar10;
  param_1[0xe6b] = *(int *)((int)param_1 + 0x408e);
  param_1[0xe6a] = *(int *)((int)param_1 + 0x408a);
  if (DAT_0087b630 != '\0') {
    fVar10 = *(float *)(param_1[0x91] + 0x6a) * (float)param_1[0xe49] *
             *(float *)((int)param_1 + 0x3906) * *(float *)((int)param_1 + 0x3802) *
             (float)param_1[0x4689] * _DAT_00d7ca6c;
    param_1[0xe8a] = (int)(fVar10 + (float)param_1[0xe8a]);
    cVar3 = (**(code **)(*param_1 + 0x1c))();
    fVar10 = fVar10 + (float)param_1[0xe72];
    if ((cVar3 != '\0') && (fVar10 < _DAT_007e3380)) {
      fVar10 = _DAT_007e3380;
    }
    param_1[0xe72] = (int)fVar10;
  }
  fVar10 = *(float *)((int)param_1 + 0x3846);
  cVar3 = (**(code **)(*param_1 + 0x1c))();
  fVar10 = fVar10 + (float)param_1[0xe72];
  if ((cVar3 != '\0') && (fVar10 < _DAT_007e3380)) {
    fVar10 = _DAT_007e3380;
  }
  param_1[0xe72] = (int)fVar10;
  if (DAT_0087b631 != '\0') {
    fVar10 = _DAT_007e3380;
    if (_DAT_007e3380 < (float)param_1[0xe72]) {
      uVar4 = *(undefined4 *)((int)param_1 + 6);
      fVar14 = (float10)FUN_00586a70(0xb,0,param_1);
      iVar12 = FUN_00451250(uVar4);
      fVar10 = (float)iVar12 * (float)fVar14;
    }
    if (fVar10 < (float)param_1[0xe72]) {
      fVar10 = _DAT_007e3380;
      if (_DAT_007e3380 < (float)param_1[0xe72]) {
        uVar4 = *(undefined4 *)((int)param_1 + 6);
        fVar14 = (float10)FUN_00586a70(0xb,0,param_1);
        iVar12 = FUN_00451250(uVar4);
        fVar10 = (float)iVar12 * (float)fVar14;
      }
      cVar3 = (**(code **)(*param_1 + 0x1c))();
      fVar10 = -fVar10 + (float)param_1[0xe72];
      if ((cVar3 != '\0') && (fVar10 < _DAT_007e3380)) {
        fVar10 = _DAT_007e3380;
      }
      param_1[0xe72] = (int)fVar10;
      *(undefined1 *)((int)param_1 + 0x12d2) = 1;
      ExceptionList = pvStack_c;
      return;
    }
    *(undefined1 *)((int)param_1 + 0x12d2) = 0;
  }
  ExceptionList = pvStack_c;
  return;
}


