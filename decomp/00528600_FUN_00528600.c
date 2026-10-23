// FUN_00528600 @ 528600 size=5703

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00528600(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  bool bVar16;
  float10 fVar17;
  undefined8 uVar18;
  char local_3e4 [256];
  char local_2e4 [256];
  char local_1e4 [256];
  int local_e4;
  int local_e0;
  float local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  int local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int *local_b8;
  undefined **local_b4;
  int *local_b0;
  int *local_ac;
  int local_a8;
  undefined1 local_a4;
  char local_a0 [64];
  int *local_60;
  undefined **local_5c;
  int *local_58;
  int *local_54;
  int local_50;
  undefined1 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  char local_22;
  char local_21;
  int local_20;
  int *local_1c;
  float local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007c22a3;
  local_10 = ExceptionList;
  DAT_00adf148._0_1_ = 0;
  if (*(int *)(param_1 + 0xc) < 1) {
    return (undefined4 *)&DAT_0088ebf8;
  }
  local_58 = (int *)0x0;
  local_54 = (int *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_5c = &PTR_FUN_007e5258;
  local_14 = *(int *)(param_1 + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  ppvVar3 = &local_10;
  local_d4 = param_1;
  if (local_14 != 0) {
    do {
      local_14 = *(int *)(local_14 + 8);
      cVar4 = FUN_00523a00();
      if ((cVar4 != '\0') || (piVar11 = local_58, DAT_00d610dc != '\0')) {
        FUN_00522770();
        for (piVar7 = local_58; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
          cVar4 = (*(code *)local_5c[3])(*piVar7);
          if (cVar4 != '\0') {
            piVar11 = local_58;
            if (piVar7 != (int *)0x0) goto LAB_0052870a;
            break;
          }
        }
        iVar5 = FUN_00522770();
        piVar7 = local_54;
        iVar5 = *(int *)(iVar5 + 6);
        local_54 = operator_new(0xe);
        if (local_54 == (int *)0x0) {
          local_54 = (int *)0x0;
        }
        else {
          *local_54 = iVar5;
          local_54[1] = (int)piVar7;
          local_54[2] = 0;
          *(undefined1 *)(local_54 + 3) = 0;
        }
        iVar5 = local_50 + 1;
        bVar16 = local_50 != 0;
        piVar11 = local_54;
        local_50 = iVar5;
        if (bVar16) {
          piVar7[2] = (int)local_54;
          piVar11 = local_58;
        }
      }
LAB_0052870a:
      local_58 = piVar11;
    } while (local_14 != 0);
    ppvVar3 = ExceptionList;
    if ((local_50 == 1) && (local_22 = '\x01', *local_58 == *(int *)(param_2 + 6)))
    goto LAB_00528732;
  }
  ExceptionList = ppvVar3;
  local_22 = '\0';
LAB_00528732:
  local_21 = '\0';
  if (local_58 != (int *)0x0) {
    local_a4 = 0;
    local_b8 = local_58;
    do {
      iVar5 = *local_b8;
      local_b8 = (int *)local_b8[2];
      iVar10 = (&DAT_0089cad8)[iVar5];
      local_b0 = (int *)0x0;
      local_ac = (int *)0x0;
      local_a8 = 0;
      local_b4 = &PTR_FUN_007e4c84;
      local_bc = *(float *)(param_2 + 0x37c2);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_30 = iVar10;
      fVar17 = (float10)FUN_0076bbb0(param_2);
      local_c4 = *(float *)(iVar10 + 0x37c6);
      local_cc = *(float *)(*(int *)(iVar10 + 0x244) + 0x82);
      local_18 = (float)((fVar17 + (float10)_DAT_007e3374) * (float10)local_bc);
      fVar17 = (float10)FUN_0076bbb0(iVar10,9);
      local_38 = (float)((float10)local_18 -
                        ((float10)_DAT_007e4088 - (float10)local_c4) *
                        (fVar17 + (float10)_DAT_007e3374) * (float10)local_cc);
      fVar2 = _DAT_007e4088;
      if ((((*(int *)(param_2 + 6) != iVar5) &&
           (cVar4 = FUN_00586230(), fVar2 = _DAT_007e4088, cVar4 == '\0')) &&
          ((*(int *)(param_2 + 0x3350) == 0 ||
           (*(int *)(param_2 + 0x3350) != *(int *)(iVar10 + 0x3350))))) &&
         ((*(int *)(*(int *)(iVar10 + 0x12da) + 0x3b30) != *(int *)(param_2 + 6) &&
          (fVar2 = local_38, *(char *)(*(int *)(param_2 + 6) + 0x34ac + iVar10) != '\0')))) {
        fVar2 = _DAT_007e4088;
      }
      local_38 = *(float *)(param_2 + 0x13c5c) + fVar2;
      if (local_22 == '\0') {
        uVar6 = (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))();
        FUN_00429c80(uVar6);
        if (local_21 == '\0') {
          local_21 = '\x01';
        }
        FUN_007a630a();
        uVar8 = 0xffffffff;
        pcVar15 = local_a0;
        do {
          pcVar14 = pcVar15;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar15 + 1;
          cVar4 = *pcVar15;
          pcVar15 = pcVar14;
        } while (cVar4 != '\0');
        uVar8 = ~uVar8;
        iVar5 = -1;
        pcVar15 = (char *)&DAT_00adf148;
        do {
          pcVar13 = pcVar15;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar13 = pcVar15 + 1;
          cVar4 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar4 != '\0');
        pcVar15 = pcVar14 + -uVar8;
        pcVar14 = pcVar13 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar14 = pcVar14 + 1;
        }
      }
      local_60 = (int *)0x2710;
      local_2c = (int *)0x2710;
      local_28 = 0;
      local_3c = 0;
      local_44 = 0;
      local_48 = 0;
      local_34 = 0;
      local_1c = (int *)0x0;
      local_14 = 0;
      local_18 = 0.0;
      local_40 = 0;
      local_20 = 0;
      piVar11 = *(int **)(local_d4 + 4);
      while (piVar11 != (int *)0x0) {
        piVar7 = (int *)piVar11[2];
        piVar12 = (int *)*piVar11;
        iVar5 = FUN_00522770();
        piVar11 = piVar7;
        if ((iVar5 == local_30) && (cVar4 = FUN_00523a00(), cVar4 != '\0')) {
          cVar4 = (**(code **)(*piVar12 + 0x30))();
          if (cVar4 == '\0') {
            if ((*(int *)((int)piVar12 + 0x14a) != 0) &&
               (iVar5 = FUN_0051c480(), *(int *)(iVar5 + 0x22) < (int)local_60)) {
              piVar7 = (int *)FUN_0051c480();
              local_40 = (**(code **)(*piVar7 + 0xc))();
              iVar5 = FUN_0051c480();
              local_60 = *(int **)(iVar5 + 0x22);
            }
          }
          else if ((*(int *)((int)piVar12 + 0x14a) != 0) &&
                  (iVar5 = FUN_0051c480(), *(int *)(iVar5 + 0x22) < (int)local_2c)) {
            piVar7 = (int *)FUN_0051c480();
            local_20 = (**(code **)(*piVar7 + 0xc))();
            iVar5 = FUN_0051c480();
            local_2c = *(int **)(iVar5 + 0x22);
          }
          piVar7 = local_ac;
          local_ac = operator_new(0xe);
          if (local_ac == (int *)0x0) {
            local_ac = (int *)0x0;
          }
          else {
            *local_ac = (int)piVar12;
            local_ac[1] = (int)piVar7;
            local_ac[2] = 0;
            *(undefined1 *)(local_ac + 3) = 0;
          }
          bVar16 = local_a8 == 0;
          local_a8 = local_a8 + 1;
          if (bVar16) {
            local_b0 = local_ac;
          }
          else {
            piVar7[2] = (int)local_ac;
          }
          piVar7 = *(int **)((int)piVar12 + 0x26);
          if (piVar7 != (int *)0x0) {
            do {
              piVar12 = piVar7 + 2;
              switch(*(undefined4 *)(*piVar7 + 0x134)) {
              case 0:
              case 2:
              case 3:
              case 6:
              case 7:
              case 8:
              case 0xb:
                local_28 = local_28 + 1;
                break;
              case 1:
                local_3c = local_3c + 1;
                break;
              case 4:
              case 5:
                local_44 = local_44 + 1;
                break;
              default:
                local_18 = (float)((int)local_18 + 1);
                break;
              case 0xc:
              case 0xd:
                local_48 = local_48 + 1;
                break;
              case 0xe:
              case 0xf:
              case 0x10:
              case 0x11:
              case 0x12:
                local_34 = local_34 + 1;
                break;
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
              case 0x1a:
                local_1c = (int *)((int)local_1c + 1);
                break;
              case 0x19:
              case 0x1c:
              case 0x1e:
                local_14 = local_14 + 1;
              }
              piVar7 = (int *)*piVar12;
            } while ((int *)*piVar12 != (int *)0x0);
          }
        }
      }
      if (((float)_DAT_007e3870 <= local_38) || (DAT_00d610dc != '\0')) {
        local_28 = 0;
        piVar11 = local_b0;
        while (piVar11 != (int *)0x0) {
          local_60 = (int *)piVar11[2];
          piVar11 = (int *)*piVar11;
          if (0 < local_28) {
            uVar8 = 0xffffffff;
            pcVar15 = &DAT_0084b2cc;
            do {
              pcVar14 = pcVar15;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar14;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar5 = -1;
            pcVar15 = (char *)&DAT_00adf148;
            do {
              pcVar13 = pcVar15;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar13 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar13;
            } while (cVar4 != '\0');
            pcVar15 = pcVar14 + -uVar8;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          local_2c = piVar11;
          if (*(int *)((int)piVar11 + 0x14a) == 0) {
            fVar17 = (float10)FUN_0051a210();
            FUN_0051a470((double)fVar17);
            uVar6 = (**(code **)(*piVar11 + 0xc))();
            FUN_007a630a(local_1e4,s__s____f___f__0084b2a8,uVar6);
          }
          else {
            piVar7 = (int *)FUN_0051c480();
            fVar17 = (float10)FUN_0051a210();
            FUN_0051a470((double)fVar17);
            uVar6 = (**(code **)(*piVar7 + 0xc))();
            uVar6 = (**(code **)(*piVar11 + 0xc))(uVar6);
            FUN_007a630a(local_1e4,s__s___s_____f___f__0084b2b8,uVar6);
          }
          uVar8 = 0xffffffff;
          pcVar15 = local_1e4;
          do {
            pcVar14 = pcVar15;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar15 + 1;
            cVar4 = *pcVar15;
            pcVar15 = pcVar14;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8;
          iVar5 = -1;
          pcVar15 = (char *)&DAT_00adf148;
          do {
            pcVar13 = pcVar15;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar13 = pcVar15 + 1;
            cVar4 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar4 != '\0');
          pcVar15 = pcVar14 + -uVar8;
          pcVar14 = pcVar13 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar14 = pcVar14 + 1;
          }
          cVar4 = (**(code **)(*piVar11 + 0x2c))();
          if (cVar4 != '\0') {
            local_14 = 0;
            local_1c = (int *)0x0;
            piVar7 = *(int **)((int)piVar11 + 0x26);
            while (piVar7 != (int *)0x0) {
              piVar12 = (int *)piVar7[2];
              iVar5 = *piVar7;
              piVar7 = piVar12;
              if (*(int *)(iVar5 + 0x134) != 0x1e) {
                iVar5 = FUN_004fccd0();
                if (iVar5 == 0) {
                  local_1c = (int *)((int)local_1c + 1);
                }
                else if (iVar5 == 2) {
                  local_14 = local_14 + 1;
                }
              }
            }
            uVar8 = 0xffffffff;
            pcVar15 = &DAT_0084b2a0;
            do {
              pcVar14 = pcVar15;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar14;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar5 = -1;
            pcVar15 = (char *)&DAT_00adf148;
            do {
              pcVar13 = pcVar15;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar13 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar13;
            } while (cVar4 != '\0');
            pcVar15 = pcVar14 + -uVar8;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            }
            uVar18 = CONCAT44(local_14,local_1c);
            uVar6 = FUN_0042b6c9();
            FUN_007a630a(local_1e4,uVar6,uVar18);
            uVar8 = 0xffffffff;
            pcVar15 = local_1e4;
            do {
              pcVar14 = pcVar15;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar14;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar5 = -1;
            pcVar15 = (char *)&DAT_00adf148;
            do {
              pcVar13 = pcVar15;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar13 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar13;
            } while (cVar4 != '\0');
            pcVar15 = pcVar14 + -uVar8;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          cVar4 = (**(code **)(*piVar11 + 0x28))();
          if ((cVar4 != '\0') && (_DAT_007e3380 < *(float *)((int)piVar11 + 0x29e))) {
            uVar8 = 0xffffffff;
            pcVar15 = &DAT_0084b28c;
            do {
              pcVar14 = pcVar15;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar14;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar5 = -1;
            pcVar15 = (char *)&DAT_00adf148;
            do {
              pcVar13 = pcVar15;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar13 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar13;
            } while (cVar4 != '\0');
            pcVar15 = pcVar14 + -uVar8;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            }
            local_dc = *(float *)((int)piVar11 + 0x29e);
            local_d8 = (int)ROUND(local_dc);
            FUN_0042b6c9(s_DIGIN_MSG_0084b280);
            FUN_007a630a();
            uVar8 = 0xffffffff;
            pcVar15 = local_1e4;
            do {
              pcVar14 = pcVar15;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar14;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar5 = -1;
            pcVar15 = (char *)&DAT_00adf148;
            do {
              pcVar13 = pcVar15;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar13 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar13;
            } while (cVar4 != '\0');
            pcVar15 = pcVar14 + -uVar8;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          local_20 = 8;
          do {
            puVar1 = (undefined4 *)((int)piVar11 + 0x26);
            local_1c = (int *)*puVar1;
            piVar11 = local_2c;
            piVar7 = (int *)*puVar1;
            while (local_2c = piVar11, piVar7 != (int *)0x0) {
              local_1c = (int *)piVar7[2];
              piVar12 = (int *)*piVar7;
              iVar5 = FUN_004fda70();
              piVar11 = local_2c;
              piVar7 = local_1c;
              if (iVar5 == local_20) {
                local_c0 = (float)piVar12[0x3b];
                uVar6 = (**(code **)(*piVar12 + 0xc))((double)local_c0,(double)(float)piVar12[0x3d])
                ;
                FUN_007a630a(local_1e4,s____s____f___f__0084b270,uVar6);
                FUN_004ff320(piVar12[0x4c]);
                FUN_007a630a();
                if (0 < piVar12[0x4e]) {
                  FUN_007a630a();
                  uVar8 = 0xffffffff;
                  pcVar15 = local_2e4;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = local_3e4;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                if (piVar12[0x22] != 0) {
                  local_14 = piVar12[0x4f];
                  if (piVar12[0x4f] == 1) {
                    FUN_004ff3a0();
                    FUN_007a630a();
                    uVar8 = 0xffffffff;
                    pcVar15 = local_2e4;
                    do {
                      pcVar14 = pcVar15;
                      if (uVar8 == 0) break;
                      uVar8 = uVar8 - 1;
                      pcVar14 = pcVar15 + 1;
                      cVar4 = *pcVar15;
                      pcVar15 = pcVar14;
                    } while (cVar4 != '\0');
                    uVar8 = ~uVar8;
                    iVar5 = -1;
                    pcVar15 = local_3e4;
                    do {
                      pcVar13 = pcVar15;
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      pcVar13 = pcVar15 + 1;
                      cVar4 = *pcVar15;
                      pcVar15 = pcVar13;
                    } while (cVar4 != '\0');
                    pcVar15 = pcVar14 + -uVar8;
                    pcVar14 = pcVar13 + -1;
                    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                      pcVar15 = pcVar15 + 4;
                      pcVar14 = pcVar14 + 4;
                    }
                    iVar5 = piVar12[0x27];
                    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *pcVar14 = *pcVar15;
                      pcVar15 = pcVar15 + 1;
                      pcVar14 = pcVar14 + 1;
                    }
                    if (0 < iVar5) {
                      FUN_007a630a();
                      uVar8 = 0xffffffff;
                      pcVar15 = local_2e4;
                      do {
                        pcVar14 = pcVar15;
                        if (uVar8 == 0) break;
                        uVar8 = uVar8 - 1;
                        pcVar14 = pcVar15 + 1;
                        cVar4 = *pcVar15;
                        pcVar15 = pcVar14;
                      } while (cVar4 != '\0');
                      uVar8 = ~uVar8;
                      iVar5 = -1;
                      pcVar15 = local_3e4;
                      do {
                        pcVar13 = pcVar15;
                        if (iVar5 == 0) break;
                        iVar5 = iVar5 + -1;
                        pcVar13 = pcVar15 + 1;
                        cVar4 = *pcVar15;
                        pcVar15 = pcVar13;
                      } while (cVar4 != '\0');
                      pcVar15 = pcVar14 + -uVar8;
                      pcVar14 = pcVar13 + -1;
                      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                        pcVar15 = pcVar15 + 4;
                        pcVar14 = pcVar14 + 4;
                      }
                      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                        *pcVar14 = *pcVar15;
                        pcVar15 = pcVar15 + 1;
                        pcVar14 = pcVar14 + 1;
                      }
                    }
                  }
                  else {
                    uVar8 = 0xffffffff;
                    pcVar15 = &DAT_0084b258;
                    do {
                      pcVar14 = pcVar15;
                      if (uVar8 == 0) break;
                      uVar8 = uVar8 - 1;
                      pcVar14 = pcVar15 + 1;
                      cVar4 = *pcVar15;
                      pcVar15 = pcVar14;
                    } while (cVar4 != '\0');
                    uVar8 = ~uVar8;
                    local_18 = 0.0;
                    iVar5 = -1;
                    pcVar15 = local_3e4;
                    do {
                      pcVar13 = pcVar15;
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      pcVar13 = pcVar15 + 1;
                      cVar4 = *pcVar15;
                      pcVar15 = pcVar13;
                    } while (cVar4 != '\0');
                    pcVar15 = pcVar14 + -uVar8;
                    pcVar14 = pcVar13 + -1;
                    for (uVar9 = uVar8 >> 2; iVar5 = local_14, uVar9 != 0; uVar9 = uVar9 - 1) {
                      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                      pcVar15 = pcVar15 + 4;
                      pcVar14 = pcVar14 + 4;
                    }
                    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *pcVar14 = *pcVar15;
                      pcVar15 = pcVar15 + 1;
                      pcVar14 = pcVar14 + 1;
                    }
                    if (0 < iVar5) {
                      piVar12 = piVar12 + 0x27;
                      do {
                        pcVar15 = (char *)FUN_004ff3a0();
                        uVar8 = 0xffffffff;
                        do {
                          pcVar14 = pcVar15;
                          if (uVar8 == 0) break;
                          uVar8 = uVar8 - 1;
                          pcVar14 = pcVar15 + 1;
                          cVar4 = *pcVar15;
                          pcVar15 = pcVar14;
                        } while (cVar4 != '\0');
                        uVar8 = ~uVar8;
                        iVar5 = -1;
                        pcVar15 = local_3e4;
                        do {
                          pcVar13 = pcVar15;
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          pcVar13 = pcVar15 + 1;
                          cVar4 = *pcVar15;
                          pcVar15 = pcVar13;
                        } while (cVar4 != '\0');
                        pcVar15 = pcVar14 + -uVar8;
                        pcVar14 = pcVar13 + -1;
                        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                          pcVar15 = pcVar15 + 4;
                          pcVar14 = pcVar14 + 4;
                        }
                        iVar5 = *piVar12;
                        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                          *pcVar14 = *pcVar15;
                          pcVar15 = pcVar15 + 1;
                          pcVar14 = pcVar14 + 1;
                        }
                        if (0 < iVar5) {
                          FUN_007a630a();
                          uVar8 = 0xffffffff;
                          pcVar15 = local_2e4;
                          do {
                            pcVar14 = pcVar15;
                            if (uVar8 == 0) break;
                            uVar8 = uVar8 - 1;
                            pcVar14 = pcVar15 + 1;
                            cVar4 = *pcVar15;
                            pcVar15 = pcVar14;
                          } while (cVar4 != '\0');
                          uVar8 = ~uVar8;
                          iVar5 = -1;
                          pcVar15 = local_3e4;
                          do {
                            pcVar13 = pcVar15;
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            pcVar13 = pcVar15 + 1;
                            cVar4 = *pcVar15;
                            pcVar15 = pcVar13;
                          } while (cVar4 != '\0');
                          pcVar15 = pcVar14 + -uVar8;
                          pcVar14 = pcVar13 + -1;
                          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                            pcVar15 = pcVar15 + 4;
                            pcVar14 = pcVar14 + 4;
                          }
                          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                            *pcVar14 = *pcVar15;
                            pcVar15 = pcVar15 + 1;
                            pcVar14 = pcVar14 + 1;
                          }
                        }
                        local_18 = (float)((int)local_18 + 1);
                        if ((int)local_18 < local_14) {
                          uVar8 = 0xffffffff;
                          pcVar15 = &DAT_0083bf48;
                          do {
                            pcVar14 = pcVar15;
                            if (uVar8 == 0) break;
                            uVar8 = uVar8 - 1;
                            pcVar14 = pcVar15 + 1;
                            cVar4 = *pcVar15;
                            pcVar15 = pcVar14;
                          } while (cVar4 != '\0');
                          uVar8 = ~uVar8;
                          iVar5 = -1;
                          pcVar15 = local_3e4;
                          do {
                            pcVar13 = pcVar15;
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            pcVar13 = pcVar15 + 1;
                            cVar4 = *pcVar15;
                            pcVar15 = pcVar13;
                          } while (cVar4 != '\0');
                          pcVar15 = pcVar14 + -uVar8;
                          pcVar14 = pcVar13 + -1;
                          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                            pcVar15 = pcVar15 + 4;
                            pcVar14 = pcVar14 + 4;
                          }
                          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                            *pcVar14 = *pcVar15;
                            pcVar15 = pcVar15 + 1;
                            pcVar14 = pcVar14 + 1;
                          }
                        }
                        piVar12 = piVar12 + 1;
                      } while ((int)local_18 < local_14);
                    }
                  }
                }
                uVar8 = 0xffffffff;
                pcVar15 = local_3e4;
                do {
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar4 != '\0');
                uVar9 = 0xffffffff;
                pcVar15 = local_1e4;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                } while (cVar4 != '\0');
                if (~uVar8 + (~uVar9 - 2) < 0x39) {
                  pcVar15 = &DAT_0083ca0c;
                }
                else {
                  pcVar15 = s__s____s_0084b24c;
                }
                FUN_007a630a(local_2e4,pcVar15,local_1e4);
                uVar8 = 0xffffffff;
                pcVar15 = local_2e4;
                do {
                  pcVar14 = pcVar15;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar14 = pcVar15 + 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar14;
                } while (cVar4 != '\0');
                uVar8 = ~uVar8;
                iVar5 = -1;
                pcVar15 = (char *)&DAT_00adf148;
                do {
                  pcVar13 = pcVar15;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pcVar13 = pcVar15 + 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar13;
                } while (cVar4 != '\0');
                pcVar15 = pcVar14 + -uVar8;
                pcVar14 = pcVar13 + -1;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar8 = uVar8 & 3; piVar11 = local_2c, piVar7 = local_1c, uVar8 != 0;
                    uVar8 = uVar8 - 1) {
                  *pcVar14 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar14 = pcVar14 + 1;
                }
              }
            }
            local_20 = local_20 + -1;
          } while (-1 < local_20);
          local_28 = local_28 + 1;
          local_1c = (int *)0x0;
          piVar11 = local_60;
        }
        if (*(int *)(local_30 + 6) == *local_54) goto LAB_00529bb5;
        pcVar15 = &DAT_00839650;
