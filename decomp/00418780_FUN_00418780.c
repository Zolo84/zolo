// FUN_00418780 @ 418780 size=1983

undefined4 FUN_00418780(void)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined3 uVar10;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  char in_stack_00000030;
  void *in_stack_00001250;
  undefined4 uStack_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = (undefined4 *)&LAB_007b9e02;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  uVar4 = FUN_007a69e0();
  uVar10 = (undefined3)((uint)uVar4 >> 8);
  if (DAT_00877220 != '\0') {
    iVar5 = CONCAT31(uVar10,DAT_00dc3a00);
    uStack_c = (void *)((uint)uStack_c & 0xffffff);
    if (DAT_00dc3a00 != '\0') {
      FUN_007a630a();
      iVar5 = FUN_007a7c64();
      if (iVar5 != -1) {
        do {
          FUN_007a630a();
          puVar6 = operator_new(0x30);
          local_8 = puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            FUN_00418f40();
            *puVar6 = &PTR_FUN_007e381c;
            puVar6[2] = &PTR_LAB_007e3818;
            DAT_0088ebfc = DAT_0088ebfc + 1;
            if (DAT_0088ebfc == 1) {
              pvVar7 = operator_new(0xc);
              if (pvVar7 == (void *)0x0) {
                DAT_0088ec00 = (int *)0x0;
              }
              else {
                DAT_0088ec00 = (int *)FUN_00419580();
              }
              FUN_00418780();
            }
            pvVar7 = operator_new(0x94);
            if (pvVar7 == (void *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_00416730();
            }
            puVar6[3] = uVar4;
            FUN_00418530();
          }
          if (in_stack_00000030 != '\0') {
            puVar13 = &stack0x00000030;
            do {
              uVar2 = FUN_007a76c0();
              *puVar13 = uVar2;
              pcVar14 = puVar13 + 1;
              puVar13 = puVar13 + 1;
            } while (*pcVar14 != '\0');
          }
          cVar3 = FUN_00417fa0();
          if (cVar3 == '\0') {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_004af6b0();
          }
          puVar6[5] = uVar4;
          cVar3 = FUN_00417fa0();
          if (cVar3 != '\0') {
            iVar5 = 0;
            pcVar14 = s_infantry_0082f438;
            do {
              iVar8 = FUN_007a8730();
              if (iVar8 == 0) {
                uVar4 = (&DAT_0082f538)[iVar5 * 0x41];
                goto LAB_004189a1;
              }
              pcVar14 = pcVar14 + 0x104;
              iVar5 = iVar5 + 1;
            } while ((int)pcVar14 < 0x838268);
          }
          uVar4 = 0x8c;
LAB_004189a1:
          puVar6[4] = uVar4;
          cVar3 = FUN_00417fa0();
          if (cVar3 != '\0') {
            iVar5 = 0;
            pcVar14 = s_stand_00838268;
            do {
              iVar8 = FUN_007a8730();
              if (iVar8 == 0) {
                uVar4 = (&DAT_00838368)[iVar5 * 0x41];
                goto LAB_00418a10;
              }
              pcVar14 = pcVar14 + 0x104;
              iVar5 = iVar5 + 1;
            } while ((int)pcVar14 < 0x838678);
          }
          uVar4 = 4;
LAB_00418a10:
          puVar6[6] = uVar4;
          cVar3 = FUN_00417fa0();
          if (cVar3 != '\0') {
            iVar5 = 0;
            puVar16 = &DAT_00838678;
            do {
              iVar8 = FUN_007a8730();
              if (iVar8 == 0) {
                uVar4 = (&DAT_00838778)[iVar5 * 0x41];
                goto LAB_00418a61;
              }
              puVar16 = puVar16 + 0x104;
              iVar5 = iVar5 + 1;
            } while ((int)puVar16 < 0x8390a0);
          }
          uVar4 = 10;
LAB_00418a61:
          puVar6[7] = uVar4;
          local_8 = (undefined4 *)0x1;
          cVar3 = FUN_00418010();
          puVar9 = (undefined4 *)(undefined1 *)0x1;
          if (cVar3 != '\0') {
            puVar9 = local_8;
          }
          puVar6[8] = puVar9;
          FUN_00534930();
          (**(code **)(*(int *)puVar6[3] + 8))();
          piVar1 = DAT_0088ec00;
          puVar15 = puVar6 + 4;
          puVar9 = (undefined4 *)register0x00000010;
          for (iVar5 = 5; puVar9 = puVar9 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *puVar15;
            puVar15 = puVar15 + 1;
          }
          iVar5 = FUN_00419540();
          puVar9 = operator_new(8);
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            uVar4 = *(undefined4 *)(piVar1[2] + iVar5 * 4);
            *puVar9 = puVar6;
            puVar9[1] = uVar4;
          }
          *(undefined4 **)(piVar1[2] + iVar5 * 4) = puVar9;
          *piVar1 = *piVar1 + 1;
          uVar4 = (**(code **)(*(int *)puVar6[3] + 0x4c))();
          iVar5 = puVar6[3];
          uStack_c = (void *)CONCAT13(1,(undefined3)uStack_c);
          *(undefined4 *)(iVar5 + 0x22) = 0;
          *(undefined4 *)(iVar5 + 0x26) = uVar4;
          *(undefined1 *)(iVar5 + 0x67) = 0;
          FUN_005349a0();
          iVar5 = FUN_007a7d31();
        } while (iVar5 == 0);
        iVar5 = FUN_007a7df9();
      }
    }
    uVar10 = (undefined3)((uint)iVar5 >> 8);
    if (DAT_00dc1958 == '\0') {
      uVar11 = 0xffffffff;
      pcVar14 = s_gfx_map_units___spr_008390cc;
      do {
        pcVar17 = pcVar14;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar17 = pcVar14 + 1;
        cVar3 = *pcVar14;
        pcVar14 = pcVar17;
      } while (cVar3 != '\0');
      uVar11 = ~uVar11;
      pcVar14 = pcVar17 + -uVar11;
      pcVar17 = &stack0x00000260;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar17 = *pcVar14;
        pcVar14 = pcVar14 + 1;
        pcVar17 = pcVar17 + 1;
      }
      iVar5 = FUN_007a7c64();
      if (iVar5 == -1) {
        uVar10 = 0xffffff;
        if (uStack_c._3_1_ == '\0') {
          FUN_00429a50();
          uVar10 = extraout_var;
        }
      }
      else {
        do {
          FUN_007a630a();
          puVar6 = operator_new(0x30);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            FUN_00418f40();
            *puVar6 = &PTR_FUN_007e381c;
            puVar6[2] = &PTR_LAB_007e3818;
            DAT_0088ebfc = DAT_0088ebfc + 1;
            if (DAT_0088ebfc == 1) {
              FUN_00418fe0();
            }
            local_8 = operator_new(0x94);
            if (local_8 == (undefined4 *)0x0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_00416730();
            }
            puVar6[3] = uVar4;
            FUN_00418530();
          }
          if (in_stack_00000030 != '\0') {
            puVar13 = &stack0x00000030;
            do {
              uVar2 = FUN_007a76c0();
              *puVar13 = uVar2;
              pcVar14 = puVar13 + 1;
              puVar13 = puVar13 + 1;
            } while (*pcVar14 != '\0');
          }
          cVar3 = FUN_00417fa0();
          if (cVar3 == '\0') {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_004af6b0();
          }
          puVar6[5] = uVar4;
          cVar3 = FUN_00417fa0();
          if (cVar3 != '\0') {
            iVar5 = 0;
            pcVar14 = s_infantry_0082f438;
            do {
              iVar8 = FUN_007a8730();
              if (iVar8 == 0) {
                uVar4 = (&DAT_0082f538)[iVar5 * 0x41];
                goto LAB_00418d50;
              }
              pcVar14 = pcVar14 + 0x104;
              iVar5 = iVar5 + 1;
            } while ((int)pcVar14 < 0x838268);
          }
          uVar4 = 0x8c;
LAB_00418d50:
          puVar6[4] = uVar4;
          cVar3 = FUN_00417fa0();
          if (cVar3 != '\0') {
            iVar5 = 0;
            pcVar14 = s_stand_00838268;
            do {
              iVar8 = FUN_007a8730();
              if (iVar8 == 0) {
                uVar4 = (&DAT_00838368)[iVar5 * 0x41];
                goto LAB_00418dc3;
              }
              pcVar14 = pcVar14 + 0x104;
              iVar5 = iVar5 + 1;
            } while ((int)pcVar14 < 0x838678);
          }
          uVar4 = 4;
LAB_00418dc3:
          puVar6[6] = uVar4;
          cVar3 = FUN_00417fa0();
          if (cVar3 != '\0') {
            iVar5 = 0;
            puVar16 = &DAT_00838678;
            do {
              iVar8 = FUN_007a8730();
              if (iVar8 == 0) {
                uVar4 = (&DAT_00838778)[iVar5 * 0x41];
                goto LAB_00418e12;
              }
              puVar16 = puVar16 + 0x104;
              iVar5 = iVar5 + 1;
            } while ((int)puVar16 < 0x8390a0);
          }
          uVar4 = 10;
LAB_00418e12:
          puVar6[7] = uVar4;
          local_8 = (undefined4 *)0x1;
          cVar3 = FUN_00418010();
          puVar9 = (undefined4 *)(undefined1 *)0x1;
          if (cVar3 != '\0') {
            puVar9 = local_8;
          }
          puVar6[8] = puVar9;
          if (uStack_c._3_1_ == '\0') {
LAB_00418e8d:
            FUN_00534930();
            (**(code **)(*(int *)puVar6[3] + 8))();
            FUN_004195d0();
            uVar4 = (**(code **)(*(int *)puVar6[3] + 0x4c))();
            iVar5 = puVar6[3];
            *(undefined4 *)(iVar5 + 0x22) = 0;
            *(undefined4 *)(iVar5 + 0x26) = uVar4;
            *(undefined1 *)(iVar5 + 0x67) = 0;
            FUN_005349a0();
          }
          else {
            puVar9 = puVar6 + 4;
            puVar15 = (undefined4 *)&stack0xffffffd0;
            for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar15 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar15 = puVar15 + 1;
            }
            iVar5 = FUN_00419650();
            if (iVar5 == 0) goto LAB_00418e8d;
            if (puVar6 != (undefined4 *)0x0) {
              (**(code **)*puVar6)();
            }
          }
          iVar5 = FUN_007a7d31();
        } while (iVar5 == 0);
        FUN_007a7df9();
        uVar10 = extraout_var_00;
      }
    }
  }
  ExceptionList = in_stack_00001250;
  return CONCAT31(uVar10,1);
}


