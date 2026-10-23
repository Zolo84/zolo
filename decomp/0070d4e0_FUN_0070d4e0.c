// FUN_0070d4e0 @ 70d4e0 size=7304

/* WARNING: Removing unreachable block (ram,0x0070e3ca) */
/* WARNING: Removing unreachable block (ram,0x0070e3e0) */
/* WARNING: Removing unreachable block (ram,0x0070e3e3) */
/* WARNING: Removing unreachable block (ram,0x0070e3e9) */
/* WARNING: Removing unreachable block (ram,0x0070e4d3) */
/* WARNING: Removing unreachable block (ram,0x0070e4e9) */
/* WARNING: Removing unreachable block (ram,0x0070e4ec) */
/* WARNING: Removing unreachable block (ram,0x0070e4f2) */
/* WARNING: Removing unreachable block (ram,0x0070e0c9) */
/* WARNING: Removing unreachable block (ram,0x0070e0df) */
/* WARNING: Removing unreachable block (ram,0x0070e0e2) */
/* WARNING: Removing unreachable block (ram,0x0070e0e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0070d4e0(int param_1,int param_2)

{
  uint *puVar1;
  float *pfVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  uint *puVar22;
  int *piVar23;
  uint *puVar24;
  int *piVar25;
  bool bVar26;
  void *local_158;
  int local_14c;
  uint *local_144;
  uint *local_140;
  int local_13c;
  uint *local_11c;
  uint *local_118;
  int local_114;
  uint *puStack_108;
  int iStack_100;
  uint *local_f4;
  uint *local_f0;
  int local_ec;
  int *piStack_e0;
  int *piStack_dc;
  int iStack_d8;
  int *piStack_cc;
  int *piStack_c8;
  int iStack_c4;
  int *piStack_b8;
  int *piStack_b4;
  int iStack_b0;
  int *piStack_a4;
  int *piStack_a0;
  int iStack_9c;
  int *piStack_90;
  int *piStack_8c;
  int iStack_88;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dbca7;
  piVar25 = *(int **)(param_2 + 4);
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  do {
    if (piVar25 == (int *)0x0) {
LAB_0070f11a:
      iVar21 = *(int *)(param_1 + 0x16);
      while (iVar21 != 0) {
        iVar21 = *(int *)(iVar21 + 8);
        FUN_00796cd8();
        FUN_00796cd8();
      }
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      ExceptionList = pvStack_c;
      return;
    }
    piVar4 = (int *)piVar25[2];
    iVar21 = *piVar25;
    puVar1 = (uint *)(iVar21 + 0x20);
    *(undefined4 *)(iVar21 + 8) = *(undefined4 *)(iVar21 + 0x1c);
    pfVar2 = (float *)(iVar21 + 8);
    puVar24 = (uint *)(iVar21 + 0x24);
    puVar3 = (uint *)(iVar21 + 0xc);
    puVar22 = (uint *)(iVar21 + 0x14);
    *puVar3 = *(uint *)(iVar21 + 0x20);
    *puVar22 = *puVar24;
    if (*(uint *)(iVar21 + 0x20) == 0xfffffffe) {
      uVar8 = FUN_0044e1b0();
      *puVar3 = uVar8;
    }
    uVar8 = *puVar1;
    if (uVar8 == 0xfffffffd) {
      *puVar3 = DAT_00870284;
    }
    if ((uVar8 == 0xffffffff) || (uVar8 == 0xfffffffc)) {
      local_11c = (uint *)0x0;
      local_118 = (uint *)0x0;
      local_114 = 0;
      local_4 = 0;
      piVar25 = *(int **)(*(int *)(param_1 + 0x24) + 0xe892);
      if (piVar25 == (int *)0x0) {
LAB_0070d7af:
        *puVar3 = *puVar1;
      }
      else {
        do {
          piVar23 = (int *)piVar25[2];
          iVar10 = DAT_00ab27b4 + *piVar25 * 0x4b2;
          if (*(int *)(iVar10 + 0x3d8) == *(int *)(param_1 + 0x24)) {
            iVar12 = *(int *)(iVar21 + 4);
            if (iVar12 < 0x57) {
              if (iVar12 == 0x56) {
                uVar15 = *(undefined4 *)(iVar10 + 0x12);
                local_158 = operator_new(0xe);
                local_4 = CONCAT31(local_4._1_3_,3);
LAB_0070d6de:
                if (local_158 == (void *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                else {
                  puVar9 = (uint *)FUN_0049a7a0(uVar15);
                }
                local_4 = local_4 & 0xffffff00;
                if (local_114 == 0) {
LAB_0070d770:
                  local_114 = local_114 + 1;
                  local_11c = puVar9;
                  local_118 = puVar9;
                }
                else {
                  local_118[2] = (uint)puVar9;
                  local_118 = puVar9;
                  local_114 = local_114 + 1;
                }
              }
              else if (iVar12 == 0xe) {
                if (_DAT_007e3374 < (float)*(int *)(iVar10 + 0x1f2) + *pfVar2) {
                  uVar15 = *(undefined4 *)(iVar10 + 0x12);
                  local_158 = operator_new(0xe);
                  local_4 = CONCAT31(local_4._1_3_,2);
                  goto LAB_0070d6de;
                }
              }
              else if ((iVar12 == 0x1f) && (*(int *)(iVar10 + 0x3d8) == *(int *)(param_1 + 0x24))) {
                uVar15 = *(undefined4 *)(iVar10 + 0x12);
                local_158 = operator_new(0xe);
                local_4 = CONCAT31(local_4._1_3_,1);
                goto LAB_0070d6de;
              }
            }
            else if (iVar12 == 0x111) {
              if (*puVar1 == 0xffffffff) {
                uVar15 = *(undefined4 *)(iVar10 + 0x12);
                local_158 = operator_new(0xe);
                local_4 = CONCAT31(local_4._1_3_,4);
                goto LAB_0070d6de;
              }
              if ((*puVar1 == 0xfffffffc) && (*(int *)(iVar10 + 0x1ea) != 0)) {
                uVar15 = *(undefined4 *)(iVar10 + 0x12);
                pvVar11 = operator_new(0xe);
                local_4._0_1_ = 5;
                if (pvVar11 == (void *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                else {
                  puVar9 = (uint *)FUN_0049a7a0(uVar15);
                }
                local_4 = (uint)local_4._1_3_ << 8;
                if (local_114 == 0) goto LAB_0070d770;
                local_118[2] = (uint)puVar9;
                local_118 = puVar9;
                local_114 = local_114 + 1;
              }
            }
          }
          piVar25 = piVar23;
        } while (piVar23 != (int *)0x0);
        if (local_114 == 0) goto LAB_0070d7af;
        iVar10 = _rand();
        for (iVar10 = iVar10 % local_114; iVar10 != 0; iVar10 = iVar10 + -1) {
          local_11c = (uint *)local_11c[2];
        }
        DAT_00870284 = *local_11c;
        *puVar3 = DAT_00870284;
      }
      local_4 = 0xffffffff;
      FUN_004174b0();
    }
    piVar25 = (int *)(iVar21 + 4);
    if ((*(int *)(iVar21 + 4) == 0xda) && ((int)*puVar24 < 0)) {
      local_f4 = (uint *)0x0;
      local_f0 = (uint *)0x0;
      local_ec = 0;
      local_4 = 6;
      piVar23 = *(int **)(*(int *)(param_1 + 0x24) + 0xe892);
      if (piVar23 == (int *)0x0) {
LAB_0070d9ef:
        *puVar22 = *puVar24;
      }
      else {
        do {
          piVar18 = (int *)piVar23[2];
          iVar10 = DAT_00ab27b4 + *piVar23 * 0x4b2;
          if (*(int *)(DAT_00ab27b4 + 0x3d8 + *piVar23 * 0x4b2) == *(int *)(param_1 + 0x24)) {
            if ((*pfVar2 <= _DAT_007e3380) || (cVar7 = FUN_0049f030(), cVar7 == '\0')) {
              if ((*pfVar2 < _DAT_007e3380) &&
                 (*(int *)(*(int *)(iVar10 + 0x1c6 + *puVar3 * 4) + 0x18) != 0)) {
                uVar15 = *(undefined4 *)(iVar10 + 0x12);
                pvVar11 = operator_new(0xe);
                local_4._0_1_ = 9;
                if (pvVar11 == (void *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                else {
                  puVar9 = (uint *)FUN_0049a7a0(uVar15);
                }
                local_4 = CONCAT31(local_4._1_3_,6);
                if (local_ec == 0) goto LAB_0070d9b0;
                local_f0[2] = (uint)puVar9;
                local_f0 = puVar9;
                local_ec = local_ec + 1;
              }
            }
            else {
              if (*puVar24 == 0xfffffffc) {
                cVar7 = FUN_004e8ab0();
                if ((cVar7 == '\0') ||
                   (*(int *)(*(int *)(iVar10 + 0x1c6 + *puVar3 * 4) + 0x18) == 0))
                goto LAB_0070d9b4;
                uVar15 = *(undefined4 *)(iVar10 + 0x12);
                pvVar11 = operator_new(0xe);
                local_4 = CONCAT31(local_4._1_3_,7);
              }
              else {
                uVar15 = *(undefined4 *)(iVar10 + 0x12);
                pvVar11 = operator_new(0xe);
                local_4 = CONCAT31(local_4._1_3_,8);
              }
              if (pvVar11 == (void *)0x0) {
                puVar9 = (uint *)0x0;
              }
              else {
                puVar9 = (uint *)FUN_0049a7a0(uVar15);
              }
              local_4 = CONCAT31(local_4._1_3_,6);
              if (local_ec == 0) {
LAB_0070d9b0:
                local_ec = local_ec + 1;
                local_f4 = puVar9;
                local_f0 = puVar9;
              }
              else {
                local_f0[2] = (uint)puVar9;
                local_f0 = puVar9;
                local_ec = local_ec + 1;
              }
            }
          }
LAB_0070d9b4:
          piVar23 = piVar18;
        } while (piVar18 != (int *)0x0);
        if (local_ec == 0) goto LAB_0070d9ef;
        iVar10 = _rand();
        for (iVar10 = iVar10 % local_ec; iVar10 != 0; iVar10 = iVar10 + -1) {
          local_f4 = (uint *)local_f4[2];
        }
        DAT_00870284 = *local_f4;
        *puVar22 = DAT_00870284;
      }
      local_4 = 0xffffffff;
      FUN_004174b0();
    }
    if (((*piVar25 == 0xde) || (*piVar25 == 0xdd)) && (*puVar3 == 0)) {
      iVar10 = __ftol();
      iVar10 = (&DAT_0089cad8)[iVar10];
      if (iVar10 != 0) {
        piVar23 = *(int **)(iVar10 + 0x4508);
        while (piVar23 != (int *)0x0) {
          piVar18 = (int *)piVar23[2];
          piVar16 = *(int **)(*piVar23 + 0x26);
          while (piVar23 = piVar18, piVar16 != (int *)0x0) {
            piVar23 = (int *)piVar16[2];
            piVar17 = (int *)*piVar16;
            (**(code **)(*piVar17 + 0xc))();
            iVar12 = FUN_007a8730();
            piVar16 = piVar23;
            if (iVar12 == 0) {
              *puVar3 = (uint)*(ushort *)(piVar17 + 3);
              *pfVar2 = (float)*(uint *)((int)piVar17 + 0xe);
              goto LAB_0070dace;
            }
          }
        }
LAB_0070dace:
        piVar23 = *(int **)(iVar10 + 0x451c);
        do {
          if (piVar23 == (int *)0x0) goto LAB_0070db33;
          piVar18 = (int *)piVar23[2];
          piVar16 = (int *)*piVar23;
          (**(code **)(*piVar16 + 0xc))();
          iVar10 = FUN_007a8730();
          piVar23 = piVar18;
        } while (iVar10 != 0);
        *puVar3 = (uint)*(ushort *)(piVar16 + 3);
        *pfVar2 = (float)*(uint *)((int)piVar16 + 0xe);
      }
    }
LAB_0070db33:
    if (*puVar3 == 0xffffffff) {
      local_144 = (uint *)0x0;
      local_140 = (uint *)0x0;
      local_13c = 0;
      local_4 = 10;
      piVar23 = &DAT_0089cad8;
      do {
        iVar10 = *piVar23;
        if (((iVar10 != 0) && (iVar10 != *(int *)(param_1 + 0x24))) &&
           (cVar7 = FUN_004a0780(), cVar7 != '\0')) {
          switch(*piVar25) {
          case 3:
            iVar10 = *(int *)(iVar10 + 6);
            if ((*(char *)(*(int *)(param_1 + 0x24) + 0xe8d6 + iVar10) != '\0') ||
               (*(float *)(*(int *)(param_1 + 0x24) + 0xef8e + iVar10 * 4) < _DAT_007e4074)) {
              local_158 = operator_new(0xe);
              local_4 = CONCAT31(local_4._1_3_,0xf);
LAB_0070de71:
              if (local_158 == (void *)0x0) {
                puVar9 = (uint *)0x0;
              }
              else {
                puVar9 = (uint *)FUN_00473a90(iVar10);
              }
              local_4 = CONCAT31(local_4._1_3_,10);
              if (local_13c == 0) {
LAB_0070deff:
                local_13c = local_13c + 1;
                local_144 = puVar9;
                local_140 = puVar9;
              }
              else {
                local_140[2] = (uint)puVar9;
                local_140 = puVar9;
                local_13c = local_13c + 1;
              }
            }
            break;
          case 6:
            cVar7 = FUN_00586640();
            if ((cVar7 == '\0') && (cVar7 = FUN_0044b280(), cVar7 == '\0')) {
              iVar10 = *(int *)(iVar10 + 6);
              local_158 = operator_new(0xe);
              local_4 = CONCAT31(local_4._1_3_,0xc);
              goto LAB_0070de71;
            }
            break;
          case 0xb:
          case 0xc:
            iVar10 = *(int *)(iVar10 + 6);
            if ((*(char *)(*(int *)(param_1 + 0x24) + 0xe8d6 + iVar10) != '\0') ||
               (*(float *)(*(int *)(param_1 + 0x24) + 0xef8e + iVar10 * 4) < _DAT_007e4074)) {
              local_158 = operator_new(0xe);
              local_4 = CONCAT31(local_4._1_3_,0xd);
              goto LAB_0070de71;
            }
            break;
          case 0x14:
            iVar10 = *(int *)(iVar10 + 6);
            if ((*(char *)(*(int *)(param_1 + 0x24) + 0xe8d6 + iVar10) != '\0') ||
               (*(float *)(*(int *)(param_1 + 0x24) + 0xef8e + iVar10 * 4) < _DAT_007e4074)) {
              local_158 = operator_new(0xe);
              local_4 = CONCAT31(local_4._1_3_,0xe);
              goto LAB_0070de71;
            }
            break;
          case 0x42:
            cVar7 = FUN_0044beb0();
            iVar12 = *(int *)(param_1 + 0x24);
            iVar19 = *(int *)(iVar10 + 6);
            puVar9 = local_144;
            puVar6 = local_140;
            if (cVar7 == '\0') {
              if (((*(char *)(iVar12 + 0xe8d6 + iVar19) != '\0') ||
                  (*(float *)(iVar12 + 0xef8e + iVar19 * 4) < _DAT_007e4074)) &&
                 (piVar18 = (int *)FUN_0044dca0(), piVar18 != (int *)0x0)) {
                iVar12 = (**(code **)(*piVar18 + 4))();
                if (0 < iVar12) {
                  uVar15 = *(undefined4 *)(iVar10 + 6);
                  pvVar11 = operator_new(0xe);
                  local_4 = CONCAT31(local_4._1_3_,0x11);
                  goto LAB_0070dd76;
                }
                goto LAB_0070ddb9;
              }
            }
            else if ((*(char *)(*(int *)(iVar12 + 0x12da) + iVar19 * 0x2c + 0x2c) != '\0') &&
                    (piVar18 = (int *)FUN_0044dca0(), piVar18 != (int *)0x0)) {
              iVar12 = (**(code **)(*piVar18 + 4))();
              if (0 < iVar12) {
                uVar15 = *(undefined4 *)(iVar10 + 6);
                pvVar11 = operator_new(0xe);
                local_4 = CONCAT31(local_4._1_3_,0x10);
LAB_0070dd76:
                if (pvVar11 == (void *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                else {
                  puVar9 = (uint *)FUN_00473a90(uVar15);
                }
                local_4 = CONCAT31(local_4._1_3_,10);
                iVar10 = local_13c + 1;
                bVar26 = local_13c != 0;
                puVar6 = puVar9;
                local_13c = iVar10;
                if (bVar26) {
                  local_140[2] = (uint)puVar9;
                  (**(code **)*piVar18)();
                  local_140 = puVar9;
                  break;
                }
              }
LAB_0070ddb9:
              local_140 = puVar6;
              local_144 = puVar9;
              (**(code **)*piVar18)();
            }
            break;
          case 0x45:
            cVar7 = FUN_0044beb0();
            iVar10 = *(int *)(iVar10 + 6);
            if (cVar7 == '\0') {
              if (*(char *)(*(int *)(param_1 + 0x24) + 0xe8d6 + iVar10) != '\0') {
                pvVar11 = operator_new(0xe);
                local_4._0_1_ = 0x13;
                if (pvVar11 == (void *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                else {
                  puVar9 = (uint *)FUN_00473a90(iVar10);
                }
                local_4 = CONCAT31(local_4._1_3_,10);
                if (local_13c == 0) goto LAB_0070deff;
                local_140[2] = (uint)puVar9;
                local_140 = puVar9;
                local_13c = local_13c + 1;
              }
            }
            else if (*(char *)(*(int *)(*(int *)(param_1 + 0x24) + 0x12da) + iVar10 * 0x2c + 0x2c)
                     != '\0') {
              local_158 = operator_new(0xe);
              local_4 = CONCAT31(local_4._1_3_,0x12);
              goto LAB_0070de71;
            }
            break;
          case 99:
            cVar7 = FUN_0044d840();
            if (cVar7 != '\0') {
              iVar10 = *(int *)(iVar10 + 6);
              local_158 = operator_new(0xe);
              local_4 = CONCAT31(local_4._1_3_,0xb);
              goto LAB_0070de71;
            }
          }
        }
        piVar23 = piVar23 + 1;
      } while ((int)piVar23 < 0x89d038);
      if (local_13c != 0) {
        iVar10 = _rand();
        for (iVar10 = iVar10 % local_13c; iVar10 != 0; iVar10 = iVar10 + -1) {
          local_144 = (uint *)local_144[2];
        }
        DAT_00870284 = *local_144;
        *puVar3 = DAT_00870284;
      }
      local_4 = 0xffffffff;
      FUN_004309c0();
    }
    iVar10 = *piVar25;
    if ((iVar10 == 0x38) && (*puVar3 == 0)) {
      *puVar3 = *(uint *)(*(int *)(param_1 + 0x24) + 6);
    }
    uVar8 = *puVar1;
    if (((uVar8 == 0xffffffff) && (0xf6 < iVar10)) && (iVar10 < 0xf9)) {
      *puVar3 = *(uint *)(*(int *)(param_1 + 0x24) + 6);
    }
    if ((((iVar10 == 0x20) || (iVar10 == 0x3c)) || ((iVar10 == 0x3d || (iVar10 == 0x48)))) &&
       (*puVar3 == 0xffffffff)) {
      local_4 = 0x14;
      piVar23 = *(int **)(*(int *)(param_1 + 0x24) + 0x117f8);
      while (piVar23 != (int *)0x0) {
        piVar18 = (int *)piVar23[2];
        iVar10 = *piVar23;
        piVar23 = piVar18;
        if ((((iVar10 != 0) && (*(char *)(iVar10 + 0x2c) == '\0')) &&
            (*(char *)(iVar10 + 0x2d) == '\0')) &&
           (*(int *)(iVar10 + 0x52) <= (int)*(short *)(DAT_00893530 + 0x18))) {
          FUN_004c0970();
          FUN_004739f0();
        }
      }
      piVar23 = *(int **)(*(int *)(param_1 + 0x24) + 0x4508);
      while (piVar23 != (int *)0x0) {
        piVar18 = (int *)piVar23[2];
        iVar10 = *piVar23;
        piVar23 = piVar18;
        if ((*(int *)(iVar10 + 0x14a) != 0) && (iVar10 = FUN_0051c480(), iVar10 != 0)) {
          FUN_0051c480();
          FUN_004c0970();
          FUN_004739f0();
        }
      }
      local_4 = 0xffffffff;
      FUN_0045a920();
    }
    else if ((iVar10 == 0x20) && (uVar8 == 0xfffffffe)) {
      local_14c = 0;
      piVar23 = *(int **)(*(int *)(param_1 + 0x24) + 0x117f8);
joined_r0x0070e157:
      if (piVar23 != (int *)0x0) {
        piVar18 = (int *)piVar23[2];
        iVar10 = *piVar25;
        iVar12 = *piVar23;
        iVar19 = *(int *)(param_1 + 0x16);
        iVar14 = *(int *)(iVar12 + 0x12);
        do {
          piVar23 = piVar18;
          if (iVar19 == 0) {
            if ((local_14c == 0) || (*(int *)(iVar12 + 0x3a) < *(int *)(local_14c + 0x3a))) {
              local_14c = iVar12;
            }
            break;
          }
          puVar13 = (undefined4 *)FUN_0072a620();
        } while ((**(int **)*puVar13 != iVar14) || ((*(int **)*puVar13)[1] != iVar10));
        goto joined_r0x0070e157;
      }
      piVar23 = *(int **)(*(int *)(param_1 + 0x24) + 0x4508);
joined_r0x0070e1cf:
      if (piVar23 != (int *)0x0) {
        piVar18 = (int *)piVar23[2];
        iVar10 = *piVar23;
        piVar23 = piVar18;
        if (*(int *)(iVar10 + 0x14a) != 0) {
          iVar14 = FUN_0051c480();
          iVar10 = *piVar25;
          iVar12 = *(int *)(iVar14 + 0x12);
          iVar19 = *(int *)(param_1 + 0x16);
          do {
            if (iVar19 == 0) {
              if ((local_14c == 0) || (*(int *)(iVar14 + 0x3a) < *(int *)(local_14c + 0x3a))) {
                local_14c = iVar14;
              }
              break;
            }
            puVar13 = (undefined4 *)FUN_0072a620();
          } while ((**(int **)*puVar13 != iVar12) || ((*(int **)*puVar13)[1] != iVar10));
        }
        goto joined_r0x0070e1cf;
      }
      if (local_14c != 0) {
        *puVar3 = *(uint *)(local_14c + 0x12);
        puVar13 = operator_new(8);
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          iVar10 = *piVar25;
          *puVar13 = *(undefined4 *)(local_14c + 0x12);
          puVar13[1] = iVar10;
        }
        iVar10 = *(int *)(param_1 + 0x1a);
        pvVar11 = operator_new(0xe);
        local_4 = 0x15;
        if (pvVar11 == (void *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = FUN_0072bb00(puVar13);
        }
        iVar12 = *(int *)(param_1 + 0x1e);
        local_4 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x1a) = uVar15;
        *(int *)(param_1 + 0x1e) = iVar12 + 1;
        if (iVar12 == 0) {
          *(undefined4 *)(param_1 + 0x16) = uVar15;
          DAT_00870284 = *puVar3;
        }
        else {
          *(undefined4 *)(iVar10 + 8) = uVar15;
          DAT_00870284 = *puVar3;
        }
      }
    }
    else if (((iVar10 == 0x21) || ((iVar10 == 0x3e || (iVar10 == 0x49)))) && (*puVar3 == 0xffffffff)
            ) {
      local_4 = 0x16;
      iVar10 = 2;
      do {
        iVar12 = FUN_0044c640();
        if (iVar12 != 0) {
          FUN_0044c640();
          FUN_00447250();
          FUN_004739f0();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 10);
      iVar10 = *(int *)(*(int *)(param_1 + 0x24) + 0x2a0);
      while (iVar10 != 0) {
        iVar10 = *(int *)(iVar10 + 8);
        FUN_004739f0();
      }
      local_4 = 0xffffffff;
      FUN_0045a920();
    }
    else if ((iVar10 == 0x22) && (*puVar3 == 0xffffffff)) {
      local_4 = 0x17;
      iVar10 = *(int *)(*(int *)(param_1 + 0x24) + 0x2a0);
      while (iVar10 != 0) {
        iVar10 = *(int *)(iVar10 + 8);
        piVar23 = (int *)FUN_00465ae0();
        cVar7 = (**(code **)(*piVar23 + 0x24))();
        if (cVar7 != '\0') {
          FUN_004739f0();
        }
      }
      local_4 = 0xffffffff;
      FUN_0045a920();
    }
    else if (((iVar10 == 0x68) || (iVar10 == 0x67)) && ((int)uVar8 < 0)) {
      if (uVar8 == 0xffffffff) {
        piStack_90 = (int *)0x0;
        piStack_8c = (int *)0x0;
        iStack_88 = 0;
        local_4 = 0x18;
        puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x4508);
        if (puVar13 != (undefined4 *)0x0) {
          do {
            puVar20 = (undefined4 *)puVar13[2];
            piVar23 = (int *)*puVar13;
            cVar7 = (**(code **)(*piVar23 + 0x28))();
            piVar18 = piStack_90;
            piVar16 = piStack_8c;
            if (cVar7 != '\0') {
              piVar16 = operator_new(0xe);
              if (piVar16 == (int *)0x0) {
                piVar16 = (int *)0x0;
              }
              else {
                *piVar16 = (int)piVar23;
                piVar16[1] = (int)piStack_8c;
                piVar16[2] = 0;
                *(undefined1 *)(piVar16 + 3) = 0;
              }
              iVar10 = iStack_88 + 1;
              bVar26 = iStack_88 != 0;
              piVar18 = piVar16;
              iStack_88 = iVar10;
              if (bVar26) {
                piStack_8c[2] = (int)piVar16;
                piVar18 = piStack_90;
              }
            }
            piStack_8c = piVar16;
            piStack_90 = piVar18;
            puVar13 = puVar20;
          } while (puVar20 != (undefined4 *)0x0);
          if (0 < iStack_88) {
            iVar10 = _rand();
            for (iVar10 = iVar10 % iStack_88; iVar10 != 0; iVar10 = iVar10 + -1) {
              piStack_90 = (int *)piStack_90[2];
            }
            iVar10 = *piStack_90;
LAB_0070e832:
            local_4 = 0xffffffff;
            FUN_00527230();
            if (iVar10 != 0) {
              *puVar3 = (uint)*(ushort *)(iVar10 + 0x18);
              *pfVar2 = (float)*(uint *)(iVar10 + 0x1a);
            }
            goto LAB_0070ec98;
          }
        }
        local_4 = 0xffffffff;
        FUN_00527230();
        goto LAB_0070f11a;
      }
      if (uVar8 == 0xfffffffe) {
        piStack_a4 = (int *)0x0;
        piStack_a0 = (int *)0x0;
        iStack_9c = 0;
        local_4 = 0x19;
        puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x4508);
        if (puVar13 != (undefined4 *)0x0) {
          do {
            puVar20 = (undefined4 *)puVar13[2];
            piVar23 = (int *)*puVar13;
            cVar7 = (**(code **)(*piVar23 + 0x2c))();
            piVar18 = piStack_a4;
            piVar16 = piStack_a0;
            if (cVar7 != '\0') {
              piVar16 = operator_new(0xe);
              if (piVar16 == (int *)0x0) {
                piVar16 = (int *)0x0;
              }
              else {
                *piVar16 = (int)piVar23;
                piVar16[1] = (int)piStack_a0;
                piVar16[2] = 0;
                *(undefined1 *)(piVar16 + 3) = 0;
              }
              iVar10 = iStack_9c + 1;
              bVar26 = iStack_9c != 0;
              piVar18 = piVar16;
              iStack_9c = iVar10;
              if (bVar26) {
                piStack_a0[2] = (int)piVar16;
                piVar18 = piStack_a4;
              }
            }
            piStack_a0 = piVar16;
            piStack_a4 = piVar18;
            puVar13 = puVar20;
          } while (puVar20 != (undefined4 *)0x0);
          if (0 < iStack_9c) {
            iVar10 = _rand();
            for (iVar10 = iVar10 % iStack_9c; iVar10 != 0; iVar10 = iVar10 + -1) {
              piStack_a4 = (int *)piStack_a4[2];
            }
            iVar10 = *piStack_a4;
            goto LAB_0070e832;
          }
        }
        local_4 = 0xffffffff;
        FUN_00527230();
        goto LAB_0070f11a;
      }
      if (uVar8 == 0xfffffffd) {
        piStack_b8 = (int *)0x0;
        piStack_b4 = (int *)0x0;
        iStack_b0 = 0;
        local_4 = 0x1a;
        puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x4508);
        if (puVar13 != (undefined4 *)0x0) {
          do {
            puVar20 = (undefined4 *)puVar13[2];
            piVar23 = (int *)*puVar13;
            cVar7 = (**(code **)(*piVar23 + 0x30))();
            piVar18 = piStack_b8;
            piVar16 = piStack_b4;
            if (cVar7 != '\0') {
              piVar16 = operator_new(0xe);
              if (piVar16 == (int *)0x0) {
                piVar16 = (int *)0x0;
              }
              else {
                *piVar16 = (int)piVar23;
                piVar16[1] = (int)piStack_b4;
                piVar16[2] = 0;
                *(undefined1 *)(piVar16 + 3) = 0;
              }
              iVar10 = iStack_b0 + 1;
              bVar26 = iStack_b0 != 0;
              piVar18 = piVar16;
              iStack_b0 = iVar10;
              if (bVar26) {
                piStack_b4[2] = (int)piVar16;
                piVar18 = piStack_b8;
              }
            }
            piStack_b4 = piVar16;
            piStack_b8 = piVar18;
            puVar13 = puVar20;
          } while (puVar20 != (undefined4 *)0x0);
          if (0 < iStack_b0) {
            iVar10 = _rand();
            for (iVar10 = iVar10 % iStack_b0; iVar10 != 0; iVar10 = iVar10 + -1) {
              piStack_b8 = (int *)piStack_b8[2];
            }
            iVar10 = *piStack_b8;
            goto LAB_0070e832;
          }
        }
        local_4 = 0xffffffff;
        FUN_00527230();
        goto LAB_0070f11a;
      }
    }
    else {
      if ((((iVar10 == 0xde) || (iVar10 == 0xdd)) || (iVar10 == 0xe0)) && (uVar8 == 0xffffffff)) {
        piStack_cc = (int *)0x0;
        piStack_c8 = (int *)0x0;
        iStack_c4 = 0;
        local_4 = 0x1b;
        piVar23 = *(int **)(*(int *)(param_1 + 0x24) + 0x4508);
        if (piVar23 != (int *)0x0) {
          do {
            piVar18 = (int *)piVar23[2];
            iVar10 = *piVar23;
            iVar12 = FUN_00522770();
            if (iVar12 == *(int *)(param_1 + 0x24)) {
              piVar23 = *(int **)(iVar10 + 0x26);
              piVar16 = piStack_cc;
              piVar17 = piStack_c8;
              while (piStack_c8 = piVar17, piStack_cc = piVar16, piVar23 != (int *)0x0) {
                piVar16 = (int *)piVar23[2];
                iVar10 = *piVar23;
                piVar17 = operator_new(0xe);
                if (piVar17 == (int *)0x0) {
                  piVar17 = (int *)0x0;
                }
                else {
                  *piVar17 = iVar10;
                  piVar17[1] = (int)piStack_c8;
                  piVar17[2] = 0;
                  *(undefined1 *)(piVar17 + 3) = 0;
                }
                iVar10 = iStack_c4 + 1;
                bVar26 = iStack_c4 != 0;
                piVar23 = piVar16;
                piVar16 = piVar17;
                iStack_c4 = iVar10;
                if (bVar26) {
                  piStack_c8[2] = (int)piVar17;
                  piVar16 = piStack_cc;
                }
              }
            }
            piVar23 = piVar18;
          } while (piVar18 != (int *)0x0);
          if (0 < iStack_c4) {
            iVar10 = _rand();
            for (iVar10 = iVar10 % iStack_c4; iVar10 != 0; iVar10 = iVar10 + -1) {
              piStack_cc = (int *)piStack_cc[2];
            }
            iVar10 = *piStack_cc;
            if (iVar10 != 0) {
              *puVar3 = (uint)*(ushort *)(iVar10 + 0xc);
              *pfVar2 = (float)*(uint *)(iVar10 + 0xe);
            }
            local_4 = 0xffffffff;
            FUN_0045a530();
            goto LAB_0070ec98;
          }
        }
        local_4 = 0xffffffff;
        FUN_0045a530();
        goto LAB_0070f11a;
      }
      if ((iVar10 == 0x43) && ((int)uVar8 < 0)) {
        piStack_e0 = (int *)0x0;
        piStack_dc = (int *)0x0;
        iStack_d8 = 0;
        local_4 = 0x1c;
        local_14c = 0;
LAB_0070ea2d:
        if ((iStack_d8 < 9) && (local_14c < 1000)) {
          iVar10 = _rand();
          iVar10 = iVar10 % 9;
          while (piVar23 = piStack_e0, piStack_e0 != (int *)0x0) {
            while (cVar7 = (*(code *)PTR_FUN_007e3798)(), cVar7 == '\0') {
              piVar23 = (int *)piVar23[2];
              if (piVar23 == (int *)0x0) goto LAB_0070ea95;
            }
            if (piVar23 == (int *)0x0) break;
            if (iVar10 == 8) {
              iVar10 = 0;
            }
            else {
              iVar10 = iVar10 + 1;
            }
          }
LAB_0070ea95:
          piVar23 = (int *)(&DAT_00d4c3fe)[iVar10 * 0x15];
          do {
            if (piVar23 == (int *)0x0) goto LAB_0070eb5c;
            piVar18 = (int *)piVar23[2];
            iVar12 = *piVar23;
            piVar16 = *(int **)(param_1 + 0x16);
            do {
              piVar23 = piVar18;
              if (piVar16 == (int *)0x0) {
                FUN_0044df10();
                piVar18 = (int *)FUN_004582d0();
                cVar7 = (**(code **)(*piVar18 + 0x24))();
                if ((cVar7 == '\0') &&
                   (((iVar19 = FUN_0075a2b0(), iVar19 == 0 && (*puVar1 == 0xffffffff)) ||
                    ((iVar19 = FUN_0075a2b0(), iVar19 == 6 && (*puVar1 == 0xfffffffe)))))) {
                  if (iVar12 == 0) goto LAB_0070eb5c;
                  *puVar3 = *(uint *)(iVar12 + 0xe);
                  puVar13 = operator_new(8);
                  if (puVar13 == (undefined4 *)0x0) {
                    puVar13 = (undefined4 *)0x0;
                  }
                  else {
                    iVar10 = *piVar25;
                    *puVar13 = *(undefined4 *)(iVar12 + 0xe);
                    puVar13[1] = iVar10;
                  }
                  piVar23 = (int *)(param_1 + 0x1a);
                  iVar10 = *piVar23;
                  puVar20 = operator_new(0xe);
                  if (puVar20 == (undefined4 *)0x0) {
                    puVar20 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar20 = puVar13;
                    puVar20[1] = iVar10;
                    puVar20[2] = 0;
                    *(undefined1 *)(puVar20 + 3) = 0;
                  }
                  *piVar23 = (int)puVar20;
                  iVar12 = *(int *)(param_1 + 0x1e);
                  *(int *)(param_1 + 0x1e) = iVar12 + 1;
                  if (iVar12 == 0) {
                    *(int *)(param_1 + 0x16) = *piVar23;
                  }
                  else {
                    *(int *)(iVar10 + 8) = *piVar23;
                  }
                  goto LAB_0070ec50;
                }
                break;
              }
              piVar17 = piVar16 + 2;
              piVar5 = (int *)*piVar16;
              piVar16 = (int *)*piVar17;
            } while ((*piVar5 != *(int *)(iVar12 + 0xe)) || (piVar5[1] != *piVar25));
          } while( true );
        }
        *puVar3 = 0xffffffff;
LAB_0070ec50:
        local_4 = 0xffffffff;
        while (piStack_e0 != (int *)0x0) {
          piStack_e0 = (int *)piStack_e0[2];
          FUN_00796cd8();
        }
      }
    }
LAB_0070ec98:
    if ((*piVar25 == 0xdf) && (*puVar24 == 0)) {
      uVar8 = FUN_0044e1b0();
      *puVar22 = uVar8;
    }
    if (((*piVar25 == 0x42) && (*(float *)(iVar21 + 0x1c) < _DAT_007e3374)) &&
       (*puVar3 != 0xffffffff)) {
      if ((&DAT_0089cad8)[*puVar3] == 0) {
        *pfVar2 = -1.0;
      }
      else {
        piVar23 = (int *)FUN_0044dca0();
        iVar21 = (**(code **)(*piVar23 + 4))();
        if (iVar21 == 0) {
          if (piVar23 != (int *)0x0) {
            (**(code **)*piVar23)();
          }
          *pfVar2 = -1.0;
        }
        else {
          iVar10 = (**(code **)(*piVar23 + 4))();
          iVar21 = _rand();
          piVar18 = (int *)piVar23[1];
          for (iVar21 = iVar21 % iVar10; iVar21 != 0; iVar21 = iVar21 + -1) {
            piVar18 = (int *)piVar18[2];
          }
          iVar21 = *(int *)(*piVar18 + 0xe);
          if (piVar23 != (int *)0x0) {
            (**(code **)*piVar23)();
          }
          *pfVar2 = (float)iVar21;
        }
      }
    }
    iVar21 = *piVar25;
    if (iVar21 < 0x125) {
      if (iVar21 == 0x124) {
LAB_0070f06f:
        uVar8 = *puVar24;
        goto joined_r0x0070f092;
      }
      switch(iVar21) {
      case 0:
        uVar8 = *puVar1;
        if ((int)uVar8 < 0) {
          puVar24 = (uint *)0x0;
          puStack_108 = (uint *)0x0;
          iStack_100 = 0;
          local_4 = 0x1d;
          if (uVar8 == 0xfffffffd) {
            puVar22 = *(uint **)(*(int *)(param_1 + 0x24) + 0xe8a4);
            if (puVar22 != (uint *)0x0) {
              do {
                puVar9 = (uint *)puVar22[2];
                uVar8 = *puVar22;
                puVar22 = operator_new(0xe);
                if (puVar22 == (uint *)0x0) {
                  puVar22 = (uint *)0x0;
                }
                else {
                  *puVar22 = uVar8;
                  puVar22[1] = (uint)puVar24;
                  puVar22[2] = 0;
                  *(undefined1 *)(puVar22 + 3) = 0;
                }
                iVar21 = iStack_100 + 1;
                puVar6 = puVar22;
                if (iStack_100 != 0) {
                  puVar24[2] = (uint)puVar22;
                  puVar6 = puStack_108;
                }
                puStack_108 = puVar6;
                puVar24 = puVar22;
                puVar22 = puVar9;
                iStack_100 = iVar21;
              } while (puVar9 != (uint *)0x0);
              goto LAB_0070efe1;
            }
LAB_0070f017:
            *puVar3 = *puVar1;
          }
          else {
            if (uVar8 == 0xfffffffe) {
              piVar25 = *(int **)(*(int *)(param_1 + 0x24) + 0xe892);
              if (piVar25 != (int *)0x0) {
                do {
                  piVar23 = (int *)piVar25[2];
                  puVar22 = puVar24;
                  puVar9 = puStack_108;
                  if (*(int *)(DAT_00ab27b4 + 0x3d8 + *piVar25 * 0x4b2) == *(int *)(param_1 + 0x24))
                  {
                    uVar8 = *(uint *)(DAT_00ab27b4 + *piVar25 * 0x4b2 + 0x12);
                    puVar22 = operator_new(0xe);
                    if (puVar22 == (uint *)0x0) {
                      puVar22 = (uint *)0x0;
                    }
                    else {
                      *puVar22 = uVar8;
                      puVar22[1] = (uint)puVar24;
                      puVar22[2] = 0;
                      *(undefined1 *)(puVar22 + 3) = 0;
                    }
                    iVar21 = iStack_100 + 1;
                    bVar26 = iStack_100 != 0;
                    puVar9 = puVar22;
                    iStack_100 = iVar21;
                    if (bVar26) {
                      puVar24[2] = (uint)puVar22;
                      puVar9 = puStack_108;
                    }
                  }
                  puStack_108 = puVar9;
                  puVar24 = puVar22;
                  piVar25 = piVar23;
                } while (piVar23 != (int *)0x0);
                goto LAB_0070efe1;
              }
              goto LAB_0070f017;
            }
            if ((uVar8 != 0xffffffff) ||
               (piVar25 = *(int **)(*(int *)(param_1 + 0x24) + 0xe892), piVar25 == (int *)0x0))
            goto LAB_0070f017;
            do {
              piVar23 = (int *)piVar25[2];
              iVar21 = DAT_00ab27b4 + *piVar25 * 0x4b2;
              puVar22 = puVar24;
              puVar9 = puStack_108;
              if ((*(int *)(DAT_00ab27b4 + 0x3d8 + *piVar25 * 0x4b2) == *(int *)(param_1 + 0x24)) &&
                 (cVar7 = FUN_004e8ab0(), cVar7 == '\0')) {
                uVar8 = *(uint *)(iVar21 + 0x12);
                puVar22 = operator_new(0xe);
                if (puVar22 == (uint *)0x0) {
                  puVar22 = (uint *)0x0;
                }
                else {
                  *puVar22 = uVar8;
                  puVar22[1] = (uint)puVar24;
                  puVar22[2] = 0;
                  *(undefined1 *)(puVar22 + 3) = 0;
                }
                iVar21 = iStack_100 + 1;
                bVar26 = iStack_100 != 0;
                puVar9 = puVar22;
                iStack_100 = iVar21;
                if (bVar26) {
                  puVar24[2] = (uint)puVar22;
                  puVar9 = puStack_108;
                }
              }
              puStack_108 = puVar9;
              puVar24 = puVar22;
              piVar25 = piVar23;
            } while (piVar23 != (int *)0x0);
LAB_0070efe1:
            if (iStack_100 == 0) goto LAB_0070f017;
            iVar21 = _rand();
            puVar1 = puStack_108;
            for (iVar21 = iVar21 % iStack_100; iVar21 != 0; iVar21 = iVar21 + -1) {
              puVar1 = (uint *)puVar1[2];
            }
            DAT_00870284 = *puVar1;
            *puVar3 = DAT_00870284;
          }
          local_4 = 0xffffffff;
          while (puStack_108 != (uint *)0x0) {
            puStack_108 = (uint *)puStack_108[2];
            FUN_00796cd8();
          }
        }
        break;
      case 0x1b:
      case 0x1c:
      case 0x1d:
        if (*puVar1 == 0xfffffffd) {
          *puVar3 = *(uint *)(*(int *)(param_1 + 0x24) + 6);
        }
        break;
      case 0x1e:
        if (*puVar1 == 0xffffffff) {
          *puVar3 = *(uint *)(*(int *)(param_1 + 0x24) + 6);
        }
      }
    }
    else {
      if (iVar21 != 0x125) {
        if ((iVar21 != 0x126) && (iVar21 != 0x130)) goto switchD_0070edd1_caseD_1;
        goto LAB_0070f06f;
      }
      if (*puVar1 == 0xffffffff) {
        *puVar3 = *(uint *)(*(int *)(param_1 + 0x24) + 6);
      }
      uVar8 = *puVar24;
joined_r0x0070f092:
      if (uVar8 == 0xffffffff) {
        *puVar22 = *(uint *)(*(int *)(param_1 + 0x24) + 6);
      }
    }
switchD_0070edd1_caseD_1:
    piVar25 = piVar4;
  } while( true );
LAB_0070eb5c:
  piVar23 = operator_new(0xe);
  if (piVar23 == (int *)0x0) {
    piVar23 = (int *)0x0;
  }
  else {
    *piVar23 = iVar10;
    piVar23[1] = (int)piStack_dc;
    piVar23[2] = 0;
    *(undefined1 *)(piVar23 + 3) = 0;
  }
  if (iStack_d8 == 0) {
    local_14c = local_14c + 1;
    piStack_e0 = piVar23;
    piStack_dc = piVar23;
    iStack_d8 = iStack_d8 + 1;
  }
  else {
    piStack_dc[2] = (int)piVar23;
    local_14c = local_14c + 1;
    piStack_dc = piVar23;
    iStack_d8 = iStack_d8 + 1;
  }
  goto LAB_0070ea2d;
}


