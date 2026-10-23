// FUN_0069db50 @ 69db50 size=3377

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069db50(int *param_1,float *param_2)

{
  undefined **ppuVar1;
  float *pfVar2;
  double *******pppppppdVar3;
  int *piVar4;
  undefined4 *puVar5;
  float fVar6;
  double ******ppppppdVar7;
  double *****pppppdVar8;
  float *pfVar9;
  char cVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double *******pppppppdVar15;
  uint uVar16;
  int *piVar17;
  int extraout_ECX;
  int unaff_EBX;
  int iVar18;
  int unaff_ESI;
  undefined4 *puVar19;
  double ******ppppppdVar20;
  int unaff_EDI;
  double *******pppppppdVar21;
  int iVar22;
  bool bVar23;
  float10 fVar24;
  undefined4 in_stack_fffff750;
  undefined2 uVar25;
  double *******pppppppdStack_89c;
  double *******pppppppdStack_898;
  float fStack_880;
  float fStack_87c;
  double ******local_874;
  double ******ppppppdStack_870;
  double *******local_86c;
  int iStack_868;
  undefined2 uStack_864;
  undefined8 local_860;
  int *piStack_858;
  double *******pppppppdStack_854;
  undefined2 uStack_850;
  int iStack_84c;
  undefined **ppuStack_848;
  int *piStack_844;
  int *piStack_840;
  int *piStack_83c;
  int *piStack_838;
  undefined **ppuStack_834;
  double ******ppppppdStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined1 uStack_824;
  undefined **local_820;
  double *******local_81c;
  double *******local_818;
  int local_814;
  undefined1 local_810;
  undefined1 auStack_80c [2048];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d57dd;
  local_874 = (double ******)0x0;
  local_81c = (double *******)0x0;
  local_818 = (double *******)0x0;
  local_814 = 0;
  local_810 = 0;
  local_820 = &PTR_LAB_007f577c;
  local_4 = 0;
  pfVar9 = (float *)param_1[0x2d];
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (pppppppdVar15 = local_81c, pfVar9 != (float *)0x0) {
    pfVar2 = (float *)pfVar9[2];
    pppppppdVar15 = (double *******)*pfVar9;
    pfVar9 = pfVar2;
    if (pppppppdVar15[0xa5] == (double ******)*param_2) {
      if (pppppppdVar15[3] == pppppppdVar15[0xa5]) {
        fVar6 = _DAT_007e3380;
        for (piVar11 = *(int **)((int)pppppppdVar15 + 0x26); piVar11 != (int *)0x0;
            piVar11 = (int *)piVar11[2]) {
          fVar6 = fVar6 - *(float *)(*piVar11 + 0x1a8);
        }
        iVar12 = (**(code **)(*(int *)((int)pppppppdVar15 + 0x22) + 4))();
        pppppppdVar21 = local_818;
        pppppppdStack_854 = (double *******)(fVar6 / (float)iVar12);
        for (pppppppdVar3 = local_81c; pppppppdVar3 != (double *******)0x0;
            pppppppdVar3 = (double *******)pppppppdVar3[3]) {
          local_860 = *(double *)pppppppdVar3;
          if ((float)pppppppdStack_854 < (float)*pppppppdVar3) {
            ppppppdStack_870 = (double ******)&stack0xfffff76c;
            pppppppdStack_89c = pppppppdStack_854;
            pppppppdStack_898 = pppppppdVar15;
            FUN_006a2680();
            pppppppdVar3 = local_81c;
            goto LAB_0069dce6;
          }
        }
        pppppppdStack_898 = (double *******)0x69dc9b;
        ppppppdStack_870 = operator_new(0x12);
        local_4._0_1_ = 1;
        if (ppppppdStack_870 == (double ******)0x0) {
          local_818 = (double *******)0x0;
        }
        else {
          pppppppdStack_898 = pppppppdVar21;
          pppppppdStack_89c = pppppppdVar15;
          local_818 = (double *******)FUN_006a2850(pppppppdStack_854);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar12 = local_814 + 1;
        bVar23 = local_814 != 0;
        pppppppdVar3 = local_818;
        local_814 = iVar12;
        if (bVar23) {
          pppppppdVar21[3] = (double ******)local_818;
          pppppppdVar3 = local_81c;
        }
LAB_0069dce6:
        local_81c = pppppppdVar3;
        local_874 = pppppppdVar15[0xa6];
      }
      else {
        pppppppdStack_898 = (double *******)0x69dbdc;
        (**(code **)(*param_1 + 0x1ac))();
        pppppppdStack_898 = (double *******)0x69dbe6;
        piVar11 = (int *)(**(code **)(*param_1 + 0xe0))();
        pppppppdStack_89c = (double *******)0x69dbf1;
        pppppppdStack_898 = pppppppdVar15;
        (**(code **)(*piVar11 + 0x1a8))();
      }
    }
  }
  while (pppppppdVar15 != (double *******)0x0) {
    pppppppdVar3 = (double *******)pppppppdVar15[1];
    pppppppdVar21 = (double *******)pppppppdVar15[3];
    local_860._4_4_ = (double ******)((ulonglong)local_860 >> 0x20);
    local_860 = (double)CONCAT44(local_860._4_4_,*pppppppdVar15);
    local_86c = pppppppdVar21;
    iVar12 = (**(code **)(*(int *)((int)pppppppdVar3 + 0x22) + 4))();
    if (3 < iVar12) {
      pfVar9 = (float *)param_1[0x2d];
      while (pfVar9 != (float *)0x0) {
        pfVar2 = (float *)pfVar9[2];
        pppppppdVar15 = (double *******)*pfVar9;
        pfVar9 = pfVar2;
        if ((pppppppdVar3 != pppppppdVar15) && (pppppppdVar3[3] == pppppppdVar15[3])) {
          iVar12 = FUN_00522770();
          iVar13 = FUN_00522770();
          pppppppdVar21 = local_86c;
          if (iVar12 == iVar13) {
            iVar12 = (**(code **)(*(int *)((int)pppppppdVar15 + 0x22) + 4))();
            while ((pppppppdVar21 = local_86c, iVar12 < 3 &&
                   (iVar12 = (**(code **)(*(int *)((int)pppppppdVar3 + 0x22) + 4))(),
                   pppppppdVar21 = local_86c, 3 < iVar12))) {
              pppppppdStack_89c = (double *******)0x69dd88;
              pppppppdStack_898 = pppppppdVar15;
              FUN_0045e6c0();
              iVar12 = (**(code **)(*(int *)((int)pppppppdVar15 + 0x22) + 4))();
            }
          }
        }
      }
    }
    iVar12 = (**(code **)(*(int *)((int)pppppppdVar3 + 0x22) + 4))();
    pppppppdVar15 = pppppppdVar21;
    while (3 < iVar12) {
      ppppppdVar20 = pppppppdVar3[3];
      FUN_00522770();
      pppppppdStack_89c = (double *******)&pppppppdStack_854;
      pppppppdStack_898 = (double *******)ppppppdVar20;
      FUN_006a1df0();
      pppppppdStack_898 = (double *******)0x69ddd4;
      iVar12 = FUN_00428ee0();
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = iVar12 + -0x14;
      }
      *(double *******)(iVar12 + 0x298) = pppppppdVar3[0xa6];
      *(undefined1 *)(iVar12 + 0x29c) = *(undefined1 *)(pppppppdVar3 + 0xa7);
      *(double *******)(iVar12 + 0x294) = pppppppdVar3[0xa5];
      iVar13 = (**(code **)(*(int *)(iVar12 + 0x22) + 4))();
      while ((iVar13 < 3 &&
             (iVar13 = (**(code **)(*(int *)((int)pppppppdVar3 + 0x22) + 4))(), 3 < iVar13))) {
        ppppppdStack_870 = (double ******)&pppppppdStack_89c;
        FUN_00449290(&pppppppdStack_854);
        FUN_00667670();
        FUN_0045e6f0();
        iVar13 = (**(code **)(*(int *)(iVar12 + 0x22) + 4))();
      }
      iVar12 = (**(code **)(*(int *)((int)pppppppdVar3 + 0x22) + 4))();
      pppppppdVar15 = local_86c;
    }
  }
  iVar12 = local_814;
  if (4 < local_814) {
    iVar12 = 5;
  }
  piStack_844 = (int *)0x0;
  piStack_840 = (int *)0x0;
  piStack_83c = (int *)0x0;
  piStack_838 = (int *)((uint)piStack_838 & 0xffffff00);
  ppuStack_848 = &PTR_LAB_007e378c;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,2);
  pppppppdStack_898 = (double *******)0x69deb7;
  piStack_858 = (int *)iVar12;
  ppppppdStack_870 = (double ******)FUN_004e9370();
  local_86c = (double *******)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0xee);
  iStack_84c = DAT_00ab27b4 + (int)local_874 * 0x4b2;
  if ((int)piStack_83c < iVar12) {
    do {
      iStack_868 = 0;
      fStack_87c = -100000.0;
      piVar11 = *(int **)(*(int *)(iStack_84c + 0x482) + 0x2c);
      if (piVar11 == (int *)0x0) break;
      do {
        piVar17 = (int *)piVar11[2];
        iVar12 = *piVar11;
        if ((*(char *)(iVar12 + 0x470) != '\0') &&
           (piVar11 = piStack_844, 0 < *(int *)(iVar12 + 0x182))) {
          for (; piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2]) {
            pppppppdStack_898 = (double *******)*piVar11;
            pppppppdStack_89c = (double *******)0x69df5b;
            cVar10 = (*(code *)ppuStack_848[3])();
            if (cVar10 != '\0') {
              if (piVar11 != (int *)0x0) goto LAB_0069e0e9;
              break;
            }
          }
          if (0 < *(int *)(iVar12 + 0x12)) {
            pppppppdStack_898 = (double *******)0x69df82;
            iVar13 = FUN_004e9370();
            if ((((*(int *)(iVar13 + 0x254) != 8) && (*(int *)(iVar13 + 0x254) != 9)) &&
                (0 < *(int *)(iVar13 + 0x3dc))) && (0 < *(int *)(iVar13 + 0x3dc))) {
              pppppppdStack_898 = (double *******)0x69dfbf;
              iVar13 = FUN_006b8ee0();
              if (-1 < iVar13) {
                iVar13 = *(int *)((int)param_1 + 10);
                pppppppdStack_898 = (double *******)0x69dfe4;
                FUN_004e9370();
                pppppppdStack_89c = (double *******)0x69dff0;
                pppppppdStack_898 = (double *******)iVar13;
                cVar10 = FUN_004ed600();
                if (cVar10 != '\0') {
                  fStack_880 = 0.0;
                  if (*(double *******)(iVar12 + 0x12) == local_874) {
                    fStack_880 = 100.0;
                  }
                  else {
                    pppppppdStack_898 = (double *******)0x69e01d;
                    cVar10 = FUN_004e7940();
                    piVar11 = piStack_844;
                    if (cVar10 == '\0') {
                      do {
                        if (piVar11 == (int *)0x0) goto LAB_0069e054;
                        piVar11 = (int *)piVar11[2];
                        pppppppdStack_898 = (double *******)0x69e042;
                        cVar10 = FUN_004e7940();
                      } while (cVar10 == '\0');
                      fStack_880 = 25.0;
                    }
                    else {
                      fStack_880 = 50.0;
                    }
                  }
LAB_0069e054:
                  pppppppdStack_898 = (double *******)0x69e061;
                  iVar13 = FUN_00527630();
                  if ((iVar13 < 1) ||
                     (piVar11 = *(int **)(*(int *)(iVar12 + 0x1c2) + 4), piVar11 == (int *)0x0)) {
                    fVar24 = (float10)fStack_880;
                  }
                  else {
                    do {
                      piVar4 = (int *)piVar11[2];
                      piVar11 = (int *)*piVar11;
                      cVar10 = (**(code **)(*piVar11 + 0x28))();
                      if ((cVar10 == '\0') ||
                         (puVar19 = *(undefined4 **)((int)piVar11 + 0x26),
                         puVar19 == (undefined4 *)0x0)) {
                        fVar24 = (float10)fStack_880;
                      }
                      else {
                        fVar24 = (float10)fStack_880;
                        do {
                          puVar5 = (undefined4 *)puVar19[2];
                          local_860 = (double)fVar24;
                          pppppppdStack_898 = *(double ********)(iVar12 + 0x12);
                          pppppppdStack_89c = (double *******)0x0;
                          fVar24 = (float10)(**(code **)(*(int *)*puVar19 + 0x2c))(0);
                          fVar24 = (float10)local_860 - fVar24 * (float10)_DAT_007e3358;
                          puVar19 = puVar5;
                        } while (puVar5 != (undefined4 *)0x0);
                        fStack_880 = (float)fVar24;
                      }
                      piVar11 = piVar4;
                    } while (piVar4 != (int *)0x0);
                  }
                  if ((float10)fStack_87c < fVar24) {
                    iStack_868 = *(int *)(iVar12 + 0x12);
                    fStack_87c = (float)fVar24;
                  }
                }
              }
            }
          }
        }
LAB_0069e0e9:
        piVar4 = piStack_840;
        iVar12 = iStack_868;
        piVar11 = piVar17;
      } while (piVar17 != (int *)0x0);
      if (iStack_868 < 1) break;
      pppppppdStack_898 = (double *******)0x69e104;
      piStack_840 = operator_new(0xe);
      if (piStack_840 == (int *)0x0) {
        piStack_840 = (int *)0x0;
      }
      else {
        *piStack_840 = iVar12;
        piStack_840[1] = (int)piVar4;
        piStack_840[2] = 0;
        *(undefined1 *)(piStack_840 + 3) = 0;
      }
      piVar17 = (int *)((int)piStack_83c + 1);
      piVar11 = piStack_840;
      if (piStack_83c != (int *)0x0) {
        piVar4[2] = (int)piStack_840;
        piVar11 = piStack_844;
      }
      piStack_844 = piVar11;
      piStack_83c = piVar17;
    } while ((int)piVar17 < (int)piStack_858);
  }
  FUN_006a9d50();
  ppuStack_834 = &PTR_LAB_007e378c;
  local_874 = (double ******)0x0;
  iStack_868 = 0;
  ppppppdStack_830 = (double ******)0x0;
  uStack_82c = 0;
  uStack_828 = 0;
  uStack_824 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  piStack_858 = piStack_844;
  pppppppdVar15 = local_81c;
  if (piStack_844 != (int *)0x0) {
    do {
      piVar11 = (int *)piStack_858[2];
      iVar12 = *piStack_858;
      piStack_858 = piVar11;
      if (iStack_868 == 0) {
        iVar22 = 0;
        iVar13 = DAT_00ab27b4 + iVar12 * 0x4b2;
        if (0 < *(int *)(DAT_00ab27b4 + 0x290 + iVar12 * 0x4b2)) {
          iVar18 = 0;
          do {
            if (*(int *)(*(int *)(iVar13 + 0x298) + 4 + iVar18) != 4) {
              pppppppdStack_898 = (double *******)0x69e1e8;
              iVar14 = FUN_004e9370();
              if ((((*(int *)(iVar14 + 0x3d8) != 0) && (*(int *)(iVar14 + 0x254) != 8)) &&
                  (*(int *)(iVar14 + 0x254) != 9)) &&
                 ((*(int *)(iVar14 + 0x3dc) == 0 &&
                  (*(int *)(iVar14 + 0x3d8) == *(int *)(iVar13 + 0x3d8))))) {
                iStack_868 = *(int *)(iVar14 + 0x12);
                break;
              }
            }
            iVar22 = iVar22 + 1;
            iVar18 = iVar18 + 0xc;
          } while (iVar22 < *(int *)(iVar13 + 0x290));
        }
      }
      iStack_84c = 0;
      pppppppdVar15 = local_81c;
      if (local_81c != (double *******)0x0) {
LAB_0069e240:
        ppppppdVar20 = pppppppdVar15[1];
        local_860 = *(double *)pppppppdVar15;
        pppppppdVar15 = (double *******)pppppppdVar15[3];
        local_86c = pppppppdVar15;
        if (((*(int *)((int)ppppppdVar20 + 0x2ae) == 0) && (cVar10 = FUN_0051cc00(), cVar10 == '\0')
            ) && (*(int *)((int)ppppppdVar20 + 0x2b2) == 0)) {
          piVar11 = (int *)param_1[0x32];
          while (piVar11 != (int *)0x0) {
            piVar17 = (int *)piVar11[2];
            iVar13 = *piVar11;
            piVar11 = piVar17;
            if (((*(double ******)(iVar13 + 0xc) == ppppppdVar20[3]) &&
                (cVar10 = (**(code **)(*(int *)(iVar13 + 0x22e) + 8))(), cVar10 != '\0')) &&
               (cVar10 = FUN_005177f0(), cVar10 == '\0')) {
              iVar22 = FUN_0051b230();
              if (((*(int *)(iVar22 + 0x254) == 8) || (*(int *)(iVar22 + 0x254) == 9)) ||
                 (fVar24 = (float10)FUN_00525ba0(), fVar24 <= (float10)_DAT_007e67e0)) {
                iVar22 = (**(code **)(*(int *)((int)ppppppdVar20 + 0x22) + 4))();
                iVar18 = FUN_00516cc0();
                if (iVar22 < iVar18) {
                  (**(code **)(*(int *)((int)ppppppdVar20 + 0x22) + 4))();
                  FUN_00516cc0();
                  pppppppdStack_89c = (double *******)0x69e32b;
                  pppppppdStack_898 = (double *******)iVar13;
                  FUN_006a12c0();
                }
                iVar22 = (**(code **)(*(int *)((int)ppppppdVar20 + 0x22) + 4))();
                iVar18 = FUN_00516cc0();
                if (iVar22 <= iVar18) {
                  pppppppdStack_898 = (double *******)0x69e35b;
                  pppppppdVar15 = operator_new(0xc);
                  local_4._0_1_ = 4;
                  pppppppdStack_854 = pppppppdVar15;
                  if (pppppppdVar15 == (double *******)0x0) {
                    iVar22 = (int)local_860._4_4_;
                  }
                  else {
                    pppppppdStack_898 = (double *******)0xe8;
                    pppppppdStack_89c = (double *******)0x69e383;
                    FUN_005c0270();
                    ppppppdVar20 = pppppppdVar15[1];
                    *pppppppdVar15 = (double ******)&PTR_FUN_007e5ee0;
                    *(undefined4 *)((int)ppppppdVar20 + 0xe) =
                         *(undefined4 *)((int)local_860._4_4_ + 0x18);
                    *(undefined2 *)((int)ppppppdVar20 + 0x12) =
                         *(undefined2 *)((int)local_860._4_4_ + 0x1c);
                    ppppppdVar20 = pppppppdVar15[1];
                    ppppppdVar20[5] = *(double ******)(iVar13 + 0x18);
                    *(undefined2 *)(ppppppdVar20 + 6) = *(undefined2 *)(iVar13 + 0x1c);
                    iVar22 = (int)local_860._4_4_;
                  }
                  local_4 = CONCAT31(local_4._1_3_,3);
                  pppppppdStack_898 = (double *******)0x69e3ce;
                  FUN_00565bf0();
                  *(undefined1 *)(iVar22 + 0x29c) = 1;
                  *(int *)(iVar22 + 0x298) = iVar12;
                  *(undefined4 *)(iVar22 + 0x294) = 0;
                  if (local_874 == (double ******)0x0) {
                    local_874 = (double ******)iVar12;
                  }
                  pppppppdStack_89c = (double *******)ppppppdStack_830;
                  ppuVar1 = ppuStack_834 + 0xb;
                  pppppppdStack_898 = (double *******)extraout_ECX;
                  FUN_004174a0();
                  pppppppdStack_89c = &ppppppdStack_870;
                  (*(code *)*ppuVar1)();
                  piVar11 = piStack_838;
                  piStack_838 = operator_new(0xe);
                  if (piStack_838 == (int *)0x0) {
                    piStack_838 = (int *)0x0;
                  }
                  else {
                    *piStack_838 = iVar12;
                    piStack_838[1] = (int)piVar11;
                    piStack_838[2] = 0;
                    *(undefined1 *)(piStack_838 + 3) = 0;
                  }
                  piVar17 = piStack_838;
                  if (ppuStack_834 != (undefined **)0x0) {
                    piVar11[2] = (int)piStack_838;
                    piVar17 = piStack_83c;
                  }
                  piStack_83c = piVar17;
                  ppuStack_834 = (undefined **)((int)ppuStack_834 + 1);
                  cVar10 = (**(code **)(*(int *)(unaff_EBX + 0xec) + 0x24))(unaff_ESI);
                  if ((cVar10 != '\0') || (unaff_EDI < 1)) goto LAB_0069e513;
                  iVar22 = FUN_004e9370(unaff_EDI);
                  piVar11 = *(int **)(*(int *)(iVar22 + 0x1c2) + 4);
                  if (piVar11 == (int *)0x0) goto LAB_0069e513;
                  goto LAB_0069e49f;
                }
                ppppppdVar20 = local_860._4_4_;
                pppppppdVar15 = local_86c;
              }
            }
          }
          goto LAB_0069e5c2;
        }
        goto LAB_0069e5c9;
      }
LAB_0069e5d1:
      uVar25 = (undefined2)((uint)in_stack_fffff750 >> 0x10);
    } while (piStack_858 != (int *)0x0);
    pppppppdVar15 = local_81c;
    if (0 < (int)local_874) {
      ppppppdVar20 = (double ******)iStack_868;
      if (iStack_868 < 1) {
        ppppppdVar20 = local_874;
      }
      iStack_868 = *(int *)(DAT_00893530 + 0x14);
      uStack_864 = *(undefined2 *)(DAT_00893530 + 0x18);
      pppppppdStack_898 = (double *******)0x69e61c;
      FUN_0042db80();
      (**(code **)(*param_1 + 0xe0))();
      pppppppdStack_89c = (double *******)0x69e636;
      pppppppdStack_898 = (double *******)ppppppdVar20;
      FUN_0066d0c0();
      fVar6 = param_2[6];
      pppppppdVar15 = local_81c;
      if (fVar6 != 0.0) {
        pppppppdStack_898 = (double *******)0x69e656;
        FUN_0050bca0();
        pppppppdStack_854 = *(double ********)(DAT_00893530 + 0x14);
        uStack_850 = *(undefined2 *)(DAT_00893530 + 0x18);
        pppppppdStack_898 = (double *******)0x69e678;
        FUN_0042dc20();
        pppppppdStack_898 = (double *******)0xbf800000;
        pppppppdStack_89c = (double *******)0x0;
        FUN_0050b600(fVar6,0x1a,local_874,0x3e4ccccd,1,1,*(undefined4 *)(DAT_00893530 + 0x14),
                     *(undefined2 *)(DAT_00893530 + 0x18),pppppppdStack_854,
                     CONCAT22(uVar25,uStack_850),1,0xffffffff,0,1);
        pppppppdVar15 = local_81c;
      }
      while (pppppppdVar15 != (double *******)0x0) {
        ppppppdVar20 = pppppppdVar15[1];
        ppppppdVar7 = *pppppppdVar15;
        pppppppdVar15 = (double *******)pppppppdVar15[3];
        local_860._4_4_ = (double ******)((ulonglong)local_860 >> 0x20);
        local_860 = (double)CONCAT44(local_860._4_4_,ppppppdVar7);
        if (*(int *)((int)ppppppdVar20 + 0x2ae) == 0) {
          ppppppdStack_870 = (double ******)_rand();
          iVar12 = __ftol();
          ppppppdVar7 = ppppppdStack_830;
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            ppppppdVar7 = (double ******)ppppppdVar7[2];
          }
          pppppdVar8 = *ppppppdVar7;
          *(undefined1 *)(ppppppdVar20 + 0xa7) = 1;
          ppppppdVar20[0xa6] = pppppdVar8;
          ppppppdVar20[0xa5] = (double *****)0x0;
        }
      }
      goto LAB_0069e7eb;
    }
  }
  while (pppppppdVar15 != (double *******)0x0) {
    ppppppdVar20 = *pppppppdVar15;
    ppppppdVar7 = pppppppdVar15[1];
    pppppppdVar15 = (double *******)pppppppdVar15[3];
    local_860._4_4_ = (double ******)((ulonglong)local_860 >> 0x20);
    local_860 = (double)CONCAT44(local_860._4_4_,ppppppdVar20);
    if (*(int *)((int)ppppppdVar7 + 0x2ae) == 0) {
      pppppppdStack_898 = (double *******)0x69e773;
      (**(code **)(*param_1 + 0x1ac))();
      pppppppdStack_898 = (double *******)0x69e77d;
      piVar11 = (int *)(**(code **)(*param_1 + 0xe0))();
      pppppppdStack_89c = (double *******)0x69e788;
      pppppppdStack_898 = (double *******)ppppppdVar7;
      (**(code **)(*piVar11 + 0x1a8))();
    }
  }
  pppppppdStack_898 = (double *******)0x69e79b;
  piVar11 = (int *)FUN_004e9370();
  iVar12 = *(int *)((int)param_1 + 10);
  (**(code **)(*piVar11 + 0xc))();
  pppppppdStack_898 = (double *******)0x69e7b3;
  pppppppdStack_898 = (double *******)(**(code **)(*(int *)(iVar12 + 0xe) + 0xc))();
  pppppppdStack_89c = (double *******)s__s_aborting_launchinvasion_from___008682d8;
  FUN_007a630a(auStack_80c);
  pppppppdStack_898 = (double *******)0x69e7d6;
  FUN_00458570();
  pppppppdStack_898 = (double *******)0x69e7e6;
  FUN_0068f420();
