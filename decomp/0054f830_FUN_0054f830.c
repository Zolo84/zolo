// FUN_0054f830 @ 54f830 size=13356

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_0054f830(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *pvVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  byte *pbVar16;
  int unaff_EDI;
  int **ppiVar17;
  bool bVar18;
  int *local_5c;
  int *local_58;
  int *local_54 [5];
  float afStack_40 [5];
  float afStack_2c [4];
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c4f72;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_58 = operator_new(0x1e);
  local_4 = 0;
  local_54[0] = local_58;
  if (local_58 == (int *)0x0) {
    local_58 = (int *)0x0;
  }
  else {
    FUN_00444030(2);
    *local_58 = (int)&PTR_FUN_007e492c;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00444250();
    *local_58 = (int)&PTR_FUN_007e3a28;
    local_58[3] = (int)&PTR_LAB_007e39f8;
  }
  local_4 = 0xffffffff;
  piVar5 = operator_new(0x14);
  local_4 = 2;
  local_54[0] = piVar5;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    iVar6 = FUN_00427f80();
    piVar5[1] = 0;
    piVar5[2] = 0;
    *piVar5 = (int)&PTR_LAB_007e38f8;
    local_4._0_1_ = 3;
    local_54[1] = operator_new(0x14);
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((local_54[1] == (undefined4 *)0x0) || (iVar7 = FUN_0053e740(0x523), iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
    }
    piVar5[3] = iVar7;
    if (iVar6 == 0) {
      *piVar5 = (int)&PTR_FUN_007e3878;
      piVar5[4] = 0;
    }
    else {
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      piVar5[4] = iVar6;
      *piVar5 = (int)&PTR_FUN_007e3878;
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*local_58 + 0x84))();
  if (DAT_0087768c != '\0') {
    piVar5 = param_1;
    if (*(int *)((int)param_1 + 0x11e) != 0x8c) {
      pbVar8 = *(byte **)((int)param_1 + -0xe);
      pbVar16 = &DAT_0088ebf8;
      do {
        bVar1 = *pbVar8;
        bVar18 = bVar1 < *pbVar16;
        if (bVar1 != *pbVar16) {
LAB_0054f99a:
          iVar6 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0054f99f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar18 = bVar1 < pbVar16[1];
        if (bVar1 != pbVar16[1]) goto LAB_0054f99a;
        pbVar8 = pbVar8 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0054f99f:
      piVar5 = unaff_EBX;
      if (iVar6 != 0) {
        piVar9 = operator_new(0x14);
        puStack_8 = (undefined1 *)0x5;
        local_54[0] = piVar9;
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          local_54[1] = operator_new(0x10);
          puStack_8._0_1_ = 6;
          if (local_54[1] == (void *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_0053ee00(*(undefined4 *)((int)unaff_EBX + -0xe));
          }
          piVar9[1] = 0;
          piVar9[2] = 0;
          *piVar9 = (int)&PTR_LAB_007e38f8;
          puStack_8._0_1_ = 7;
          local_54[1] = operator_new(0x14);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
          if ((local_54[1] == (undefined4 *)0x0) || (iVar7 = FUN_0053e740(0xe9), iVar7 == 0)) {
            iVar7 = 0;
          }
          else {
            *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
          }
          piVar9[3] = iVar7;
          if (iVar6 == 0) {
            *piVar9 = (int)&PTR_FUN_007e3878;
            piVar9[4] = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            piVar9[4] = iVar6;
            *piVar9 = (int)&PTR_FUN_007e3878;
          }
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*param_1 + 0x84))(piVar9);
      }
    }
    if (0 < (int)*(char *)((int)piVar5 + 0x4f) +
            ((int)(char)piVar5[0x14] + *(short *)((int)piVar5 + 0x52) * 0xc) * 0x1e) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x9;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar6 = FUN_0054f410();
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 10;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0xfd), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    iVar6 = FUN_004fd560();
    if (iVar6 != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0xc;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar6 = FUN_00427f80();
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0xd;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xe);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x6d), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    iVar6 = FUN_004fd5a0();
    if (iVar6 != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0xf;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar6 = FUN_00427f80();
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x10;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x11);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x32), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    iVar6 = FUN_004fd580();
    if (iVar6 != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x12;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        piVar5 = operator_new(0x10);
        puStack_8._0_1_ = 0x13;
        local_54[0] = piVar5;
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          iVar6 = *(int *)((int)unaff_EBX + 0x42);
          FUN_004252e0(4);
          piVar5[3] = iVar6;
          *piVar5 = (int)&PTR_FUN_007e3978;
        }
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x14;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x15);
        if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x33), iVar6 == 0)) {
          iVar6 = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar10[3] = iVar6;
        if (piVar5 == (int *)0x0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          piVar5[2] = piVar5[2] + 1;
          puVar10[4] = piVar5;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    if (*(int *)((int)unaff_EBX + 0x46) != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x16;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        local_54[0] = operator_new(0x10);
        puStack_8._0_1_ = 0x17;
        if (local_54[0] == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          uVar11 = FUN_004af700(*(undefined4 *)((int)unaff_EBX + 0x46));
          iVar6 = FUN_0053ee00(uVar11);
        }
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x18;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x19);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0xec), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    cVar4 = FUN_0042ddd0(unaff_EBX + 0x15);
    if (cVar4 == '\0') {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x1a;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar6 = FUN_0054f410();
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x1b;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1c);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x25d), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    if ((unaff_EBX[0x2e] != DAT_0088f28e) || (*(short *)((int)unaff_EBX + 0xb6) != DAT_0088f28c)) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x1d;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar6 = FUN_00427f80();
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x1e;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1f);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x365), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    pbVar8 = *(byte **)((int)unaff_EBX + 0xb2);
    if (pbVar8 != (byte *)0x0) {
      pbVar16 = &DAT_0088ebf8;
      do {
        bVar1 = *pbVar8;
        bVar18 = bVar1 < *pbVar16;
        if (bVar1 != *pbVar16) {
LAB_00550047:
          iVar6 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0055004c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar18 = bVar1 < pbVar16[1];
        if (bVar1 != pbVar16[1]) goto LAB_00550047;
        pbVar8 = pbVar8 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0055004c:
      if (iVar6 != 0) {
        puVar10 = operator_new(0x14);
        puStack_8 = (undefined1 *)0x20;
        local_54[1] = puVar10;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          local_54[0] = operator_new(0x10);
          puStack_8._0_1_ = 0x21;
          if (local_54[0] == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_0053ee00(*(undefined4 *)((int)unaff_EBX + 0xb2));
          }
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_LAB_007e38f8;
          puStack_8._0_1_ = 0x22;
          local_54[0] = operator_new(0x14);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x23);
          if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x364), iVar7 == 0)) {
            iVar7 = 0;
          }
          else {
            *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
          }
          puVar10[3] = iVar7;
          if (iVar6 == 0) {
            *puVar10 = &PTR_FUN_007e3878;
            puVar10[4] = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            puVar10[4] = iVar6;
            *puVar10 = &PTR_FUN_007e3878;
          }
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*param_1 + 0x84))(puVar10);
      }
    }
    if ((*(int *)((int)unaff_EBX + 0x2b6) != DAT_0088f28e) ||
       ((short)unaff_EBX[0xad] != DAT_0088f28c)) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x24;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        iVar6 = FUN_00427f80();
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x25;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x26);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x682), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    iVar7 = 0;
    iVar6 = 0;
    do {
      if (*(char *)((int)unaff_EBX + iVar6 + 0x142) != '\0') {
        iVar7 = iVar7 + (1 << ((byte)iVar6 & 0x1f));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x27;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar5 = operator_new(0x10);
      puStack_8._0_1_ = 0x28;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        FUN_004252e0(4);
        piVar5[3] = iVar7;
        *piVar5 = (int)&PTR_FUN_007e3978;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x29;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x2a);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x3d6), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
    piVar5 = operator_new(0x1e);
    local_c = (void *)0x2b;
    local_54[0] = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar5 = (int)&PTR_FUN_007e492c;
      local_c = (void *)CONCAT31(local_c._1_3_,0x2c);
      FUN_00444250();
      *piVar5 = (int)&PTR_FUN_007e3a28;
      piVar5[3] = (int)&PTR_LAB_007e39f8;
    }
    local_c = (void *)0xffffffff;
    local_5c = (int *)0x9;
    do {
      piVar9 = operator_new(0x10);
      local_c = (void *)0x2d;
      local_54[0] = piVar9;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        iVar6 = *param_1;
        FUN_004252e0(4);
        piVar9[3] = iVar6;
        *piVar9 = (int)&PTR_FUN_007e3978;
      }
      local_c = (void *)0xffffffff;
      (**(code **)(*piVar5 + 0x84))(piVar9);
      param_1 = param_1 + 1;
      local_5c = (int *)((int)local_5c + -1);
    } while (local_5c != (int *)0x0);
    piVar9 = operator_new(0x14);
    local_54[0] = piVar9;
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9[1] = 0;
      piVar9[2] = 0;
      *piVar9 = (int)&PTR_LAB_007e38f8;
      local_c._0_1_ = 0x2f;
      local_c._1_3_ = 0;
      pvVar12 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,0x30);
      if ((pvVar12 == (void *)0x0) || (iVar6 = FUN_0053e740(0x256), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      piVar9[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *piVar9 = (int)&PTR_FUN_007e3878;
        piVar9[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        piVar9[4] = (int)piVar5;
        *piVar9 = (int)&PTR_FUN_007e3878;
      }
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*unaff_EBX + 0x84))(piVar9);
    if (0 < *(int *)(unaff_ESI + 0x12a)) {
      piVar5 = operator_new(0x1e);
      pvStack_10 = (void *)0x31;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        FUN_00444030(2);
        *piVar5 = (int)&PTR_FUN_007e492c;
        pvStack_10 = (void *)CONCAT31(pvStack_10._1_3_,0x32);
        FUN_00444250();
        *piVar5 = (int)&PTR_FUN_007e3a28;
        piVar5[3] = (int)&PTR_LAB_007e39f8;
      }
      pvStack_10 = (void *)0xffffffff;
      iVar6 = 5;
      pfVar13 = afStack_40;
      piVar9 = (int *)(unaff_ESI + 0x8a);
      do {
        fVar3 = (float)piVar9[5];
        iVar6 = iVar6 + -1;
        pfVar13[-5] = (float)piVar9[-5];
        *pfVar13 = (float)*piVar9;
        pfVar13[5] = fVar3;
        pfVar13 = pfVar13 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar6 != 0);
      ppiVar17 = local_54;
      iVar6 = 0xf;
      do {
        puVar10 = operator_new(0x10);
        pvStack_10 = (void *)0x33;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          piVar9 = *ppiVar17;
          FUN_004252e0(5);
          *puVar10 = &PTR_FUN_007e48ac;
          puVar10[3] = piVar9;
        }
        pvStack_10 = (void *)0xffffffff;
        (**(code **)(*piVar5 + 0x84))(puVar10);
        ppiVar17 = ppiVar17 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      puVar10 = operator_new(0x14);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        pvStack_10._0_1_ = 0x35;
        pvStack_10._1_3_ = 0;
        pvVar12 = operator_new(0x14);
        pvStack_10 = (void *)CONCAT31(pvStack_10._1_3_,0x36);
        if ((pvVar12 == (void *)0x0) || (iVar6 = FUN_0053e740(0x585), iVar6 == 0)) {
          iVar6 = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar10[3] = iVar6;
        if (piVar5 == (int *)0x0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          piVar5[2] = piVar5[2] + 1;
          puVar10[4] = piVar5;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      pvStack_10 = (void *)0xffffffff;
      (**(code **)(*unaff_EBP + 0x84))(puVar10);
    }
    piVar5 = operator_new(0x1e);
    pvStack_10 = (void *)0x37;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_00444030(2);
      *piVar5 = (int)&PTR_FUN_007e492c;
      pvStack_10 = (void *)CONCAT31(pvStack_10._1_3_,0x38);
      FUN_00444250();
      piVar5[3] = (int)&PTR_LAB_007e39f8;
      *piVar5 = (int)&PTR_FUN_007e3a28;
    }
    pvStack_10 = (void *)0xffffffff;
    iVar6 = 0x11;
    puVar10 = (undefined4 *)(unaff_ESI + 0xda);
    do {
      puVar14 = operator_new(0x10);
      pvStack_10 = (void *)0x39;
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *puVar10;
        FUN_004252e0(5);
        *puVar14 = &PTR_FUN_007e48ac;
        puVar14[3] = uVar11;
      }
      pvStack_10 = (void *)0xffffffff;
      (**(code **)(*piVar5 + 0x84))(puVar14);
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar10 = operator_new(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvStack_10._0_1_ = 0x3b;
      pvStack_10._1_3_ = 0;
      pvVar12 = operator_new(0x14);
      pvStack_10 = (void *)CONCAT31(pvStack_10._1_3_,0x3c);
      if ((pvVar12 == (void *)0x0) || (iVar6 = FUN_0053e740(0x243), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    pvStack_10 = (void *)0xffffffff;
    (**(code **)(*unaff_EBP + 0x84))(puVar10);
    ExceptionList = pvStack_1c;
    return unaff_EBP;
  }
  piVar9 = param_1;
  if (*(int *)((int)param_1 + 0x11e) != 0x8c) {
    pbVar8 = *(byte **)((int)param_1 + -0xe);
    pbVar16 = &DAT_0088ebf8;
    do {
      bVar1 = *pbVar8;
      bVar18 = bVar1 < *pbVar16;
      if (bVar1 != *pbVar16) {
LAB_00550759:
        iVar6 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_0055075e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar18 = bVar1 < pbVar16[1];
      if (bVar1 != pbVar16[1]) goto LAB_00550759;
      pbVar8 = pbVar8 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0055075e:
    if (iVar6 != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x3d;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        local_54[0] = operator_new(0x10);
        puStack_8._0_1_ = 0x3e;
        if (local_54[0] == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053ee00(*(undefined4 *)((int)unaff_EBX + -0xe));
        }
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x3f;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x40);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0xe9), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
    }
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x41;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      local_54[0] = operator_new(0x14);
      puStack_8._0_1_ = 0x42;
      if (local_54[0] == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar11 = FUN_004fe7e0(*(undefined4 *)((int)unaff_EBX + 0x11e));
        iVar6 = FUN_0053e740(uVar11);
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x43;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x44);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x141), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
    piVar9 = unaff_EBX;
    if (*(int *)((int)unaff_EBX + 0x126) != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x45;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        piVar9 = operator_new(0x10);
        puStack_8._0_1_ = 0x46;
        local_54[0] = piVar9;
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          iVar6 = *(int *)((int)unaff_EBX + 0x126);
          FUN_004252e0(4);
          piVar9[3] = iVar6;
          *piVar9 = (int)&PTR_FUN_007e3978;
        }
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x47;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x48);
        if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x341), iVar6 == 0)) {
          iVar6 = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        }
        puVar10[3] = iVar6;
        if (piVar9 == (int *)0x0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          piVar9[2] = piVar9[2] + 1;
          puVar10[4] = piVar9;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
      piVar9 = unaff_EBX;
    }
  }
  if (*(int *)((int)piVar9 + 0x76) == 0) goto LAB_00551446;
  if ((*(char *)((int)piVar9 + 0x14f) == '\0') || (*(int *)((int)piVar9 + 0x11e) == 0x8c)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x6d;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      local_54[0] = operator_new(0x14);
      puStack_8._0_1_ = 0x6e;
      if (local_54[0] == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar11 = FUN_004fed70(*(undefined4 *)((int)piVar9 + 0x76));
        iVar6 = FUN_0053e740(uVar11);
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x6f;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x70);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x20e), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
    if (*(int *)((int)piVar9 + 0x8a) < 1) goto LAB_00551446;
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x71;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) goto LAB_00551431;
    puVar14 = operator_new(0x10);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      uVar11 = *(undefined4 *)((int)piVar9 + 0x8a);
      puVar14[1] = 4;
      puVar14[2] = 0;
      puVar14[3] = uVar11;
      *puVar14 = &PTR_FUN_007e3978;
    }
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_LAB_007e38f8;
    puStack_8._0_1_ = 0x72;
    local_54[0] = operator_new(0x14);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x73);
    if (local_54[0] == (int *)0x0) {
LAB_00551401:
      iVar6 = 0;
    }
    else {
      uVar11 = 0x342;
LAB_005513f1:
      iVar6 = FUN_0053e740(uVar11);
      if (iVar6 == 0) goto LAB_00551401;
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
    }
    puVar10[3] = iVar6;
    if (puVar14 == (undefined4 *)0x0) {
      puVar10[4] = 0;
      *puVar10 = &PTR_FUN_007e3878;
    }
    else {
      puVar14[2] = puVar14[2] + 1;
      puVar10[4] = puVar14;
      *puVar10 = &PTR_FUN_007e3878;
    }
  }
  else {
    if (*(int *)((int)piVar9 + 0x76) != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x49;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        local_54[0] = operator_new(0x14);
        puStack_8._0_1_ = 0x4a;
        if (local_54[0] == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          uVar11 = FUN_004fed70(*(undefined4 *)((int)piVar9 + 0x76));
          iVar6 = FUN_0053e740(uVar11);
        }
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x4b;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x4c);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x517), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
      if (0 < *(int *)((int)piVar9 + 0x8a)) {
        puVar10 = operator_new(0x14);
        puStack_8 = (undefined1 *)0x4d;
        local_54[1] = puVar10;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          piVar15 = operator_new(0x10);
          puStack_8._0_1_ = 0x4e;
          local_54[0] = piVar15;
          if (piVar15 == (int *)0x0) {
            piVar15 = (int *)0x0;
          }
          else {
            iVar6 = *(int *)((int)unaff_EBX + 0x8a);
            FUN_004252e0(4);
            piVar15[3] = iVar6;
            *piVar15 = (int)&PTR_FUN_007e3978;
            piVar9 = unaff_EBX;
          }
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_LAB_007e38f8;
          puStack_8._0_1_ = 0x4f;
          local_54[0] = operator_new(0x14);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x50);
          if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x512), iVar6 == 0)) {
            iVar6 = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          }
          puVar10[3] = iVar6;
          if (piVar15 == (int *)0x0) {
            *puVar10 = &PTR_FUN_007e3878;
            puVar10[4] = 0;
          }
          else {
            piVar15[2] = piVar15[2] + 1;
            puVar10[4] = piVar15;
            *puVar10 = &PTR_FUN_007e3878;
          }
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*param_1 + 0x84))(puVar10);
      }
    }
    if (*(int *)((int)piVar9 + 0x7a) != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x51;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        local_54[0] = operator_new(0x14);
        puStack_8._0_1_ = 0x52;
        if (local_54[0] == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          uVar11 = FUN_004fed70(*(undefined4 *)((int)piVar9 + 0x7a));
          iVar6 = FUN_0053e740(uVar11);
        }
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x53;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x54);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x518), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
      if (0 < *(int *)((int)piVar9 + 0x8e)) {
        puVar10 = operator_new(0x14);
        puStack_8 = (undefined1 *)0x55;
        local_54[1] = puVar10;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          puVar14 = operator_new(0x10);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            uVar11 = *(undefined4 *)((int)piVar9 + 0x8e);
            puVar14[1] = 4;
            puVar14[2] = 0;
            puVar14[3] = uVar11;
            *puVar14 = &PTR_FUN_007e3978;
          }
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_LAB_007e38f8;
          puStack_8._0_1_ = 0x56;
          local_54[0] = operator_new(0x14);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x57);
          if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x513), iVar6 == 0)) {
            iVar6 = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          }
          puVar10[3] = iVar6;
          if (puVar14 == (undefined4 *)0x0) {
            *puVar10 = &PTR_FUN_007e3878;
            puVar10[4] = 0;
          }
          else {
            puVar14[2] = puVar14[2] + 1;
            puVar10[4] = puVar14;
            *puVar10 = &PTR_FUN_007e3878;
          }
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*param_1 + 0x84))(puVar10);
      }
    }
    if (*(int *)((int)piVar9 + 0x7e) != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x58;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        local_54[0] = operator_new(0x14);
        puStack_8._0_1_ = 0x59;
        if (local_54[0] == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          uVar11 = FUN_004fed70(*(undefined4 *)((int)piVar9 + 0x7e));
          iVar6 = FUN_0053e740(uVar11);
        }
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x5a;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x5b);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x519), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
      if (0 < *(int *)((int)piVar9 + 0x92)) {
        puVar10 = operator_new(0x14);
        puStack_8 = (undefined1 *)0x5c;
        local_54[1] = puVar10;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          puVar14 = operator_new(0x10);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            uVar11 = *(undefined4 *)((int)piVar9 + 0x92);
            puVar14[1] = 4;
            puVar14[2] = 0;
            puVar14[3] = uVar11;
            *puVar14 = &PTR_FUN_007e3978;
          }
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_LAB_007e38f8;
          puStack_8._0_1_ = 0x5d;
          local_54[0] = operator_new(0x14);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x5e);
          if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x514), iVar6 == 0)) {
            iVar6 = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          }
          puVar10[3] = iVar6;
          if (puVar14 == (undefined4 *)0x0) {
            *puVar10 = &PTR_FUN_007e3878;
            puVar10[4] = 0;
          }
          else {
            puVar14[2] = puVar14[2] + 1;
            puVar10[4] = puVar14;
            *puVar10 = &PTR_FUN_007e3878;
          }
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*param_1 + 0x84))(puVar10);
      }
    }
    if (*(int *)((int)piVar9 + 0x82) != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x5f;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        local_54[0] = operator_new(0x14);
        puStack_8._0_1_ = 0x60;
        if (local_54[0] == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          uVar11 = FUN_004fed70(*(undefined4 *)((int)piVar9 + 0x82));
          iVar6 = FUN_0053e740(uVar11);
        }
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_LAB_007e38f8;
        puStack_8._0_1_ = 0x61;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x62);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x51a), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*param_1 + 0x84))(puVar10);
      if (0 < *(int *)((int)piVar9 + 0x96)) {
        puVar10 = operator_new(0x14);
        puStack_8 = (undefined1 *)0x63;
        local_54[1] = puVar10;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          puVar14 = operator_new(0x10);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            uVar11 = *(undefined4 *)((int)piVar9 + 0x96);
            puVar14[1] = 4;
            puVar14[2] = 0;
            puVar14[3] = uVar11;
            *puVar14 = &PTR_FUN_007e3978;
          }
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = &PTR_LAB_007e38f8;
          puStack_8._0_1_ = 100;
          local_54[0] = operator_new(0x14);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x65);
          if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x515), iVar6 == 0)) {
            iVar6 = 0;
          }
          else {
            *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          }
          puVar10[3] = iVar6;
          if (puVar14 == (undefined4 *)0x0) {
            *puVar10 = &PTR_FUN_007e3878;
            puVar10[4] = 0;
          }
          else {
            puVar14[2] = puVar14[2] + 1;
            puVar10[4] = puVar14;
            *puVar10 = &PTR_FUN_007e3878;
          }
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(*param_1 + 0x84))(puVar10);
      }
    }
    if (*(int *)((int)piVar9 + 0x86) == 0) goto LAB_00551446;
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x66;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      local_54[0] = operator_new(0x14);
      puStack_8._0_1_ = 0x67;
      if (local_54[0] == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar11 = FUN_004fed70(*(undefined4 *)((int)piVar9 + 0x86));
        iVar6 = FUN_0053e740(uVar11);
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x68;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x69);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x51b), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
    if (*(int *)((int)piVar9 + 0x9a) < 1) goto LAB_00551446;
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x6a;
    local_54[1] = puVar10;
    if (puVar10 != (undefined4 *)0x0) {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)piVar9 + 0x9a);
        puVar14[1] = 4;
        puVar14[2] = 0;
        puVar14[3] = uVar11;
        *puVar14 = &PTR_FUN_007e3978;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x6b;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x6c);
      if (local_54[0] != (int *)0x0) {
        uVar11 = 0x516;
        goto LAB_005513f1;
      }
      goto LAB_00551401;
    }
