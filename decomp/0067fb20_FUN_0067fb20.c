// FUN_0067fb20 @ 67fb20 size=1594

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0067fb20(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  int iStack_b4;
  int iStack_ac;
  char cStack_a7;
  char cStack_a6;
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
  int aiStack_14 [3];
  float fStack_8;
  float fStack_4;
  
  (**(code **)(param_1[0x55] + 0x14))();
  FUN_00680620(param_1 + 0x55);
  iVar9 = 0;
  iStack_ac = 0;
  iStack_b4 = 0x2c;
  do {
    iVar7 = (&DAT_0089cad8)[iVar9];
    if ((iVar7 != 0) && (iVar6 = *(int *)(iVar7 + 6), iVar5 = FUN_006a9d50(), iVar6 != iVar5)) {
      piVar8 = *(int **)((int)param_1 + 10);
      puVar1 = (undefined4 *)((int)piVar8 + iStack_ac + 0x1306);
      uVar2 = *puVar1;
      cStack_a6 = (char)((uint)uVar2 >> 0x10);
      cStack_a7 = (char)((uint)uVar2 >> 8);
      iVar6 = ((int)*(char *)(DAT_00893530 + 0x15) +
              (((int)*(char *)(DAT_00893530 + 0x16) +
               ((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(puVar1 + 1)) * 0xc) -
              (int)cStack_a6) * 0x1e) - (int)cStack_a7;
      if ((-1 < iVar6) && ((0x2c < iVar6 || ((&DAT_00dc0fd4)[iVar9] == 0)))) {
        if (*(char *)(*(int *)((int)piVar8 + 0x12da) + iStack_b4) == '\0') {
          cVar4 = (**(code **)(*piVar8 + 0x450))(iVar9,0);
          if (cVar4 != '\0') {
            fVar11 = (float10)FUN_00469920(iVar9);
            if (((float10)_DAT_007e681c < fVar11) &&
               ((float10)(float)param_1[0x18] + (float10)_DAT_007e6b28 < fVar11)) {
              param_1[0x18] = (int)(float)fVar11;
              param_1[0x17] = iVar9;
            }
            if (fVar11 < (float10)_DAT_007e3380) {
              iVar6 = iVar9;
              (**(code **)(*param_1 + 0xe0))(iVar9);
              cVar4 = FUN_00690970(iVar6);
              if (cVar4 != '\0') {
                iVar6 = iVar9;
                (**(code **)(*param_1 + 0xe0))(iVar9);
                fVar11 = (float10)FUN_006909a0(iVar6);
                if (fVar11 < (float10)_DAT_007e68c8) {
                  iVar6 = iVar9;
                  (**(code **)(*param_1 + 0xe0))(iVar9);
                  FUN_00690910(iVar6);
                  if (iVar9 == param_1[0x17]) {
                    param_1[0x17] = 0;
                    param_1[0x18] = 0;
                  }
                }
              }
            }
          }
        }
        else {
          fVar3 = _DAT_007e3d28;
          if (((&DAT_0089cad8)[iVar9] != 0) &&
             (cVar4 = FUN_004a0b90(iVar9), fVar3 = _DAT_007e67e4, cVar4 == '\0')) {
            fVar3 = _DAT_007e3d28;
          }
          aiStack_14[0] = 0xf;
          aiStack_14[1] = 0;
          aiStack_14[2] = iVar9;
          fStack_8 = fVar3;
          iVar6 = FUN_00585e50(0xf,0,(&DAT_0089cad8)[iVar9]);
          fStack_4 = (float)iVar6;
          if ((float)param_1[0x13] < fVar3) {
            piVar8 = aiStack_14;
            piVar10 = param_1 + 0x10;
            for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar10 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar10 = piVar10 + 1;
            }
          }
          aiStack_a0[0] = 0x10;
          aiStack_a0[1] = 0;
          aiStack_a0[2] = iVar9;
          fVar11 = (float10)FUN_0067c5d0(iVar9);
          fStack_94 = (float)fVar11;
          iVar6 = FUN_00585e50(0x10,0,(&DAT_0089cad8)[iVar9]);
          fStack_90 = (float)iVar6;
          if ((float)param_1[0x13] < fStack_94) {
            piVar8 = aiStack_a0;
            piVar10 = param_1 + 0x10;
            for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar10 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar10 = piVar10 + 1;
            }
          }
          cVar4 = FUN_0067d220(iVar9);
          if (cVar4 != '\0') {
            return;
          }
        }
        aiStack_78[0] = 6;
        aiStack_78[1] = 0;
        aiStack_78[2] = iVar9;
        fVar11 = (float10)FUN_0067c700(iVar9);
        fStack_6c = (float)fVar11;
        iVar6 = FUN_00585e50(6,0,(&DAT_0089cad8)[iVar9]);
        fStack_68 = (float)iVar6;
        if ((float)param_1[0x13] < fStack_6c) {
          piVar8 = aiStack_78;
          piVar10 = param_1 + 0x10;
          for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar10 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar10 = piVar10 + 1;
          }
        }
        if ((*(int *)(*(int *)((int)param_1 + 10) + 0x3350) == 0) && (*(int *)(iVar7 + 0x3350) == 0)
           ) {
          cVar4 = FUN_004a30f0(iVar9);
          if (cVar4 != '\0') {
            aiStack_28[0] = 1;
            aiStack_28[1] = 0;
            aiStack_28[2] = iVar9;
            fVar11 = (float10)FUN_0067c060(iVar9);
            fStack_1c = (float)fVar11;
            iVar7 = FUN_00585e50(1,0,(&DAT_0089cad8)[iVar9]);
            fStack_18 = (float)iVar7;
            if ((float)param_1[0x13] < fStack_1c) {
              iVar7 = 5;
              piVar10 = aiStack_28;
              piVar8 = param_1 + 0x10;
LAB_0068000a:
              for (; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar8 = *piVar10;
                piVar10 = piVar10 + 1;
                piVar8 = piVar8 + 1;
              }
            }
          }
        }
        else {
          if (*(int *)(iVar7 + 0x3350) == 0) {
            iVar6 = FUN_006a9d50();
            iVar5 = FUN_00584c90();
            if (iVar5 == iVar6) {
              cVar4 = FUN_004a30f0(iVar9);
              if ((cVar4 != '\0') &&
                 (cVar4 = FUN_004a1de0(*(undefined4 *)(*(int *)((int)param_1 + 10) + 0x3350),iVar9),
                 cVar4 != '\0')) {
                aiStack_50[0] = 2;
                aiStack_50[1] = 0;
                aiStack_50[2] = iVar9;
                fVar11 = (float10)FUN_0067c060(iVar9);
                fStack_44 = (float)fVar11;
                iVar7 = FUN_00585e50(2,0,(&DAT_0089cad8)[iVar9]);
                fStack_40 = (float)iVar7;
                if ((float)param_1[0x13] < fStack_44) {
                  piVar8 = param_1 + 0x10;
                  iVar7 = 5;
                  piVar10 = aiStack_50;
                  goto LAB_0068000a;
                }
              }
              goto LAB_0068000e;
            }
          }
          if (((*(int *)(*(int *)((int)param_1 + 10) + 0x3350) == 0) &&
              (cVar4 = FUN_004a1fe0(*(undefined4 *)(iVar7 + 0x3350)), cVar4 != '\0')) &&
             (iVar7 = *(int *)(iVar7 + 6), iVar6 = FUN_00584c90(), iVar6 == iVar7)) {
            aiStack_8c[0] = 3;
            aiStack_8c[1] = 0;
            aiStack_8c[2] = iVar9;
            fVar11 = (float10)FUN_0067c060(iVar9);
            fStack_80 = (float)fVar11;
            iVar7 = FUN_00585e50(3,0,(&DAT_0089cad8)[iVar9]);
            fStack_7c = (float)iVar7;
            if ((float)param_1[0x13] < fStack_80) {
              piVar8 = param_1 + 0x10;
              iVar7 = 5;
              piVar10 = aiStack_8c;
              goto LAB_0068000a;
            }
          }
        }
LAB_0068000e:
        cVar4 = FUN_0044beb0();
        if (cVar4 == '\0') {
          aiStack_64[0] = 8;
          aiStack_64[1] = 0;
          aiStack_64[2] = iVar9;
          fVar11 = (float10)FUN_0067d050(iVar9);
          fStack_58 = (float)fVar11;
          iVar7 = FUN_00585e50(8,0,(&DAT_0089cad8)[iVar9]);
          fStack_54 = (float)iVar7;
          if ((float)param_1[0x13] < fStack_58) {
            piVar8 = aiStack_64;
            piVar10 = param_1 + 0x10;
            for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar10 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar10 = piVar10 + 1;
            }
          }
        }
        aiStack_3c[0] = 0x12;
        aiStack_3c[1] = 0;
        aiStack_3c[2] = iVar9;
        fVar11 = (float10)FUN_0067b580(iVar9);
        fStack_30 = (float)fVar11;
        iVar7 = FUN_00585e50(0x12,0,(&DAT_0089cad8)[iVar9]);
        fStack_2c = (float)iVar7;
        if ((float)param_1[0x13] < fStack_30) {
          piVar8 = aiStack_3c;
          piVar10 = param_1 + 0x10;
          for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar10 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar10 = piVar10 + 1;
          }
        }
      }
    }
    iStack_b4 = iStack_b4 + 0x2c;
    iVar9 = iVar9 + 1;
    iStack_ac = iStack_ac + 6;
    if (0x3b1f < iStack_b4) {
      (**(code **)(*param_1 + 0xe0))();
      piVar8 = (int *)FUN_006909f0();
      iVar9 = (**(code **)(*piVar8 + 4))();
      if ((iVar9 < 1) && (iVar9 = param_1[0x17], iVar9 != 0)) {
        iVar7 = param_1[0x18];
        (**(code **)(*param_1 + 0xe0))(iVar9,iVar7);
        FUN_00690810(iVar9,iVar7);
      }
      return;
    }
  } while( true );
}


