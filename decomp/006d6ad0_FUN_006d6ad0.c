// FUN_006d6ad0 @ 6d6ad0 size=3522

uint __thiscall FUN_006d6ad0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  undefined **local_5cc;
  char *local_5c8;
  int local_5c4;
  int local_5c0;
  undefined **local_5bc;
  undefined4 local_5b8;
  char *local_5b4;
  int local_5b0;
  undefined4 local_5ac;
  int local_5a8;
  int local_5a4;
  int local_5a0;
  int local_59c;
  undefined4 local_598;
  int local_594;
  int local_590;
  char local_58c [128];
  undefined1 local_50c [128];
  undefined1 local_48c [128];
  undefined1 local_40c [128];
  undefined1 local_38c [128];
  undefined1 local_30c [256];
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d95f0;
  local_c = ExceptionList;
  iVar5 = -1;
  pcVar2 = param_2;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (iVar5 == -2) {
    param_2 = s_db_tutorial_csv_0086d290;
  }
  ExceptionList = &local_c;
  local_5c8 = operator_new(8);
  uVar11 = 0;
  local_4 = 0;
  if (local_5c8 != (char *)0x0) {
    uVar11 = FUN_00426120(param_2);
  }
  local_4 = 0xffffffff;
  local_5b8 = uVar11;
  iVar5 = FUN_00426720();
  FUN_00426330(1);
  local_5a0 = iVar5 + -2;
  if (iVar5 == 1) {
    uVar6 = 0;
  }
  else {
    do {
      pcVar2 = operator_new(0x42);
      local_5c8 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2[8] = '\0';
        pcVar2[9] = '\0';
        pcVar2[10] = '\0';
        pcVar2[0xb] = '\0';
        pcVar2[0xc] = '\0';
        pcVar2[0xd] = '\0';
        pcVar2[0xe] = '\0';
        pcVar2[0xf] = '\0';
        pcVar2[0x10] = '\0';
        pcVar2[0x11] = '\0';
        pcVar2[0x12] = '\0';
        pcVar2[0x13] = '\0';
        pcVar2[0x14] = '\0';
        *(undefined ***)(pcVar2 + 4) = &PTR_LAB_007e378c;
        local_4 = 2;
        FUN_005835f0();
      }
      local_4 = 0xffffffff;
      FUN_004265c0(local_58c);
      local_5cc = (undefined **)0x0;
      ppuVar8 = &PTR_s_ShowMessage_0086cd9c;
      do {
        iVar5 = FUN_007a8730(*ppuVar8,local_58c);
        if (iVar5 == 0) {
          uVar9 = (&DAT_0086cd98)[(int)local_5cc * 2];
          goto LAB_006d6bff;
        }
        ppuVar8 = ppuVar8 + 2;
        local_5cc = (undefined **)((int)local_5cc + 1);
      } while ((int)ppuVar8 < 0x86cf5c);
      uVar9 = 0xffffffff;
LAB_006d6bff:
      local_59c = 0;
      FUN_00426380(&local_59c);
      FUN_00426380(pcVar2 + 0x18);
      FUN_00426380(pcVar2 + 0x2e);
      *(undefined4 *)pcVar2 = uVar9;
      pcVar2[0x16] = local_59c != 0;
      pcVar2[0x32] = '\0';
      pcVar2[0x33] = '\0';
      pcVar2[0x34] = '\0';
      pcVar2[0x35] = '\0';
      pcVar2[0x3a] = '\0';
      pcVar2[0x3b] = '\0';
      pcVar2[0x3c] = '\0';
      pcVar2[0x3d] = '\0';
      pcVar2[0x36] = '\0';
      pcVar2[0x37] = '\0';
      pcVar2[0x38] = '\0';
      pcVar2[0x39] = '\0';
      pcVar2[0x3e] = '\0';
      pcVar2[0x3f] = '\0';
      pcVar2[0x40] = '\0';
      pcVar2[0x41] = '\0';
      switch(uVar9) {
      case 0:
        FUN_004265c0(local_58c);
        local_5cc = &PTR_s__NAME_0086cf58;
        do {
          uVar6 = 0xffffffff;
          pcVar10 = local_58c;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          local_5b4 = operator_new(~uVar6 + 5);
          uVar6 = 0xffffffff;
          pcVar10 = local_58c;
          do {
            pcVar13 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar13 + -uVar6;
          pcVar13 = local_5b4;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar10 = *local_5cc;
          do {
            pcVar13 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar5 = -1;
          pcVar10 = local_5b4;
          do {
            pcVar12 = pcVar10;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar12 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar1 != '\0');
          pcVar10 = pcVar13 + -uVar6;
          pcVar13 = pcVar12 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          iVar5 = *(int *)(pcVar2 + 0x24);
          puVar3 = operator_new(0xe);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3[1] = iVar5;
            *puVar3 = local_5b4;
            puVar3[2] = 0;
            *(undefined1 *)(puVar3 + 3) = 0;
          }
          iVar4 = *(int *)(pcVar2 + 0x28);
          *(undefined4 **)(pcVar2 + 0x24) = puVar3;
          *(int *)(pcVar2 + 0x28) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 **)(pcVar2 + 0x20) = puVar3;
          }
          else {
            *(undefined4 **)(iVar5 + 8) = puVar3;
          }
          local_5cc = local_5cc + 1;
        } while ((int)local_5cc < 0x86cf60);
        pcVar2[0x18] = -1;
        pcVar2[0x19] = -1;
        pcVar2[0x1a] = -1;
        pcVar2[0x1b] = -1;
        local_598 = 0;
        local_5ac = 0;
        FUN_00426380(&local_598);
        FUN_00426380(&local_5ac);
        *(undefined4 *)(pcVar2 + 0x32) = local_598;
        *(undefined4 *)(pcVar2 + 0x36) = local_5ac;
        iVar5 = *(int *)(param_1 + 0x221cc);
        puVar3 = operator_new(0xe);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = pcVar2;
          puVar3[1] = iVar5;
          puVar3[2] = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
        }
        iVar4 = *(int *)(param_1 + 0x221d0);
        *(undefined4 **)(param_1 + 0x221cc) = puVar3;
        *(int *)(param_1 + 0x221d0) = iVar4 + 1;
        if (iVar4 == 0) {
          *(undefined4 **)(param_1 + 0x221c8) = puVar3;
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar3;
        }
        goto LAB_006d7859;
      case 1:
        iVar5 = *(int *)(param_1 + 0x221cc);
        puVar3 = operator_new(0xe);
        if (puVar3 != (undefined4 *)0x0) goto LAB_006d6f58;
