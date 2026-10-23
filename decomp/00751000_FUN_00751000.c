// FUN_00751000 @ 751000 size=835

void __fastcall FUN_00751000(int param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined2 uVar5;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  BOOL BVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  byte *pbVar18;
  char *pcVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  byte abStack_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfbfc;
  pvStack_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x8c);
  ExceptionList = &pvStack_c;
  (*(code *)**(undefined4 **)(param_1 + 0x8c))();
  if (*(int *)(param_1 + 0x88) != 0) {
    (**(code **)(*piVar1 + 4))();
    if (*(undefined4 **)(param_1 + 0x168) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x168))(1);
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
    pvVar6 = operator_new(0x72);
    uStack_4 = 0;
    if (pvVar6 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      iVar7 = FUN_00434930(0xaa,*(int *)(iVar7 + 0x10) * 0x1b + 1,0,0);
    }
    *(int *)(param_1 + 0x168) = iVar7;
    *(undefined2 *)(iVar7 + 0x5a) = 0xffff;
    uStack_4 = 0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x168) + 0x34))
              ((*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1) + 0x224,
               (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 0xd2);
    (**(code **)*piVar1)();
    FUN_00750450();
    iVar7 = *(int *)(param_1 + 0x88);
    piVar17 = (int *)**(int **)(iVar7 + 0x202);
    if (piVar17 != *(int **)(iVar7 + 0x202)) {
      do {
        iVar4 = piVar17[4];
        pcVar8 = *(char **)(iVar4 + 0x18);
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)&DAT_007f0c98;
        }
        uVar15 = 0xffffffff;
        do {
          pcVar19 = pcVar8;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar19 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar19;
        } while (cVar2 != '\0');
        uVar15 = ~uVar15;
        pbVar9 = (byte *)(pcVar19 + -uVar15);
        pbVar18 = abStack_8c;
        for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined4 *)pbVar18 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar18 = pbVar18 + 4;
        }
        for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pbVar18 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar18 = pbVar18 + 1;
        }
        pbVar9 = (byte *)&DAT_007f0c98;
        if (*(byte **)(iVar7 + 0x232) != (byte *)0x0) {
          pbVar9 = *(byte **)(iVar7 + 0x232);
        }
        pbVar18 = abStack_8c;
        do {
          bVar3 = *pbVar9;
          bVar20 = bVar3 < *pbVar18;
          if (bVar3 != *pbVar18) {
LAB_0075119d:
            iVar7 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_007511a2;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar9[1];
          bVar20 = bVar3 < pbVar18[1];
          if (bVar3 != pbVar18[1]) goto LAB_0075119d;
          pbVar9 = pbVar9 + 2;
          pbVar18 = pbVar18 + 2;
        } while (bVar3 != 0);
        iVar7 = 0;
LAB_007511a2:
        pvVar6 = operator_new(0x23e);
        uStack_4 = 1;
        if (pvVar6 == (void *)0x0) {
          iVar11 = 0;
        }
        else {
          uVar24 = 1;
          uVar23 = 0;
          uVar22 = 0;
          pbVar9 = abStack_8c;
          uVar21 = 0xaa;
          uVar10 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
          iVar11 = FUN_00433f90(uVar10,pbVar9,uVar21,uVar22,uVar23,uVar24);
        }
        uStack_4 = 0xffffffff;
        if (iVar7 == 0) {
          uVar22 = 0;
          uVar21 = 0xbd;
          uVar10 = 0xff;
        }
        else if (*(int *)(iVar4 + 0x24) == 0) {
          uVar22 = 0xff;
          uVar21 = 0xff;
          uVar10 = 0xff;
        }
        else {
          uVar22 = 0x80;
          uVar21 = 0x80;
          uVar10 = 0x80;
        }
        uVar5 = FUN_00584270(uVar10,uVar21,uVar22);
        *(undefined2 *)(iVar11 + 0xc) = uVar5;
        iVar7 = *(int *)(param_1 + 0x168);
        iVar4 = *(int *)(iVar7 + 8);
        piVar12 = operator_new(0xe);
        if (piVar12 == (int *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          *piVar12 = iVar11;
          piVar12[1] = iVar4;
          piVar12[2] = 0;
          *(undefined1 *)(piVar12 + 3) = 0;
        }
        iVar11 = *(int *)(iVar7 + 0xc);
        *(int **)(iVar7 + 8) = piVar12;
        *(int *)(iVar7 + 0xc) = iVar11 + 1;
        if (iVar11 == 0) {
          *(int **)(iVar7 + 4) = piVar12;
        }
        else {
          *(int **)(iVar4 + 8) = piVar12;
        }
        puVar13 = (undefined4 *)piVar17[2];
        if (puVar13 == DAT_00d4bdfc) {
          puVar13 = (undefined4 *)piVar17[1];
          if (piVar17 == (undefined4 *)puVar13[2]) {
            do {
              piVar17 = puVar13;
              puVar13 = (undefined4 *)piVar17[1];
            } while (piVar17 == (undefined4 *)puVar13[2]);
          }
          if ((undefined4 *)piVar17[2] != puVar13) {
            piVar17 = puVar13;
          }
        }
        else {
          piVar17 = puVar13;
          for (puVar13 = (undefined4 *)*puVar13; puVar13 != DAT_00d4bdfc;
              puVar13 = (undefined4 *)*puVar13) {
            piVar17 = puVar13;
          }
        }
        iVar7 = *(int *)(param_1 + 0x88);
      } while (piVar17 != *(undefined4 **)(iVar7 + 0x202));
    }
    BVar14 = ReleaseMutex(*(HANDLE *)(*(int *)(param_1 + 0x88) + 0x1f6));
    if (BVar14 == 0) {
      FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
    }
  }
  (**(code **)(*piVar1 + 4))();
  ExceptionList = pvStack_c;
  return;
}


