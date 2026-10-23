// FUN_00665770 @ 665770 size=923

uint __thiscall FUN_00665770(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined3 uVar9;
  undefined3 extraout_var;
  int iVar10;
  int iVar11;
  int *piVar12;
  float10 fVar13;
  bool bStack_21;
  uint uStack_20;
  float fStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_8;
  
  iVar5 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))();
  if ((iVar5 != 0) && (*(int *)(param_2 + 0x176) != 0)) {
    return CONCAT31((int3)((uint)*(int *)(param_2 + 0x176) >> 8),1);
  }
  bStack_21 = *(int *)(param_2 + 0x264) == 0x1a;
  uStack_20 = 0;
  if (bStack_21) {
    iVar5 = FUN_004e9370(*(undefined4 *)(param_2 + 0x268));
    uStack_20 = *(uint *)(iVar5 + 0x12);
  }
  bStack_21 = !bStack_21;
  fStack_18 = 40.0;
  iStack_10 = 0;
  uVar6 = FUN_006a9d50();
  uVar7 = 0;
  uStack_14 = 0;
  if (0 < DAT_00877690) {
    do {
      if ((uStack_20 == 0) || (uStack_14 == uStack_20)) {
        iStack_8 = FUN_004e9370(uStack_14);
        if ((*(int *)(iStack_8 + 0x254) != 8) &&
           ((((*(int *)(iStack_8 + 0x254) != 9 && (*(char *)(iStack_8 + 0x470) != '\0')) &&
             (*(int *)(iStack_8 + 0x1aa) != 0)) && (*(int *)(iStack_8 + 0x3d8) != 0)))) {
          iVar5 = FUN_004e9370(*(undefined4 *)(iStack_8 + 0x3dc));
          cVar4 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x174) + 0x24))
                            (*(undefined4 *)(iVar5 + 0x288));
          if ((cVar4 == '\0') && (*(int *)(*(int *)(iStack_8 + 0x3d8) + 6) != 0x157)) {
            if (*(char *)(param_2 + 0x2ba) != '\0') {
              iVar5 = FUN_004e9370(*(undefined4 *)(iStack_8 + 0x3dc));
              uVar1 = *(undefined4 *)(iVar5 + 0x12);
              piVar12 = (int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x1aa);
              cVar4 = (**(code **)(*piVar12 + 0x24))(uVar1);
              if (cVar4 == '\0') {
                iVar5 = FUN_004e9370(uVar1);
                iVar10 = 0;
                if (0 < *(int *)(iVar5 + 0x290)) {
                  iVar11 = 0;
                  do {
                    iVar8 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar5 + 0x298) + iVar11));
                    cVar4 = (**(code **)(*piVar12 + 0x24))(*(undefined4 *)(iVar8 + 0x12));
                    if (cVar4 != '\0') goto LAB_0066594d;
                    iVar10 = iVar10 + 1;
                    iVar11 = iVar11 + 0xc;
                  } while (iVar10 < *(int *)(iVar5 + 0x290));
                }
                goto LAB_00665a4b;
              }
            }
LAB_0066594d:
            bVar3 = false;
            piVar12 = *(int **)(*(int *)(iStack_8 + 0x1aa) + 4);
            if (piVar12 == (int *)0x0) {
LAB_00665a12:
              cVar4 = FUN_0044a690(uVar6);
              if (cVar4 == '\0') goto LAB_00665a4b;
            }
            else {
              do {
                piVar2 = (int *)piVar12[2];
                iVar5 = *piVar12;
                if (((iVar5 != 0) && (iVar10 = *(int *)(iVar5 + 0x74), iVar10 != 4)) &&
                   ((iVar10 != 5 && (iVar10 != 6)))) {
                  iVar10 = (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 0x28) + 4))();
                  if (((0 < iVar10) &&
                      ((&DAT_0089cad8)[**(int **)(*(int *)(iVar5 + 0x80) + 0x2c)] != 0)) &&
                     (cVar4 = FUN_0044a690(uVar6), cVar4 != '\0')) {
                    bVar3 = true;
                  }
                  iVar10 = (**(code **)(*(int *)(*(int *)(iVar5 + 0x84) + 0x28) + 4))();
                  if (((0 < iVar10) &&
                      ((&DAT_0089cad8)[**(int **)(*(int *)(iVar5 + 0x84) + 0x2c)] != 0)) &&
                     (cVar4 = FUN_0044a690(uVar6), cVar4 != '\0')) {
                    bVar3 = true;
                  }
                }
                piVar12 = piVar2;
              } while (piVar2 != (int *)0x0);
              if ((!bVar3) || (cVar4 = FUN_0044b280(uVar6), cVar4 == '\0')) goto LAB_00665a12;
            }
            fVar13 = (float10)FUN_004ed6d0(*(undefined4 *)(param_2 + 0xc));
            if (fVar13 < (float10)fStack_18) {
              iStack_10 = *(int *)(iStack_8 + 0x12);
              fStack_18 = (float)fVar13;
            }
          }
        }
      }
LAB_00665a4b:
      uVar7 = uStack_14 + 1;
      uStack_14 = uVar7;
    } while ((int)uVar7 < DAT_00877690);
    if (iStack_10 != 0) {
      uVar9 = (undefined3)(uVar7 >> 8);
      if (bStack_21) {
        iStack_8 = CONCAT13(iStack_8._3_1_,0x10000);
        iStack_8 = CONCAT22(iStack_8._2_2_,0x100);
        iStack_8 = CONCAT31(iStack_8._1_3_,1);
        FUN_0050b600(param_2,0x1a,iStack_10,0x3e4ccccd,1,1,*(undefined4 *)(DAT_00893530 + 0x14),
                     *(undefined2 *)(DAT_00893530 + 0x18),iStack_8,9999,1,0xffffffff,0,1,0,
                     0xbf800000,1);
        uVar9 = extraout_var;
      }
      return CONCAT31(uVar9,1);
    }
  }
  if (*(int *)(param_2 + 0x264) == 0x1a) {
    uVar7 = FUN_0050bca0(param_2);
  }
  return uVar7 & 0xffffff00;
}


