// FUN_0051cda0 @ 51cda0 size=1899

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051cda0(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined2 uVar11;
  float fVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  void *pvVar19;
  undefined4 uVar20;
  int iVar21;
  undefined2 *puVar22;
  bool bVar23;
  float10 fVar24;
  float fStack_3c;
  float fStack_30;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c2023;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar13 = FUN_0042e980();
  if (cVar13 == '\0') {
    ExceptionList = local_c;
    return;
  }
  if ((param_1[0x92] != 0) && (*(int *)(param_1[0x92] + 6) == 0x157)) {
    ExceptionList = local_c;
    return;
  }
  bVar9 = false;
  FUN_004e9370(param_1[3]);
  iVar21 = (&DAT_00dc0fd4)[*(int *)(param_1[0x92] + 6)];
  cVar13 = FUN_00524000();
  cVar14 = (**(code **)(*param_1 + 0x28))();
  if ((cVar14 == '\0') || (param_1[3] == 0)) {
LAB_0051ce47:
    bVar5 = false;
  }
  else {
    iVar15 = (**(code **)(*param_1 + 0x10))();
    bVar5 = true;
    if (*(int *)(iVar15 + 0x2b2) != 0) goto LAB_0051ce47;
  }
  iVar15 = (**(code **)(param_1[0x47] + 4))();
  if ((iVar15 != 0) || (bVar6 = true, *(int *)((int)param_1 + 0x176) != 0)) {
    bVar6 = false;
  }
  bVar8 = false;
  fStack_30 = 5.0;
  if ((_DAT_007e3380 < _DAT_00dc1568) &&
     (fStack_30 = _DAT_00dc1568 * _DAT_007e4090, _DAT_007e4088 < fStack_30)) {
    fStack_30 = 100.0;
  }
  piVar16 = *(int **)((int)param_1 + 0x26);
  bVar10 = false;
  if (piVar16 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  do {
    iVar15 = *piVar16;
    piVar16 = (int *)piVar16[2];
    fStack_3c = 0.0;
    fVar1 = *(float *)(iVar15 + 0xec);
    if (0 < *(int *)(iVar15 + 0x150)) {
      *(int *)(iVar15 + 0x150) = *(int *)(iVar15 + 0x150) + -1;
    }
    if (_DAT_00dc1568 <= fVar1) {
      if (cVar13 == '\0') {
        cVar14 = (**(code **)(*param_1 + 0x2c))();
        if (cVar14 == '\0') {
          cVar14 = (**(code **)(*param_1 + 0x28))();
          fVar12 = DAT_00dc1564;
          if (cVar14 != '\0') {
            if (param_1[3] < 1) goto LAB_0051cf70;
            fStack_3c = DAT_00877224;
            fVar12 = fStack_3c;
          }
        }
        else {
          fVar12 = DAT_00877228;
          if (iVar21 == 0) goto LAB_0051cf70;
        }
        fStack_3c = fVar12;
        if (_DAT_007e3380 < fStack_3c) {
          bVar8 = true;
        }
      }
LAB_0051cf70:
      if (bVar5) {
        fVar24 = (float10)FUN_004e9530(iVar15);
        fStack_3c = (float)(fVar24 * (float10)fVar1 * (float10)_DAT_007e543c + (float10)fStack_3c);
      }
      if (_DAT_007e3380 < fStack_3c) {
        if (fVar1 < _DAT_00dc1568 + fStack_3c) {
          fStack_3c = fVar1 - _DAT_00dc1568;
        }
        bVar23 = fVar1 - fStack_3c <= _DAT_007e3380;
        if (DAT_00dc191c == '\0') {
          puVar17 = operator_new(0xc);
          uStack_4 = 0;
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = (undefined4 *)0x0;
          }
          else {
            FUN_004b7b00(0x13e,iVar15 + 0xc);
            *puVar17 = &PTR_FUN_007e6e2c;
            *(float *)(puVar17[1] + 0xe) = fStack_3c;
            *(undefined4 *)(puVar17[1] + 0x12) = 0;
            *(undefined1 *)(puVar17[1] + 0x16) = 0;
            *(undefined1 *)(puVar17[1] + 0x17) = 1;
          }
          uStack_4 = 0xffffffff;
          FUN_00565bc0(puVar17);
        }
        else {
          piVar7 = *(int **)(iVar15 + 0x2c);
          do {
            if (piVar7 == (int *)0x0) {
              puVar17 = operator_new(8);
              *puVar17 = 0;
              puVar17[1] = fStack_3c;
              iVar3 = *(int *)(iVar15 + 0x30);
              puVar18 = operator_new(0xe);
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = (undefined4 *)0x0;
              }
              else {
                *puVar18 = puVar17;
                puVar18[1] = iVar3;
                puVar18[2] = 0;
                *(undefined1 *)(puVar18 + 3) = 0;
              }
              iVar4 = *(int *)(iVar15 + 0x34);
              *(undefined4 **)(iVar15 + 0x30) = puVar18;
              *(int *)(iVar15 + 0x34) = iVar4 + 1;
              if (iVar4 == 0) {
                *(undefined4 **)(iVar15 + 0x2c) = puVar18;
              }
              else {
                *(undefined4 **)(iVar3 + 8) = puVar18;
              }
              goto LAB_0051d064;
            }
            piVar2 = (int *)*piVar7;
            piVar7 = (int *)piVar7[2];
          } while (*piVar2 != 0);
          piVar2[1] = (int)(fStack_3c + (float)piVar2[1]);
LAB_0051d064:
          *(float *)(iVar15 + 0x7c) = fStack_3c + *(float *)(iVar15 + 0x7c);
          FUN_004fc2e0(0,0,6);
          *(undefined4 *)(iVar15 + 0x7c) = 0;
          *(undefined4 *)(iVar15 + 0x80) = 0;
          *(undefined4 *)(iVar15 + 0x84) = 0;
          if ((!bVar8) && (fVar1 - fStack_3c < fStack_30)) {
            bVar8 = true;
          }
        }
        bVar9 = true;
        if ((bVar23) && (bVar6)) {
          bVar10 = true;
          puVar17 = operator_new(0xc);
          uVar11 = DAT_0088f28c;
          uStack_4 = 1;
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = (undefined4 *)0x0;
          }
          else {
            iVar3 = param_1[0x92];
            uStack_1a = (undefined2)DAT_0088f28e;
            uStack_18 = (undefined2)((uint)DAT_0088f28e >> 0x10);
            pvVar19 = operator_new(0x20);
            uStack_4 = CONCAT31(uStack_4._1_3_,2);
            if (pvVar19 == (void *)0x0) {
              uVar20 = 0;
            }
            else {
              uVar20 = FUN_004998b0();
            }
            FUN_0042d320(uVar20);
            *puVar17 = &PTR_FUN_007e61a0;
            *(undefined1 *)((int)puVar17 + 10) = 0;
            *(undefined2 *)puVar17[1] = 0x6c;
            iVar4 = puVar17[1];
            *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 4);
            *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(iVar3 + 8);
            puVar18 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar3 = puVar17[1];
            *(undefined4 *)(iVar3 + 2) = *puVar18;
            *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar18 + 1);
            iVar3 = puVar17[1];
            *puVar17 = &PTR_FUN_007e6180;
            *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar15 + 0xc);
            *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar15 + 0x10);
            iVar15 = puVar17[1];
            *(uint *)(iVar15 + 0x14) = CONCAT22(uStack_1a,uVar11);
            *(undefined2 *)(iVar15 + 0x18) = uStack_18;
            *(undefined1 *)(puVar17[1] + 0x1a) = 0;
            *(undefined4 *)(puVar17[1] + 0x1c) = 0xfffffffa;
          }
          uStack_4 = 0xffffffff;
          FUN_00565bc0(puVar17);
        }
      }
    }
  } while (piVar16 != (int *)0x0);
  if ((!bVar9) || (DAT_00dc191c == '\0')) goto LAB_0051d3b4;
  if (bVar8) {
    puVar17 = operator_new(0xc);
    uStack_4 = 3;
    if (puVar17 == (undefined4 *)0x0) {
LAB_0051d3a1:
      puVar17 = (undefined4 *)0x0;
    }
    else {
      pvVar19 = operator_new(0x12);
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      if (pvVar19 == (void *)0x0) {
        pvVar19 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
      }
      FUN_0042d320(pvVar19);
      *puVar17 = &PTR_FUN_007e5f80;
      *(undefined1 *)((int)puVar17 + 10) = 0;
      *(undefined2 *)puVar17[1] = 0x202;
      iVar21 = puVar17[1];
      *(int *)(iVar21 + 8) = param_1[6];
      *(short *)(iVar21 + 0xc) = (short)param_1[7];
      puVar18 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar21 = puVar17[1];
      *(undefined4 *)(iVar21 + 2) = *puVar18;
      *(undefined2 *)(iVar21 + 6) = *(undefined2 *)(puVar18 + 1);
      *puVar17 = &PTR_FUN_007e5f60;
      *(undefined4 *)(puVar17[1] + 0xe) = 0x3d;
    }
  }
  else {
    puVar17 = operator_new(0xc);
    uStack_4 = 5;
    if (puVar17 == (undefined4 *)0x0) goto LAB_0051d3a1;
    pvVar19 = operator_new(0x12);
    uStack_4 = CONCAT31(uStack_4._1_3_,6);
    if (pvVar19 == (void *)0x0) {
      pvVar19 = (void *)0x0;
    }
    else {
      FUN_0042d6c0();
    }
    FUN_0042d320(pvVar19);
    *puVar17 = &PTR_FUN_007e5f80;
    *(undefined1 *)((int)puVar17 + 10) = 0;
    *(undefined2 *)puVar17[1] = 0x202;
    iVar21 = puVar17[1];
    *(int *)(iVar21 + 8) = param_1[6];
    *(short *)(iVar21 + 0xc) = (short)param_1[7];
    puVar18 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar21 = puVar17[1];
    *(undefined4 *)(iVar21 + 2) = *puVar18;
    *(undefined2 *)(iVar21 + 6) = *(undefined2 *)(puVar18 + 1);
    *puVar17 = &PTR_FUN_007e5f60;
    *(undefined4 *)(puVar17[1] + 0xe) = 6;
  }
  uStack_4 = 0xffffffff;
  FUN_00565bc0(puVar17);
