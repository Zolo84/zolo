// FUN_00752ed0 @ 752ed0 size=918

/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_00752ed0(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  BOOL BVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined1 auStack_5ac [4];
  byte *pbStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  byte *pbStack_59c;
  undefined4 *puStack_598;
  undefined4 auStack_594 [2];
  undefined1 auStack_58c [256];
  byte abStack_48c [128];
  undefined1 auStack_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfe37;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  if ((*(int *)(param_1 + 0x88) != 0) && (*(int *)(param_1 + 0x164) != 0)) {
    FUN_00750ed0(auStack_5ac);
    uStack_4 = 0;
    FUN_00750450();
    iVar11 = *(int *)(param_1 + 0x88);
    puStack_598 = *(undefined4 **)(iVar11 + 0x1ca);
    puVar12 = (undefined4 *)*puStack_598;
    while (puVar12 != puStack_598) {
      pcVar14 = (char *)puVar12[6];
      if (pcVar14 == (char *)0x0) {
        pcVar14 = (char *)&DAT_007f0c98;
      }
      uVar9 = 0xffffffff;
      do {
        pcVar15 = pcVar14;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar15;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pbStack_59c = abStack_48c;
      pbVar13 = (byte *)(pcVar15 + -uVar9);
      pbVar3 = pbStack_59c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar3 = *(undefined4 *)pbVar13;
        pbVar13 = pbVar13 + 4;
        pbVar3 = pbVar3 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar3 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        pbVar3 = pbVar3 + 1;
      }
      pbVar13 = (byte *)&DAT_007f0c98;
      if (pbStack_5a8 != (byte *)0x0) {
        pbVar13 = pbStack_5a8;
      }
      pbVar3 = abStack_48c;
      do {
        bVar2 = *pbVar3;
        bVar17 = bVar2 < *pbVar13;
        if (bVar2 != *pbVar13) {
LAB_00752fe3:
          iVar4 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_00752fe8;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar17 = bVar2 < pbVar13[1];
        if (bVar2 != pbVar13[1]) goto LAB_00752fe3;
        pbVar3 = pbVar3 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00752fe8:
      if (iVar4 == 0) {
        puVar5 = &DAT_007f0c98;
        if ((undefined4 *)puVar12[10] != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)puVar12[10];
        }
        puVar12 = &DAT_00893640;
        puVar16 = auStack_594;
        for (iVar11 = 0x42; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar16 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar12 = auStack_594;
        puVar16 = auStack_594;
        for (iVar11 = 0x42; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar16 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        }
        FUN_007a630a(auStack_40c,s_N__s_P__s_008749f8,auStack_58c,&DAT_00893538);
        iVar11 = FUN_007a8730(puVar5,auStack_40c);
        if (iVar11 == 0) {
          BVar6 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6));
          if (BVar6 == 0) {
            FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                         s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
          }
          (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
          uStack_4 = 0xffffffff;
          FUN_00674910(1);
          ExceptionList = pvStack_c;
          return 1;
        }
        uVar7 = FUN_0074b3a0();
        puVar12 = &DAT_00893640;
        puVar5 = auStack_594;
        for (iVar11 = 0x42; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar12 = auStack_594;
        puVar5 = auStack_594;
        for (iVar11 = 0x42; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar11 = FUN_007a8730(auStack_58c,uVar7);
        if (iVar11 == 0) {
          pvVar8 = operator_new(0x68);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          if (pvVar8 == (void *)0x0) goto LAB_00753208;
          puVar12 = &DAT_007f0c98;
          if (*(undefined4 **)(param_1 + 0x4a) != (undefined4 *)0x0) {
            puVar12 = *(undefined4 **)(param_1 + 0x4a);
          }
          pcVar14 = s_EN_WRONG_PASSWORD_00874a04;
        }
        else {
          pvVar8 = operator_new(0x68);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          if (pvVar8 == (void *)0x0) goto LAB_00753208;
          puVar12 = &DAT_007f0c98;
          if (*(undefined4 **)(param_1 + 0x4a) != (undefined4 *)0x0) {
            puVar12 = *(undefined4 **)(param_1 + 0x4a);
          }
          pcVar14 = s_EN_WRONG_VERSION_0086f96c;
        }
        uVar18 = 4;
        uVar7 = FUN_0042b6c9(pcVar14);
        FUN_0043dce0(puVar12,uVar7,uVar18);
LAB_00753208:
        if (pbStack_5a8 == (byte *)0x0) {
          ExceptionList = pvStack_c;
          return 0;
        }
        bVar2 = pbStack_5a8[-1];
        if ((bVar2 != 0) && (bVar2 != 0xff)) {
          pbStack_5a8[-1] = bVar2 - 1;
          ExceptionList = pvStack_c;
          return 0;
        }
        FUN_00796cd8(pbStack_5a8 + -1);
        ExceptionList = pvStack_c;
        return 0;
      }
      puVar5 = (undefined4 *)puVar12[2];
      if (puVar5 == DAT_00d4be04) {
        puVar5 = (undefined4 *)puVar12[1];
        if (puVar12 == (undefined4 *)puVar5[2]) {
          do {
            puVar12 = puVar5;
            puVar5 = (undefined4 *)puVar12[1];
          } while (puVar12 == (undefined4 *)puVar5[2]);
        }
        if ((undefined4 *)puVar12[2] != puVar5) {
          puVar12 = puVar5;
        }
      }
      else {
        puVar12 = puVar5;
        for (puVar5 = (undefined4 *)*puVar5; puVar5 != DAT_00d4be04; puVar5 = (undefined4 *)*puVar5)
        {
          puVar12 = puVar5;
        }
      }
    }
    BVar6 = ReleaseMutex(*(HANDLE *)(iVar11 + 0x1f6));
    if (BVar6 == 0) {
      FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
    }
    uStack_4 = 0xffffffff;
    if (pbStack_5a8 != (byte *)0x0) {
      bVar2 = pbStack_5a8[-1];
      if ((bVar2 == 0) || (bVar2 == 0xff)) {
        FUN_00796cd8(pbStack_5a8 + -1);
      }
      else {
        pbStack_5a8[-1] = bVar2 - 1;
      }
    }
    pbStack_5a8 = (byte *)0x0;
    uStack_5a4 = 0;
    uStack_5a0 = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
  ExceptionList = pvStack_c;
  return 0;
}


