// FUN_0069c7c0 @ 69c7c0 size=2044

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0069c7c0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int *local_b4;
  float fStack_b0;
  float fStack_ac;
  int *piStack_a0;
  int *piStack_9c;
  int iStack_98;
  float fStack_90;
  int local_88;
  int local_84;
  int local_80;
  float fStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  int iStack_68;
  int aiStack_54 [9];
  int aiStack_30 [9];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d571a;
  local_c = ExceptionList;
  iVar1 = *(int *)(*(int *)(param_1 + 10) + 0x120);
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar5 = FUN_004a30c0();
  if (DAT_00877554 < iVar5) {
    iVar5 = DAT_00877554;
  }
  iVar17 = 0;
  if (0 < iVar5) {
    do {
      FUN_0044ae20();
      iVar6 = FUN_00428ee0();
      if (iVar6 == 0) {
        iVar16 = 0;
LAB_0069c861:
        pvVar7 = operator_new(0xe);
        local_4._0_1_ = 1;
        if (pvVar7 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_0049a7a0();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar6 = local_80 + 1;
        bVar18 = local_80 != 0;
        iVar3 = iVar8;
        local_80 = iVar6;
        if (bVar18) {
          *(int *)(local_84 + 8) = iVar8;
          iVar3 = local_88;
        }
      }
      else {
        iVar16 = iVar6 + -8;
        if ((iVar16 == 0) || (iVar3 = local_88, iVar8 = local_84, *(int *)(iVar6 + 0xd0) == 0))
        goto LAB_0069c861;
      }
      local_84 = iVar8;
      local_88 = iVar3;
      if ((iVar16 != 0) && (*(int *)(iVar16 + 0xd8) == 0)) {
        FUN_00446d10();
        FUN_00667670();
        FUN_0044ae60();
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar5);
  }
  FUN_006a9d50();
  if (0 < local_80) {
    iVar5 = 0;
    piVar10 = *(int **)(*(int *)(param_1 + 10) + 0x3666);
    if (piVar10 != (int *)0x0) {
      do {
        piVar15 = (int *)piVar10[2];
        if ((*(int *)(*piVar10 + 0xd8) == 0) && (cVar4 = FUN_0075d000(), cVar4 != '\0')) {
          iVar5 = iVar5 + 1;
        }
        piVar10 = piVar15;
      } while (piVar15 != (int *)0x0);
      if (0 < iVar5) {
        (**(code **)(*(int *)(param_1 + 0x40) + 0x10))();
        iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x84);
        while (iVar5 != 0) {
          FUN_004b3f60();
          FUN_0045aac0();
          FUN_0069c610();
        }
        piStack_a0 = (int *)0x0;
        piStack_9c = (int *)0x0;
        iStack_98 = 0;
        local_4._1_3_ = (uint3)((uint)local_4 >> 8);
        local_4._0_1_ = 2;
        piVar15 = &DAT_00d4c3fa;
        fStack_ac = 0.0;
        piVar10 = aiStack_54;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        do {
          iVar5 = *piVar15;
          *(int *)((int)aiStack_30 + (int)fStack_ac) = 0;
          iVar5 = (**(code **)(iVar5 + 4))();
          *(int *)((int)aiStack_30 + (int)fStack_ac) = iVar5 + 1;
          puVar9 = (undefined4 *)FUN_00759730();
          iVar5 = puVar9[1];
          piVar10 = piStack_a0;
          piVar12 = piStack_9c;
          while (piStack_9c = piVar12, piStack_a0 = piVar10, iVar5 != 0) {
            iVar5 = *(int *)(iVar5 + 8);
            FUN_0044df10();
            piVar10 = (int *)FUN_0069cfd0();
            piVar11 = (int *)(**(code **)(*piVar10 + 0x28))();
            piVar10 = piStack_a0;
            piVar12 = piStack_9c;
            if (*piVar11 == 0) {
              pvVar7 = operator_new(0xe);
              local_4._0_1_ = 3;
              if (pvVar7 == (void *)0x0) {
                piVar12 = (int *)0x0;
              }
              else {
                piVar12 = (int *)FUN_0069d020();
              }
              local_4._0_1_ = 2;
              iVar17 = iStack_98 + 1;
              bVar18 = iStack_98 != 0;
              piVar10 = piVar12;
              iStack_98 = iVar17;
              if (bVar18) {
                piStack_9c[2] = (int)piVar12;
                piVar10 = piStack_a0;
              }
            }
          }
          if (puVar9 != (undefined4 *)0x0) {
            (**(code **)*puVar9)();
          }
          piVar15 = piVar15 + 0x15;
          fStack_ac = (float)((int)fStack_ac + 4);
        } while ((int)piVar15 < 0xd4c6ee);
        iVar5 = *(int *)(*(int *)(param_1 + 10) + 0x360c);
        while (iVar5 != 0) {
          iVar5 = *(int *)(iVar5 + 10);
          iVar17 = FUN_00428460();
          if ((iVar17 != 0) && (iVar17 != 8)) {
            aiStack_54[*(int *)(iVar17 + 0x76)] = aiStack_54[*(int *)(iVar17 + 0x76)] + 1;
          }
        }
        (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe) + 0xc))();
        FUN_00458570();
        puStack_70 = (undefined4 *)0x0;
        puStack_6c = (undefined4 *)0x0;
        iStack_68 = 0;
        local_4 = CONCAT31(local_4._1_3_,4);
        puVar9 = puStack_70;
        while ((0 < iStack_98 && (0 < local_80))) {
          piVar10 = (int *)0x0;
          fStack_78 = 0.0;
          local_b4 = piStack_a0;
          if (piStack_a0 == (int *)0x0) break;
          do {
            piVar15 = (int *)local_b4[2];
            local_b4 = (int *)*local_b4;
            iVar5 = FUN_0075a2b0();
            if (iVar5 == 0) {
              iVar5 = *(int *)((int)local_b4 + 0x7e);
              fStack_b0 = *(float *)(iVar1 + 4 + iVar5 * 4);
              if (_DAT_007e3380 < (float)aiStack_30[iVar5]) {
                fStack_b0 = fStack_b0 / ((float)aiStack_54[iVar5] / (float)aiStack_30[iVar5]);
              }
              FUN_0044df10();
              FUN_00667670();
              piVar12 = (int *)FUN_004582d0();
              (**(code **)(*piVar12 + 0x28))();
              FUN_0044df10();
              piVar12 = (int *)FUN_0069cfc0();
              (**(code **)(*piVar12 + 0x24))();
              FUN_0044df10();
              cVar4 = (**(code **)(*(int *)(param_1 + 0x40) + 0x24))();
              fVar2 = fStack_b0;
              if (cVar4 != '\0') {
                fVar2 = fStack_b0 + fStack_b0;
              }
              if (fStack_78 < fVar2) {
                piVar10 = local_b4;
                fStack_78 = fVar2;
              }
            }
            else {
              (*(code *)PTR_LAB_007e5dfc)();
              (*(code *)PTR_LAB_007e5df0)();
            }
            local_b4 = piVar15;
          } while (piVar15 != (int *)0x0);
          if (piVar10 == (int *)0x0) break;
          piVar15 = (int *)0x0;
          fStack_90 = 0.0;
          local_b4 = *(int **)(*(int *)(param_1 + 10) + 0x3666);
          if (local_b4 == (int *)0x0) break;
          do {
            piVar12 = (int *)*local_b4;
            local_b4 = (int *)local_b4[2];
            if ((piVar12[0x36] == 0) && (cVar4 = FUN_0075d000(), puVar13 = puVar9, cVar4 != '\0')) {
              for (; puVar13 != (undefined4 *)0x0; puVar13 = (undefined4 *)puVar13[2]) {
                cVar4 = (*(code *)PTR_LAB_007e4ae0)();
                if (cVar4 != '\0') {
                  if (puVar13 != (undefined4 *)0x0) goto LAB_0069cdf0;
                  break;
                }
              }
              fStack_ac = *(float *)((int)piVar12 + 0x16);
              iVar5 = 0;
              if (0 < *(int *)((int)piVar10 + 0x13a)) {
                do {
                  iVar17 = FUN_0075a0f0();
                  if (*(char *)(*(int *)(iVar17 + 0x16) + 0x1a + (int)piVar12) != '\0') {
                    fStack_ac = fStack_ac + _DAT_007e4090;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)((int)piVar10 + 0x13a));
              }
              if ((piVar15 == (int *)0x0) || (fStack_90 < fStack_ac)) {
                fStack_90 = fStack_ac;
                piVar15 = piVar12;
              }
            }
LAB_0069cdf0:
          } while (local_b4 != (int *)0x0);
          if (piVar15 == (int *)0x0) break;
          puVar13 = operator_new(0xe);
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = (undefined4 *)0x0;
          }
          else {
            *puVar13 = piVar15;
            puVar13[1] = puStack_6c;
            puVar13[2] = 0;
            *(undefined1 *)(puVar13 + 3) = 0;
          }
          puStack_70 = puVar13;
          if (iStack_68 != 0) {
            puStack_6c[2] = puVar13;
            puStack_70 = puVar9;
          }
          (*(code *)PTR_LAB_007e37b4)();
          (*(code *)PTR_LAB_007e37a8)();
          FUN_00447250();
          FUN_00449290();
          FUN_00667670();
          FUN_00461bc0();
          FUN_00447250();
          uVar14 = FUN_0044df10();
          FUN_00446d10(uVar14);
          FUN_00667670();
          FUN_0045f460();
          (**(code **)(*piVar15 + 0xc))();
          (**(code **)(*piVar10 + 0xc))();
          FUN_00458570();
          (**(code **)((int)fStack_b0 + 0x28))();
          (**(code **)((int)fStack_b0 + 0x1c))();
          aiStack_54[*(int *)((int)piVar10 + 0x7e)] = aiStack_54[*(int *)((int)piVar10 + 0x7e)] << 1
          ;
          puVar9 = puStack_70;
          puStack_6c = puVar13;
          iStack_68 = iStack_68 + 1;
        }
        while (puVar9 != (undefined4 *)0x0) {
          puVar9 = (undefined4 *)puVar9[2];
          FUN_00796cd8();
        }
        while (piStack_a0 != (int *)0x0) {
          piStack_a0 = (int *)piStack_a0[2];
          FUN_00796cd8();
        }
        while (local_88 != 0) {
          local_88 = *(int *)(local_88 + 8);
          FUN_00796cd8();
        }
        ExceptionList = local_c;
        return;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_004174b0();
  ExceptionList = local_c;
  return;
}


