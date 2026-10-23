// FUN_006f1320 @ 6f1320 size=2849

undefined4 __thiscall FUN_006f1320(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iStack_320;
  int iStack_31c;
  char cStack_315;
  undefined4 *puStack_314;
  undefined4 auStack_310 [9];
  undefined4 uStack_2ec;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 auStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007da8a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = (**(code **)(*param_2 + 8))();
  if (iVar5 < 0x131) {
    if (iVar5 != 0x130) {
      switch(iVar5) {
      case 0:
        if ((*(int *)(param_2[1] + 0xe) == *(int *)(DAT_00bd1500 + 900)) ||
           (*(int *)(param_2[1] + 0xe) != -1)) {
          uVar4 = FUN_00584270(0xff,0xff);
          *(undefined2 *)(*(int *)(param_1 + 0x3a) + 0x5a) = uVar4;
        }
        else {
          uVar4 = FUN_00584270(0,0xff);
          *(undefined2 *)(*(int *)(param_1 + 0x3a) + 0x5a) = uVar4;
        }
        iVar5 = *(int *)(*(int *)(param_1 + 0x3a) + 0x3e);
        FUN_004361a0();
        if (iVar5 != 0) {
          FUN_005918b0();
        }
        FUN_004351b0();
        break;
      case 1:
        if (*(int *)(param_1 + 0x3a4) != 0) {
          puVar9 = operator_new(0xc);
          uStack_4 = 0;
          if (puVar9 != (undefined4 *)0x0) {
            FUN_004c0150(0x4d);
            *puVar9 = &PTR_FUN_007e3e3c;
          }
          uStack_4 = 0xffffffff;
          (**(code **)(**(int **)(param_1 + 0x3a4) + 4))();
          *(undefined4 *)(param_1 + 0x3a4) = 0;
        }
        FUN_005823d0();
        ExceptionList = pvStack_c;
        return 1;
      case 2:
        iVar5 = param_2[1];
        DAT_00d432ca = *(undefined4 *)(iVar5 + 0xe);
        iVar13 = FUN_007a8730(param_1 + 0x62);
        if (iVar13 != 0) {
          if (DAT_00dc3a00 == '\0') {
            FUN_007a630a(auStack_10c,s__s_eug_008572a0);
          }
          else {
            FUN_007a630a(auStack_10c,s__s__s_eug_0086f82c,&DAT_00dc3a00);
          }
          FUN_007a630a(&DAT_00d43186);
          iVar13 = FUN_007a6615(&DAT_00d43186,&DAT_0082eeb4);
          if (iVar13 == 0) {
            FUN_007a630a(&DAT_00d43186,s__s_eug_008572a0);
            puVar9 = operator_new(0xc);
            uStack_4 = 1;
            if (puVar9 != (undefined4 *)0x0) {
              uVar7 = *(undefined4 *)(DAT_00bd1500 + 900);
              FUN_00499310(0x133);
              *puVar9 = &PTR_FUN_007e5f60;
              *(undefined4 *)(puVar9[1] + 0xe) = uVar7;
            }
            uStack_4 = 0xffffffff;
            FUN_00565c70();
            if (*(undefined4 **)(param_1 + 0x162) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(param_1 + 0x162))();
            }
            *(undefined4 *)(param_1 + 0x162) = 0;
          }
          else {
            FUN_007a6429();
            FUN_00426f50();
            uStack_4 = 2;
            FUN_00427480();
            iVar13 = FUN_004274e0();
            if (*(int *)(iVar5 + 0x92) == iVar13) {
              iStack_31c = FUN_004274e0();
              FUN_004273c0();
              iVar13 = *(int *)(iVar5 + 0xe);
              if (0 < iStack_31c) {
                do {
                  FUN_004271a0(&cStack_315);
                  iVar13 = iVar13 + cStack_315;
                  iStack_31c = iStack_31c + -1;
                } while (iStack_31c != 0);
              }
              if (iVar13 == *(int *)(iVar5 + 0x96)) {
                if (*(undefined4 **)(param_1 + 0x162) != (undefined4 *)0x0) {
                  (**(code **)**(undefined4 **)(param_1 + 0x162))();
                }
                pvVar6 = operator_new(0xb0);
                uStack_4._0_1_ = 5;
                if (pvVar6 == (void *)0x0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = FUN_006fc370();
                }
                *(undefined4 *)(param_1 + 0x162) = uVar7;
                uVar11 = 0xffffffff;
                *(undefined4 *)(param_1 + 0x16a) = 0xffffffff;
                pcVar14 = (char *)(iVar5 + 0x12);
                do {
                  pcVar15 = pcVar14;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  pcVar15 = pcVar14 + 1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar15;
                } while (cVar1 != '\0');
                uVar11 = ~uVar11;
                uStack_4._0_1_ = 2;
                uVar3 = (undefined1)uStack_4;
                uStack_4._0_1_ = 2;
                pcVar14 = pcVar15 + -uVar11;
                pcVar15 = (char *)(param_1 + 0x62);
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
                  pcVar14 = pcVar14 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pcVar15 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                  pcVar15 = pcVar15 + 1;
                }
                iStack_320 = *(int *)(DAT_00d685a6 + 0x2cde);
                if (0 < iStack_320) {
                  iStack_31c = 4;
                  do {
                    pcVar14 = (char *)(*(int *)(DAT_00d685a6 + 0x277e +
                                               *(int *)(iStack_31c + DAT_00d685a6) * 4) + 0x1478a);
                    FUN_006f2010();
                    iVar5 = -1;
                    pcVar15 = pcVar14;
                    do {
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      cVar1 = *pcVar15;
                      pcVar15 = pcVar15 + 1;
                    } while (cVar1 != '\0');
                    if (iVar5 != -2) {
                      puStack_314 = operator_new(0x23e);
                      uStack_4._0_1_ = 6;
                      if (puStack_314 == (undefined4 *)0x0) {
                        iVar5 = 0;
                      }
                      else {
                        uVar19 = 0;
                        uVar18 = 0;
                        uVar17 = 0x15a;
                        uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
                        iVar5 = FUN_00433f90(uVar7,pcVar14,uVar17,uVar18,uVar19);
                      }
                      uStack_4._0_1_ = 2;
                      uVar4 = FUN_00584270(0,0xff);
                      *(undefined2 *)(iVar5 + 0xc) = uVar4;
                      iVar13 = *(int *)(param_1 + 0x3a);
                      iVar2 = *(int *)(iVar13 + 8);
                      piVar8 = operator_new(0xe);
                      if (piVar8 == (int *)0x0) {
                        piVar8 = (int *)0x0;
                      }
                      else {
                        *piVar8 = iVar5;
                        piVar8[1] = iVar2;
                        piVar8[2] = 0;
                        *(undefined1 *)(piVar8 + 3) = 0;
                      }
                      iVar5 = *(int *)(iVar13 + 0xc);
                      *(int **)(iVar13 + 8) = piVar8;
                      *(int *)(iVar13 + 0xc) = iVar5 + 1;
                      if (iVar5 == 0) {
                        *(int **)(iVar13 + 4) = piVar8;
                      }
                      else {
                        *(int **)(iVar2 + 8) = piVar8;
                      }
                      FUN_004351b0();
                    }
                    iStack_31c = iStack_31c + 4;
                    iStack_320 = iStack_320 + -1;
                    uVar3 = (undefined1)uStack_4;
                  } while (iStack_320 != 0);
                }
                uStack_4._0_1_ = uVar3;
                iVar5 = -1;
                pcVar14 = (char *)(DAT_00d685a6 + 0x257d);
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  cVar1 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar1 != '\0');
                if (iVar5 != -2) {
                  FUN_006cd920();
                }
                piVar8 = *(int **)(param_1 + 0x42);
                *(undefined1 *)(param_1 + 0x16e) = 0;
                *(undefined1 *)(param_1 + 0x16f) = 0;
                if (*(char *)((int)piVar8 + 0xa2) != '\0') {
                  FUN_00433930();
                }
                (**(code **)(*piVar8 + 0x60))();
                *(undefined1 *)((int)piVar8 + 0x86) = 1;
                *(undefined4 *)(param_1 + 0x1e) = 0x79c;
                *(undefined4 *)(param_1 + 0x22) = 500;
                if (*(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) != -1) {
                  *(undefined4 *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) =
                       0xffffffff;
                  FUN_0057d8e0();
                }
                if (*(int *)(param_1 + 0x170) != 0) {
                  FUN_006fa1a0();
                  FUN_00796cd8();
                }
                *(undefined4 *)(param_1 + 0x170) = 0;
                uStack_4 = 0xffffffff;
                FUN_00426f80();
                ExceptionList = pvStack_c;
                return 3;
              }
              FUN_007a630a(&DAT_00d43186);
              puVar9 = operator_new(0xc);
              uStack_4._0_1_ = 4;
              if (puVar9 != (undefined4 *)0x0) {
                uVar7 = *(undefined4 *)(DAT_00bd1500 + 900);
                FUN_00499310(0x133);
                *puVar9 = &PTR_FUN_007e5f60;
                *(undefined4 *)(puVar9[1] + 0xe) = uVar7;
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,2);
              FUN_00565c70();
              if (*(undefined4 **)(param_1 + 0x162) != (undefined4 *)0x0) {
                (**(code **)**(undefined4 **)(param_1 + 0x162))();
              }
              *(undefined4 *)(param_1 + 0x162) = 0;
            }
            else {
              FUN_007a630a(&DAT_00d43186);
              puVar9 = operator_new(0xc);
              uStack_4._0_1_ = 3;
              if (puVar9 != (undefined4 *)0x0) {
                uVar7 = *(undefined4 *)(DAT_00bd1500 + 900);
                FUN_00499310(0x133);
                *puVar9 = &PTR_FUN_007e5f60;
                *(undefined4 *)(puVar9[1] + 0xe) = uVar7;
              }
              uStack_4 = CONCAT31(uStack_4._1_3_,2);
              FUN_00565c70();
              if (*(undefined4 **)(param_1 + 0x162) != (undefined4 *)0x0) {
                (**(code **)**(undefined4 **)(param_1 + 0x162))();
              }
              *(undefined4 *)(param_1 + 0x162) = 0;
            }
            uStack_4 = 0xffffffff;
            FUN_00426f80();
          }
        }
        break;
      case 3:
        *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
        iVar5 = DAT_00bd1500;
        if ((*(int *)(param_1 + 0x162) != 0) &&
           (iVar13 = param_2[1], *(char *)(iVar13 + 0x16) != '\0')) {
          iStack_320 = 0;
          piVar8 = (int *)(DAT_00bd1500 + 0x3b0);
          piVar10 = piVar8;
          if (0 < *(int *)(DAT_00bd1500 + 0xb70)) {
            do {
              if (*piVar10 == *(int *)(iVar13 + 0xe)) {
                piVar10[7] = *(int *)(iVar13 + 0x12);
                FUN_00405ad0(s_CountryID__d_0086f81c);
                if (*(int *)((int)piVar8 + *(int *)(DAT_00bd1500 + 900) * 0x3e) ==
                    *(int *)(iVar13 + 0xe)) {
                  FUN_006fd280();
                }
              }
              iStack_320 = iStack_320 + 1;
              piVar10 = (int *)((int)piVar10 + 0x3e);
            } while (iStack_320 < *(int *)(iVar5 + 0xb70));
          }
        }
        break;
      default:
        goto LAB_006f1e26;
      case 6:
        puVar9 = (undefined4 *)(param_2[1] + 0xe);
        puVar16 = auStack_310;
        for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar16 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar16 = puVar16 + 1;
        }
        *(undefined2 *)puVar16 = *(undefined2 *)puVar9;
        FUN_006f1e70(auStack_310[0],*(undefined4 *)(*DAT_00d12b40 + 0x362),
                     &PTR_s_FEOPT_AI_LEVEL1_0086fc10);
        *(undefined4 *)(*DAT_00d12b40 + 0x362) = auStack_310[0];
        FUN_006f1e70(auStack_310[1],*(undefined4 *)(*DAT_00d12b40 + 0x366),&PTR_s_FE_DIFFI5_0086fbfc
                    );
        *(undefined4 *)(*DAT_00d12b40 + 0x366) = auStack_310[1];
        FUN_006f1e70(auStack_310[2],*(undefined4 *)(*DAT_00d12b40 + 0x36a),
                     &PTR_s_FEOPT_GAMESPEED0_0086fc44);
        *(undefined4 *)(*DAT_00d12b40 + 0x36a) = auStack_310[2];
        FUN_006f1e70(auStack_310[3],*(undefined4 *)(*DAT_00d12b40 + 0x36e),&PTR_s_FEOPT_OFF_0086fc64
                    );
        *(undefined4 *)(*DAT_00d12b40 + 0x36e) = auStack_310[3];
        FUN_006f1e70(uStack_2ec,*(undefined4 *)(*DAT_00d12b40 + 0x386),&PTR_s_FEOPT_OFF_0086fc64);
        *(undefined4 *)(*DAT_00d12b40 + 0x386) = uStack_2ec;
        FUN_006f1e70(uStack_278,*(undefined4 *)(*DAT_00d12b40 + 0x3fa),&PTR_s_FEOPT_OFF_0086fc64);
        *(undefined4 *)(*DAT_00d12b40 + 0x3fa) = uStack_278;
        FUN_006f1e70(uStack_274,*(undefined4 *)(*DAT_00d12b40 + 0x3fe),
                     &PTR_s_FEOPT_NO_CHANGE_0086fc24);
        *(undefined4 *)(*DAT_00d12b40 + 0x3fe) = uStack_274;
        FUN_006f1e70(uStack_270,*(undefined4 *)(*DAT_00d12b40 + 0x402),&PTR_s_FEOPT_OFF_0086fc64);
        *(undefined4 *)(*DAT_00d12b40 + 0x402) = uStack_270;
        FUN_006f1e70(uStack_26c,*(undefined4 *)(*DAT_00d12b40 + 0x406),&PTR_s_FEOPT_OFF_0086fc64);
        *(undefined4 *)(*DAT_00d12b40 + 0x406) = uStack_26c;
        FUN_006fa780();
        ExceptionList = pvStack_c;
        return 0;
      case 8:
        FUN_0057df90();
        break;
      case 9:
        FUN_00582280();
        if (DAT_00bd1500 != 0) {
          FUN_0057e0f0(*(undefined4 *)(param_2[1] + 0xe));
        }
        break;
      case 10:
        if (*(int *)(param_1 + 0x3a4) != 0) {
          puVar9 = operator_new(0xc);
          uStack_4 = 9;
          puStack_314 = puVar9;
          if (puVar9 != (undefined4 *)0x0) {
            FUN_004c0150(0x4d);
            *puVar9 = &PTR_FUN_007e3e3c;
          }
          uStack_4 = 0xffffffff;
          (**(code **)(**(int **)(param_1 + 0x3a4) + 4))();
          *(undefined4 *)(param_1 + 0x3a4) = 0;
        }
        *(undefined1 *)(param_1 + 0x10) = 0;
        ExceptionList = pvStack_c;
        return 1;
      }
      ExceptionList = pvStack_c;
      return 3;
    }
    if (*(int *)(param_2[1] + 0xe) == *(int *)(DAT_00bd1500 + 900)) {
      if (*(int *)(param_1 + 0x3a4) != 0) {
        puVar9 = operator_new(0xc);
        uStack_4 = 7;
        puStack_314 = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          FUN_004c0150(0x4d);
          *puVar9 = &PTR_FUN_007e3e3c;
        }
        uStack_4 = 0xffffffff;
        (**(code **)(**(int **)(param_1 + 0x3a4) + 4))();
        *(undefined4 *)(param_1 + 0x3a4) = 0;
      }
      if (DAT_00bd1500 != 0) {
        FUN_0057be80();
      }
      puStack_314 = operator_new(0x68);
      uStack_4 = 8;
      if (puStack_314 != (void *)0x0) {
        FUN_006f9d80();
      }
      *(undefined1 *)(param_1 + 0x10) = 0;
      ExceptionList = pvStack_c;
      return 1;
    }
  }
  else if (iVar5 == 0x139) {
    iVar13 = 0;
    iVar5 = param_2[1];
    piVar8 = (int *)DAT_00d12b40[2];
    if (*(short *)(iVar5 + 0xe) == 0) {
      ExceptionList = pvStack_c;
      return 3;
    }
    do {
      piVar10 = piVar8;
      if (piVar8 != (int *)0x0) {
        piVar10 = (int *)piVar8[2];
        *(undefined1 *)(*piVar8 + 0x200) = *(undefined1 *)(iVar5 + 0x10 + iVar13);
      }
      iVar5 = param_2[1];
      iVar13 = iVar13 + 1;
      piVar8 = piVar10;
    } while (iVar13 < (int)(uint)*(ushort *)(iVar5 + 0xe));
    ExceptionList = pvStack_c;
    return 3;
  }
LAB_006f1e26:
  ExceptionList = pvStack_c;
  return 0;
}


