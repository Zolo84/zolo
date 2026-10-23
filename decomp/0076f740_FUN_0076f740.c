// FUN_0076f740 @ 76f740 size=70336

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076f740(void)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int extraout_ECX;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  char *pcVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  int *piVar23;
  undefined2 *puVar24;
  char *pcVar25;
  float10 fVar26;
  int local_3218 [140];
  int local_2fe8 [140];
  int local_2db8 [204];
  int local_2a88 [222];
  int local_2710;
  undefined2 local_2608 [128];
  char local_2508 [256];
  char local_2408 [256];
  char local_2308 [8196];
  int local_304;
  _SYSTEMTIME local_2e4;
  _SYSTEMTIME local_2d0;
  _SYSTEMTIME local_2bc;
  int local_2a4;
  int local_294;
  int local_284;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined2 local_264;
  undefined4 local_262 [64];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  int local_154;
  char local_150 [256];
  undefined8 local_50;
  int *local_48;
  uint local_44;
  undefined8 local_40;
  char *local_38;
  char *local_34;
  char *local_30;
  undefined8 uVar27;
  ulonglong uVar28;
  int *piVar30;
  double dVar29;
  int *piVar31;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007e0ea2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007a69e0();
  iVar17 = 0;
  if (*(int *)(extraout_ECX + 4) == 0) {
    pvVar7 = operator_new(0x30);
    local_8 = 0;
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00417900();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 4) = uVar8;
  }
  *(undefined4 *)(extraout_ECX + 0x226) = 0;
  puVar9 = (undefined4 *)(extraout_ECX + 0x296);
  *(undefined4 *)(extraout_ECX + 0x222) = 0;
  *(undefined4 *)(extraout_ECX + 0x232) = 0;
  puVar16 = (undefined4 *)(extraout_ECX + 0x5be22);
  do {
    puVar22 = puVar9;
    for (iVar13 = 0x19; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar22 = 0;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 0;
    puVar16[-0x8c] = 0;
    *puVar16 = 0x8c;
    puVar16[0x8c] = 0x8c;
    puVar16[0x118] = 0x8c;
    puVar16[0x1a4] = 0;
    puVar16[0x230] = 0;
    puVar16[700] = 0;
    puVar16[0x34b] = 0xffffffff;
    puVar16[0x3d7] = 0xffffffff;
    puVar16[0x463] = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x5cb42) = 0;
    *(undefined4 *)(extraout_ECX + 0x5cb46) = 0;
    *(undefined4 *)(extraout_ECX + 0x5cb4a) = 0;
    puVar16[0x4ef] = 0;
    puVar16[0x607] = 0;
    *(undefined1 *)(extraout_ECX + 0x5d86e + iVar17) = 0;
    puVar16[0x6b6] = 0xffffffff;
    puVar16[0x742] = 0x8c;
    puVar16[0x7ce] = 0x8c;
    puVar16[0x85a] = 0x8c;
    puVar16[0x8e6] = 0x8c;
    puVar16[0x57b] = 0x80000000;
    puVar16[0x972] = 0x8c;
    iVar17 = iVar17 + 1;
    puVar9 = (undefined4 *)((int)puVar9 + 0x66);
    puVar16 = puVar16 + 1;
  } while (iVar17 < 0x8c);
  FUN_00429a00();
  pvVar7 = operator_new(0x714);
  local_8 = 1;
  if (pvVar7 == (void *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = FUN_00534930();
  }
  local_8 = 0xffffffff;
LAB_0076f8ca:
  do {
    iVar13 = FUN_00535490();
    if (iVar13 == 1) {
      iVar13 = FUN_004fdae0();
      if (iVar13 == 0x8c) {
        if (*(int *)(iVar17 + 4) == 0x236) {
          FUN_0078d6e0();
          goto LAB_0076f8ca;
        }
      }
      else if (*(int *)(extraout_ECX + 0x5bbf2 + iVar13 * 4) == 0) {
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00();
        }
        pvVar7 = operator_new(0x3a);
        local_8 = 2;
        if (pvVar7 == (void *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)FUN_00504630();
        }
        piVar10[1] = iVar13;
        local_8 = 0xffffffff;
        (**(code **)(*piVar10 + 4))();
        *(int **)(extraout_ECX + 0x5bbf2 + iVar13 * 4) = piVar10;
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00();
        }
        goto LAB_0076f8ca;
      }
      FUN_00429a00();
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      goto LAB_0076f8ca;
    }
    piVar10 = (int *)FUN_00534391();
  } while (*piVar10 != 0x531);
  FUN_00429a00();
  cVar4 = '\0';
  DAT_0087769c = (char *)0x8c;
  DAT_008776a0 = 0x8c;
  piVar10 = (int *)(extraout_ECX + 0x5bbf2);
  pcVar18 = (char *)0x0;
  do {
    if (*piVar10 == 0) {
      if (cVar4 == '\0') {
        cVar4 = '\x01';
        DAT_0087769c = pcVar18;
      }
    }
    else if (cVar4 != '\0') {
      cVar4 = (char)((uint)*(undefined4 *)
                            (*(int *)(extraout_ECX + 0x5bbee + (int)DAT_0087769c * 4) + 0x10) >>
                    0x18);
      FUN_00429a00();
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    pcVar18 = pcVar18 + 1;
    piVar10 = piVar10 + 1;
  } while ((int)pcVar18 < 0x8c);
  iVar17 = 0;
  if (0 < (int)DAT_0087769c) {
    piVar10 = (int *)(extraout_ECX + 0x5bbf2);
    do {
      piVar10[0x8c] = *(int *)(*piVar10 + 8);
      piVar10[0x118] = *(int *)(*piVar10 + 0xc);
      piVar10[0x57b] = *(int *)(*piVar10 + 0x24);
      piVar10[0x693] = *(int *)(*piVar10 + 0x2c);
      *(undefined1 *)(extraout_ECX + 0x5d86e + iVar17) = *(undefined1 *)(*piVar10 + 0x30);
      piVar10[0x3d7] = *(int *)(*piVar10 + 0x28);
      piVar10[0x463] = *(int *)(*piVar10 + 0x28);
      piVar10[0x4ef] = *(int *)(*piVar10 + 0x28);
      piVar10[0x742] = *(int *)(*piVar10 + 0x32);
      piVar10[0x607] = *(int *)(*piVar10 + 0x36);
      if (*(int *)(extraout_ECX + 0x5c282 + piVar10[0x8c] * 4) == 0x8c) {
        *(int *)(extraout_ECX + 0x5c282 + piVar10[0x8c] * 4) = iVar17;
      }
      iVar17 = iVar17 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar17 < (int)DAT_0087769c);
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    iVar17 = 0;
    piVar10 = (int *)(extraout_ECX + 0x5c282);
    do {
      if (*piVar10 == 0x8c) {
        FUN_00429a00();
      }
      else if (*piVar10 != iVar17) {
        FUN_00429a00();
      }
      iVar17 = iVar17 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar17 < 0x1f);
    FUN_00429a00();
    FUN_00429a00();
    iVar17 = 0;
    if (0 < (int)DAT_0087769c) {
      do {
        if (*(char *)(extraout_ECX + 0x5d86e + iVar17) != '\0') {
          FUN_00429a00();
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)DAT_0087769c);
    }
    FUN_00429a00();
  }
  iVar21 = 0;
  iVar17 = 0;
  iVar13 = 0;
  local_30 = (char *)0x0;
  if (0 < (int)DAT_0087769c) {
    piVar10 = local_2db8;
    piVar11 = local_3218;
    local_48 = local_2fe8;
    piVar31 = (int *)(extraout_ECX + 0x5df8a);
    piVar19 = (int *)(extraout_ECX + 0x5d8fa);
    local_40 = (double)CONCAT44(extraout_ECX + 0x5db2a,(undefined4)local_40);
    do {
      iVar20 = *piVar19;
      local_3218[iVar21] = -1;
      local_2fe8[iVar21] = -1;
      local_2db8[iVar21] = -1;
      if (-1 < iVar20) {
        piVar30 = (int *)piVar19[-0x6b6];
        if ((int)(&DAT_00dbd1a2)[(int)piVar30] < 0xc) {
          iVar17 = iVar17 + 1;
          *piVar11 = iVar20;
          piVar11 = piVar11 + 1;
          *local_40._4_4_ = iVar21;
          local_40 = (double)CONCAT44(local_40._4_4_ + 1,(undefined4)local_40);
        }
        else if (((int)(&DAT_00dbd1a2)[(int)piVar30] < 0xc) ||
                (cVar4 = FUN_004581d0(), cVar4 != '\0')) {
          if ((0x14 < (int)(&DAT_00dbd1a2)[piVar19[-0x6b6]]) &&
             ((&DAT_00dbd1a2)[piVar19[-0x6b6]] != 0x8c)) {
            *piVar10 = *piVar19;
            *piVar31 = iVar21;
            piVar10 = piVar10 + 1;
            piVar31 = piVar31 + 1;
            local_30 = (char *)((int)local_30 + 1);
          }
        }
        else {
          *local_48 = *piVar19;
          iVar13 = iVar13 + 1;
          *piVar30 = iVar21;
          local_48 = local_48 + 1;
        }
      }
      iVar21 = iVar21 + 1;
      piVar19 = piVar19 + 1;
    } while (iVar21 < (int)DAT_0087769c);
  }
  do {
    DAT_008776a8 = iVar13;
    DAT_008776a4 = iVar17;
    bVar3 = false;
    if (DAT_008776a4 < 2) break;
    iVar17 = DAT_008776a4 + -1;
    piVar10 = local_3218;
    puVar9 = (undefined4 *)(extraout_ECX + 0x5db2a);
    do {
      piVar10 = piVar10 + 1;
      iVar13 = *piVar10;
      if (iVar13 < piVar10[-1]) {
        uVar8 = puVar9[1];
        *piVar10 = piVar10[-1];
        uVar1 = *puVar9;
        piVar10[-1] = iVar13;
        puVar9[1] = uVar1;
        *puVar9 = uVar8;
        bVar3 = true;
      }
      puVar9 = puVar9 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    iVar17 = DAT_008776a4;
    iVar13 = DAT_008776a8;
  } while (bVar3);
  do {
    bVar3 = false;
    if (DAT_008776a8 < 2) break;
    piVar10 = local_2fe8;
    iVar17 = DAT_008776a8 + -1;
    puVar9 = (undefined4 *)(extraout_ECX + 0x5dd5a);
    do {
      piVar10 = piVar10 + 1;
      iVar13 = *piVar10;
      if (iVar13 < piVar10[-1]) {
        uVar8 = puVar9[1];
        *piVar10 = piVar10[-1];
        uVar1 = *puVar9;
        piVar10[-1] = iVar13;
        puVar9[1] = uVar1;
        *puVar9 = uVar8;
        bVar3 = true;
      }
      puVar9 = puVar9 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  } while (bVar3);
  do {
    bVar3 = false;
    if ((int)local_30 < 2) break;
    piVar10 = local_2db8;
    iVar17 = (int)local_30 + -1;
    puVar9 = (undefined4 *)(extraout_ECX + 0x5df8a);
    do {
      piVar10 = piVar10 + 1;
      iVar13 = *piVar10;
      if (iVar13 < piVar10[-1]) {
        uVar8 = puVar9[1];
        *piVar10 = piVar10[-1];
        uVar1 = *puVar9;
        piVar10[-1] = iVar13;
        puVar9[1] = uVar1;
        *puVar9 = uVar8;
        bVar3 = true;
      }
      puVar9 = puVar9 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  } while (bVar3);
  DAT_008776ac = (int)local_30;
  DAT_008776a0 = (int)local_30 + DAT_008776a8 + DAT_008776a4;
  iVar17 = 0;
  iVar13 = 0;
  pcVar18 = DAT_0087769c;
  if (0 < (int)DAT_0087769c) {
    piVar10 = (int *)(extraout_ECX + 0x5db2a);
    piVar11 = (int *)(extraout_ECX + 0x5e1ba);
    do {
      if (*piVar10 != 0x8c) {
        *piVar11 = *piVar10;
        iVar17 = iVar17 + 1;
        piVar11 = piVar11 + 1;
        pcVar18 = DAT_0087769c;
      }
      iVar13 = iVar13 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar13 < (int)pcVar18);
  }
  iVar13 = 0;
  if (0 < (int)pcVar18) {
    piVar11 = (int *)(extraout_ECX + 0x5e1ba + iVar17 * 4);
    piVar10 = (int *)(extraout_ECX + 0x5dd5a);
    do {
      if (*piVar10 != 0x8c) {
        *piVar11 = *piVar10;
        iVar17 = iVar17 + 1;
        piVar11 = piVar11 + 1;
        pcVar18 = DAT_0087769c;
      }
      piVar10 = piVar10 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)pcVar18);
  }
  iVar13 = 0;
  if (0 < (int)pcVar18) {
    piVar11 = (int *)(extraout_ECX + 0x5e1ba + iVar17 * 4);
    piVar10 = (int *)(extraout_ECX + 0x5df8a);
    do {
      if (*piVar10 != 0x8c) {
        *piVar11 = *piVar10;
        piVar11 = piVar11 + 1;
        pcVar18 = DAT_0087769c;
      }
      iVar13 = iVar13 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar13 < (int)pcVar18);
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    iVar17 = 0;
    if (0 < (int)DAT_0087769c) {
      piVar10 = (int *)(extraout_ECX + 0x5db2a);
      do {
        if (iVar17 < DAT_008776a4) {
          if (*piVar10 == 0x8c) {
LAB_0076ffd4:
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff300();
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_0076ffd4;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < (int)DAT_0087769c);
    }
    FUN_00429a00();
    iVar17 = 0;
    if (0 < (int)DAT_0087769c) {
      piVar10 = (int *)(extraout_ECX + 0x5dd5a);
      do {
        if (iVar17 < DAT_008776a8) {
          if (*piVar10 == 0x8c) {
LAB_00770052:
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff300();
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_00770052;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < (int)DAT_0087769c);
    }
    FUN_00429a00();
    iVar17 = 0;
    if (0 < (int)DAT_0087769c) {
      piVar10 = (int *)(extraout_ECX + 0x5df8a);
      do {
        if (iVar17 < DAT_008776ac) {
          if (*piVar10 == 0x8c) {
LAB_007700d0:
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff300();
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_007700d0;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < (int)DAT_0087769c);
    }
    FUN_00429a00();
    iVar17 = 0;
    if (0 < (int)DAT_0087769c) {
      piVar10 = (int *)(extraout_ECX + 0x5e1ba);
      do {
        if (iVar17 < DAT_008776a0) {
          if (*piVar10 == 0x8c) {
LAB_0077014e:
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff300();
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_0077014e;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < (int)DAT_0087769c);
    }
    FUN_00429a00();
    pcVar18 = DAT_0087769c;
  }
  iVar17 = 0;
  if (0 < (int)pcVar18) {
    piVar10 = local_2db8;
    piVar11 = (int *)(extraout_ECX + 0x5d40e);
    do {
      piVar11[0x3f7] = iVar17;
      if (*piVar11 < -0x7fffffff) {
        switch(piVar11[-0x57b]) {
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x1e:
          *piVar10 = 1;
          *piVar11 = 1;
          break;
        case 0x15:
        case 0x1d:
          *piVar10 = 7;
          *piVar11 = 7;
          break;
        case 0x16:
          *piVar10 = 4;
          *piVar11 = 4;
          break;
        case 0x17:
          *piVar10 = 5;
          *piVar11 = 5;
          break;
        case 0x18:
        case 0x1b:
          *piVar10 = 6;
          *piVar11 = 6;
          break;
        case 0x19:
          *piVar10 = 3;
          *piVar11 = 3;
          break;
        case 0x1a:
          *piVar10 = 8;
          *piVar11 = 8;
          break;
        case 0x1c:
          *piVar10 = 2;
          *piVar11 = 2;
          break;
        default:
          *piVar10 = iVar17;
          *piVar11 = iVar17;
        }
        if (DAT_00dc4b5e != '\0') {
          FUN_004ff300();
          pcVar18 = s_INFO____s__ui_list_priority_is_n_00879164;
          FUN_00429a00();
        }
      }
      else {
        *piVar10 = *piVar11;
      }
      iVar17 = iVar17 + 1;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar17 < (int)DAT_0087769c);
  }
  do {
    bVar3 = false;
    if ((int)pcVar18 < 2) break;
    pcVar14 = pcVar18 + -1;
    piVar10 = local_2db8;
    puVar9 = (undefined4 *)(extraout_ECX + 0x5e3ea);
    do {
      piVar10 = piVar10 + 1;
      iVar17 = *piVar10;
      if (piVar10[-1] < iVar17) {
        uVar8 = *puVar9;
        *piVar10 = piVar10[-1];
        uVar1 = puVar9[1];
        puVar9[1] = uVar8;
        piVar10[-1] = iVar17;
        *puVar9 = uVar1;
        bVar3 = true;
      }
      puVar9 = puVar9 + 1;
      pcVar14 = pcVar14 + -1;
    } while (pcVar14 != (char *)0x0);
  } while (bVar3);
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
    iVar17 = 0;
    if (0 < (int)DAT_0087769c) {
      piVar10 = (int *)(extraout_ECX + 0x5e3ea);
      do {
        if (iVar17 < (int)pcVar18) {
          if (*piVar10 == 0x8c) {
LAB_00770334:
            pcVar18 = (char *)0x77033f;
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff300();
            pcVar18 = s__s____d_00879130;
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_00770334;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < (int)DAT_0087769c);
    }
    FUN_00429a00();
  }
  puVar9 = (undefined4 *)(extraout_ECX + 0x5e84a);
  iVar17 = 0x8c;
  puVar16 = (undefined4 *)(extraout_ECX + 0x3a5e);
  do {
    puVar22 = puVar16;
    for (iVar13 = 0x19; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar22 = 0;
      puVar22 = puVar22 + 1;
    }
    *(undefined2 *)puVar22 = 0;
    puVar9[-0x8c] = 0;
    *puVar9 = 0xffffffff;
    puVar9[0x8c] = 0;
    puVar9[0x118] = 0;
    puVar9[0x1a4] = 0xffffffff;
    puVar9[0x230] = 0x8c;
    puVar9[700] = 0x8c;
    puVar9[0x348] = 0x8c;
    puVar9[0x3d4] = 0x8c;
    puVar9 = puVar9 + 1;
    iVar17 = iVar17 + -1;
    puVar16 = (undefined4 *)((int)puVar16 + 0x66);
  } while (iVar17 != 0);
  FUN_00429a00();
  pvVar7 = operator_new(0x714);
  local_8 = 3;
  if (pvVar7 != (void *)0x0) {
    FUN_00534930();
  }
  local_8 = 0xffffffff;
  do {
    while (iVar17 = FUN_00535490(), iVar17 == 1) {
      iVar17 = FUN_004fe160();
      if ((iVar17 == 0x8c) || (*(int *)(extraout_ECX + 0x5e61a + iVar17 * 4) != 0)) {
        FUN_00429a00();
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      else {
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00();
        }
        pvVar7 = operator_new(0x28);
        local_8 = 4;
        if (pvVar7 == (void *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)FUN_00504e90();
        }
        piVar10[1] = iVar17;
        local_8 = 0xffffffff;
        (**(code **)(*piVar10 + 4))();
        *(int **)(extraout_ECX + 0x5e61a + iVar17 * 4) = piVar10;
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00();
        }
      }
    }
    piVar10 = (int *)FUN_00534391();
  } while (*piVar10 != 0x531);
  FUN_00429a00();
  cVar4 = '\0';
  DAT_008776b0 = 0x8c;
  DAT_008776b4 = (char *)0x8c;
  iVar17 = 0;
  piVar10 = (int *)(extraout_ECX + 0x5e61a);
  do {
    if (*piVar10 == 0) {
      if (cVar4 == '\0') {
        cVar4 = '\x01';
        DAT_008776b0 = iVar17;
      }
    }
    else if (cVar4 != '\0') {
      cVar4 = (char)((uint)*(undefined4 *)(*(int *)(extraout_ECX + 0x5e616 + DAT_008776b0 * 4) + 8)
                    >> 0x18);
      FUN_00429a00();
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    iVar17 = iVar17 + 1;
    piVar10 = piVar10 + 1;
  } while (iVar17 < 0x8c);
  FUN_00429a00();
  iVar17 = 0;
  if (0 < DAT_008776b0) {
    piVar10 = (int *)(extraout_ECX + 0x5e61a);
    do {
      piVar10[0x8c] = *(int *)(*piVar10 + 0x18);
      piVar10[0x118] = *(int *)(*piVar10 + 0x1c);
      piVar10[0x1a4] = *(int *)(*piVar10 + 0x20);
      piVar10[0x230] = *(int *)(*piVar10 + 0x24);
      if ((DAT_00dc4b5e != '\0') &&
         (((iVar13 = piVar10[0x1a4], iVar13 == 1 || (iVar13 == 2)) || (iVar13 == 3)))) {
        FUN_00429a00();
      }
      iVar17 = iVar17 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar17 < DAT_008776b0);
  }
  FUN_00429a00();
  iVar13 = 0;
  iVar20 = 0;
  local_30 = (char *)0x0;
  iVar21 = 0;
  iVar17 = 0;
  if (0 < DAT_008776b0) {
    piVar10 = local_2db8;
    piVar11 = local_2fe8;
    piVar31 = local_3218;
    local_40 = (double)CONCAT44(extraout_ECX + 0x5f10a,(undefined4)local_40);
    piVar19 = (int *)(extraout_ECX + 0x5f33a);
    piVar30 = (int *)(extraout_ECX + 0x5f56a);
    piVar23 = (int *)(extraout_ECX + 0x5eeda);
    do {
      local_2db8[iVar13] = -1;
      local_2fe8[iVar13] = -1;
      local_3218[iVar13] = -1;
      iVar17 = *piVar23;
      if (-1 < iVar17) {
        iVar2 = piVar23[-0x1a4];
        if (iVar2 == 0) {
          iVar20 = iVar20 + 1;
          *piVar10 = iVar17;
          piVar10 = piVar10 + 1;
          *local_40._4_4_ = iVar13;
          local_40 = (double)CONCAT44(local_40._4_4_ + 1,(undefined4)local_40);
        }
        else if (iVar2 == 1) {
          *piVar11 = iVar17;
          piVar11 = piVar11 + 1;
          *piVar19 = iVar13;
          local_30 = local_30 + 1;
          piVar19 = piVar19 + 1;
        }
        else if (iVar2 == 2) {
          *piVar31 = iVar17;
          piVar31 = piVar31 + 1;
          *piVar30 = iVar13;
          iVar21 = iVar21 + 1;
          piVar30 = piVar30 + 1;
        }
      }
      iVar13 = iVar13 + 1;
      piVar23 = piVar23 + 1;
      iVar17 = iVar20;
    } while (iVar13 < DAT_008776b0);
  }
  DAT_008776b4 = local_30 + iVar17 + iVar21;
  DAT_008776bc = local_30;
  DAT_008776b8 = iVar17;
  DAT_008776c0 = iVar21;
  do {
    bVar3 = false;
    if (iVar17 < 2) break;
    iVar13 = iVar17 + -1;
    piVar10 = local_2db8;
    puVar9 = (undefined4 *)(extraout_ECX + 0x5f10a);
    do {
      piVar10 = piVar10 + 1;
      iVar20 = *piVar10;
      if (iVar20 < piVar10[-1]) {
        uVar8 = puVar9[1];
        *piVar10 = piVar10[-1];
        uVar1 = *puVar9;
        piVar10[-1] = iVar20;
        puVar9[1] = uVar1;
        *puVar9 = uVar8;
        bVar3 = true;
      }
      puVar9 = puVar9 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  } while (bVar3);
  do {
    bVar3 = false;
    if ((int)local_30 < 2) break;
    piVar10 = local_2fe8;
    pcVar18 = local_30 + -1;
    puVar9 = (undefined4 *)(extraout_ECX + 0x5f33a);
    do {
      piVar10 = piVar10 + 1;
      iVar17 = *piVar10;
      if (iVar17 < piVar10[-1]) {
        uVar8 = puVar9[1];
        *piVar10 = piVar10[-1];
        uVar1 = *puVar9;
        piVar10[-1] = iVar17;
        puVar9[1] = uVar1;
        *puVar9 = uVar8;
        bVar3 = true;
      }
      puVar9 = puVar9 + 1;
      pcVar18 = pcVar18 + -1;
    } while (pcVar18 != (char *)0x0);
  } while (bVar3);
  do {
    bVar3 = false;
    if (iVar21 < 2) break;
    piVar10 = local_3218;
    iVar17 = iVar21 + -1;
    puVar9 = (undefined4 *)(extraout_ECX + 0x5f56a);
    do {
      piVar10 = piVar10 + 1;
      iVar13 = *piVar10;
      if (iVar13 < piVar10[-1]) {
        uVar8 = puVar9[1];
        *piVar10 = piVar10[-1];
        uVar1 = *puVar9;
        piVar10[-1] = iVar13;
        puVar9[1] = uVar1;
        *puVar9 = uVar8;
        bVar3 = true;
      }
      puVar9 = puVar9 + 1;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  } while (bVar3);
  iVar21 = 0;
  iVar13 = 0;
  iVar17 = DAT_008776b0;
  if (0 < DAT_008776b0) {
    piVar10 = (int *)(extraout_ECX + 0x5f79a);
    piVar11 = (int *)(extraout_ECX + 0x5f10a);
    do {
      if (*piVar11 != 0x8c) {
        *piVar10 = *piVar11;
        iVar21 = iVar21 + 1;
        piVar10 = piVar10 + 1;
        iVar17 = DAT_008776b0;
      }
      piVar11 = piVar11 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar17);
  }
  iVar13 = 0;
  if (0 < iVar17) {
    piVar11 = (int *)(extraout_ECX + 0x5f79a + iVar21 * 4);
    piVar10 = (int *)(extraout_ECX + 0x5f33a);
    do {
      if (*piVar10 != 0x8c) {
        *piVar11 = *piVar10;
        iVar21 = iVar21 + 1;
        piVar11 = piVar11 + 1;
        iVar17 = DAT_008776b0;
      }
      piVar10 = piVar10 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar17);
  }
  iVar13 = 0;
  if (0 < iVar17) {
    piVar11 = (int *)(extraout_ECX + 0x5f79a + iVar21 * 4);
    piVar10 = (int *)(extraout_ECX + 0x5f56a);
    do {
      if (*piVar10 != 0x8c) {
        *piVar11 = *piVar10;
        piVar11 = piVar11 + 1;
        iVar17 = DAT_008776b0;
      }
      iVar13 = iVar13 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar13 < iVar17);
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    FUN_00429a00();
    iVar17 = 0;
    if (0 < DAT_008776b0) {
      piVar10 = (int *)(extraout_ECX + 0x5f10a);
      do {
        if (iVar17 < DAT_008776b8) {
          if (*piVar10 == 0x8c) {
LAB_007709c2:
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff380();
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_007709c2;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < DAT_008776b0);
    }
    FUN_00429a00();
    iVar17 = 0;
    if (0 < DAT_008776b0) {
      piVar10 = (int *)(extraout_ECX + 0x5f33a);
      do {
        if (iVar17 < (int)DAT_008776bc) {
          if (*piVar10 == 0x8c) {
LAB_00770a40:
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff380();
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_00770a40;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < DAT_008776b0);
    }
    FUN_00429a00();
    iVar17 = 0;
    if (0 < DAT_008776b0) {
      piVar10 = (int *)(extraout_ECX + 0x5f56a);
      do {
        if (iVar17 < DAT_008776c0) {
          if (*piVar10 == 0x8c) {
LAB_00770abe:
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff380();
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_00770abe;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < DAT_008776b0);
    }
    FUN_00429a00();
    iVar17 = 0;
    if (0 < DAT_008776b0) {
      piVar10 = (int *)(extraout_ECX + 0x5f79a);
      do {
        if (iVar17 < (int)DAT_008776b4) {
          if (*piVar10 == 0x8c) {
LAB_00770b3c:
            FUN_00429a00();
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_004ff380();
            FUN_00429a00();
          }
        }
        else if (*piVar10 != 0x8c) goto LAB_00770b3c;
        iVar17 = iVar17 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar17 < DAT_008776b0);
    }
    FUN_00429a00();
    if (DAT_00dc4b5e != '\0') {
      FUN_00429a00();
    }
  }
  pvVar7 = operator_new(8);
  local_8 = 5;
  if (pvVar7 == (void *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)FUN_00426120();
  }
  local_8 = 0xffffffff;
  iVar17 = FUN_00426720();
  FUN_00426330();
  if (0 < iVar17 + -1) {
    do {
      FUN_004265c0();
      iVar13 = 0x770bfc;
      iVar17 = FUN_007a8730();
      if (iVar17 != 0) {
        puVar24 = local_2608;
        uVar27 = 0x770c1400000000;
        iVar17 = FUN_007a8730();
        iVar13 = (int)((ulonglong)uVar27 >> 0x20);
        if ((iVar17 != 0) && (iVar17 = 0, 0 < (int)DAT_0087769c)) {
          do {
            FUN_004265c0();
            uVar6 = FUN_007a7b3c();
            iVar13 = (int)((ulonglong)uVar27 >> 0x20);
            *puVar24 = uVar6;
            iVar17 = iVar17 + 1;
            puVar24 = puVar24 + 0x33;
          } while (iVar17 < (int)DAT_0087769c);
        }
      }
      FUN_00426330();
    } while (iVar13 != 1);
  }
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)();
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
  }
  pvVar7 = operator_new(8);
  local_8 = 6;
  if (pvVar7 == (void *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)FUN_00426120();
  }
  local_8 = 0xffffffff;
  iVar17 = FUN_00426720();
  FUN_00426330();
  if (0 < iVar17 + -1) {
    do {
      FUN_004265c0();
      iVar13 = 0x770d1a;
      iVar17 = FUN_007a8730();
      if (iVar17 != 0) {
        puVar24 = local_2608;
        uVar27 = 0x770d3200000000;
        iVar17 = FUN_007a8730();
        iVar13 = (int)((ulonglong)uVar27 >> 0x20);
        if ((iVar17 != 0) && (iVar17 = 0, 0 < DAT_008776b0)) {
          do {
            FUN_004265c0();
            uVar6 = FUN_007a7b3c();
            iVar13 = (int)((ulonglong)uVar27 >> 0x20);
            *puVar24 = uVar6;
            iVar17 = iVar17 + 1;
            puVar24 = puVar24 + 0x33;
          } while (iVar17 < DAT_008776b0);
        }
      }
      FUN_00426330();
    } while (iVar13 != 1);
  }
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)();
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
  }
  puVar9 = operator_new(0x2d0e);
  local_8 = 7;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    FUN_00526a00();
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_0042d2d0();
    *(undefined1 *)((int)puVar9 + 0x277d) = 0;
    *puVar9 = &PTR_FUN_007e4020;
    *(undefined4 *)((int)puVar9 + 0x2cde) = 0;
    puVar16 = (undefined4 *)((int)puVar9 + 0x277e);
    for (iVar17 = 0x158; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    puVar9[0xb39] = 0;
    *(undefined4 *)((int)puVar9 + 0x2cea) = 0xffffffff;
    *(undefined4 *)((int)puVar9 + 0x2cee) = 0xffffffff;
    *(undefined4 *)((int)puVar9 + 0x2cf2) = 0xffffffff;
    *(undefined4 *)((int)puVar9 + 0x2cf6) = 0xffffffff;
    *(undefined4 *)((int)puVar9 + 0x2cfa) = 0xffffffff;
    *(undefined4 *)((int)puVar9 + 0x2cfe) = 0xffffffff;
    *(undefined4 *)((int)puVar9 + 0x2d02) = 0xffffffff;
    *(undefined4 *)((int)puVar9 + 0x2d06) = 0xffffffff;
    *(undefined4 *)((int)puVar9 + 0x2d0a) = 0xffffffff;
    *(undefined1 *)(puVar9 + 0xb3a) = 1;
    *(undefined1 *)((int)puVar9 + 0x57d) = 0;
    *(undefined1 *)((int)puVar9 + 0x257d) = 0;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(extraout_ECX + 0x7226) = puVar9;
  FUN_00534930();
  local_8._0_1_ = 9;
  local_8._1_3_ = 0;
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
  }
  do {
    while (iVar17 = FUN_00535490(), iVar17 == 1) {
      iVar17 = FUN_004af6b0();
      if (iVar17 == 0) {
        FUN_00429a00();
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      else if (DAT_00dc4b5e != '\0') {
        FUN_00429a00();
      }
      iVar17 = extraout_ECX + iVar17 * 0xa8;
      (*(code *)**(undefined4 **)(iVar17 + 0x722a))();
      iVar17 = *(int *)(iVar17 + 0x723e);
      while (iVar17 != 0) {
        iVar17 = *(int *)(iVar17 + 8);
        FUN_00459f50();
      }
    }
    piVar10 = (int *)FUN_00534391();
  } while (*piVar10 != 0x531);
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
  }
  puVar9 = (undefined4 *)(extraout_ECX + 0x1b4b0);
  for (iVar17 = 0x8c; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar9 = 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(extraout_ECX + 0x1b4fc) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b500) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b4e0) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b4f4) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b4f8) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b4e4) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b520) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b524) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b528) = 0;
  *(undefined4 *)(extraout_ECX + 0x1b504) = 5;
  *(undefined4 *)(extraout_ECX + 0x1b510) = 4;
  *(undefined4 *)(extraout_ECX + 0x1b50c) = 3;
  *(undefined4 *)(extraout_ECX + 0x1b508) = 2;
  puVar9 = (undefined4 *)(extraout_ECX + 0x356e6);
  for (iVar17 = 0x9920; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar9 = 0xbf800000;
    puVar9 = puVar9 + 1;
  }
  FUN_00429a00();
  iVar17 = 0;
  if (0 < (int)DAT_0087769c) {
    local_40 = (double)CONCAT44((undefined4 *)(extraout_ECX + 0x1b4b0),(undefined4)local_40);
    pcVar18 = (char *)(extraout_ECX + 0x16820);
    local_48 = &DAT_00dbd1a2;
    piVar10 = (int *)(extraout_ECX + 0x153f2);
    do {
      iVar13 = 0;
      if (0 < DAT_008776b0) {
        do {
          pcVar18[iVar13] = '\0';
          iVar13 = iVar13 + 1;
        } while (iVar13 < DAT_008776b0);
      }
      *pcVar18 = '\x01';
      FUN_004fe7e0();
      FUN_005341fe();
      FUN_007a630a();
      FUN_004fe7e0();
      FUN_005341fe();
      FUN_00429a00();
      local_30 = (char *)0x7710fd;
      pvVar7 = operator_new(0x714);
      local_8._0_1_ = 10;
      if (pvVar7 == (void *)0x0) {
        iVar13 = 0;
      }
      else {
        iVar13 = FUN_00534930();
      }
      local_8._0_1_ = 9;
      local_30 = (char *)0x0;
LAB_00771132:
      do {
        iVar21 = FUN_00535490();
        if (iVar21 == 1) {
          iVar21 = *(int *)(iVar13 + 4);
          if (iVar21 < 0x342) {
            if (iVar21 == 0x341) {
              local_30 = local_30 + 1;
              if (*local_48 < 0xc) {
                pvVar7 = operator_new(0x166);
                local_8._0_1_ = 0xb;
                if (pvVar7 == (void *)0x0) {
                  piVar11 = (int *)0x0;
                }
                else {
                  piVar11 = (int *)FUN_004f6510();
                }
                local_8._0_1_ = 9;
                (**(code **)(*piVar11 + 8))();
                piVar11[1] = iVar17;
                iVar21 = *piVar10;
                pvVar7 = operator_new(0xe);
                local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
                local_8._0_1_ = 0xc;
                if (pvVar7 == (void *)0x0) {
                  iVar20 = 0;
                }
                else {
                  local_30 = (char *)0x77123a;
                  iVar20 = FUN_0078f090();
                }
                *piVar10 = iVar20;
                iVar20 = piVar10[1];
                piVar10[1] = iVar20 + 1;
                if (iVar20 == 0) goto LAB_007712f9;
                *(int *)(iVar21 + 8) = *piVar10;
              }
              else {
                cVar4 = FUN_004581d0();
                if (cVar4 == '\0') {
                  pvVar7 = operator_new(0x166);
                  local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
                  local_8._0_1_ = 0xd;
                  if (pvVar7 == (void *)0x0) {
                    piVar11 = (int *)0x0;
                  }
                  else {
                    piVar11 = (int *)FUN_004f8180();
                  }
                  local_8._0_1_ = 9;
                  (**(code **)(*piVar11 + 8))();
                  piVar11[1] = iVar17;
                  iVar21 = *piVar10;
                  pvVar7 = operator_new(0xe);
                  local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
                  local_8._0_1_ = 0xe;
                  if (pvVar7 == (void *)0x0) {
                    iVar20 = 0;
                  }
                  else {
                    local_30 = (char *)0x7712d8;
                    iVar20 = FUN_0078f090();
                  }
                  *piVar10 = iVar20;
                  iVar20 = piVar10[1];
                  piVar10[1] = iVar20 + 1;
                  if (iVar20 == 0) {
LAB_007712f9:
                    piVar10[-1] = *piVar10;
                  }
                  else {
                    *(int *)(iVar21 + 8) = *piVar10;
                  }
                }
                else {
                  pvVar7 = operator_new(0x166);
                  local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
                  local_8._0_1_ = 0xf;
                  if (pvVar7 == (void *)0x0) {
                    piVar11 = (int *)0x0;
                  }
                  else {
                    piVar11 = (int *)FUN_004f9b40();
                  }
                  local_8._0_1_ = 9;
                  (**(code **)(*piVar11 + 8))();
                  piVar11[1] = iVar17;
                  iVar21 = *piVar10;
                  pvVar7 = operator_new(0xe);
                  local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
                  local_8._0_1_ = 0x10;
                  if (pvVar7 == (void *)0x0) {
                    iVar20 = 0;
                  }
                  else {
                    local_30 = (char *)0x771370;
                    iVar20 = FUN_0078f090();
                  }
                  *piVar10 = iVar20;
                  iVar20 = piVar10[1];
                  piVar10[1] = iVar20 + 1;
                  if (iVar20 == 0) goto LAB_007712f9;
                  *(int *)(iVar21 + 8) = *piVar10;
                }
              }
              local_8._0_1_ = 9;
              iVar21 = (**(code **)(piVar10[-2] + 4))();
              piVar11[0xf] = iVar21 + -1;
              goto LAB_00771132;
            }
            if (iVar21 == 0x115) {
              FUN_0078d510();
              goto LAB_00771132;
            }
            if (iVar21 == 0x117) {
              iVar21 = iVar13 + 0x40c;
              iVar20 = FUN_004fe160();
              if (iVar20 == 0x8c) {
                local_30 = (char *)0x7711a2;
                FUN_00429a00();
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
              else {
                *(undefined1 *)(iVar20 + iVar21) = 1;
              }
              goto LAB_00771132;
            }
          }
          else if (iVar21 == 0x56b) {
            uVar8 = FUN_007a7b3c();
            *local_40._4_4_ = uVar8;
            FUN_00429a00();
            goto LAB_00771132;
          }
          FUN_005349b0();
          goto LAB_00771132;
        }
        piVar11 = (int *)FUN_00534391();
      } while (*piVar11 != 0x531);
      if (iVar13 != 0) {
        FUN_005349a0();
        FUN_00796cd8();
      }
      pcVar14 = local_30;
      if ((int)local_30 < 1) {
        pcVar18 = s_WARNING____No_valid_models_found_00878c94;
        FUN_00429a00();
      }
      else {
        pcVar18 = local_30 + -1;
        pcVar25 = s__d_model_s__loaded__0_to__d___00878cbc;
        puVar9 = (undefined4 *)0x771416;
        FUN_00429a00();
        puVar9[-1] = pcVar14;
        *puVar9 = pcVar25;
        DAT_00dc1538 = DAT_00dc1538 + (int)pcVar14;
      }
      pcVar18 = pcVar18 + 0x8c;
      iVar17 = iVar17 + 1;
      local_48 = local_48 + 1;
      piVar10 = (int *)((int)piVar10 + 0x12);
      local_40 = (double)CONCAT44((int)local_40._4_4_ + 4,(undefined4)local_40);
    } while (iVar17 < (int)DAT_0087769c);
  }
  if ((int)DAT_00dc1538 < 1) {
    FUN_00429a00();
  }
  else {
    FUN_00429a00();
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
  }
  iVar17 = 0;
  if (0 < (int)DAT_0087769c) {
    do {
      iVar13 = extraout_ECX + iVar17 * 0x12;
      uVar12 = (**(code **)(*(int *)(iVar13 + 0x153ea) + 4))();
      dVar29 = (double)((ulonglong)uVar12 << 0x20);
      if (DAT_00dc4b5e != '\0') {
        FUN_004fe7e0();
        FUN_005341fe();
        dVar29 = (double)((ulonglong)uVar12 << 0x20);
        FUN_00429a00();
        iVar21 = 0;
        if (0 < (int)DAT_0087769c) {
          do {
            if ((iVar21 != iVar17) &&
               (iVar20 = iVar21 + iVar17 * 0x8c,
               _DAT_007e3380 <= *(float *)(extraout_ECX + 0x356e6 + iVar20 * 8))) {
              dVar29 = (double)*(float *)(extraout_ECX + iVar20 * 8 + 0x356ea);
              local_34 = (char *)0x771567;
              local_30 = (char *)iVar21;
              local_34 = (char *)FUN_004fe7e0();
              local_38 = (char *)0x77156d;
              local_30 = (char *)FUN_005341fe();
              local_34 = s_Can_be_upgraded_to__s____4f_Cost_00878be8;
              local_38 = (char *)0x77157b;
              FUN_00429a00();
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < (int)DAT_0087769c);
        }
      }
      uVar12 = 0;
      if (0 < (int)((ulonglong)dVar29 >> 0x20)) {
        do {
          if (iVar17 < (int)DAT_0087769c) {
            local_158 = *(undefined4 **)(iVar13 + 0x153ee);
            uVar15 = 0;
            while (local_158 != (undefined4 *)0x0) {
              if (uVar15 == uVar12) {
                piVar10 = (int *)*local_158;
                goto LAB_007715ef;
              }
              dVar29 = 0.0;
              FUN_0078e330();
              uVar15 = uVar15 + 1;
            }
            piVar10 = (int *)**(undefined4 **)(iVar13 + 0x153ee);
LAB_007715ef:
            if (piVar10 == (int *)0x0) goto LAB_00771926;
            if (piVar10[0x2e] == -1) {
              dVar29 = 2.0547288639109997e-306;
              cVar4 = (**(code **)(*piVar10 + 0xc))();
              if (cVar4 == '\0') {
                dVar29 = 2.0548225712451288e-306;
                cVar4 = (**(code **)(*piVar10 + 0x14))();
                if (cVar4 != '\0') {
                  iVar21 = (int)((ulonglong)dVar29 >> 0x20);
                  goto LAB_00771634;
                }
                dVar29 = 2.0548524489458656e-306;
                cVar4 = (**(code **)(*piVar10 + 0x10))();
                if (cVar4 != '\0') goto LAB_0077166f;
              }
              else if ((iVar17 == 4) && (uVar12 == 2)) {
                piVar10[0x2d] = 5;
                piVar10[0x2e] = 2;
              }
              else {
                iVar21 = (int)((ulonglong)dVar29 >> 0x20);
LAB_00771634:
                if (iVar21 + -1 <= (int)uVar12) goto LAB_0077166f;
                piVar10[0x2d] = iVar17;
                piVar10[0x2e] = uVar12 + 1;
              }
            }
            else {
              if (piVar10[0x2e] != -2) goto LAB_00771683;
LAB_0077166f:
              piVar10[0x2d] = 0x8c;
              piVar10[0x2e] = -1;
            }
LAB_00771683:
            if (-1 < piVar10[0x2e]) {
              if ((int)(&DAT_00dbd1a2)[piVar10[1]] < 0xc ==
                  (int)(&DAT_00dbd1a2)[piVar10[0x2d]] < 0xc) {
                if ((int)(&DAT_00dbd1a2)[piVar10[1]] < 0xc) {
LAB_007716d7:
                  cVar5 = '\0';
                }
                else {
                  cVar4 = FUN_004581d0();
                  cVar5 = '\x01';
                  if (cVar4 != '\0') goto LAB_007716d7;
                }
                if (((int)(&DAT_00dbd1a2)[piVar10[0x2d]] < 0xc) ||
                   (cVar4 = FUN_004581d0(), cVar4 != '\0')) {
                  cVar4 = '\0';
                }
                else {
                  cVar4 = '\x01';
                }
                if (cVar5 != cVar4) goto LAB_00771752;
                if (((int)(&DAT_00dbd1a2)[piVar10[1]] < 0x15) ||
                   ((&DAT_00dbd1a2)[piVar10[1]] == 0x8c)) {
                  cVar4 = '\0';
                }
                else {
                  cVar4 = '\x01';
                }
                if (((int)(&DAT_00dbd1a2)[piVar10[0x2d]] < 0x15) ||
                   ((&DAT_00dbd1a2)[piVar10[0x2d]] == 0x8c)) {
                  cVar5 = '\0';
                }
                else {
                  cVar5 = '\x01';
                }
                if (cVar4 != cVar5) goto LAB_00771752;
              }
              else {
LAB_00771752:
                if (DAT_00dc4b5f != '\0') {
                  FUN_004fe7e0();
                  FUN_005341fe();
                  local_30 = (char *)0x771782;
                  local_30 = (char *)FUN_004fe7e0();
                  local_34 = (char *)0x771788;
                  FUN_005341fe();
                  local_30 = s_Invalid_upgrade_path___change_of_00878b98;
                  local_34 = (char *)0x771796;
                  FUN_00429a50();
                }
                FUN_004fe7e0();
                FUN_005341fe();
                local_30 = (char *)0x7717c0;
                local_30 = (char *)FUN_004fe7e0();
                local_34 = (char *)0x7717c6;
                FUN_005341fe();
                local_30 = s_ERROR___Invalid_upgrade_path___c_00878b3c;
                local_34 = (char *)0x7717d4;
                FUN_00429a00();
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
              iVar21 = FUN_00789c90();
              if (iVar21 != 0) {
                iVar21 = piVar10[0x2e];
                dVar29 = 2.0554527191152138e-306;
                iVar20 = (**(code **)(*(int *)(extraout_ECX + 0x153ea + piVar10[0x2d] * 0x12) + 4))
                                   ();
                if (iVar21 <= iVar20) {
                  if (DAT_00dc4b5e != '\0') {
                    uVar15 = piVar10[0x2e];
                    FUN_004fe7e0();
                    FUN_005341fe();
                    dVar29 = (double)((ulonglong)uVar15 << 0x20);
                    local_30 = (char *)0x771857;
                    local_30 = (char *)FUN_004fe7e0();
                    local_34 = (char *)0x77185d;
                    FUN_005341fe();
                    local_30 = s__s__d_upgrades_to__s__d_00878b20;
                    local_34 = (char *)0x77186b;
                    FUN_00429a00();
                  }
                  goto LAB_00771977;
                }
              }
              if (DAT_00dc4b5f != '\0') {
                FUN_004fe7e0();
                FUN_005341fe();
                local_30 = (char *)0x7718a3;
                local_30 = (char *)FUN_004fe7e0();
                local_34 = (char *)0x7718a9;
                FUN_005341fe();
                local_30 = s_Invalid_upgrade_model_for__s__d___00878af4;
                local_34 = (char *)0x7718b7;
                FUN_00429a50();
              }
              uVar15 = piVar10[0x2e];
              FUN_004fe7e0();
              FUN_005341fe();
              dVar29 = (double)((ulonglong)uVar15 << 0x20);
              local_30 = (char *)0x7718e1;
              local_30 = (char *)FUN_004fe7e0();
              local_34 = (char *)0x7718e7;
              FUN_005341fe();
              local_30 = s_ERROR___Invalid_upgrade_model_fo_00878ac0;
              local_34 = (char *)0x7718f5;
              FUN_00429a00();
              goto LAB_00771971;
            }
            if (DAT_00dc4b5e != '\0') {
              uVar15 = uVar12;
              FUN_004fe7e0();
              FUN_005341fe();
              dVar29 = (double)((ulonglong)uVar15 << 0x20);
              FUN_00429a00();
            }
          }
          else {
LAB_00771926:
            if (DAT_00dc4b5f != '\0') {
              FUN_004fe7e0();
              FUN_005341fe();
              FUN_00429a50();
            }
            uVar15 = uVar12;
            FUN_004fe7e0();
            FUN_005341fe();
            dVar29 = (double)((ulonglong)uVar15 << 0x20);
            FUN_00429a00();
LAB_00771971:
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
LAB_00771977:
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)((ulonglong)dVar29 >> 0x20));
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)DAT_0087769c);
  }
  FUN_00429a00();
  iVar17 = 0;
  if (0 < (int)DAT_0087769c) {
    piVar10 = (int *)(extraout_ECX + 0x1b4b0);
    do {
      if (*piVar10 < 0) {
        FUN_004fe7e0();
        FUN_005341fe();
        FUN_00429a00();
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
        *piVar10 = 0;
      }
      if (5 < *piVar10) {
        FUN_004fe7e0();
        local_30 = (char *)0x771a04;
        FUN_005341fe();
        local_30 = (char *)0x771a12;
        FUN_00429a00();
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
        *piVar10 = 5;
      }
      iVar17 = iVar17 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar17 < (int)DAT_0087769c);
  }
  FUN_00429a00();
  iVar17 = 0;
  if (0 < DAT_008776b0) {
    local_30 = (char *)(extraout_ECX + 0x15dc2);
    do {
      FUN_004fed70();
      FUN_005341fe();
      FUN_007a630a();
      piVar10 = local_2a88;
      FUN_004fed70();
      FUN_005341fe();
      FUN_00429a00();
      local_30 = (char *)0x771ab6;
      pvVar7 = operator_new(0x714);
      local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
      local_8._0_1_ = 0x11;
      if (pvVar7 == (void *)0x0) {
        iVar13 = 0;
      }
      else {
        piVar10 = (int *)&DAT_008390e0;
        iVar13 = FUN_00534930();
      }
      local_8._0_1_ = 9;
      *(undefined1 *)(extraout_ECX + 0x5bb66 + iVar17) = 1;
      if (*(int *)(*piVar10 + 0x18) == 2) {
        *(undefined1 *)(extraout_ECX + 0x5bb66 + iVar17) = 0;
      }
      uVar28 = 0;
LAB_00771b06:
      do {
        piVar10 = (int *)0x771b0d;
        iVar21 = FUN_00535490();
        if (iVar21 == 1) {
          if (*(int *)(iVar13 + 4) != 0x341) {
            if (*(int *)(iVar13 + 4) == 0x589) {
              *(bool *)(extraout_ECX + 0x5bb66 + iVar17) = *(int *)(iVar13 + 0x40c) == 0x111;
            }
            else {
              FUN_005349b0();
            }
            goto LAB_00771b06;
          }
          uVar28 = (ulonglong)((int)uVar28 + 1);
          if (*(int *)(*piVar10 + 0x18) == 0) {
            pvVar7 = operator_new(0x166);
            local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
            local_8 = CONCAT31(local_8._1_3_,0x12);
            if (pvVar7 == (void *)0x0) {
LAB_00771bea:
              piVar10 = (int *)0x0;
            }
            else {
              piVar10 = (int *)FUN_004f6510();
            }
          }
          else {
            if (*(int *)(*piVar10 + 0x18) == 1) {
              pvVar7 = operator_new(0x166);
              local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
              local_8._0_1_ = 0x13;
              if (pvVar7 == (void *)0x0) {
                piVar10 = (int *)0x0;
              }
              else {
                piVar10 = (int *)FUN_004f8180();
              }
              local_8._0_1_ = 9;
              (**(code **)(*piVar10 + 8))();
              FUN_0078e900();
              goto LAB_00771b06;
            }
            pvVar7 = operator_new(0x166);
            local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
            local_8 = CONCAT31(local_8._1_3_,0x14);
            if (pvVar7 == (void *)0x0) goto LAB_00771bea;
            piVar10 = (int *)FUN_004f9b40();
          }
          local_8._0_1_ = 9;
          (**(code **)(*piVar10 + 8))();
          FUN_0078e900();
          goto LAB_00771b06;
        }
        piVar10 = (int *)FUN_00534391();
        iVar21 = (int)uVar28;
      } while (*piVar10 != 0x531);
      if (iVar13 != 0) {
        FUN_005349a0();
        FUN_00796cd8();
      }
      if (0 < iVar21) {
        FUN_00429a00();
      }
      iVar17 = iVar17 + 1;
      local_30 = (char *)((int)local_30 + 0x12);
    } while (iVar17 < DAT_008776b0);
  }
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00();
  }
  iVar17 = 0;
  if (0 < DAT_008776b0) {
    piVar10 = (int *)(extraout_ECX + 0x15dc2);
    local_40 = (double)CONCAT44(piVar10,(undefined4)local_40);
    do {
      uVar12 = (**(code **)(*piVar10 + 4))();
      uVar28 = (ulonglong)uVar12;
      if (DAT_00dc4b5e != '\0') {
        FUN_004fed70();
        FUN_005341fe();
        uVar28 = 0x878c1800771cd5;
        FUN_00429a00();
      }
      iVar13 = 0;
      if (0 < (int)uVar28) {
        do {
          uVar28 = CONCAT44(0x771cf1,(int)uVar28);
          iVar21 = FUN_00789ce0();
          if (iVar21 == 0) {
            if (DAT_00dc4b5f != '\0') {
              FUN_004fed70();
              FUN_005341fe();
              FUN_00429a50();
            }
            FUN_004fed70();
            FUN_005341fe();
            uVar28 = 0x878a6c00771ecc;
            FUN_00429a00();
LAB_00771ecf:
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            if (*(int *)(iVar21 + 0xb8) == -1) {
              *(int *)(iVar21 + 0xb4) = iVar17;
              if (iVar13 < (int)uVar28 + -1) {
                *(int *)(iVar21 + 0xb8) = iVar13 + 1;
              }
              else {
LAB_00771d32:
                *(undefined4 *)(iVar21 + 0xb8) = 0xffffffff;
              }
            }
            else if (*(int *)(iVar21 + 0xb8) == -2) {
              *(int *)(iVar21 + 0xb4) = iVar17;
              goto LAB_00771d32;
            }
            if (*(int *)(iVar21 + 0xb8) < 0) {
              if (DAT_00dc4b5e != '\0') {
                FUN_004fed70();
                FUN_005341fe();
                uVar28 = 0x878aa400771e7f;
                FUN_00429a00();
              }
            }
            else {
              uVar28 = CONCAT44(0x771d55,(int)uVar28);
              iVar20 = FUN_00789ce0();
              if ((iVar20 == 0) ||
                 (iVar20 = *(int *)(iVar21 + 0xb8),
                 iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                               *(int *)(iVar21 + 0xb4) * 0x12) + 4))(),
                 iVar21 < iVar20)) {
                if (DAT_00dc4b5f != '\0') {
                  FUN_004fed70();
                  FUN_005341fe();
                  local_30 = (char *)0x771e01;
                  local_30 = (char *)FUN_004fed70();
                  local_34 = (char *)0x771e07;
                  FUN_005341fe();
                  local_30 = s_Invalid_upgrade_model_for__s__d___00878af4;
                  local_34 = (char *)0x771e15;
                  FUN_00429a50();
                }
                FUN_004fed70();
                FUN_005341fe();
                local_30 = (char *)0x771e3f;
                local_30 = (char *)FUN_004fed70();
                local_34 = (char *)0x771e45;
                uVar12 = FUN_005341fe();
                uVar28 = (ulonglong)uVar12;
                local_30 = s_ERROR___Invalid_upgrade_model_fo_00878ac0;
                local_34 = (char *)0x771e53;
                FUN_00429a00();
                goto LAB_00771ecf;
              }
              if (DAT_00dc4b5e != '\0') {
                FUN_004fed70();
                FUN_005341fe();
                local_30 = (char *)0x771db5;
                local_30 = (char *)FUN_004fed70();
                local_34 = (char *)0x771dbb;
                uVar12 = FUN_005341fe();
                uVar28 = (ulonglong)uVar12;
                local_30 = s__s__d_upgrades_to__s__d_00878b20;
                local_34 = (char *)0x771dc9;
                FUN_00429a00();
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)uVar28);
      }
      iVar17 = iVar17 + 1;
      piVar10 = (int *)((int)local_40._4_4_ + 0x12);
      local_40 = (double)CONCAT44(piVar10,(undefined4)local_40);
    } while (iVar17 < DAT_008776b0);
  }
  FUN_00429a00();
  if (DAT_00dc4b5f != '\0') {
    FUN_00429a00();
    local_268 = DAT_00878990;
    local_264 = DAT_00878994;
    puVar9 = local_262;
    for (iVar17 = 0x3e; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    iVar17 = 0;
    if (0 < DAT_008776a4) {
      do {
        local_2308[0] = '\0';
        FUN_004ff300();
        FUN_007a630a();
        uVar12 = 0xffffffff;
        pcVar18 = local_150;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            local_30 = (char *)0x77200d;
            FUN_007a630a();
            FUN_0042b6c9();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_2408;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Build_cost__ICdays__00878974;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772147;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772255;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77246a;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772578;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772686;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772794;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7728a2;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7729b0;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772abe;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772bcc;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772cda;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772de8;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x772ef6;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773004;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773112;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773220;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77332e;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77343c;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77354a;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773658;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773766;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773874;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773985;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773a96;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773ba7;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773cb8;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773dc9;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773ed7;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x773fe5;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrades_to_00878964;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789c90();
            if (*(int *)(iVar13 + 0xb8) < 0) {
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x77432e;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrade_cost__ICdays__00878944;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789c90();
            if ((*(int *)(iVar13 + 0xb8) < 0) || (iVar20 = FUN_00789c90(), iVar20 == 0)) {
              FUN_007a630a();
            }
            else if (*(char *)(iVar13 + 0xbd) == '\0') {
              local_30 = (char *)0x774546;
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x774500;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5db2a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        iVar17 = iVar17 + 1;
      } while (iVar17 < DAT_008776a4);
    }
    iVar17 = 0;
    if (0 < DAT_008776b8) {
      do {
        local_2308[0] = '\0';
        FUN_004ff380();
        FUN_007a630a();
        uVar12 = 0xffffffff;
        pcVar18 = local_150;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            local_30 = (char *)0x7746a9;
            FUN_007a630a();
            FUN_0042b6c9();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_2408;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Build_cost__ICdays__00878974;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x7747e3;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x7748f1;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x774b06;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x774c14;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x774d22;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x774e30;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x774f3e;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77504c;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77515a;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775268;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775376;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775484;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775592;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x7756a0;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x7757ae;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x7758bc;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x7759ca;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775ad8;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775be6;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775cf4;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775e02;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x775f10;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x776021;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x776132;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x776243;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x776354;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x776465;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x776573;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x776681;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrades_to_00878964;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789ce0();
            if (*(int *)(iVar13 + 0xb8) < 0) {
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x7769ca;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrade_cost__ICdays__00878944;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789ce0();
            if ((*(int *)(iVar13 + 0xb8) < 0) || (iVar20 = FUN_00789ce0(), iVar20 == 0)) {
              FUN_007a630a();
            }
            else if (*(char *)(iVar13 + 0xbd) == '\0') {
              local_30 = (char *)0x776be2;
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x776b9c;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f10a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        iVar17 = iVar17 + 1;
      } while (iVar17 < DAT_008776b8);
    }
    iVar17 = 0;
    if (0 < DAT_008776a8) {
      do {
        local_2308[0] = '\0';
        FUN_004ff300();
        FUN_007a630a();
        uVar12 = 0xffffffff;
        pcVar18 = local_150;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            local_30 = (char *)0x776d45;
            FUN_007a630a();
            FUN_0042b6c9();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_2408;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Build_cost__ICdays__00878974;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x776e7f;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x776f8d;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7771a2;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7772b0;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7773be;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7774cc;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7775da;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7776e8;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7777f9;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x777907;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x777a15;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x777b26;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x777c34;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x777d42;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x777e53;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x777f64;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x778075;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x778183;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x778291;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7783a2;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7784b3;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7785c4;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7786d5;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7787e6;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x7788f4;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x778a02;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrades_to_00878964;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789c90();
            if (*(int *)(iVar13 + 0xb8) < 0) {
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x778d4b;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrade_cost__ICdays__00878944;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789c90();
            if ((*(int *)(iVar13 + 0xb8) < 0) || (iVar20 = FUN_00789c90(), iVar20 == 0)) {
              FUN_007a630a();
            }
            else if (*(char *)(iVar13 + 0xbd) == '\0') {
              local_30 = (char *)0x778f63;
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x778f1d;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5dd5a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        iVar17 = iVar17 + 1;
      } while (iVar17 < DAT_008776a8);
    }
    iVar17 = 0;
    if (0 < (int)DAT_008776bc) {
      do {
        local_2308[0] = '\0';
        FUN_004ff380();
        FUN_007a630a();
        uVar12 = 0xffffffff;
        pcVar18 = local_150;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            local_30 = (char *)0x7790c6;
            FUN_007a630a();
            FUN_0042b6c9();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_2408;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Build_cost__ICdays__00878974;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779200;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77930e;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779523;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779631;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77973f;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77984d;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77995b;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779a69;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779b7a;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779c88;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779d96;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779ea7;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x779fb5;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a0c3;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a1d4;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a2e5;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a3f6;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a504;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a612;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a723;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a834;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77a945;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77aa56;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77ab67;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77ac75;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77ad83;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrades_to_00878964;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789ce0();
            if (*(int *)(iVar13 + 0xb8) < 0) {
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x77b0cc;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrade_cost__ICdays__00878944;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789ce0();
            if ((*(int *)(iVar13 + 0xb8) < 0) || (iVar20 = FUN_00789ce0(), iVar20 == 0)) {
              FUN_007a630a();
            }
            else if (*(char *)(iVar13 + 0xbd) == '\0') {
              local_30 = (char *)0x77b2e4;
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x77b29e;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f33a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)DAT_008776bc);
    }
    iVar17 = 0;
    if (0 < DAT_008776ac) {
      do {
        local_2308[0] = '\0';
        FUN_004ff300();
        FUN_007a630a();
        uVar12 = 0xffffffff;
        pcVar18 = local_150;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            local_30 = (char *)0x77b447;
            FUN_007a630a();
            FUN_0042b6c9();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_2408;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Build_cost__ICdays__00878974;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77b581;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77b68f;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77b8a4;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77b9b2;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77bac0;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77bbce;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77bcdc;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77bdea;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77bef8;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c009;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c11a;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c228;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c339;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c44a;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c55b;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c66c;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c77a;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c88b;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77c99c;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77caad;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77cbbb;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77ccc9;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77cdda;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77ceeb;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77cffc;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77d10d;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77d21e;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77d32c;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            local_30 = (char *)0x77d43a;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789c90();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrades_to_00878964;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789c90();
            if (*(int *)(iVar13 + 0xb8) < 0) {
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x77d783;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrade_cost__ICdays__00878944;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                      *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789c90();
            if ((*(int *)(iVar13 + 0xb8) < 0) || (iVar20 = FUN_00789c90(), iVar20 == 0)) {
              FUN_007a630a();
            }
            else if (*(char *)(iVar13 + 0xbd) == '\0') {
              local_30 = (char *)0x77d99b;
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x77d955;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x153ea +
                                          *(int *)(extraout_ECX + 0x5df8a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        iVar17 = iVar17 + 1;
      } while (iVar17 < DAT_008776ac);
    }
    iVar17 = 0;
    if (0 < DAT_008776c0) {
      do {
        local_2308[0] = '\0';
        FUN_004ff380();
        FUN_007a630a();
        uVar12 = 0xffffffff;
        pcVar18 = local_150;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            local_30 = (char *)0x77dafe;
            FUN_007a630a();
            FUN_0042b6c9();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_2408;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Build_cost__ICdays__00878974;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77dc38;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77dd46;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77df5b;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e069;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e177;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e285;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e393;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e4a1;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e5af;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e6c0;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e7d1;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e8df;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77e9f0;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77eb01;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77ec12;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77ed23;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77ee31;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77ef42;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f053;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f164;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f272;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f380;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f491;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f5a2;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f6b3;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f7c4;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f8d5;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77f9e3;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            local_30 = (char *)0x77faf1;
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        local_2308[0] = '\0';
        pcVar18 = (char *)FUN_005341fe();
        uVar12 = 0xffffffff;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar13 = 0;
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar21) {
          do {
            FUN_00789ce0();
            FUN_007a630a();
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar21 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar21 == 0) break;
              iVar21 = iVar21 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar13 = iVar13 + 1;
            iVar21 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar13 < iVar21);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrades_to_00878964;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789ce0();
            if (*(int *)(iVar13 + 0xb8) < 0) {
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x77fe3a;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        uVar12 = 0xffffffff;
        pcVar18 = s_Upgrade_cost__ICdays__00878944;
        do {
          pcVar14 = pcVar18;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar14;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        local_2308[0] = '\0';
        iVar21 = 0;
        pcVar18 = local_2308;
        do {
          pcVar25 = pcVar18;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar18 + 1;
          cVar4 = *pcVar18;
          pcVar18 = pcVar25;
        } while (cVar4 != '\0');
        pcVar18 = pcVar14 + -uVar12;
        pcVar14 = pcVar25 + -1;
        for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar14 = pcVar14 + 1;
        }
        iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                      *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4))();
        if (0 < iVar13) {
          do {
            iVar13 = FUN_00789ce0();
            if ((*(int *)(iVar13 + 0xb8) < 0) || (iVar20 = FUN_00789ce0(), iVar20 == 0)) {
              FUN_007a630a();
            }
            else if (*(char *)(iVar13 + 0xbd) == '\0') {
              local_30 = (char *)0x780052;
              FUN_007a630a();
            }
            else {
              local_30 = (char *)0x78000c;
              FUN_007a630a();
            }
            uVar12 = 0xffffffff;
            pcVar18 = local_150;
            do {
              pcVar14 = pcVar18;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar14;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar13 = -1;
            pcVar18 = local_2308;
            do {
              pcVar25 = pcVar18;
              if (iVar13 == 0) break;
              iVar13 = iVar13 + -1;
              pcVar25 = pcVar18 + 1;
              cVar4 = *pcVar18;
              pcVar18 = pcVar25;
            } while (cVar4 != '\0');
            pcVar18 = pcVar14 + -uVar12;
            pcVar14 = pcVar25 + -1;
            for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar18;
              pcVar18 = pcVar18 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar14 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar14 = pcVar14 + 1;
            }
            iVar21 = iVar21 + 1;
            iVar13 = (**(code **)(*(int *)(extraout_ECX + 0x15dc2 +
                                          *(int *)(extraout_ECX + 0x5f56a + iVar17 * 4) * 0x12) + 4)
                     )();
          } while (iVar21 < iVar13);
        }
        FUN_00429a00();
        iVar17 = iVar17 + 1;
      } while (iVar17 < DAT_008776c0);
    }
    FUN_00429a00();
  }
  *(undefined4 *)(extraout_ECX + 0x1a) = 0;
  pvVar7 = operator_new(920000);
  local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
  local_8._0_1_ = 0x15;
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00780a50();
  }
  local_8._0_1_ = 9;
  *(undefined4 *)(extraout_ECX + 0x1c568) = uVar8;
  FUN_0078c960();
  FUN_00429a00();
  local_154 = *(int *)(extraout_ECX + 0x1c57c);
  while (local_154 != 0) {
    puVar9 = (undefined4 *)FUN_0078e3e0();
    if (*(int *)(*(int *)*puVar9 + 0x2e) == 0) {
      FUN_00769150();
      local_30 = (char *)0x780198;
      FUN_00429a00();
      FUN_00767850();
    }
    else {
      local_30 = (char *)0x7801b8;
      FUN_00429a00();
    }
  }
  FUN_00429a00();
  if (DAT_00dc196c != 1) goto LAB_007809c7;
  if (DAT_00dc3a00 == '\0') {
LAB_00780222:
    FUN_007a630a();
    local_30 = local_2508;
    local_34 = (char *)0x780249;
    iVar17 = FUN_007a6615();
    if (iVar17 == 0) {
      GetSystemTime((LPSYSTEMTIME)0x0);
      FUN_00429a00();
      local_34 = (char *)0x0;
      FUN_007a630a();
      local_30 = (char *)0x78029a;
      pvVar7 = operator_new(8);
      local_50 = (double)CONCAT44(pvVar7,(undefined4)local_50);
      local_8._0_1_ = 0x16;
      if (pvVar7 == (void *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)FUN_00426120();
      }
      local_8._0_1_ = 9;
      iVar13 = FUN_00426720();
      FUN_00426380();
      if ((local_34 == DAT_00877690) && ((char *)(iVar13 + -2) == DAT_00877690)) {
        local_34 = local_34 + -1;
        FUN_00426330();
        local_278 = 0;
        local_274 = 0;
        FUN_0078e5b0();
        local_8._0_1_ = 0x17;
        local_270 = 0;
        local_26c = 0;
        FUN_0078e5b0();
        iVar17 = 0;
        local_8._0_1_ = 0x18;
        if (0 < iVar13 + -3) {
          do {
            FUN_00426470();
            FUN_00426470();
            FUN_00426330();
            iVar17 = iVar17 + 1;
          } while (iVar17 < iVar13 + -3);
        }
        local_160 = 0;
        FUN_0078e650();
        local_8._0_1_ = 0x19;
        iVar17 = 0;
        if (0 < (int)local_34) {
          iVar13 = 0;
          uVar28 = 1;
          pcVar18 = local_34;
          do {
            iVar20 = (int)uVar28;
            iVar21 = iVar20;
            if (iVar20 < (int)pcVar18) {
              do {
                local_40 = *(double *)(local_284 + iVar20 * 8) * _DAT_007fa640;
                local_50 = *(double *)(iVar13 + local_284) * _DAT_007fa640;
                fcos((float10)*(double *)(local_294 + iVar20 * 8) * (float10)_DAT_007fa640 -
                     (float10)*(double *)(iVar13 + local_294) * (float10)_DAT_007fa640);
                fcos((float10)local_50);
                fcos((float10)local_40);
                fsin((float10)local_50);
                fsin((float10)local_40);
                fVar26 = (float10)FUN_007a5e20();
                iVar21 = (int)uVar28;
                local_40 = (double)CONCAT44((float)(fVar26 * (float10)_DAT_007fa638),
                                            (undefined4)local_40);
                local_48 = (int *)(int)ROUND((float)(fVar26 * (float10)_DAT_007fa638));
                *(undefined2 *)(local_304 + iVar17 * 2) = local_48._0_2_;
                iVar17 = iVar17 + 1;
                iVar20 = iVar20 + 1;
                pcVar18 = local_34;
              } while (iVar20 < (int)local_34);
            }
            iVar13 = iVar13 + 8;
            uVar28 = (ulonglong)(iVar21 + 1);
          } while (iVar21 < (int)pcVar18);
        }
        FUN_007a630a();
        FUN_00426d70();
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        cVar4 = FUN_00427570();
        if (cVar4 == '\0') {
          FUN_00427330();
          FUN_00427330();
        }
        GetSystemTime(&local_2e4);
        local_30 = (char *)0x7805a9;
        FUN_00429a00();
        if (DAT_00dc4b5e != '\0') {
          local_30 = s_Lat_0_____10f_Lon_0_____10f_00878800;
          local_34 = (char *)0x7805d9;
          FUN_00429a00();
          local_30 = *(char **)(local_284 + -8 + (int)local_34 * 8);
          local_38 = s_Lat__d_____10f_Lon__d_____10f_008787dc;
          local_40 = (double)CONCAT44(0x78060b,(undefined4)local_40);
          FUN_00429a00();
        }
        if (DAT_00dc3a00 == '\0') {
LAB_0078064c:
          FUN_007a630a();
          local_30 = local_2508;
          local_34 = (char *)0x780673;
          iVar17 = FUN_007a6615();
        }
        else {
          local_30 = (char *)0x780632;
          FUN_007a630a();
          local_34 = local_2508;
          local_30 = &DAT_008390e0;
          local_38 = (char *)0x780643;
          iVar17 = FUN_007a6615();
          if (iVar17 == 0) goto LAB_0078064c;
        }
        local_8._0_1_ = 0x19;
        FUN_00426f80();
        local_8._0_1_ = 0x18;
        FUN_0078e6b0();
        local_8._0_1_ = 0x17;
        FUN_0078e610();
        local_8._0_1_ = 9;
        FUN_0078e610();
      }
      else {
        local_30 = DAT_00877690;
        local_34 = s_ERROR___Incorrect_number_of_prov_0087873c;
        local_38 = (char *)0x7806cd;
        FUN_00429a00();
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      if (puVar9 != (undefined4 *)0x0) {
        (**(code **)*puVar9)();
      }
    }
  }
  else {
    local_30 = (char *)0x780204;
    FUN_007a630a();
    local_34 = local_2508;
    local_30 = &DAT_008390e0;
    local_38 = (char *)0x780215;
    iVar17 = FUN_007a6615();
    if (iVar17 == 0) goto LAB_00780222;
  }
  FUN_00429a00();
  if (iVar17 == 0) {
    DAT_00dc196c = 0;
    FUN_00429a00();
  }
  else {
    FUN_007a6429();
    GetSystemTime(&local_2bc);
    local_44 = 0;
    FUN_00429a00();
    FUN_00426d70();
    local_8._0_1_ = 0x1b;
    cVar4 = FUN_004271a0();
    if (((cVar4 == '\0') || (uVar12 = local_44 & 0xffff, (char *)(uVar12 + 1) != DAT_00877690)) ||
       (uVar12 = (int)((uVar12 - 1) * uVar12) >> 1, local_2710 != uVar12 * 2 + 2)) {
      DAT_00dc196c = 0;
      FUN_00429a00();
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    else {
      FUN_0078e1f0();
      FUN_0078e150();
      local_15c = 0;
      FUN_0078e650();
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      cVar4 = FUN_00427220();
      if (cVar4 == '\0') {
        DAT_00dc196c = 0;
        FUN_00429a00();
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      else {
        uVar15 = 0;
        if (uVar12 != 0) {
          do {
            iVar17 = uVar15 * 2;
            uVar15 = uVar15 + 1;
            *(float *)(*(int *)(extraout_ECX + 0x1679e) + -4 + uVar15 * 4) =
                 (float)*(ushort *)(local_2a4 + iVar17) * _DAT_007e543c;
          } while (uVar15 < uVar12);
        }
        FUN_0078e110();
        FUN_0078e070();
        iVar17 = -1;
        iVar13 = 2;
        **(undefined4 **)(extraout_ECX + 0x167ae) = 0;
        *(undefined4 *)(*(int *)(extraout_ECX + 0x167ae) + 4) = 0xffffffff;
        if (2 < (local_44 & 0xffff)) {
          do {
            iVar21 = (local_44 & 0xffff) - iVar13;
            iVar13 = iVar13 + 1;
            iVar17 = iVar17 + 1 + iVar21;
            *(int *)(*(int *)(extraout_ECX + 0x167ae) + -4 + iVar13 * 4) = iVar17;
          } while (iVar13 < (int)(local_44 & 0xffff));
        }
        GetSystemTime(&local_2d0);
        FUN_00429a00();
      }
      FUN_0078e6e0();
      local_8._0_1_ = 0x1b;
      FUN_0078e6b0();
    }
    local_8._0_1_ = 9;
    FUN_00426f80();
  }
LAB_007809c7:
  puVar9 = (undefined4 *)(extraout_ECX + 0x5f9ca);
  for (iVar17 = 0xa2; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  FUN_0078dd90();
  local_8 = 0xffffffff;
  FUN_005349a0();
  ExceptionList = local_10;
  return;
}


