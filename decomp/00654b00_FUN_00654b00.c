// FUN_00654b00 @ 654b00 size=10863

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00654b00(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  float fVar5;
  char cVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  undefined1 *puVar19;
  int iVar20;
  char *pcVar21;
  float10 fVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char local_57c [256];
  undefined1 local_47c [256];
  char local_37c [256];
  char local_27c [256];
  char local_17c [256];
  undefined **local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  float local_68;
  undefined2 local_64;
  undefined **local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined **local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_39;
  undefined4 local_38;
  undefined2 uStack_34;
  float local_30;
  int *local_28;
  char *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d2f08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = param_1;
  puVar7 = (undefined4 *)FUN_00581e60();
  local_20 = *puVar7;
  local_1c = puVar7[1];
  local_30 = (float)FUN_00652570(local_20,local_1c);
  local_14 = (char *)(param_1 + 0x13dc6);
  puVar19 = (undefined1 *)0x0;
  *local_14 = '\0';
  local_24 = (char *)(param_1 + 0x1adc6);
  *(undefined4 *)(param_1 + 0x21dca) = 0;
  *local_24 = '\0';
  piVar8 = (int *)FUN_006436d0(0x39);
  cVar6 = (**(code **)(*piVar8 + 0x20))(local_20,local_1c);
  if (cVar6 != '\0') {
    FUN_007a630a();
    FUN_007a630a();
    uVar15 = 0xffffffff;
    pcVar10 = local_37c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    pcVar10 = pcVar21 + -uVar15;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)local_14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      local_14 = local_14 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *local_14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      local_14 = local_14 + 1;
    }
    pcVar10 = local_27c;
LAB_006550a5:
    uVar15 = 0xffffffff;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    pcVar21 = pcVar21 + -uVar15;
    local_14 = local_24;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)local_14 = *(undefined4 *)pcVar21;
      pcVar21 = pcVar21 + 4;
      local_14 = local_14 + 4;
    }
    goto LAB_00657559;
  }
  local_28 = (int *)0x0;
  puVar7 = (undefined4 *)(param_1 + 0x13c9c);
  do {
    cVar6 = (**(code **)(*(int *)*puVar7 + 0x20))(local_20,local_1c);
    if (cVar6 != '\0') {
      local_28 = (int *)puVar19;
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_37c;
      goto code_r0x00654d30;
    }
    puVar19 = puVar19 + 1;
    puVar7 = puVar7 + 1;
  } while ((int)puVar19 < 10);
  local_28 = (int *)puVar19;
  cVar6 = (**(code **)(**(int **)(param_1 + 0x21e44) + 0x20))(local_20,local_1c);
  if (cVar6 == '\0') {
    if (DAT_00d12a38 != 0) {
      ExceptionList = local_10;
      return;
    }
    cVar6 = FUN_006d4400(local_20,local_1c);
    if (cVar6 == '\x01') {
      pcVar10 = (char *)FUN_006d42d0();
      if (pcVar10 != (char *)0x0) {
        uVar15 = 0xffffffff;
        do {
          pcVar21 = pcVar10;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar21 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar21;
        } while (cVar6 != '\0');
        uVar15 = ~uVar15;
        pcVar10 = pcVar21 + -uVar15;
        pcVar21 = local_14;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar21 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar21 = pcVar21 + 1;
        }
      }
      pcVar10 = (char *)FUN_006d4320();
    }
    else {
      if (*(int *)(param_1 + 0x22196) != 0) {
        ExceptionList = local_10;
        return;
      }
      local_28 = (int *)FUN_006d4610(local_20,local_1c);
      if (local_28 != (int *)0xffffffff) {
        iVar11 = FUN_006436d0();
        FUN_007a630a();
        FUN_007a630a();
        uVar15 = 0xffffffff;
        pcVar10 = local_37c;
        do {
          pcVar21 = pcVar10;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar21 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar21;
        } while (cVar6 != '\0');
        uVar15 = ~uVar15;
        pcVar10 = pcVar21 + -uVar15;
        pcVar21 = local_14;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar21 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar21 = pcVar21 + 1;
        }
        uVar15 = 0xffffffff;
        pcVar10 = local_27c;
        do {
          pcVar21 = pcVar10;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar21 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar21;
        } while (cVar6 != '\0');
        uVar15 = ~uVar15;
        pcVar10 = pcVar21 + -uVar15;
        pcVar21 = local_24;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar21 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar21 = pcVar21 + 1;
        }
        if (*(char *)(iVar11 + 0x86) == '\0') {
          ExceptionList = local_10;
          return;
        }
        switch(local_28) {
        case (int *)0x2:
          if (DAT_0087b632 != '\0') {
            ExceptionList = local_10;
            return;
          }
          pcVar10 = (char *)FUN_0042b6c9();
          uVar15 = 0xffffffff;
          do {
            pcVar21 = pcVar10;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar21;
          } while (cVar6 != '\0');
          uVar15 = ~uVar15;
          pcVar10 = pcVar21 + -uVar15;
          pcVar21 = local_14;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar21 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar21 = pcVar21 + 1;
          }
          break;
        case (int *)0x3:
          if (DAT_0087b630 != '\0') {
            ExceptionList = local_10;
            return;
          }
          pcVar10 = (char *)FUN_0042b6c9();
          uVar15 = 0xffffffff;
          do {
            pcVar21 = pcVar10;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar21;
          } while (cVar6 != '\0');
          uVar15 = ~uVar15;
          pcVar10 = pcVar21 + -uVar15;
          pcVar21 = local_14;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar21 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar21 = pcVar21 + 1;
          }
          break;
        case (int *)0x4:
          if (DAT_0087b631 != '\0') {
            ExceptionList = local_10;
            return;
          }
          pcVar10 = (char *)FUN_0042b6c9();
          uVar15 = 0xffffffff;
          do {
            pcVar21 = pcVar10;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar21;
          } while (cVar6 != '\0');
          uVar15 = ~uVar15;
          pcVar10 = pcVar21 + -uVar15;
          pcVar21 = local_14;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar21 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar21 = pcVar21 + 1;
          }
          break;
        default:
          ExceptionList = local_10;
          return;
        case (int *)0x40:
          if (DAT_0087b634 != '\0') {
            ExceptionList = local_10;
            return;
          }
          pcVar10 = (char *)FUN_0042b6c9();
          uVar15 = 0xffffffff;
          do {
            pcVar21 = pcVar10;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar21;
          } while (cVar6 != '\0');
          uVar15 = ~uVar15;
          pcVar10 = pcVar21 + -uVar15;
          pcVar21 = local_14;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar21 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar21 = pcVar21 + 1;
          }
        }
