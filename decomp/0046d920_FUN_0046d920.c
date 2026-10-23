// FUN_0046d920 @ 46d920 size=1877

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0046d920(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  float10 fVar18;
  float fStack_5c;
  float fStack_54;
  int *local_44;
  int *local_40;
  int local_3c;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bcbe8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00457e10();
  local_4 = 0;
  piVar1 = (int *)param_1[0x1142];
joined_r0x0046d963:
  do {
    piVar13 = piStack_18;
    piVar3 = piStack_1c;
    if (piVar1 == (int *)0x0) {
      local_44 = (int *)0x0;
      local_40 = (int *)0x0;
      local_3c = 0;
      local_4._1_3_ = (uint3)((uint)local_4 >> 8);
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar1 = (int *)param_1[0x45fe];
      while (piVar15 = local_40, piVar16 = local_44, piVar13 = piVar3, piVar1 != (int *)0x0) {
        piVar13 = (int *)piVar1[2];
        iVar14 = *piVar1;
        cVar8 = FUN_00509ed0();
        piVar1 = piVar13;
        local_44 = piVar16;
        local_40 = piVar15;
        if ((cVar8 != '\0') && (*(char *)(iVar14 + 0x2c) == '\0')) {
          local_40 = operator_new(0xe);
          if (local_40 == (int *)0x0) {
            local_40 = (int *)0x0;
          }
          else {
            *local_40 = iVar14;
            local_40[1] = (int)piVar15;
            local_40[2] = 0;
            *(undefined1 *)(local_40 + 3) = 0;
          }
          iVar14 = local_3c + 1;
          bVar17 = local_3c != 0;
          local_44 = local_40;
          local_3c = iVar14;
          if (bVar17) {
            piVar15[2] = (int)local_40;
            local_44 = piVar16;
          }
        }
      }
      while (piVar13 != (int *)0x0) {
        piVar1 = (int *)*piVar13;
        piVar13 = (int *)piVar13[2];
        (**(code **)(*piVar1 + 0xc))();
        (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
        FUN_00458570();
        fStack_54 = (float)piVar1[0x46];
        piVar15 = (int *)0x0;
        piVar11 = (int *)FUN_00522770();
        if (piVar11 == param_1) {
          piVar11 = piVar16;
          if (piVar16 != (int *)0x0) {
            do {
              piVar2 = (int *)piVar11[2];
              piVar11 = (int *)*piVar11;
              cVar8 = FUN_00509f10();
              if (cVar8 != '\0') {
                iVar14 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
                iVar9 = FUN_0050a580();
                if (iVar9 < iVar14) {
                  fVar5 = (float)*(int *)((int)piVar11 + 0x32) * _DAT_007e34c0;
                  iVar14 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
                  iVar9 = FUN_0050a580();
                  fVar18 = (float10)fVar5 / (float10)(iVar14 - iVar9);
                }
                else {
                  fVar18 = (float10)FUN_0046c9d0();
                }
                if ((float10)fStack_54 < fVar18) {
                  fStack_54 = (float)fVar18;
                  piVar15 = piVar11;
                }
              }
              piVar11 = piVar2;
            } while (piVar2 != (int *)0x0);
            if (piVar15 != (int *)0x0) {
              (**(code **)(*piVar1 + 0xc))();
              (**(code **)(*piVar15 + 0xc))();
              FUN_00458570();
              FUN_0044df10();
              uVar12 = FUN_00447250();
              FUN_00449290(uVar12);
              FUN_00461a90();
              (*(code *)PTR_LAB_007e3b58)();
              (*(code *)PTR_LAB_007e3b4c)();
            }
          }
        }
        else {
          iVar14 = FUN_00522770();
          piVar11 = *(int **)(iVar14 + 0x117f8);
          if (*(int **)(iVar14 + 0x117f8) != (int *)0x0) {
            do {
              piVar2 = (int *)piVar11[2];
              piVar11 = (int *)*piVar11;
              cVar8 = FUN_00509ed0();
              if (((cVar8 != '\0') && ((char)piVar11[0xb] == '\0')) &&
                 (cVar8 = FUN_00509f10(), cVar8 != '\0')) {
                iVar14 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
                iVar9 = FUN_0050a580();
                if (iVar9 < iVar14) {
                  fVar5 = (float)*(int *)((int)piVar11 + 0x32) * _DAT_007e34c0;
                  iVar14 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
                  iVar9 = FUN_0050a580();
                  fVar18 = (float10)fVar5 / (float10)(iVar14 - iVar9);
                }
                else {
                  fVar18 = (float10)FUN_0046c9d0();
                }
                if ((float10)fStack_54 < fVar18) {
                  fStack_54 = (float)fVar18;
                  piVar15 = piVar11;
                }
              }
              piVar11 = piVar2;
            } while (piVar2 != (int *)0x0);
            if (piVar15 != (int *)0x0) {
              (**(code **)(*piVar1 + 0xc))();
              (**(code **)(*piVar15 + 0xc))();
              FUN_00458570();
              FUN_0044df10();
              uVar12 = FUN_00447250();
              FUN_00449290(uVar12);
              FUN_00522770();
              FUN_00461a90();
            }
          }
        }
      }
      puStack_30 = (undefined4 *)0x0;
      puStack_2c = (undefined4 *)0x0;
      iStack_28 = 0;
      local_4._1_3_ = (uint3)((uint)local_4 >> 8);
      local_4 = CONCAT31(local_4._1_3_,2);
      cVar8 = (**(code **)(*param_1 + 0x1c))();
      if (cVar8 != '\0') {
        while (puVar7 = puStack_2c, puVar6 = puStack_30, piVar3 != (int *)0x0) {
          piVar1 = (int *)*piVar3;
          piVar3 = (int *)piVar3[2];
          cVar8 = (**(code **)(*piVar1 + 0x28))();
          puStack_30 = puVar6;
          puStack_2c = puVar7;
          if (((cVar8 != '\0') && (cVar8 = FUN_0051cc00(), cVar8 != '\0')) &&
             ((cVar8 = FUN_0051cc30(), cVar8 == '\0' &&
              (piVar13 = (int *)FUN_00522770(), piVar13 == param_1)))) {
            (**(code **)(*piVar1 + 0xc))();
            (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))();
            FUN_00458570();
            piVar13 = (int *)param_1[0x1142];
            piVar16 = (int *)0x0;
            fStack_5c = 0.0;
            if (piVar13 != (int *)0x0) {
              do {
                piVar15 = (int *)*piVar13;
                piVar13 = (int *)piVar13[2];
                cVar8 = (**(code **)(*piVar15 + 0x28))();
                if (((cVar8 != '\0') && (piVar11 = (int *)FUN_00522770(), piVar11 == param_1)) &&
                   ((cVar8 = FUN_0051cc00(), cVar8 == '\0' &&
                    ((*(int *)((int)piVar15 + 0x14a) != 0 &&
                     (iVar14 = FUN_0051c480(), *(int *)(iVar14 + 0x22) < 2)))))) {
                  FUN_0051c480();
                  fVar18 = (float10)FUN_0046c9d0();
                  if ((float10)fStack_5c < fVar18) {
                    FUN_0051c480();
                    for (puVar4 = puVar6; puVar4 != (undefined4 *)0x0;
                        puVar4 = (undefined4 *)puVar4[2]) {
                      cVar8 = (*(code *)PTR_LAB_007e3b3c)();
                      if (cVar8 != '\0') {
                        if (puVar4 != (undefined4 *)0x0) goto LAB_0046df53;
                        break;
                      }
                    }
                    piVar16 = (int *)FUN_0051c480();
                    fStack_5c = (float)fVar18;
                  }
                }
LAB_0046df53:
              } while (piVar13 != (int *)0x0);
              if (piVar16 != (int *)0x0) {
                (**(code **)(*piVar1 + 0xc))();
                (**(code **)(*piVar16 + 0xc))();
                FUN_00458570();
                FUN_0044df10();
                uVar12 = FUN_00447250();
                FUN_00449290(uVar12);
                FUN_00461a90();
                puStack_2c = operator_new(0xe);
                if (puStack_2c == (undefined4 *)0x0) {
                  puStack_2c = (undefined4 *)0x0;
                }
                else {
                  *puStack_2c = piVar16;
                  puStack_2c[1] = puVar7;
                  puStack_2c[2] = 0;
                  *(undefined1 *)(puStack_2c + 3) = 0;
                }
                iVar14 = iStack_28 + 1;
                bVar17 = iStack_28 != 0;
                puStack_30 = puStack_2c;
                iStack_28 = iVar14;
                if (bVar17) {
                  puVar7[2] = puStack_2c;
                  puStack_30 = puVar6;
                }
              }
            }
          }
        }
      }
      (*(code *)PTR_LAB_007e3b40)();
      (*(code *)PTR_LAB_007e3b40)();
      (*(code *)PTR_FUN_007e4c94)();
      local_4._0_1_ = 1;
      FUN_00425c10();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00425c10();
      local_4 = 0xffffffff;
      FUN_00527230();
      ExceptionList = pvStack_c;
      return;
    }
    piVar16 = (int *)piVar1[2];
    iVar14 = *piVar1;
    *(undefined4 *)(iVar14 + 0x118) = 0;
    iVar9 = (**(code **)(*(int *)(iVar14 + 0x22) + 4))();
    piVar1 = piVar16;
    piStack_1c = piVar3;
    piStack_18 = piVar13;
  } while (iVar9 == 0);
  if (*(int *)(iVar14 + 0x14a) != 0) goto code_r0x0046d997;
  goto LAB_0046da04;
code_r0x0046d997:
  cVar8 = (**(code **)(*param_1 + 0x1c))();
  if (cVar8 != '\0') {
    FUN_0051c480();
    fVar18 = (float10)FUN_0046c9d0();
    *(float *)(iVar14 + 0x118) = (float)(fVar18 + (float10)_DAT_007e68c4);
    FUN_0051c480();
    iVar9 = FUN_0050a580();
    iVar10 = (**(code **)(*(int *)(iVar14 + 0x22) + 4))();
    if ((iVar9 < iVar10) ||
       ((cVar8 = FUN_0051cc00(), cVar8 != '\0' && (cVar8 = FUN_0051cc30(), cVar8 == '\0')))) {
LAB_0046da04:
      iVar9 = FUN_00523860();
      bVar17 = false;
      *(float *)(iVar14 + 0x216) = (float)iVar9;
      piVar16 = piVar3;
      if (piVar3 != (int *)0x0) {
        do {
          if (bVar17) goto joined_r0x0046d963;
          if (*(float *)(*piVar16 + 0x216) < *(float *)(iVar14 + 0x216)) {
            FUN_004738b0();
            bVar17 = true;
          }
          piVar16 = (int *)piVar16[2];
        } while (piVar16 != (int *)0x0);
        if (bVar17) goto joined_r0x0046d963;
      }
      piStack_18 = operator_new(0xe);
      if (piStack_18 == (int *)0x0) {
        piStack_18 = (int *)0x0;
      }
      else {
        *piStack_18 = iVar14;
        piStack_18[1] = (int)piVar13;
        piStack_18[2] = 0;
        *(undefined1 *)(piStack_18 + 3) = 0;
      }
      iVar14 = iStack_14 + 1;
      bVar17 = iStack_14 != 0;
      piStack_1c = piStack_18;
      iStack_14 = iVar14;
      if (bVar17) {
        piVar13[2] = (int)piStack_18;
        piStack_1c = piVar3;
      }
    }
  }
  goto joined_r0x0046d963;
}


