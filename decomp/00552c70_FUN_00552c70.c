// FUN_00552c70 @ 552c70 size=4948

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00552c70(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 uVar12;
  int iVar13;
  undefined1 *puVar14;
  float *pfVar15;
  float *pfVar16;
  bool bVar17;
  float10 fVar18;
  char *pcVar19;
  undefined4 uVar20;
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
  
  puStack_8 = &LAB_007c4f8b;
  local_c = ExceptionList;
  local_70[0] = 0.0;
  local_84[0] = 0;
  local_70[1] = 0.0;
  local_84[1] = 0;
  local_70[2] = 0.0;
  local_84[2] = 0;
  local_70[3] = 0.0;
  local_84[3] = 0;
  local_70[4] = 0.0;
  local_5c[0] = 0x8c;
  local_5c[1] = 0x8c;
  local_5c[2] = 0x8c;
  bVar5 = false;
  local_5c[3] = 0x8c;
  bVar4 = false;
  bVar6 = false;
  local_b0 = 0;
  local_84[4] = 0;
  local_5c[4] = 0x8c;
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
LAB_00552d1b:
  while (iVar8 = FUN_00535490(), iVar8 != 1) {
    if (iVar8 == 2) {
      local_98 = &PTR_LAB_007e378c;
      piVar11 = local_94;
      while (piVar11 != (int *)0x0) {
        piVar2 = (int *)piVar11[2];
        FUN_00796cd8(piVar11);
        piVar11 = piVar2;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar11 = (int *)FUN_00534391();
    if (*piVar11 == 4) {
      FUN_005343dc();
      if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
        if (param_1[0x4c] < 0x8c) {
          uVar20 = 1;
          uVar10 = FUN_00789c90(param_1[0x4c],param_1[0x4e]);
          FUN_004fcfd0(uVar10,uVar20);
        }
        iVar8 = 0;
        local_a8[0] = param_1 + 0x2c;
        local_b0 = 0;
        do {
          iVar13 = *(int *)((int)local_5c + iVar8);
          if ((iVar13 < DAT_008776b0) && (0 < iVar13)) {
            cVar7 = (**(code **)(*param_1 + 0x20))
                              (iVar13,*(undefined4 *)((int)local_84 + iVar8),local_b0);
            if (cVar7 == '\0') {
              if (DAT_00dc4b5e != '\0') {
                iVar1 = *param_2;
                if (*(int *)(&DAT_00d7c830 + param_1[0x4c] * 4) < param_1[0x4f]) {
                  uVar10 = (**(code **)(*param_1 + 0xc))(iVar1 + 0x216,*(int *)(iVar1 + 0x212) + 1);
                  uVar10 = FUN_004ff380(iVar13,uVar10);
                  pcVar19 = s_ERROR___Failed_to_add___s__briga_00852958;
                }
                else {
                  uVar10 = (**(code **)(*param_1 + 0xc))(iVar1 + 0x216,*(int *)(iVar1 + 0x212) + 1);
                  uVar10 = FUN_004ff380(iVar13,uVar10);
                  pcVar19 = s_ERROR___Failed_to_add___s__briga_00852994;
                }
                FUN_00429a00(pcVar19,uVar10);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
            else {
              *local_a8[0] = *(int *)((int)local_70 + iVar8);
              local_b0 = local_b0 + 1;
              local_a8[0] = local_a8[0] + 1;
            }
          }
          iVar8 = iVar8 + 4;
        } while (iVar8 < 0x14);
        if (((!bVar5) && (param_1[0x17] != 0)) &&
           (fVar3 = (*(float *)(*(int *)(param_1[0x17] + 0x244) + 0x86) - _DAT_007e3374) *
                    _DAT_007e4088, (float)param_1[0x40] < fVar3)) {
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          param_1[0x40] = (int)fVar3;
        }
      }
      else {
        if (!bVar6) {
          iVar8 = 0;
          param_1[0x4f] = 0;
          do {
            iVar13 = *(int *)((int)local_5c + iVar8);
            if ((iVar13 < DAT_008776b0) && (0 < iVar13)) {
              iVar1 = *(int *)((int)local_84 + iVar8);
              param_1[param_1[0x4f] + 0x22] = iVar13;
              param_1[param_1[0x4f] + 0x27] = iVar1;
              param_1[param_1[0x4f] + 0x2c] = *(int *)((int)local_70 + iVar8);
              param_1[0x4f] = param_1[0x4f] + 1;
              if (*(int *)(&DAT_00dc002a + iVar13 * 4) == 3) {
                param_1[0xbf] = 0x3f800000;
              }
            }
            iVar8 = iVar8 + 4;
          } while (iVar8 < 0x14);
        }
        if (local_b0 < 4) {
          iVar8 = param_1[0x4c];
          if (iVar8 == 0x8c) {
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
            param_1[0x4d] = (&DAT_00dbd1a2)[iVar8];
            *(bool *)((int)param_1 + 0x15f) = (int)(&DAT_00dbd1a2)[iVar8] < 0xc;
            if (((int)(&DAT_00dbd1a2)[iVar8] < 0x15) || ((&DAT_00dbd1a2)[iVar8] == 0x8c)) {
              cVar7 = '\0';
            }
            else {
              cVar7 = '\x01';
            }
            *(char *)((int)param_1 + 0x161) = cVar7;
            if ((*(char *)((int)param_1 + 0x15f) == '\0') && (cVar7 == '\0')) {
              uVar12 = 1;
            }
            else {
              uVar12 = 0;
            }
            *(undefined1 *)(param_1 + 0x58) = uVar12;
            iVar13 = param_1[0x4d];
            if ((iVar13 == 0x13) || (iVar13 == 0x14)) {
              uVar12 = 1;
            }
            else {
              uVar12 = 0;
            }
            *(undefined1 *)(param_1 + 0x57) = uVar12;
            if ((iVar13 == 0x1a) || (iVar13 == 0x1b)) {
              uVar12 = 1;
            }
            else {
              uVar12 = 0;
            }
            *(undefined1 *)((int)param_1 + 0x15d) = uVar12;
            if ((iVar13 == 0x1c) || (iVar13 == 0x1d)) {
              uVar12 = 1;
            }
            else {
              uVar12 = 0;
            }
            *(undefined1 *)((int)param_1 + 0x15e) = uVar12;
            iVar8 = FUN_00789c90(iVar8,param_1[0x4e]);
            if (iVar8 != 0) {
              param_1[0x50] = *(int *)(iVar8 + 0xb4);
              iVar13 = *(int *)(iVar8 + 0xb8);
              param_1[0x51] = iVar13;
              param_1[0x4b] = 0x3f800000;
              param_1[0x4a] = 0x3f800000;
              *(undefined1 *)((int)param_1 + 0x163) = *(undefined1 *)(iVar8 + 0xbc);
              if ((-1 < iVar13) &&
                 ((*(char *)(iVar8 + 0xbd) != '\0' ||
                  (iVar8 = FUN_00789c90(param_1[0x50],iVar13), iVar8 != 0)))) {
                param_1[0x4b] = *(int *)(iVar8 + 0x34);
                param_1[0x4a] = *(int *)(iVar8 + 0x38);
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
          FUN_00429a50(s_Invalid_or_missing_unit_type_for_0085291c,uVar10);
        }
        uVar10 = (**(code **)(*param_1 + 0xc))
                           (param_1[0x52],*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
        FUN_00429a00(s_ERROR___Invalid_or_missing_unit_t_008528c8,uVar10);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
        local_98 = &PTR_LAB_007e378c;
        piVar11 = local_94;
        while (piVar11 != (int *)0x0) {
          piVar2 = (int *)piVar11[2];
          FUN_00796cd8(piVar11);
          piVar11 = piVar2;
        }
      }
      else {
        if ((-1 < param_1[0x51]) && (0xb < (int)(&DAT_00dbd1a2)[param_1[0x50]])) {
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
          iVar8 = FUN_00789c90(param_1[0x4c],param_1[0x4e]);
          if (iVar8 != 0) {
            param_1[0x50] = *(int *)(iVar8 + 0xb4);
            param_1[0x51] = *(int *)(iVar8 + 0xb8);
            param_1[0x4b] = 0x3f800000;
            param_1[0x4a] = 0x3f800000;
            *(undefined1 *)((int)param_1 + 0x163) = *(undefined1 *)(iVar8 + 0xbc);
            param_1[0x41] = 0;
            if ((-1 < param_1[0x51]) &&
               ((*(char *)(iVar8 + 0xbd) != '\0' ||
                (iVar8 = FUN_00789c90(param_1[0x50],param_1[0x51]), iVar8 != 0)))) {
              param_1[0x4b] = *(int *)(iVar8 + 0x34);
              param_1[0x4a] = *(int *)(iVar8 + 0x38);
            }
          }
        }
        if ((param_1[0x4c] != 0x8c) && (DAT_0087769c < param_1[0x4c])) {
          uVar10 = (**(code **)(*param_1 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
          FUN_00429a00(s_ERROR___Invalid_unit_type_for____008527bc,uVar10);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
          if (DAT_00dc4b5f != '\0') {
            uVar10 = (**(code **)(*param_1 + 0xc))();
            FUN_00429a50(s_Invalid_unit_type_for___s___0085279c,uVar10);
          }
        }
        if ((param_1[0x4d] != 0x8c) && (0x1e < param_1[0x4d])) {
          uVar10 = (**(code **)(*param_1 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
          FUN_00429a00(s_ERROR___Invalid_unit_sub_type_fo_00852764,uVar10);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
          if (DAT_00dc4b5f != '\0') {
            uVar10 = (**(code **)(*param_1 + 0xc))();
            FUN_00429a50(s_Invalid_unit_sub_type_for___s___00852740,uVar10);
          }
        }
        local_98 = &PTR_LAB_007e378c;
        piVar11 = local_94;
        while (piVar11 != (int *)0x0) {
          piVar2 = (int *)piVar11[2];
          FUN_00796cd8(piVar11);
          piVar11 = piVar2;
        }
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar11 = local_94;
  if (DAT_00dc4b5e != '\0') {
    iVar8 = param_2[1];
    for (; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2]) {
      cVar7 = (*(code *)local_98[3])(*piVar11,iVar8);
      if (cVar7 != '\0') {
        if (piVar11 != (int *)0x0) {
          FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    piVar2 = local_90;
    iVar8 = param_2[1];
    local_90 = operator_new(0xe);
    if (local_90 == (int *)0x0) {
      local_90 = (int *)0x0;
    }
    else {
      *local_90 = iVar8;
      local_90[1] = (int)piVar2;
      local_90[2] = 0;
      *(undefined1 *)(local_90 + 3) = 0;
    }
    iVar8 = local_8c + 1;
    bVar17 = local_8c != 0;
    piVar11 = local_90;
    local_8c = iVar8;
    if (bVar17) {
      piVar2[2] = (int)local_90;
      piVar11 = local_94;
    }
  }
  local_94 = piVar11;
  iVar8 = param_2[1];
  if (iVar8 < 0x244) {
    if (iVar8 == 0x243) {
      local_b0 = local_b0 + 1;
      iVar8 = FUN_00535790(param_1 + 0x3b);
      if (iVar8 != 0) {
        FUN_005349b0(s_Error_reading_Common_Float_unit_m_00852a78);
      }
      goto LAB_00552d1b;
    }
    if (iVar8 < 0xcc) {
      if (iVar8 == 0xcb) {
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb6] = (int)(float)fVar18;
        goto LAB_00552d1b;
      }
      switch(iVar8) {
      case 0x32:
        FUN_00427ed0(param_2);
        goto LAB_00552d1b;
      case 0x6d:
        FUN_00427ed0(param_2);
        goto LAB_00552d1b;
      case 0x87:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        if (fVar18 < (float10)_DAT_007e3380) {
          fVar18 = (float10)_DAT_007e3380;
        }
        param_1[0x40] = (int)(float)fVar18;
        bVar5 = true;
        goto LAB_00552d1b;
      case 0xbc:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        if ((float10)(float)param_1[0x3c] < fVar18) {
          fVar18 = (float10)(float)param_1[0x3c];
        }
        param_1[0x3b] = (int)(float)fVar18;
        bVar4 = true;
        goto LAB_00552d1b;
      case 0xbd:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0x3c] = (int)(float)fVar18;
        if ((fVar18 < (float10)(float)param_1[0x3b]) || (!bVar4)) {
          param_1[0x3b] = (int)(float)fVar18;
        }
        goto LAB_00552d1b;
      case 0xbe:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0x3d] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xc1:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0x44] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xc2:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xba] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xc3:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xbb] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xc4:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xbd] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xc5:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xbc] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xc6:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0x42] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 199:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0x43] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 200:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb4] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xc9:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb3] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xca:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb5] = (int)(float)fVar18;
        goto LAB_00552d1b;
      }
    }
    else if (iVar8 < 0xea) {
      if (iVar8 == 0xe9) {
        if (param_2[0x103] == 0x527) {
          FUN_00425ba0(param_2 + 0x104);
        }
        goto LAB_00552d1b;
      }
      switch(iVar8) {
      case 0xcc:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0x45] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xcd:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb7] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xce:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb8] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xcf:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0xb9] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xd0:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0x46] = (int)(float)fVar18;
        goto LAB_00552d1b;
      case 0xd1:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        param_1[0x3e] = (int)(float)fVar18;
        goto LAB_00552d1b;
      }
    }
    else {
      if (0x141 < iVar8) {
        if (iVar8 == 0x145) {
          local_b0 = local_b0 + 1;
          iVar8 = FUN_00535790(param_1 + 0xb3);
          if (iVar8 != 0) {
            FUN_005349b0(s_Error_reading_Land_unit_modifier_00852aa4);
          }
        }
        else if (iVar8 == 0x1dd) {
          fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
          param_1[0x3f] = (int)(float)fVar18;
        }
        else if (iVar8 == 0x20e) {
switchD_005534f0_caseD_517:
          local_5c[0] = FUN_004fe160(param_2 + 0x103);
          if (local_5c[0] == 0x8c) {
            iVar13 = *(int *)(*param_2 + 0x212) + 1;
            iVar8 = *param_2 + 0x216;
            pcVar19 = s_ERROR___Invalid_brigade_type___s_008490f4;
            goto LAB_005531a9;
          }
        }
        else {
          FUN_005349b0(s_Unknown_00852ac8);
        }
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x141) {
        iVar8 = FUN_004fdae0(param_2 + 0x103);
        param_1[0x4c] = iVar8;
        if (iVar8 == 0x8c) {
          iVar13 = *(int *)(*param_2 + 0x212) + 1;
          iVar8 = *param_2 + 0x216;
          pcVar19 = s_ERROR___Invalid_division_type____0084916c;
          goto LAB_005531a9;
        }
        if ((int)(&DAT_00dbd1a2)[iVar8] < 0xc) goto LAB_00552d1b;
        iVar13 = *(int *)(*param_2 + 0x212) + 1;
        iVar8 = *param_2 + 0x216;
        pcVar19 = s_ERROR___Non_land_division___s__d_00852ad4;
        goto LAB_005531a9;
      }
      switch(iVar8) {
      case 0xec:
        iVar8 = FUN_004af6b0(param_2 + 0x104);
        param_1[0x16] = iVar8;
        goto LAB_00552d1b;
      case 0xf4:
        iVar8 = FUN_007a7b3c(param_2 + 0x104);
        param_1[0x52] = iVar8;
        goto LAB_00552d1b;
      case 0xfd:
        FUN_0054f130(param_2);
        goto LAB_00552d1b;
      case 0x129:
        *(bool *)((int)param_1 + 0x155) = param_2[0x103] == 0x111;
        goto LAB_00552d1b;
      }
    }
  }
  else {
    if (0x513 < iVar8) {
      if (0x585 < iVar8) {
        if (iVar8 != 0x682) goto switchD_00552e0f_caseD_33;
        FUN_00427ed0(param_2);
LAB_00553844:
        *(bool *)(param_1 + 0x56) = param_2[0x103] == 0x111;
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x585) {
        iVar8 = FUN_00535790(local_48);
        if (iVar8 == 0) {
          if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
            pfVar15 = local_20;
            pfVar16 = local_70;
            for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
              *pfVar16 = *pfVar15;
              pfVar15 = pfVar15 + 1;
              pfVar16 = pfVar16 + 1;
            }
            iVar8 = 0;
            do {
              uVar10 = __ftol();
              *(undefined4 *)((int)local_5c + iVar8) = uVar10;
              uVar10 = __ftol();
              *(undefined4 *)((int)local_84 + iVar8) = uVar10;
              iVar8 = iVar8 + 4;
            } while (iVar8 < 0x14);
          }
          else {
            bVar6 = true;
            puVar14 = local_34;
            piVar11 = param_1 + 0x27;
            local_a8[0] = (int *)0x5;
            do {
              iVar8 = __ftol();
              piVar11[-5] = iVar8;
              iVar13 = __ftol();
              iVar8 = *(int *)(puVar14 + 0x14);
              *piVar11 = iVar13;
              piVar11[5] = iVar8;
              puVar14 = puVar14 + 4;
              piVar11 = piVar11 + 1;
              local_a8[0] = (int *)((int)local_a8[0] + -1);
            } while (local_a8[0] != (int *)0x0);
            local_a8[0] = (int *)0x0;
          }
        }
        else {
          FUN_005349b0(s_Error_reading_brigades_data__008529ec);
        }
        goto LAB_00552d1b;
      }
      switch(iVar8) {
      case 0x514:
        local_84[2] = FUN_007a7b3c(param_2 + 0x104);
        goto LAB_00552d1b;
      case 0x515:
        local_84[3] = FUN_007a7b3c(param_2 + 0x104);
        goto LAB_00552d1b;
      case 0x516:
        local_84[4] = FUN_007a7b3c(param_2 + 0x104);
        goto LAB_00552d1b;
      case 0x517:
        goto switchD_005534f0_caseD_517;
      case 0x518:
        local_5c[1] = FUN_004fe160(param_2 + 0x103);
        if (local_5c[1] != 0x8c) goto LAB_00552d1b;
        iVar13 = *(int *)(*param_2 + 0x212) + 1;
        iVar8 = *param_2 + 0x216;
        pcVar19 = s_ERROR___Invalid_brigade_type___s_008490f4;
        break;
      case 0x519:
        local_5c[2] = FUN_004fe160(param_2 + 0x103);
        if (local_5c[2] != 0x8c) goto LAB_00552d1b;
        iVar13 = *(int *)(*param_2 + 0x212) + 1;
        iVar8 = *param_2 + 0x216;
        pcVar19 = s_ERROR___Invalid_brigade_type___s_008490f4;
        break;
      case 0x51a:
        local_5c[3] = FUN_004fe160(param_2 + 0x103);
        if (local_5c[3] != 0x8c) goto LAB_00552d1b;
        iVar13 = *(int *)(*param_2 + 0x212) + 1;
        iVar8 = *param_2 + 0x216;
        pcVar19 = s_ERROR___Invalid_brigade_type___s_008490f4;
        break;
      case 0x51b:
        local_5c[4] = FUN_004fe160(param_2 + 0x103);
        if (local_5c[4] != 0x8c) goto LAB_00552d1b;
        iVar13 = *(int *)(*param_2 + 0x212) + 1;
        iVar8 = *param_2 + 0x216;
        pcVar19 = s_ERROR___Invalid_brigade_type___s_008490f4;
        break;
      default:
        goto switchD_00552e0f_caseD_33;
      case 0x51f:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        local_70[1] = (float)fVar18;
        goto LAB_00552d1b;
      case 0x520:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        local_70[2] = (float)fVar18;
        goto LAB_00552d1b;
      case 0x521:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        local_70[3] = (float)fVar18;
        goto LAB_00552d1b;
      case 0x522:
        fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
        local_70[4] = (float)fVar18;
        goto LAB_00552d1b;
      case 0x523:
        FUN_00427ed0(param_2);
        cVar7 = (**(code **)(param_1[2] + 4))(&local_a0);
        if (cVar7 == '\0') {
          iVar8 = *param_2;
          if (DAT_00dc4b5f == '\0') {
            FUN_00429a00(s_ERROR___Land_Division_ID_conflic_00852a0c,local_a0,
                         CONCAT22(uStack_9c,local_9e),iVar8 + 0x216,*(int *)(iVar8 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          else {
            FUN_00429a50(s_ID_conflict__type____d_id___d__a_008490c8,local_a0,
                         CONCAT22(uStack_9c,local_9e),iVar8 + 0x216,*(int *)(iVar8 + 0x212) + 1);
          }
        }
        goto LAB_00552d1b;
      }
LAB_005531a9:
      FUN_00429a00(pcVar19,param_2 + 0x104,iVar8,iVar13);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      goto LAB_00552d1b;
    }
    if (iVar8 == 0x513) {
      local_84[1] = FUN_007a7b3c(param_2 + 0x104);
      goto LAB_00552d1b;
    }
    if (iVar8 < 0x366) {
      if (iVar8 == 0x365) {
        FUN_00427ed0(param_2);
        goto LAB_00552d1b;
      }
      if (iVar8 < 0x342) {
        if (iVar8 == 0x341) {
          iVar8 = FUN_007a7b3c(param_2 + 0x104);
          param_1[0x4e] = iVar8;
        }
        else {
          switch(iVar8) {
          case 0x256:
            local_b0 = local_b0 + 1;
            iVar8 = FUN_005357f0(param_1 + 0x4c);
            if (iVar8 != 0) {
              FUN_005349b0(s_Error_reading_Common_INT_unit_mo_00852a4c);
            }
            break;
          default:
            goto switchD_00552e0f_caseD_33;
          case 0x25d:
            FUN_0054f130(param_2);
            break;
          case 0x29c:
            fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
            param_1[0x41] = (int)(float)fVar18;
            break;
          case 0x29d:
            fVar18 = (float10)FUN_00429d80(param_2 + 0x104);
            local_70[0] = (float)fVar18;
          }
        }
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x342) {
LAB_00553489:
        local_84[0] = FUN_007a7b3c(param_2 + 0x104);
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x363) {
        iVar8 = FUN_007a7b3c(param_2 + 0x104);
        param_1[0x53] = iVar8;
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x364) {
        if (param_2[0x103] == 0x527) {
          FUN_005033b0(param_2 + 0x104);
        }
        goto LAB_00552d1b;
      }
    }
    else if (iVar8 < 0x4a7) {
      if (iVar8 == 0x4a6) {
        *(bool *)((int)param_1 + 0x15a) = param_2[0x103] == 0x111;
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x3d6) {
        uVar9 = FUN_007a7b3c(param_2 + 0x104);
        local_b0 = local_b0 + 1;
        iVar8 = 0;
        do {
          if (0 < (int)(uVar9 & 1 << ((byte)iVar8 & 0x1f))) {
            *(undefined1 *)(iVar8 + 0x154 + (int)param_1) = 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 0x10);
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x3e0) {
        *(bool *)(param_1 + 0x55) = param_2[0x103] == 0x111;
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x3f3) {
        iVar8 = FUN_007a7b3c(param_2 + 0x104);
        param_1[0x54] = iVar8;
        goto LAB_00552d1b;
      }
    }
    else {
      if (iVar8 == 0x4a7) goto LAB_00553844;
      if (iVar8 == 0x4a8) {
        *(bool *)((int)param_1 + 0x159) = param_2[0x103] == 0x111;
        goto LAB_00552d1b;
      }
      if (iVar8 == 0x512) goto LAB_00553489;
    }
  }
switchD_00552e0f_caseD_33:
  FUN_005349b0(s_Unknown_00852ac8);
  goto LAB_00552d1b;
}