LAB_00655099:
        pcVar10 = (char *)FUN_0042b6c9();
        goto LAB_006550a5;
      }
      cVar6 = FUN_004e2240(local_20,local_1c);
      if (cVar6 != '\0') {
        switch(*(undefined4 *)(DAT_00d0ca90 + 0x21e62)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x15:
          uVar15 = 0xffffffff;
          pcVar10 = &DAT_0088ebf8;
          do {
            pcVar21 = pcVar10;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar21;
          } while (cVar6 != '\0');
          uVar15 = ~uVar15;
          pcVar10 = pcVar21 + -uVar15;
          pcVar21 = local_14;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar21 = pcVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pcVar21 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar21 = pcVar21 + 1;
          }
          goto LAB_00655099;
        }
      }
      cVar6 = FUN_00657690(local_20,local_1c);
      if (cVar6 == '\0') {
        puVar7 = *(undefined4 **)(param_1 + 0x13d48);
        iVar11 = local_18;
joined_r0x006550e2:
        local_18 = iVar11;
        if (puVar7 != (undefined4 *)0x0) goto LAB_006550e4;
        switch(local_30) {
        case 0.0:
        case 1.96182e-44:
          if (DAT_00877690 <= *(int *)(iVar11 + 0x21e6e)) {
            pcVar10 = (char *)FUN_0042b6c9();
            uVar15 = 0xffffffff;
            goto code_r0x00656ed9;
          }
          uVar15 = 0xffffffff;
          pcVar10 = &DAT_0088ebf8;
          goto code_r0x00656ef9;
        case 1.4013e-45:
        case 1.82169e-44:
          goto LAB_0065516e;
        case 2.8026e-45:
        case 5.60519e-45:
          if (*(int *)(iVar11 + 0x21e6a) == 0) {
            ExceptionList = local_10;
            return;
          }
          piVar8 = (int *)FUN_0051b230();
          (**(code **)(*piVar8 + 0xc))();
          pcVar10 = local_14;
          FUN_007a630a();
          (**(code **)(**(int **)(iVar11 + 0x21e6a) + 0x84))();
          pcVar12 = (char *)FUN_00528600();
          uVar15 = 0xffffffff;
          goto code_r0x00655293;
        case 4.2039e-45:
          FUN_005282f0();
LAB_0065516e:
          if (*(int *)(iVar11 + 0x21e6a) == 0) {
            ExceptionList = local_10;
            return;
          }
          piVar8 = (int *)FUN_0051b230();
          (**(code **)(*piVar8 + 0xc))();
          FUN_007a630a();
          (**(code **)(**(int **)(iVar11 + 0x21e6a) + 0x84))();
          pcVar10 = (char *)FUN_00528600();
          uVar15 = 0xffffffff;
          goto code_r0x006551b7;
        default:
          goto switchD_00655110_caseD_5;
        case 8.40779e-45:
        case 9.80909e-45:
        case 1.12104e-44:
          piVar8 = (int *)(DAT_00ab27b4 + *(int *)(iVar11 + 0x21e6e) * 0x4b2);
          if (*(int *)(iVar11 + 0x21e62) == 5) {
            iVar17 = (**(code **)(**(int **)(iVar11 + 0x21e5a) + 4))();
            if ((0 < iVar17) &&
               (cVar6 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) +
                                    0x30))(), cVar6 != '\0')) {
              cVar6 = FUN_005df9d0(local_20,local_1c);
              if (cVar6 != '\0') goto LAB_00656922;
              uVar9 = *(undefined4 *)((int)piVar8 + 0x12);
              uVar14 = *(undefined4 *)(**(int **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x212);
              (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x18))();
              fVar22 = (float10)FUN_004f0290();
              fVar22 = (float10)FUN_0044a9c0(uVar9,uVar14,(double)(fVar22 * (float10)_DAT_007e4088))
              ;
              (**(code **)(*piVar8 + 0xc))((double)(fVar22 * (float10)_DAT_007e4088));
              uVar9 = FUN_0042b6c9(s_RANGE_INFO_00866b20);
              FUN_007a630a(local_14,uVar9);
              iVar11 = piVar8[0xa2];
              uVar9 = FUN_004c7c14(piVar8[0xa3]);
              uVar9 = FUN_004c7bfa(iVar11,uVar9);
              FUN_007a630a(local_27c,s__s____s_00866b14,uVar9);
              goto LAB_006568f6;
            }
            if (((*(int *)(iVar11 + 0x21e62) == 5) &&
                (iVar17 = (**(code **)(**(int **)(iVar11 + 0x21e5a) + 4))(), 0 < iVar17)) &&
               (cVar6 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) +
                                    0x2c))(), cVar6 != '\0')) {
              cVar6 = FUN_005df9d0(local_20,local_1c);
              if ((cVar6 != '\0') ||
                 (iVar17 = FUN_004e9370(), iVar11 = local_18, *(int *)(iVar17 + 0x16a) < 0))
              goto LAB_00656922;
              (**(code **)(*(int *)**(undefined4 **)(*(int *)(local_18 + 0x21e5a) + 4) + 0x14))();
              uVar9 = *(undefined4 *)((int)piVar8 + 0x12);
              uVar14 = *(undefined4 *)(**(int **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x212);
              (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x14))();
              fVar22 = (float10)FUN_005172f0();
              FUN_004e9370(uVar9,uVar14,(double)(fVar22 * (float10)_DAT_007e4088));
              fVar22 = (float10)FUN_004ed6d0();
              (**(code **)(*piVar8 + 0xc))((double)(fVar22 * (float10)_DAT_007e4088));
              uVar9 = FUN_0042b6c9(s_RANGE_INFO_00866b20);
              FUN_007a630a(local_14,uVar9);
              iVar11 = piVar8[0xa2];
              uVar9 = FUN_004c7c14(piVar8[0xa3]);
              uVar9 = FUN_004c7bfa(iVar11,uVar9);
              FUN_007a630a(local_27c,s__s____s_00866b14,uVar9);
              goto LAB_006568f6;
            }
          }
          local_17c[0] = '\0';
          switch(DAT_00a98440) {
          case 0:
          case 3:
          case 4:
            if (piVar8[0xf5] == 0) {
              pcVar10 = (char *)(**(code **)(*piVar8 + 0xc))();
              uVar15 = 0xffffffff;
              goto code_r0x00655ad8;
            }
            uVar9 = (**(code **)(*(int *)(piVar8[0xf6] + 0xe) + 0xc))();
            uVar14 = (**(code **)(*piVar8 + 0xc))();
            uVar25 = CONCAT44(uVar9,uVar14);
            uVar9 = FUN_0042b6c9();
            FUN_007a630a(local_14,uVar9,uVar25);
            cVar6 = FUN_004e8ab0();
            if (cVar6 == '\0') goto LAB_006559ea;
            uVar15 = 0xffffffff;
            pcVar10 = &DAT_00839650;
            goto code_r0x0065596e;
          case 1:
            if (piVar8[0xf5] == 0) goto LAB_0065582f;
            pcVar10 = (char *)FUN_0064e9f0();
            uVar15 = 0xffffffff;
            goto code_r0x0065574b;
          case 2:
            local_28 = (int *)&DAT_0088ebf8;
            cVar6 = FUN_004ea7d0();
            if (cVar6 != '\0') {
              local_28 = (int *)FUN_0042b6c9();
            }
            cVar6 = FUN_004ea7f0();
            if (cVar6 != '\0') {
              local_28 = (int *)FUN_0042b6c9();
            }
            iVar11 = piVar8[0xeb];
            iVar17 = piVar8[0x95];
            piVar18 = local_28;
            uVar9 = FUN_004c7be0(piVar8[0x94],local_28);
            uVar25 = CONCAT44(piVar18,uVar9);
            uVar14 = FUN_0042b6c9();
            uVar13 = FUN_0075eeb0(iVar11,uVar14,uVar25);
            uVar9 = (&DAT_00ad29d8)[iVar17];
            uVar25 = CONCAT44(uVar14,uVar13);
            uVar14 = (**(code **)(*piVar8 + 0xc))();
            FUN_007a630a(local_14,s__s__s__s__s___s__s_00866acc,uVar14,uVar9,uVar25);
          default:
            goto switchD_00655726_caseD_5;
          case 6:
            if ((piVar8[0x95] == 8) || (piVar8[0x95] == 9)) goto switchD_00655726_caseD_5;
            (**(code **)(*piVar8 + 0xc))();
            FUN_007a630a();
            fVar22 = (float10)FUN_004ed140();
            if (fVar22 <= (float10)_DAT_007e3380) goto LAB_0065612e;
            fVar22 = (float10)FUN_004ed140();
            fVar22 = (float10)FUN_004ed0e0((double)fVar22);
            dVar23 = (double)fVar22;
            uVar9 = FUN_0042b6c9();
            FUN_007a630a(local_17c,&DAT_00866a18,uVar9,dVar23);
            uVar15 = 0xffffffff;
            pcVar10 = local_17c;
            goto code_r0x0065610d;
          case 9:
            if ((piVar8[0x95] == 8) || (piVar8[0x95] == 9)) goto switchD_00655726_caseD_5;
            (**(code **)(*piVar8 + 0xc))();
            FUN_007a630a();
            cVar6 = FUN_0049ee30();
            if (cVar6 == '\0') {
              dVar23 = 0.0;
              uVar9 = FUN_0042b6c9();
              uVar25 = CONCAT44(uVar9,local_17c);
            }
            else {
              fVar22 = (float10)FUN_0044aaf0();
              local_28 = (int *)(float)fVar22;
              fVar22 = (float10)FUN_004ecea0();
              dVar23 = (double)((fVar22 + (float10)(float)local_28) * (float10)_DAT_007e681c);
              uVar9 = FUN_0042b6c9();
              uVar25 = CONCAT44(uVar9,local_17c);
            }
            FUN_007a630a(uVar25,dVar23);
            uVar15 = 0xffffffff;
            pcVar10 = &DAT_00839650;
            break;
          case 0xb:
            uVar9 = *(undefined4 *)((int)piVar8 + 0x222);
            uVar14 = (**(code **)(*piVar8 + 0xc))();
            uVar25 = CONCAT44(uVar9,uVar14);
            uVar9 = FUN_0042b6c9();
            FUN_007a630a(local_14,uVar9,uVar25);
            goto switchD_00655726_caseD_5;
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
            iVar11 = piVar8[0xa2];
            uVar9 = FUN_004c7c14();
            uVar9 = FUN_004c7bfa(iVar11,uVar9);
            (**(code **)(*piVar8 + 0xc))(uVar9);
            FUN_007a630a();
            goto switchD_00655726_caseD_5;
          }
          goto code_r0x00655c01;
        case 1.26117e-44:
          if (((byte)DAT_00a98444 & 0x80) == 0) {
            ExceptionList = local_10;
            return;
          }
          if (((*(int *)(iVar11 + 0x21e62) != 5) ||
              (iVar17 = (**(code **)(**(int **)(iVar11 + 0x21e5a) + 4))(), iVar17 < 1)) ||
             (cVar6 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x2c)
                      )(), cVar6 == '\0')) {
            if (*(int *)(DAT_00ab27b4 + 0x3d4 + *(int *)(iVar11 + 0x21e6e) * 0x4b2) == iVar11) {
              *(undefined1 *)
               (*(int *)(DAT_00ab27b4 + *(int *)(iVar11 + 0x21e6e) * 0x4b2 + 0x46a) + 0x4c) = 1;
            }
            (**(code **)(*(int *)(DAT_00ab27b4 + *(int *)(iVar11 + 0x21e6e) * 0x4b2) + 0xc))();
            uVar9 = FUN_0042b6c9(s_RPPORT_00866984);
            FUN_007a630a(local_14,s__s__s_0083c948,uVar9);
            ExceptionList = local_10;
            return;
          }
          piVar8 = (int *)FUN_004e9370();
          cVar6 = FUN_005df9d0(local_20,local_1c);
          if (cVar6 != '\0') {
            ExceptionList = local_10;
            return;
          }
          iVar17 = FUN_004e9370();
          if (*(int *)(iVar17 + 0x16a) < 0) {
            ExceptionList = local_10;
            return;
          }
          (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x14))();
          uVar9 = *(undefined4 *)((int)piVar8 + 0x12);
          uVar14 = *(undefined4 *)(**(int **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x212);
          (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x14))();
          fVar22 = (float10)FUN_005172f0();
          FUN_004e9370(uVar9,uVar14,(double)(fVar22 * (float10)_DAT_007e4088));
          fVar22 = (float10)FUN_004ed6d0();
          (**(code **)(*piVar8 + 0xc))((double)(fVar22 * (float10)_DAT_007e4088));
          uVar9 = FUN_0042b6c9(s_RANGE_INFO_00866b20);
          pcVar10 = local_14;
          FUN_007a630a(local_14,uVar9);
          iVar11 = piVar8[0xa2];
          uVar9 = FUN_004c7c14(piVar8[0xa3]);
          uVar9 = FUN_004c7bfa(iVar11,uVar9);
          FUN_007a630a(local_37c,s__s____s_00866b14,uVar9);
          uVar15 = 0xffffffff;
          pcVar12 = local_37c;
          goto code_r0x00656e16;
        case 1.4013e-44:
          local_28 = (int *)(DAT_00ab27b4 + *(int *)(iVar11 + 0x21e6e) * 0x4b2);
          iVar17 = FUN_004ece80();
          local_30 = *(float *)(iVar17 + 0x10);
          iVar17 = FUN_004ece80();
          dVar23 = (double)local_30;
          dVar24 = (double)*(float *)(iVar17 + 0x14);
          uVar9 = FUN_0042b6c9();
          FUN_007a630a(local_14,uVar9,dVar24,dVar23);
          iVar17 = FUN_004ece80();
          puVar4 = *(undefined2 **)(iVar17 + 0x20);
          while (puVar4 != (undefined2 *)0x0) {
            puVar2 = *(undefined2 **)(puVar4 + 5);
            local_38._0_2_ = *puVar4;
            local_38._2_2_ = (undefined2)*(undefined4 *)(puVar4 + 1);
            uStack_34 = (undefined2)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10);
            iVar17 = FUN_00428ee0();
            puVar4 = puVar2;
            if ((iVar17 != 0) && ((int *)(iVar17 + -0x14) != (int *)0x0)) {
              (**(code **)(*(int *)(*(int *)(iVar17 + 0x234) + 0xe) + 0xc))();
              (**(code **)(*(int *)(iVar17 + -0x14) + 0xc))();
              FUN_007a630a();
              uVar15 = 0xffffffff;
              pcVar10 = local_27c;
              do {
                pcVar21 = pcVar10;
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1;
                pcVar21 = pcVar10 + 1;
                cVar6 = *pcVar10;
                pcVar10 = pcVar21;
              } while (cVar6 != '\0');
              uVar15 = ~uVar15;
              iVar11 = -1;
              pcVar10 = local_14;
              do {
                pcVar12 = pcVar10;
                if (iVar11 == 0) break;
                iVar11 = iVar11 + -1;
                pcVar12 = pcVar10 + 1;
                cVar6 = *pcVar10;
                pcVar10 = pcVar12;
              } while (cVar6 != '\0');
              pcVar10 = pcVar21 + -uVar15;
              pcVar21 = pcVar12 + -1;
              for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar21 = pcVar21 + 4;
              }
              for (uVar15 = uVar15 & 3; iVar11 = local_18, uVar15 != 0; uVar15 = uVar15 - 1) {
                *pcVar21 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar21 = pcVar21 + 1;
              }
            }
          }
          if (*(int *)(iVar11 + 0x21e62) != 0x13) {
            ExceptionList = local_10;
            return;
          }
          FUN_0042b6c9();
          FUN_007a630a();
          uVar15 = 0xffffffff;
          pcVar10 = local_27c;
          do {
            pcVar21 = pcVar10;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar21;
          } while (cVar6 != '\0');
          uVar15 = ~uVar15;
          pcVar21 = pcVar21 + -uVar15;
          iVar11 = -1;
          do {
            local_24 = local_14;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            local_24 = local_14 + 1;
            cVar6 = *local_14;
            local_14 = local_24;
          } while (cVar6 != '\0');
          local_24 = local_24 + -1;
          break;
        case 1.54143e-44:
          piVar8 = (int *)(DAT_00ab27b4 + *(int *)(iVar11 + 0x21e6e) * 0x4b2);
          if (((*(int *)(iVar11 + 0x21e62) == 5) &&
              (iVar17 = (**(code **)(**(int **)(iVar11 + 0x21e5a) + 4))(), 0 < iVar17)) &&
             (cVar6 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x30)
                      )(), cVar6 != '\0')) {
            cVar6 = FUN_005df9d0(local_20,local_1c);
            if (cVar6 == '\0') {
              uVar9 = *(undefined4 *)((int)piVar8 + 0x12);
              uVar14 = *(undefined4 *)(**(int **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x212);
              (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x18))();
              fVar22 = (float10)FUN_004f0290();
              fVar22 = (float10)FUN_0044a9c0(uVar9,uVar14,(double)(fVar22 * (float10)_DAT_007e4088))
              ;
              (**(code **)(*piVar8 + 0xc))((double)(fVar22 * (float10)_DAT_007e4088));
              uVar9 = FUN_0042b6c9(s_RANGE_INFO_00866b20);
              FUN_007a630a(local_14,uVar9);
            }
            goto switchD_00656bb6_caseD_3;
          }
          if (((*(int *)(iVar11 + 0x21e62) != 5) ||
              (iVar17 = (**(code **)(**(int **)(iVar11 + 0x21e5a) + 4))(), iVar17 < 1)) ||
             (cVar6 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x2c)
                      )(), cVar6 == '\0')) {
            switch(DAT_00a98440) {
            case 0:
            case 1:
              iVar11 = piVar8[0x95];
              uVar9 = FUN_0075eeb0();
              (**(code **)(*piVar8 + 0xc))((&DAT_00ad29d8)[iVar11],uVar9);
              FUN_007a630a();
              break;
            case 2:
              puVar19 = &DAT_0088ebf8;
              cVar6 = FUN_004ea7d0();
              if (cVar6 != '\0') {
                puVar19 = (undefined1 *)FUN_0042b6c9();
              }
              cVar6 = FUN_004ea7f0();
              if (cVar6 != '\0') {
                puVar19 = (undefined1 *)FUN_0042b6c9();
              }
              iVar11 = piVar8[0xeb];
              uVar9 = FUN_004c7be0(piVar8[0x94],puVar19);
              uVar25 = CONCAT44(puVar19,uVar9);
              uVar9 = FUN_0042b6c9();
              uVar9 = FUN_0075eeb0(iVar11,uVar9,uVar25);
              uVar9 = (**(code **)(*piVar8 + 0xc))(uVar9);
              FUN_007a630a(local_14,s__s__s__s___s__s_0086698c,uVar9);
              break;
            case 0xc:
            case 0xe:
              iVar11 = piVar8[0xa2];
              uVar9 = FUN_004c7c14();
              uVar9 = FUN_004c7bfa(iVar11,uVar9);
              (**(code **)(*piVar8 + 0xc))(uVar9);
              FUN_007a630a();
            }
            goto switchD_00656bb6_caseD_3;
          }
          cVar6 = FUN_005df9d0(local_20,local_1c);
          iVar11 = local_18;
          if (cVar6 != '\0') goto switchD_00656bb6_caseD_3;
          (**(code **)(*(int *)**(undefined4 **)(*(int *)(local_18 + 0x21e5a) + 4) + 0x14))();
          uVar9 = *(undefined4 *)((int)piVar8 + 0x12);
          uVar14 = *(undefined4 *)(**(int **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x212);
          (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x14))();
          fVar22 = (float10)FUN_005172f0();
          FUN_004e9370(uVar9,uVar14,(double)(fVar22 * (float10)_DAT_007e4088));
          fVar22 = (float10)FUN_004ed6d0();
          (**(code **)(*piVar8 + 0xc))((double)(fVar22 * (float10)_DAT_007e4088));
          uVar9 = FUN_0042b6c9(s_RANGE_INFO_00866b20);
          pcVar10 = local_14;
          FUN_007a630a(local_14,uVar9);
          iVar11 = piVar8[0xa2];
          uVar9 = FUN_004c7c14(piVar8[0xa3]);
          uVar9 = FUN_004c7bfa(iVar11,uVar9);
          FUN_007a630a(local_37c,s__s____s_00866b14,uVar9);
          uVar15 = 0xffffffff;
          pcVar21 = local_37c;
          goto code_r0x00656b7b;
        case 1.68156e-44:
          iVar11 = DAT_00ab27b4 + *(int *)(iVar11 + 0x21e6e) * 0x4b2;
          pcVar10 = (char *)(**(code **)(*(int *)(iVar11 + 0x30) + 0x30))(local_20,local_1c);
          iVar17 = 0;
          if (0 < *(int *)(iVar11 + 0x290)) {
            iVar20 = 0;
            do {
              if (pcVar10 == (char *)0x0) {
                pcVar10 = (char *)(**(code **)(*(int *)(DAT_00ab27b4 + 0x30 +
                                                       *(int *)(*(int *)(iVar11 + 0x298) + iVar20) *
                                                       0x4b2) + 0x30))(local_20,local_1c);
              }
              iVar17 = iVar17 + 1;
              iVar20 = iVar20 + 0xc;
            } while (iVar17 < *(int *)(iVar11 + 0x290));
          }
          if (pcVar10 == (char *)0x0) {
            ExceptionList = local_10;
            return;
          }
          uVar15 = 0xffffffff;
          do {
            pcVar21 = pcVar10;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pcVar21 = pcVar10 + 1;
            cVar6 = *pcVar10;
            pcVar10 = pcVar21;
          } while (cVar6 != '\0');
          uVar15 = ~uVar15;
          pcVar21 = pcVar21 + -uVar15;
          local_24 = local_14;
        }
        goto LAB_00657552;
      }
      pcVar10 = (char *)(**(code **)(**(int **)(param_1 + 0x21de4 + *(int *)(param_1 + 0x21e62) * 4)
                                    + 0x50))(local_20,local_1c);
      if (pcVar10 != (char *)0x0) {
        uVar15 = 0xffffffff;
        do {
          pcVar21 = pcVar10;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar21 = pcVar10 + 1;
          cVar6 = *pcVar10;
          pcVar10 = pcVar21;
        } while (cVar6 != '\0');
        uVar15 = ~uVar15;
        pcVar10 = pcVar21 + -uVar15;
        pcVar21 = local_14;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar21 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar21 = pcVar21 + 1;
        }
      }
      pcVar10 = (char *)(**(code **)(**(int **)(param_1 + 0x21de4 + *(int *)(param_1 + 0x21e62) * 4)
                                    + 0x54))(local_20,local_1c);
    }
    if (pcVar10 == (char *)0x0) {
      ExceptionList = local_10;
      return;
    }
  }
  else {
    FUN_0042b6c9();
    FUN_007a630a();
    uVar15 = 0xffffffff;
    pcVar10 = local_27c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = local_14;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
    if (*(char *)(param_1 + 0xe314) == '\0') goto LAB_00655099;
    fVar22 = (float10)FUN_0044e660();
    if ((float10)_DAT_007e3848 < fVar22) {
      uVar9 = FUN_0044df20();
      FUN_00791b3b(local_27c,uVar9);
      FUN_0042b6c9(s_NUKE_NEXT_00866bf4);
      FUN_007a630a();
      ExceptionList = local_10;
      return;
    }
    pcVar10 = (char *)FUN_0042b6c9();
  }
  uVar15 = 0xffffffff;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  pcVar21 = pcVar21 + -uVar15;
  goto LAB_00657552;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x00654d30:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = local_14;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  pcVar10 = (char *)FUN_00657cd0();
  if (pcVar10 != (char *)0x0) {
    uVar15 = 0xffffffff;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  if (DAT_00dc1540 == '\0') {
    ExceptionList = local_10;
    return;
  }
  switch(local_28) {
  case (int *)0x0:
  case (int *)0x1:
  case (int *)0x2:
  case (int *)0x5:
  case (int *)0x7:
    break;
  default:
    goto switchD_00654f1f_caseD_5;
  }
  goto LAB_00655099;
LAB_006550e4:
  puVar1 = (undefined4 *)puVar7[2];
  piVar8 = (int *)*puVar7;
  cVar6 = FUN_00644db0(local_20,local_1c);
  puVar7 = puVar1;
  iVar11 = local_18;
  if (cVar6 != '\0') goto LAB_00655144;
  goto joined_r0x006550e2;
LAB_00655144:
  pcVar10 = (char *)(**(code **)(*piVar8 + 0x30))();
  uVar15 = 0xffffffff;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  pcVar21 = pcVar21 + -uVar15;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)local_14 = *(undefined4 *)pcVar21;
    pcVar21 = pcVar21 + 4;
    local_14 = local_14 + 4;
  }
  goto LAB_00657559;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar12 = pcVar21 + 1;
    cVar6 = *pcVar21;
    pcVar21 = pcVar12;
    if (cVar6 == '\0') break;
