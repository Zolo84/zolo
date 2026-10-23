// FUN_00645f00 @ 645f00 size=1719

undefined4 * __thiscall
FUN_00645f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 **ppuVar13;
  undefined4 **ppuVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 *puVar17;
  int iStack_41c;
  undefined4 *local_414 [257];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2659;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_414[0] = param_1;
  FUN_006446b0(0x13,param_2,0xf0,8);
  *(undefined2 *)(param_1 + 0x2e) = (undefined2)param_3;
  *(uint *)((int)param_1 + 0xba) = CONCAT22(param_4,param_3._2_2_);
  *(undefined4 *)((int)param_1 + 0xbe) = param_5;
  *param_1 = &PTR_FUN_007f02d0;
  param_1[2] = &PTR_LAB_007f02cc;
  local_4 = 0;
  (**(code **)(*DAT_00bd0e18 + 0x20))(0x17);
  *(undefined4 *)((int)param_1 + 0xb2) = 0x13;
  *(undefined4 *)(*(int *)((int)param_1 + 0x9a) + 0x88) = 0xffffffff;
  iVar3 = FUN_00428ee0(&param_2);
  if ((iVar3 != 0) && (iVar3 != 8)) {
    pcVar4 = (char *)FUN_0042b6c9(s_ANSWERPEACE1_008662bc);
    uVar9 = 0xffffffff;
    do {
      pcVar16 = pcVar4;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar16 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar16;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar4 = pcVar16 + -uVar9;
    ppuVar13 = local_414;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *ppuVar13 = *(undefined4 **)pcVar4;
      pcVar4 = pcVar4 + 4;
      ppuVar13 = ppuVar13 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(char *)ppuVar13 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      ppuVar13 = (undefined4 **)((int)ppuVar13 + 1);
    }
    FUN_006ec610(local_414);
    uVar5 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)((int)param_1 + 0xbe)] + 0xe) + 0xc))();
    FUN_007a630a(&DAT_00d0918c,local_414,uVar5);
    FUN_004361a0(&DAT_00d0918c);
    uVar5 = FUN_0042b6c9(s_ANSWERPEACE2_008662ac);
    FUN_004361a0(uVar5);
    cVar1 = FUN_005884b0();
    if (cVar1 == '\0') {
      if (*(char *)(iVar3 + 0x138bb) == '\x01') {
        pcVar4 = s_ANSWERPEACEDEM_0086629c;
      }
      else {
        pcVar4 = s_ANSWERPEACEOFF_0086628c;
      }
      uVar5 = FUN_0042b6c9(pcVar4);
      FUN_004361a0(uVar5);
      DAT_00d0918c._0_1_ = 0;
      iVar11 = *(int *)(iVar3 + 0x24);
      iStack_41c = 0;
      if (0 < iVar11) {
        piVar12 = (int *)(iVar3 + 0x9c6c);
        do {
          uVar5 = (**(code **)(*(int *)(DAT_00ab27b4 + piVar12[-10000] * 0x4b2) + 0xc))();
          uVar6 = (**(code **)(*(int *)((&DAT_0089cad8)[*piVar12] + 0xe) + 0xc))();
          uVar7 = FUN_0042b6c9(s_PEACETERM_PROV2_0086627c);
          FUN_007a630a(&DAT_00d06d8c,uVar7,uVar5,uVar6);
          uVar9 = 0xffffffff;
          pcVar4 = &DAT_00d06d8c;
          do {
            pcVar16 = pcVar4;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar16 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar16;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          iVar11 = -1;
          pcVar4 = (char *)&DAT_00d0918c;
          do {
            pcVar15 = pcVar4;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar15 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar15;
          } while (cVar1 != '\0');
          pcVar4 = pcVar16 + -uVar9;
          pcVar16 = pcVar15 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar16 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar16 = pcVar16 + 1;
          }
          if (iStack_41c < *(int *)(iVar3 + 0x24) + -1) {
            pcVar4 = (char *)FUN_0042b6c9(s_INVAND_0083bf40);
            uVar9 = 0xffffffff;
            do {
              pcVar16 = pcVar4;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar16 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar16;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            iVar11 = -1;
            pcVar4 = (char *)&DAT_00d0918c;
            do {
              pcVar15 = pcVar4;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar15 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar15;
            } while (cVar1 != '\0');
            pcVar4 = pcVar16 + -uVar9;
            pcVar16 = pcVar15 + -1;
            for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar16 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar16 = pcVar16 + 1;
            }
          }
          iStack_41c = iStack_41c + 1;
          piVar12 = piVar12 + 1;
        } while (iStack_41c < *(int *)(iVar3 + 0x24));
        iVar11 = *(int *)(iVar3 + 0x24);
      }
      if (iVar11 != 0) {
        uVar9 = 0xffffffff;
        pcVar4 = &DAT_0083cf20;
        do {
          pcVar16 = pcVar4;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar16;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar11 = -1;
        pcVar4 = (char *)&DAT_00d0918c;
        do {
          pcVar15 = pcVar4;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        pcVar4 = pcVar16 + -uVar9;
        pcVar16 = pcVar15 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      if (*(char *)(iVar3 + 0x138c9) != '\0') {
        pcVar4 = (char *)FUN_0042b6c9(s_PEACE_ACCESS_0086626c);
        uVar9 = 0xffffffff;
        do {
          pcVar16 = pcVar4;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar16;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar11 = -1;
        pcVar4 = (char *)&DAT_00d0918c;
        do {
          pcVar15 = pcVar4;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        pcVar4 = pcVar16 + -uVar9;
        pcVar16 = pcVar15 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      if (*(char *)(iVar3 + 0x138c8) != '\0') {
        pcVar4 = (char *)FUN_0042b6c9(s_PEACE_PUPPET_0086625c);
        uVar9 = 0xffffffff;
        do {
          pcVar16 = pcVar4;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar16;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar11 = -1;
        pcVar4 = (char *)&DAT_00d0918c;
        do {
          pcVar15 = pcVar4;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        pcVar4 = pcVar16 + -uVar9;
        pcVar16 = pcVar15 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      if (*(char *)(iVar3 + 0x138ca) != '\0') {
        pcVar4 = (char *)FUN_0042b6c9(s_PEACE_DISARM_0086624c);
        uVar9 = 0xffffffff;
        do {
          pcVar16 = pcVar4;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar16;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar11 = -1;
        pcVar4 = (char *)&DAT_00d0918c;
        do {
          pcVar15 = pcVar4;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        pcVar4 = pcVar16 + -uVar9;
        pcVar16 = pcVar15 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar16 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      uVar9 = 0xffffffff;
      pcVar4 = &DAT_00866248;
      do {
        pcVar16 = pcVar4;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar16 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar16;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar11 = -1;
      pcVar4 = (char *)&DAT_00d0918c;
      do {
        pcVar15 = pcVar4;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      pcVar4 = pcVar16 + -uVar9;
      pcVar16 = pcVar15 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar16 = pcVar16 + 1;
      }
      if (*(char *)(iVar3 + 0x138ac) == '\0') {
        uVar5 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)((int)param_1 + 0xbe)] + 0xe) + 0xc))
                          ();
        pcVar4 = s_POLEADER_00866230;
      }
      else {
        uVar5 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)((int)param_1 + 0xbe)] + 0xe) + 0xc))
                          ();
        pcVar4 = s_PONATION_0086623c;
      }
      uVar6 = FUN_0042b6c9(pcVar4);
      FUN_007a630a(local_414,uVar6,uVar5);
      uVar9 = 0xffffffff;
      ppuVar13 = local_414;
      do {
        ppuVar14 = ppuVar13;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        ppuVar14 = (undefined4 **)((int)ppuVar13 + 1);
        cVar1 = *(char *)ppuVar13;
        ppuVar13 = ppuVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar11 = -1;
      pcVar4 = (char *)&DAT_00d0918c;
      do {
        pcVar16 = pcVar4;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar16 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar16;
      } while (cVar1 != '\0');
      pcVar4 = (char *)((int)ppuVar14 - uVar9);
      pcVar16 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar16 = pcVar16 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar4 = &DAT_0084b258;
      do {
        pcVar16 = pcVar4;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar16 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar16;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar11 = -1;
      pcVar4 = (char *)&DAT_00d0918c;
      do {
        pcVar15 = pcVar4;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      pcVar4 = pcVar16 + -uVar9;
      pcVar16 = pcVar15 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar16 = pcVar16 + 1;
      }
      piVar12 = (int *)(*(int *)((int)param_1 + 0x8e) + 0xe);
      if (*(char *)(iVar3 + 0x138ad) == '\0') {
        uVar5 = (**(code **)(*piVar12 + 0xc))();
        uVar6 = FUN_0042b6c9(s_POLEADER_00866230);
      }
      else {
        uVar5 = (**(code **)(*piVar12 + 0xc))();
        uVar6 = FUN_0042b6c9(s_PONATION_0086623c);
      }
      FUN_007a630a(local_414,uVar6,uVar5);
      uVar9 = 0xffffffff;
      ppuVar13 = local_414;
      do {
        ppuVar14 = ppuVar13;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        ppuVar14 = (undefined4 **)((int)ppuVar13 + 1);
        cVar1 = *(char *)ppuVar13;
        ppuVar13 = ppuVar14;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar3 = -1;
      pcVar4 = (char *)&DAT_00d0918c;
      do {
        pcVar16 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar16 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar16;
      } while (cVar1 != '\0');
      pcVar4 = (char *)((int)ppuVar14 - uVar9);
      pcVar16 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar16 = pcVar16 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar4 = &DAT_0086622c;
      do {
        pcVar16 = pcVar4;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar16 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar16;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar3 = -1;
      pcVar4 = (char *)&DAT_00d0918c;
      do {
        pcVar15 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      pcVar4 = pcVar16 + -uVar9;
      pcVar16 = pcVar15 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar16 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar16 = pcVar16 + 1;
      }
      if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x1f])(1);
      }
      pvVar8 = operator_new(0x72);
      puStack_8._0_1_ = 1;
      if (pvVar8 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00434930(0x120,400,0,0);
      }
      param_1[0x1f] = iVar3;
      *(undefined1 *)(iVar3 + 0x5c) = 1;
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      *(undefined4 *)(param_1[0x1f] + 0x56) = uVar5;
      uVar2 = FUN_00584270(0xff,0xff,0xff);
      puVar17 = &DAT_00d0918c;
      *(undefined2 *)(param_1[0x1f] + 0x5a) = uVar2;
    }
    else {
      uVar5 = FUN_0042b6c9(s_ANSWERPEACEOFF_0086628c);
      FUN_004361a0(uVar5);
      puVar17 = (undefined4 *)FUN_0042b6c9(s_ANSWERPEACEWHI_0086621c);
    }
    FUN_004361a0(puVar17);
    iVar3 = *(int *)((int)param_1 + 0xbe);
    if ((&DAT_0089cad8)[iVar3] != 0) {
      uVar5 = FUN_0042b6c9(s_POPDIPLO_00866140);
      FUN_004361a0(uVar5);
      uVar5 = (**(code **)(*(int *)((&DAT_0089cad8)[iVar3] + 0xe) + 0xc))();
      FUN_004361a0(uVar5);
    }
    (**(code **)(**(int **)((int)param_1 + 0x96) + 0x38))(7);
    FUN_00644950();
    uVar5 = CONCAT22(param_3._2_2_,(undefined2)param_3);
    FUN_0043e780(uVar5);
    iVar3 = **(int **)((int)param_1 + 0xae);
    uVar5 = FUN_0044b1c0(uVar5);
    (**(code **)(iVar3 + 0x2c))(uVar5);
    (**(code **)(**(int **)((int)param_1 + 0xae) + 0x34))(0x19);
    iVar3 = *(int *)((int)param_1 + 0xae);
    *(undefined4 *)(iVar3 + 0x22) = 0;
    *(undefined4 *)(iVar3 + 0x26) = 10;
    *(undefined1 *)(iVar3 + 0x67) = 0;
    uVar5 = FUN_00413d60(s_flag_palette_bmp_0083c738);
    FUN_00415f20(uVar5);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


