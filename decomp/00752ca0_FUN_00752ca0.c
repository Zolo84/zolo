// FUN_00752ca0 @ 752ca0 size=557

undefined4 __fastcall FUN_00752ca0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  BOOL BVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  bool bVar16;
  undefined1 auStack_9c [4];
  byte *pbStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  byte abStack_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfdfb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  if (*(int *)(param_1 + 0x88) == 0) {
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
  }
  else {
    if (*(int *)(param_1 + 0x164) != 0) {
      FUN_00750ed0(auStack_9c);
      uStack_4 = 0;
      FUN_00750450();
      iVar2 = *(int *)(param_1 + 0x88);
      piVar3 = *(int **)(iVar2 + 0x1ca);
      piVar12 = (int *)*piVar3;
      puVar11 = DAT_00d4be04;
      if (piVar12 != piVar3) {
        do {
          pcVar14 = (char *)piVar12[6];
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)&DAT_007f0c98;
          }
          uVar9 = 0xffffffff;
          do {
            pcVar15 = pcVar14;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar15 = pcVar14 + 1;
            cVar4 = *pcVar14;
            pcVar14 = pcVar15;
          } while (cVar4 != '\0');
          uVar9 = ~uVar9;
          pbVar13 = (byte *)(pcVar15 + -uVar9);
          pbVar5 = abStack_8c;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pbVar5 = *(undefined4 *)pbVar13;
            pbVar13 = pbVar13 + 4;
            pbVar5 = pbVar5 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pbVar5 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            pbVar5 = pbVar5 + 1;
          }
          pbVar13 = pbStack_98;
          if (pbStack_98 == (byte *)0x0) {
            pbVar13 = (byte *)&DAT_007f0c98;
          }
          pbVar5 = abStack_8c;
          do {
            bVar1 = *pbVar5;
            bVar16 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_00752dab:
              iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_00752db0;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar16 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_00752dab;
            pbVar5 = pbVar5 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00752db0:
          if ((iVar6 == 0) && (cVar4 = FUN_0074b360(), puVar11 = DAT_00d4be04, cVar4 != '\0')) {
            if (pbStack_98 != (byte *)0x0) {
              bVar1 = pbStack_98[-1];
              if ((bVar1 != 0) && (bVar1 != 0xff)) {
                pbStack_98[-1] = bVar1 - 1;
                ExceptionList = pvStack_c;
                return 1;
              }
              FUN_00796cd8(pbStack_98 + -1);
            }
            ExceptionList = pvStack_c;
            return 1;
          }
          puVar7 = (undefined4 *)piVar12[2];
          if (puVar7 == puVar11) {
            puVar7 = (undefined4 *)piVar12[1];
            if (piVar12 == (undefined4 *)puVar7[2]) {
              do {
                piVar12 = puVar7;
                puVar7 = (undefined4 *)piVar12[1];
              } while (piVar12 == (undefined4 *)puVar7[2]);
            }
            if ((undefined4 *)piVar12[2] != puVar7) {
              piVar12 = puVar7;
            }
          }
          else {
            piVar12 = puVar7;
            for (puVar7 = (undefined4 *)*puVar7; puVar7 != puVar11; puVar7 = (undefined4 *)*puVar7)
            {
              piVar12 = puVar7;
            }
          }
        } while (piVar12 != *(undefined4 **)(iVar2 + 0x1ca));
      }
      BVar8 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6));
      if (BVar8 == 0) {
        FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                     s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
      }
      uStack_4 = 0xffffffff;
      if (pbStack_98 != (byte *)0x0) {
        bVar1 = pbStack_98[-1];
        if ((bVar1 == 0) || (bVar1 == 0xff)) {
          FUN_00796cd8(pbStack_98 + -1);
        }
        else {
          pbStack_98[-1] = bVar1 - 1;
        }
      }
      pbStack_98 = (byte *)0x0;
      uStack_94 = 0;
      uStack_90 = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x8c) + 4))();
  }
  ExceptionList = pvStack_c;
  return 0;
}


