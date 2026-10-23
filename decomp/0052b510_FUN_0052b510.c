// FUN_0052b510 @ 52b510 size=878

undefined4 * __fastcall FUN_0052b510(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  int local_2bc [37];
  int local_228 [37];
  int local_194 [37];
  char local_100 [256];
  
  if (DAT_00dc191a == '\0') {
    return (undefined4 *)0x0;
  }
  DAT_00af8150._0_1_ = 0;
  piVar14 = local_228;
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  piVar14 = local_2bc;
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  piVar14 = local_194;
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  piVar14 = *(int **)(param_1 + 4);
  while (piVar14 != (int *)0x0) {
    iVar9 = *piVar14;
    piVar14 = (int *)piVar14[2];
    piVar3 = *(int **)(iVar9 + 0x26);
    while (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      iVar9 = 0;
      piVar13 = (int *)(*piVar3 + 0x232);
      do {
        if (0 < *piVar13) {
          iVar5 = FUN_00506330(iVar9);
          local_228[iVar9] = local_228[iVar9] + iVar5;
          iVar5 = FUN_005063e0(iVar9);
          local_2bc[iVar9] = local_2bc[iVar9] + iVar5;
          iVar5 = FUN_00506370(iVar9);
          local_194[iVar9] = local_194[iVar9] + iVar5;
        }
        iVar9 = iVar9 + 1;
        piVar13 = piVar13 + 1;
        piVar3 = piVar2;
      } while (iVar9 < 0x25);
    }
  }
  bVar4 = true;
  iVar9 = *(int *)(*DAT_00d12b40 + 0x416);
  if (iVar9 == 0) {
    iVar9 = 0;
    do {
      if (0 < local_2bc[iVar9]) {
        if (bVar4) {
          pcVar6 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_0_00849d90);
          uVar10 = 0xffffffff;
          do {
            pcVar16 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar16 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          bVar4 = false;
          iVar5 = -1;
          pcVar6 = (char *)&DAT_00af8150;
          do {
            pcVar15 = pcVar6;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar15 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar15;
          } while (cVar1 != '\0');
          pcVar6 = pcVar16 + -uVar10;
          pcVar16 = pcVar15 + -1;
          for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar16 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar16 = pcVar16 + 1;
          }
        }
        uVar7 = FUN_00506030(iVar9,local_228[iVar9]);
        uVar8 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_0_00849d74);
        FUN_007a630a(local_100,uVar8,uVar7);
        uVar10 = 0xffffffff;
        pcVar6 = local_100;
        do {
          pcVar16 = pcVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar5 = -1;
        pcVar6 = (char *)&DAT_00af8150;
        do {
          pcVar15 = pcVar6;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar15 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar15;
        } while (cVar1 != '\0');
        pcVar6 = pcVar16 + -uVar10;
        pcVar16 = pcVar15 + -1;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar16 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar16 = pcVar16 + 1;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x25);
  }
  else {
    if (iVar9 == 1) {
      iVar9 = 0;
      do {
        iVar5 = local_2bc[iVar9];
        if (0 < iVar5) {
          if (bVar4) {
            pcVar6 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_1_00849dcc);
            uVar10 = 0xffffffff;
            do {
              pcVar16 = pcVar6;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            bVar4 = false;
            iVar11 = -1;
            pcVar6 = (char *)&DAT_00af8150;
            do {
              pcVar15 = pcVar6;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar15 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar15;
            } while (cVar1 != '\0');
            pcVar6 = pcVar16 + -uVar10;
            pcVar16 = pcVar15 + -1;
            for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
          }
          uVar7 = FUN_00506030(iVar9,local_228[iVar9],iVar5);
          uVar8 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_1_00849db0);
          FUN_007a630a(local_100,uVar8,uVar7);
          uVar10 = 0xffffffff;
          pcVar6 = local_100;
          do {
            pcVar16 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar16 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar5 = -1;
          pcVar6 = (char *)&DAT_00af8150;
          do {
            pcVar15 = pcVar6;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar15 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar15;
          } while (cVar1 != '\0');
          pcVar6 = pcVar16 + -uVar10;
          pcVar16 = pcVar15 + -1;
          for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar16 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar16 = pcVar16 + 1;
          }
        }
        iVar9 = iVar9 + 1;
        if (0x24 < iVar9) {
          return &DAT_00af8150;
        }
      } while( true );
    }
    if (iVar9 == 2) {
      iVar9 = 0;
      do {
        iVar5 = local_2bc[iVar9];
        if (0 < iVar5) {
          if (bVar4) {
            pcVar6 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_2_00849e08);
            uVar10 = 0xffffffff;
            do {
              pcVar16 = pcVar6;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            bVar4 = false;
            iVar11 = -1;
            pcVar6 = (char *)&DAT_00af8150;
            do {
              pcVar15 = pcVar6;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar15 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar15;
            } while (cVar1 != '\0');
            pcVar6 = pcVar16 + -uVar10;
            pcVar16 = pcVar15 + -1;
            for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
          }
          uVar7 = FUN_00506030(iVar9,local_228[iVar9],iVar5,local_194[iVar9]);
          uVar8 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_2_00849dec);
          FUN_007a630a(local_100,uVar8,uVar7);
          uVar10 = 0xffffffff;
          pcVar6 = local_100;
          do {
            pcVar16 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar16 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar5 = -1;
          pcVar6 = (char *)&DAT_00af8150;
          do {
            pcVar15 = pcVar6;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar15 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar15;
          } while (cVar1 != '\0');
          pcVar6 = pcVar16 + -uVar10;
          pcVar16 = pcVar15 + -1;
          for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar16 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar16 = pcVar16 + 1;
          }
        }
        iVar9 = iVar9 + 1;
        if (0x24 < iVar9) {
          return &DAT_00af8150;
        }
      } while( true );
    }
  }
  return &DAT_00af8150;
}