LAB_0069e7eb:
  ppuStack_834 = &PTR_LAB_007e378c;
  ppppppdVar20 = ppppppdStack_830;
  while (ppppppdVar20 != (double ******)0x0) {
    ppppppdVar20 = (double ******)ppppppdVar20[2];
    pppppppdStack_898 = (double *******)0x69e805;
    FUN_00796cd8();
  }
  ppppppdStack_830 = (double ******)0x0;
  uStack_82c = 0;
  uStack_828 = 0;
  ppuStack_848 = &PTR_LAB_007e378c;
  piVar11 = piStack_844;
  while (piVar11 != (int *)0x0) {
    piVar11 = (int *)piVar11[2];
    pppppppdStack_898 = (double *******)0x69e82f;
    FUN_00796cd8();
  }
  piStack_844 = (int *)0x0;
  piStack_840 = (int *)0x0;
  piStack_83c = (int *)0x0;
  local_820 = &PTR_LAB_007f577c;
  pppppppdVar15 = local_81c;
  while (pppppppdVar15 != (double *******)0x0) {
    pppppppdVar15 = (double *******)pppppppdVar15[3];
    pppppppdStack_898 = (double *******)0x69e85d;
    FUN_00796cd8();
  }
  ExceptionList = pvStack_c;
  return;
  while (piVar11 = piVar17, piVar17 != (int *)0x0) {
LAB_0069e49f:
    piVar17 = (int *)piVar11[2];
    piVar11 = (int *)*piVar11;
    cVar10 = (**(code **)(*piVar11 + 0x28))();
    if ((cVar10 != '\0') &&
       (cVar10 = FUN_0044b280(*(undefined4 *)(piVar11[0x92] + 6)), cVar10 != '\0')) {
      iVar22 = *(int *)(unaff_EBX + 0xf4);
      piVar11 = operator_new(0xe);
      if (piVar11 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11[1] = iVar22;
        *piVar11 = unaff_EDI;
        piVar11[2] = 0;
        *(undefined1 *)(piVar11 + 3) = 0;
      }
      iVar18 = *(int *)(unaff_EBX + 0xf8);
      *(int **)(unaff_EBX + 0xf4) = piVar11;
      *(int *)(unaff_EBX + 0xf8) = iVar18 + 1;
      if (iVar18 == 0) {
        *(int **)(unaff_EBX + 0xf0) = piVar11;
      }
      else {
        *(int **)(iVar22 + 8) = piVar11;
      }
      break;
    }
  }
