// FUN_005262b0 @ 5262b0 size=571

undefined4 * __thiscall FUN_005262b0(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char local_100 [256];
  
  DAT_00add13c._0_1_ = 0;
  bVar2 = true;
  if (param_2 == 0) {
    iVar9 = 0;
    piVar8 = (int *)(param_1 + 0x34);
    do {
      if (0 < *piVar8) {
        if (bVar2) {
          uVar3 = FUN_0042b6c9(s_LOSSES_INFLICTED_HEADER_0084b1e0);
          FUN_007a630a(&DAT_00add13c,uVar3);
          bVar2 = false;
        }
        uVar3 = FUN_00506030(iVar9,*piVar8);
        uVar4 = FUN_0042b6c9(s_LOSSES_INFLICTED_LINE_0084b1c8);
        FUN_007a630a(local_100,uVar4,uVar3);
        uVar5 = 0xffffffff;
        pcVar10 = local_100;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar10 = (char *)&DAT_00add13c;
        do {
          pcVar11 = pcVar10;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = pcVar11 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar9 < 0x25);
  }
  else {
    if (param_2 == 1) {
      iVar9 = 0;
      piVar8 = (int *)(param_1 + 0x34);
      do {
        if (0 < *piVar8) {
          if (bVar2) {
            uVar3 = FUN_0042b6c9(s_LOSSES_TAKEN_HEADER_0084b20c);
            FUN_007a630a(&DAT_00add13c,uVar3);
            bVar2 = false;
          }
          uVar3 = FUN_00506030(iVar9,*piVar8);
          uVar4 = FUN_0042b6c9(s_LOSSES_TAKEN_LINE_0084b1f8);
          FUN_007a630a(local_100,uVar4,uVar3);
          uVar5 = 0xffffffff;
          pcVar10 = local_100;
          do {
            pcVar12 = pcVar10;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar6 = -1;
          pcVar10 = (char *)&DAT_00add13c;
          do {
            pcVar11 = pcVar10;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar11 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar1 != '\0');
          pcVar10 = pcVar12 + -uVar5;
          pcVar12 = pcVar11 + -1;
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar12 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 1;
        if (0x24 < iVar9) {
          return &DAT_00add13c;
        }
      } while( true );
    }
    if (param_2 == 2) {
      iVar9 = 0;
      piVar8 = (int *)(param_1 + 0x34);
      do {
        if (0 < *piVar8) {
          if (bVar2) {
            uVar3 = FUN_0042b6c9(s_LOSSES_NEUTRAL_HEADER_0084b234);
            FUN_007a630a(&DAT_00add13c,uVar3);
            bVar2 = false;
          }
          uVar3 = FUN_00506030(iVar9,*piVar8);
          uVar4 = FUN_0042b6c9(s_LOSSES_NEUTRAL_LINE_0084b220);
          FUN_007a630a(local_100,uVar4,uVar3);
          uVar5 = 0xffffffff;
          pcVar10 = local_100;
          do {
            pcVar12 = pcVar10;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar6 = -1;
          pcVar10 = (char *)&DAT_00add13c;
          do {
            pcVar11 = pcVar10;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar11 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar11;
          } while (cVar1 != '\0');
          pcVar10 = pcVar12 + -uVar5;
          pcVar12 = pcVar11 + -1;
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar12 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 1;
        if (0x24 < iVar9) {
          return &DAT_00add13c;
        }
      } while( true );
    }
  }
  return &DAT_00add13c;
}


