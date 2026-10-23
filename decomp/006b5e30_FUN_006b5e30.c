// FUN_006b5e30 @ 6b5e30 size=1908

undefined4 __thiscall FUN_006b5e30(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d6b59;
  local_c = ExceptionList;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
LAB_006b5e76:
  do {
    while (iVar5 = FUN_00535490(), iVar5 != 1) {
      piVar10 = (int *)FUN_00534391();
      if (*piVar10 == 4) {
        FUN_005343dc();
        while (local_1c != (undefined4 *)0x0) {
          puVar8 = (undefined4 *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = puVar8;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    puVar8 = local_1c;
    puVar7 = local_18;
    if (DAT_00dc4b5e != '\0') {
      iVar5 = param_2[1];
      for (; puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)puVar8[2]) {
        cVar4 = (*(code *)PTR_FUN_007e3798)(*puVar8,iVar5);
        if (cVar4 != '\0') {
          if (puVar8 != (undefined4 *)0x0) {
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
      local_4._0_1_ = 0;
      iVar5 = local_14 + 1;
      bVar12 = local_14 != 0;
      puVar8 = puVar7;
      local_14 = iVar5;
      if (bVar12) {
        local_18[2] = puVar7;
        puVar8 = local_1c;
      }
    }
    local_18 = puVar7;
    local_1c = puVar8;
    iVar5 = param_2[1];
    if (0x79 < iVar5) {
      if (iVar5 < 0x48d) {
        if (iVar5 == 0x48c) {
          (**(code **)(*(int *)(param_1 + 0x40) + 0x14))();
          FUN_00535600(param_1 + 0x40);
          if (DAT_00dc4b5e != '\0') {
            piVar10 = *(int **)(param_1 + 0x44);
joined_r0x006b6344:
            if (piVar10 != (int *)0x0) {
              piVar3 = (int *)piVar10[2];
              iVar5 = *piVar10;
              piVar10 = piVar3;
              if ((0 < iVar5) && (iVar5 < DAT_00877690)) break;
              FUN_00429a00(s_ERROR___Invalid_Province_ID___d__00869c78,iVar5,*param_2 + 0x216,
                           *(int *)(*param_2 + 0x212) + 1);
              goto LAB_006b63be;
            }
          }
          goto LAB_006b5e76;
        }
        if (iVar5 == 0x7a) {
          FUN_00429d80(param_2 + 0x104);
          uVar9 = __ftol();
          *(undefined4 *)(param_1 + 0x18) = uVar9;
          goto LAB_006b5e76;
        }
        if (iVar5 == 0xf3) {
          (**(code **)(*(int *)(param_1 + 0x52) + 0x14))();
          FUN_00535600(param_1 + 0x52);
          if (DAT_00dc4b5e != '\0') {
            piVar10 = *(int **)(param_1 + 0x56);
joined_r0x006b6267:
            if (piVar10 != (int *)0x0) {
              piVar3 = (int *)piVar10[2];
              iVar5 = *piVar10;
              piVar10 = piVar3;
              if ((0 < iVar5) && (iVar5 < DAT_00877690)) goto code_r0x006b6280;
              FUN_00429a00(s_ERROR___Invalid_Province_ID___d__00869d34,iVar5,*param_2 + 0x216,
                           *(int *)(*param_2 + 0x212) + 1);
              goto LAB_006b62e4;
            }
          }
          goto LAB_006b5e76;
        }
      }
      else if (iVar5 == 0x4ab) {
        (**(code **)(*(int *)(param_1 + 0x1c) + 0x14))();
        while( true ) {
          FUN_005343dc();
          if (*(int *)(*param_2 + 0xc) == 4) break;
          iVar5 = FUN_004c7aca(*param_2 + 0x10);
          if (iVar5 == 0) {
            if (DAT_00dc4b5e != '\0') {
              iVar5 = *param_2;
              FUN_00429a00(s_ERROR___Invalid_Area_Name___s__i_00869c2c,iVar5 + 0x10,iVar5 + 0x216,
                           *(int *)(iVar5 + 0x212) + 1);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          else {
            iVar11 = *(int *)(param_1 + 0x24);
            piVar10 = operator_new(0xe);
            if (piVar10 == (int *)0x0) {
              piVar10 = (int *)0x0;
            }
            else {
              *piVar10 = iVar5;
              piVar10[1] = iVar11;
              piVar10[2] = 0;
              *(undefined1 *)(piVar10 + 3) = 0;
            }
            iVar5 = *(int *)(param_1 + 0x28);
            *(int **)(param_1 + 0x24) = piVar10;
            *(int *)(param_1 + 0x28) = iVar5 + 1;
            if (iVar5 == 0) {
              *(int **)(param_1 + 0x20) = piVar10;
            }
            else {
              *(int **)(iVar11 + 8) = piVar10;
            }
          }
        }
        if ((DAT_00dc4b5e != '\0') &&
           (piVar10 = *(int **)(param_1 + 0x20), *(int **)(param_1 + 0x20) != (int *)0x0)) {
          while( true ) {
            piVar3 = (int *)piVar10[2];
            iVar11 = 1;
            iVar5 = *piVar10;
            piVar10 = piVar3;
            if (piVar3 == (int *)0x0) break;
            do {
              piVar1 = piVar10 + 2;
              if (*piVar10 == iVar5) {
                iVar11 = iVar11 + 1;
              }
              piVar10 = (int *)*piVar1;
            } while ((int *)*piVar1 != (int *)0x0);
            piVar10 = piVar3;
            if (1 < iVar11) {
              uVar9 = FUN_004cc5f6(iVar5,iVar11,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
              FUN_00429a00(s_ERROR___Area_Name___s__used__d_t_00869bd8,uVar9);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
        }
        goto LAB_006b5e76;
      }
switchD_006b5f5d_caseD_6e:
      FUN_005349b0(s_ai_prefs___Unexpected_field_00867a80);
      while (local_1c != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = puVar8;
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    if (iVar5 == 0x79) {
      FUN_00429d80(param_2 + 0x104);
      uVar9 = __ftol();
      *(undefined4 *)(param_1 + 0x14) = uVar9;
    }
    else {
      switch(iVar5) {
      case 0x6d:
        puVar8 = *(undefined4 **)(param_1 + 0x32);
        while (puVar8 != (undefined4 *)0x0) {
          puVar7 = (undefined4 *)puVar8[2];
          FUN_00796cd8(*puVar8);
          FUN_00796cd8(puVar8);
          puVar8 = puVar7;
        }
        *(undefined4 *)(param_1 + 0x32) = 0;
        *(undefined4 *)(param_1 + 0x36) = 0;
        *(undefined4 *)(param_1 + 0x3a) = 0;
        do {
          while (iVar5 = FUN_00535490(), iVar5 == 1) {
            iVar5 = FUN_007a7b3c(param_2 + 2);
            if ((iVar5 < 1) || (DAT_00877690 <= iVar5)) {
              if (DAT_00dc4b5e != '\0') {
                FUN_00429a00(s_ERROR___Invalid_Province_ID___s__00869df0,param_2 + 2,
                             *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
            else {
              pvVar6 = operator_new(8);
              local_4._0_1_ = 2;
              if (pvVar6 == (void *)0x0) {
                piVar10 = (int *)0x0;
              }
              else {
                piVar10 = (int *)FUN_0076c790();
              }
              local_4._0_1_ = 0;
              *piVar10 = iVar5;
              iVar11 = FUN_007a7b3c(param_2 + 0x104);
              piVar10[1] = iVar11;
              cVar4 = (**(code **)(*(int *)(param_1 + 0x2e) + 0x24))(piVar10);
              if (cVar4 == '\0') {
                iVar11 = *(int *)(param_1 + 0x36);
                pvVar6 = operator_new(0xe);
                local_4._0_1_ = 3;
                if (pvVar6 == (void *)0x0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = FUN_006cab20(piVar10,iVar11,0);
                }
                local_4._0_1_ = 0;
                iVar2 = *(int *)(param_1 + 0x3a);
                *(undefined4 *)(param_1 + 0x36) = uVar9;
                *(int *)(param_1 + 0x3a) = iVar2 + 1;
                if (iVar2 == 0) {
                  *(undefined4 *)(param_1 + 0x32) = uVar9;
                }
                else {
                  *(undefined4 *)(iVar11 + 8) = uVar9;
                }
              }
              if (DAT_00dc4b5e != '\0') {
                piVar10 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
                if (*(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2) != 8) {
                  FUN_00429a00(s_ERROR___Invalid_Province_ID___d__00869ea0,iVar5,*param_2 + 0x216,
                               *(int *)(*param_2 + 0x212) + 1);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
                iVar11 = 0;
                puVar8 = *(undefined4 **)(param_1 + 0x32);
                if (*(undefined4 **)(param_1 + 0x32) != (undefined4 *)0x0) {
                  do {
                    piVar3 = puVar8 + 2;
                    if (*(int *)*puVar8 == iVar5) {
                      iVar11 = iVar11 + 1;
                    }
                    puVar8 = (undefined4 *)*piVar3;
                  } while ((undefined4 *)*piVar3 != (undefined4 *)0x0);
                  if (1 < iVar11) {
                    uVar9 = (**(code **)(*piVar10 + 0xc))
                                      (iVar11,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                    FUN_00429a00(s_ERROR___Province_ID___d____s__us_00869e44,iVar5,uVar9);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                }
              }
            }
          }
          if (iVar5 == 2) {
            local_4 = 0xffffffff;
            FUN_004174b0();
            ExceptionList = local_c;
            return 0;
          }
          piVar10 = (int *)FUN_00534391();
        } while (*piVar10 != 4);
        FUN_005343dc();
        break;
      default:
        goto switchD_006b5f5d_caseD_6e;
      case 0x75:
        fVar13 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 4) = (float)fVar13;
        break;
      case 0x76:
        fVar13 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 8) = (float)fVar13;
        break;
      case 0x77:
        fVar13 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xc) = (float)fVar13;
        break;
      case 0x78:
        fVar13 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x10) = (float)fVar13;
      }
    }
  } while( true );
  piVar3 = (int *)(DAT_00ab27b4 + iVar5 * 0x4b2);
  if (*(int *)((int)piVar3 + 0x46a) == 0) {
    uVar9 = (**(code **)(*piVar3 + 0xc))(*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Invalid_Province_ID___d__00869cc8,iVar5,uVar9);
LAB_006b63be:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006b6344;
code_r0x006b6280:
  if (*(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2) != 8) {
    uVar9 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2) + 0xc))
                      (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
    FUN_00429a00(s_ERROR___Invalid_Province_ID___d__00869d84,iVar5,uVar9);
LAB_006b62e4:
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  goto joined_r0x006b6267;
}


