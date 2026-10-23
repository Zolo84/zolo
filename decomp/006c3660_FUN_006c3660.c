// FUN_006c3660 @ 6c3660 size=3890

undefined4 __thiscall FUN_006c3660(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  char *pcVar13;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d8363;
  local_c = ExceptionList;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_006c36a0:
  do {
    while (iVar5 = FUN_00535490(), iVar5 != 1) {
      if (iVar5 == 2) {
        while (local_1c != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = puVar1;
        }
        ExceptionList = local_c;
        return 0;
      }
      piVar10 = (int *)FUN_00534391();
      if (*piVar10 == 4) {
        FUN_005343dc();
        while (local_1c != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = puVar1;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    puVar1 = local_1c;
    puVar7 = local_18;
    if (DAT_00dc4b5e != '\0') {
      iVar5 = param_2[1];
      for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
        cVar4 = (*(code *)PTR_FUN_007e3798)(*puVar1,iVar5);
        if (cVar4 != '\0') {
          if (puVar1 != (undefined4 *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar5 = param_2[1];
      pvVar6 = operator_new(0xe);
      local_4._0_1_ = 1;
      if (pvVar6 == (void *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)FUN_0049a7a0(iVar5,local_18,0);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      iVar5 = local_14 + 1;
      bVar11 = local_14 != 0;
      puVar1 = puVar7;
      local_14 = iVar5;
      if (bVar11) {
        local_18[2] = puVar7;
        puVar1 = local_1c;
      }
    }
    local_18 = puVar7;
    local_1c = puVar1;
    iVar5 = param_2[1];
    if (iVar5 < 0x450) {
      if (iVar5 == 0x44f) {
        uVar8 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x2e) = uVar8;
        goto LAB_006c36a0;
      }
      if (0x41c < iVar5) {
        switch(iVar5) {
        case 0x41d:
          iVar5 = param_2[0x103];
          if (iVar5 < 0x139) {
            if (iVar5 == 0x138) {
              *(undefined4 *)(param_1 + 0x9e) = 2;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x111) {
              *(undefined4 *)(param_1 + 0x9e) = 0;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x112) {
              *(undefined4 *)(param_1 + 0x9e) = 1;
              goto LAB_006c36a0;
            }
          }
          else if (iVar5 == 0x455) {
            *(undefined4 *)(param_1 + 0x9e) = 3;
            goto LAB_006c36a0;
          }
          if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s_ERROR___Invalid_construction_set_0086b2f8,param_2 + 0x104);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          *(undefined4 *)(param_1 + 0x9e) = 1;
          goto LAB_006c36a0;
        case 0x41e:
          uVar8 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x96) = uVar8;
          goto LAB_006c36a0;
        case 0x41f:
          iVar5 = FUN_007a7b3c(param_2 + 0x104);
          *(int *)(param_1 + 0x9a) = iVar5;
          if (DAT_00dc4b5e == '\0') goto LAB_006c36a0;
          if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
            FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086b220,iVar5,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
            goto LAB_006c36a0;
          }
          iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
          if ((iVar2 != 8) && (iVar2 != 9)) goto LAB_006c36a0;
          uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))
                            (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
          uVar8 = *(undefined4 *)(param_1 + 0x9a);
          pcVar13 = s_ERROR___Specified_province_ID____0086b284;
          break;
        case 0x420:
          uVar8 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0xa2) = uVar8;
          goto LAB_006c36a0;
        case 0x421:
          iVar5 = FUN_007a7b3c(param_2 + 0x104);
          *(int *)(param_1 + 0xa6) = iVar5;
          if (DAT_00dc4b5e == '\0') goto LAB_006c36a0;
          if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
            FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086b150,iVar5,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
            goto LAB_006c36a0;
          }
          iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
          if ((iVar2 != 8) && (iVar2 != 9)) goto LAB_006c36a0;
          uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))
                            (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
          uVar8 = *(undefined4 *)(param_1 + 0xa6);
          pcVar13 = s_ERROR___Specified_province_ID____0086b1b0;
          break;
        default:
          goto switchD_006c3bc7_caseD_422;
        case 0x44d:
          fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 4) = (float)fVar12;
          goto LAB_006c36a0;
        case 0x44e:
          uVar8 = FUN_007a7b3c(param_2 + 0x104);
          *(undefined4 *)(param_1 + 0x14) = uVar8;
          goto LAB_006c36a0;
        }
        FUN_00429a00(pcVar13,uVar8,uVar9);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
        goto LAB_006c36a0;
      }
      if (iVar5 == 0x41c) {
        iVar5 = param_2[0x103];
        if (iVar5 < 0x139) {
          if (iVar5 == 0x138) {
            *(undefined4 *)(param_1 + 0x92) = 2;
            goto LAB_006c36a0;
          }
          if (iVar5 == 0x111) {
            *(undefined4 *)(param_1 + 0x92) = 0;
            goto LAB_006c36a0;
          }
          if (iVar5 == 0x112) {
            *(undefined4 *)(param_1 + 0x92) = 1;
            goto LAB_006c36a0;
          }
        }
        else if (iVar5 == 0x455) {
          *(undefined4 *)(param_1 + 0x92) = 3;
          goto LAB_006c36a0;
        }
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00(s_ERROR___Invalid_construction_set_0086b2f8,param_2 + 0x104);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        *(undefined4 *)(param_1 + 0x92) = 1;
        goto LAB_006c36a0;
      }
      if (iVar5 < 0x419) {
        if (iVar5 == 0x418) {
          iVar5 = param_2[0x103];
          if (iVar5 < 0x139) {
            if (iVar5 == 0x138) {
              *(undefined4 *)(param_1 + 0xaa) = 2;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x111) {
              *(undefined4 *)(param_1 + 0xaa) = 0;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x112) {
              *(undefined4 *)(param_1 + 0xaa) = 1;
              goto LAB_006c36a0;
            }
          }
          else if (iVar5 == 0x455) {
            *(undefined4 *)(param_1 + 0xaa) = 3;
            goto LAB_006c36a0;
          }
          if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s_ERROR___Invalid_construction_set_0086b2f8,param_2 + 0x104);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          *(undefined4 *)(param_1 + 0xaa) = 1;
          goto LAB_006c36a0;
        }
        if (iVar5 < 0x379) {
          if (iVar5 == 0x378) {
            iVar5 = param_2[0x103];
            if (iVar5 < 0x139) {
              if (iVar5 == 0x138) {
                *(undefined4 *)(param_1 + 0x10) = 2;
                goto LAB_006c36a0;
              }
              if (iVar5 == 0x111) {
                *(undefined4 *)(param_1 + 0x10) = 0;
                goto LAB_006c36a0;
              }
              if (iVar5 == 0x112) {
                *(undefined4 *)(param_1 + 0x10) = 1;
                goto LAB_006c36a0;
              }
            }
            else if (iVar5 == 0x455) {
              *(undefined4 *)(param_1 + 0x10) = 3;
              goto LAB_006c36a0;
            }
            if (DAT_00dc4b5e != '\0') {
              FUN_00429a00(s_ERROR___Invalid_construction_set_0086b2f8,param_2 + 0x104);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            *(undefined4 *)(param_1 + 0x10) = 1;
            goto LAB_006c36a0;
          }
          if (iVar5 == 0x10c) {
            uVar8 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined4 *)(param_1 + 8) = uVar8;
            goto LAB_006c36a0;
          }
          if (iVar5 == 0x10d) {
            uVar8 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined4 *)(param_1 + 0xc) = uVar8;
            goto LAB_006c36a0;
          }
        }
        else if (iVar5 == 0x417) {
          iVar5 = param_2[0x103];
          if (iVar5 < 0x139) {
            if (iVar5 == 0x138) {
              *(undefined4 *)(param_1 + 0x2a) = 2;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x111) {
              *(undefined4 *)(param_1 + 0x2a) = 0;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x112) {
              *(undefined4 *)(param_1 + 0x2a) = 1;
              goto LAB_006c36a0;
            }
          }
          else if (iVar5 == 0x455) {
            *(undefined4 *)(param_1 + 0x2a) = 3;
            goto LAB_006c36a0;
          }
          if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s_ERROR___Invalid_construction_set_0086b2f8,param_2 + 0x104);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          *(undefined4 *)(param_1 + 0x2a) = 1;
          goto LAB_006c36a0;
        }
      }
      else {
        if (iVar5 == 0x419) {
          iVar5 = param_2[0x103];
          if (iVar5 < 0x139) {
            if (iVar5 == 0x138) {
              *(undefined4 *)(param_1 + 0x5e) = 2;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x111) {
              *(undefined4 *)(param_1 + 0x5e) = 0;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x112) {
              *(undefined4 *)(param_1 + 0x5e) = 1;
              goto LAB_006c36a0;
            }
          }
          else if (iVar5 == 0x455) {
            *(undefined4 *)(param_1 + 0x5e) = 3;
            goto LAB_006c36a0;
          }
          if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s_ERROR___Invalid_construction_set_0086b2f8,param_2 + 0x104);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          *(undefined4 *)(param_1 + 0x5e) = 1;
          goto LAB_006c36a0;
        }
        if (iVar5 == 0x41a) {
          iVar5 = param_2[0x103];
          if (iVar5 < 0x139) {
            if (iVar5 == 0x138) {
              *(undefined4 *)(param_1 + 0x78) = 2;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x111) {
              *(undefined4 *)(param_1 + 0x78) = 0;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x112) {
              *(undefined4 *)(param_1 + 0x78) = 1;
              goto LAB_006c36a0;
            }
          }
          else if (iVar5 == 0x455) {
            *(undefined4 *)(param_1 + 0x78) = 3;
            goto LAB_006c36a0;
          }
          if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s_ERROR___Invalid_construction_set_0086b2f8,param_2 + 0x104);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          *(undefined4 *)(param_1 + 0x78) = 1;
          goto LAB_006c36a0;
        }
        if (iVar5 == 0x41b) {
          iVar5 = param_2[0x103];
          if (iVar5 < 0x139) {
            if (iVar5 == 0x138) {
              *(undefined4 *)(param_1 + 0x44) = 2;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x111) {
              *(undefined4 *)(param_1 + 0x44) = 0;
              goto LAB_006c36a0;
            }
            if (iVar5 == 0x112) {
              *(undefined4 *)(param_1 + 0x44) = 1;
              goto LAB_006c36a0;
            }
          }
          else if (iVar5 == 0x455) {
            *(undefined4 *)(param_1 + 0x44) = 3;
            goto LAB_006c36a0;
          }
          if (DAT_00dc4b5e != '\0') {
            FUN_00429a00(s_ERROR___Invalid_construction_set_0086b2f8,param_2 + 0x104);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          *(undefined4 *)(param_1 + 0x44) = 1;
          goto LAB_006c36a0;
        }
      }
