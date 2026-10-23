// FUN_00484810 @ 484810 size=5813

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00484810(int *param_1)

{
  float fVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined2 *puVar19;
  uint *puVar20;
  bool bVar21;
  float10 fVar22;
  double in_stack_fffffe4c;
  double in_stack_fffffe54;
  int *local_194;
  undefined2 uVar23;
  float fStack_17c;
  float local_178;
  int local_174;
  undefined4 *puStack_170;
  short sStack_16c;
  undefined2 uStack_16a;
  undefined2 uStack_168;
  undefined4 *local_164;
  int *local_160;
  undefined4 *local_15c;
  undefined **ppuStack_158;
  uint *puStack_154;
  uint *puStack_150;
  int iStack_14c;
  undefined1 uStack_148;
  int *local_144;
  uint uStack_140;
  int iStack_138;
  undefined1 uStack_134;
  char cStack_133;
  char cStack_132;
  short sStack_130;
  undefined2 uStack_12c;
  undefined4 uStack_12a;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined1 auStack_11c [8];
  CHAR aCStack_114 [256];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007bd66c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  param_1[0xe63] = 0;
  param_1[0xe64] = 0;
  param_1[0xe65] = 0;
  _local_194 = (double)CONCAT44(0x484854,local_194);
  local_160 = param_1;
  FUN_0044bfa0();
  _local_194 = (double)CONCAT44(0x484859,local_194);
  cVar7 = FUN_0042e980();
  if ((cVar7 != '\0') &&
     (((int)*(char *)(DAT_00893530 + 0x15) + *(int *)((int)param_1 + 6)) % 0xe == 0)) {
    _local_194 = (double)CONCAT44(0x48487e,local_194);
    FUN_004a8000();
  }
  if ((int)*(char *)(DAT_00893530 + 0x15) % 7 == 0) {
    _local_194 = (double)CONCAT44(0x48489f,local_194);
    FUN_00468480();
    if (DAT_00dc4b5e != '\0') {
      fVar1 = _DAT_007e3380;
      if (_DAT_007e3380 <
          (*(float *)((int)param_1 + 0x11836) + *(float *)((int)param_1 + 0x1183a) +
          *(float *)((int)param_1 + 0x1183e)) - _DAT_007e6a94) {
        _local_194 = (double)CONCAT44(0x4848d8,local_194);
        iVar8 = FUN_0044ab40();
        fVar1 = _DAT_007e3380;
        if (0 < iVar8) {
          local_15c = (undefined4 *)
                      (*(float *)((int)param_1 + 0x11836) + *(float *)((int)param_1 + 0x1183a) +
                      *(float *)((int)param_1 + 0x1183e));
          _local_194 = (double)CONCAT44(0x4848f9,local_194);
          iVar8 = FUN_0044ab40();
          fVar1 = (float)local_15c / (float)iVar8;
        }
      }
      local_144 = *(int **)((int)param_1 + 0x11836);
      local_15c = *(undefined4 **)((int)param_1 + 0x1183a);
      fVar3 = *(float *)((int)param_1 + 0x1183e);
      local_164 = (undefined4 *)
                  (*(float *)((int)param_1 + 0x11836) + *(float *)((int)param_1 + 0x1183a) +
                  *(float *)((int)param_1 + 0x1183e));
      _local_194 = (double)fVar1;
      FUN_0044ab40();
      in_stack_fffffe54 = (double)(fVar3 - _DAT_007e34e0);
      in_stack_fffffe4c = (double)((float)local_144 - _DAT_007e34e0);
      uVar9 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))
                        ((double)((float)local_164 - _DAT_007e6a94),in_stack_fffffe4c,
                         in_stack_fffffe54);
      FUN_00429a00(s__s___Military_Scores___Total_Arm_0083d0b4,uVar9);
    }
  }
  _local_194 = (double)CONCAT44(0x4849bf,local_194);
  FUN_0049c5d0();
  _local_194 = (double)CONCAT44(0x4849c6,local_194);
  FUN_0049a890();
  _local_194 = (double)CONCAT44(0x4849cd,local_194);
  FUN_0049aec0();
  _local_194 = (double)CONCAT44((float)param_1[0xe49] * *(float *)((int)param_1 + 0x3906),0x4849ed);
  FUN_0044ad90();
  iVar8 = DAT_00877554;
  _local_194 = (double)CONCAT44(0x4849fa,local_194);
  iVar10 = FUN_004a30c0();
  if (iVar8 <= iVar10) {
    iVar10 = iVar8;
  }
  if (iVar10 < DAT_00877554) {
    puStack_170 = (undefined4 *)((int)param_1 + iVar10 * 6 + 0x3674);
    do {
      _local_194 = (double)CONCAT44(iVar10,&uStack_12c);
      uVar11 = FUN_0044ae20();
      _local_194 = (double)CONCAT44(uVar11,0x484a30);
      iVar8 = FUN_00428ee0();
      if (((iVar8 != 0) && (iVar8 != 8)) && (*(int *)(iVar8 + 0xd0) != 0)) {
        _local_194 = 2.54662901903268e-313;
        puVar12 = operator_new(0xc);
        uStack_c = 0;
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 0xd0);
          _local_194 = (double)CONCAT44(param_1 + 1,0x187);
          FUN_00498820();
          iVar4 = puVar12[1];
          *puVar12 = &PTR_FUN_007e5398;
          *(undefined4 *)(iVar4 + 0xe) = *(undefined4 *)(iVar8 + 0xc);
          *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(iVar8 + 0x10);
          *(undefined4 *)(puVar12[1] + 0x14) = 0;
        }
        uStack_c = 0xffffffff;
        _local_194 = (double)CONCAT44(puVar12,0x484ac3);
        FUN_00565c30();
        sStack_16c = DAT_0088f28c;
        uStack_16a = (undefined2)DAT_0088f28e;
        uStack_168 = (undefined2)((uint)DAT_0088f28e >> 0x10);
        *puStack_170 = CONCAT22(uStack_16a,DAT_0088f28c);
        *(undefined2 *)(puStack_170 + 1) = uStack_168;
      }
      iVar10 = iVar10 + 1;
      puStack_170 = (undefined4 *)((int)puStack_170 + 6);
    } while (iVar10 < DAT_00877554);
  }
  _local_194 = (double)CONCAT44(0x484b0e,local_194);
  fVar22 = (float10)FUN_0049dd50();
  _local_194 = (double)CONCAT44((float)((float10)(float)param_1[0x8d] + fVar22),0x484b23);
  FUN_00490d50();
  piVar15 = (int *)param_1[0x1142];
  while (piVar15 != (int *)0x0) {
    piVar18 = (int *)piVar15[2];
    piVar17 = (int *)*piVar15;
    _local_194 = (double)CONCAT44(0x484b41,local_194);
    cVar7 = FUN_0042e980();
    piVar15 = piVar18;
    if (cVar7 != '\0') {
      sStack_16c = (short)*(undefined4 *)(DAT_00893530 + 0x14);
      uStack_16a = (undefined2)((uint)*(undefined4 *)(DAT_00893530 + 0x14) >> 0x10);
      uStack_168 = *(undefined2 *)(DAT_00893530 + 0x18);
      _local_194 = -NAN;
      FUN_0042dc20();
      if (*(char *)((int)piVar17 + 0x17b) != '\0') {
        _local_194 = (double)CONCAT44(0x484b81,local_194);
        cVar7 = (**(code **)(*piVar17 + 0x28))();
        if (cVar7 != '\0') {
          _local_194 = (double)CONCAT44(&uStack_12c,0x484b95);
          FUN_0051c0f0();
          _local_194 = (double)CONCAT44(&sStack_16c,0x484ba1);
          cVar7 = FUN_0042ddd0();
          if (cVar7 == '\0') {
            _local_194 = 2.54662903568269e-313;
            puVar12 = operator_new(0xc);
            uStack_c = 1;
            local_15c = puVar12;
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = (undefined4 *)0x0;
            }
            else {
              _local_194 = (double)CONCAT44(0x484bcb,local_194);
              uVar9 = FUN_0051c0c0();
              _local_194 = (double)CONCAT44(piVar17 + 6,0x39);
              FUN_00498e40();
              *puVar12 = &PTR_FUN_007e6b4c;
              *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
              *(undefined1 *)(puVar12[1] + 0x12) = 0;
            }
            uStack_c = 0xffffffff;
            _local_194 = (double)CONCAT44(puVar12,0x484c06);
            FUN_00565bc0();
          }
        }
      }
    }
  }
  _local_194 = (double)CONCAT44(0x484c16,local_194);
  cVar7 = FUN_0042e980();
  if (cVar7 != '\0') {
    local_144 = (int *)param_1[0x1147];
joined_r0x00484c2a:
    do {
      if (local_144 == (int *)0x0) break;
      puVar12 = (undefined4 *)*local_144;
      local_144 = (int *)local_144[2];
      _local_194 = (double)CONCAT44(puVar12[0x53],0x484c45);
      uVar13 = FUN_004e9370();
      if (0 < (int)puVar12[0x53]) {
        _local_194 = (double)CONCAT44(DAT_00893530 + 0x14,0x484c6f);
        cVar7 = FUN_0042dd70();
        if (cVar7 != '\0') {
          _local_194 = (double)(ulonglong)uVar13;
          cVar7 = FUN_004a3020();
          if (cVar7 != '\0') goto joined_r0x00484c2a;
        }
        puStack_170 = (undefined4 *)0x0;
        if (puVar12[0x52] != 0) {
          _local_194 = (double)CONCAT44(puVar12[0x52],0x484c9d);
          puStack_170 = (undefined4 *)FUN_004e9370();
        }
        fStack_17c = (float)uVar13;
        if (*(int **)(uVar13 + 0x3d8) == param_1) {
LAB_00484e2b:
          if (fStack_17c != 0.0) {
LAB_00484e33:
            if (*(char *)(puVar12 + 0x58) == '\0') {
LAB_00484f62:
              if (fStack_17c == 0.0) goto LAB_004853c4;
            }
            else {
              _local_194 = (double)CONCAT44(0x484e48,local_194);
              iVar8 = FUN_004ece80();
              if (iVar8 != 0) goto LAB_00484f62;
              local_178 = 3.4028235e+38;
              _local_194 = (double)CONCAT44(0x484e63,local_194);
              piVar15 = (int *)FUN_004a5a30();
              _local_194 = (double)CONCAT44(0x484e6a,local_194);
              iVar8 = (**(code **)(*piVar15 + 4))();
              if (iVar8 < 1) {
LAB_00484ee8:
                puVar12[0x53] = 0;
                uVar23 = (undefined2)((ulonglong)_local_194 >> 0x30);
                _local_194 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
                FUN_00458210();
                _local_194 = 4.436219279158699e-306;
                FUN_005033b0();
                uVar23 = (undefined2)((ulonglong)_local_194 >> 0x30);
                _local_194 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
                FUN_00458230();
                *(undefined1 *)(puVar12 + 0x56) = 1;
                *(undefined1 *)((int)puVar12 + 0x159) = 1;
                *(undefined1 *)((int)puVar12 + 0x15a) = 0;
                puVar12[0x52] = 0;
                goto joined_r0x00484c2a;
              }
              _local_194 = (double)CONCAT44(0x484e75,local_194);
              iVar8 = FUN_004a5a30();
              piVar15 = *(int **)(iVar8 + 4);
              fStack_17c = 0.0;
              if (piVar15 == (int *)0x0) goto LAB_00484ee8;
              do {
                _local_194 = (double)CONCAT44(*(undefined4 *)(*piVar15 + 0xc),0x484e88);
                iVar8 = FUN_004e9370();
                if ((*(int **)(iVar8 + 0x3d8) != (int *)0x0) &&
                   (*(int **)(iVar8 + 0x3d8) == param_1)) {
                  _local_194 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x12),puVar12[0x53]);
                  fVar22 = (float10)FUN_0044a9c0();
                  if (fVar22 < (float10)local_178) {
                    _local_194 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x12),0x484ec6);
                    fStack_17c = (float)FUN_004e9370();
                    local_178 = (float)fVar22;
                  }
                }
                piVar15 = (int *)piVar15[2];
              } while (piVar15 != (int *)0x0);
              if (fStack_17c == 0.0) goto LAB_00484ee8;
            }
            piVar15 = (int *)0x0;
            if ((puVar12[0xb2] != DAT_0088f28e) ||
               (*(short *)((int)puVar12 + 0x2c6) != DAT_0088f28c)) {
              uStack_12c = *(undefined2 *)((int)puVar12 + 0x2c6);
              uStack_12a = puVar12[0xb2];
              _local_194 = (double)CONCAT44(&uStack_12c,0x484fb0);
              iVar8 = FUN_00428ee0();
              if (iVar8 == 0) {
                piVar15 = (int *)0x0;
              }
              else {
                piVar15 = (int *)(iVar8 + -0x14);
                if (piVar15 != (int *)0x0) {
                  if ((*(int **)(iVar8 + 0x234) == param_1) &&
                     (*(int *)(iVar8 + -8) == *(int *)((int)fStack_17c + 0x12))) {
                    _local_194 = (double)CONCAT44(0x484fdd,local_194);
                    cVar7 = (**(code **)(*piVar15 + 0x28))();
                    if ((cVar7 == '\0') || (*(char *)((int)puVar12 + 0x15f) != '\0')) {
                      _local_194 = (double)CONCAT44(0x484ff2,local_194);
                      cVar7 = (**(code **)(*piVar15 + 0x30))();
                      if ((cVar7 == '\0') || (*(char *)(puVar12 + 0x58) != '\0')) goto LAB_00485025;
                    }
                  }
                  piVar15 = (int *)0x0;
                  uVar23 = (undefined2)((ulonglong)_local_194 >> 0x30);
                  _local_194 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
                  FUN_00458230();
                }
              }
            }
LAB_00485025:
            if ((puVar12[0xb2] == DAT_0088f28e) &&
               (*(short *)((int)puVar12 + 0x2c6) == DAT_0088f28c)) {
              local_164 = *(undefined4 **)(*(int *)((int)fStack_17c + 0x1c2) + 4);
              while (local_164 != (undefined4 *)0x0) {
                piVar18 = (int *)*local_164;
                local_164 = (undefined4 *)local_164[2];
                if ((int *)piVar18[0x92] == param_1) {
                  uVar9 = puVar12[0x31];
                  _local_194 = (double)CONCAT44(0x485089,local_194);
                  uVar11 = (**(code **)(*piVar18 + 0xc))();
                  _local_194 = (double)CONCAT44(uVar11,uVar9);
                  iVar8 = FUN_007a8730();
                  if (iVar8 == 0) {
                    _local_194 = (double)CONCAT44(0x4850a3,local_194);
                    cVar7 = (**(code **)(*piVar18 + 0x28))();
                    if ((cVar7 != '\0') && (*(char *)((int)puVar12 + 0x15f) != '\0')) {
                      piVar15 = piVar18;
                    }
                    _local_194 = (double)CONCAT44(0x4850bb,local_194);
                    cVar7 = (**(code **)(*piVar18 + 0x30))();
                    if ((cVar7 != '\0') && (*(char *)(puVar12 + 0x58) != '\0')) {
                      piVar15 = piVar18;
                    }
                  }
                }
              }
            }
            if (piVar15 == (int *)0x0) {
              sStack_16c = 0;
              uStack_16a = 0;
              uStack_168 = 0;
              if ((puVar12[0xb2] == DAT_0088f28e) &&
                 (*(short *)((int)puVar12 + 0x2c6) == DAT_0088f28c)) {
                _local_194 = (double)CONCAT44(auStack_11c,0x48513c);
                puVar16 = (undefined4 *)FUN_00428eb0();
                sStack_16c = (short)*puVar16;
                uStack_16a = (undefined2)((uint)*puVar16 >> 0x10);
                uStack_168 = *(undefined2 *)(puVar16 + 1);
              }
              else {
                uStack_124 = *(undefined2 *)((int)puVar12 + 0x2c6);
                uVar9 = *(undefined4 *)((int)puVar12 + 0x2c6);
                uStack_122 = (undefined2)puVar12[0xb2];
                uStack_120 = (undefined2)((uint)puVar12[0xb2] >> 0x10);
                sStack_16c = (short)uVar9;
                uStack_16a = (undefined2)((uint)uVar9 >> 0x10);
                uStack_168 = uStack_120;
              }
              _local_194 = (double)CONCAT44(puVar12[0x31],local_194);
              if (*(char *)(puVar12 + 0x58) == '\0') {
                FUN_0048f4b0();
                FUN_0048b970();
                uVar9 = 0x4851c4;
                FUN_00449290();
                in_stack_fffffe54 = (double)CONCAT44(0x4851cb,uVar9);
                FUN_00461e60();
              }
              else {
                FUN_0048f4b0();
                FUN_0048b970();
                uVar9 = 0x48518d;
                FUN_00449290();
                in_stack_fffffe54 = (double)CONCAT44(0x485194,uVar9);
                FUN_00461fb0();
              }
              _local_194 = (double)CONCAT44(&sStack_16c,0x4851d5);
              iVar8 = FUN_00428ee0();
              if ((iVar8 == 0) || (piVar15 = (int *)(iVar8 + -0x14), piVar15 == (int *)0x0))
              goto joined_r0x00484c2a;
              if (*(char *)(puVar12 + 0x56) == '\0') {
                _local_194 = (double)CONCAT44(piVar15,0x4851fd);
                FUN_0045d900();
              }
              if (*(char *)((int)puVar12 + 0x159) == '\0') {
                _local_194 = (double)CONCAT44(piVar15,0x48520f);
                FUN_0045da50();
              }
              if (*(char *)((int)puVar12 + 0x15a) != '\0') {
                _local_194 = (double)CONCAT44(piVar15,0x485221);
                FUN_0045d7b0();
              }
              _local_194 = (double)CONCAT44(0x485228,local_194);
              cVar7 = (**(code **)(*piVar15 + 0x28))();
              if (cVar7 != '\0') {
                uVar9 = *(undefined4 *)((int)fStack_17c + 0x12);
                _local_194 = (double)CONCAT44(0x48523a,local_194);
                iVar8 = (**(code **)(*piVar15 + 0x10))();
                *(undefined4 *)(iVar8 + 0x240) = uVar9;
              }
            }
            puVar12[0x53] = 0;
            uVar23 = (undefined2)((ulonglong)_local_194 >> 0x30);
            _local_194 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
            FUN_00458210();
            _local_194 = 4.436219279159242e-306;
            FUN_005033b0();
            uVar23 = (undefined2)((ulonglong)_local_194 >> 0x30);
            _local_194 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
            FUN_00458230();
            iVar8 = puVar12[0x16];
            _local_194 = (double)CONCAT44(0x4852a6,local_194);
            iVar10 = FUN_00522770();
            if (iVar8 != *(int *)(iVar10 + 6)) {
              _local_194 = 2.54662912451569e-313;
              puVar16 = operator_new(0xc);
              uStack_c = 2;
              local_164 = puVar16;
              if (puVar16 == (undefined4 *)0x0) {
                puVar16 = (undefined4 *)0x0;
              }
              else {
                uVar9 = puVar12[0x16];
                _local_194 = (double)CONCAT44(piVar15 + 6,0xa9);
                FUN_00498f10();
                iVar8 = puVar16[1];
                *puVar16 = &PTR_FUN_007e5fa0;
                *(int *)(iVar8 + 0xe) = piVar15[6];
                *(short *)(iVar8 + 0x12) = (short)piVar15[7];
                *(undefined4 *)(puVar16[1] + 0x14) = uVar9;
                *(undefined1 *)(puVar16[1] + 0x18) = 0;
                param_1 = local_160;
              }
              uStack_c = 0xffffffff;
              _local_194 = (double)CONCAT44(puVar16,0x485324);
              FUN_00565bc0();
            }
            _local_194 = (double)CONCAT44(puVar12,piVar15);
            FUN_0045e6c0();
            uVar13 = uStack_140;
            if ((piVar15[0x99] == 0) && (puVar12[0x4d] == 9)) {
              _local_194 = 3.70934811116e-314;
              uStack_140 = uStack_140 & 0xff000000;
              in_stack_fffffe54 =
                   (double)(CONCAT44(1,SUB84(in_stack_fffffe54,0)) & 0xffffffffffff0000);
              in_stack_fffffe4c =
                   (double)(CONCAT62((int6)(CONCAT44(uVar13,SUB84(in_stack_fffffe4c,0)) >> 0x10),
                                     *(undefined2 *)(DAT_00893530 + 0x18)) & 0xff000000ffffffff);
              FUN_0050b600(piVar15,7,piVar15[3],0x3f800000,1,1,*(undefined4 *)(DAT_00893530 + 0x14),
                           in_stack_fffffe4c,in_stack_fffffe54);
            }
            *(undefined1 *)(puVar12 + 0x56) = 1;
            *(undefined1 *)((int)puVar12 + 0x159) = 1;
            *(undefined1 *)((int)puVar12 + 0x15a) = 0;
            puVar12[0x16] = 0;
            goto joined_r0x00484c2a;
          }
        }
        else {
          _local_194 = (double)(ulonglong)uVar13;
          cVar7 = FUN_004a3020();
          if (cVar7 != '\0') goto LAB_00484e2b;
          local_164 = (undefined4 *)0x0;
          _local_194 = (double)CONCAT44(DAT_00893530 + 0x14,0x484cdb);
          cVar7 = FUN_0042dd70();
          if ((cVar7 == '\0') && (local_174 = 0, 0 < *(int *)(uVar13 + 0x290))) {
            iStack_138 = 0;
            do {
              _local_194 = (double)CONCAT44(*(undefined4 *)(*(int *)(uVar13 + 0x298) + iStack_138),
                                            0x484d14);
              uVar14 = FUN_004e9370();
              if (((*(char *)(uVar14 + 0x180) == '\0') && (*(int *)(uVar14 + 0x254) != 8)) &&
                 (*(int *)(uVar14 + 0x254) != 9)) {
                _local_194 = (double)(ulonglong)uVar14;
                cVar7 = FUN_004a3020();
                if (cVar7 != '\0') {
                  local_164 = *(undefined4 **)(uVar14 + 0x12);
                }
              }
              local_174 = local_174 + 1;
              iStack_138 = iStack_138 + 0xc;
            } while (local_174 < *(int *)(uVar13 + 0x290));
            if (local_164 == (undefined4 *)0x0) goto LAB_00484d79;
            _local_194 = (double)CONCAT44(local_164,0x484d72);
            fStack_17c = (float)FUN_004e9370();
LAB_00484df3:
            if (fStack_17c == 0.0) goto LAB_00484df7;
            goto LAB_00484e33;
          }
LAB_00484d79:
          if (puStack_170 != (undefined4 *)0x0) {
            _local_194 = (double)ZEXT48(puStack_170);
            cVar7 = FUN_004a3020();
            fStack_17c = (float)puStack_170;
            if (cVar7 == '\0') {
              piVar15 = (int *)0x0;
              local_15c = (undefined4 *)0x497423f0;
              fStack_17c = (float)uVar13;
              if (0 < DAT_00877690) {
                do {
                  uVar11 = 0;
                  local_194 = piVar15;
                  uVar9 = FUN_004e9370();
                  _local_194 = (double)CONCAT44(uVar11,uVar9);
                  cVar7 = FUN_004a3020();
                  if (cVar7 != '\0') {
                    _local_194 = (double)CONCAT44(*(undefined4 *)((int)puStack_170 + 0x12),piVar15);
                    fVar22 = (float10)FUN_0044a9c0();
                    if (fVar22 < (float10)(float)local_15c) {
                      local_15c = (undefined4 *)(float)fVar22;
                      uVar13 = 0;
                    }
                  }
                  piVar15 = (int *)((int)piVar15 + 1);
                  fStack_17c = (float)uVar13;
                } while ((int)piVar15 < DAT_00877690);
              }
            }
            goto LAB_00484df3;
          }
LAB_00484df7:
          _local_194 = (double)CONCAT44(0x484dfe,local_194);
          uVar11 = FUN_0044e1b0();
          _local_194 = (double)CONCAT44(uVar11,0x484e04);
          iVar8 = FUN_004e9370();
          if (*(int **)(iVar8 + 0x3d8) == param_1) {
            _local_194 = (double)CONCAT44(0x484e1c,local_194);
            uVar11 = FUN_0044e1b0();
            _local_194 = (double)CONCAT44(uVar11,0x484e22);
            fStack_17c = (float)FUN_004e9370();
            goto LAB_00484e2b;
          }
        }
