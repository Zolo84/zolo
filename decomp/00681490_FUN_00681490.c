// FUN_00681490 @ 681490 size=2109

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00681490(int *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int *unaff_EBX;
  int unaff_EBP;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  int iStack_3c;
  int *piStack_34;
  int *piStack_28;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [4];
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  iVar7 = (**(code **)(*param_1 + 4))();
  iStack_3c = (**(code **)(param_1[0x28] + 4))();
  FUN_004e9370();
  if (*(int *)(param_2 + 4) != 0) {
    iVar8 = FUN_004e9370();
    piVar3 = *(int **)(*(int *)(iVar8 + 0x1c2) + 4);
    while (piVar3 != (int *)0x0) {
      piVar11 = (int *)piVar3[2];
      piVar2 = (int *)*piVar3;
      cVar6 = (**(code **)(*piVar2 + 0x28))();
      piVar3 = piVar11;
      if ((cVar6 != '\0') &&
         (iVar8 = *(int *)(piVar2[0x92] + 0x12da), iVar9 = FUN_006a9d50(),
         *(char *)(iVar8 + (iVar9 + 1) * 0x2c) != '\0')) {
        return 0;
      }
    }
  }
  piStack_34 = *(int **)(param_2 + 0x48);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (piStack_34 == (int *)0x0) {
              return 1;
            }
            piVar3 = (int *)*piStack_34;
            iVar8 = (**(code **)(piVar3[0x47] + 4))();
            if (iVar8 == 0) break;
            piStack_34 = (int *)piStack_34[2];
          }
          cVar6 = (**(code **)(*(int *)((int)piVar3 + 0x22e) + 8))();
          if (cVar6 != '\0') break;
          piStack_34 = (int *)piStack_34[2];
        }
        if (*(int *)((int)piVar3 + 0x176) == 0) break;
        piStack_34 = (int *)piStack_34[2];
      }
      if (*(char *)((int)piVar3 + 0x17b) == '\0') break;
      piStack_34 = (int *)piStack_34[2];
    }
    (**(code **)(*piVar3 + 0x10))();
    fVar16 = (float10)FUN_00525b10();
    fVar1 = (float)fVar16;
    piVar11 = *(int **)((int)piVar3 + 0x26);
    while ((piVar11 != (int *)0x0 &&
           (iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))(), 1 < iVar8))) {
      piStack_28 = (int *)piVar11[2];
      fVar4 = *(float *)(*piVar11 + 0xf4);
      fVar17 = (float10)FUN_004fd510();
      fVar16 = (float10)_DAT_007e4088;
      fVar18 = (float10)FUN_004fd510();
      piVar11 = piStack_28;
      if ((float10)_DAT_007e685c <
          (float10)(float)((fVar17 - (float10)fVar4) * fVar16) / fVar18 - (float10)fVar1) {
        FUN_00522770();
        FUN_00689890(auStack_10);
        FUN_00428ee0();
        FUN_0045e6c0();
        (**(code **)(*piVar3 + 0x10))();
        fVar16 = (float10)FUN_00525b10();
        fVar1 = (float)fVar16;
        FUN_00447250();
        cVar6 = (**(code **)(param_1[0x32] + 0x24))();
        if (cVar6 != '\0') {
          FUN_0049a190();
        }
        iStack_3c = iStack_3c + 1;
      }
    }
    iVar9 = (**(code **)(*piVar3 + 0x1c))();
    (**(code **)(*piVar3 + 0xbc))();
    FUN_0051c480();
    iVar8 = FUN_0050a580();
    iVar10 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
    iVar8 = iVar8 - iVar10;
    if ((iVar8 < 1) || (unaff_EBP <= (int)piStack_28)) {
      puVar14 = *(undefined4 **)(CONCAT22(uStack_2,uStack_4) + 0x48);
joined_r0x00681a4e:
      if (puVar14 != (undefined4 *)0x0) {
        iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
        if (iVar8 < 4) goto LAB_00681bc1;
        FUN_0051c480();
        iVar8 = FUN_0050a580();
        iVar9 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
        if (iVar9 <= iVar8) goto LAB_00681bc1;
        puVar5 = (undefined4 *)puVar14[2];
        piVar11 = (int *)*puVar14;
        cVar6 = (**(code **)(*piVar11 + 0x28))();
        puVar14 = puVar5;
        param_1 = unaff_EBX;
        if ((((cVar6 != '\0') && (piVar11 != piVar3)) &&
            (cVar6 = (**(code **)(*(int *)((int)piVar11 + 0x22e) + 8))(), cVar6 != '\0')) &&
           ((iVar8 = (**(code **)(piVar11[0x47] + 4))(), iVar8 == 0 &&
            (*(int *)((int)piVar11 + 0x176) == 0)))) {
          iVar8 = FUN_00522770();
          iVar9 = FUN_00522770();
          if ((iVar8 == iVar9) && (cVar6 = FUN_0051cc00(), cVar6 == '\0')) {
            iVar8 = FUN_0051a360();
            iVar9 = FUN_0051a360();
            if ((iVar8 == 2) == (iVar9 == 2)) {
              (**(code **)(*piVar11 + 0xbc))();
              do {
                iVar8 = (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))();
                if (3 < iVar8) {
                  FUN_0051c480();
                  iVar8 = FUN_0050a580();
                  iVar9 = (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))();
                  if (iVar8 + -1 <= iVar9) break;
                }
                iVar8 = (**(code **)(*piVar3 + 0x24))();
                if ((iVar8 == 0) ||
                   ((iVar9 = (**(code **)(*piVar11 + 0x1c))(0x8c,0), 0 < iVar9 &&
                    (iVar9 = (**(code **)(*piVar11 + 0x20))(), iVar9 != *(int *)(iVar8 + 0x134)))))
                break;
                FUN_0045e6c0(piVar11,iVar8);
              } while( true );
            }
          }
        }
        goto joined_r0x00681a4e;
      }
