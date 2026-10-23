// FUN_00694be0 @ 694be0 size=1937

/* WARNING: Removing unreachable block (ram,0x00695140) */
/* WARNING: Removing unreachable block (ram,0x00695164) */
/* WARNING: Removing unreachable block (ram,0x00695100) */
/* WARNING: Removing unreachable block (ram,0x00695112) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00694be0(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  char *pcVar18;
  char *pcVar19;
  float10 fVar20;
  float10 fVar21;
  float fStack_854;
  int iStack_84c;
  int *piStack_848;
  int iStack_844;
  int iStack_82c;
  float fStack_828;
  char acStack_80c [2048];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d54eb;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 10);
  ExceptionList = &pvStack_c;
  uVar5 = FUN_006897f0(param_2);
  uVar5 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))(uVar5);
  FUN_00458570(s__s__Front__s_urgently_requests___0086809c,uVar5);
  FUN_006a9d50();
  iStack_84c = 0;
  iStack_844 = 0;
  iStack_82c = 0;
  iVar6 = FUN_004e9370(param_4);
  iVar1 = *(int *)(iVar6 + 0x482);
  piVar13 = *(int **)(*(int *)(param_1 + 10) + 0x4508);
  if (piVar13 != (int *)0x0) {
    do {
      piVar16 = (int *)piVar13[2];
      piVar13 = (int *)*piVar13;
      cVar4 = (**(code **)(*piVar13 + 0x28))();
      if (((cVar4 != '\0') && (piVar13[3] != 0)) &&
         (iVar7 = FUN_0051b230(), *(int *)(iVar7 + 0x482) == iVar1)) {
        iVar7 = (**(code **)(*(int *)((int)piVar13 + 0x22) + 4))();
        iStack_844 = iStack_844 + iVar7;
        if (piVar13[0x7d] == *(int *)(param_1 + 0x7a)) {
          iVar7 = (**(code **)(*(int *)((int)piVar13 + 0x22) + 4))();
          iStack_82c = iStack_82c + iVar7;
        }
      }
      piVar13 = piVar16;
    } while (piVar16 != (int *)0x0);
    if (iStack_844 != 0) {
      if (param_2 < 1) {
        ExceptionList = pvStack_c;
        return 0;
      }
      do {
        piVar16 = (int *)0x0;
        piStack_848 = (int *)0x0;
        fStack_828 = 100000.0;
        iVar8 = (**(code **)(*param_3 + 4))();
        iVar7 = _rand();
        piVar13 = (int *)param_3[1];
        for (iVar7 = iVar7 % iVar8; iVar7 != 0; iVar7 = iVar7 + -1) {
          piVar13 = (int *)piVar13[2];
        }
        uVar5 = *(undefined4 *)(*piVar13 + 4);
        piVar13 = *(int **)(*(int *)(param_1 + 10) + 0x4508);
        if (piVar13 == (int *)0x0) {
          ExceptionList = pvStack_c;
          return iStack_84c;
        }
        do {
          piVar2 = (int *)*piVar13;
          piVar13 = (int *)piVar13[2];
          cVar4 = (**(code **)(*piVar2 + 0x28))();
          if (((cVar4 != '\0') && (iVar7 = (**(code **)(piVar2[0x47] + 4))(), iVar7 == 0)) &&
             ((*(char *)((int)piVar2 + 0x17b) == '\0' &&
              ((piVar2[3] != 0 && (iVar7 = FUN_0051b230(), *(int *)(iVar7 + 0x482) == iVar1)))))) {
            if (param_3 == (int *)0x0) {
              iVar7 = 0;
            }
            else {
              iVar7 = (int)param_3 + 0x12;
            }
            if (piVar2[0x7d] != iVar7) {
              iVar7 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
              if (((iVar7 + iStack_84c <= param_2) && (cVar4 = FUN_00525660(), cVar4 == '\0')) &&
                 (cVar4 = FUN_00525720(), cVar4 == '\0')) {
                fVar20 = (float10)FUN_0044a9c0(uVar5,piVar2[3]);
                fStack_854 = (float)fVar20;
                if ((((int *)piVar2[0x7d] != (int *)0x0) &&
                    (cVar4 = (**(code **)(*(int *)piVar2[0x7d] + 0xe8))(), cVar4 != '\0')) &&
                   (cVar4 = (**(code **)(*(int *)piVar2[0x7d] + 0x104))(), cVar4 != '\0')) {
                  fStack_854 = fStack_854 + _DAT_007e682c;
                }
                cVar4 = FUN_0051a430();
                if ((cVar4 != '\0') && (iVar7 = FUN_006955f0(piVar2[3]), iVar7 != 0)) {
                  fStack_854 = fStack_854 + _DAT_007e6b28;
                }
                cVar4 = (**(code **)(*(int *)piVar2[0x7d] + 0x100))();
                if (cVar4 == '\0') {
                  cVar4 = (**(code **)(*(int *)piVar2[0x7d] + 0xfc))();
                  if (cVar4 != '\0') {
                    fStack_854 = fStack_854 + _DAT_007e4088;
                    if (piVar2[0x7d] == 0) {
                      piVar17 = (int *)0x0;
                    }
                    else {
                      piVar17 = (int *)(piVar2[0x7d] + -0x12);
                    }
                    if (0x77 < *(int *)((int)piVar17 + 0x126)) {
                      fVar20 = (float10)FUN_006896b0();
                      fVar21 = (float10)FUN_006896b0();
                      if (fVar21 * (float10)_DAT_007f4690 <= (float10)(double)fVar20) {
                        (**(code **)(*(int *)((int)piVar17 + 0x12) + 0x1a4))();
                        iVar7 = FUN_00527b40();
                        (**(code **)(*(int *)((int)param_3 + 0x12) + 0x1a4))();
                        iVar8 = FUN_00527b40();
                        iVar9 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
                        iVar10 = (**(code **)(*piVar17 + 4))();
                        piVar16 = piStack_848;
                        if (iVar10 <= iVar7 - iVar9) {
                          uVar11 = 0;
                          FUN_0051b230(0);
                          cVar4 = FUN_004ed260(uVar11);
                          if ((cVar4 == '\0') || (iVar9 = FUN_00689730(piVar2[3]), 1 < iVar9)) {
                            iVar9 = (**(code **)(*param_3 + 4))();
                            if (iVar9 <= iVar8) {
                              fVar3 = (float)iVar8;
                              if ((float)iVar8 == _DAT_007e3380) {
                                fVar3 = _DAT_007e4098;
                              }
                              iVar8 = param_3[0x3f];
                              iVar9 = piVar17[0x3f];
                              iVar10 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
                              if ((float)iVar8 / fVar3 < (float)iVar9 / (float)(iVar7 - iVar10))
                              goto LAB_00695196;
                            }
                            goto LAB_00695074;
                          }
                        }
                      }
                    }
                    goto LAB_00695196;
                  }
                }
                else if ((float)(iStack_82c / iStack_844) <=
                         *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xe8)) {
                  (**(code **)(*(int *)((int)param_3 + 0x12) + 0x1a4))();
                  iVar7 = FUN_00527b40();
                  iVar8 = (**(code **)(*param_3 + 4))();
                  if (iVar8 * 2 <= iVar7) goto LAB_00695196;
                }
LAB_00695074:
                if ((piVar16 == (int *)0x0) || (fStack_854 < fStack_828)) {
                  uVar11 = *(undefined4 *)(param_1 + 10);
                  FUN_0051b230(uVar11);
                  cVar4 = FUN_004e9500(uVar11);
                  if (cVar4 == '\0') {
                    uStack_4 = 0;
                    uVar11 = FUN_0051b230();
                    cVar4 = FUN_00431220(piVar2,uVar11,iVar6);
                    if ((cVar4 == '\0') ||
                       (cVar4 = FUN_00431d90(*(undefined4 *)(param_1 + 10)), cVar4 != '\0')) {
                      uStack_4 = 0xffffffff;
                      goto LAB_00695196;
                    }
                    uStack_4 = 0xffffffff;
                  }
                  fStack_828 = fStack_854;
                  piVar16 = piVar2;
                  piStack_848 = piVar2;
                }
              }
            }
          }
LAB_00695196:
        } while (piVar13 != (int *)0x0);
        if (piVar16 == (int *)0x0) {
          ExceptionList = pvStack_c;
          return iStack_84c;
        }
        acStack_80c[0] = '\0';
        cVar4 = (**(code **)(*(int *)piVar16[0x7d] + 0xfc))();
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(*(int *)piVar16[0x7d] + 0x100))();
          pcVar12 = s_Garrison_00868088;
          if (cVar4 == '\0') {
            pcVar12 = s_an_other_agent_00868078;
          }
        }
        else {
          uVar14 = 0xffffffff;
          pcVar12 = s_Front_00868094;
          do {
            pcVar19 = pcVar12;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pcVar19 = pcVar12 + 1;
            cVar4 = *pcVar12;
            pcVar12 = pcVar19;
          } while (cVar4 != '\0');
          uVar14 = ~uVar14;
          iVar7 = -1;
          pcVar12 = acStack_80c;
          do {
            pcVar18 = pcVar12;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar18 = pcVar12 + 1;
            cVar4 = *pcVar12;
            pcVar12 = pcVar18;
          } while (cVar4 != '\0');
          pcVar12 = pcVar19 + -uVar14;
          pcVar19 = pcVar18 + -1;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar19 = pcVar19 + 4;
          }
          iVar7 = piVar16[0x7d];
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar19 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar19 = pcVar19 + 1;
          }
          if (iVar7 == 0) {
            pcVar12 = (char *)FUN_006897f0();
          }
          else {
            pcVar12 = (char *)FUN_006897f0();
          }
        }
        uVar14 = 0xffffffff;
        do {
          pcVar19 = pcVar12;
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          pcVar19 = pcVar12 + 1;
          cVar4 = *pcVar12;
          pcVar12 = pcVar19;
        } while (cVar4 != '\0');
        uVar14 = ~uVar14;
        iVar7 = -1;
        pcVar12 = acStack_80c;
        do {
          pcVar18 = pcVar12;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar18 = pcVar12 + 1;
          cVar4 = *pcVar12;
          pcVar12 = pcVar18;
        } while (cVar4 != '\0');
        pcVar12 = pcVar19 + -uVar14;
        pcVar19 = pcVar18 + -1;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar19 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar19 = pcVar19 + 1;
        }
        piVar13 = (int *)FUN_0051b230();
        iVar7 = *(int *)(param_1 + 10);
        uVar5 = (**(code **)(*piVar13 + 0xc))(acStack_80c);
        uVar5 = (**(code **)(*(int *)((int)piVar16 + 0x22) + 4))(uVar5);
        uVar5 = (**(code **)(*piVar16 + 0xc))(uVar5);
        uVar5 = (**(code **)(*(int *)(iVar7 + 0xe) + 0xc))(uVar5);
        FUN_00458570(s__s__Unit__s___d_divs__in__s_belo_00868030,uVar5);
        iVar7 = (**(code **)(*(int *)((int)piVar16 + 0x22) + 4))();
        iStack_84c = iStack_84c + iVar7;
        if ((((int *)piVar16[0x7d] != (int *)0x0) &&
            (cVar4 = (**(code **)(*(int *)piVar16[0x7d] + 0xe8))(), cVar4 != '\0')) &&
           (cVar4 = (**(code **)(*(int *)piVar16[0x7d] + 0x104))(), cVar4 != '\0')) {
          (**(code **)(*(int *)piVar16[0x7d] + 0xcc))();
        }
        cVar4 = FUN_006ac380(piVar16,*(undefined4 *)(iVar6 + 0x12));
        if (cVar4 == '\0') {
          iVar7 = *(int *)((int)param_3 + 0x12);
          uVar5 = (**(code **)(*piVar16 + 0x10))();
          (**(code **)(iVar7 + 0x1a8))(uVar5);
          FUN_006aaff0(piVar16,iVar6,0);
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + 0x12);
          FUN_00522770(piVar16,uVar5);
          FUN_0045fed0(piVar16,uVar5);
        }
        if (param_2 <= iStack_84c) {
          ExceptionList = pvStack_c;
          return iStack_84c;
        }
      } while( true );
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}


