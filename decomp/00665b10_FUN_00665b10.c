// FUN_00665b10 @ 665b10 size=934

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00665b10(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  float fVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float10 fVar14;
  int iStack_24;
  int iStack_20;
  int iStack_18;
  float fStack_8;
  
  iVar8 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))();
  if ((iVar8 != 0) && (*(int *)(param_2 + 0x176) != 0)) {
    return 1;
  }
  bVar4 = true;
  if (*(int *)(param_2 + 0x264) == 0x1e) {
    iVar8 = FUN_0051b230();
    if ((*(int *)(iVar8 + 0x254) == 8) || (*(int *)(iVar8 + 0x254) == 9)) {
      bVar4 = false;
    }
    else {
      iVar8 = FUN_004e9370(*(undefined4 *)(param_2 + 0x268));
      iVar8 = (**(code **)(*(int *)(*(int *)(iVar8 + 0x46a) + 0x30) + 4))();
      if (iVar8 == 0) {
        FUN_0050bca0(param_2);
      }
    }
    cVar7 = FUN_00516d10();
    if (cVar7 == '\0') goto LAB_00665e9e;
    if (!bVar4) {
      return 0;
    }
  }
  fVar5 = _DAT_007e3380;
  for (piVar13 = *(int **)(param_2 + 0x26); piVar13 != (int *)0x0; piVar13 = (int *)piVar13[2]) {
    fVar5 = *(float *)(*piVar13 + 0x2e0) * *(float *)(*piVar13 + 0xec) * _DAT_007e46cc + fVar5;
  }
  iStack_20 = 0;
  uVar9 = FUN_006a9d50();
  iStack_18 = 0;
  if (0 < DAT_00877690) {
    do {
      iVar8 = FUN_004e9370(iStack_18);
      if ((((*(int *)(iVar8 + 0x46a) != 0) && (*(int *)(iVar8 + 0x3d8) != 0)) &&
          (cVar7 = FUN_0044b280(uVar9), cVar7 != '\0')) &&
         (iVar10 = (**(code **)(*(int *)(*(int *)(iVar8 + 0x46a) + 0x30) + 4))(), iVar10 != 0)) {
        iVar10 = FUN_004e9370(*(undefined4 *)(iVar8 + 0x3dc));
        cVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x174) + 0x24))
                          (*(undefined4 *)(iVar10 + 0x288));
        if (cVar7 == '\0') {
          if (*(char *)(param_2 + 0x2ba) != '\0') {
            iVar10 = FUN_004e9370(*(undefined4 *)(iVar8 + 0x3dc));
            uVar2 = *(undefined4 *)(iVar10 + 0x12);
            piVar13 = (int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x1aa);
            cVar7 = (**(code **)(*piVar13 + 0x24))(uVar2);
            if (cVar7 == '\0') {
              iVar10 = FUN_004e9370(uVar2);
              iStack_24 = 0;
              if (0 < *(int *)(iVar10 + 0x290)) {
                iVar12 = 0;
                do {
                  iVar11 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar10 + 0x298) + iVar12));
                  cVar7 = (**(code **)(*piVar13 + 0x24))(*(undefined4 *)(iVar11 + 0x12));
                  if (cVar7 != '\0') goto LAB_00665d5a;
                  iStack_24 = iStack_24 + 1;
                  iVar12 = iVar12 + 0xc;
                } while (iStack_24 < *(int *)(iVar10 + 0x290));
              }
              goto LAB_00665e06;
            }
          }
LAB_00665d5a:
          fVar14 = (float10)FUN_004ed6d0(*(undefined4 *)(param_2 + 0xc));
          if (fVar14 < (float10)_DAT_007e6b28) {
            fVar14 = (float10)FUN_004ed1a0();
            fVar1 = (float)(fVar14 * (float10)_DAT_007e682c);
            iVar10 = FUN_00527b40();
            fStack_8 = (float)iVar10;
            puVar6 = *(undefined4 **)(*(int *)(iVar8 + 0x1c2) + 4);
            while (puVar6 != (undefined4 *)0x0) {
              puVar3 = (undefined4 *)puVar6[2];
              piVar13 = (int *)*puVar6;
              cVar7 = (**(code **)(*piVar13 + 0x30))();
              puVar6 = puVar3;
              if (cVar7 != '\0') {
                iVar10 = (**(code **)(*piVar13 + 0xac))();
                fVar1 = (float)(iVar10 * 5) + fVar1;
              }
            }
            if ((fVar1 < fVar5) && ((float)iStack_20 < fStack_8)) {
              iStack_20 = *(int *)(iVar8 + 0x12);
            }
          }
        }
      }
LAB_00665e06:
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < DAT_00877690);
    if (iStack_20 != 0) {
      fStack_8 = (float)CONCAT13(fStack_8._3_1_,0x10000);
      fStack_8 = (float)CONCAT22(fStack_8._2_2_,0x100);
      fStack_8 = (float)CONCAT31(fStack_8._1_3_,1);
      FUN_0050b600(param_2,0x1e,iStack_20,0x3e4ccccd,1,1,*(undefined4 *)(DAT_00893530 + 0x14),
                   *(undefined2 *)(DAT_00893530 + 0x18),fStack_8,9999,1,0xffffffff,0,1,0,0xbf800000,
                   1);
      return 1;
    }
  }
  if (*(int *)(param_2 + 0x264) != 0x1e) {
    return 0;
  }
LAB_00665e9e:
  FUN_0050bca0(param_2);
  return 0;
}


