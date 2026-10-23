// FUN_004c2b30 @ 4c2b30 size=6730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c2b30(int param_1,int *param_2,int *param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  undefined **ppuVar22;
  undefined4 uVar23;
  float fStack_b0;
  float fStack_ac;
  float fStack_a4;
  float fStack_a0;
  float fStack_94;
  int *piStack_8c;
  float fStack_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined **local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_68;
  void *pvStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007bf043;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x78);
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4)) {
    ExceptionList = &pvStack_c;
    *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x29) = 1;
  }
  local_74 = 0;
  local_70 = 0;
  local_80 = param_2[3];
  local_6c = 0;
  local_68 = 0;
  local_78 = &PTR_LAB_007e378c;
  local_4 = 0;
  local_84 = param_1;
  if (*(char *)(param_1 + 0x4e) == '\0') {
    iVar11 = (**(code **)(*param_3 + 0xc))();
    piVar16 = *(int **)(iVar11 + 4);
    ppuVar22 = local_78;
    iVar11 = local_74;
    while (local_74 = iVar11, local_78 = ppuVar22, piVar16 != (int *)0x0) {
      piVar5 = (int *)piVar16[2];
      iVar17 = *piVar16;
      ppuVar1 = ppuVar22 + 0xb;
      uVar23 = *(undefined4 *)(iVar17 + 0xc);
      FUN_004174a0(local_74);
      (*(code *)*ppuVar1)(&piStack_8c,ppuVar22,uVar23);
      iVar14 = local_70;
      piVar16 = piVar5;
      ppuVar22 = local_78;
      iVar11 = local_74;
      if (piStack_8c == (int *)0x0) {
        uVar23 = *(undefined4 *)(iVar17 + 0xc);
        pvStack_64 = operator_new(0xe);
        local_4._0_1_ = 1;
        if (pvStack_64 == (void *)0x0) {
          local_70 = 0;
        }
        else {
          local_70 = FUN_0049a7a0(uVar23,iVar14,0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar17 = local_6c + 1;
        bVar19 = local_6c != 0;
        ppuVar22 = local_78;
        iVar11 = local_70;
        local_6c = iVar17;
        if (bVar19) {
          *(int *)(iVar14 + 8) = local_70;
          iVar11 = local_74;
        }
      }
    }
  }
  local_7c = 0;
  cVar10 = (**(code **)(*param_2 + 0x28))();
  if ((cVar10 != '\0') && (iVar11 = (**(code **)(*param_2 + 0x10))(), *(int *)(iVar11 + 0x2ae) != 0)
     ) {
    local_7c = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
    iVar11 = (**(code **)(*param_2 + 0x10))();
    iVar11 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar11 + 0x2ae) + 0xc));
    puVar8 = *(undefined4 **)(*(int *)(iVar11 + 0x1c2) + 4);
    while (puVar8 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)puVar8[2];
      piVar16 = (int *)*puVar8;
      cVar10 = (**(code **)(*piVar16 + 0x2c))();
      puVar8 = puVar6;
      if (cVar10 != '\0') {
        (**(code **)(*piVar16 + 0x14))();
        cVar10 = FUN_005177f0();
        if ((cVar10 != '\0') &&
           (cVar10 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar4 + 0x3d8) + 6)), cVar10 != '\0')) {
          iVar11 = (**(code **)(*piVar16 + 0x14))();
          puVar6 = *(undefined4 **)(*(int *)(iVar11 + 0x2aa) + 4);
          while (puVar6 != (undefined4 *)0x0) {
            puVar7 = (undefined4 *)puVar6[2];
            piVar16 = (int *)*puVar6;
            cVar10 = (**(code **)(*(int *)((int)piVar16 + 0x22e) + 8))();
            puVar6 = puVar7;
            if (((cVar10 == '\0') &&
                (iVar11 = *(int *)(iVar4 + 0x12), iVar17 = FUN_00523f70(), iVar17 == iVar11)) &&
               (piVar16 != param_2)) {
              iVar11 = (**(code **)(*(int *)((int)piVar16 + 0x22) + 4))();
              local_7c = local_7c + iVar11;
            }
          }
        }
      }
    }
  }
  fStack_88 = 0.0;
  piStack_8c = (int *)0x0;
  if (0 < *(int *)(iVar4 + 0x290)) {
    fStack_94 = 0.0;
    do {
      iVar11 = FUN_004e9370(*(undefined4 *)((int)fStack_94 + *(int *)(iVar4 + 0x298)));
      if (*(int *)(iVar11 + 0x254) == 8) {
        piVar16 = *(int **)(*(int *)(iVar11 + 0x1c2) + 4);
        while (piVar16 != (int *)0x0) {
          piVar5 = (int *)piVar16[2];
          iVar11 = *piVar16;
          iVar17 = (**(code **)(*(int *)(iVar11 + 0x11c) + 4))();
          piVar16 = piVar5;
          if (((iVar17 == 0) && (*(int *)(iVar11 + 0x264) == 0x1a)) &&
             ((*(int *)(iVar11 + 0x268) == *(int *)(iVar4 + 0x12) &&
              (cVar10 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar11 + 0x248) + 6)), cVar10 != '\0')
              ))) {
            iVar17 = FUN_00522770();
            piVar5 = *(int **)(iVar11 + 0x26);
            while (piVar5 != (int *)0x0) {
              piVar2 = piVar5 + 2;
              iVar11 = *piVar5;
              piVar5 = (int *)*piVar2;
              if (*(char *)(iVar11 + 0x161) != '\0') {
                fStack_88 = *(float *)(iVar11 + 0x2f0) * *(float *)(iVar17 + 0xe3c8) * _DAT_00877510
                            + fStack_88;
              }
            }
          }
        }
      }
      piStack_8c = (int *)((int)piStack_8c + 1);
      fStack_94 = (float)((int)fStack_94 + 0xc);
    } while ((int)piStack_8c < *(int *)(iVar4 + 0x290));
    if (_DAT_007e6800 < fStack_88) {
      fStack_88 = 0.25;
    }
  }
  iVar11 = FUN_00522770();
  piStack_8c = *(int **)((int)param_2 + 0x26);
  do {
    if (piStack_8c == (int *)0x0) {
      local_78 = &PTR_LAB_007e378c;
      piStack_8c = (int *)0x0;
      iVar4 = local_74;
      while (iVar4 != 0) {
        iVar11 = *(int *)(iVar4 + 8);
        FUN_00796cd8(iVar4);
        iVar4 = iVar11;
      }
      ExceptionList = pvStack_c;
      return;
    }
    fStack_ac = 1.0;
    fStack_a0 = 1.0;
    iVar17 = *piStack_8c;
    piStack_8c = (int *)piStack_8c[2];
    FUN_004b05b0((int *)(iVar17 + 0x3a));
    (**(code **)(*(int *)(iVar17 + 0x3a) + 0x14))();
    iVar12 = local_80;
    iVar14 = local_84;
    if (*(char *)(local_84 + 0x4e) != '\0') {
      bVar19 = false;
      bVar9 = false;
      iVar18 = *(int *)(iVar4 + 0x290);
      if (0 < iVar18) {
        piVar16 = *(int **)(iVar4 + 0x298);
        do {
          if (*piVar16 == local_80) {
            if (piVar16[1] == 1) {
              bVar19 = true;
            }
            if ((*piVar16 == local_80) && (piVar16[1] == 2)) {
              bVar9 = true;
            }
          }
          piVar16 = piVar16 + 3;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
        if (bVar19) {
          fStack_94 = *(float *)(iVar17 + 0x1a4);
          iVar18 = FUN_0051c480();
          if ((*(uint *)(iVar18 + 0x1e) >> 5 & 1) != 0) {
            fStack_94 = fStack_94 + _DAT_007e6868;
          }
          if (_DAT_007e3380 < fStack_94) {
            fStack_94 = 0.0;
          }
          fStack_ac = fStack_94 + _DAT_007e3374;
          *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x3a) = 1;
          FUN_005031f0(0x16,fStack_94);
        }
      }
      if ((char)param_2[0x94] == '\0') {
        if (iVar12 != 0) {
          iVar12 = FUN_004e9370(iVar12);
          if (((*(int *)(iVar12 + 0x254) != 8) && (*(int *)(iVar12 + 0x254) != 9)) && (!bVar9))
          goto LAB_004c30ef;
        }
        *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x24) = 1;
        fVar13 = -*(float *)(iVar17 + 0x1a8) * (_DAT_007e5e34 - *(float *)(iVar11 + 0xe3cc));
        fVar3 = _DAT_007e3380;
        if ((_DAT_007e3380 <= fVar13) && (fVar3 = fVar13, _DAT_007e7a6c < fVar13)) {
          fVar3 = _DAT_007e7a6c;
        }
        fStack_ac = (_DAT_007e3374 - fVar3) * fStack_ac;
        FUN_005031f0(0,-fVar3);
        if (*(int *)(iVar11 + 0x37de) < local_7c) {
          fStack_b0 = (float)(local_7c - *(int *)(iVar11 + 0x37de)) * _DAT_00dc1570;
          if (fStack_b0 < _DAT_007e7a68) {
            fStack_b0 = -0.999;
          }
          fStack_ac = (fStack_b0 + _DAT_007e3374) * fStack_ac;
          FUN_005031f0(0x1f,fStack_b0);
        }
      }
      else {
        fStack_ac = *(float *)(iVar11 + 0xe3b0) * fStack_ac;
        FUN_005031f0(0x14,*(float *)(iVar11 + 0xe3b0) - _DAT_007e3374);
        *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x38) = 1;
      }
    }