code_r0x00656b7b:
    pcVar12 = pcVar21;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  iVar11 = -1;
  do {
    pcVar21 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  pcVar10 = pcVar12 + -uVar15;
  pcVar21 = pcVar21 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  goto switchD_00656bb6_caseD_3;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar12 + 1;
    cVar6 = *pcVar12;
    pcVar12 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x00656e16:
    pcVar21 = pcVar12;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  pcVar21 = pcVar21 + -uVar15;
  iVar11 = -1;
  do {
    local_24 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    local_24 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = local_24;
  } while (cVar6 != '\0');
  local_24 = local_24 + -1;
  goto LAB_00657552;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x00655c01:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_17c;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  uVar15 = 0xffffffff;
  pcVar10 = local_17c;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_14;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  iVar11 = piVar8[0x95];
  uVar9 = FUN_0075eeb0();
  fVar22 = (float10)FUN_004eceb0((&DAT_00ad29d8)[iVar11],uVar9);
  fVar22 = (float10)FUN_004ecea0((double)(fVar22 * (float10)_DAT_007e4088));
  dVar23 = (double)(fVar22 * (float10)_DAT_007e4088);
  uVar9 = FUN_0042b6c9(s_HPROV_INFRA_00849360);
  FUN_007a630a(local_17c,&DAT_00866a54,uVar9,dVar23);
  uVar15 = 0xffffffff;
  pcVar10 = local_17c;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_14;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  if (((*(char *)((int)piVar8 + 0x46e) != '\0') || (piVar8[0xf6] == DAT_00d0ca90)) &&
     ((_DAT_007e3380 < (float)piVar8[0x9c] || (_DAT_007e3380 < (float)piVar8[0xa0])))) {
    FUN_0042b6c9();
    FUN_007a630a();
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
    if ((_DAT_007e3380 < (float)piVar8[0x9c]) || (_DAT_007e3380 < (float)piVar8[0x9b])) {
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
      if ((float)piVar8[0x9b] <= _DAT_007e3380) {
        FUN_007a630a(local_17c,&DAT_00839650);
      }
      else {
        FUN_007a630a(local_17c,s____1f_00866a3c,(double)(_DAT_008775a0 * (float)piVar8[0x9b]));
      }
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    if ((_DAT_007e3380 < (float)piVar8[0xa0]) || (_DAT_007e3380 < (float)piVar8[0x9a])) {
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
      if ((float)piVar8[0x9a] <= _DAT_007e3380) {
        FUN_007a630a(local_17c,&DAT_00839650);
      }
      else {
        FUN_007a630a(local_17c,s____1f_00866a3c,(double)(_DAT_008775a0 * (float)piVar8[0x9a]));
      }
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    if (_DAT_007e3380 < (float)piVar8[0x9f]) {
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    if (_DAT_007e3380 < (float)piVar8[0x9e]) {
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    if (_DAT_007e3380 < (float)piVar8[0x9d]) goto LAB_0065681f;
  }
  goto switchD_00655726_caseD_5;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x0065610d:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_14;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
LAB_0065612e:
  fVar22 = (float10)FUN_004eceb0();
  fVar22 = (float10)FUN_004ecea0((double)(fVar22 * (float10)_DAT_007e4088));
  dVar23 = (double)(fVar22 * (float10)_DAT_007e4088);
  uVar9 = FUN_0042b6c9();
  FUN_007a630a(local_17c,&DAT_00866a18,uVar9,dVar23);
  uVar15 = 0xffffffff;
  pcVar10 = local_17c;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_14;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  if (0 < *(int *)((int)piVar8 + 0x1f2)) {
    uVar9 = FUN_0042b6c9(s_RESOURCE_MANPOWER_0085f12c);
    FUN_007a630a(local_17c,&DAT_00866a08,uVar9);
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)((int)piVar8 + 0x216)) {
    local_28 = *(int **)((int)piVar8 + 0x216);
    dVar23 = (double)*(float *)((int)piVar8 + 0x216);
    fVar22 = (float10)FUN_004ecd50();
    fVar22 = (float10)FUN_004ec900((double)fVar22,dVar23);
    dVar23 = (double)fVar22;
    uVar9 = FUN_0042b6c9(s_HPROV_ENERGY_008669f8);
    FUN_007a630a(local_17c,&DAT_008669dc,uVar9,dVar23);
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)((int)piVar8 + 0x21a)) {
    local_28 = *(int **)((int)piVar8 + 0x21a);
    dVar23 = (double)*(float *)((int)piVar8 + 0x21a);
    fVar22 = (float10)FUN_004ecc40();
    fVar22 = (float10)FUN_004ec7e0((double)fVar22,dVar23);
    dVar23 = (double)fVar22;
    uVar9 = FUN_0042b6c9(s_HPROV_METAL_008669d0);
    FUN_007a630a(local_17c,&DAT_008669dc,uVar9,dVar23);
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)((int)piVar8 + 0x212)) {
    local_28 = *(int **)((int)piVar8 + 0x212);
    dVar23 = (double)*(float *)((int)piVar8 + 0x212);
    fVar22 = (float10)FUN_004ecb30();
    fVar22 = (float10)FUN_004ec6c0((double)fVar22,dVar23);
    dVar23 = (double)fVar22;
    uVar9 = FUN_0042b6c9(s_HPROV_RARE_MATERIALS_008669b8);
    FUN_007a630a(local_17c,&DAT_008669dc,uVar9,dVar23);
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  if (_DAT_007e3380 < *(float *)((int)piVar8 + 0x20e)) {
    local_28 = *(int **)((int)piVar8 + 0x20e);
    dVar23 = (double)*(float *)((int)piVar8 + 0x20e);
    fVar22 = (float10)FUN_004eca20();
    fVar22 = (float10)FUN_004ec5a0((double)fVar22,dVar23);
    dVar23 = (double)fVar22;
    uVar9 = FUN_0042b6c9(s_HPROV_OIL_008669ac);
    FUN_007a630a(local_17c,&DAT_008669dc,uVar9,dVar23);
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  if ((*(char *)((int)piVar8 + 0x46e) != '\0') &&
     ((((_DAT_007e3380 < (float)piVar8[0x9c] || (_DAT_007e3380 < (float)piVar8[0x9e])) ||
       (_DAT_007e3380 < (float)piVar8[0x9f])) ||
      ((_DAT_007e3380 < (float)piVar8[0x9d] || (_DAT_007e3380 < (float)piVar8[0xa0])))))) {
    FUN_0042b6c9();
    FUN_007a630a();
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
    if ((_DAT_007e3380 < (float)piVar8[0x9c]) || (_DAT_007e3380 < (float)piVar8[0x9b])) {
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
      if ((float)piVar8[0x9b] <= _DAT_007e3380) {
        FUN_007a630a(local_17c,&DAT_00839650);
      }
      else {
        FUN_007a630a(local_17c,s____1f_00866a3c,(double)(_DAT_008775a0 * (float)piVar8[0x9b]));
      }
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    if ((_DAT_007e3380 < (float)piVar8[0xa0]) || (_DAT_007e3380 < (float)piVar8[0x9a])) {
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
      if ((float)piVar8[0x9a] <= _DAT_007e3380) {
        FUN_007a630a(local_17c,&DAT_00839650);
      }
      else {
        FUN_007a630a(local_17c,s____1f_00866a3c,(double)(_DAT_008775a0 * (float)piVar8[0x9a]));
      }
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    if (_DAT_007e3380 < (float)piVar8[0x9f]) {
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    if (_DAT_007e3380 < (float)piVar8[0x9e]) {
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
    if (_DAT_007e3380 < (float)piVar8[0x9d]) {
LAB_0065681f:
      FUN_0042b6c9();
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      pcVar21 = pcVar21 + -uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar12 + -1;
      goto LAB_0065686f;
    }
  }
  goto switchD_00655726_caseD_5;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x0065574b:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_24;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  uVar15 = 0xffffffff;
  pcVar10 = &DAT_00839650;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_24;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  iVar11 = piVar8[0xf5];
  if (iVar11 == piVar8[0xf6]) {
    (**(code **)(*(int *)(iVar11 + 0xe) + 0xc))();
    FUN_0042b6c9(&DAT_00866b04);
    FUN_007a630a();
  }
  else {
    uVar9 = (**(code **)(*(int *)(piVar8[0xf6] + 0xe) + 0xc))();
    uVar14 = (**(code **)(*(int *)(iVar11 + 0xe) + 0xc))();
    uVar25 = CONCAT44(uVar9,uVar14);
    uVar9 = FUN_0042b6c9();
    FUN_007a630a(local_17c,uVar9,uVar25);
  }
  uVar15 = 0xffffffff;
  pcVar10 = local_17c;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_24;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
LAB_0065582f:
  iVar11 = piVar8[0x95];
  uVar9 = FUN_0075eeb0();
  (**(code **)(*piVar8 + 0xc))((&DAT_00ad29d8)[iVar11],uVar9);
  FUN_007a630a();
  goto switchD_00655726_caseD_5;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x00655ad8:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  pcVar21 = pcVar21 + -uVar15;
  pcVar10 = local_14;
  goto LAB_0065686f;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x00656ef9:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = local_14;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  goto LAB_00656f0d;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x00656ed9:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = local_14;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
LAB_00656f0d:
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  if (*(int *)(iVar11 + 0x21dce) != 0) {
    FUN_007a77fa();
  }
  *(undefined4 *)(iVar11 + 0x21dce) = 0;
  if (*(int *)(iVar11 + 0x21dd2) != 0) {
    FUN_007a77fa();
  }
  *(undefined4 *)(iVar11 + 0x21dd2) = 0;
  goto switchD_00655110_caseD_5;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x006551b7:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  iVar17 = -1;
  pcVar10 = local_14;
  do {
    pcVar12 = pcVar10;
    if (iVar17 == 0) break;
    iVar17 = iVar17 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  iVar17 = *(int *)(*(int *)(*(int *)(iVar11 + 0x21e6a) + 0x248) + 6);
  *(int *)(iVar11 + 0x21dca) = iVar17;
  if (iVar17 == 0) {
    ExceptionList = local_10;
    return;
  }
  iVar17 = **(int **)(iVar11 + 0x21dc6);
  FUN_0044b160();
  (**(code **)(iVar17 + 0x2c))();
  uVar9 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
  FUN_00415f20(uVar9);
  (**(code **)(**(int **)(iVar11 + 0x21dc6) + 0x34))(4);
  ExceptionList = local_10;
  return;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar12 + 1;
    cVar6 = *pcVar12;
    pcVar12 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x00655293:
    pcVar21 = pcVar12;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  pcVar21 = pcVar21 + -uVar15;
  iVar11 = -1;
  do {
    local_24 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    local_24 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = local_24;
  } while (cVar6 != '\0');
  local_24 = local_24 + -1;
LAB_00657552:
  local_14 = local_24;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)local_14 = *(undefined4 *)pcVar21;
    pcVar21 = pcVar21 + 4;
    local_14 = local_14 + 4;
  }
LAB_00657559:
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *local_14 = *pcVar21;
    pcVar21 = pcVar21 + 1;
    local_14 = local_14 + 1;
  }
  ExceptionList = local_10;
  return;
  while( true ) {
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
    if (cVar6 == '\0') break;
code_r0x0065596e:
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
  }
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_14;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
  (**(code **)(*(int *)(piVar8[0xf6] + 0xe) + 0xc))();
  FUN_0042b6c9(s_NATIONAL_PROV_OF_00866aa4);
  FUN_007a630a();
  uVar15 = 0xffffffff;
  pcVar10 = local_37c;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  iVar11 = -1;
  pcVar10 = local_14;
  do {
    pcVar12 = pcVar10;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar12 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar6 != '\0');
  pcVar10 = pcVar21 + -uVar15;
  pcVar21 = pcVar12 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar21 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar21 = pcVar21 + 1;
  }
LAB_006559ea:
  if (piVar8[0xf6] != piVar8[0xf5]) {
    uVar15 = 0xffffffff;
    pcVar10 = &DAT_00839650;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
    iVar11 = piVar8[0xf6];
    (**(code **)(*(int *)(piVar8[0xf5] + 0xe) + 0xc))();
    uVar9 = (**(code **)(*piVar8 + 0xc))();
    (**(code **)(*(int *)(iVar11 + 0xe) + 0xc))(uVar9);
    FUN_0042b6c9(s_PROV_ORIGOWNED_BY_00866a90);
    FUN_007a630a();
    uVar15 = 0xffffffff;
    pcVar10 = local_37c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  pcVar10 = (char *)FUN_0064ea00(DAT_00ab0f7c,piVar8[0xf6]);
  uVar15 = 0xffffffff;
  do {
    pcVar21 = pcVar10;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar21 = pcVar10 + 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar21;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  pcVar21 = pcVar21 + -uVar15;
  pcVar10 = local_24;
LAB_0065686f:
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar21;
    pcVar21 = pcVar21 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pcVar10 = *pcVar21;
    pcVar21 = pcVar21 + 1;
    pcVar10 = pcVar10 + 1;
  }
switchD_00655726_caseD_5:
  if ((*(int *)(local_18 + 0x21e62) == 0x13) && (iVar11 = FUN_0064ec00(), iVar11 != 0)) {
    piVar18 = (int *)FUN_0064ec00();
    cVar6 = (**(code **)(*piVar18 + 0x10))();
    if (cVar6 != '\0') {
      iVar11 = FUN_0064ec00();
      iVar11 = *(int *)((int)piVar8 + *(int *)(iVar11 + 0x5a) * 4 + 0x1c6);
      local_28 = *(int **)(iVar11 + 0x14);
      dVar23 = (double)*(float *)(iVar11 + 0x10);
      dVar24 = (double)(float)local_28;
      uVar9 = FUN_004f56c0();
      FUN_007a630a(local_27c,s__s_____0f___0f_0086699c,uVar9,dVar24,dVar23);
LAB_006568f6:
      uVar15 = 0xffffffff;
      pcVar10 = local_27c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar10 = pcVar21 + -uVar15;
      pcVar21 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar21 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar21 = pcVar21 + 1;
      }
    }
  }
LAB_00656922:
  iVar11 = FUN_00581e60();
  uVar9 = *(undefined4 *)(iVar11 + 4);
  puVar7 = (undefined4 *)FUN_00581e60();
  FUN_00652570(*puVar7,uVar9);
  FUN_00581e60();
  FUN_00581e60();
  FUN_004d89d0();
  FUN_006d4660();
switchD_00655110_caseD_5:
  if ((int)local_30 < 6) {
    ExceptionList = local_10;
    return;
  }
  if ((8 < (int)local_30) && (local_30 != 1.54143e-44)) {
    ExceptionList = local_10;
    return;
  }
switchD_00656bb6_caseD_3:
  local_39 = local_30 != 1.54143e-44;
  if (DAT_00877690 < *(int *)(local_18 + 0x21e6e)) {
    ExceptionList = local_10;
    return;
  }
  local_28 = (int *)(DAT_00ab27b4 + *(int *)(local_18 + 0x21e6e) * 0x4b2);
  if ((char)local_28[0x60] != '\0') {
    ExceptionList = local_10;
    return;
  }
  iVar11 = *(int *)(local_18 + 0x21e62);
  if (iVar11 != 1) {
    if (iVar11 < 4) {
      ExceptionList = local_10;
      return;
    }
    if (5 < iVar11) {
      ExceptionList = local_10;
      return;
    }
  }
  if (iVar11 == 5) {
    iVar11 = (**(code **)(**(int **)(local_18 + 0x21e5a) + 4))();
    if (iVar11 < 1) {
      ExceptionList = local_10;
      return;
    }
    pcVar10 = *(char **)(**(int **)(*(int *)(local_18 + 0x21e5a) + 4) + 0xc);
  }
  else {
    pcVar10 = *(char **)(local_18 + 0x13d22);
  }
  if ((int)pcVar10 < 1) {
    ExceptionList = local_10;
    return;
  }
  if (DAT_00877690 < (int)pcVar10) {
    ExceptionList = local_10;
    return;
  }
  piVar8 = (int *)(DAT_00ab27b4 + (int)pcVar10 * 0x4b2);
  if (*(char *)(DAT_00ab27b4 + 0x180 + (int)pcVar10 * 0x4b2) != '\0') {
    ExceptionList = local_10;
    return;
  }
  local_24 = pcVar10;
  fVar22 = (float10)FUN_0044a9c0(pcVar10,*(undefined4 *)(local_18 + 0x21e6e));
  local_38 = (int *)(float)(fVar22 * (float10)_DAT_007e4088);
  local_30 = (float)(int)ROUND((float)local_38);
  if (0 < (int)local_30) {
    uVar9 = (**(code **)(*local_28 + 0xc))();
    uVar14 = (**(code **)(*piVar8 + 0xc))();
    uVar25 = CONCAT44(uVar9,uVar14);
    uVar9 = FUN_0042b6c9();
    FUN_007a630a(local_17c,uVar9,uVar25);
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
    FUN_0042b6c9(s_DIST_PROV_DIRECT_00866954);
    FUN_007a630a();
    uVar15 = 0xffffffff;
    pcVar10 = local_17c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
    fVar22 = (float10)FUN_004ed6d0();
    local_38 = (int *)(float)(fVar22 * (float10)_DAT_007e4088);
    local_30 = (float)(int)ROUND((float)local_38);
    pcVar10 = local_24;
    if (0 < (int)local_30) {
      FUN_0042b6c9(s_DIST_PROV_NAVAL_00866944);
      FUN_007a630a();
      uVar15 = 0xffffffff;
      pcVar10 = local_17c;
      do {
        pcVar21 = pcVar10;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar21 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar21;
      } while (cVar6 != '\0');
      uVar15 = ~uVar15;
      iVar11 = -1;
      pcVar10 = local_14;
      do {
        pcVar12 = pcVar10;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar12 = pcVar10 + 1;
        cVar6 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar6 != '\0');
      pcVar21 = pcVar21 + -uVar15;
      pcVar12 = pcVar12 + -1;
      for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar21;
        pcVar21 = pcVar21 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar15 = uVar15 & 3; pcVar10 = local_24, uVar15 != 0; uVar15 = uVar15 - 1) {
        *pcVar12 = *pcVar21;
        pcVar21 = pcVar21 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
  }
  if (*(int *)(local_18 + 0x21e62) != 5) {
    ExceptionList = local_10;
    return;
  }
  if (pcVar10 == (char *)*(int *)(local_18 + 0x21e6e)) {
    ExceptionList = local_10;
    return;
  }
  cVar6 = FUN_00522bc0();
  iVar11 = local_18;
  if (cVar6 == '\0') {
    ExceptionList = local_10;
    return;
  }
  local_78 = (undefined4 *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_7c = &PTR_FUN_007e8694;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_60 = &PTR_FUN_007e8b90;
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_4c = &PTR_FUN_007e8b48;
  local_8 = 2;
  piVar18 = (int *)0x0;
  cVar6 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(local_18 + 0x21e5a) + 4) + 0x28))();
  if (cVar6 == '\0') {
    cVar6 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(iVar11 + 0x21e5a) + 4) + 0x30))();
    if (cVar6 == '\0') {
      local_30 = (float)FUN_00430cc0();
      iVar11 = local_5c;
      if (local_5c != 0) {
        do {
          iVar11 = *(int *)(iVar11 + 8);
          fVar22 = (float10)FUN_004ed6d0();
          local_38 = (int *)(float)(fVar22 * (float10)_DAT_007e4088);
          local_68 = (float)(int)ROUND((float)local_38);
          piVar18 = (int *)((int)piVar18 + (int)local_68);
        } while (iVar11 != 0);
        if (piVar18 != (int *)0x0) goto LAB_006573b9;
      }
      fVar22 = (float10)FUN_004ed6d0();
      local_68 = (float)(fVar22 * (float10)_DAT_007e4088);
      piVar18 = (int *)(int)ROUND(local_68);
      local_38 = piVar18;
    }
    else {
      local_30 = (float)FUN_00430cc0();
      puVar7 = local_48;
      if (local_48 != (undefined4 *)0x0) {
        do {
          puVar1 = (undefined4 *)((int)piVar8 + 0x12);
          puVar3 = (undefined4 *)puVar7[2];
          piVar8 = (int *)*puVar7;
          fVar22 = (float10)FUN_0044a9c0(*puVar1,*(undefined4 *)((int)piVar8 + 0x12));
          local_38 = (int *)(float)(fVar22 * (float10)_DAT_007e4088);
          local_28 = (int *)(int)ROUND((float)local_38);
          piVar18 = (int *)((int)piVar18 + (int)local_28);
          puVar7 = puVar3;
        } while (puVar3 != (undefined4 *)0x0);
        if (piVar18 != (int *)0x0) goto LAB_006573b9;
      }
      fVar22 = (float10)FUN_0044a9c0(local_24,*(undefined4 *)(local_18 + 0x21e6e));
      piVar18 = (int *)(int)ROUND((float)(fVar22 * (float10)_DAT_007e4088));
      local_28 = piVar18;
      local_38 = (int *)(float)(fVar22 * (float10)_DAT_007e4088);
    }
  }
  else {
    local_30 = (float)FUN_00430cc0();
    puVar7 = local_78;
    if (local_78 != (undefined4 *)0x0) {
      do {
        puVar1 = (undefined4 *)((int)piVar8 + 0x12);
        puVar3 = (undefined4 *)puVar7[2];
        piVar8 = (int *)*puVar7;
        fVar22 = (float10)FUN_0044a9c0(*puVar1,*(undefined4 *)((int)piVar8 + 0x12));
        local_38 = (int *)(float)(fVar22 * (float10)_DAT_007e4088);
        local_28 = (int *)(int)ROUND((float)local_38);
        piVar18 = (int *)((int)piVar18 + (int)local_28);
        puVar7 = puVar3;
      } while (puVar3 != (undefined4 *)0x0);
      if (piVar18 != (int *)0x0) goto LAB_006573b9;
    }
    fVar22 = (float10)FUN_0044a9c0(local_24,*(undefined4 *)(local_18 + 0x21e6e));
    piVar18 = (int *)(int)ROUND((float)(fVar22 * (float10)_DAT_007e4088));
    local_28 = piVar18;
    local_38 = (int *)(float)(fVar22 * (float10)_DAT_007e4088);
  }
LAB_006573b9:
  fVar5 = local_30;
  if (0 < (int)local_30) {
    local_68 = *(float *)(DAT_00893530 + 0x14);
    local_64 = *(undefined2 *)(DAT_00893530 + 0x18);
    FUN_0042db80();
    FUN_0079168d(local_47c,&local_68);
    uVar26 = CONCAT44(local_47c,fVar5);
    uVar9 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(local_18 + 0x21e5a) + 4) + 0xc))();
    uVar25 = CONCAT44(piVar18,uVar9);
    uVar9 = FUN_0042b6c9();
    FUN_007a630a(local_57c,uVar9,uVar25,uVar26);
    uVar15 = 0xffffffff;
    pcVar10 = local_57c;
    do {
      pcVar21 = pcVar10;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar21 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar21;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    iVar11 = -1;
    pcVar10 = local_14;
    do {
      pcVar12 = pcVar10;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar12 = pcVar10 + 1;
      cVar6 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar6 != '\0');
    pcVar10 = pcVar21 + -uVar15;
    pcVar21 = pcVar12 + -1;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar21 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  local_4c = &PTR_LAB_007e518c;
  puVar7 = local_48;
  while (puVar7 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)puVar7[2];
    FUN_00796cd8();
  }
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_60 = &PTR_LAB_007e518c;
  puVar7 = local_78;
  iVar11 = local_5c;
  while (local_78 = puVar7, iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
    puVar7 = local_78;
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_7c = &PTR_LAB_007e518c;
  if (puVar7 != (undefined4 *)0x0) {
    do {
      puVar7 = (undefined4 *)puVar7[2];
      FUN_00796cd8();
    } while (puVar7 != (undefined4 *)0x0);
    ExceptionList = local_10;
    return;
  }
switchD_00654f1f_caseD_5:
  ExceptionList = local_10;
  return;
}


