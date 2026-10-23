// FUN_0058f150 @ 58f150 size=910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058f150(char *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int iStack_110;
  char acStack_108 [260];
  
  iVar5 = FUN_00428ee0();
  if ((iVar5 != 0) && (iVar5 != 8)) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-1 < *(int *)(iVar5 + 0x13c)) {
      bVar2 = true;
      cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0x4be8 + *(int *)(iVar5 + 0x138) * 0x12) + 0x24))
                        ();
      if ((cVar4 == '\0') ||
         (bVar1 = true, *(char *)(DAT_00d0ca90 + 0x4ad0 + *(int *)(iVar5 + 0x138)) == '\0')) {
        bVar1 = false;
      }
    }
    if (1 < *(int *)(iVar5 + 0x134)) {
      if (bVar1) {
        FUN_007a630a(param_1 + 4,s___000__1f____00858114,
                     (double)(*(float *)(iVar5 + 0xfc) * _DAT_007e4088));
      }
      else {
        pcVar11 = param_1;
        if (bVar2) {
          uVar6 = 0xffffffff;
          pcVar10 = &DAT_0085810c;
          do {
            pcVar12 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar10 + 1;
            cVar4 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar4 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar12 + -uVar6;
          for (uVar8 = uVar6 >> 2; pcVar11 = pcVar11 + 4, uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
        }
        else {
          uVar6 = 0xffffffff;
          pcVar10 = &DAT_0083bf04;
          do {
            pcVar12 = pcVar10;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar10 + 1;
            cVar4 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar4 != '\0');
          uVar6 = ~uVar6;
          pcVar10 = pcVar12 + -uVar6;
          for (uVar8 = uVar6 >> 2; pcVar11 = pcVar11 + 4, uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
          }
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      iStack_110 = 0;
      if (*(int *)(iVar5 + 0x134) < 1) {
        return;
      }
      puVar9 = (undefined4 *)(iVar5 + 0x80);
      do {
        if (((bVar1) || (bVar2)) || (0 < iStack_110)) {
          uVar6 = 0xffffffff;
          pcVar11 = &DAT_00858108;
          do {
            pcVar10 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar10 = pcVar11 + 1;
            cVar4 = *pcVar11;
            pcVar11 = pcVar10;
          } while (cVar4 != '\0');
          uVar6 = ~uVar6;
          iVar7 = -1;
          pcVar11 = param_1 + 4;
          do {
            pcVar12 = pcVar11;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar12 = pcVar11 + 1;
            cVar4 = *pcVar11;
            pcVar11 = pcVar12;
          } while (cVar4 != '\0');
          pcVar11 = pcVar10 + -uVar6;
          pcVar10 = pcVar12 + -1;
          for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
        }
        iVar7 = FUN_0044c5b0(*puVar9,puVar9[5]);
        if ((iVar7 == 0) || (*(int *)(iVar7 + 0xb8) < 0)) {
          pcVar11 = &DAT_008580fc;
        }
        else {
          cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0x55c0 + *(int *)(iVar7 + 0xb4) * 0x12) +
                              0x24))();
          if ((cVar4 == '\0') || (*(char *)(*(int *)(iVar7 + 0xb4) + 0x4b5c + DAT_00d0ca90) == '\0')
             ) {
            pcVar11 = &DAT_0083d364;
          }
          else {
            FUN_007a630a(acStack_108,s___0f____00858100);
            pcVar11 = acStack_108;
          }
        }
        uVar6 = 0xffffffff;
        do {
          pcVar10 = pcVar11;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar11 + 1;
          cVar4 = *pcVar11;
          pcVar11 = pcVar10;
        } while (cVar4 != '\0');
        uVar6 = ~uVar6;
        puVar9 = puVar9 + 1;
        iVar7 = -1;
        pcVar11 = param_1 + 4;
        do {
          pcVar12 = pcVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar12 = pcVar11 + 1;
          cVar4 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar4 != '\0');
        pcVar11 = pcVar10 + -uVar6;
        pcVar10 = pcVar12 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar10 = pcVar10 + 4;
        }
        iStack_110 = iStack_110 + 1;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar10 = pcVar10 + 1;
        }
        if (*(int *)(iVar5 + 0x134) <= iStack_110) {
          return;
        }
      } while( true );
    }
    if ((((*(int *)(iVar5 + 0x80) != 0) &&
         (iVar7 = FUN_0044c5b0(*(int *)(iVar5 + 0x80),*(undefined4 *)(iVar5 + 0x94)), iVar7 != 0))
        && (cVar4 = (**(code **)(*(int *)(DAT_00d0ca90 + 0x55c0 + *(int *)(iVar7 + 0xb4) * 0x12) +
                                0x24))(), cVar4 != '\0')) &&
       (*(char *)(*(int *)(iVar7 + 0xb4) + 0x4b5c + DAT_00d0ca90) != '\0')) {
      bVar3 = true;
    }
    if (bVar1) {
      if (bVar3) {
        FUN_007a630a(param_1 + 4,s___000__2f______2f____008580e4,
                     (double)(*(float *)(iVar5 + 0xfc) * _DAT_007e4088),
                     (double)(*(float *)(iVar5 + 0xa8) * _DAT_007e4088));
        return;
      }
      FUN_007a630a(param_1 + 4,s___000__2f____008580c4,
                   (double)(*(float *)(iVar5 + 0xfc) * _DAT_007e4088));
      return;
    }
    if (bVar3) {
      FUN_007a630a(param_1 + 4,s___000____2f____008580d4,
                   (double)(*(float *)(iVar5 + 0xa8) * _DAT_007e4088));
      return;
    }
  }
  uVar6 = 0xffffffff;
  pcVar11 = &DAT_008580bc;
  do {
    pcVar10 = pcVar11;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar11 + 1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar10;
  } while (cVar4 != '\0');
  uVar6 = ~uVar6;
  pcVar11 = pcVar10 + -uVar6;
  for (uVar8 = uVar6 >> 2; param_1 = param_1 + 4, uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *param_1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