LAB_004c30ef:
    if (*(char *)(iVar14 + 0x4e) == '\0') {
      iVar12 = (**(code **)(param_2[0x47] + 4))();
      if (1 < iVar12) {
        fStack_ac = (DAT_00dc1574 + _DAT_007e3374) * fStack_ac;
        FUN_005031f0(0x29,DAT_00dc1574);
      }
      if (*(char *)(iVar14 + 0x4e) != '\0') goto LAB_004c3139;
      iVar12 = FUN_0051c480();
      if ((*(uint *)(iVar12 + 0x1e) >> 1 & 1) != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        if (iVar18 <= iVar12) {
          fStack_ac = fStack_ac * _DAT_007e67fc;
          FUN_005031f0(0x1d,0x3dcccccd);
        }
      }
      if (DAT_00dc157c != _DAT_007e3380) {
        iVar12 = (**(code **)(*param_2 + 0x1c))(0x8c,0);
        if (iVar12 == 1) {
          uVar23 = 0x2c;
          fStack_ac = (DAT_00dc157c + _DAT_007e3374) * fStack_ac;
          fVar13 = DAT_00dc157c;
        }
        else {
          iVar12 = (**(code **)(*param_2 + 0x1c))(0x8c,0);
          if (iVar12 != 2) goto LAB_004c32e4;
          fVar13 = DAT_00dc157c + DAT_00dc157c;
          fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
LAB_004c32da:
          uVar23 = 0x2d;
        }
LAB_004c32dd:
        FUN_005031f0(uVar23,fVar13);
      }
    }
    else {
LAB_004c3139:
      iVar12 = FUN_0051c480();
      if ((*(uint *)(iVar12 + 0x1e) >> 2 & 1) != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        if (iVar18 <= iVar12) {
          fStack_ac = fStack_ac * _DAT_007e67fc;
          FUN_005031f0(0x1c,0x3dcccccd);
        }
      }
      if (DAT_00dc1578 != _DAT_007e3380) {
        iVar12 = (**(code **)(*param_2 + 0x1c))(0x8c,0);
        if (iVar12 == 1) {
          uVar23 = 0x2c;
          fStack_ac = (DAT_00dc1578 + _DAT_007e3374) * fStack_ac;
          fVar13 = DAT_00dc1578;
          goto LAB_004c32dd;
        }
        iVar12 = (**(code **)(*param_2 + 0x1c))(0x8c,0);
        if (iVar12 == 2) {
          fVar13 = DAT_00dc1578 + DAT_00dc1578;
          fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
          goto LAB_004c32da;
        }
      }
    }