LAB_004853c4:
        _local_194 = (double)CONCAT44(puVar12,0x4853d4);
        (**(code **)(param_1[0x1146] + 0x18))();
        if (puVar12 != (undefined4 *)0x0) {
          _local_194 = 2.12433769374676e-314;
          (**(code **)*puVar12)();
        }
      }
    } while( true );
  }
  piVar15 = *(int **)((int)param_1 + 0x3b7e);
joined_r0x004853f4:
  if (piVar15 != (int *)0x0) {
    local_160 = (int *)piVar15[2];
    piVar18 = (int *)*piVar15;
    _local_194 = (double)CONCAT44(0x48540a,local_194);
    cVar7 = FUN_004f2850();
    if (cVar7 == '\0') goto LAB_00485623;
    _local_194 = (double)CONCAT44(0x485419,local_194);
    cVar7 = (**(code **)(*piVar18 + 0x10))();
    piVar15 = local_160;
    if (cVar7 != '\0') {
      _local_194 = (double)CONCAT44(0x485428,local_194);
      cVar7 = FUN_004f23c0();
      piVar15 = local_160;
      if (cVar7 != '\0') {
        _local_194 = (double)CONCAT44(0x485437,local_194);
        FUN_004f2870();
        _local_194 = (double)(ulonglong)*(uint *)((int)piVar18 + 0x16);
        cVar7 = FUN_0049fb80();
        if (cVar7 == '\0') {
          piVar15 = local_160;
          if ((&DAT_00dc0fd4)[*(int *)((int)param_1 + 6)] == 0) {
            _local_194 = (double)CONCAT44(0x4854e9,local_194);
            cVar7 = FUN_0042e980();
            piVar15 = local_160;
            if (cVar7 != '\0') {
              ppuStack_158 = &PTR_LAB_007e378c;
              puStack_154 = (uint *)0x0;
              puStack_150 = (uint *)0x0;
              iStack_14c = 0;
              uStack_148 = 0;
              uStack_c = 3;
              puVar20 = (uint *)param_1[0x3a29];
              if ((uint *)param_1[0x3a29] != (uint *)0x0) {
                do {
                  puVar5 = (uint *)puVar20[2];
                  uVar13 = *puVar20;
                  _local_194 = (double)(ulonglong)uVar13;
                  cVar7 = FUN_0049fb80();
                  puVar20 = puStack_150;
                  puVar6 = puStack_154;
                  if (cVar7 != '\0') {
                    _local_194 = 2.9710283154653e-313;
                    puStack_150 = operator_new(0xe);
                    if (puStack_150 == (uint *)0x0) {
                      puStack_150 = (uint *)0x0;
                    }
                    else {
                      *puStack_150 = uVar13;
                      puStack_150[1] = (uint)puVar20;
                      puStack_150[2] = 0;
                      *(undefined1 *)(puStack_150 + 3) = 0;
                    }
                    iVar8 = iStack_14c + 1;
                    bVar21 = iStack_14c != 0;
                    puVar6 = puStack_150;
                    iStack_14c = iVar8;
                    if (bVar21) {
                      puVar20[2] = (uint)puStack_150;
                      puVar6 = puStack_154;
                    }
                  }
                  puStack_154 = puVar6;
                  iVar8 = iStack_14c;
                  puVar20 = puVar5;
                } while (puVar5 != (uint *)0x0);
                if (0 < iStack_14c) {
                  _local_194 = (double)CONCAT44(0x485599,local_194);
                  iVar10 = _rand();
                  puVar20 = puStack_154;
                  for (iVar10 = iVar10 % iVar8;
                      (puVar20 != (uint *)0x0 && (puVar20 = (uint *)puVar20[2], iVar10 != 0));
                      iVar10 = iVar10 + -1) {
                  }
                  uVar23 = (undefined2)((ulonglong)_local_194 >> 0x30);
                  _local_194 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
                  FUN_0045e280();
                  _local_194 = (double)CONCAT44(0x4855e6,local_194);
                  (*(code *)ppuStack_158[4])();
                }
              }
              uStack_c = 0xffffffff;
              ppuStack_158 = &PTR_LAB_007e378c;
              puVar20 = puStack_154;
              while (puVar20 != (uint *)0x0) {
                puVar5 = (uint *)puVar20[2];
                _local_194 = (double)CONCAT44(puVar20,0x48560a);
                FUN_00796cd8();
                puVar20 = puVar5;
              }
              puStack_154 = (uint *)0x0;
              puStack_150 = (uint *)0x0;
              iStack_14c = 0;
              piVar15 = local_160;
            }
          }
        }
        else {
          _local_194 = (double)CONCAT44(0x485454,local_194);
          cVar7 = FUN_00444290();
          if (cVar7 != '\0') {
            _local_194 = (double)CONCAT44(*(undefined4 *)((int)piVar18 + 0x5a),0x485461);
            uVar11 = FUN_004f56c0();
            _local_194 = (double)CONCAT44(uVar11,1);
            wsprintfA(aCStack_114,s__d__s_0083d0ac);
            piVar15 = (int *)FUN_004e9370();
            uVar11 = *(undefined4 *)((int)piVar15 + 0x12);
            local_194 = (int *)0x485491;
            uVar9 = (**(code **)(*piVar15 + 0xc))();
            _local_194 = (double)CONCAT44(uVar11,uVar9);
            FUN_006eab80();
            _local_194 = 7.00282031118477e-313;
            (**(code **)(*DAT_00bd0e18 + 0x20))();
          }
          _local_194 = (double)CONCAT44(0x4854be,local_194);
          cVar7 = FUN_0042e980();
          piVar15 = local_160;
          if (cVar7 != '\0') goto LAB_00485679;
        }
      }
    }
    goto joined_r0x004853f4;
  }
  _local_194 = (double)CONCAT44(&uStack_134,0x4856b1);
  FUN_0044df20();
  _local_194 = (double)CONCAT44(&uStack_134,0x4856c4);
  cVar7 = FUN_0042ddd0();
  if ((cVar7 != '\0') && (((0 < sStack_130 || ('\0' < cStack_132)) || ('\0' < cStack_133)))) {
    *(int *)((int)param_1 + 0x4652) = *(int *)((int)param_1 + 0x4652) + 1;
    iVar8 = DAT_00893530;
    *(undefined4 *)((int)param_1 + 0x4656) = *(undefined4 *)(DAT_00893530 + 0x14);
    *(undefined2 *)((int)param_1 + 0x465a) = *(undefined2 *)(iVar8 + 0x18);
  }
  if (DAT_0087b630 != '\0') {
    puStack_154 = (uint *)0x0;
    puStack_150 = (uint *)0x0;
    iStack_14c = 0;
    uStack_148 = 0;
    ppuStack_158 = &PTR_LAB_007e4b34;
    uStack_c = 4;
    piVar15 = *(int **)((int)param_1 + 0x3b7e);
    while (piVar15 != (int *)0x0) {
      piVar18 = (int *)piVar15[2];
      iVar8 = *piVar15;
      _local_194 = (double)CONCAT44(0x48575c,local_194);
      cVar7 = FUN_004f2390();
      piVar15 = piVar18;
      if (((cVar7 == '\0') && (*(char *)(iVar8 + 0x3c) != '\0')) &&
         (*(float *)(iVar8 + 0x4a) <= (float)param_1[0xe73])) {
        _local_194 = (double)CONCAT44(-*(float *)(iVar8 + 0x4a),0x485787);
        (**(code **)(*param_1 + 0x28))();
        *(undefined1 *)(iVar8 + 0x3c) = 0;
      }
    }
    if ((*(int *)((int)param_1 + 6) == *(int *)(DAT_00d0ca90 + 6)) &&
       (*(int *)(*DAT_00d12b40 + 0x3ba) != 0)) {
      _local_194 = (double)CONCAT44(0x4857b6,local_194);
      FUN_0046e080();
    }
    fStack_17c = (float)param_1[0xe49] * *(float *)((int)param_1 + 0x390a);
    _local_194 = (double)CONCAT44(0x4857d1,local_194);
    fVar22 = (float10)FUN_0044ac70();
    if (fVar22 < (float10)fStack_17c) {
      fStack_17c = (float)fVar22;
    }
    piVar15 = *(int **)((int)param_1 + 0x3b7e);
joined_r0x004857ec:
    do {
      if (piVar15 == (int *)0x0) goto LAB_00485891;
      piVar18 = (int *)piVar15[2];
      iVar8 = *piVar15;
      _local_194 = (double)CONCAT44(0x485800,local_194);
      cVar7 = FUN_004f2390();
      piVar15 = piVar18;
      if (cVar7 == '\0') {
        if (*(char *)(iVar8 + 0x3c) == '\0') {
          fVar1 = *(float *)(iVar8 + 0x28);
          if (fVar1 <= _DAT_007e3380) goto joined_r0x004857ec;
          puStack_170 = (undefined4 *)(fStack_17c / fVar1);
          if (_DAT_007e3374 < (float)puStack_170) {
            puStack_170 = (undefined4 *)0x3f800000;
          }
          fVar1 = (float)puStack_170 * fVar1;
          _local_194 = (double)CONCAT44(fVar1,0x485856);
          cVar7 = FUN_0044acf0();
          if (cVar7 != '\0') {
            _local_194 = (double)CONCAT44(fVar1,0x485862);
            FUN_0044ad90();
            fStack_17c = fStack_17c - fVar1;
            _local_194 = (double)CONCAT44(puStack_170,0x48587a);
            FUN_004f1260();
            goto joined_r0x004857ec;
          }
        }
        _local_194 = 2.34249022554175e-317;
        FUN_004f1260();
      }
    } while( true );
  }
  goto LAB_00485d3e;