LAB_00551431:
    puVar10 = (undefined4 *)0x0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*param_1 + 0x84))(puVar10);
LAB_00551446:
  if (0 < *(int *)((int)piVar9 + 0x136)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x74;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)piVar9 + 0x136);
        puVar14[1] = 4;
        puVar14[2] = 0;
        puVar14[3] = uVar11;
        *puVar14 = &PTR_FUN_007e3978;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x75;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x76);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0xf4), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar10[4] = puVar14;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (0 < *(int *)((int)piVar9 + 0x13e)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x77;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)piVar9 + 0x13e);
        puVar14[1] = 4;
        puVar14[2] = 0;
        puVar14[3] = uVar11;
        *puVar14 = &PTR_FUN_007e3978;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x78;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x79);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x3f3), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar10[4] = puVar14;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (0 < (int)*(char *)((int)piVar9 + 0x4f) +
          ((int)(char)piVar9[0x14] + *(short *)((int)piVar9 + 0x52) * 0xc) * 0x1e) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x7a;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_0054f410();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x7b;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x7c);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0xfd), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (*(int *)((int)piVar9 + 0xde) != 0x42c80000) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x7d;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)piVar9 + 0xde);
        puVar14[1] = 5;
        puVar14[2] = 0;
        puVar14[3] = uVar11;
        *puVar14 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x7e;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x7f);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0xbd), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar10[4] = puVar14;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  iVar6 = FUN_004fd560();
  if (iVar6 != 0) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x80;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_00427f80();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x81;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x82);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x6d), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  iVar6 = FUN_004fd5a0();
  if (iVar6 != 0) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x83;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_00427f80();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x84;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x85);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x32), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  iVar6 = FUN_004fd580();
  if (iVar6 != 0) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x86;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)unaff_EBX + 0x42);
        puVar14[1] = 4;
        puVar14[2] = 0;
        puVar14[3] = uVar11;
        *puVar14 = &PTR_FUN_007e3978;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x87;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x88);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x33), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar10[4] = puVar14;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (*(int *)((int)unaff_EBX + 0x46) != 0) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x89;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      local_54[0] = operator_new(0x10);
      puStack_8._0_1_ = 0x8a;
      if (local_54[0] == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar11 = FUN_004af700(*(undefined4 *)((int)unaff_EBX + 0x46));
        iVar6 = FUN_0053ee00(uVar11);
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x8b;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x8c);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0xec), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (*(char *)((int)unaff_EBX + 0x142) != '\0') {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x8d;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0xe);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar2 = *(undefined1 *)((int)unaff_EBX + 0x142);
        puVar14[1] = 6;
        puVar14[2] = 0;
        *(undefined1 *)(puVar14 + 3) = uVar2;
        *puVar14 = &PTR_FUN_007e76a0;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x8e;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x8f);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x3e0), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar10[4] = puVar14;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (*(char *)((int)unaff_EBX + 0x143) != '\0') {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x90;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0xe);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        puVar14[1] = 6;
        puVar14[2] = 0;
        *(undefined1 *)(puVar14 + 3) = 1;
        *puVar14 = &PTR_FUN_007e76a0;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x91;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x92);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x129), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar10[4] = puVar14;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  cVar4 = FUN_0042ddd0(unaff_EBX + 0x15);
  if (cVar4 == '\0') {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x93;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_0054f410();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x94;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x95);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x25d), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  local_5c = param_1;
  if (*(int *)((int)unaff_EBX + 0x11e) != 0x8c) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x96;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)unaff_EBX + 0xda);
        puVar14[1] = 5;
        puVar14[2] = 0;
        puVar14[3] = uVar11;
        *puVar14 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0x97;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x98);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0xbc), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar10[4] = puVar14;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
    piVar9 = operator_new(0x14);
    local_c = (void *)0x99;
    local_54[0] = piVar9;
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)unaff_EBP + 0xe2);
        puVar10[1] = 5;
        puVar10[2] = 0;
        puVar10[3] = uVar11;
        *puVar10 = &PTR_FUN_007e48ac;
      }
      piVar9[1] = 0;
      piVar9[2] = 0;
      *piVar9 = (int)&PTR_LAB_007e38f8;
      local_c._0_1_ = 0x9a;
      pvVar12 = operator_new(0x14);
      local_c = (void *)CONCAT31(local_c._1_3_,0x9b);
      if ((pvVar12 == (void *)0x0) || (iVar6 = FUN_0053e740(0xbe), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      piVar9[3] = iVar6;
      if (puVar10 == (undefined4 *)0x0) {
        *piVar9 = (int)&PTR_FUN_007e3878;
        piVar9[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        piVar9[4] = (int)puVar10;
        *piVar9 = (int)&PTR_FUN_007e3878;
      }
    }
    local_c = (void *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(piVar9);
    puVar10 = operator_new(0x14);
    pvStack_10 = (void *)0x9c;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x10);
      if (puVar14 == (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)(unaff_ESI + 0xea);
        puVar14[1] = 5;
        puVar14[2] = 0;
        puVar14[3] = uVar11;
        *puVar14 = &PTR_FUN_007e48ac;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      pvStack_10._0_1_ = 0x9d;
      pvVar12 = operator_new(0x14);
      pvStack_10 = (void *)CONCAT31(pvStack_10._1_3_,0x9e);
      if ((pvVar12 == (void *)0x0) || (iVar6 = FUN_0053e740(0x1dd), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (puVar14 == (undefined4 *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        puVar14[2] = puVar14[2] + 1;
        puVar10[4] = puVar14;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    pvStack_10 = (void *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
    local_5c = operator_new(0x14);
    pvStack_14 = (void *)0x9f;
    if (local_5c == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)(unaff_EDI + 0xee);
        puVar10[1] = 5;
        puVar10[2] = 0;
        puVar10[3] = uVar11;
        *puVar10 = &PTR_FUN_007e48ac;
      }
      local_5c[1] = 0;
      local_5c[2] = 0;
      *local_5c = (int)&PTR_LAB_007e38f8;
      pvStack_14._0_1_ = 0xa0;
      pvVar12 = operator_new(0x14);
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xa1);
      if ((pvVar12 == (void *)0x0) || (iVar6 = FUN_0053e740(0x87), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      local_5c[3] = iVar6;
      piVar9 = local_5c;
      if (puVar10 == (undefined4 *)0x0) {
        *local_5c = (int)&PTR_FUN_007e3878;
        local_5c[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        local_5c[4] = (int)puVar10;
        *local_5c = (int)&PTR_FUN_007e3878;
      }
    }
    pvStack_14 = (void *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(piVar9);
    unaff_EBX = operator_new(0x14);
    uStack_18 = 0xa2;
    if (unaff_EBX == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      puVar10 = operator_new(0x10);
      uStack_18._0_1_ = 0xa3;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar11 = *(undefined4 *)((int)piVar5 + 0xe6);
        FUN_004252e0(5);
        *puVar10 = &PTR_FUN_007e48ac;
        puVar10[3] = uVar11;
      }
      unaff_EBX[1] = 0;
      unaff_EBX[2] = 0;
      *unaff_EBX = (int)&PTR_LAB_007e38f8;
      uStack_18._0_1_ = 0xa4;
      pvVar12 = operator_new(0x14);
      uStack_18 = CONCAT31(uStack_18._1_3_,0xa5);
      if ((pvVar12 == (void *)0x0) || (iVar6 = FUN_0053e740(0xd1), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      unaff_EBX[3] = iVar6;
      piVar5 = unaff_EBX;
      if (puVar10 == (undefined4 *)0x0) {
        *unaff_EBX = (int)&PTR_FUN_007e3878;
        unaff_EBX[4] = 0;
      }
      else {
        puVar10[2] = puVar10[2] + 1;
        unaff_EBX[4] = (int)puVar10;
        *unaff_EBX = (int)&PTR_FUN_007e3878;
      }
    }
    uStack_18 = 0xffffffff;
    (**(code **)(*param_1 + 0x84))(piVar5);
  }
  if (_DAT_007e3380 < *(float *)((int)unaff_EBX + 0xf2)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xa6;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar5 = operator_new(0x10);
      puStack_8._0_1_ = 0xa7;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((int)unaff_EBX + 0xf2);
        FUN_004252e0(5);
        *piVar5 = (int)&PTR_FUN_007e48ac;
        piVar5[3] = iVar6;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xa8;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xa9);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x29c), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (_DAT_007e3380 < *(float *)((int)unaff_EBX + 0x9e)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xaa;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar5 = operator_new(0x10);
      puStack_8._0_1_ = 0xab;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((int)unaff_EBX + 0x9e);
        FUN_004252e0(5);
        *piVar5 = (int)&PTR_FUN_007e48ac;
        piVar5[3] = iVar6;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xac;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xad);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x29d), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (_DAT_007e3380 < *(float *)((int)unaff_EBX + 0xa2)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xae;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar5 = operator_new(0x10);
      puStack_8._0_1_ = 0xaf;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((int)unaff_EBX + 0xa2);
        FUN_004252e0(5);
        *piVar5 = (int)&PTR_FUN_007e48ac;
        piVar5[3] = iVar6;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xb0;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb1);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x51f), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (_DAT_007e3380 < *(float *)((int)unaff_EBX + 0xa6)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xb2;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar5 = operator_new(0x10);
      puStack_8._0_1_ = 0xb3;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((int)unaff_EBX + 0xa6);
        FUN_004252e0(5);
        *piVar5 = (int)&PTR_FUN_007e48ac;
        piVar5[3] = iVar6;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xb4;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb5);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x520), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (_DAT_007e3380 < *(float *)((int)unaff_EBX + 0xaa)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xb6;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar5 = operator_new(0x10);
      puStack_8._0_1_ = 0xb7;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((int)unaff_EBX + 0xaa);
        FUN_004252e0(5);
        *piVar5 = (int)&PTR_FUN_007e48ac;
        piVar5[3] = iVar6;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xb8;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb9);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x521), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (_DAT_007e3380 < *(float *)((int)unaff_EBX + 0xae)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xba;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar5 = operator_new(0x10);
      puStack_8._0_1_ = 0xbb;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((int)unaff_EBX + 0xae);
        FUN_004252e0(5);
        *piVar5 = (int)&PTR_FUN_007e48ac;
        piVar5[3] = iVar6;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xbc;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xbd);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x522), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (0 < *(int *)((int)unaff_EBX + 0x13a)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xbe;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      piVar5 = operator_new(0x10);
      puStack_8._0_1_ = 0xbf;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        iVar6 = *(int *)((int)unaff_EBX + 0x13a);
        FUN_004252e0(4);
        piVar5[3] = iVar6;
        *piVar5 = (int)&PTR_FUN_007e3978;
        param_1 = local_5c;
      }
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_LAB_007e38f8;
      puStack_8._0_1_ = 0xc0;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc1);
      if ((local_54[0] == (int *)0x0) || (iVar6 = FUN_0053e740(0x363), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
      }
      puVar10[3] = iVar6;
      if (piVar5 == (int *)0x0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        piVar5[2] = piVar5[2] + 1;
        puVar10[4] = piVar5;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if ((unaff_EBX[0x2e] != DAT_0088f28e) || (*(short *)((int)unaff_EBX + 0xb6) != DAT_0088f28c)) {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xc2;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_00427f80();
      FUN_004252e0(0);
      puStack_8._0_1_ = 0xc3;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xc4);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x365), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  pbVar8 = *(byte **)((int)unaff_EBX + 0xb2);
  if (pbVar8 != (byte *)0x0) {
    pbVar16 = &DAT_0088ebf8;
    do {
      bVar1 = *pbVar8;
      bVar18 = bVar1 < *pbVar16;
      if (bVar1 != *pbVar16) {
LAB_00552908:
        iVar6 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
        goto LAB_0055290d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar18 = bVar1 < pbVar16[1];
      if (bVar1 != pbVar16[1]) goto LAB_00552908;
      pbVar8 = pbVar8 + 2;
      pbVar16 = pbVar16 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0055290d:
    param_1 = local_5c;
    if (iVar6 != 0) {
      puVar10 = operator_new(0x14);
      puStack_8 = (undefined1 *)0xc5;
      local_54[1] = puVar10;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        local_54[0] = operator_new(0x10);
        puStack_8._0_1_ = 0xc6;
        if (local_54[0] == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0053ee00(*(undefined4 *)((int)unaff_EBX + 0xb2));
        }
        puStack_8._0_1_ = 0xc5;
        FUN_004252e0(0);
        puStack_8._0_1_ = 199;
        local_54[0] = operator_new(0x14);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,200);
        if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x364), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
        }
        puVar10[3] = iVar7;
        if (iVar6 == 0) {
          *puVar10 = &PTR_FUN_007e3878;
          puVar10[4] = 0;
        }
        else {
          *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
          puVar10[4] = iVar6;
          *puVar10 = &PTR_FUN_007e3878;
        }
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*local_5c + 0x84))(puVar10);
    }
  }
  cVar4 = FUN_004b2cf0(&DAT_0088f28c);
  if (cVar4 == '\0') {
    puVar10 = operator_new(0x14);
    puStack_8 = (undefined1 *)0xc9;
    local_54[1] = puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar6 = FUN_00427f80();
      FUN_004252e0(0);
      puStack_8._0_1_ = 0xca;
      local_54[0] = operator_new(0x14);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xcb);
      if ((local_54[0] == (int *)0x0) || (iVar7 = FUN_0053e740(0x682), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
      }
      puVar10[3] = iVar7;
      if (iVar6 == 0) {
        *puVar10 = &PTR_FUN_007e3878;
        puVar10[4] = 0;
      }
      else {
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
        puVar10[4] = iVar6;
        *puVar10 = &PTR_FUN_007e3878;
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x84))(puVar10);
  }
  if (*(char *)((int)unaff_EBX + 0x146) == '\0') {
    local_54[1] = operator_new(0x14);
    puStack_8 = (undefined1 *)0xcc;
    if (local_54[1] == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      piVar5 = operator_new(0xe);
      puStack_8._0_1_ = 0xcd;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        FUN_00444030(6);
        *(undefined1 *)(piVar5 + 3) = 0;
        *piVar5 = (int)&PTR_FUN_007e76a0;
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xcc);
      uVar11 = FUN_004441b0(0x4a7,piVar5);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*local_5c + 0x84))(uVar11);
    param_1 = local_5c;
  }
  if (*(char *)((int)unaff_EBX + 0x147) == '\0') {
    local_54[1] = operator_new(0x14);
    puStack_8 = (undefined1 *)0xce;
    if (local_54[1] == (undefined4 *)0x0) {
      uVar11 = 0;
    }
    else {
      piVar5 = operator_new(0xe);
      puStack_8._0_1_ = 0xcf;
      local_54[0] = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        FUN_00444030(6);
        *(undefined1 *)(piVar5 + 3) = 0;
        *piVar5 = (int)&PTR_FUN_007e76a0;
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xce);
      uVar11 = FUN_004441b0(0x4a8,piVar5);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*local_5c + 0x84))(uVar11);
    param_1 = local_5c;
  }
  if ((char)unaff_EBX[0x52] != '\x01') {
    ExceptionList = pvStack_10;
    return param_1;
  }
  local_54[1] = operator_new(0x14);
  puStack_8 = (undefined1 *)0xd0;
  if (local_54[1] == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    local_54[0] = operator_new(0xe);
    puStack_8._0_1_ = 0xd1;
    if (local_54[0] == (int *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_004f6330(1);
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd0);
    uVar11 = FUN_004441b0(0x4a6,uVar11);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*local_5c + 0x84))(uVar11);
  ExceptionList = pvStack_14;
  return local_5c;
}