LAB_00681bc1:
      iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
      if (iVar8 < 4) {
LAB_00681bec:
        if ((iVar7 <= iStack_3c) ||
           (iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))(), iVar8 < 2))
        goto LAB_00681cac;
      }
      else {
        FUN_0051c480();
        iVar8 = FUN_0050a580();
        iVar9 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
        if (iVar9 <= iVar8) goto LAB_00681bec;
      }
      iVar8 = (**(code **)(*piVar3 + 0x24))();
      if (iVar8 != 0) {
        FUN_00522770();
        FUN_00689890(auStack_8);
        FUN_00428ee0();
        FUN_0045e6c0();
        FUN_00447250();
        cVar6 = (**(code **)(param_1[0x32] + 0x24))();
        if (cVar6 != '\0') {
          FUN_0049a190();
        }
        iStack_3c = iStack_3c + 1;
      }
    }
    else {
      piStack_34 = *(int **)(CONCAT22(uStack_2,uStack_4) + 0x48);
      piVar11 = operator_new(0x14);
      if (piVar11 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        *piVar11 = (int)&PTR_FUN_007e4c84;
        piVar11[1] = 0;
        piVar11[2] = 0;
        piVar11[3] = 0;
        *(undefined1 *)(piVar11 + 4) = 0;
      }
      while (((piStack_34 != (int *)0x0 && (0 < iVar8)) && ((int)piStack_28 < unaff_EBP))) {
        piVar2 = (int *)*piStack_34;
        piStack_34 = (int *)piStack_34[2];
        cVar6 = (**(code **)(*piVar2 + 0x28))();
        param_1 = unaff_EBX;
        if (((cVar6 != '\0') && (piVar2 != piVar3)) &&
           ((cVar6 = (**(code **)(*(int *)((int)piVar2 + 0x22e) + 8))(), cVar6 != '\0' &&
            ((iVar10 = (**(code **)(piVar2[0x47] + 4))(), iVar10 == 0 &&
             (*(int *)((int)piVar2 + 0x176) == 0)))))) {
          iVar10 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
          if (iVar10 <= iVar8) {
            iVar10 = FUN_00522770();
            iVar12 = FUN_00522770();
            if (((iVar10 == iVar12) && (cVar6 = FUN_0051cc00(), cVar6 == '\0')) &&
               (cVar6 = FUN_0051cc00(), cVar6 == '\0')) {
              iVar10 = FUN_0051a360();
              iVar12 = FUN_0051a360();
              if ((iVar10 == 2) == (iVar12 == 2)) {
                FUN_0051a2f0();
                FUN_0051a2f0();
                uVar13 = __ftol();
                if (((int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) < 3) &&
                   (((iVar9 < 1 && (iVar10 = (**(code **)(*piVar2 + 0x1c))(0x8c,0), iVar10 < 1)) ||
                    (iVar10 = FUN_0068a750(piVar3,piVar2), iVar10 != 0)))) {
                  (**(code **)(*piVar2 + 0x10))();
                  FUN_00525b10();
                  uVar13 = __ftol();
                  if ((float)(int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
                      _DAT_007e6858) {
                    (**(code **)(*piVar3 + 0x10))();
                    FUN_00525ba0();
                    (**(code **)(*piVar2 + 0x10))();
                    FUN_00525ba0();
                    uVar13 = __ftol();
                    if ((float)(int)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) <
                        _DAT_007f3a9c) {
                      iVar10 = piVar11[2];
                      puVar14 = operator_new(0xe);
                      if (puVar14 == (undefined4 *)0x0) {
                        puVar14 = (undefined4 *)0x0;
                      }
                      else {
                        *puVar14 = piVar2;
                        puVar14[1] = iVar10;
                        puVar14[2] = 0;
                        *(undefined1 *)(puVar14 + 3) = 0;
                      }
                      iVar12 = piVar11[3];
                      piVar11[2] = (int)puVar14;
                      piVar11[3] = iVar12 + 1;
                      if (iVar12 == 0) {
                        piVar11[1] = (int)puVar14;
                      }
                      else {
                        *(undefined4 **)(iVar10 + 8) = puVar14;
                      }
                      iVar10 = unaff_EBX[7];
                      uVar15 = (**(code **)(*(int *)(DAT_00ab27b4 +
                                                    *(int *)(CONCAT22(uStack_2,uStack_4) + 4) *
                                                    0x4b2) + 0xc))();
                      uVar15 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))
                                         (*(undefined4 *)((int)piVar3 + 0x1a),uVar15);
                      uVar15 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))
                                         (*(undefined4 *)((int)piVar2 + 0x1a),uVar15);
                      FUN_00458570(s__s_merges_a_size__d_army____d__i_00867c84,iVar10 + 0x1b,uVar15)
                      ;
                      iVar10 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
                      iVar8 = iVar8 - iVar10;
                      unaff_EBP = unaff_EBP + -1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar8 = (**(code **)(*piVar11 + 4))();
      if (0 < iVar8) {
        uVar15 = (**(code **)(*piVar11 + 4))();
        FUN_00458570(s_Merge_list_contains__d_units__00867c64,uVar15);
        FUN_006aa780(piVar3,piVar11);
      }
      (**(code **)(*piVar11 + 0x14))();
      if (piVar11 != (int *)0x0) {
        (**(code **)*piVar11)();
      }
    }
LAB_00681cac:
    piStack_34 = (int *)piStack_34[2];
  } while( true );
}