LAB_00485623:
  piVar15 = local_160;
  if (0 < piVar18[0xe]) {
    _local_194 = (double)CONCAT44(0x485631,local_194);
    cVar7 = (**(code **)(*piVar18 + 0x10))();
    piVar15 = local_160;
    if ((cVar7 != '\0') && ((&DAT_00dc0fd4)[*(int *)((int)param_1 + 6)] == 0)) {
      _local_194 = (double)CONCAT44(0x485648,local_194);
      cVar7 = FUN_0042e980();
      piVar15 = local_160;
      if (cVar7 != '\0') {
        puVar20 = (uint *)param_1[0x3a29];
        do {
          piVar15 = local_160;
          if (puVar20 == (uint *)0x0) goto joined_r0x004853f4;
          puVar5 = (uint *)puVar20[2];
          _local_194 = (double)(ulonglong)*puVar20;
          cVar7 = FUN_0049fb80();
          puVar20 = puVar5;
        } while (cVar7 == '\0');
LAB_00485679:
        uVar23 = (undefined2)((ulonglong)_local_194 >> 0x30);
        _local_194 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
        FUN_0045e280();
        piVar15 = local_160;
      }
    }
  }
  goto joined_r0x004853f4;
LAB_00485891:
  piVar15 = *(int **)((int)param_1 + 0x3b7e);