LAB_0051d3b4:
  if (((bVar10) && (*(char *)((int)param_1 + 0x17d) == '\0')) &&
     (iVar21 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))(), iVar21 < 1)) {
    puVar17 = operator_new(0xc);
    uVar11 = DAT_0088f28c;
    uStack_4 = 7;
    if (puVar17 == (undefined4 *)0x0) {
      puVar17 = (undefined4 *)0x0;
    }
    else {
      iVar21 = param_1[0x92];
      uStack_1a = (undefined2)DAT_0088f28e;
      uStack_18 = (undefined2)((uint)DAT_0088f28e >> 0x10);
      puVar22 = operator_new(0x20);
      uStack_4 = CONCAT31(uStack_4._1_3_,8);
      if (puVar22 == (undefined2 *)0x0) {
        puVar22 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d6c0();
        puVar22[7] = 0;
        *(undefined4 *)(puVar22 + 8) = 0;
        puVar22[0xd] = 0;
        *(undefined4 *)(puVar22 + 0xe) = 0;
      }
      puVar17[1] = puVar22;
      *(undefined1 *)(puVar17 + 2) = 0;
      *(undefined1 *)((int)puVar17 + 9) = 1;
      *puVar17 = &PTR_FUN_007e5e5c;
      *(undefined1 *)((int)puVar17 + 10) = 0;
      *puVar22 = 0x35;
      iVar15 = puVar17[1];
      *(undefined4 *)(iVar15 + 8) = *(undefined4 *)(iVar21 + 4);
      *(undefined2 *)(iVar15 + 0xc) = *(undefined2 *)(iVar21 + 8);
      puVar18 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar21 = puVar17[1];
      *(undefined4 *)(iVar21 + 2) = *puVar18;
      *(undefined2 *)(iVar21 + 6) = *(undefined2 *)(puVar18 + 1);
      iVar21 = puVar17[1];
      *puVar17 = &PTR_FUN_007e5370;
      *(int *)(iVar21 + 0xe) = param_1[6];
      *(short *)(iVar21 + 0x12) = (short)param_1[7];
      *(undefined1 *)(puVar17[1] + 0x14) = 1;
      *(undefined1 *)(puVar17[1] + 0x15) = 0;
      *(undefined4 *)(puVar17[1] + 0x16) = 0xfffffffa;
      iVar21 = puVar17[1];
      *(uint *)(iVar21 + 0x1a) = CONCAT22(uStack_1a,uVar11);
      *(undefined2 *)(iVar21 + 0x1e) = uStack_18;
    }
    uStack_4 = 0xffffffff;
    FUN_00565ca0(puVar17);
  }
  ExceptionList = local_c;
  return;
}


