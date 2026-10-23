// FUN_006bd060 @ 6bd060 size=2761

undefined4 __thiscall FUN_006bd060(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  float10 fVar12;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d7814;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
LAB_006bd0a4:
  do {
    while (iVar4 = FUN_00535490(), iVar4 != 1) {
      if (iVar4 == 2) {
        while (local_1c != (int *)0x0) {
          piVar8 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar8;
        }
        ExceptionList = local_c;
        return 0;
      }
      piVar8 = (int *)FUN_00534391();
      if (*piVar8 == 4) {
        FUN_005343dc();
        while (local_1c != (int *)0x0) {
          piVar8 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar8;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar8 = local_1c;
    piVar5 = local_18;
    if (DAT_00dc4b5e != '\0') {
      iVar4 = param_2[1];
      for (; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar8,iVar4);
        if (cVar3 != '\0') {
          if (piVar8 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar4 = param_2[1];
      piVar5 = operator_new(0xe);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar4;
        piVar5[1] = (int)local_18;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar4 = local_14 + 1;
      bVar11 = local_14 != 0;
      piVar8 = piVar5;
      local_14 = iVar4;
      if (bVar11) {
        local_18[2] = (int)piVar5;
        piVar8 = local_1c;
      }
    }
    local_18 = piVar5;
    local_1c = piVar8;
    iVar4 = param_2[1];
    if (0x433 < iVar4) {
      switch(iVar4) {
      case 0x434:
        puVar10 = *(undefined4 **)(param_1 + 0x56);
        while (puVar10 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar10[2];
          FUN_00796cd8(*puVar10);
          FUN_00796cd8(puVar10);
          puVar10 = puVar1;
        }
        *(undefined4 *)(param_1 + 0x56) = 0;
        *(undefined4 *)(param_1 + 0x5a) = 0;
        *(undefined4 *)(param_1 + 0x5e) = 0;
        do {
          while (iVar4 = FUN_00535490(), iVar4 == 1) {
            iVar4 = FUN_007a7b3c(param_2 + 2);
            if ((iVar4 < 1) || (DAT_00877690 <= iVar4)) {
              if (DAT_00dc4b5e != '\0') {
                FUN_00429a00(s_ERROR___Invalid_Province_ID___s__0086a58c,param_2 + 2,
                             *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
            else {
              pvVar7 = operator_new(8);
              local_4._0_1_ = 3;
              if (pvVar7 == (void *)0x0) {
                piVar8 = (int *)0x0;
              }
              else {
                piVar8 = (int *)FUN_0076c790();
              }
              local_4._0_1_ = 0;
              *piVar8 = iVar4;
              iVar9 = FUN_007a7b3c(param_2 + 0x104);
              piVar8[1] = iVar9;
              cVar3 = (**(code **)(*(int *)(param_1 + 0x52) + 0x24))(piVar8);
              if (cVar3 == '\0') {
                iVar9 = *(int *)(param_1 + 0x5a);
                puVar10 = operator_new(0xe);
                if (puVar10 == (undefined4 *)0x0) {
                  puVar10 = (undefined4 *)0x0;
                }
                else {
                  *puVar10 = piVar8;
                  puVar10[1] = iVar9;
                  puVar10[2] = 0;
                  *(undefined1 *)(puVar10 + 3) = 0;
                }
                iVar2 = *(int *)(param_1 + 0x5e);
                *(undefined4 **)(param_1 + 0x5a) = puVar10;
                *(int *)(param_1 + 0x5e) = iVar2 + 1;
                if (iVar2 == 0) {
                  *(undefined4 **)(param_1 + 0x56) = puVar10;
                }
                else {
                  *(undefined4 **)(iVar9 + 8) = puVar10;
                }
              }
              if (DAT_00dc4b5e != '\0') {
                piVar8 = (int *)(DAT_00ab27b4 + iVar4 * 0x4b2);
                iVar9 = *(int *)(DAT_00ab27b4 + 0x254 + iVar4 * 0x4b2);
                if ((iVar9 == 8) || (iVar9 == 9)) {
                  uVar6 = (**(code **)(*piVar8 + 0xc))
                                    (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                  FUN_00429a00(s_ERROR___Specified_province_ID____0086a654,iVar4,uVar6);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                iVar9 = 0;
                puVar10 = *(undefined4 **)(param_1 + 0x56);
                if (*(undefined4 **)(param_1 + 0x56) != (undefined4 *)0x0) {
                  do {
                    piVar5 = puVar10 + 2;
                    if (*(int *)*puVar10 == iVar4) {
                      iVar9 = iVar9 + 1;
                    }
                    puVar10 = (undefined4 *)*piVar5;
                  } while ((undefined4 *)*piVar5 != (undefined4 *)0x0);
                  if (1 < iVar9) {
                    uVar6 = (**(code **)(*piVar8 + 0xc))
                                      (iVar9,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                    FUN_00429a00(s_ERROR___Province_ID___d____s__us_0086a5ec,iVar4,uVar6);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                }
              }
            }
          }
          if (iVar4 == 2) {
            while (local_1c != (int *)0x0) {
              piVar8 = (int *)local_1c[2];
              FUN_00796cd8(local_1c);
              local_1c = piVar8;
            }
            ExceptionList = local_c;
            return 0;
          }
          piVar8 = (int *)FUN_00534391();
        } while (*piVar8 != 4);
        FUN_005343dc();
        break;
      case 0x435:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 6) = (float)fVar12;
        break;
      case 0x436:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 10) = (float)fVar12;
        break;
      default:
        goto switchD_006bd223_default;
      case 0x465:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x68) = (float)fVar12;
        break;
      case 0x466:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x6c) = (float)fVar12;
        break;
      case 0x467:
        uVar6 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0x70) = uVar6;
        break;
      case 0x468:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 100) = (float)fVar12;
        break;
      case 0x469:
        puVar10 = *(undefined4 **)(param_1 + 0x78);
        while (puVar10 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar10[2];
          FUN_00796cd8(*puVar10);
          FUN_00796cd8(puVar10);
          puVar10 = puVar1;
        }
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        do {
          while (iVar4 = FUN_00535490(), iVar4 == 1) {
            iVar4 = FUN_007a7b3c(param_2 + 2);
            if ((iVar4 < 1) || (DAT_00877690 <= iVar4)) {
              if (DAT_00dc4b5e != '\0') {
                FUN_00429a00(s_ERROR___Invalid_Province_ID___s__0086a3a8,param_2 + 2,
                             *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
            else {
              pvVar7 = operator_new(8);
              local_4._0_1_ = 4;
              if (pvVar7 == (void *)0x0) {
                piVar8 = (int *)0x0;
              }
              else {
                piVar8 = (int *)FUN_0076c7a0();
              }
              local_4._0_1_ = 0;
              *piVar8 = iVar4;
              fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
              piVar8[1] = (int)(float)fVar12;
              cVar3 = (**(code **)(*(int *)(param_1 + 0x74) + 0x24))(piVar8);
              if (cVar3 == '\0') {
                iVar9 = *(int *)(param_1 + 0x7c);
                puVar10 = operator_new(0xe);
                if (puVar10 == (undefined4 *)0x0) {
                  puVar10 = (undefined4 *)0x0;
                }
                else {
                  *puVar10 = piVar8;
                  puVar10[1] = iVar9;
                  puVar10[2] = 0;
                  *(undefined1 *)(puVar10 + 3) = 0;
                }
                iVar2 = *(int *)(param_1 + 0x80);
                *(undefined4 **)(param_1 + 0x7c) = puVar10;
                *(int *)(param_1 + 0x80) = iVar2 + 1;
                if (iVar2 == 0) {
                  *(undefined4 **)(param_1 + 0x78) = puVar10;
                }
                else {
                  *(undefined4 **)(iVar9 + 8) = puVar10;
                }
              }
              if (DAT_00dc4b5e != '\0') {
                piVar8 = (int *)(DAT_00ab27b4 + iVar4 * 0x4b2);
                iVar9 = *(int *)(DAT_00ab27b4 + 0x254 + iVar4 * 0x4b2);
                if ((iVar9 == 8) || (iVar9 == 9)) {
                  uVar6 = (**(code **)(*piVar8 + 0xc))
                                    (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                  FUN_00429a00(s_ERROR___Specified_province_ID____0086a468,iVar4,uVar6);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                iVar9 = 0;
                puVar10 = *(undefined4 **)(param_1 + 0x78);
                if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
                  do {
                    piVar5 = puVar10 + 2;
                    if (*(int *)*puVar10 == iVar4) {
                      iVar9 = iVar9 + 1;
                    }
                    puVar10 = (undefined4 *)*piVar5;
                  } while ((undefined4 *)*piVar5 != (undefined4 *)0x0);
                  if (1 < iVar9) {
                    uVar6 = (**(code **)(*piVar8 + 0xc))
                                      (iVar9,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                    FUN_00429a00(s_ERROR___Province_ID___d____s__us_0086a404,iVar4,uVar6);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                }
              }
            }
          }
          if (iVar4 == 2) {
            while (local_1c != (int *)0x0) {
              piVar8 = (int *)local_1c[2];
              FUN_00796cd8(local_1c);
              local_1c = piVar8;
            }
            ExceptionList = local_c;
            return 0;
          }
          piVar8 = (int *)FUN_00534391();
        } while (*piVar8 != 4);
        FUN_005343dc();
        break;
      case 0x4ab:
        (**(code **)(*(int *)(param_1 + 0x2e) + 0x14))();
        FUN_00535600(param_1 + 0x2e);
        if (DAT_00dc4b5e != '\0') {
          piVar8 = *(int **)(param_1 + 0x32);
joined_r0x006bd73c:
          if (piVar8 != (int *)0x0) {
            piVar5 = (int *)piVar8[2];
            iVar4 = *piVar8;
            piVar8 = piVar5;
            if ((0 < iVar4) && (iVar4 < DAT_00877690)) goto code_r0x006bd755;
            FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086a4d4,iVar4,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            goto LAB_006bd7bf;
          }
        }
      }
      goto LAB_006bd0a4;
    }
    if (iVar4 == 0x433) {
      puVar10 = *(undefined4 **)(param_1 + 0x44);
      while (puVar10 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar10[2];
        FUN_00796cd8(*puVar10);
        FUN_00796cd8(puVar10);
        puVar10 = puVar1;
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      do {
        while (iVar4 = FUN_00535490(), iVar4 == 1) {
          iVar4 = FUN_004af6b0(param_2 + 2);
          if (iVar4 == 0) {
            if (DAT_00dc4b5e != '\0') {
              FUN_00429a00(s_ERROR___Invalid_country_TAG___s__0086a6c4,param_2 + 2,*param_2 + 0x216,
                           *(int *)(*param_2 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          else {
            pvVar7 = operator_new(8);
            local_4._0_1_ = 1;
            if (pvVar7 == (void *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)FUN_0076c770();
            }
            local_4._0_1_ = 0;
            *piVar8 = iVar4;
            iVar9 = FUN_007a7b3c(param_2 + 0x104);
            piVar8[1] = iVar9;
            cVar3 = (**(code **)(*(int *)(param_1 + 0x40) + 0x24))(piVar8);
            if (cVar3 == '\0') {
              iVar9 = *(int *)(param_1 + 0x48);
              pvVar7 = operator_new(0xe);
              local_4._0_1_ = 2;
              if (pvVar7 == (void *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_0049a850(piVar8,iVar9,0);
              }
              iVar2 = *(int *)(param_1 + 0x4c);
              local_4._0_1_ = 0;
              *(undefined4 *)(param_1 + 0x48) = uVar6;
              *(int *)(param_1 + 0x4c) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 *)(param_1 + 0x44) = uVar6;
              }
              else {
                *(undefined4 *)(iVar9 + 8) = uVar6;
              }
            }
            if (DAT_00dc4b5e != '\0') {
              iVar9 = 0;
              puVar10 = *(undefined4 **)(param_1 + 0x44);
              if (puVar10 != (undefined4 *)0x0) {
                do {
                  piVar8 = puVar10 + 2;
                  if (*(int *)*puVar10 == iVar4) {
                    iVar9 = iVar9 + 1;
                  }
                  puVar10 = (undefined4 *)*piVar8;
                } while ((undefined4 *)*piVar8 != (undefined4 *)0x0);
                if (1 < iVar9) {
                  FUN_00429a00(s_ERROR___Country_TAG___s__is_used_0086a720,param_2 + 2,iVar9,
                               *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
              }
            }
          }
        }
        if (iVar4 == 2) {
          local_4 = 0xffffffff;
          FUN_004174b0();
          ExceptionList = local_c;
          return 0;
        }
        piVar8 = (int *)FUN_00534391();
      } while (*piVar8 != 4);
      FUN_005343dc();
      goto LAB_006bd0a4;
    }
    if (iVar4 < 0x42f) {
      if (iVar4 != 0x42e) {
        if (iVar4 < 0x12d) {
          if (iVar4 == 300) {
            uVar6 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined4 *)(param_1 + 0x16) = uVar6;
            goto LAB_006bd0a4;
          }
          if (iVar4 == 0x3a) {
            uVar6 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined4 *)(param_1 + 0xe) = uVar6;
            goto LAB_006bd0a4;
          }
          if (iVar4 == 0x6e) {
            uVar6 = FUN_007a7b3c(param_2 + 0x104);
            *(undefined4 *)(param_1 + 0x12) = uVar6;
            goto LAB_006bd0a4;
          }
        }
        else if (iVar4 == 0x42d) {
          *(bool *)(param_1 + 4) = param_2[0x103] == 0x111;
          goto LAB_006bd0a4;
        }
switchD_006bd223_default:
        FUN_005349b0(s_unknown_lhs_in_garrisonprefs_0086a388);
        while (local_1c != (int *)0x0) {
          piVar8 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar8;
        }
        ExceptionList = local_c;
        return 0xfffffffe;
      }
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x1a) = uVar6;
      goto LAB_006bd0a4;
    }
    switch(iVar4) {
    case 0x42f:
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x1e) = uVar6;
      break;
    case 0x430:
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x22) = uVar6;
      break;
    case 0x431:
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x26) = uVar6;
      break;
    case 0x432:
      uVar6 = FUN_007a7b3c(param_2 + 0x104);
      *(undefined4 *)(param_1 + 0x2a) = uVar6;
      break;
    default:
      goto switchD_006bd223_default;
    }
  } while( true );
code_r0x006bd755:
  iVar9 = *(int *)(DAT_00ab27b4 + 0x254 + iVar4 * 0x4b2);
  if ((iVar9 == 8) || (iVar9 == 9)) {
    uVar6 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar4 * 0x4b2) + 0xc))
                      (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Specified_province_ID____0086a528,iVar4,uVar6);
LAB_006bd7bf:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006bd73c;
}