LAB_00529b8d:
        uVar8 = 0xffffffff;
        do {
          pcVar14 = pcVar15;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar15 + 1;
          cVar4 = *pcVar15;
          pcVar15 = pcVar14;
        } while (cVar4 != '\0');
        uVar8 = ~uVar8;
        iVar5 = -1;
        pcVar15 = (char *)&DAT_00adf148;
        do {
          pcVar13 = pcVar15;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar13 = pcVar15 + 1;
          cVar4 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar4 != '\0');
        pcVar15 = pcVar14 + -uVar8;
        pcVar14 = pcVar13 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar14 = pcVar14 + 1;
        }
      }
      else if (local_14 + (int)local_1c < 1) {
        if (_DAT_007e8d0c <= local_38) {
          if (local_38 <= _DAT_007e3380) {
            iVar10 = local_44 + local_3c + local_28;
            iVar5 = local_34 + local_48;
            if ((iVar10 < 1) || (3 < iVar10)) {
              if (3 < iVar10) {
                FUN_0042b6c9();
                goto LAB_00528d06;
              }
            }
            else {
              FUN_0042b6c9();
LAB_00528d06:
              FUN_007a630a();
              uVar8 = 0xffffffff;
              pcVar15 = local_a0;
              do {
                pcVar14 = pcVar15;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar14 = pcVar15 + 1;
                cVar4 = *pcVar15;
                pcVar15 = pcVar14;
              } while (cVar4 != '\0');
              uVar8 = ~uVar8;
              iVar10 = -1;
              pcVar15 = (char *)&DAT_00adf148;
              do {
                pcVar13 = pcVar15;
                if (iVar10 == 0) break;
                iVar10 = iVar10 + -1;
                pcVar13 = pcVar15 + 1;
                cVar4 = *pcVar15;
                pcVar15 = pcVar13;
              } while (cVar4 != '\0');
              pcVar15 = pcVar14 + -uVar8;
              pcVar14 = pcVar13 + -1;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar14 = pcVar14 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar14 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar14 = pcVar14 + 1;
              }
            }
            if ((iVar5 < 1) || (3 < iVar5)) {
              if (iVar5 < 4) goto LAB_00529bb5;
              FUN_0042b6c9();
            }
            else {
              FUN_0042b6c9();
            }
            FUN_007a630a();
            pcVar15 = local_a0;
            goto LAB_00529b8d;
          }
          if (_DAT_007e4090 < local_38) {
            if (_DAT_007e682c < local_38) {
              if (_DAT_007e6b28 < local_38) {
                if (local_40 != 0) {
                  FUN_007a630a();
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                iVar5 = local_28;
                if (0 < local_28) {
                  FUN_0042b6c9();
                  uVar6 = FUN_0042b6c9(s_NAME_INFANTRY_0084b318);
                  FUN_007a630a(local_a0,s____d__s__s_0084b30c,iVar5,uVar6);
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                if (0 < local_3c) {
                  FUN_0042b6c9();
                  uVar6 = FUN_0042b6c9(s_NAME_CAVALRY_0084b2fc);
                  FUN_007a630a(local_a0,s____d__s__s_0084b30c,local_3c,uVar6);
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                if (0 < local_44) {
                  FUN_0042b6c9();
                  uVar6 = FUN_0042b6c9(s_NAME_ARMOR_0084b2f0);
                  FUN_007a630a(local_a0,s____d__s__s_0084b30c,local_44,uVar6);
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                if (local_20 != 0) {
                  FUN_007a630a();
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                iVar5 = local_48;
                if (0 < local_48) {
                  FUN_0042b6c9();
                  uVar6 = FUN_0042b6c9(s_NAME_FIGHTER_0084b2e0);
                  FUN_007a630a(local_a0,s____d__s__s_0084b30c,iVar5,uVar6);
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                iVar5 = local_34;
                if (0 < local_34) {
                  FUN_0042b6c9();
                  uVar6 = FUN_0042b6c9(s_T_BOMBER_0084b2d4);
                  FUN_007a630a(local_a0,s____d__s__s_0084b30c,iVar5,uVar6);
                  pcVar15 = local_a0;
                  goto LAB_00529b8d;
                }
              }
              else {
                iVar5 = local_44 + local_3c + local_28;
                local_14 = local_34 + local_48;
                if (0 < iVar5) {
                  if (local_40 != 0) {
                    FUN_007a630a();
                    uVar8 = 0xffffffff;
                    pcVar15 = local_a0;
                    do {
                      pcVar14 = pcVar15;
                      if (uVar8 == 0) break;
                      uVar8 = uVar8 - 1;
                      pcVar14 = pcVar15 + 1;
                      cVar4 = *pcVar15;
                      pcVar15 = pcVar14;
                    } while (cVar4 != '\0');
                    uVar8 = ~uVar8;
                    iVar10 = -1;
                    pcVar15 = (char *)&DAT_00adf148;
                    do {
                      pcVar13 = pcVar15;
                      if (iVar10 == 0) break;
                      iVar10 = iVar10 + -1;
                      pcVar13 = pcVar15 + 1;
                      cVar4 = *pcVar15;
                      pcVar15 = pcVar13;
                    } while (cVar4 != '\0');
                    pcVar15 = pcVar14 + -uVar8;
                    pcVar14 = pcVar13 + -1;
                    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                      pcVar15 = pcVar15 + 4;
                      pcVar14 = pcVar14 + 4;
                    }
                    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *pcVar14 = *pcVar15;
                      pcVar15 = pcVar15 + 1;
                      pcVar14 = pcVar14 + 1;
                    }
                  }
                  FUN_0042b6c9();
                  FUN_007a630a(local_a0,s____d__s_0084b3b8,iVar5);
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                if (0 < local_14) {
                  if (local_20 != 0) {
                    FUN_007a630a();
                    uVar8 = 0xffffffff;
                    pcVar15 = local_a0;
                    do {
                      pcVar14 = pcVar15;
                      if (uVar8 == 0) break;
                      uVar8 = uVar8 - 1;
                      pcVar14 = pcVar15 + 1;
                      cVar4 = *pcVar15;
                      pcVar15 = pcVar14;
                    } while (cVar4 != '\0');
                    uVar8 = ~uVar8;
                    iVar5 = -1;
                    pcVar15 = (char *)&DAT_00adf148;
                    do {
                      pcVar13 = pcVar15;
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      pcVar13 = pcVar15 + 1;
                      cVar4 = *pcVar15;
                      pcVar15 = pcVar13;
                    } while (cVar4 != '\0');
                    pcVar15 = pcVar14 + -uVar8;
                    pcVar14 = pcVar13 + -1;
                    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                      pcVar15 = pcVar15 + 4;
                      pcVar14 = pcVar14 + 4;
                    }
                    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                      *pcVar14 = *pcVar15;
                      pcVar15 = pcVar15 + 1;
                      pcVar14 = pcVar14 + 1;
                    }
                  }
                  FUN_0042b6c9();
                  goto LAB_00529283;
                }
              }
            }
            else {
              local_30 = local_34 + local_48;
              local_18 = (float)(local_44 + local_3c + local_28) * _DAT_007e6808;
              local_2c = (int *)((float)local_30 * _DAT_007e6808);
              local_e0 = (int)ROUND(local_18);
              local_d0 = (int)ROUND((float)local_2c);
              iVar5 = local_e0;
              if ((local_e0 == 0) && (_DAT_007e3380 < local_18)) {
                iVar5 = 1;
              }
              local_14 = local_d0;
              if ((local_d0 == 0) && (_DAT_007e3380 < (float)local_2c)) {
                local_14 = 1;
              }
              if (0 < iVar5) {
                if (local_40 != 0) {
                  FUN_007a630a();
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar10 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar10 == 0) break;
                    iVar10 = iVar10 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                FUN_0042b6c9();
                FUN_007a630a(local_a0,s____d__s_0084b3b8,iVar5);
                uVar8 = 0xffffffff;
                pcVar15 = local_a0;
                do {
                  pcVar14 = pcVar15;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar14 = pcVar15 + 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar14;
                } while (cVar4 != '\0');
                uVar8 = ~uVar8;
                iVar5 = -1;
                pcVar15 = (char *)&DAT_00adf148;
                do {
                  pcVar13 = pcVar15;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pcVar13 = pcVar15 + 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar13;
                } while (cVar4 != '\0');
                pcVar15 = pcVar14 + -uVar8;
                pcVar14 = pcVar13 + -1;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *pcVar14 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar14 = pcVar14 + 1;
                }
              }
              if (0 < local_14) {
                if (local_20 != 0) {
                  FUN_007a630a();
                  uVar8 = 0xffffffff;
                  pcVar15 = local_a0;
                  do {
                    pcVar14 = pcVar15;
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    pcVar14 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar14;
                  } while (cVar4 != '\0');
                  uVar8 = ~uVar8;
                  iVar5 = -1;
                  pcVar15 = (char *)&DAT_00adf148;
                  do {
                    pcVar13 = pcVar15;
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    pcVar13 = pcVar15 + 1;
                    cVar4 = *pcVar15;
                    pcVar15 = pcVar13;
                  } while (cVar4 != '\0');
                  pcVar15 = pcVar14 + -uVar8;
                  pcVar14 = pcVar13 + -1;
                  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                    pcVar15 = pcVar15 + 4;
                    pcVar14 = pcVar14 + 4;
                  }
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar14 = *pcVar15;
                    pcVar15 = pcVar15 + 1;
                    pcVar14 = pcVar14 + 1;
                  }
                }
                if (local_14 == 1) {
                  FUN_0042b6c9();
                }
                else {
                  FUN_0042b6c9();
                }
                goto LAB_00529283;
              }
            }
          }
          else {
            local_30 = local_34 + local_48;
            local_18 = (float)(local_44 + local_3c + local_28) * _DAT_007e5390;
            local_2c = (int *)((float)local_30 * _DAT_007e5390);
            local_e4 = (int)ROUND(local_18);
            local_c8 = (int)ROUND((float)local_2c);
            iVar5 = local_e4;
            if ((local_e4 == 0) && (_DAT_007e3380 < local_18)) {
              iVar5 = 1;
            }
            local_14 = local_c8;
            if ((local_c8 == 0) && (_DAT_007e3380 < (float)local_2c)) {
              local_14 = 1;
            }
            if (0 < iVar5) {
              if (local_40 != 0) {
                FUN_007a630a();
                uVar8 = 0xffffffff;
                pcVar15 = local_a0;
                do {
                  pcVar14 = pcVar15;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar14 = pcVar15 + 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar14;
                } while (cVar4 != '\0');
                uVar8 = ~uVar8;
                iVar10 = -1;
                pcVar15 = (char *)&DAT_00adf148;
                do {
                  pcVar13 = pcVar15;
                  if (iVar10 == 0) break;
                  iVar10 = iVar10 + -1;
                  pcVar13 = pcVar15 + 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar13;
                } while (cVar4 != '\0');
                pcVar15 = pcVar14 + -uVar8;
                pcVar14 = pcVar13 + -1;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *pcVar14 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar14 = pcVar14 + 1;
                }
              }
              FUN_0042b6c9();
              FUN_007a630a(local_a0,s____d__s_0084b3b8,iVar5);
              uVar8 = 0xffffffff;
              pcVar15 = local_a0;
              do {
                pcVar14 = pcVar15;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar14 = pcVar15 + 1;
                cVar4 = *pcVar15;
                pcVar15 = pcVar14;
              } while (cVar4 != '\0');
              uVar8 = ~uVar8;
              iVar5 = -1;
              pcVar15 = (char *)&DAT_00adf148;
              do {
                pcVar13 = pcVar15;
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                pcVar13 = pcVar15 + 1;
                cVar4 = *pcVar15;
                pcVar15 = pcVar13;
              } while (cVar4 != '\0');
              pcVar15 = pcVar14 + -uVar8;
              pcVar14 = pcVar13 + -1;
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                pcVar15 = pcVar15 + 4;
                pcVar14 = pcVar14 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar14 = *pcVar15;
                pcVar15 = pcVar15 + 1;
                pcVar14 = pcVar14 + 1;
              }
            }
            if (0 < local_14) {
              if (local_20 != 0) {
                FUN_007a630a();
                uVar8 = 0xffffffff;
                pcVar15 = local_a0;
                do {
                  pcVar14 = pcVar15;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar14 = pcVar15 + 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar14;
                } while (cVar4 != '\0');
                uVar8 = ~uVar8;
                iVar5 = -1;
                pcVar15 = (char *)&DAT_00adf148;
                do {
                  pcVar13 = pcVar15;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pcVar13 = pcVar15 + 1;
                  cVar4 = *pcVar15;
                  pcVar15 = pcVar13;
                } while (cVar4 != '\0');
                pcVar15 = pcVar14 + -uVar8;
                pcVar14 = pcVar13 + -1;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *pcVar14 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar14 = pcVar14 + 1;
                }
              }
              if (local_14 == 1) {
                FUN_0042b6c9();
              }
              else {
                FUN_0042b6c9();
              }