LAB_004c32e4:
    if (*(char *)(iVar14 + 0x4f) != '\0') {
      fStack_ac = (DAT_00dc1580 + _DAT_007e3374) * fStack_ac;
      FUN_005031f0(0x2a,DAT_00dc1580);
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x4e) = 1;
    }
    if (_DAT_007e3380 < fStack_88) {
      fStack_ac = (_DAT_007e3374 - fStack_88) * fStack_ac;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x3e) = 1;
      FUN_005031f0(0x1a,-fStack_88);
    }
    if (_DAT_007e3380 < *(float *)(iVar17 + 0x100)) {
      fVar13 = *(float *)(iVar17 + 0x100) * _DAT_007e543c * _DAT_00dc1618;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x52) = 1;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      FUN_005031f0(0x2e,fVar13);
    }
    fVar20 = (float10)FUN_004fd370(1);
    if (fVar20 != (float10)_DAT_007e3374) {
      fVar20 = (fVar20 - (float10)_DAT_007e3374) * (float10)_DAT_007e34c0;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x55) = 1;
      fStack_ac = (float)((fVar20 + (float10)_DAT_007e3374) * (float10)fStack_ac);
      FUN_005031f0(0x31,(float)fVar20);
    }
    switch(*(undefined4 *)(iVar4 + 0x254)) {
    case 0:
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x5c) = 1;
      fVar13 = *(float *)(iVar17 + 0x164 +
                         ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x1b) * 4);
      if (fVar13 != _DAT_007e3380) {
        uVar23 = 0x38;
        fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
        *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x5c) = 1;
        break;
      }
      goto switchD_004c33ff_default;
    case 1:
      fStack_60 = 0.0;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x2d) = 1;
      fVar3 = *(float *)(iVar17 + 0x164 +
                        ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x1f) * 4);
      iVar12 = FUN_0051c480();
      fVar13 = fStack_60;
      if (iVar12 != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        fVar13 = fStack_60;
        if (((iVar18 <= iVar12) &&
            (iVar12 = FUN_0051c480(), fVar13 = _DAT_00dc1664,
            (*(uint *)(iVar12 + 0x1e) >> 0x15 & 1) == 0)) &&
           (iVar12 = FUN_0051c480(), fVar13 = fStack_60, (*(uint *)(iVar12 + 0x1e) >> 0x13 & 1) != 0
           )) {
          fVar13 = _DAT_00dc1668;
        }
      }
      fVar13 = fVar13 + fVar3;
      uVar23 = 9;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      break;
    case 2:
      fStack_48 = 0.0;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x34) = 1;
      fVar3 = *(float *)(iVar17 + 0x164 +
                        ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x1d) * 4);
      iVar12 = FUN_0051c480();
      fVar13 = fStack_48;
      if (iVar12 != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        fVar13 = fStack_48;
        if (((iVar18 <= iVar12) &&
            (iVar12 = FUN_0051c480(), fVar13 = _DAT_00dc1664,
            (*(uint *)(iVar12 + 0x1e) >> 0x16 & 1) == 0)) &&
           (iVar12 = FUN_0051c480(), fVar13 = fStack_48, (*(uint *)(iVar12 + 0x1e) >> 0x17 & 1) != 0
           )) {
          fVar13 = _DAT_00dc1668;
        }
      }
      fVar13 = fVar13 + fVar3;
      uVar23 = 0x10;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      break;
    case 3:
      fStack_40 = 0.0;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x47) = 1;
      fVar3 = *(float *)(iVar17 + 0x164 +
                        ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x1c) * 4);
      iVar12 = FUN_0051c480();
      fVar13 = fStack_40;
      if (iVar12 != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        fVar13 = fStack_40;
        if ((iVar18 <= iVar12) &&
           (iVar12 = FUN_0051c480(), fVar13 = fStack_40, (*(uint *)(iVar12 + 0x1e) >> 0x12 & 1) != 0
           )) {
          fVar13 = _DAT_00dc1664;
        }
      }
      fVar13 = fVar13 + fVar3;
      uVar23 = 0x23;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      break;
    case 4:
      fStack_54 = 0.0;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x33) = 1;
      fVar3 = *(float *)(iVar17 + 0x164 +
                        ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x21) * 4);
      iVar12 = FUN_0051c480();
      fVar13 = fStack_54;
      if (iVar12 != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        fVar13 = fStack_54;
        if (((iVar18 <= iVar12) &&
            (iVar12 = FUN_0051c480(), fVar13 = _DAT_00dc1664,
            (*(uint *)(iVar12 + 0x1e) >> 0x13 & 1) == 0)) &&
           (iVar12 = FUN_0051c480(), fVar13 = fStack_54, (*(uint *)(iVar12 + 0x1e) >> 0x15 & 1) != 0
           )) {
          fVar13 = _DAT_00dc1668;
        }
      }
      fVar13 = fVar13 + fVar3;
      uVar23 = 0xf;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      break;
    case 5:
      fStack_4c = 0.0;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x35) = 1;
      fVar3 = *(float *)(iVar17 + 0x164 +
                        ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x1e) * 4);
      iVar12 = FUN_0051c480();
      fVar13 = fStack_4c;
      if (iVar12 != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        fVar13 = fStack_4c;
        if (((iVar18 <= iVar12) &&
            (iVar12 = FUN_0051c480(), fVar13 = _DAT_00dc1664,
            (*(uint *)(iVar12 + 0x1e) >> 0x17 & 1) == 0)) &&
           (iVar12 = FUN_0051c480(), fVar13 = fStack_4c, (*(uint *)(iVar12 + 0x1e) >> 0x16 & 1) != 0
           )) {
          fVar13 = _DAT_00dc1668;
        }
      }
      fVar13 = fVar13 + fVar3;
      uVar23 = 0x11;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      break;
    case 6:
      fStack_5c = 0.0;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x31) = 1;
      fVar3 = *(float *)(iVar17 + 0x164 +
                        ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x20) * 4);
      iVar12 = FUN_0051c480();
      fVar13 = fStack_5c;
      if (iVar12 != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        fVar13 = fStack_5c;
        if (((iVar18 <= iVar12) &&
            (iVar12 = FUN_0051c480(), fVar13 = _DAT_00dc1664,
            (*(uint *)(iVar12 + 0x1e) >> 0x13 & 1) == 0)) &&
           (iVar12 = FUN_0051c480(), fVar13 = fStack_5c, (*(uint *)(iVar12 + 0x1e) >> 0x15 & 1) != 0
           )) {
          fVar13 = _DAT_00dc1668;
        }
      }
      fVar13 = fVar13 + fVar3;
      uVar23 = 0xd;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      break;
    case 7:
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x3d) = 1;
      fStack_b0 = *(float *)(iVar17 + 0x164 +
                            ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x22) * 4);
      if ((*(char *)(iVar14 + 0x4e) != '\0') && (cVar10 = FUN_004fd4d0(), cVar10 == '\0')) {
        fStack_b0 = fStack_b0 + _DAT_00dc15a0;
      }
      fStack_44 = 0.0;
      iVar12 = FUN_0051c480();
      fVar13 = fStack_44;
      if (iVar12 != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        fVar13 = fStack_44;
        if ((iVar18 <= iVar12) &&
           (iVar12 = FUN_0051c480(), fVar13 = fStack_44, (*(uint *)(iVar12 + 0x1e) >> 0x14 & 1) != 0
           )) {
          fVar13 = _DAT_00dc1664;
        }
      }
      fVar13 = fVar13 + fStack_b0;
      uVar23 = 0x19;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      break;
    default:
      goto switchD_004c33ff_default;
    }
    FUN_005031f0(uVar23,fVar13);
