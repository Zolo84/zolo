// FUN_00750b30 @ 750b30 size=914

void __fastcall FUN_00750b30(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  BOOL BVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined1 auStack_5a4 [4];
  byte *pbStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 auStack_594 [2];
  undefined1 auStack_58c [256];
  byte abStack_48c [128];
  undefined1 auStack_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfbc7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  if (*(int *)(param_1 + 0x88) == 0) {
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
  }
  else {
    if (*(int *)(param_1 + 0x164) != 0) {
      FUN_00750ed0(auStack_5a4);
      uStack_4 = 0;
      FUN_00750450();
      piVar3 = *(int **)(*(int *)(param_1 + 0x88) + 0x1ca);
      piVar13 = (int *)*piVar3;
      if (piVar13 != piVar3) {
LAB_00750bc5:
        pcVar16 = (char *)piVar13[6];
        if (pcVar16 == (char *)0x0) {
          pcVar16 = (char *)&DAT_007f0c98;
        }
        uVar10 = 0xffffffff;
        do {
          pcVar17 = pcVar16;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar17 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar17;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pbVar14 = (byte *)(pcVar17 + -uVar10);
        pbVar4 = abStack_48c;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pbVar4 = *(undefined4 *)pbVar14;
          pbVar14 = pbVar14 + 4;
          pbVar4 = pbVar4 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pbVar4 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          pbVar4 = pbVar4 + 1;
        }
        pbVar14 = (byte *)&DAT_007f0c98;
        if (pbStack_5a0 != (byte *)0x0) {
          pbVar14 = pbStack_5a0;
        }
        pbVar4 = abStack_48c;
        do {
          bVar2 = *pbVar4;
          bVar19 = bVar2 < *pbVar14;
          if (bVar2 != *pbVar14) {
LAB_00750c35:
            iVar5 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_00750c3a;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar19 = bVar2 < pbVar14[1];
          if (bVar2 != pbVar14[1]) goto LAB_00750c35;
          pbVar4 = pbVar4 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_00750c3a:
        if (iVar5 != 0) goto code_r0x00750c42;
        puVar12 = &DAT_007f0c98;
        if ((undefined4 *)piVar13[10] != (undefined4 *)0x0) {
          puVar12 = (undefined4 *)piVar13[10];
        }
        puVar15 = &DAT_00893640;
        puVar18 = auStack_594;
        for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar18 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar18 = puVar18 + 1;
        }
        puVar15 = auStack_594;
        puVar18 = auStack_594;
        for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar18 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar18 = puVar18 + 1;
        }
        FUN_007a630a(auStack_40c,s_N__s_P__s_008749f8,auStack_58c,&DAT_00893538);
        iVar5 = FUN_007a8730(puVar12,auStack_40c);
        if (iVar5 != 0) {
          uVar8 = FUN_0074b3a0();
          puVar12 = &DAT_00893640;
          puVar15 = auStack_594;
          for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar15 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar12 = auStack_594;
          puVar15 = auStack_594;
          for (iVar5 = 0x42; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar15 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar15 = puVar15 + 1;
          }
          iVar5 = FUN_007a8730(auStack_58c,uVar8);
          if (iVar5 == 0) {
            pvVar9 = operator_new(0x68);
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            if (pvVar9 == (void *)0x0) goto LAB_00750e51;
            puVar12 = &DAT_007f0c98;
            if (*(undefined4 **)(param_1 + 0x4a) != (undefined4 *)0x0) {
              puVar12 = *(undefined4 **)(param_1 + 0x4a);
            }
            pcVar16 = s_EN_WRONG_PASSWORD_00874a04;
          }
          else {
            pvVar9 = operator_new(0x68);
            uStack_4 = CONCAT31(uStack_4._1_3_,2);
            if (pvVar9 == (void *)0x0) goto LAB_00750e51;
            puVar12 = &DAT_007f0c98;
            if (*(undefined4 **)(param_1 + 0x4a) != (undefined4 *)0x0) {
              puVar12 = *(undefined4 **)(param_1 + 0x4a);
            }
            pcVar16 = s_EN_WRONG_VERSION_0086f96c;
          }
          uVar20 = 4;
          uVar8 = FUN_0042b6c9(pcVar16);
          FUN_0043dce0(puVar12,uVar8,uVar20);
LAB_00750e51:
          if (pbStack_5a0 == (byte *)0x0) {
            ExceptionList = pvStack_c;
            return;
          }
          bVar2 = pbStack_5a0[-1];
          if ((bVar2 != 0) && (bVar2 != 0xff)) {
            pbStack_5a0[-1] = bVar2 - 1;
            ExceptionList = pvStack_c;
            return;
          }
          FUN_00796cd8(pbStack_5a0 + -1);
          ExceptionList = pvStack_c;
          return;
        }
        BVar7 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6));
        if (BVar7 == 0) {
          FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                       s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
        }
        FUN_00747260(piVar13[0x22]);
      }
LAB_00750c88:
      BVar7 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6));
      if (BVar7 == 0) {
        FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
      }
      uStack_4 = 0xffffffff;
      if (pbStack_5a0 != (byte *)0x0) {
        bVar2 = pbStack_5a0[-1];
        if ((bVar2 == 0) || (bVar2 == 0xff)) {
          FUN_00796cd8(pbStack_5a0 + -1);
        }
        else {
          pbStack_5a0[-1] = bVar2 - 1;
        }
      }
      pbStack_5a0 = (byte *)0x0;
      uStack_59c = 0;
      uStack_598 = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
    FUN_006ff680(6,param_1);
  }
  ExceptionList = pvStack_c;
  return;
code_r0x00750c42:
  piVar6 = (int *)piVar13[2];
  if (piVar6 == DAT_00d4be04) {
    piVar6 = (int *)piVar13[1];
    if (piVar13 == (int *)piVar6[2]) {
      do {
        piVar13 = piVar6;
        piVar6 = (int *)piVar13[1];
      } while (piVar13 == (int *)piVar6[2]);
    }
    if ((int *)piVar13[2] != piVar6) {
      piVar13 = piVar6;
    }
  }
  else {
    piVar13 = piVar6;
    for (piVar6 = (int *)*piVar6; piVar6 != DAT_00d4be04; piVar6 = (int *)*piVar6) {
      piVar13 = piVar6;
    }
  }
  if (piVar13 == piVar3) goto LAB_00750c88;
  goto LAB_00750bc5;
}


