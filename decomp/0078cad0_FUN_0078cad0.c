// FUN_0078cad0 @ 78cad0 size=1438

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078cad0(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  float fStack_1c;
  float fStack_18;
  int local_14;
  int iStack_10;
  int local_c;
  int *local_4;
  
  local_14 = -1;
  piVar9 = &DAT_0089cadc;
  do {
    if (*piVar9 != 0) {
      FUN_00455060();
    }
    piVar9 = piVar9 + 1;
  } while ((int)piVar9 < 0x89d038);
  local_c = 1;
  local_4 = &DAT_0089cadc;
  do {
    iVar2 = *local_4;
    if (iVar2 != 0) {
      piVar9 = *(int **)(iVar2 + 0x4508);
      while (piVar9 != (int *)0x0) {
        piVar3 = (int *)piVar9[2];
        piVar9 = (int *)*piVar9;
        iVar6 = FUN_00522770();
        cVar5 = (**(code **)(*piVar9 + 0x28))();
        if (cVar5 == '\0') {
          cVar5 = (**(code **)(*piVar9 + 0x2c))();
          if (cVar5 == '\0') {
            cVar5 = (**(code **)(*piVar9 + 0x30))();
            if (cVar5 == '\0') goto LAB_0078cb7f;
            iVar7 = (**(code **)(*piVar9 + 0x18))();
          }
          else {
            iVar7 = (**(code **)(*piVar9 + 0x14))();
          }
          local_14 = *(int *)(iVar7 + 0x212);
        }
        else {
          local_14 = piVar9[3];
        }
LAB_0078cb7f:
        if (local_14 == 0) {
LAB_0078cbb6:
          local_14 = FUN_0044e1b0();
          iStack_10 = iVar2;
        }
        else {
          iVar7 = iVar2;
          FUN_004e9370(local_14,iVar2);
          local_14 = FUN_004e9f80(iVar7);
          if (local_14 == -1) goto LAB_0078cbb6;
          iVar7 = FUN_004e9370(local_14);
          iStack_10 = *(int *)(iVar7 + 0x3d8);
        }
        iVar7 = FUN_0044e1b0();
        piVar4 = *(int **)((int)piVar9 + 0x26);
        while (piVar9 = piVar3, piVar4 != (int *)0x0) {
          piVar9 = (int *)piVar4[2];
          iVar8 = *piVar4;
          *(int *)(iVar6 + 0x3c22 + *(int *)(iVar8 + 0x130) * 4) =
               *(int *)(iVar6 + 0x3c22 + *(int *)(iVar8 + 0x130) * 4) + 1;
          *(float *)(iVar6 + 0x3c06) =
               *(float *)(iVar8 + 0x10c) * *(float *)(iVar8 + 0xf0) * _DAT_007e543c +
               *(float *)(iVar6 + 0x3c06);
          *(float *)(iVar6 + 0x3c0a) =
               *(float *)(iVar8 + 0x108) * *(float *)(iVar8 + 0xf0) * _DAT_007e543c +
               *(float *)(iVar6 + 0x3c0a);
          fVar11 = (float10)FUN_004fd7c0(0);
          fVar1 = (float)fVar11;
          fVar11 = (float10)FUN_004fd5d0(0);
          if (iVar6 == iStack_10) {
            *(float *)(iStack_10 + 0x4086) = fVar1 + *(float *)(iStack_10 + 0x4086);
            *(float *)(iStack_10 + 0x4082) =
                 (float)(fVar11 + (float10)*(float *)(iStack_10 + 0x4082));
          }
          else {
            *(float *)(iStack_10 + 0x408e) = fVar1 + *(float *)(iStack_10 + 0x408e);
            *(float *)(iStack_10 + 0x408a) =
                 (float)(fVar11 + (float10)*(float *)(iStack_10 + 0x408a));
          }
          piVar4 = piVar9;
          if (iVar7 == local_14) {
            *(float *)(iStack_10 + 0x4092) = fVar1 + *(float *)(iStack_10 + 0x4092);
            *(float *)(iStack_10 + 0x4096) =
                 (float)(fVar11 + (float10)*(float *)(iStack_10 + 0x4096));
          }
          else {
            *(float *)(iStack_10 + 0x409a) = fVar1 + *(float *)(iStack_10 + 0x409a);
            *(float *)(iStack_10 + 0x409e) =
                 (float)(fVar11 + (float10)*(float *)(iStack_10 + 0x409e));
          }
        }
      }
      piVar9 = *(int **)(iVar2 + 0x451c);
      while (piVar9 != (int *)0x0) {
        piVar3 = (int *)piVar9[2];
        iVar6 = *piVar9;
        piVar9 = piVar3;
        if (*(char *)(iVar6 + 0x154) == '\0') {
          iVar7 = *(int *)(iVar6 + 0x58);
          if (iVar7 == 0) {
LAB_0078cd40:
            bVar10 = false;
            iVar8 = iVar2;
          }
          else {
            iVar8 = (&DAT_0089cad8)[iVar7];
            if (iVar8 == 0) {
              *(undefined4 *)(iVar6 + 0x58) = 0;
              goto LAB_0078cd40;
            }
            bVar10 = iVar7 != local_c;
          }
          if (*(char *)(iVar6 + 0x162) == '\0') {
            piVar3 = (int *)(iVar8 + 0x3c22 + *(int *)(iVar6 + 0x130) * 4);
            *piVar3 = *piVar3 + 1;
          }
          *(float *)(iVar8 + 0x3c06) =
               *(float *)(iVar6 + 0x10c) * *(float *)(iVar6 + 0xf0) * _DAT_007e543c +
               *(float *)(iVar8 + 0x3c06);
          *(float *)(iVar8 + 0x3c0a) =
               *(float *)(iVar6 + 0x108) * *(float *)(iVar6 + 0xf0) * _DAT_007e543c +
               *(float *)(iVar8 + 0x3c0a);
          fVar11 = (float10)FUN_004fd7c0(0);
          fVar1 = (float)fVar11;
          fVar11 = (float10)FUN_004fd5d0(0);
          if (bVar10) {
            *(float *)(iVar2 + 0x408e) = fVar1 + *(float *)(iVar2 + 0x408e);
            *(float *)(iVar2 + 0x408a) = (float)(fVar11 + (float10)*(float *)(iVar2 + 0x408a));
          }
          else {
            *(float *)(iVar2 + 0x4086) = fVar1 + *(float *)(iVar2 + 0x4086);
            *(float *)(iVar2 + 0x4082) = (float)(fVar11 + (float10)*(float *)(iVar2 + 0x4082));
          }
          *(float *)(iVar2 + 0x4092) = fVar1 + *(float *)(iVar2 + 0x4092);
          *(float *)(iVar2 + 0x4096) = (float)(fVar11 + (float10)*(float *)(iVar2 + 0x4096));
        }
      }
      fStack_18 = 0.0;
      piVar9 = *(int **)(iVar2 + 0x3b7e);
      while (piVar9 != (int *)0x0) {
        piVar3 = (int *)piVar9[2];
        piVar9 = (int *)*piVar9;
        bVar10 = (char)piVar9[0xf] == '\0';
        fStack_1c = 0.0;
        cVar5 = (**(code **)(*piVar9 + 0x14))();
        if (cVar5 == '\0') {
          cVar5 = (**(code **)(*piVar9 + 0x18))();
          if (((cVar5 != '\0') && (bVar10)) && (_DAT_007e3380 < *(float *)((int)piVar9 + 0x46))) {
            iVar6 = FUN_0044c5b0(*(undefined4 *)((int)piVar9 + 0x5a),
                                 *(undefined4 *)((int)piVar9 + 0x5e));
            iVar7 = FUN_0044c630(*(undefined4 *)((int)piVar9 + 0x5a));
            fStack_1c = *(float *)(iVar6 + 0x1c) + *(float *)(iVar7 + 0x1c);
          }
        }
        else {
          *(int *)(iVar2 + 0x3e52 + *(int *)((int)piVar9 + 0x5a) * 4) =
               *(int *)(iVar2 + 0x3e52 + *(int *)((int)piVar9 + 0x5a) * 4) +
               (piVar9[0xc] - piVar9[0xd]);
          if ((bVar10) && (_DAT_007e3380 < *(float *)((int)piVar9 + 0x46))) {
            iVar6 = FUN_0044c620(*(undefined4 *)((int)piVar9 + 0x5a));
            iVar7 = FUN_0044c3d0(*(undefined4 *)((int)piVar9 + 0x5a),
                                 *(undefined4 *)((int)piVar9 + 0x62));
            fStack_1c = *(float *)(iVar7 + 0x1c) + *(float *)(iVar6 + 0x1c);
            if (*(int *)((int)piVar9 + 0x5e) != 0) {
              iVar6 = FUN_0044c5b0(*(int *)((int)piVar9 + 0x5e),*(undefined4 *)((int)piVar9 + 0x76))
              ;
              iVar7 = FUN_0044c630(*(undefined4 *)((int)piVar9 + 0x5e));
              fStack_1c = *(float *)(iVar6 + 0x1c) + *(float *)(iVar7 + 0x1c) + fStack_1c;
            }
            cVar5 = FUN_004f3fa0();
            if (cVar5 != '\0') {
              if (*(int *)((int)piVar9 + 0x7a) != 0) {
                iVar6 = FUN_0044c5b0(*(int *)((int)piVar9 + 0x7a),
                                     *(undefined4 *)((int)piVar9 + 0x66));
                iVar7 = FUN_0044c630(*(undefined4 *)((int)piVar9 + 0x7a));
                fStack_1c = *(float *)(iVar6 + 0x1c) + *(float *)(iVar7 + 0x1c) + fStack_1c;
              }
              if (*(int *)((int)piVar9 + 0x7e) != 0) {
                iVar6 = FUN_0044c5b0(*(int *)((int)piVar9 + 0x7e),
                                     *(undefined4 *)((int)piVar9 + 0x6a));
                iVar7 = FUN_0044c630(*(undefined4 *)((int)piVar9 + 0x7e));
                fStack_1c = *(float *)(iVar6 + 0x1c) + *(float *)(iVar7 + 0x1c) + fStack_1c;
              }
              if (*(int *)((int)piVar9 + 0x82) != 0) {
                iVar6 = FUN_0044c5b0(*(int *)((int)piVar9 + 0x82),
                                     *(undefined4 *)((int)piVar9 + 0x6e));
                iVar7 = FUN_0044c630(*(undefined4 *)((int)piVar9 + 0x82));
                fStack_1c = *(float *)(iVar6 + 0x1c) + *(float *)(iVar7 + 0x1c) + fStack_1c;
              }
              if (*(int *)((int)piVar9 + 0x86) != 0) {
                iVar6 = FUN_0044c5b0(*(int *)((int)piVar9 + 0x86),
                                     *(undefined4 *)((int)piVar9 + 0x72));
                iVar7 = FUN_0044c630(*(undefined4 *)((int)piVar9 + 0x86));
                fStack_1c = *(float *)(iVar6 + 0x1c) + *(float *)(iVar7 + 0x1c) + fStack_1c;
              }
              fStack_1c = fStack_1c * _DAT_007e34c0;
            }
          }
        }
        fStack_18 = fStack_1c + fStack_18;
        piVar9 = piVar3;
      }
      *(undefined4 *)(iVar2 + 0x4082) = *(undefined4 *)(iVar2 + 0x4082);
      *(undefined4 *)(iVar2 + 0x4096) = *(undefined4 *)(iVar2 + 0x4096);
      *(float *)(iVar2 + 0x4086) = fStack_18 + *(float *)(iVar2 + 0x4086);
      *(float *)(iVar2 + 0x4092) = fStack_18 + *(float *)(iVar2 + 0x4092);
    }
    local_4 = local_4 + 1;
    local_c = local_c + 1;
    if (0x89d033 < (int)local_4) {
      return;
    }
  } while( true );
}