joined_r0x00485899:
  piVar18 = (int *)puStack_154;
  if (piVar15 != (int *)0x0) {
    piVar18 = (int *)*piVar15;
    piVar15 = (int *)piVar15[2];
    _local_194 = (double)CONCAT44(0x4858b5,local_194);
    FUN_004f2410();
    if ((&DAT_00dc0fd4)[*(int *)((int)param_1 + 6)] == 0) {
      _local_194 = (double)CONCAT44(0x4858ce,local_194);
      cVar7 = (**(code **)(*piVar18 + 0x14))();
      if ((cVar7 != '\0') && (*(char *)((int)piVar18 + 0x57) != '\0')) {
        _local_194 = (double)CONCAT44(*(undefined4 *)((int)piVar18 + 0x5a),0x4858ec);
        iVar8 = FUN_0044c450();
        if (*(int *)((int)piVar18 + 0x62) < iVar8) {
          *(int *)((int)piVar18 + 0x62) = iVar8;
        }
        if (*(int *)((int)piVar18 + 0x5e) != 0) {
          _local_194 = (double)CONCAT44(*(int *)((int)piVar18 + 0x5e),0x485903);
          iVar8 = FUN_0044c4a0();
          if (*(int *)((int)piVar18 + 0x76) < iVar8) {
            *(int *)((int)piVar18 + 0x76) = iVar8;
          }
        }
        if (*(int *)((int)piVar18 + 0x7a) != 0) {
          _local_194 = (double)CONCAT44(*(int *)((int)piVar18 + 0x7a),0x48591a);
          iVar8 = FUN_0044c4a0();
          if (*(int *)((int)piVar18 + 0x66) < iVar8) {
            *(int *)((int)piVar18 + 0x66) = iVar8;
          }
        }
        if (*(int *)((int)piVar18 + 0x7e) != 0) {
          _local_194 = (double)CONCAT44(*(int *)((int)piVar18 + 0x7e),0x485931);
          iVar8 = FUN_0044c4a0();
          if (*(int *)((int)piVar18 + 0x6a) < iVar8) {
            *(int *)((int)piVar18 + 0x6a) = iVar8;
          }
        }
        if (*(int *)((int)piVar18 + 0x82) != 0) {
          _local_194 = (double)CONCAT44(*(int *)((int)piVar18 + 0x82),0x48594b);
          iVar8 = FUN_0044c4a0();
          if (*(int *)((int)piVar18 + 0x6e) < iVar8) {
            *(int *)((int)piVar18 + 0x6e) = iVar8;
          }
        }
        if (*(int *)((int)piVar18 + 0x86) != 0) {
          _local_194 = (double)CONCAT44(*(int *)((int)piVar18 + 0x86),0x485965);
          iVar8 = FUN_0044c4a0();
          if (*(int *)((int)piVar18 + 0x72) < iVar8) {
            *(int *)((int)piVar18 + 0x72) = iVar8;
          }
        }
      }
    }
    _local_194 = (double)CONCAT44(0x485974,local_194);
    cVar7 = (**(code **)(*piVar18 + 0x10))();
    puVar20 = puStack_154;
    if ((cVar7 != '\0') && (iVar8 = *(int *)((int)piVar18 + 0x16), iVar8 != 0)) {
      iVar10 = *(int *)(DAT_00ab27b4 + 0x22 + iVar8 * 0x4b2);
      iVar8 = DAT_00ab27b4 + 0x1a + iVar8 * 0x4b2;
      _local_194 = 2.97102837070184e-313;
      piVar17 = operator_new(0xe);
      if (piVar17 == (int *)0x0) {
        piVar17 = (int *)0x0;
      }
      else {
        *piVar17 = (int)piVar18;
        piVar17[1] = iVar10;
        piVar17[2] = 0;
        *(undefined1 *)(piVar17 + 3) = 0;
      }
      iVar4 = *(int *)(iVar8 + 0xc);
      *(int **)(iVar8 + 8) = piVar17;
      *(int *)(iVar8 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(int **)(iVar8 + 4) = piVar17;
      }
      else {
        *(int **)(iVar10 + 8) = piVar17;
      }
      _local_194 = (double)CONCAT44(*(undefined4 *)((int)piVar18 + 0x16),0x4859e3);
      iVar8 = FUN_004e9370();
      puVar5 = puStack_150;
      puVar20 = puStack_154;
      if (*(int **)(iVar8 + 0x3d8) != param_1) {
        _local_194 = 2.97102837485199e-313;
        puStack_150 = operator_new(0xe);
        if (puStack_150 == (uint *)0x0) {
          puStack_150 = (uint *)0x0;
        }
        else {
          *puStack_150 = (uint)piVar18;
          puStack_150[1] = (uint)puVar5;
          puStack_150[2] = 0;
          *(undefined1 *)(puStack_150 + 3) = 0;
        }
        iVar8 = iStack_14c + 1;
        bVar21 = iStack_14c != 0;
        puVar20 = puStack_150;
        iStack_14c = iVar8;
        if (bVar21) {
          puVar5[2] = (uint)puStack_150;
          puVar20 = puStack_154;
        }
      }
    }
    puStack_154 = puVar20;
    _local_194 = (double)CONCAT44(0x485a39,local_194);
    cVar7 = FUN_004f2850();
    if (cVar7 != '\0') {
      _local_194 = (double)CONCAT44(0x485a48,local_194);
      cVar7 = FUN_004f23c0();
      if (cVar7 != '\0') {
        _local_194 = (double)CONCAT44(0x485a57,local_194);
        cVar7 = (**(code **)(*piVar18 + 0x14))();
        if (cVar7 == '\0') {
          _local_194 = (double)CONCAT44(0x485a66,local_194);
          cVar7 = (**(code **)(*piVar18 + 0x18))();
          if (cVar7 == '\0') {
            _local_194 = (double)CONCAT44(0x485a75,local_194);
            cVar7 = (**(code **)(*piVar18 + 0x1c))();
            if (cVar7 == '\0') {
              _local_194 = (double)CONCAT44(0x485b3e,local_194);
              cVar7 = (**(code **)(*piVar18 + 0x10))();
              if ((cVar7 != '\0') && (*(int *)((int)piVar18 + 0x16) == 0)) {
                _local_194 = (double)CONCAT44(0x485b58,local_194);
                FUN_004f2870();
                iVar8 = piVar18[0xe] + 1;
                if (iVar8 < 0) {
                  iVar8 = 0;
                }
                piVar18[0xe] = iVar8;
                iVar8 = piVar18[0xd] + 1;
                if (iVar8 < 0) {
                  iVar8 = 0;
                }
                piVar18[0xd] = iVar8;
                _local_194 = (double)CONCAT44(0x485b79,local_194);
                cVar7 = FUN_00444290();
                if (cVar7 != '\0') {
                  _local_194 = (double)CONCAT44(*(undefined4 *)((int)piVar18 + 0x5a),0x485b8a);
                  uVar11 = FUN_004f56c0();
                  _local_194 = (double)CONCAT44(uVar11,1);
                  wsprintfA(aCStack_114,s__d__s_0083d0ac);
                  _local_194 = (double)CONCAT44(aCStack_114,0x485bb2);
                  FUN_00425ba0();
                  _local_194 = 4.03202629251817e-313;
                  FUN_00447250();
                  local_160 = (int *)&stack0xfffffe68;
                  FUN_00446d10();
                  FUN_00458280();
                  FUN_006eb730();
                }
              }
            }
            else {
              _local_194 = (double)CONCAT44(0x485a84,local_194);
              FUN_004f2870();
              _local_194 = (double)CONCAT44(0x485a8b,local_194);
              cVar7 = FUN_00444290();
              if (cVar7 != '\0') {
                sVar2 = (&DAT_00ad2e6c)[*(int *)((int)piVar18 + 0x5a)];
                _local_194 = (double)CONCAT44(*(int *)((int)piVar18 + 0x5a),0x485aa0);
                uVar11 = FUN_004f62e0();
                _local_194 = (double)CONCAT44(uVar11,(int)sVar2);
                wsprintfA(aCStack_114,s__d__s_0083d0ac);
                _local_194 = (double)CONCAT44(0x485abf,local_194);
                cVar7 = FUN_00444290();
                if (((cVar7 != '\0') && (*(char *)(DAT_00893750 + 0x111) != '\0')) &&
                   (_DAT_007e3380 < *(float *)((int)piVar18 + 0x42))) {
                  _local_194 = (double)CONCAT44(aCStack_114,&DAT_0088ebf8);
                  FUN_006ea1c0();
                }
              }
              _local_194 = (double)CONCAT44(0x485b02,local_194);
              cVar7 = FUN_0042e980();
              if (cVar7 != '\0') {
                local_160 = (int *)&local_194;
                uVar23 = (undefined2)((ulonglong)_local_194 >> 0x30);
                _local_194 = CONCAT42(DAT_0088f28e,DAT_0088f28c);
                FUN_0045e280();
              }
            }
            goto joined_r0x00485899;
          }
        }
        _local_194 = (double)CONCAT44(0x485bf5,local_194);
        FUN_004f2870();
        _local_194 = (double)CONCAT44(0x485bfa,local_194);
        cVar7 = FUN_0042e980();
        if (cVar7 != '\0') {
          _local_194 = (double)CONCAT44(piVar18,0x485c06);
          FUN_0045e1c0();
        }
      }
    }
    goto joined_r0x00485899;
  }
  while (piVar18 != (int *)0x0) {
    piVar15 = (int *)piVar18[2];
    iVar8 = *piVar18;
    _local_194 = 2.54662924487008e-313;
    piVar18 = operator_new(0xc);
    uStack_c._0_1_ = 5;
    local_160 = piVar18;
    if (piVar18 == (int *)0x0) {
      piVar18 = (int *)0x0;
    }
    else {
      _local_194 = 5.09302419560942e-313;
      puVar19 = operator_new(0x18);
      if (puVar19 == (undefined2 *)0x0) {
        puVar19 = (undefined2 *)0x0;
      }
      else {
        _local_194 = (double)CONCAT44(0x485c67,local_194);
        FUN_0042d2d0();
        puVar19[4] = 0;
        *(undefined4 *)(puVar19 + 5) = 0;
        puVar19[7] = 0;
        *(undefined4 *)(puVar19 + 8) = 0;
      }
      piVar18[1] = (int)puVar19;
      *(undefined1 *)(piVar18 + 2) = 0;
      *(undefined1 *)((int)piVar18 + 9) = 1;
      *piVar18 = (int)&PTR_FUN_007e53b8;
      *(undefined1 *)((int)piVar18 + 10) = 0;
      *puVar19 = 0x13d;
      iVar10 = piVar18[1];
      _local_194 = 0.0;
      *(int *)(iVar10 + 8) = param_1[1];
      *(short *)(iVar10 + 0xc) = (short)param_1[2];
      puVar12 = (undefined4 *)FUN_0042d2f0();
      iVar10 = piVar18[1];
      *(undefined4 *)(iVar10 + 2) = *puVar12;
      *(undefined2 *)(iVar10 + 6) = *(undefined2 *)(puVar12 + 1);
      iVar10 = piVar18[1];
      *piVar18 = (int)&PTR_FUN_007e5398;
      *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar8 + 0x10);
      *(undefined4 *)(piVar18[1] + 0x14) = 0;
    }
    uStack_c = CONCAT31(uStack_c._1_3_,4);
    _local_194 = (double)CONCAT44(piVar18,0x485d0a);
    FUN_00565bc0();
    piVar18 = piVar15;
  }
  uStack_c = 0xffffffff;
  piVar15 = (int *)puStack_154;
  while (piVar15 != (int *)0x0) {
    piVar18 = (int *)piVar15[2];
    _local_194 = (double)CONCAT44(piVar15,0x485d35);
    FUN_00796cd8();
    piVar15 = piVar18;
  }
