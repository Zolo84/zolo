// FUN_00558010 @ 558010 size=5030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00558010(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined1 uVar14;
  undefined1 *puVar15;
  float *pfVar16;
  float *pfVar17;
  bool bVar18;
  float10 fVar19;
  char *pcVar20;
  undefined4 uVar21;
  int local_b0;
  int *local_a8 [2];
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 uStack_9c;
  undefined **local_98;
  int *local_94;
  int *local_90;
  int local_8c;
  undefined1 local_88;
  int local_84 [5];
  float local_70 [5];
  int local_5c [5];
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  float local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c567b;
  local_c = ExceptionList;
  local_70[0] = 0.0;
  local_5c[0] = 0;
  local_70[1] = 0.0;
  local_5c[1] = 0;
  local_70[2] = 0.0;
  local_5c[2] = 0;
  local_70[3] = 0.0;
  local_5c[3] = 0;
  local_70[4] = 0.0;
  local_84[0] = 0x8c;
  local_84[1] = 0x8c;
  local_84[2] = 0x8c;
  bVar5 = false;
  local_84[3] = 0x8c;
  bVar6 = false;
  bVar4 = false;
  bVar7 = false;
  local_b0 = 0;
  local_5c[4] = 0;
  local_84[4] = 0x8c;
  local_94 = (int *)0x0;
  local_90 = (int *)0x0;
  local_8c = 0;
  local_88 = 0;
  local_98 = &PTR_LAB_007e378c;
  local_4 = 0;
  local_a0 = 0;
  local_9e = 0;
  uStack_9c = 0;
  ExceptionList = &local_c;