switchD_006c3bc7_caseD_422:
      FUN_005349b0(s_unknown_lhs_in_construction_pref_0086aa40);
      while (local_1c != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = puVar1;
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    switch(iVar5) {
    case 0x450:
      (**(code **)(*(int *)(param_1 + 0xae) + 0x10))();
      FUN_005358c0(param_1 + 0xae);
      break;
    case 0x451:
      uVar8 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0xc0) = uVar8;
      break;
    case 0x452:
      *(bool *)(param_1 + 0xd6) = param_2[0x103] == 0x111;
      break;
    case 0x453:
      uVar8 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0xd8) = uVar8;
      break;
    case 0x454:
      uVar8 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0xdc) = uVar8;
      break;
    default:
      goto switchD_006c3bc7_caseD_422;
    case 0x457:
      (**(code **)(*(int *)(param_1 + 0x18) + 0x10))();
      FUN_00535600(param_1 + 0x18);
      if (DAT_00dc4b5e != '\0') {
        piVar10 = *(int **)(param_1 + 0x1c);
joined_r0x006c3e7c:
        if (piVar10 != (int *)0x0) {
          piVar3 = (int *)piVar10[2];
          iVar5 = *piVar10;
          piVar10 = piVar3;
          if ((0 < iVar5) && (iVar5 < DAT_00877690)) goto code_r0x006c3e95;
          FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086b090,iVar5,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          goto LAB_006c3efd;
        }
      }
      break;
    case 0x458:
      (**(code **)(*(int *)(param_1 + 0x32) + 0x10))();
      FUN_00535600(param_1 + 0x32);
      if (DAT_00dc4b5e != '\0') {
        piVar10 = *(int **)(param_1 + 0x36);
        while (piVar10 != (int *)0x0) {
          piVar3 = (int *)piVar10[2];
          iVar5 = *piVar10;
          piVar10 = piVar3;
          if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
            FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086aecc,iVar5,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            goto LAB_006c401e;
          }
          iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
          piVar3 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
          if ((iVar2 == 8) || (iVar2 == 9)) {
            uVar8 = (**(code **)(*piVar3 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            FUN_00429a00(s_ERROR___Specified_province_ID____0086b01c,iVar5,uVar8);
            goto LAB_006c401e;
          }
          if ((char)piVar3[0x11c] == '\0') {
            uVar8 = (**(code **)(*piVar3 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            FUN_00429a00(s_ERROR___Specified_province_ID____0086afa4,iVar5,uVar8);
            goto LAB_006c401e;
          }
          if (*(int *)((int)piVar3 + 0x182) == 0) {
            uVar8 = (**(code **)(*piVar3 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            FUN_00429a00(s_ERROR___Specified_province_ID____0086af30,iVar5,uVar8);
LAB_006c401e:
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
      }
      break;
    case 0x459:
      uVar8 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x48) = uVar8;
      break;
    case 0x45a:
      (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))();
      FUN_00535600(param_1 + 0x4c);
      if (DAT_00dc4b5e != '\0') {
        piVar10 = *(int **)(param_1 + 0x50);
joined_r0x006c406d:
        if (piVar10 != (int *)0x0) {
          piVar3 = (int *)piVar10[2];
          iVar5 = *piVar10;
          piVar10 = piVar3;
          if ((0 < iVar5) && (iVar5 < DAT_00877690)) goto code_r0x006c4086;
          FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086ae04,iVar5,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          goto LAB_006c40ed;
        }
      }
      break;
    case 0x45b:
      uVar8 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x62) = uVar8;
      break;
    case 0x45c:
      (**(code **)(*(int *)(param_1 + 0x66) + 0x10))();
      FUN_00535600(param_1 + 0x66);
      if (DAT_00dc4b5e != '\0') {
        piVar10 = *(int **)(param_1 + 0x6a);
joined_r0x006c413c:
        if (piVar10 != (int *)0x0) {
          piVar3 = (int *)piVar10[2];
          iVar5 = *piVar10;
          piVar10 = piVar3;
          if ((0 < iVar5) && (iVar5 < DAT_00877690)) goto code_r0x006c4155;
          FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086ad34,iVar5,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          goto LAB_006c41bc;
        }
      }
      break;
    case 0x45d:
      uVar8 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x7c) = uVar8;
      break;
    case 0x45e:
      (**(code **)(*(int *)(param_1 + 0x80) + 0x10))();
      FUN_00535600(param_1 + 0x80);
      if (DAT_00dc4b5e != '\0') {
        piVar10 = *(int **)(param_1 + 0x84);
        while (piVar10 != (int *)0x0) {
          piVar3 = (int *)piVar10[2];
          iVar5 = *piVar10;
          piVar10 = piVar3;
          if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
            FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086abec,iVar5,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            goto LAB_006c42c8;
          }
          piVar3 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
          iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
          if ((iVar2 == 8) || (iVar2 == 9)) {
            uVar8 = (**(code **)(*piVar3 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            FUN_00429a00(s_ERROR___Specified_province_ID____0086acc4,iVar5,uVar8);
            goto LAB_006c42c8;
          }
          if (*(int *)((int)piVar3 + 0x46a) == 0) {
            uVar8 = (**(code **)(*piVar3 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
            FUN_00429a00(s_ERROR___Specified_province_ID____0086ac4c,iVar5,uVar8);
LAB_006c42c8:
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
      }
      break;
    case 0x45f:
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x10))();
      FUN_00535600(param_1 + 0xe0);
      if (DAT_00dc4b5e != '\0') {
        piVar10 = *(int **)(param_1 + 0xe4);
joined_r0x006c444f:
        if (piVar10 != (int *)0x0) {
          piVar3 = (int *)piVar10[2];
          iVar5 = *piVar10;
          piVar10 = piVar3;
          if ((0 < iVar5) && (iVar5 < DAT_00877690)) goto code_r0x006c4468;
          FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086aa64,iVar5,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          goto LAB_006c44d0;
        }
      }
      break;
    case 0x460:
      (**(code **)(*(int *)(param_1 + 0xc4) + 0x10))();
      FUN_00535600(param_1 + 0xc4);
      if (DAT_00dc4b5e != '\0') {
        piVar10 = *(int **)(param_1 + 200);
joined_r0x006c4341:
        if (piVar10 != (int *)0x0) {
          piVar3 = (int *)piVar10[2];
          iVar5 = *piVar10;
          piVar10 = piVar3;
          if ((0 < iVar5) && (iVar5 < DAT_00877690)) goto code_r0x006c435a;
          FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086ab24,iVar5,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          goto LAB_006c43c2;
        }
      }
    }
  } while( true );
code_r0x006c435a:
  iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
  if ((iVar2 == 8) || (iVar2 == 9)) {
    uVar8 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))
                      (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Specified_province_ID____0086ab80,iVar5,uVar8);
LAB_006c43c2:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006c4341;
code_r0x006c4468:
  iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
  if ((iVar2 == 8) || (iVar2 == 9)) {
    uVar8 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))
                      (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Specified_province_ID____0086aabc,iVar5,uVar8);
LAB_006c44d0:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006c444f;
code_r0x006c4155:
  iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
  if ((iVar2 == 8) || (iVar2 == 9)) {
    uVar8 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))
                      (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Specified_province_ID____0086ad94,iVar5,uVar8);
LAB_006c41bc:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006c413c;
code_r0x006c4086:
  iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
  if ((iVar2 == 8) || (iVar2 == 9)) {
    uVar8 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))
                      (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Specified_province_ID____0086ae60,iVar5,uVar8);
LAB_006c40ed:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006c406d;
code_r0x006c3e95:
  iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
  if ((iVar2 == 8) || (iVar2 == 9)) {
    uVar8 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))
                      (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Specified_province_ID____0086b0e8,iVar5,uVar8);
LAB_006c3efd:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006c3e7c;
}


