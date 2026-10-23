// FUN_00751ca0 @ 751ca0 size=1492

void __fastcall FUN_00751ca0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  BOOL BVar8;
  uint uVar9;
  int *piVar10;
  int unaff_EBP;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined1 *puVar15;
  int *piVar16;
  undefined1 auStack_48c [4];
  undefined4 *puStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  int *piStack_47c;
  undefined1 uStack_478;
  undefined4 *puStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  int iStack_468;
  int *piStack_464;
  undefined **ppuStack_460;
  undefined1 auStack_44c [16];
  int iStack_43c;
  int iStack_438;
  undefined1 auStack_434 [16];
  undefined1 auStack_424 [16];
  undefined1 auStack_414 [1024];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfd60;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x174) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x174))(1);
  }
  puStack_474 = operator_new(0x72);
  uStack_4 = 0;
  if (puStack_474 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar4 = FUN_00434930(0xcc,*(int *)(iVar4 + 0x10) * 0x11 + 1,0,0);
  }
  *(int *)(param_1 + 0x174) = iVar4;
  *(undefined2 *)(iVar4 + 0x5a) = 0xffff;
  uStack_4 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x174) + 0x34))
            ((*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1) + 0x314,
             (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 0x164);
  piStack_47c = (int *)(param_1 + 0x8c);
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  FUN_00750450();
  iVar4 = *(int *)(param_1 + 0x88);
  iVar11 = iVar4 + 0x1c6;
  iStack_468 = iVar11;
  FUN_00748df0(&piStack_464);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  piVar10 = piStack_464;
  if (piStack_464 != *(int **)(iVar4 + 0x1ca)) {
    do {
      auStack_48c[0] = (undefined1)((uint)unaff_EBP >> 0x18);
      FUN_00674910(0);
      pvStack_c = (void *)0x1;
      FUN_00674710(piVar10 + 5,0,DAT_007f33d8);
      if (*(int *)(param_1 + 0x164) != 0) {
        FUN_00750ed0(auStack_434);
        pvStack_c._0_1_ = 2;
        iVar4 = FUN_00676e10(auStack_48c);
        bVar14 = iVar4 == 0;
        unaff_EBP = (uint)bVar14 << 0x18;
        pvStack_c._0_1_ = 1;
        FUN_00674910(1);
        if (bVar14) {
          FUN_00674710(piVar10 + 5,0,DAT_007f33d8);
          FUN_00674710(piVar10 + 9,0,DAT_007f33d8);
          FUN_00674710(piVar10 + 0xd,0,DAT_007f33d8);
          FUN_00752280(piVar10 + 0x11);
          FUN_007524b0(piVar10 + 0x1c);
          *(int *)(param_1 + 0x13c) = piVar10[0x21];
          *(int *)(param_1 + 0x140) = piVar10[0x22];
          uVar3 = FUN_00584270(0xff,0xff,0xff);
          *(undefined2 *)(*(int *)(param_1 + 0x174) + 0x5a) = uVar3;
          uVar5 = FUN_0074b3a0();
          uVar6 = FUN_0042b6c9(s_EN_VERSION_00874b10);
          FUN_007a630a(auStack_414,&DAT_0083ca0c,uVar6,uVar5);
          uVar5 = FUN_00584270(0xff,0xff,0xff);
          FUN_004361c0(auStack_414,uVar5);
          FUN_00673b50(piVar10 + 0x12);
          pvStack_c._0_1_ = 3;
          FUN_00673b50(piVar10 + 0x16);
          iStack_43c = piVar10[0x1a];
          iStack_438 = piVar10[0x1b];
          ppuStack_460 = &PTR_FUN_007fa230;
          pvStack_c._0_1_ = 4;
          puVar15 = auStack_44c;
          uVar5 = FUN_0042b6c9(s_EN_GAME_INFO_HOSTED_BY_00874af8);
          uVar5 = FUN_0074a620(auStack_424,uVar5,puVar15);
          pvStack_c._0_1_ = 5;
          FUN_00674710(uVar5,0,DAT_007f33d8);
          pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
          FUN_00674910(1);
          puVar13 = &DAT_007f0c98;
          if (puStack_488 != (undefined4 *)0x0) {
            puVar13 = puStack_488;
          }
          uVar5 = FUN_00584270(0xff,0xff,0xff);
          FUN_004361c0(puVar13,uVar5);
          if (piVar10 == (int *)0xffffff90) {
            piVar16 = (int *)0x0;
          }
          else {
            piVar16 = piVar10 + 0x1d;
          }
          iVar4 = *(int *)piVar16[1];
          pcVar7 = (char *)FUN_0042b6c9(s_EN_GAME_INFO_PLAYERS_00874ae0);
          uVar9 = 0xffffffff;
          pcVar12 = pcVar7;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_00674d80(pcVar7,~uVar9 - 1);
          puVar13 = &DAT_007f0c98;
          if (puStack_488 != (undefined4 *)0x0) {
            puVar13 = puStack_488;
          }
          uVar5 = FUN_00584270(0xff,0xff,0xff);
          FUN_004361c0(puVar13,uVar5);
          if (iVar4 != piVar16[1]) {
            do {
              uStack_478 = bVar14;
              FUN_00674910(0);
              pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
              FUN_00674710(*(int *)(iVar4 + 0x10) + 0x14,0,DAT_007f33d8);
              puVar13 = puStack_474;
              if (puStack_474 == (undefined4 *)0x0) {
                puVar13 = &DAT_007f0c98;
              }
              uVar5 = FUN_00584270(0xff,0xff,0xff);
              FUN_004361c0(puVar13,uVar5);
              if (*(int *)(iVar4 + 8) == DAT_00d4bdfc) {
                iVar11 = *(int *)(iVar4 + 4);
                if (iVar4 == *(int *)(iVar11 + 8)) {
                  do {
                    iVar4 = iVar11;
                    iVar11 = *(int *)(iVar4 + 4);
                  } while (iVar4 == *(int *)(iVar11 + 8));
                }
                if (*(int *)(iVar4 + 8) != iVar11) goto LAB_0075212d;
              }
              else {
                iVar11 = FUN_0074a0c0(*(int *)(iVar4 + 8));
LAB_0075212d:
                iVar4 = iVar11;
              }
              pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
              if (puStack_474 != (undefined4 *)0x0) {
                cVar1 = *(char *)((int)puStack_474 + -1);
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_00796cd8((char *)((int)puStack_474 + -1));
                }
                else {
                  *(char *)((int)puStack_474 + -1) = cVar1 + -1;
                }
              }
              puStack_474 = (undefined4 *)0x0;
              uStack_470 = 0;
              uStack_46c = 0;
            } while (iVar4 != piVar16[1]);
          }
          pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
          ppuStack_460 = &PTR_FUN_007fa230;
          FUN_00674910(1);
          FUN_00674910(1);
          iVar11 = iStack_468;
        }
      }
      piVar16 = (int *)piVar10[2];
      if (piVar16 == DAT_00d4be04) {
        piVar16 = (int *)piVar10[1];
        if (piVar10 == (int *)piVar16[2]) {
          do {
            piVar10 = piVar16;
            piVar16 = (int *)piVar10[1];
          } while (piVar10 == (int *)piVar16[2]);
        }
        if ((int *)piVar10[2] != piVar16) {
          piVar10 = piVar16;
        }
      }
      else {
        for (piVar2 = (int *)*piVar16; piVar10 = piVar16, piVar2 != DAT_00d4be04;
            piVar2 = (int *)*piVar2) {
          piVar16 = piVar2;
        }
      }
      pvStack_c = (void *)0xffffffff;
      if (puStack_488 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_488 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_00796cd8((int)puStack_488 + -1);
        }
        else {
          *(char *)((int)puStack_488 + -1) = cVar1 + -1;
        }
      }
      puStack_488 = (undefined4 *)0x0;
      uStack_484 = 0;
      uStack_480 = 0;
    } while (piVar10 != *(int **)(iVar11 + 4));
  }
  BVar8 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6));
  if (BVar8 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  (**(code **)(*piStack_47c + 4))();
  ExceptionList = pvStack_14;
  return;
}