LAB_00529283:
              FUN_007a630a(local_a0,s____d__s_0084b3b8,local_14);
              pcVar15 = local_a0;
              goto LAB_00529b8d;
            }
          }
        }
      }
      else {
        if (local_40 != 0) {
          FUN_007a630a();
          uVar8 = 0xffffffff;
          pcVar15 = local_a0;
          do {
            pcVar14 = pcVar15;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar15 + 1;
            cVar4 = *pcVar15;
            pcVar15 = pcVar14;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8;
          iVar5 = -1;
          pcVar15 = (char *)&DAT_00adf148;
          do {
            pcVar13 = pcVar15;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar13 = pcVar15 + 1;
            cVar4 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar4 != '\0');
          pcVar15 = pcVar14 + -uVar8;
          pcVar14 = pcVar13 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        if (0 < (int)local_1c) {
          FUN_0042b6c9();
          FUN_007a630a(local_a0,s____d__s_0084b3b8,local_1c);
          uVar8 = 0xffffffff;
          pcVar15 = local_a0;
          do {
            pcVar14 = pcVar15;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar15 + 1;
            cVar4 = *pcVar15;
            pcVar15 = pcVar14;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8;
          iVar5 = -1;
          pcVar15 = (char *)&DAT_00adf148;
          do {
            pcVar13 = pcVar15;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar13 = pcVar15 + 1;
            cVar4 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar4 != '\0');
          pcVar15 = pcVar14 + -uVar8;
          pcVar14 = pcVar13 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        if (0 < local_14) {
          FUN_0042b6c9();
          FUN_007a630a(local_a0,s____d__s_0084b3b8,local_14);
          uVar8 = 0xffffffff;
          pcVar15 = local_a0;
          do {
            pcVar14 = pcVar15;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar15 + 1;
            cVar4 = *pcVar15;
            pcVar15 = pcVar14;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8;
          iVar5 = -1;
          pcVar15 = (char *)&DAT_00adf148;
          do {
            pcVar13 = pcVar15;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar13 = pcVar15 + 1;
            cVar4 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar4 != '\0');
          pcVar15 = pcVar14 + -uVar8;
          pcVar14 = pcVar13 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        iVar5 = local_34 + local_48;
        if (0 < iVar5) {
          if (local_20 != 0) {
            FUN_007a630a();
            uVar8 = 0xffffffff;
            pcVar15 = local_a0;
            do {
              pcVar14 = pcVar15;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar14;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar10 = -1;
            pcVar15 = (char *)&DAT_00adf148;
            do {
              pcVar13 = pcVar15;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar13 = pcVar15 + 1;
              cVar4 = *pcVar15;
              pcVar15 = pcVar13;
            } while (cVar4 != '\0');
            pcVar15 = pcVar14 + -uVar8;
            pcVar14 = pcVar13 + -1;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          FUN_0042b6c9();
          FUN_007a630a(local_a0,s____d__s_0084b3b8,iVar5);
          pcVar15 = local_a0;
          goto LAB_00529b8d;
        }
      }
LAB_00529bb5:
      local_8 = local_8 & 0xffffff00;
      local_b4 = &PTR_LAB_007e5e80;
      piVar11 = local_b0;
      while (piVar11 != (int *)0x0) {
        piVar11 = (int *)piVar11[2];
        FUN_00796cd8();
      }
      local_b0 = (int *)0x0;
      local_ac = (int *)0x0;
      local_a8 = 0;
    } while (local_b8 != (int *)0x0);
  }
  DAT_00af8148._0_1_ = 0;
  DAT_00ae5948 = 0;
  local_5c = &PTR_LAB_007e3ff0;
  piVar11 = local_58;
  while (piVar11 != (int *)0x0) {
    piVar11 = (int *)piVar11[2];
    FUN_00796cd8();
  }
  ExceptionList = local_10;
  return &DAT_00adf148;
}


