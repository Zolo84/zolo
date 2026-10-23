// FUN_0067f300 @ 67f300 size=2074

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0067f300(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  int iStack_d4;
  int aiStack_d0 [3];
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  int aiStack_b4 [3];
  float fStack_a8;
  float fStack_a4;
  int aiStack_a0 [3];
  float fStack_94;
  float fStack_90;
  int aiStack_8c [3];
  float fStack_80;
  float fStack_7c;
  int aiStack_78 [3];
  float fStack_6c;
  float fStack_68;
  int aiStack_64 [3];
  float fStack_58;
  float fStack_54;
  int aiStack_50 [3];
  float fStack_44;
  float fStack_40;
  int aiStack_3c [3];
  float fStack_30;
  float fStack_2c;
  int aiStack_28 [3];
  float fStack_1c;
  float fStack_18;
  int aiStack_14 [4];
  float fStack_4;
  
  (**(code **)(param_1[0x55] + 0x14))();
  FUN_00680620(param_1 + 0x55);
  iVar7 = 0;
  iStack_d4 = 0;
  do {
    piVar6 = (int *)(&DAT_0089cad8)[iVar7];
    if ((piVar6 != (int *)0x0) && (iVar4 = FUN_006a9d50(), iVar7 != iVar4)) {
      iVar4 = *(int *)((int)param_1 + 10);
      uVar1 = *(undefined4 *)(iVar4 + 0x1306 + iStack_d4);
      uStack_bc._2_1_ = (char)((uint)uVar1 >> 0x10);
      uStack_bc._1_1_ = (char)((uint)uVar1 >> 8);
      iVar5 = ((int)*(char *)(DAT_00893530 + 0x15) +
              (((int)*(char *)(DAT_00893530 + 0x16) +
               ((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(iVar4 + iStack_d4 + 0x130a))
               * 0xc) - (int)uStack_bc._2_1_) * 0x1e) - (int)uStack_bc._1_1_;
      uStack_bc = uVar1;
      if ((-1 < iVar5) && ((0x2c < iVar5 || ((&DAT_00dc0fd4)[iVar7] == 0)))) {
        if ((*(char *)(iVar4 + 0x3354 + iVar7) != '\0') &&
           ((iVar4 = (int)*(char *)(DAT_00893530 + 0x15) +
                     ((int)*(char *)(DAT_00893530 + 0x16) + *(short *)(DAT_00893530 + 0x18) * 0xc) *
                     0x1e, 0xb6 < iVar4 - *(int *)((int)param_1 + 0x17a) ||
            (cVar3 = (**(code **)(*piVar6 + 0x1c))(), cVar3 != '\0')))) {
          *(int *)((int)param_1 + 0x17a) = iVar4;
          aiStack_50[0] = 0x11;
          aiStack_50[1] = 0;
          aiStack_50[2] = iVar7;
          fVar10 = (float10)FUN_0067bea0(iVar7);
          fStack_44 = (float)fVar10;
          iVar4 = FUN_00585e50(0x11,0,(&DAT_0089cad8)[iVar7]);
          fStack_40 = (float)iVar4;
          if ((float)param_1[0x13] < fStack_44) {
            piVar8 = aiStack_50;
            piVar9 = param_1 + 0x10;
            for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar9 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar9 = piVar9 + 1;
            }
          }
        }
        cVar3 = FUN_0044b300(iVar7);
        if (cVar3 == '\0') {
          if ((*(int *)(*(int *)((int)param_1 + 10) + 0x3350) == 0) && (piVar6[0xcd4] == 0)) {
            cVar3 = FUN_004a30f0(iVar7);
            if (cVar3 != '\0') {
              aiStack_3c[0] = 1;
              aiStack_3c[1] = 0;
              aiStack_3c[2] = iVar7;
              fVar10 = (float10)FUN_0067c060(iVar7);
              fStack_30 = (float)fVar10;
              iVar4 = FUN_00585e50(1,0,(&DAT_0089cad8)[iVar7]);
              fStack_2c = (float)iVar4;
              if ((float)param_1[0x13] < fStack_30) {
                iVar4 = 5;
                piVar8 = aiStack_3c;
                piVar6 = param_1 + 0x10;
                goto LAB_0067f723;
              }
            }
          }
          else {
            if (piVar6[0xcd4] == 0) {
              iVar4 = FUN_006a9d50();
              iVar5 = FUN_00584c90();
              if (iVar5 == iVar4) {
                cVar3 = FUN_004a30f0(iVar7);
                if ((cVar3 != '\0') &&
                   (cVar3 = FUN_004a1de0(*(undefined4 *)(*(int *)((int)param_1 + 10) + 0x3350),iVar7
                                        ), cVar3 != '\0')) {
                  aiStack_b4[0] = 2;
                  aiStack_b4[1] = 0;
                  aiStack_b4[2] = iVar7;
                  fVar10 = (float10)FUN_0067c060(iVar7);
                  fStack_a8 = (float)fVar10;
                  iVar4 = FUN_00585e50(2,0,(&DAT_0089cad8)[iVar7]);
                  fStack_a4 = (float)iVar4;
                  if ((float)param_1[0x13] < fStack_a8) {
                    piVar6 = param_1 + 0x10;
                    iVar4 = 5;
                    piVar8 = aiStack_b4;
                    goto LAB_0067f723;
                  }
                }
                goto LAB_0067f727;
              }
            }
            if (((*(int *)(*(int *)((int)param_1 + 10) + 0x3350) == 0) &&
                (cVar3 = FUN_004a1fe0(piVar6[0xcd4]), cVar3 != '\0')) &&
               (iVar4 = *(int *)((int)piVar6 + 6), iVar5 = FUN_00584c90(), iVar5 == iVar4)) {
              aiStack_78[0] = 3;
              aiStack_78[1] = 0;
              aiStack_78[2] = iVar7;
              fVar10 = (float10)FUN_0067c060(iVar7);
              fStack_6c = (float)fVar10;
              iVar4 = FUN_00585e50(3,0,(&DAT_0089cad8)[iVar7]);
              fStack_68 = (float)iVar4;
              if ((float)param_1[0x13] < fStack_6c) {
                piVar6 = param_1 + 0x10;
                iVar4 = 5;
                piVar8 = aiStack_78;
                goto LAB_0067f723;
              }
            }
          }
        }
        else {
          cVar3 = FUN_004a1c10(*(undefined4 *)(*(int *)((int)param_1 + 10) + 0x3350));
          if (cVar3 != '\0') {
            aiStack_28[0] = 4;
            aiStack_28[1] = 0;
            aiStack_28[2] = iVar7;
            fVar10 = (float10)FUN_0067c9b0(iVar7);
            fStack_1c = (float)fVar10;
            iVar4 = FUN_00585e50(4,0,(&DAT_0089cad8)[iVar7]);
            fStack_18 = (float)iVar4;
            if ((float)param_1[0x13] < fStack_1c) {
              piVar6 = param_1 + 0x10;
              iVar4 = 5;
              piVar8 = aiStack_28;
LAB_0067f723:
              for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar6 = *piVar8;
                piVar8 = piVar8 + 1;
                piVar6 = piVar6 + 1;
              }
            }
          }
        }
LAB_0067f727:
        cVar3 = (**(code **)(**(int **)((int)param_1 + 10) + 0x450))(iVar7,0);
        if (cVar3 != '\0') {
          fVar10 = (float10)FUN_00469920(iVar7);
          if (((float10)_DAT_007e681c < fVar10) &&
             ((float10)(float)param_1[0x18] + (float10)_DAT_007e6b28 < fVar10)) {
            param_1[0x18] = (int)(float)fVar10;
            param_1[0x17] = iVar7;
          }
          if (fVar10 < (float10)_DAT_007e3380) {
            iVar4 = iVar7;
            (**(code **)(*param_1 + 0xe0))(iVar7);
            cVar3 = FUN_00690970(iVar4);
            if (cVar3 != '\0') {
              iVar4 = iVar7;
              (**(code **)(*param_1 + 0xe0))(iVar7);
              fVar10 = (float10)FUN_006909a0(iVar4);
              if (fVar10 < (float10)_DAT_007e68c8) {
                iVar4 = iVar7;
                (**(code **)(*param_1 + 0xe0))(iVar7);
                FUN_00690910(iVar4);
                if (iVar7 == param_1[0x17]) {
                  param_1[0x17] = 0;
                  param_1[0x18] = 0;
                }
              }
            }
          }
        }
        cVar3 = FUN_005861e0(iVar7);
        if (cVar3 != '\0') {
          bVar2 = false;
          iVar4 = 1;
          do {
            cVar3 = FUN_0044b280(iVar4);
            if ((cVar3 != '\0') && (cVar3 = FUN_005861c0(iVar4), cVar3 != '\0')) {
              bVar2 = true;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x157);
          if (bVar2) {
            aiStack_14[0] = 0x14;
            aiStack_14[1] = 0;
            aiStack_14[3] = 0x551184e7;
            aiStack_14[2] = iVar7;
            iVar4 = FUN_00585e50(0x14,0,(&DAT_0089cad8)[iVar7]);
            fStack_4 = (float)iVar4;
            if ((float)param_1[0x13] < _DAT_007f382c) {
              piVar6 = aiStack_14;
              piVar8 = param_1 + 0x10;
              for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar8 = *piVar6;
                piVar6 = piVar6 + 1;
                piVar8 = piVar8 + 1;
              }
            }
          }
        }
        cVar3 = FUN_004a0a80();
        if (cVar3 != '\0') {
          aiStack_a0[0] = 0xe;
          aiStack_a0[1] = 0;
          aiStack_a0[2] = iVar7;
          fVar10 = (float10)FUN_0067cdd0(iVar7);
          fStack_94 = (float)fVar10;
          iVar4 = FUN_00585e50(0xe,0,(&DAT_0089cad8)[iVar7]);
          fStack_90 = (float)iVar4;
          if ((float)param_1[0x13] < fStack_94) {
            piVar6 = aiStack_a0;
            piVar8 = param_1 + 0x10;
            for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar8 = piVar8 + 1;
            }
          }
          cVar3 = FUN_0044beb0();
          if (cVar3 == '\0') {
            aiStack_8c[0] = 8;
            aiStack_8c[1] = 0;
            aiStack_8c[2] = iVar7;
            fVar10 = (float10)FUN_0067d050(iVar7);
            fStack_80 = (float)fVar10;
            iVar4 = FUN_00585e50(8,0,(&DAT_0089cad8)[iVar7]);
            fStack_7c = (float)iVar4;
            if ((float)param_1[0x13] < fStack_80) {
              piVar6 = aiStack_8c;
              piVar8 = param_1 + 0x10;
              for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar8 = *piVar6;
                piVar6 = piVar6 + 1;
                piVar8 = piVar8 + 1;
              }
            }
          }
        }
        aiStack_64[0] = 6;
        aiStack_64[1] = 0;
        aiStack_64[2] = iVar7;
        fVar10 = (float10)FUN_0067c700(iVar7);
        fStack_58 = (float)fVar10;
        iVar4 = FUN_00585e50(6,0,(&DAT_0089cad8)[iVar7]);
        fStack_54 = (float)iVar4;
        if ((float)param_1[0x13] < fStack_58) {
          piVar6 = aiStack_64;
          piVar8 = param_1 + 0x10;
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
        }
        aiStack_d0[0] = 0x12;
        aiStack_d0[1] = 0;
        aiStack_d0[2] = iVar7;
        fVar10 = (float10)FUN_0067b580(iVar7);
        fStack_c4 = (float)fVar10;
        iVar4 = FUN_00585e50(0x12,0,(&DAT_0089cad8)[iVar7]);
        fStack_c0 = (float)iVar4;
        if ((float)param_1[0x13] < fStack_c4) {
          piVar6 = aiStack_d0;
          piVar8 = param_1 + 0x10;
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
    iStack_d4 = iStack_d4 + 6;
    if (0x809 < iStack_d4) {
      cVar3 = FUN_004a1c10(*(undefined4 *)(*(int *)((int)param_1 + 10) + 0x3350));
      if (cVar3 != '\0') {
        aiStack_d0[0] = 4;
        aiStack_d0[1] = 0;
        iVar7 = *(int *)(*(int *)((int)param_1 + 10) + 6);
        aiStack_d0[2] = iVar7;
        fVar10 = (float10)FUN_0067c9b0(iVar7);
        fStack_c4 = (float)fVar10;
        iVar7 = FUN_00585e50(4,0,(&DAT_0089cad8)[iVar7]);
        fStack_c0 = (float)iVar7;
        if ((float)param_1[0x13] < fStack_c4) {
          piVar6 = aiStack_d0;
          piVar8 = param_1 + 0x10;
          for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
        }
      }
      (**(code **)(*param_1 + 0xe0))();
      piVar6 = (int *)FUN_006909f0();
      iVar7 = (**(code **)(*piVar6 + 4))();
      if ((iVar7 < 1) && (iVar7 = param_1[0x17], iVar7 != 0)) {
        iVar4 = param_1[0x18];
        (**(code **)(*param_1 + 0xe0))(iVar7,iVar4);
        FUN_00690810(iVar7,iVar4);
      }
      return;
    }
  } while( true );
}