LAB_0069e513:
  if (unaff_ESI == 0) {
    if (unaff_EDI < 1) {
      uVar16 = 0;
    }
    else {
      iVar22 = FUN_004e9370(unaff_EDI);
      if ((*(int *)(iVar22 + 0x254) == 8) || (*(int *)(iVar22 + 0x254) == 9)) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(uint *)(iVar22 + 0x3dc) & ((int)*(uint *)(iVar22 + 0x3dc) < 1) - 1;
      }
    }
    in_stack_fffff750 = 0x69e564;
    unaff_ESI = FUN_005bc744(iVar13,*(undefined4 *)(iVar13 + 0xc),uVar16);
  }
  if (unaff_EDI < 1) {
    uVar16 = 0;
  }
  else {
    iVar22 = FUN_004e9370(unaff_EDI);
    if ((*(int *)(iVar22 + 0x254) == 8) || (*(int *)(iVar22 + 0x254) == 9)) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(uint *)(iVar22 + 0x3dc) & ((int)*(uint *)(iVar22 + 0x3dc) < 1) - 1;
    }
  }
  FUN_006a1d30(iVar13,uVar16);
  iVar13 = (**(code **)(*(int *)((int)local_86c + 0x22) + 4))();
  iStack_84c = iStack_84c + iVar13;
  pppppppdVar15 = local_86c;
LAB_0069e5c2:
  if (2 < iStack_84c) goto LAB_0069e5d1;
LAB_0069e5c9:
  if (pppppppdVar15 == (double *******)0x0) goto LAB_0069e5d1;
  goto LAB_0069e240;
}