LAB_006d6f6d:
        puVar3 = (undefined4 *)0x0;
        goto LAB_006d72db;
      case 2:
        iVar5 = *(int *)(param_1 + 0x221cc);
        puVar3 = operator_new(0xe);
        if (puVar3 == (undefined4 *)0x0) goto LAB_006d6f6d;
LAB_006d6f58:
        *puVar3 = pcVar2;
        puVar3[1] = iVar5;
        puVar3[2] = 0;
        *(undefined1 *)(puVar3 + 3) = 0;
        goto LAB_006d72db;
      case 3:
        local_5cc = (undefined **)0x13;
        do {
          FUN_00426380(&local_590);
          if (local_590 != 0) {
            FUN_0049a100(local_590);
          }
          local_590 = 0;
          local_5cc = (undefined **)((int)local_5cc + -1);
        } while (local_5cc != (undefined **)0x0);
        local_5cc = (undefined **)0x0;
        goto LAB_006d7068;
      case 4:
        iVar5 = 0x13;
        do {
          FUN_004265c0(local_48c);
          iVar4 = FUN_006d68a0(local_48c);
          if (iVar4 != -1) {
            FUN_0049a100(iVar4);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        puVar3 = operator_new(0xe);
        if (puVar3 != (undefined4 *)0x0) goto LAB_006d7016;
LAB_006d702b:
        puVar3 = (undefined4 *)0x0;
        goto LAB_006d74f6;
      case 5:
        FUN_006d6a20(uVar11,pcVar2);
        iVar5 = *(int *)(param_1 + 0x221cc);
        puVar3 = operator_new(0xe);
        if (puVar3 == (undefined4 *)0x0) goto LAB_006d702b;
LAB_006d7016:
        *puVar3 = pcVar2;
        puVar3[1] = iVar5;
        puVar3[2] = 0;
        *(undefined1 *)(puVar3 + 3) = 0;
        goto LAB_006d74f6;
      case 6:
        local_5cc = (undefined **)0x13;
        do {
          FUN_00426380(&local_5a4);
          if (local_5a4 != 0) {
            FUN_0049a100(local_5a4);
          }
          local_5a4 = 0;
          local_5cc = (undefined **)((int)local_5cc + -1);
        } while (local_5cc != (undefined **)0x0);
LAB_006d7068:
        iVar5 = *(int *)(param_1 + 0x221cc);
        puVar3 = operator_new(0xe);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = pcVar2;
          puVar3[1] = iVar5;
          puVar3[2] = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
        }
        *(undefined4 **)(param_1 + 0x221cc) = puVar3;
        iVar4 = *(int *)(param_1 + 0x221d0);
        *(int *)(param_1 + 0x221d0) = iVar4 + 1;
        if (iVar4 == 0) goto LAB_006d7517;
        *(undefined4 **)(iVar5 + 8) = puVar3;
        goto LAB_006d785e;
      case 7:
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 3;
        goto LAB_006d72bd;
      case 8:
        iVar5 = 0x13;
        do {
          FUN_00426380(&local_594);
          if (local_594 != 0) {
            FUN_0049a100(local_594);
          }
          iVar5 = iVar5 + -1;
          local_594 = 0;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 5;
        goto LAB_006d746d;
      case 9:
        iVar5 = 0x13;
        do {
          FUN_004265c0(local_30c);
          iVar4 = FUN_004af6b0(local_30c);
          if (iVar4 != 0) {
            FUN_0049a100(iVar4);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 4;
        break;
      default:
        goto switchD_006d6c59_caseD_a;
      case 0xb:
        iVar5 = 0x13;
        do {
          FUN_00426380(&local_5b0);
          if (local_5b0 != 0) {
            FUN_0049a100(local_5b0);
          }
          iVar5 = iVar5 + -1;
          local_5b0 = 0;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 6;
        goto LAB_006d746d;
      case 0xc:
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 7;
        goto LAB_006d72bd;
      case 0xd:
        iVar5 = 0x13;
        do {
          FUN_004265c0(local_20c);
          iVar4 = FUN_004af6b0(local_20c);
          if (iVar4 != 0) {
            FUN_0049a100(iVar4);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 8;
        break;
      case 0xe:
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 9;
        goto LAB_006d72bd;
      case 0xf:
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 10;
LAB_006d72bd:
        if (local_5c8 == (char *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_006d7990(pcVar2,iVar5,0);
        }
        local_4 = 0xffffffff;
LAB_006d72db:
        *(undefined4 **)(param_1 + 0x221cc) = puVar3;
        iVar4 = *(int *)(param_1 + 0x221d0);
        *(int *)(param_1 + 0x221d0) = iVar4 + 1;
        if (iVar4 == 0) {
          *(undefined4 **)(param_1 + 0x221c8) = puVar3;
          FUN_004262f0(0x13);
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar3;
          FUN_004262f0(0x13);
        }
        goto LAB_006d785e;
      case 0x10:
        iVar5 = 0x13;
        do {
          FUN_004265c0(local_38c);
          iVar4 = FUN_006d68a0(local_38c);
          if (iVar4 != -1) {
            FUN_0049a100(iVar4);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 0xb;
        break;
      case 0x11:
        iVar5 = 0x13;
        do {
          FUN_004265c0(local_40c);
          iVar4 = FUN_006d68a0(local_40c);
          if (iVar4 != -1) {
            FUN_0049a100(iVar4);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 0xc;
        break;
      case 0x12:
        iVar5 = 0x13;
        do {
          FUN_004265c0(local_50c);
          iVar4 = FUN_006d68a0(local_50c);
          if (iVar4 != -1) {
            FUN_0049a100(iVar4);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 0xd;
        break;
      case 0x15:
        iVar5 = 0x13;
        do {
          FUN_00426380(&local_5a8);
          if (local_5a8 != 0) {
            FUN_0049a100(local_5a8);
          }
          iVar5 = iVar5 + -1;
          local_5a8 = 0;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 0xe;
LAB_006d746d:
        if (local_5c8 == (char *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)FUN_006d7990(pcVar2,iVar5,0);
        }
        *(undefined4 **)(param_1 + 0x221cc) = puVar3;
        iVar4 = *(int *)(param_1 + 0x221d0);
        local_4 = 0xffffffff;
        *(int *)(param_1 + 0x221d0) = iVar4 + 1;
        if (iVar4 == 0) goto LAB_006d7517;
        *(undefined4 **)(iVar5 + 8) = puVar3;
        goto LAB_006d785e;
      case 0x25:
        iVar5 = 0x13;
        do {
          FUN_004265c0(local_10c);
          iVar4 = FUN_004af6b0(local_10c);
          if (iVar4 != 0) {
            FUN_0049a100(iVar4);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = *(int *)(param_1 + 0x221cc);
        local_5c8 = operator_new(0xe);
        local_4 = 0xf;
        break;
      case 0x27:
      case 0x2e:
        local_5c4 = 0;
        FUN_00426380(&local_5c4);
        *(int *)(pcVar2 + 0x18) = local_5c4;
        FUN_004265c0(local_58c);
        local_5cc = &PTR_s__NAME_0086cf58;
        do {
          uVar6 = 0xffffffff;
          pcVar10 = local_58c;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          local_5c8 = operator_new(~uVar6 + 5);
          uVar6 = 0xffffffff;
          pcVar10 = local_58c;
          do {
            pcVar13 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar13 + -uVar6;
          pcVar13 = local_5c8;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar10 = *local_5cc;
          do {
            pcVar13 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar5 = -1;
          pcVar10 = local_5c8;
          do {
            pcVar12 = pcVar10;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar12 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar1 != '\0');
          pcVar10 = pcVar13 + -uVar6;
          pcVar13 = pcVar12 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          iVar5 = *(int *)(pcVar2 + 0x24);
          puVar3 = operator_new(0xe);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3[1] = iVar5;
            *puVar3 = local_5c8;
            puVar3[2] = 0;
            *(undefined1 *)(puVar3 + 3) = 0;
          }
          iVar4 = *(int *)(pcVar2 + 0x28);
          *(undefined4 **)(pcVar2 + 0x24) = puVar3;
          *(int *)(pcVar2 + 0x28) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 **)(pcVar2 + 0x20) = puVar3;
          }
          else {
            *(undefined4 **)(iVar5 + 8) = puVar3;
          }
          local_5cc = local_5cc + 1;
        } while ((int)local_5cc < 0x86cf60);
        iVar5 = *(int *)(param_1 + 0x221cc);
        puVar3 = operator_new(0xe);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = pcVar2;
          puVar3[1] = iVar5;
          puVar3[2] = 0;
          *(undefined1 *)(puVar3 + 3) = 0;
        }
        iVar4 = *(int *)(param_1 + 0x221d0);
        *(undefined4 **)(param_1 + 0x221cc) = puVar3;
        *(int *)(param_1 + 0x221d0) = iVar4 + 1;
        if (iVar4 == 0) {
          *(undefined4 **)(param_1 + 0x221c8) = puVar3;
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar3;
        }
        goto LAB_006d7859;
      case 0x29:
      case 0x2c:
        FUN_006d6930(uVar11,pcVar2);
        FUN_006d7940(pcVar2);
        goto LAB_006d785e;
      case 0x2f:
        if (*(int *)(pcVar2 + 0x2e) == -1) {
          uVar11 = FUN_005841b0();
          *(undefined4 *)(pcVar2 + 0x2e) = uVar11;
        }
        else if (*(int *)(pcVar2 + 0x2e) < 0) {
          iVar5 = FUN_005841b0();
          *(int *)(pcVar2 + 0x2e) = *(int *)(pcVar2 + 0x2e) + iVar5;
        }
        goto switchD_006d6c59_caseD_a;
      case 0x30:
        local_5c4 = 0;
        local_5cc = (undefined **)0x0;
        FUN_00426380(&local_5c4);
        FUN_00426380(&local_5cc);
        if (local_5c4 == -1) {
          local_5c4 = FUN_005841a0();
        }
        else if (local_5c4 < 0) {
          iVar5 = FUN_005841a0();
          local_5c4 = local_5c4 + iVar5;
        }
        if (local_5cc == (undefined **)0xffffffff) {
          local_5cc = (undefined **)FUN_005841b0();
        }
        else if ((int)local_5cc < 0) {
          iVar5 = FUN_005841b0();
          local_5cc = (undefined **)((int)local_5cc + iVar5);
        }
        *(int *)(pcVar2 + 0x32) = local_5c4;
        *(undefined ***)(pcVar2 + 0x36) = local_5cc;
        FUN_00426380(&local_5c4);
        FUN_00426380(&local_5cc);
        if (local_5c4 == -1) {
          local_5c4 = FUN_005841a0();
        }
        else if (local_5c4 < 0) {
          iVar5 = FUN_005841a0();
          local_5c4 = local_5c4 + iVar5;
        }
        if (local_5cc == (undefined **)0xffffffff) {
          ppuVar8 = (undefined **)FUN_005841b0();
          *(int *)(pcVar2 + 0x3a) = local_5c4;
          local_5cc = ppuVar8;
        }
        else {
          if ((int)local_5cc < 0) {
            iVar5 = FUN_005841b0();
            local_5cc = (undefined **)((int)local_5cc + iVar5);
          }
          *(int *)(pcVar2 + 0x3a) = local_5c4;
          ppuVar8 = local_5cc;
        }
        goto LAB_006d7846;
      case 0x32:
        FUN_004265c0(local_58c);
        local_5cc = &PTR_s__NAME_0086cf58;
        do {
          uVar6 = 0xffffffff;
          pcVar10 = local_58c;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          local_5b4 = operator_new(~uVar6 + 5);
          uVar6 = 0xffffffff;
          pcVar10 = local_58c;
          do {
            pcVar13 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar13 + -uVar6;
          pcVar13 = local_5b4;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar10 = *local_5cc;
          do {
            pcVar13 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar5 = -1;
          pcVar10 = local_5b4;
          do {
            pcVar12 = pcVar10;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar12 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar1 != '\0');
          pcVar10 = pcVar13 + -uVar6;
          pcVar13 = pcVar12 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar13 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_00427b00(local_5b4);
          local_5cc = local_5cc + 1;
        } while ((int)local_5cc < 0x86cf60);
        FUN_006d7940(pcVar2);
        goto LAB_006d7859;
      case 0x34:
        FUN_00426380(&local_5c0);
        FUN_00426380(&local_5bc);
        if (local_5c0 == -1) {
          local_5c0 = FUN_005841a0();
        }
        else if (local_5c0 < 0) {
          iVar5 = FUN_005841a0();
          local_5c0 = local_5c0 + iVar5;
        }
        if (local_5bc == (undefined **)0xffffffff) {
          local_5bc = (undefined **)FUN_005841b0();
        }
        else if ((int)local_5bc < 0) {
          iVar5 = FUN_005841b0();
          local_5bc = (undefined **)((int)local_5bc + iVar5);
        }
        *(int *)(pcVar2 + 0x32) = local_5c0;
        *(undefined ***)(pcVar2 + 0x36) = local_5bc;
        FUN_00426380(&local_5c0);
        FUN_00426380(&local_5bc);
        if (local_5c0 == -1) {
          local_5c0 = FUN_005841a0();
        }
        else if (local_5c0 < 0) {
          iVar5 = FUN_005841a0();
          local_5c0 = local_5c0 + iVar5;
        }
        if (local_5bc == (undefined **)0xffffffff) {
          local_5bc = (undefined **)FUN_005841b0();
        }
        else if ((int)local_5bc < 0) {
          iVar5 = FUN_005841b0();
          local_5bc = (undefined **)((int)local_5bc + iVar5);
        }
        *(int *)(pcVar2 + 0x3a) = local_5c0;
        ppuVar8 = local_5bc;
LAB_006d7846:
        *(undefined ***)(pcVar2 + 0x3e) = ppuVar8;
switchD_006d6c59_caseD_a:
        FUN_006d7940(pcVar2);
LAB_006d7859:
        FUN_00426330(1);
        goto LAB_006d785e;
      }
      if (local_5c8 == (char *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_006d7990(pcVar2,iVar5,0);
      }
      local_4 = 0xffffffff;
LAB_006d74f6:
      *(undefined4 **)(param_1 + 0x221cc) = puVar3;
      iVar4 = *(int *)(param_1 + 0x221d0);
      *(int *)(param_1 + 0x221d0) = iVar4 + 1;
      if (iVar4 == 0) {
LAB_006d7517:
        *(undefined4 **)(param_1 + 0x221c8) = puVar3;
      }
      else {
        *(undefined4 **)(iVar5 + 8) = puVar3;
      }
LAB_006d785e:
      bVar14 = local_5a0 != 0;
      uVar11 = local_5b8;
      local_5a0 = local_5a0 + -1;
    } while (bVar14);
    uVar6 = 0xffffffff;
  }
  ExceptionList = local_c;
  return uVar6 & 0xffffff00;
}