LAB_00485d3e:
  if (DAT_0087b632 != '\0') {
    param_1[0xe54] = 0;
    _local_194 = (double)CONCAT44(0x485d62,local_194);
    iVar8 = (**(code **)(param_1[0xd94] + 4))();
    if (0 < iVar8) {
      _local_194 = (double)CONCAT44(0x485d7b,local_194);
      (**(code **)(param_1[0x1141] + 4))();
      _local_194 = (double)CONCAT44(0x485d82,local_194);
      (**(code **)(param_1[0x1141] + 4))();
      _local_194 = 2.54662926161891e-313;
      piVar15 = operator_new(0xc);
      uStack_c = 6;
      local_160 = piVar15;
      if (piVar15 == (int *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        _local_194 = 3.8198267379273e-313;
        puVar19 = operator_new(0x12);
        if (puVar19 == (undefined2 *)0x0) {
          puVar19 = (undefined2 *)0x0;
        }
        else {
          puVar19[3] = 0;
          *(undefined1 *)(puVar19 + 2) = 0;
          *(undefined1 *)((int)puVar19 + 3) = 0;
          *(undefined1 *)(puVar19 + 1) = 0;
          puVar19[4] = 0;
          *(undefined4 *)(puVar19 + 5) = 0;
        }
        piVar15[1] = (int)puVar19;
        *(undefined1 *)(piVar15 + 2) = 0;
        *(undefined1 *)((int)piVar15 + 9) = 1;
        *piVar15 = (int)&PTR_FUN_007e5f80;
        *(undefined1 *)((int)piVar15 + 10) = 0;
        *puVar19 = 400;
        iVar8 = piVar15[1];
        *(int *)(iVar8 + 8) = param_1[1];
        *(short *)(iVar8 + 0xc) = (short)param_1[2];
        iVar8 = piVar15[1];
        uStack_140 = uStack_140 & 0xff000000;
        *(uint *)(iVar8 + 2) = uStack_140;
        *(undefined2 *)(iVar8 + 6) = 0;
        *piVar15 = (int)&PTR_FUN_007e5f60;
        *(undefined4 *)(piVar15[1] + 0xe) = 0;
      }
      uStack_c = 0xffffffff;
      _local_194 = (double)CONCAT44(piVar15,0x485e3d);
      FUN_00565c50();
    }
  }
  if ((int)*(char *)(DAT_00893530 + 0x15) % DAT_00877670 == 0) {
    _local_194 = (double)CONCAT44(0x485e60,local_194);
    FUN_0044e800();
  }
  _local_194 = 1.06123221901029e-313;
  fVar22 = (float10)FUN_0049b530();
  param_1[0xe7c] = (int)(float)fVar22;
  _local_194 = (double)CONCAT44(0x485e74,local_194);
  cVar7 = FUN_0042e980();
  if (cVar7 != '\0') {
    _local_194 = (double)CONCAT44(*(undefined4 *)((int)param_1 + 6),0x485e87);
    FUN_00700be0();
  }
  if ((float)param_1[0xe72] < _DAT_007e3380) {
    _local_194 = (double)CONCAT44(0x485ea1,local_194);
    cVar7 = (**(code **)(*param_1 + 0x1c))();
    if (cVar7 != '\0') {
      param_1[0xe72] = 0;
    }
  }
  ExceptionList = pvStack_14;
  return 0;
}