switchD_004c33ff_default:
    uStack_58 = CONCAT31(uStack_58._1_3_,*(undefined1 *)(iVar14 + 0x4e));
    iVar12 = FUN_0044d5b0(*(undefined4 *)(iVar4 + 0x3ac),uStack_58);
    fStack_a4 = 0.0;
    if (iVar12 != 0x33) {
      fStack_a4 = *(float *)(iVar17 + 0x164 + iVar12 * 4);
    }
    switch(*(undefined4 *)(iVar4 + 0x3ac)) {
    case 0:
      if (fStack_a4 != _DAT_007e3380) {
        fStack_a0 = fStack_a4 + _DAT_007e3374;
        *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x5b) = 1;
        FUN_005031f0(0x37,fStack_a4);
      }
      break;
    case 1:
      iVar12 = FUN_0051c480();
      if ((*(uint *)(iVar12 + 0x1e) >> 3 & 1) != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        if (iVar18 <= iVar12) {
          fStack_a4 = fStack_a4 + _DAT_007e6868;
        }
      }
      fStack_a0 = fStack_a4 + _DAT_007e3374;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x2f) = 1;
      FUN_005031f0(0xb,fStack_a4);
      break;
    case 2:
      fStack_a0 = fStack_a4 + _DAT_007e3374;
      FUN_005031f0(0x15,fStack_a4);
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x39) = 1;
      break;
    case 3:
      iVar12 = FUN_0051c480();
      if ((*(uint *)(iVar12 + 0x1e) >> 3 & 1) != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        if (iVar18 <= iVar12) {
          fStack_a4 = fStack_a4 + _DAT_007e6800;
        }
      }
      fStack_a0 = fStack_a4 + _DAT_007e3374;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x3b) = 1;
      FUN_005031f0(0x17,fStack_a4);
      break;
    case 4:
      fStack_a0 = fStack_a4 + _DAT_007e3374;
      FUN_005031f0(0x18,fStack_a4);
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x3c) = 1;
      break;
    case 5:
      iVar12 = FUN_0051c480();
      if ((*(uint *)(iVar12 + 0x1e) >> 3 & 1) != 0) {
        FUN_0051c480();
        iVar12 = FUN_0050a580();
        iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        if (iVar18 <= iVar12) {
          fStack_a4 = fStack_a4 + _DAT_007e6800;
        }
      }
      fStack_a0 = fStack_a4 + _DAT_007e3374;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x26) = 1;
      FUN_005031f0(2,fStack_a4);
      break;
    case 6:
      fStack_a0 = fStack_a4 + _DAT_007e3374;
      FUN_005031f0(0x12,fStack_a4);
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x36) = 1;
    }
    cVar10 = FUN_004e5a40();
    if (cVar10 != '\0') {
      fVar13 = *(float *)(iVar17 + 0x164 +
                         ((-(uint)(*(char *)(iVar14 + 0x4e) != '\0') & 0xffffffed) + 0x1a) * 4);
      fStack_a0 = (fVar13 + _DAT_007e3374) * fStack_a0;
      FUN_005031f0(0x13,fVar13);
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x37) = 1;
    }
    iVar12 = FUN_0051c480();
    if (iVar12 != 0) {
      FUN_0051c480();
      iVar12 = FUN_0050a580();
      iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
      if (iVar18 <= iVar12) {
        FUN_0051c480();
        fVar21 = (float10)FUN_00509fb0();
        fVar20 = (float10)_DAT_00877244;
        *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x32) = 1;
        fStack_ac = (float)((fVar21 * fVar20 + (float10)_DAT_007e3374) * (float10)fStack_ac);
        FUN_005031f0(0xe,(float)(fVar21 * fVar20));
        iVar12 = FUN_0051c480();
        if (((*(uint *)(iVar12 + 0x1e) >> 7 & 1) != 0) &&
           (((iVar12 = *(int *)(iVar17 + 0x134), iVar12 == 5 || (iVar12 == 4)) || (iVar12 == 3)))) {
          fStack_ac = fStack_ac * _DAT_007e67fc;
          FUN_005031f0(0x26,0x3dcccccd);
        }
        iVar12 = FUN_0051c480();
        if ((*(uint *)(iVar12 + 0x1e) >> 8 & 1) != 0) {
          if ((*(int *)(iVar17 + 0x134) < 6) || (8 < *(int *)(iVar17 + 0x134))) {
            uVar23 = 0xbd4ccccd;
            fVar13 = _DAT_007e7a64;
          }
          else {
            uVar23 = 0x3dcccccd;
            fVar13 = _DAT_007e67fc;
          }
          fStack_ac = fStack_ac * fVar13;
          FUN_005031f0(0x27,uVar23);
        }
      }
    }
    iVar12 = local_80;
    iStack_3c = local_80;
    uStack_38 = 0;
    FUN_004c49a0(auStack_2c,&iStack_3c);
    FUN_004c50c0(auStack_2c,auStack_28);
    iStack_24 = iVar12;
    uStack_20 = 0;
    *(int *)(iStack_1c + 0x10) = *(int *)(iStack_1c + 0x10) + -1;
    FUN_004c49a0(auStack_34,&iStack_24);
    FUN_004c50c0(auStack_34,auStack_30);
    if (*(int *)(iStack_14 + 0x10) < 0) {
      fStack_ac = (DAT_00dc1584 + _DAT_007e3374) * fStack_ac;
      FUN_005031f0(5,DAT_00dc1584);
    }
    iVar12 = 5;
    if (*(char *)(iVar14 + 0x4e) != '\0') {
      iVar12 = 4;
    }
    iVar18 = *(int *)(iVar17 + 0x13c);
    fStack_b0 = *(float *)(iVar11 + 0x11a98 + (iVar12 + *(int *)(iVar17 + 0x130) * 6) * 4);
    switch(DAT_00dc16f8) {
    case 1:
      if (fStack_b0 == _DAT_007e3380) {
        if (0 < iVar18) {
          piVar16 = (int *)(iVar17 + 0x88);
          do {
            iVar15 = *piVar16;
            piVar16 = piVar16 + 1;
            iVar18 = iVar18 + -1;
            fStack_b0 = fStack_b0 + *(float *)(iVar11 + 0x127b8 + (iVar12 + iVar15 * 6) * 4);
          } while (iVar18 != 0);
        }
        break;
      }
      goto LAB_004c3f91;
    case 2:
      if (0 < iVar18) {
        fVar13 = _DAT_007e3380;
        if (fStack_b0 != _DAT_007e3380) {
          fVar13 = _DAT_007e3374;
        }
        if (0 < iVar18) {
          piVar16 = (int *)(iVar17 + 0x88);
          do {
            fVar3 = *(float *)(iVar11 + 0x127b8 + (iVar12 + *piVar16 * 6) * 4);
            if (fVar3 != _DAT_007e3380) {
              fStack_b0 = fVar3 + fStack_b0;
              fVar13 = fVar13 + _DAT_007e3374;
            }
            piVar16 = piVar16 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        fStack_b0 = fStack_b0 / fVar13;
      }
      break;
    case 3:
      if (0 < iVar18) {
        piVar16 = (int *)(iVar17 + 0x88);
        do {
          iVar15 = *piVar16;
          piVar16 = piVar16 + 1;
          iVar18 = iVar18 + -1;
          fStack_b0 = fStack_b0 + *(float *)(iVar11 + 0x127b8 + (iVar12 + iVar15 * 6) * 4);
        } while (iVar18 != 0);
      }
      break;
    case 4:
      if ((0 < iVar18) && (bVar19 = fStack_b0 != _DAT_007e3380, 0 < iVar18)) {
        piVar16 = (int *)(iVar17 + 0x88);
        do {
          fVar13 = *(float *)(iVar11 + 0x127b8 + (iVar12 + *piVar16 * 6) * 4);
          if (fVar13 != _DAT_007e3380) {
            if (bVar19) {
              if (fStack_b0 <= fVar13) goto LAB_004c3f0e;
            }
            else {
              bVar19 = true;
            }
            fStack_b0 = fVar13;
          }
LAB_004c3f0e:
          piVar16 = piVar16 + 1;
          iVar18 = iVar18 + -1;
          iVar14 = local_84;
        } while (iVar18 != 0);
      }
      break;
    case 5:
      if ((0 < iVar18) && (bVar19 = fStack_b0 != _DAT_007e3380, 0 < iVar18)) {
        piVar16 = (int *)(iVar17 + 0x88);
        do {
          fVar13 = *(float *)(iVar11 + 0x127b8 + (iVar12 + *piVar16 * 6) * 4);
          if (fVar13 != _DAT_007e3380) {
            if (bVar19) {
              if (fVar13 <= fStack_b0) goto LAB_004c3f76;
            }
            else {
              bVar19 = true;
            }
            fStack_b0 = fVar13;
          }
LAB_004c3f76:
          piVar16 = piVar16 + 1;
          iVar18 = iVar18 + -1;
          iVar14 = local_84;
        } while (iVar18 != 0);
      }
    }
    if (fStack_b0 != _DAT_007e3380) {
LAB_004c3f91:
      fStack_ac = (fStack_b0 + _DAT_007e3374) * fStack_ac;
      FUN_005031f0(0x25,fStack_b0);
    }
    if ((2 < local_6c) && (cVar10 = FUN_004e4b60(), cVar10 == '\0')) {
      fVar13 = (float)(local_6c + -2) * _DAT_00dc1590;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x2c) = 1;
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      FUN_005031f0(8,fVar13);
    }
    iVar12 = *(int *)(*(int *)(*(int *)(iVar14 + 0x40) + 0x78) + 0x482);
    if ((((iVar12 != 0) && (*(char *)(iVar14 + 0x4e) == '\0')) &&
        (iVar12 = (**(code **)(*(int *)(iVar12 + 0x28) + 4))(), iVar12 < 2)) &&
       (cVar10 = FUN_004e4b60(), cVar10 == '\0')) {
      bVar19 = true;
      iVar12 = *(int *)(*(int *)(iVar4 + 0x482) + 0x3e);
      if (iVar12 != 0) {
        do {
          iVar14 = local_84;
          if (!bVar19) goto LAB_004c40ec;
          iVar12 = *(int *)(iVar12 + 8);
          iVar14 = FUN_004c9f81();
          if (iVar14 != 0) {
            cVar10 = FUN_005861a0(*(undefined4 *)(iVar14 + 6));
            if (cVar10 != '\0') {
              bVar19 = false;
            }
            if ((*(int *)(iVar11 + 0x3350) != 0) &&
               (*(int *)(iVar14 + 0x3350) == *(int *)(*(int *)(iVar17 + 0x5c) + 0x3350))) {
              bVar19 = false;
            }
          }
        } while (iVar12 != 0);
        iVar14 = local_84;
        if (!bVar19) goto LAB_004c40ec;
      }
      fStack_ac = (DAT_00dc1594 + _DAT_007e3374) * fStack_ac;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x2b) = 1;
      FUN_005031f0(7,DAT_00dc1594);
    }
