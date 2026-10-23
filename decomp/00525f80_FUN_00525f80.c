// FUN_00525f80 @ 525f80 size=766

undefined4 * __fastcall FUN_00525f80(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int local_2bc [37];
  int local_228 [37];
  int local_194 [37];
  char local_100 [256];
  
  if (DAT_00dc191a == '\0') {
    return (undefined4 *)0x0;
  }
  DAT_00add13c._0_1_ = 0;
  piVar10 = *(int **)(param_1 + 0x26);
  piVar11 = local_2bc;
  for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_228;
  for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_194;
  for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  while (piVar10 != (int *)0x0) {
    piVar2 = (int *)piVar10[2];
    iVar7 = 0;
    piVar11 = (int *)(*piVar10 + 0x232);
    do {
      if (0 < *piVar11) {
        iVar4 = FUN_00506330(iVar7);
        local_2bc[iVar7] = local_2bc[iVar7] + iVar4;
        iVar4 = FUN_005063e0(iVar7);
        local_228[iVar7] = local_228[iVar7] + iVar4;
        iVar4 = FUN_00506370(iVar7);
        local_194[iVar7] = local_194[iVar7] + iVar4;
      }
      iVar7 = iVar7 + 1;
      piVar11 = piVar11 + 1;
      piVar10 = piVar2;
    } while (iVar7 < 0x25);
  }
  bVar3 = true;
  iVar7 = *(int *)(*DAT_00d12b40 + 0x416);
  if (iVar7 == 0) {
    iVar7 = 0;
    piVar10 = local_2bc;
    do {
      iVar4 = *piVar10;
      if (0 < iVar4) {
        if (bVar3) {
          uVar5 = FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_0_00849d90);
          FUN_007a630a(&DAT_00add13c,uVar5);
          bVar3 = false;
        }
        uVar5 = FUN_00506030(iVar7,iVar4);
        uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_0_00849d74);
        FUN_007a630a(local_100,uVar6,uVar5);
        uVar8 = 0xffffffff;
        pcVar12 = local_100;
        do {
          pcVar14 = pcVar12;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar4 = -1;
        pcVar12 = (char *)&DAT_00add13c;
        do {
          pcVar13 = pcVar12;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar13 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar1 != '\0');
        pcVar12 = pcVar14 + -uVar8;
        pcVar14 = pcVar13 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar14 = pcVar14 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar7 < 0x25);
  }
  else {
    if (iVar7 == 1) {
      iVar7 = 0;
      do {
        iVar4 = local_2bc[iVar7];
        if (0 < iVar4) {
          if (bVar3) {
            uVar5 = FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_1_00849dcc);
            FUN_007a630a(&DAT_00add13c,uVar5);
            bVar3 = false;
          }
          uVar5 = FUN_00506030(iVar7,iVar4,local_228[iVar7]);
          uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_1_00849db0);
          FUN_007a630a(local_100,uVar6,uVar5);
          uVar8 = 0xffffffff;
          pcVar12 = local_100;
          do {
            pcVar14 = pcVar12;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar4 = -1;
          pcVar12 = (char *)&DAT_00add13c;
          do {
            pcVar13 = pcVar12;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar13;
          } while (cVar1 != '\0');
          pcVar12 = pcVar14 + -uVar8;
          pcVar14 = pcVar13 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        iVar7 = iVar7 + 1;
        if (0x24 < iVar7) {
          return &DAT_00add13c;
        }
      } while( true );
    }
    if (iVar7 == 2) {
      iVar7 = 0;
      do {
        iVar4 = local_2bc[iVar7];
        if (0 < iVar4) {
          if (bVar3) {
            uVar5 = FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_2_00849e08);
            FUN_007a630a(&DAT_00add13c,uVar5);
            bVar3 = false;
          }
          uVar5 = FUN_00506030(iVar7,iVar4,local_228[iVar7],local_194[iVar7]);
          uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_2_00849dec);
          FUN_007a630a(local_100,uVar6,uVar5);
          uVar8 = 0xffffffff;
          pcVar12 = local_100;
          do {
            pcVar14 = pcVar12;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar14;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar4 = -1;
          pcVar12 = (char *)&DAT_00add13c;
          do {
            pcVar13 = pcVar12;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar13 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar13;
          } while (cVar1 != '\0');
          pcVar12 = pcVar14 + -uVar8;
          pcVar14 = pcVar13 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        iVar7 = iVar7 + 1;
        if (0x24 < iVar7) {
          return &DAT_00add13c;
        }
      } while( true );
    }
  }
  return &DAT_00add13c;
}


