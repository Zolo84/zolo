// FUN_00486640 @ 486640 size=4970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00486640(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  float fVar4;
  undefined **ppuVar5;
  uint3 uVar6;
  bool bVar7;
  float fVar8;
  char cVar9;
  undefined4 *puVar10;
  short *psVar11;
  void *pvVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int *piVar18;
  undefined2 *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  int *piVar25;
  bool bVar26;
  bool bVar27;
  float10 fVar28;
  int unaff_retaddr;
  int *local_774;
  undefined1 uStack_76c;
  undefined1 uStack_76b;
  undefined1 uStack_76a;
  byte bStack_769;
  undefined2 uStack_766;
  undefined2 local_764;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 *local_754;
  undefined4 uStack_750;
  float local_74c;
  undefined4 uStack_748;
  undefined **local_744;
  undefined **ppuStack_740;
  int iStack_73c;
  undefined4 uStack_738;
  int iStack_734;
  undefined1 uStack_730;
  int *piStack_114;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd736;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0076cbf0();
  local_774 = &DAT_0089cad8;
  do {
    iVar23 = *local_774;
    if (iVar23 != 0) {
      piVar3 = *(int **)(iVar23 + 0x3666);
      iVar22 = _DAT_00d77b50;
      while (_DAT_00d77b50 = iVar22, piVar3 != (int *)0x0) {
        piVar25 = (int *)piVar3[2];
        iVar15 = *piVar3;
        piVar3 = piVar25;
        iVar22 = _DAT_00d77b50;
        if (*(int *)(iVar15 + 0xcc) == *(int *)(*(int *)(param_1 + 4) + 0xe)) {
          if (*(int *)(iVar15 + 0xd8) != 0) {
            puVar10 = operator_new(0xc);
            local_4 = 0;
            local_754 = puVar10;
            if (puVar10 != (undefined4 *)0x0) {
              iVar22 = *(int *)(iVar15 + 0xd8);
              FUN_00498820();
              iVar20 = puVar10[1];
              *puVar10 = &PTR_FUN_007e5398;
              *(undefined4 *)(iVar20 + 0xe) = *(undefined4 *)(iVar22 + 0xc);
              *(undefined2 *)(iVar20 + 0x12) = *(undefined2 *)(iVar22 + 0x10);
              *(undefined4 *)(puVar10[1] + 0x14) = 0;
            }
            local_4 = 0xffffffff;
            FUN_00565c30();
          }
          iVar22 = 0;
          if (0 < DAT_00877554) {
            do {
              psVar11 = (short *)FUN_0044ae20();
              if ((*(int *)(psVar11 + 1) == *(int *)(iVar15 + 0xe)) &&
                 (*psVar11 == *(short *)(iVar15 + 0xc))) {
                FUN_00446d10();
                FUN_0044ae60();
              }
              iVar22 = iVar22 + 1;
            } while (iVar22 < DAT_00877554);
          }
          (**(code **)(*(int *)(iVar23 + 0x3662) + 0x18))();
          *(undefined4 *)(iVar15 + 200) = *(undefined4 *)(*(int *)(unaff_retaddr + 4) + 0xe);
          cVar9 = (**(code **)(DAT_00d77b4c + 0x24))();
          iVar15 = DAT_00d77b54;
          iVar22 = _DAT_00d77b50;
          if (cVar9 == '\0') {
            pvVar12 = operator_new(0xe);
            local_4 = 1;
            if (pvVar12 == (void *)0x0) {
              DAT_00d77b54 = 0;
            }
            else {
              DAT_00d77b54 = FUN_0045bad0();
            }
            local_4 = 0xffffffff;
            iVar20 = DAT_00d77b58 + 1;
            bVar26 = DAT_00d77b58 != 0;
            iVar22 = DAT_00d77b54;
            DAT_00d77b58 = iVar20;
            if (bVar26) {
              *(int *)(iVar15 + 8) = DAT_00d77b54;
              iVar22 = _DAT_00d77b50;
            }
          }
        }
      }
    }
    local_774 = local_774 + 1;
  } while ((int)local_774 < 0x89d038);
  FUN_0044b6f0();
  iVar20 = 0;
  uStack_758 = (undefined4 *)((uint)uStack_758 & 0xffff0000);
  uStack_750 = 0;
  local_74c = 0.0;
  piVar3 = (int *)(&DAT_0089cad8)[*(int *)(*(int *)(param_1 + 4) + 0xe)];
  iVar22 = *(int *)((int)piVar3 + 6);
  iVar23 = iVar22 * 0xa8;
  puVar10 = (undefined4 *)(&DAT_00d685aa + iVar23);
  uVar2 = *(undefined1 *)(*(int *)(param_1 + 4) + 0x19);
  *(undefined4 *)((int)piVar3 + 0x1185a) = *(undefined4 *)(&DAT_00d68602 + iVar23);
  *(undefined4 *)((int)piVar3 + 0x1185e) = *(undefined4 *)(&DAT_00d68606 + iVar23);
  iVar15 = *(int *)(param_1 + 4);
  uStack_748 = CONCAT13(uVar2,(undefined3)uStack_748);
  local_754 = puVar10;
  if (*(short *)(iVar15 + 0x1a) != 0) {
    uStack_76a = 0;
    do {
      iVar15 = *(int *)(iVar15 + 0x1c + iVar20 * 4);
      if (iVar20 == 0) {
        *(int *)((int)piVar3 + 0x117de) = iVar15;
        piVar3[0x45fc] = iVar15;
      }
      iVar15 = DAT_00ab27b4 + iVar15 * 0x4b2;
      FUN_004e7190();
      *(undefined4 *)(iVar15 + 0x21e) = 0;
      *(uint *)(iVar15 + 0x3c8) = (uint)bStack_769 << 0x18;
      *(undefined2 *)(iVar15 + 0x3cc) = 0;
      iVar13 = FUN_004ece80();
      if (iVar13 != 0) {
        uStack_758 = (undefined4 *)CONCAT31(uStack_758._1_3_,1);
      }
      iVar13 = FUN_004ece90();
      if (iVar13 != 0) {
        uStack_758._0_2_ = CONCAT11(1,(undefined1)uStack_758);
      }
      if (*(int *)(iVar15 + 0x46a) != 0) {
        uStack_750 = uStack_750 + 1;
      }
      fVar28 = (float10)FUN_004ed0e0();
      iVar15 = *(int *)(param_1 + 4);
      iVar20 = iVar20 + 1;
      local_74c = (float)(fVar28 + (float10)local_74c);
    } while (iVar20 < (int)(uint)*(ushort *)(iVar15 + 0x1a));
  }
  cVar9 = (**(code **)(*(int *)((int)piVar3 + 0xe88e) + 0x24))();
  if (cVar9 == '\0') {
    FUN_00449650();
  }
  else {
    iVar23 = *(int *)(&DAT_00d685fc + iVar23);
    *(int *)((int)piVar3 + 0x117de) = iVar23;
    piVar3[0x45fc] = iVar23;
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x17) != '\0') {
    fVar4 = (float)(int)-(uint)*(ushort *)(*(int *)(param_1 + 4) + 0x1a) +
            *(float *)(uStack_748 + 0x334c);
    if (fVar4 < _DAT_007e3380) {
      fVar4 = _DAT_007e3380;
    }
    *(float *)(uStack_748 + 0x334c) = fVar4;
  }
  iVar15 = DAT_00d685a6;
  iVar23 = *(int *)(DAT_00d685a6 + 0x56c);
  pvVar12 = operator_new(0xe);
  puStack_8 = (undefined1 *)0x2;
  if (pvVar12 == (void *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = FUN_00473a90();
  }
  iVar20 = *(int *)(iVar15 + 0x570);
  puStack_8 = (undefined1 *)0xffffffff;
  *(undefined4 *)(iVar15 + 0x56c) = uVar14;
  *(int *)(iVar15 + 0x570) = iVar20 + 1;
  if (iVar20 == 0) {
    *(undefined4 *)(iVar15 + 0x568) = uVar14;
  }
  else {
    *(undefined4 *)(iVar23 + 8) = uVar14;
  }
  iVar23 = (&DAT_00d685be)[iVar22 * 0x2a];
  if (iVar23 != 0) {
    do {
      iVar23 = *(int *)(iVar23 + 8);
      cVar9 = (**(code **)(*(int *)((int)piVar3 + 0xe8b2) + 0x24))();
      if (cVar9 == '\0') {
        iVar22 = *(int *)((int)piVar3 + 0xe8ba);
        pvVar12 = operator_new(0xe);
        puStack_8 = (undefined1 *)0x3;
        if (pvVar12 == (void *)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = FUN_0049a7a0();
        }
        iVar15 = *(int *)((int)piVar3 + 0xe8be);
        puStack_8 = (undefined1 *)0xffffffff;
        *(undefined4 *)((int)piVar3 + 0xe8ba) = uVar14;
        *(int *)((int)piVar3 + 0xe8be) = iVar15 + 1;
        if (iVar15 == 0) {
          *(undefined4 *)((int)piVar3 + 0xe8b6) = uVar14;
        }
        else {
          *(undefined4 *)(iVar22 + 8) = uVar14;
        }
      }
      puVar10 = uStack_758;
    } while (iVar23 != 0);
  }
  iVar23 = *(int *)((int)puVar10 + 0x26);
  if (iVar23 != 0) {
    do {
      iVar23 = *(int *)(iVar23 + 8);
      cVar9 = (**(code **)(*(int *)((int)piVar3 + 0xe8b2) + 0x24))();
      if (cVar9 == '\0') {
        iVar22 = *(int *)((int)piVar3 + 0xe8ba);
        pvVar12 = operator_new(0xe);
        puStack_8 = (undefined1 *)0x4;
        if (pvVar12 == (void *)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = FUN_0049a7a0();
        }
        iVar15 = *(int *)((int)piVar3 + 0xe8be);
        puStack_8 = (undefined1 *)0xffffffff;
        *(undefined4 *)((int)piVar3 + 0xe8ba) = uVar14;
        *(int *)((int)piVar3 + 0xe8be) = iVar15 + 1;
        if (iVar15 == 0) {
          *(undefined4 *)((int)piVar3 + 0xe8b6) = uVar14;
        }
        else {
          *(undefined4 *)(iVar22 + 8) = uVar14;
        }
      }
    } while (iVar23 != 0);
  }
  iVar23 = uStack_758[0xe];
  if (iVar23 != 0) {
    do {
      iVar23 = *(int *)(iVar23 + 8);
      cVar9 = (**(code **)(piVar3[0x3a31] + 0x24))();
      if (cVar9 == '\0') {
        iVar22 = piVar3[0x3a33];
        pvVar12 = operator_new(0xe);
        puStack_8 = (undefined1 *)0x5;
        if (pvVar12 == (void *)0x0) {
          iVar15 = 0;
        }
        else {
          iVar15 = FUN_0049a7a0();
        }
        iVar20 = piVar3[0x3a34];
        puStack_8 = (undefined1 *)0xffffffff;
        piVar3[0x3a33] = iVar15;
        piVar3[0x3a34] = iVar20 + 1;
        if (iVar20 == 0) {
          piVar3[0x3a32] = iVar15;
        }
        else {
          *(int *)(iVar22 + 8) = iVar15;
        }
      }
    } while (iVar23 != 0);
  }
  FUN_00540ed0();
  iVar23 = *(int *)(unaff_retaddr + 4);
  if ((*(char *)(iVar23 + 0x17) == '\0') || (*(char *)(iVar23 + 0x18) != '\0')) {
    iVar22 = *(int *)((int)piVar3 + 0x1185e);
    iVar15 = (&DAT_0089cad8)[*(int *)(iVar23 + 0x12)];
    if ((iVar22 == 4) && (*(char *)(iVar23 + 0x18) == '\0')) {
      iVar23 = *(int *)(*(int *)(iVar15 + 0x244) + 0xe);
      do {
        iVar22 = _rand();
        uVar16 = iVar22 % 10 - iVar23;
        uVar21 = (int)uVar16 >> 0x1f;
      } while ((int)((uVar16 ^ uVar21) - uVar21) < 3);
      FUN_00761440();
      iVar23 = *(int *)(*(int *)(iVar15 + 0x244) + 0x12);
      iVar20 = 9 - iVar23;
      iVar22 = iVar20 - iVar23;
      if (iVar23 < iVar20) {
        do {
          if ((2 < iVar20 - iVar23) || (9 < iVar20)) break;
          iVar20 = iVar20 + 1;
        } while (iVar23 < iVar20);
        iVar22 = iVar20 - iVar23;
      }
      if (SBORROW4(iVar20,iVar23) != iVar22 < 0) {
        iVar22 = iVar23 - iVar20;
        do {
          if ((2 < iVar22) || (iVar20 < 1)) break;
          iVar20 = iVar20 + -1;
          iVar22 = iVar22 + 1;
        } while (iVar20 < iVar23);
      }
    }
    else {
      if (*(char *)(iVar23 + 0x18) != '\0') {
        iVar22 = 4;
      }
      iVar23 = 0;
      do {
        iVar20 = 0;
        do {
          iVar13 = FUN_0075fff0();
          if (iVar13 == iVar22) goto LAB_00486d1a;
          iVar20 = iVar20 + 1;
        } while (iVar20 < 10);
        iVar23 = iVar23 + 1;
      } while (iVar23 < 10);
LAB_00486d1a:
      FUN_00761440();
    }
    FUN_00761440();
    iVar23 = 2;
    do {
      iVar20 = 0;
      iVar22 = *(int *)(*(int *)(iVar15 + 0x244) + 0xe + iVar23 * 4);
      cVar9 = FUN_004a0270();
      while ((cVar9 == '\0' && (iVar20 < 10))) {
        iVar20 = iVar20 + 1;
        iVar22 = iVar22 + 1;
        if (9 < iVar22) {
          iVar22 = 0;
        }
        cVar9 = FUN_004a0270();
      }
      FUN_00761440();
      iVar23 = iVar23 + 1;
    } while (iVar23 < 7);
  }
  else {
    iVar23 = 0;
    do {
      FUN_00761440();
      iVar23 = iVar23 + 1;
    } while (iVar23 < 7);
  }
  pcVar24 = &DAT_00d56f2c;
  do {
    if (*pcVar24 == '\0') {
      FUN_00761440();
    }
    pcVar24 = pcVar24 + 3;
  } while ((int)pcVar24 < 0xd56f41);
  FUN_00449650();
  (**(code **)(*piVar3 + 0x14))();
  FUN_00586160();
  piVar25 = &DAT_0089cad8;
  do {
    iVar23 = *piVar25;
    if (iVar23 != 0) {
      *(int *)(*(int *)(iVar23 + 0x12da) + 0x10 + *(int *)((int)piVar3 + 6) * 0x2c) =
           *(int *)((int)piVar3 + 6);
      *(int *)(*(int *)(iVar23 + 0x12da) + 0x20 + *(int *)((int)piVar3 + 6) * 0x2c) = iVar23;
    }
    piVar25 = piVar25 + 1;
  } while ((int)piVar25 < 0x89d038);
  FUN_005886c0();
  uVar14 = *(undefined4 *)((int)piVar3 + 6);
  (**(code **)(*(int *)(uStack_748 + 0xe) + 0xc))();
  (**(code **)(*(int *)((int)piVar3 + 0xe) + 0xc))();
  FUN_006ea3b0(0x2c,uVar14);
  iStack_73c = 0;
  uStack_738 = 0;
  iStack_734 = 0;
  uStack_730 = 0;
  ppuStack_740 = &PTR_LAB_007e6af8;
  puStack_8 = (undefined1 *)0x6;
  FUN_0076d310();
  puVar10 = local_754;
  iVar23 = iStack_73c;
  if (iStack_734 < 1) {
    FUN_00534920();
    puStack_8._0_1_ = 7;
    piStack_114 = piVar3;
    FUN_0076efb0();
    FUN_0076d310();
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    FUN_005349a0();
    puVar10 = local_754;
    iVar23 = iStack_73c;
  }
  while (local_754 = puVar10, iVar23 != 0) {
    iVar23 = *(int *)(iVar23 + 8);
    pvVar12 = operator_new(0xc);
    puStack_8._0_1_ = 8;
    if (pvVar12 != (void *)0x0) {
      uVar14 = FUN_00447250();
      FUN_00449290(uVar14);
      uVar14 = FUN_00458110();
      uVar17 = FUN_0045fec0(uVar14);
      FUN_004639d0(0x129,uVar17,uVar14);
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
    FUN_00565c30();
    puVar10 = local_754;
  }
  FUN_0044d8c0();
  FUN_0044f580();
  FUN_0076c850();
  iVar23 = (**(code **)(piVar3[0x45fd] + 4))();
  if (iVar23 == 0) {
    FUN_0076f4d0();
    FUN_0076e2a0();
  }
  bVar26 = _DAT_00d7d080 <= _DAT_007e3380;
  uStack_75c = CONCAT13(1,(uint3)uStack_75c);
  if (_DAT_00d7d084 <= _DAT_007e3380) {
    uStack_75c = (uint)(uint3)uStack_75c;
  }
  uStack_75c._0_3_ = CONCAT12(1,(ushort)uStack_75c);
  uVar6 = (uint3)uStack_75c;
  if (_DAT_00d7d088 <= _DAT_007e3380) {
    uVar6 = (uint3)(ushort)uStack_75c;
  }
  bVar27 = _DAT_007e3380 < _DAT_00d7d08c;
  iVar23 = *(int *)(uStack_748 + 0x360c);
joined_r0x00487007:
  iVar22 = DAT_00d4c5f6;
  if (iVar23 != 0) {
    iVar23 = *(int *)(iVar23 + 10);
    iVar22 = FUN_00428460();
    puVar10 = local_754;
    if (((((iVar22 != 0) && (iVar22 != 8)) &&
         ((iVar15 = *(int *)(iVar22 + 0x76), iVar15 != 6 || (bVar27)))) &&
        ((iVar15 != 3 || (uStack_75c._0_1_ = (char)uVar6, (char)uStack_75c != '\0')))) &&
       ((iVar15 != 2 || (uStack_75c._1_1_ = (char)(uVar6 >> 8), uStack_75c._1_1_ != '\0')))) {
      bVar7 = false;
      iVar15 = 0;
      if (0 < *(int *)(iVar22 + 0x132)) {
        do {
          iVar20 = FUN_0075a0f0();
          if ((*(int *)(iVar20 + 0x16) == 9) && (uStack_75c._3_1_ == '\0')) {
            bVar7 = true;
          }
          iVar20 = FUN_0075a0f0();
          if ((*(int *)(iVar20 + 0x16) == 10) &&
             (uStack_75c._2_1_ = (char)(uVar6 >> 0x10), uStack_75c._2_1_ == '\0')) {
            bVar7 = true;
          }
          iVar20 = FUN_0075a0f0();
          if ((*(int *)(iVar20 + 0x16) == 6) && (bVar26)) {
            bVar7 = true;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(iVar22 + 0x132));
        puVar10 = local_754;
        if (bVar7) goto joined_r0x00487007;
      }
      FUN_0044df10();
      FUN_004582e0();
      FUN_004739f0();
      cVar9 = FUN_0042e980();
      puVar10 = local_754;
      if (cVar9 != '\0') {
        FUN_00713790();
        puVar10 = local_754;
      }
    }
    goto joined_r0x00487007;
  }
  while (iVar22 != 0) {
    iVar22 = *(int *)(iVar22 + 8);
    FUN_0044df10();
    piVar25 = (int *)FUN_004582e0();
    cVar9 = (**(code **)(*piVar25 + 0x24))();
    if (cVar9 == '\0') {
      FUN_0044df10();
      piVar25 = (int *)FUN_004582f0();
      cVar9 = (**(code **)(*piVar25 + 0x24))();
      if (cVar9 == '\0') {
        FUN_0044df10();
        FUN_004582f0();
        FUN_004739f0();
      }
    }
  }
  uStack_76c = 0;
  uStack_76b = 0;
  iVar23 = FUN_00428460();
  if ((iVar23 != 0) && (iVar23 != 8)) {
    FUN_0044df10();
    piVar25 = (int *)FUN_004582e0();
    cVar9 = (**(code **)(*piVar25 + 0x24))();
    if (cVar9 == '\0') {
      FUN_0044df10();
      piVar25 = (int *)FUN_004582f0();
      cVar9 = (**(code **)(*piVar25 + 0x24))();
      if (cVar9 == '\0') {
        FUN_0044df10();
        FUN_004582f0();
        FUN_004739f0();
      }
    }
  }
  iVar23 = *(int *)((int)piVar3 + 0x3642);
  while (iVar23 != 0) {
    iVar22 = *(int *)(iVar23 + 10);
    uStack_76c = (undefined1)((uint)*(undefined4 *)(iVar23 + 2) >> 0x10);
    uStack_76b = (undefined1)((uint)*(undefined4 *)(iVar23 + 2) >> 0x18);
    iVar15 = FUN_00428460();
    iVar23 = iVar22;
    if (((iVar15 != 0) && (iVar15 != 8)) && (*(char *)(iVar15 + 0x122f) != '\0')) {
      iVar22 = FUN_0072a1e0();
      piVar25 = *(int **)(iVar22 + 4);
      while (piVar25 != (int *)0x0) {
        piVar18 = (int *)piVar25[2];
        iVar22 = *piVar25;
        piVar25 = piVar18;
        if (*(int *)(iVar22 + 4) == 0x10e) {
          FUN_00496e60();
          piVar18 = (int *)FUN_004582f0();
          (**(code **)(*piVar18 + 0x18))();
        }
      }
    }
  }
  iVar23 = *piVar3;
  (**(code **)(*(int *)((int)piVar3 + 0xe88e) + 4))();
  (**(code **)(iVar23 + 0x28))();
  if (0 < (int)puVar10) {
    if (10 < (int)puVar10) {
      puVar10 = (undefined4 *)0xa;
    }
    piVar3[0xe84] = (int)((float)((int)puVar10 * 5 + 0x1e) + (float)piVar3[0xe84]);
    piVar3[0xe85] = (int)((float)(int)((int)puVar10 + 10) + (float)piVar3[0xe85]);
  }
  puVar10 = DAT_008775fc;
  if (DAT_00dc18cc != '\0') {
    puVar10 = (undefined4 *)(_DAT_00dc1894 * (float)local_754 * _DAT_007e34c0);
  }
  local_754 = puVar10;
  puVar10 = (undefined4 *)(*(float *)((int)local_74c + 0x39c0) * _DAT_007e34e0);
  if ((float)puVar10 < (float)local_754) {
    local_754 = puVar10;
  }
  FUN_0049eba0();
  FUN_0049eae0();
  FUN_0049eb10();
  FUN_0049eb40();
  FUN_0049eb70();
  FUN_0049eba0();
  FUN_0049eae0();
  FUN_0049eb10();
  FUN_0049eb40();
  FUN_0049eb70();
  FUN_004cc729();
  if ((uStack_750._3_1_ == '\0') &&
     (cVar9 = (**(code **)(*(int *)CONCAT13(bStack_769,
                                            CONCAT12(uStack_76a,CONCAT11(uStack_76b,uStack_76c))) +
                          0x1c))(), cVar9 == '\0')) {
    iVar22 = CONCAT13(bStack_769,CONCAT12(uStack_76a,CONCAT11(uStack_76b,uStack_76c)));
    iVar23 = piVar3[0x3a29];
    iVar15 = 0;
    fVar4 = *(float *)(*(int *)(iVar22 + 0x244) + 0xb6);
    if (iVar23 == 0) {
LAB_004875a6:
      fVar4 = fVar4 * _DAT_007e34c0;
    }
    else {
      do {
        iVar20 = FUN_004e9370();
        iVar23 = *(int *)(iVar23 + 8);
        iVar15 = iVar15 + *(int *)(iVar20 + 0x19e);
      } while (iVar23 != 0);
      if (iVar15 < 4) goto LAB_004875a6;
    }
    fVar4 = fVar4 + *(float *)(iVar22 + 0x234);
    fVar8 = _DAT_007e4088;
    if ((fVar4 <= _DAT_007e4088) && (fVar8 = fVar4, fVar4 < _DAT_007e3380)) {
      fVar8 = _DAT_007e3380;
    }
    *(float *)(iVar22 + 0x234) = fVar8;
  }
  iVar23 = FUN_00451250();
  if (iVar23 < 2) {
    iVar23 = 1;
  }
  else if (iVar23 < 0xb) {
    iVar23 = iVar23 + -1;
    if (iVar23 == 0) goto LAB_00487627;
  }
  else {
    iVar23 = 10;
  }
  do {
    FUN_00451260();
    iVar23 = iVar23 + -1;
  } while (iVar23 != 0);
LAB_00487627:
  cVar9 = FUN_0042e980();
  if (cVar9 != '\0') {
    if (DAT_00dc4b5e != '\0') {
      FUN_004af700();
      FUN_00429a00();
    }
    if (((&DAT_00dc0fd4)[*(int *)((int)piVar3 + 6)] == 1) ||
       (bVar26 = true, (&DAT_00dc0fd4)[*(int *)((int)piVar3 + 6)] == 2)) {
      bVar26 = false;
    }
    piVar25 = *(int **)(DAT_00d615b2 + 8);
joined_r0x00487688:
    if (piVar25 != (int *)0x0) {
      iVar23 = *piVar25;
      piVar25 = (int *)piVar25[2];
      if ((*(char *)(iVar23 + 0x1237) == '\0') && (*(char *)(iVar23 + 0x1238) == '\0')) {
        FUN_00712010();
        cVar9 = FUN_0042ddd0();
        if (cVar9 == '\0') {
          FUN_0044df10();
          piVar18 = (int *)FUN_00498640();
          piVar18 = (int *)(**(code **)(*piVar18 + 0x28))(&local_754);
          if ((*piVar18 == 0) && ((bVar26 || (*(char *)(iVar23 + 0x23a6) == '\0')))) {
            bVar27 = false;
            cVar9 = FUN_0042dd70();
            if (cVar9 == '\0') {
              if (0 < *(int *)(iVar23 + 0x1252)) {
                _rand();
              }
              FUN_0042dc20();
            }
            if (*(int *)(iVar23 + 0x1256) == 0) {
              iVar22 = (**(code **)(*(int *)(iVar23 + 0x23ac) + 4))();
              if (0 < iVar22) {
                if (*(int **)(iVar23 + 0x23b0) == (int *)0x0) goto joined_r0x00487688;
                piVar18 = *(int **)(iVar23 + 0x23b0);
                do {
                  piVar1 = piVar18 + 2;
                  if (*piVar18 == *(int *)((int)piVar3 + 6)) {
                    bVar27 = true;
                  }
                  piVar18 = (int *)*piVar1;
                } while ((int *)*piVar1 != (int *)0x0);
                if (!bVar27) goto joined_r0x00487688;
              }
            }
            else if (*(int *)(iVar23 + 0x1256) != *(int *)((int)piVar3 + 6))
            goto joined_r0x00487688;
            puVar10 = operator_new(0xc);
            pvStack_c._0_1_ = 9;
            if (puVar10 != (undefined4 *)0x0) {
              uStack_766 = (undefined2)*(undefined4 *)((int)piVar3 + 6);
              local_764 = (undefined2)((uint)*(undefined4 *)((int)piVar3 + 6) >> 0x10);
              iVar22 = _rand();
              puVar19 = operator_new(0x1e);
              if (puVar19 == (undefined2 *)0x0) {
                puVar19 = (undefined2 *)0x0;
              }
              else {
                FUN_0042d2d0();
                puVar19[4] = 0;
                *(undefined4 *)(puVar19 + 5) = 0;
                puVar19[7] = 0;
                *(undefined4 *)(puVar19 + 8) = 0;
                puVar19[10] = 0;
                *(undefined4 *)(puVar19 + 0xb) = 0;
              }
              puVar10[1] = puVar19;
              *(undefined1 *)(puVar10 + 2) = 0;
              *(undefined1 *)((int)puVar10 + 9) = 1;
              *puVar10 = &PTR_FUN_007e52f0;
              *(undefined1 *)((int)puVar10 + 10) = 0;
              *puVar19 = 0xa0;
              iVar15 = puVar10[1];
              *(undefined4 *)(iVar15 + 8) = _DAT_0088f228;
              *(undefined2 *)(iVar15 + 0xc) = DAT_0088f22c;
              iVar15 = puVar10[1];
              local_74c = (float)((uint)local_74c & 0xff000000);
              *(float *)(iVar15 + 2) = local_74c;
              *(undefined2 *)(iVar15 + 6) = 0;
              iVar15 = puVar10[1];
              *puVar10 = &PTR_FUN_007e52d0;
              *(undefined4 *)(iVar15 + 0xe) = *(undefined4 *)(iVar23 + 0xc);
              *(undefined2 *)(iVar15 + 0x12) = *(undefined2 *)(iVar23 + 0x10);
              iVar23 = puVar10[1];
              *(uint *)(iVar23 + 0x14) = CONCAT22(uStack_766,3);
              *(undefined2 *)(iVar23 + 0x18) = local_764;
              *(int *)(puVar10[1] + 0x1a) = iVar22;
            }
            pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
            FUN_00565af0();
            if (DAT_00dc4b5e != '\0') {
              uVar14 = FUN_004af700(*(undefined4 *)((int)piVar3 + 6));
              FUN_00429a00(s_Added_to_events___s_____s____d__0083d15c,uVar14);
            }
          }
        }
      }
      goto joined_r0x00487688;
    }
    if (DAT_00dc4b5e != '\0') {
      FUN_004af700();
      FUN_00429a00(s______Adding_Events_for__s_DONE___0083d120);
    }
  }
  local_744 = &PTR_LAB_007e6af8;
  ppuVar5 = ppuStack_740;
  while (ppuVar5 != (undefined **)0x0) {
    ppuVar5 = (undefined **)ppuVar5[2];
    FUN_00796cd8();
  }
  ExceptionList = pvStack_14;
  return 3;
}