LAB_004c40ec:
    if (*(char *)(iVar17 + 0x15f) == '\0') {
LAB_004c4144:
      if (*(char *)(iVar14 + 0x4e) != '\0') goto LAB_004c414f;
    }
    else {
      if (*(char *)(iVar14 + 0x4e) == '\0') {
        fVar13 = *(float *)(*(int *)(iVar17 + 0x6c) + 0x29e);
        if (_DAT_007e3380 < fVar13) {
          fVar13 = fVar13 * _DAT_00877234;
          *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x2a) = 1;
          fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
          FUN_005031f0(6,fVar13);
        }
        goto LAB_004c4144;
      }
LAB_004c414f:
      if ((((char)param_2[0x94] == '\0') &&
          (iVar12 = *(int *)(*(int *)(*(int *)(iVar14 + 0x40) + 0x78) + 0x3d8), iVar12 != 0)) &&
         (cVar10 = FUN_0044a690(*(undefined4 *)(iVar11 + 6)), iVar18 = local_80, cVar10 == '\0')) {
        iVar15 = FUN_004e9370(local_80);
        if (((*(int *)(iVar15 + 0x254) == 8) || (*(int *)(iVar15 + 0x254) == 9)) || (iVar18 == 0)) {
          fVar20 = (float10)FUN_004ed020();
          fStack_b0 = (float)((float10)*(float *)(iVar12 + 0xe302) * fVar20 * (float10)_DAT_00dc159c
                             * ((float10)_DAT_007e3374 - (float10)*(float *)(iVar17 + 0x1ac)));
          fVar20 = (float10)FUN_004ed020();
          if ((float10)_DAT_007e3380 < fVar20) {
            *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x2e) = 1;
          }
        }
        else {
          fVar20 = (float10)FUN_004ecf60();
          fStack_b0 = (float)((float10)*(float *)(iVar12 + 0xe2fe) * fVar20 * (float10)_DAT_00dc1598
                             * ((float10)_DAT_007e3374 - (float10)*(float *)(iVar17 + 0x1ac)));
          fVar20 = (float10)FUN_004ecf60();
          if ((float10)_DAT_007e3380 < fVar20) {
            *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x2e) = 1;
          }
        }
        iVar12 = FUN_0051c480();
        if ((*(uint *)(iVar12 + 0x1e) >> 6 & 1) != 0) {
          FUN_0051c480();
          iVar12 = FUN_0050a580();
          iVar18 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
          if (iVar18 <= iVar12) {
            fStack_b0 = fStack_b0 * _DAT_007e4094;
          }
        }
        if (fStack_b0 <= _DAT_007e3380) {
          if (fStack_b0 < _DAT_007e7368) {
            fStack_b0 = -0.99;
          }
        }
        else {
          fStack_b0 = 0.0;
        }
        fStack_ac = (fStack_b0 + _DAT_007e3374) * fStack_ac;
        if (fStack_b0 != _DAT_007e3380) {
          FUN_005031f0(10,fStack_b0);
        }
      }
    }
    fVar13 = *(float *)(iVar11 + 0x234) * _DAT_00dc15a4;
    if (fVar13 != _DAT_007e3380) {
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x28) = 1;
      FUN_005031f0(4,fVar13);
    }
    fVar20 = (float10)FUN_0076bbb0(iVar11,5);
    fStack_ac = (float)((fVar20 + (float10)_DAT_007e3374) * (float10)fStack_ac);
    if (fVar20 != (float10)_DAT_007e3380) {
      FUN_005031f0(0x20,(float)fVar20);
    }
    fVar13 = *(float *)(iVar17 + 0x124);
    if (((*(char *)(iVar17 + 0x156) != '\0') && ((char)param_2[0x94] == '\0')) &&
       (fVar13 != _DAT_007e3380)) {
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x45) = 1;
      FUN_005031f0(0x21,fVar13);
    }
    fVar13 = *(float *)(iVar17 + 0x120);
    if (((*(char *)(iVar17 + 0x157) != '\0') && ((char)param_2[0x94] == '\0')) &&
       (fVar13 != _DAT_007e3380)) {
      fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
      *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x46) = 1;
      FUN_005031f0(0x22,fVar13);
    }
    piVar16 = (int *)(**(code **)(*param_3 + 0xc))();
    iVar12 = (**(code **)(*piVar16 + 4))();
    if (0 < iVar12) {
      fStack_50 = *(float *)(iVar11 + 0x37c2);
      (**(code **)(*param_3 + 0xc))();
      iVar12 = FUN_00522770();
      fVar13 = (*(float *)(iVar12 + 0x37c6) + fStack_50) - _DAT_007e7a60;
      if (_DAT_007e3380 < fVar13) {
        fVar13 = fVar13 * _DAT_007e7a5c;
        *(undefined1 *)(*(int *)(iVar14 + 0x40) + 0x57) = 1;
        fStack_ac = (fVar13 + _DAT_007e3374) * fStack_ac;
        FUN_005031f0(0x33,fVar13);
      }
    }
    pvStack_64 = (void *)CONCAT31(pvStack_64._1_3_,*(undefined1 *)(iVar14 + 0x4e));
    fVar20 = (float10)FUN_005257b0(*(undefined4 *)(iVar14 + 0x40),pvStack_64);
    if (fVar20 != (float10)_DAT_007e3380) {
      fStack_ac = ((float)fVar20 + _DAT_007e3374) * fStack_ac;
      FUN_005031f0(0x30,(float)fVar20);
    }
    fStack_a0 = fStack_a0 * fStack_ac;
    if (fStack_a0 < _DAT_007e46cc) {
      fStack_a0 = 0.01;
    }
    if (fStack_ac < _DAT_007e46cc) {
      fStack_ac = _DAT_007e46cc;
    }
    *(float *)(iVar17 + 0x78) = fStack_ac;
    *(float *)(iVar17 + 0x74) = fStack_a0;
  } while( true );
}