LAB_005580bf:
  while (iVar9 = FUN_00535490(), iVar9 != 1) {
    if (iVar9 == 2) {
      local_98 = &PTR_LAB_007e378c;
      piVar13 = local_94;
      while (piVar13 != (int *)0x0) {
        piVar2 = (int *)piVar13[2];
        FUN_00796cd8(piVar13);
        piVar13 = piVar2;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar13 = (int *)FUN_00534391();
    if (*piVar13 == 4) {
      FUN_005343dc();
      if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
        if (param_1[0x4c] < 0x8c) {
          uVar21 = 1;
          uVar10 = FUN_00789c90(param_1[0x4c],param_1[0x4e]);
          FUN_004fcfd0(uVar10,uVar21);
        }
        iVar9 = 0;
        local_a8[0] = param_1 + 0x2c;
        local_b0 = 0;
        do {
          iVar11 = *(int *)((int)local_84 + iVar9);
          if ((iVar11 < DAT_008776b0) && (0 < iVar11)) {
            cVar8 = (**(code **)(*param_1 + 0x20))
                              (iVar11,*(undefined4 *)((int)local_5c + iVar9),local_b0);
            if (cVar8 == '\0') {
              if (DAT_00dc4b5e != '\0') {
                iVar1 = *param_2;
                if (*(int *)(&DAT_00d7c830 + param_1[0x4c] * 4) < param_1[0x4f]) {
                  uVar10 = (**(code **)(*param_1 + 0xc))(iVar1 + 0x216,*(int *)(iVar1 + 0x212) + 1);
                  uVar10 = FUN_004ff380(iVar11,uVar10);
                  pcVar20 = s_ERROR___Failed_to_add___s__briga_00852958;
                }
                else {
                  uVar10 = (**(code **)(*param_1 + 0xc))(iVar1 + 0x216,*(int *)(iVar1 + 0x212) + 1);
                  uVar10 = FUN_004ff380(iVar11,uVar10);
                  pcVar20 = s_ERROR___Failed_to_add___s__briga_00852994;
                }
                FUN_00429a00(pcVar20,uVar10);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
            else {
              *local_a8[0] = *(int *)((int)local_70 + iVar9);
              local_b0 = local_b0 + 1;
              local_a8[0] = local_a8[0] + 1;
            }
          }
          iVar9 = iVar9 + 4;
        } while (iVar9 < 0x14);
        if (((!bVar6) && (param_1[0x17] != 0)) &&
           (fVar3 = (*(float *)(*(int *)(param_1[0x17] + 0x244) + 0x86) - _DAT_007e3374) *
                    _DAT_007e4088, (float)param_1[0x40] < fVar3)) {
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          param_1[0x40] = (int)fVar3;
        }
      }
      else {
        if (!bVar7) {
          iVar9 = 0;
          param_1[0x4f] = 0;
          do {
            iVar11 = *(int *)((int)local_84 + iVar9);
            if ((iVar11 < DAT_008776b0) && (0 < iVar11)) {
              iVar1 = *(int *)((int)local_5c + iVar9);
              param_1[param_1[0x4f] + 0x22] = iVar11;
              param_1[param_1[0x4f] + 0x27] = iVar1;
              param_1[param_1[0x4f] + 0x2c] = *(int *)((int)local_70 + iVar9);
              param_1[0x4f] = param_1[0x4f] + 1;
              if (*(int *)(&DAT_00dc002a + iVar11 * 4) == 2) {
                param_1[0xbe] = 0x3f800000;
              }
            }
            iVar9 = iVar9 + 4;
          } while (iVar9 < 0x14);
        }
        if (local_b0 < 4) {
          iVar9 = param_1[0x4c];
          if (iVar9 == 0x8c) {
            *(undefined1 *)((int)param_1 + 0x162) = 1;
            if (*(int *)((&DAT_00dbf99a)[param_1[0x22]] + 0x18) == 0) {
              *(undefined1 *)((int)param_1 + 0x15f) = 1;
            }
            else if (*(int *)((&DAT_00dbf99a)[param_1[0x22]] + 0x18) == 2) {
              *(undefined1 *)((int)param_1 + 0x161) = 1;
            }
            else {
              *(undefined1 *)(param_1 + 0x58) = 1;
            }
            param_1[0x50] = 0x8c;
            param_1[0x51] = -1;
            param_1[0x4b] = 0x3f800000;
            param_1[0x4a] = 0x3f800000;
            *(undefined1 *)((int)param_1 + 0x162) = 1;
          }
          else {
            param_1[0x4d] = (&DAT_00dbd1a2)[iVar9];
            *(bool *)((int)param_1 + 0x15f) = (int)(&DAT_00dbd1a2)[iVar9] < 0xc;
            if (((int)(&DAT_00dbd1a2)[iVar9] < 0x15) || ((&DAT_00dbd1a2)[iVar9] == 0x8c)) {
              cVar8 = '\0';
            }
            else {
              cVar8 = '\x01';
            }
            *(char *)((int)param_1 + 0x161) = cVar8;
            if ((*(char *)((int)param_1 + 0x15f) == '\0') && (cVar8 == '\0')) {
              uVar14 = 1;
            }
            else {
              uVar14 = 0;
            }
            *(undefined1 *)(param_1 + 0x58) = uVar14;
            iVar11 = param_1[0x4d];
            if ((iVar11 == 0x13) || (iVar11 == 0x14)) {
              uVar14 = 1;
            }
            else {
              uVar14 = 0;
            }
            *(undefined1 *)(param_1 + 0x57) = uVar14;
            if ((iVar11 == 0x1a) || (iVar11 == 0x1b)) {
              uVar14 = 1;
            }
            else {
              uVar14 = 0;
            }
            *(undefined1 *)((int)param_1 + 0x15d) = uVar14;
            if ((iVar11 == 0x1c) || (iVar11 == 0x1d)) {
              uVar14 = 1;
            }
            else {
              uVar14 = 0;
            }
            *(undefined1 *)((int)param_1 + 0x15e) = uVar14;
            iVar9 = FUN_00789c90(iVar9,param_1[0x4e]);
            if (iVar9 != 0) {
              param_1[0x50] = *(int *)(iVar9 + 0xb4);
              iVar11 = *(int *)(iVar9 + 0xb8);
              param_1[0x51] = iVar11;
              param_1[0x4b] = 0x3f800000;
              param_1[0x4a] = 0x3f800000;
              *(undefined1 *)((int)param_1 + 0x163) = *(undefined1 *)(iVar9 + 0xbc);
              if ((-1 < iVar11) &&
                 ((*(char *)(iVar9 + 0xbd) != '\0' ||
                  (iVar9 = FUN_00789c90(param_1[0x50],iVar11), iVar9 != 0)))) {
                param_1[0x4b] = *(int *)(iVar9 + 0x34);
                param_1[0x4a] = *(int *)(iVar9 + 0x38);
              }
            }
          }
        }
      }
      if ((DAT_0088f28e == *(int *)((int)param_1 + 0xe)) && (DAT_0088f28c == (short)param_1[3])) {
        FUN_00428eb0(local_a8);
        local_a8[0] = (int *)CONCAT22(local_a8[0]._2_2_,0x1268);
        (**(code **)(param_1[2] + 4))(local_a8);
      }
      if (((param_1[0x4c] == 0x8c) && (param_1[0x52] != 0)) &&
         (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0')) {
        if (DAT_00dc4b5f != '\0') {
          uVar10 = (**(code **)(*param_1 + 0xc))(param_1[0x52]);
          FUN_00429a50(s_Invalid_or_missing_unit_type_for_00852d80,uVar10);
        }
        uVar10 = (**(code **)(*param_1 + 0xc))
                           (param_1[0x52],*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
        FUN_00429a00(s_ERROR___Invalid_or_missing_unit_t_00852d2c,uVar10);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
        local_98 = &PTR_LAB_007e378c;
        piVar13 = local_94;
        while (piVar13 != (int *)0x0) {
          piVar2 = (int *)piVar13[2];
          FUN_00796cd8(piVar13);
          piVar13 = piVar2;
        }
      }
      else {
        if (-1 < param_1[0x51]) {
          iVar9 = (&DAT_00dbd1a2)[param_1[0x50]];
          if ((iVar9 < 0xc) || ((0x14 < iVar9 && (iVar9 != 0x8c)))) {
            uVar10 = FUN_004fe7e0(param_1[0x50],*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            uVar10 = FUN_005341fe(uVar10);
            uVar10 = FUN_004fe7e0(param_1[0x4c],uVar10);
            uVar10 = FUN_005341fe(uVar10);
            uVar10 = (**(code **)(*param_1 + 0xc))(uVar10);
            FUN_00429a00(s_ERROR___Invalid_upgrade_path_for_00852844,uVar10);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
            if (DAT_00dc4b5f != '\0') {
              uVar10 = FUN_004fe7e0(param_1[0x50]);
              uVar10 = FUN_005341fe(uVar10);
              uVar10 = FUN_004fe7e0(param_1[0x4c],uVar10);
              uVar10 = FUN_005341fe(uVar10);
              uVar10 = (**(code **)(*param_1 + 0xc))(uVar10);
              FUN_00429a50(s_Invalid_upgrade_path_for___s____c_008527f0,uVar10);
            }
            iVar9 = FUN_00789c90(param_1[0x4c],param_1[0x4e]);
            if (iVar9 != 0) {
              param_1[0x50] = *(int *)(iVar9 + 0xb4);
              param_1[0x51] = *(int *)(iVar9 + 0xb8);
              param_1[0x4b] = 0x3f800000;
              param_1[0x4a] = 0x3f800000;
              *(undefined1 *)((int)param_1 + 0x163) = *(undefined1 *)(iVar9 + 0xbc);
              param_1[0x41] = 0;
              if ((-1 < param_1[0x51]) &&
                 ((*(char *)(iVar9 + 0xbd) != '\0' ||
                  (iVar9 = FUN_00789c90(param_1[0x50],param_1[0x51]), iVar9 != 0)))) {
                param_1[0x4b] = *(int *)(iVar9 + 0x34);
                param_1[0x4a] = *(int *)(iVar9 + 0x38);
              }
            }
          }
        }
        if ((param_1[0x4c] != 0x8c) && (DAT_0087769c < param_1[0x4c])) {
          uVar10 = (**(code **)(*param_1 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
          FUN_00429a00(s_ERROR___Invalid_unit_type_for____00852b58,uVar10);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
          if (DAT_00dc4b5f != '\0') {
            uVar10 = (**(code **)(*param_1 + 0xc))();
            FUN_00429a50(s_Invalid_unit_type_for___s___0085279c,uVar10);
          }
        }
        if ((param_1[0x4d] != 0x8c) && (0x1e < param_1[0x4d])) {
          uVar10 = (**(code **)(*param_1 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
          FUN_00429a00(s_ERROR___Invalid_unit_sub_type_fo_00852b1c,uVar10);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
          if (DAT_00dc4b5f != '\0') {
            uVar10 = (**(code **)(*param_1 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            FUN_00429a50(s_Invalid_unit_sub_type_for___s__i_00852cf8,uVar10);
          }
        }
        local_98 = &PTR_LAB_007e378c;
        piVar13 = local_94;
        while (piVar13 != (int *)0x0) {
          piVar2 = (int *)piVar13[2];
          FUN_00796cd8(piVar13);
          piVar13 = piVar2;
        }
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar13 = local_94;
  if (DAT_00dc4b5e != '\0') {
    iVar9 = param_2[1];
    for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[2]) {
      cVar8 = (*(code *)local_98[3])(*piVar13,iVar9);
      if (cVar8 != '\0') {
        if (piVar13 != (int *)0x0) {
          FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    piVar2 = local_90;
    iVar9 = param_2[1];
    local_90 = operator_new(0xe);
    if (local_90 == (int *)0x0) {
      local_90 = (int *)0x0;
    }
    else {
      *local_90 = iVar9;
      local_90[1] = (int)piVar2;
      local_90[2] = 0;
      *(undefined1 *)(local_90 + 3) = 0;
    }
    iVar9 = local_8c + 1;
    bVar18 = local_8c != 0;
    piVar13 = local_90;
    local_8c = iVar9;
    if (bVar18) {
      piVar2[2] = (int)local_90;
      piVar13 = local_94;
    }
  }
  local_94 = piVar13;
  iVar9 = param_2[1];
  if (iVar9 < 0x29d) {
    if (iVar9 == 0x29c) {
      fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
      param_1[0x41] = (int)(float)fVar19;
      goto LAB_005580bf;
    }
    if (iVar9 < 0xd4) {
      if (iVar9 == 0xd3) {
        fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb5] = (int)(float)fVar19;
      }
      else {
        switch(iVar9) {
        case 0x32:
          FUN_00427ed0(param_2);
          break;
        default:
          goto switchD_005581b3_caseD_33;
        case 0x6d:
          FUN_00427ed0(param_2);
          break;
        case 0x87:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          if (fVar19 < (float10)_DAT_007e3380) {
            fVar19 = (float10)_DAT_007e3380;
          }
          param_1[0x40] = (int)(float)fVar19;
          bVar6 = true;
          break;
        case 0xbc:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x3b] = (int)(float)fVar19;
          bVar4 = true;
          break;
        case 0xbd:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x3c] = (int)(float)fVar19;
          if ((fVar19 < (float10)(float)param_1[0x3b]) || (!bVar4)) {
            param_1[0x3b] = (int)(float)fVar19;
          }
          break;
        case 0xbe:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x3d] = (int)(float)fVar19;
          break;
        case 0xc1:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x44] = (int)(float)fVar19;
          break;
        case 0xc6:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x42] = (int)(float)fVar19;
          break;
        case 199:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x43] = (int)(float)fVar19;
          break;
        case 0xcc:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x45] = (int)(float)fVar19;
          break;
        case 0xcd:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0xb8] = (int)(float)fVar19;
          break;
        case 0xce:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0xb9] = (int)(float)fVar19;
          break;
        case 0xd0:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x46] = (int)(float)fVar19;
          break;
        case 0xd1:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x3e] = (int)(float)fVar19;
          break;
        case 0xd2:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0xb4] = (int)(float)fVar19;
        }
      }
      goto LAB_005580bf;
    }
    if (iVar9 < 0xf5) {
      if (iVar9 == 0xf4) {
        iVar9 = FUN_007a7b3c(param_2 + 0x104);
        param_1[0x52] = iVar9;
        goto LAB_005580bf;
      }
      switch(iVar9) {
      case 0xd5:
        fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb6] = (int)(float)fVar19;
        goto LAB_005580bf;
      case 0xd6:
        fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb7] = (int)(float)fVar19;
        goto LAB_005580bf;
      case 0xd7:
        fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xba] = (int)(float)fVar19;
        goto LAB_005580bf;
      case 0xd8:
        fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xbc] = (int)(float)fVar19;
        goto LAB_005580bf;
      case 0xe0:
        fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xbb] = (int)(float)fVar19;
        goto LAB_005580bf;
      case 0xe9:
        if (param_2[0x103] == 0x527) {
          FUN_00425ba0(param_2 + 0x104);
        }
        goto LAB_005580bf;
      case 0xec:
        iVar9 = FUN_004af6b0(param_2 + 0x104);
        param_1[0x16] = iVar9;
        goto LAB_005580bf;
      }
    }
    else {
      if (iVar9 < 0x1de) {
        if (iVar9 == 0x1dd) {
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x3f] = (int)(float)fVar19;
        }
        else if (iVar9 == 0xfd) {
          FUN_0054f130(param_2);
        }
        else if (iVar9 == 0x141) {
          iVar9 = FUN_004fdae0(param_2 + 0x103);
          param_1[0x4c] = iVar9;
          if (iVar9 == 0x8c) {
            iVar9 = *param_2;
            iVar11 = *(int *)(iVar9 + 0x212);
            pcVar20 = s_ERROR___Invalid_division_type____0084916c;
LAB_0055854c:
            FUN_00429a00(pcVar20,param_2 + 0x104,iVar9 + 0x216,iVar11 + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            iVar9 = (&DAT_00dbd1a2)[iVar9];
            if ((iVar9 < 0xc) || ((0x14 < iVar9 && (iVar9 != 0x8c)))) {
              iVar9 = *param_2;
              iVar11 = *(int *)(iVar9 + 0x212);
              pcVar20 = s_ERROR___Non_air_division___s__de_00852df8;
              goto LAB_0055854c;
            }
          }
          if (bVar5) {
            iVar9 = param_1[0x4c];
            iVar11 = param_1[0x4e];
            uVar12 = (uint)(iVar9 < 0x8c);
            goto LAB_00558582;
          }
        }
        else {
          if (iVar9 != 0x144) goto switchD_005581b3_caseD_33;
          local_b0 = local_b0 + 1;
          iVar9 = FUN_00535790(param_1 + 0xb4);
          if (iVar9 != 0) {
            FUN_005349b0(s_Error_reading_Air_unit_modifiers_00852e40);
          }
        }
        goto LAB_005580bf;
      }
      if (iVar9 == 0x20e) goto switchD_00558880_caseD_517;
      if (iVar9 == 0x243) {
        local_b0 = local_b0 + 1;
        iVar9 = FUN_00535790(param_1 + 0x3b);
        if (iVar9 != 0) {
          FUN_005349b0(s_Error_reading_Common_unit_modifi_00852c64);
        }
        goto LAB_005580bf;
      }
      if (iVar9 == 0x256) {
        local_b0 = local_b0 + 1;
        iVar9 = FUN_005357f0(param_1 + 0x4c);
        if (iVar9 != 0) {
          FUN_005349b0(s_Error_reading_Common_INT_unit_mo_00852a4c);
        }
        goto LAB_005580bf;
      }
    }
  }
  else if (iVar9 < 0x515) {
    if (iVar9 == 0x514) {
      local_5c[2] = FUN_007a7b3c(param_2 + 0x104);
      goto LAB_005580bf;
    }
    if (iVar9 < 0x3d7) {
      if (iVar9 == 0x3d6) {
        uVar12 = FUN_007a7b3c(param_2 + 0x104);
        local_b0 = local_b0 + 1;
        iVar9 = 0;
        do {
          if (0 < (int)(uVar12 & 1 << ((byte)iVar9 & 0x1f))) {
            *(undefined1 *)(iVar9 + 0x154 + (int)param_1) = 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x10);
      }
      else {
        switch(iVar9) {
        case 0x29d:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          local_70[0] = (float)fVar19;
          break;
        default:
          goto switchD_005581b3_caseD_33;
        case 0x341:
          iVar11 = FUN_007a7b3c(param_2 + 0x104);
          param_1[0x4e] = iVar11;
          iVar9 = param_1[0x4c];
          bVar5 = true;
          if (iVar9 < 0x8c) {
            uVar12 = 1;
LAB_00558582:
            uVar10 = FUN_00789c90(iVar9,iVar11);
            FUN_004fcfd0(uVar10,uVar12);
          }
          break;
        case 0x342:
switchD_0055868e_caseD_342:
          local_5c[0] = FUN_007a7b3c(param_2 + 0x104);
          break;
        case 0x363:
          iVar9 = FUN_007a7b3c(param_2 + 0x104);
          param_1[0x53] = iVar9;
          break;
        case 0x364:
          if (param_2[0x103] == 0x527) {
            FUN_005033b0(param_2 + 0x104);
          }
          break;
        case 0x365:
          FUN_00427ed0(param_2);
          break;
        case 0x38b:
          *(bool *)((int)param_1 + 0x15b) = param_2[0x103] == 0x111;
        }
      }
      goto LAB_005580bf;
    }
    if (iVar9 < 0x4a8) {
      if (iVar9 == 0x4a7) goto LAB_00558c1c;
      if (iVar9 == 0x3e0) {
        *(bool *)(param_1 + 0x55) = param_2[0x103] == 0x111;
      }
      else if (iVar9 == 0x3f3) {
        iVar9 = FUN_007a7b3c(param_2 + 0x104);
        param_1[0x54] = iVar9;
      }
      else {
        if (iVar9 != 0x4a6) goto switchD_005581b3_caseD_33;
        *(bool *)((int)param_1 + 0x15a) = param_2[0x103] == 0x111;
      }
      goto LAB_005580bf;
    }
    if (iVar9 == 0x4a8) {
      *(bool *)((int)param_1 + 0x159) = param_2[0x103] == 0x111;
      goto LAB_005580bf;
    }
    if (iVar9 == 0x512) goto switchD_0055868e_caseD_342;
    if (iVar9 == 0x513) {
      local_5c[1] = FUN_007a7b3c(param_2 + 0x104);
      goto LAB_005580bf;
    }
  }
  else {
    if (iVar9 < 0x586) {
      if (iVar9 == 0x585) {
        iVar9 = FUN_00535790(local_48);
        if (iVar9 == 0) {
          if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
            pfVar16 = local_20;
            pfVar17 = local_70;
            for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pfVar17 = *pfVar16;
              pfVar16 = pfVar16 + 1;
              pfVar17 = pfVar17 + 1;
            }
            iVar9 = 0;
            do {
              uVar10 = __ftol();
              *(undefined4 *)((int)local_84 + iVar9) = uVar10;
              uVar10 = __ftol();
              *(undefined4 *)((int)local_5c + iVar9) = uVar10;
              iVar9 = iVar9 + 4;
            } while (iVar9 < 0x14);
          }
          else {
            bVar7 = true;
            puVar15 = local_34;
            piVar13 = param_1 + 0x27;
            local_a8[0] = (int *)0x5;
            do {
              iVar9 = __ftol();
              piVar13[-5] = iVar9;
              iVar9 = __ftol();
              *piVar13 = iVar9;
              piVar13[5] = *(int *)(puVar15 + 0x14);
              puVar15 = puVar15 + 4;
              piVar13 = piVar13 + 1;
              local_a8[0] = (int *)((int)local_a8[0] + -1);
            } while (local_a8[0] != (int *)0x0);
            local_a8[0] = (int *)0x0;
          }
        }
        else {
          FUN_005349b0(s_Error_reading_brigades_data__008529ec);
        }
      }
      else {
        switch(iVar9) {
        case 0x515:
          local_5c[3] = FUN_007a7b3c(param_2 + 0x104);
          break;
        case 0x516:
          local_5c[4] = FUN_007a7b3c(param_2 + 0x104);
          break;
        case 0x517:
switchD_00558880_caseD_517:
          local_84[0] = FUN_004fe160(param_2 + 0x103);
          if (local_84[0] == 0x8c) {
            FUN_00429a00(s_ERROR___Invalid_brigade_type___s_008490f4,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        case 0x518:
          local_84[1] = FUN_004fe160(param_2 + 0x103);
          if (local_84[1] == 0x8c) {
            FUN_00429a00(s_ERROR___Invalid_brigade_type___s_008490f4,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        case 0x519:
          local_84[2] = FUN_004fe160(param_2 + 0x103);
          if (local_84[2] == 0x8c) {
            FUN_00429a00(s_ERROR___Invalid_brigade_type___s_008490f4,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        case 0x51a:
          local_84[3] = FUN_004fe160(param_2 + 0x103);
          if (local_84[3] == 0x8c) {
            FUN_00429a00(s_ERROR___Invalid_brigade_type___s_008490f4,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        case 0x51b:
          local_84[4] = FUN_004fe160(param_2 + 0x103);
          if (local_84[4] == 0x8c) {
            FUN_00429a00(s_ERROR___Invalid_brigade_type___s_008490f4,param_2 + 0x104,
                         *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        default:
          goto switchD_005581b3_caseD_33;
        case 0x51f:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          local_70[1] = (float)fVar19;
          break;
        case 0x520:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          local_70[2] = (float)fVar19;
          break;
        case 0x521:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          local_70[3] = (float)fVar19;
          break;
        case 0x522:
          fVar19 = (float10)FUN_00429d80(param_2 + 0x104);
          local_70[4] = (float)fVar19;
          break;
        case 0x523:
          FUN_00427ed0(param_2);
          cVar8 = (**(code **)(param_1[2] + 4))(&local_a0);
          if (cVar8 == '\0') {
            iVar9 = *param_2;
            if (DAT_00dc4b5f == '\0') {
              FUN_00429a00(s_ERROR___Air_Division_ID_conflict_00852db8,local_a0,
                           CONCAT22(uStack_9c,local_9e),iVar9 + 0x216,*(int *)(iVar9 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            else {
              FUN_00429a50(s_ID_conflict__type____d_id___d__a_008490c8,local_a0,
                           CONCAT22(uStack_9c,local_9e),iVar9 + 0x216,*(int *)(iVar9 + 0x212) + 1);
            }
          }
        }
      }
      goto LAB_005580bf;
    }
    if (iVar9 == 0x682) {
      FUN_00427ed0(param_2);
LAB_00558c1c:
      *(bool *)(param_1 + 0x56) = param_2[0x103] == 0x111;
      goto LAB_005580bf;
    }
  }
switchD_005581b3_caseD_33:
  FUN_005349b0(s_Unknown_00852ac8);
  goto LAB_005580bf;
}


