// FUN_006e4040 @ 6e4040 size=1454

void __fastcall FUN_006e4040(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int unaff_EBX;
  int unaff_EBP;
  char *pcVar19;
  char *pcVar20;
  undefined4 uVar21;
  char *local_854;
  char *local_850;
  undefined1 local_84c [64];
  char local_80c [2032];
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da02c;
  pvStack_c = ExceptionList;
  uVar11 = *(undefined4 *)(param_1 + 0x90);
  ExceptionList = &pvStack_c;
  FUN_007a630a(&DAT_00d36198,s__s_HEADER_0086d454,uVar11);
  pcVar5 = (char *)FUN_0042b6c9(&DAT_00d36198);
  FUN_007a630a(&DAT_00d36198,&DAT_0086d44c,uVar11);
  pcVar6 = (char *)FUN_0042b6c9(&DAT_00d36198);
  FUN_007a630a(&DAT_00d36198,&DAT_0086d444,uVar11);
  pcVar7 = (char *)FUN_0042b6c9(&DAT_00d36198);
  FUN_007a630a(&DAT_00d36198,&DAT_0086d43c,uVar11);
  pcVar8 = (char *)FUN_0042b6c9(&DAT_00d36198);
  FUN_007a630a(&DAT_00d36198,&DAT_0086d434,uVar11);
  local_850 = (char *)FUN_0042b6c9(&DAT_00d36198);
  FUN_007a630a(&DAT_00d36198,&DAT_0086d48c,uVar11);
  local_854 = (char *)FUN_0042b6c9(&DAT_00d36198);
  FUN_007a630a(&DAT_00d36198,&DAT_0086d544,uVar11);
  pcVar9 = (char *)FUN_0042b6c9(&DAT_00d36198);
  uVar16 = 0xffffffff;
  do {
    pcVar20 = pcVar5;
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar20 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar20;
  } while (cVar1 != '\0');
  uVar16 = ~uVar16;
  pcVar5 = pcVar20 + -uVar16;
  pcVar20 = local_80c;
  for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined4 *)pcVar20 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar20 = pcVar20 + 4;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pcVar20 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar20 = pcVar20 + 1;
  }
  uVar16 = 0xffffffff;
  pcVar5 = &DAT_0086d430;
  do {
    pcVar20 = pcVar5;
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar20 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar20;
  } while (cVar1 != '\0');
  uVar16 = ~uVar16;
  iVar18 = -1;
  pcVar5 = local_80c;
  do {
    pcVar19 = pcVar5;
    if (iVar18 == 0) break;
    iVar18 = iVar18 + -1;
    pcVar19 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar19;
  } while (cVar1 != '\0');
  pcVar5 = pcVar20 + -uVar16;
  pcVar20 = pcVar19 + -1;
  for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined4 *)pcVar20 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar20 = pcVar20 + 4;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pcVar20 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar20 = pcVar20 + 1;
  }
  uVar16 = 0xffffffff;
  do {
    pcVar5 = pcVar6;
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar16 = ~uVar16;
  iVar18 = -1;
  pcVar6 = local_80c;
  do {
    pcVar20 = pcVar6;
    if (iVar18 == 0) break;
    iVar18 = iVar18 + -1;
    pcVar20 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar20;
  } while (cVar1 != '\0');
  pcVar6 = pcVar5 + -uVar16;
  pcVar5 = pcVar20 + -1;
  for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
    *pcVar5 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
  iVar18 = -1;
  pcVar6 = pcVar7;
  do {
    if (iVar18 == 0) break;
    iVar18 = iVar18 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (iVar18 != -2) {
    uVar16 = 0xffffffff;
    pcVar6 = &DAT_0086d430;
    do {
      pcVar5 = pcVar6;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar5 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar18 = -1;
    pcVar6 = local_80c;
    do {
      pcVar20 = pcVar6;
      if (iVar18 == 0) break;
      iVar18 = iVar18 + -1;
      pcVar20 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar20;
    } while (cVar1 != '\0');
    pcVar6 = pcVar5 + -uVar16;
    pcVar5 = pcVar20 + -1;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uVar16 = 0xffffffff;
    do {
      pcVar6 = pcVar7;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16;
    iVar18 = -1;
    pcVar7 = local_80c;
    do {
      pcVar5 = pcVar7;
      if (iVar18 == 0) break;
      iVar18 = iVar18 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar16;
    pcVar6 = pcVar5 + -1;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    iVar18 = -1;
    pcVar7 = pcVar8;
    do {
      if (iVar18 == 0) break;
      iVar18 = iVar18 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar18 != -2) {
      uVar16 = 0xffffffff;
      pcVar7 = &DAT_0086d430;
      do {
        pcVar6 = pcVar7;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar6 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar6;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar18 = -1;
      pcVar7 = local_80c;
      do {
        pcVar5 = pcVar7;
        if (iVar18 == 0) break;
        iVar18 = iVar18 + -1;
        pcVar5 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar5;
      } while (cVar1 != '\0');
      pcVar7 = pcVar6 + -uVar16;
      pcVar6 = pcVar5 + -1;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar6 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      }
      uVar16 = 0xffffffff;
      do {
        pcVar7 = pcVar8;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      iVar18 = -1;
      pcVar8 = local_80c;
      do {
        pcVar6 = pcVar8;
        if (iVar18 == 0) break;
        iVar18 = iVar18 + -1;
        pcVar6 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar6;
      } while (cVar1 != '\0');
      pcVar8 = pcVar7 + -uVar16;
      pcVar7 = pcVar6 + -1;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      iVar18 = -1;
      pcVar8 = local_850;
      do {
        if (iVar18 == 0) break;
        iVar18 = iVar18 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (iVar18 != -2) {
        uVar16 = 0xffffffff;
        pcVar8 = &DAT_0086d430;
        do {
          pcVar7 = pcVar8;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        iVar18 = -1;
        pcVar8 = local_80c;
        do {
          pcVar6 = pcVar8;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar6 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar6;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + -uVar16;
        pcVar7 = pcVar6 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        }
        uVar16 = 0xffffffff;
        pcVar8 = local_850;
        do {
          pcVar7 = pcVar8;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        iVar18 = -1;
        pcVar8 = local_80c;
        do {
          pcVar6 = pcVar8;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar6 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar6;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + -uVar16;
        pcVar7 = pcVar6 + -1;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        }
        iVar18 = -1;
        pcVar8 = local_854;
        do {
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (iVar18 != -2) {
          uVar16 = 0xffffffff;
          pcVar8 = &DAT_0086d430;
          do {
            pcVar7 = pcVar8;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar7 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar7;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16;
          iVar18 = -1;
          pcVar8 = local_80c;
          do {
            pcVar6 = pcVar8;
            if (iVar18 == 0) break;
            iVar18 = iVar18 + -1;
            pcVar6 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar6;
          } while (cVar1 != '\0');
          pcVar8 = pcVar7 + -uVar16;
          pcVar7 = pcVar6 + -1;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar7 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
          }
          uVar16 = 0xffffffff;
          pcVar8 = local_854;
          do {
            pcVar7 = pcVar8;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar7 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar7;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16;
          iVar18 = -1;
          pcVar8 = local_80c;
          do {
            pcVar6 = pcVar8;
            if (iVar18 == 0) break;
            iVar18 = iVar18 + -1;
            pcVar6 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar6;
          } while (cVar1 != '\0');
          pcVar8 = pcVar7 + -uVar16;
          pcVar7 = pcVar6 + -1;
          for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar7 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
          }
          iVar18 = -1;
          pcVar8 = pcVar9;
          do {
            if (iVar18 == 0) break;
            iVar18 = iVar18 + -1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (iVar18 != -2) {
            uVar16 = 0xffffffff;
            pcVar8 = &DAT_0086d430;
            do {
              pcVar7 = pcVar8;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar7 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar7;
            } while (cVar1 != '\0');
            uVar16 = ~uVar16;
            iVar18 = -1;
            pcVar8 = local_80c;
            do {
              pcVar6 = pcVar8;
              if (iVar18 == 0) break;
              iVar18 = iVar18 + -1;
              pcVar6 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar6;
            } while (cVar1 != '\0');
            pcVar8 = pcVar7 + -uVar16;
            pcVar7 = pcVar6 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar7 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar7 = pcVar7 + 1;
            }
            uVar16 = 0xffffffff;
            do {
              pcVar8 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar8 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar8;
            } while (cVar1 != '\0');
            uVar16 = ~uVar16;
            iVar18 = -1;
            pcVar9 = local_80c;
            do {
              pcVar7 = pcVar9;
              if (iVar18 == 0) break;
              iVar18 = iVar18 + -1;
              pcVar7 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar7;
            } while (cVar1 != '\0');
            pcVar9 = pcVar8 + -uVar16;
            pcVar8 = pcVar7 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar8 = pcVar8 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar8 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar8 = pcVar8 + 1;
            }
          }
        }
      }
    }
  }
  FUN_0043e900(local_80c);
  FUN_0043e5d0(0);
  FUN_007a630a(local_84c,s__s_BTN1_0086d53c,*(undefined4 *)(param_1 + 0x90));
  iVar18 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  pvVar10 = operator_new(0x1aa);
  local_4 = 0;
  if (pvVar10 == (void *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    uVar21 = 0;
    uVar11 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar12 = FUN_0042b6c9(local_84c);
    piVar13 = (int *)FUN_0043acc0(uVar12,uVar11,uVar21);
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar15 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x88) = piVar13;
  iVar4 = *piVar13;
  local_4 = 0xffffffff;
  iVar14 = FUN_00415be0();
  iVar18 = FUN_00415bd0(((iVar18 + iVar3) - iVar14) + -0x10);
  (**(code **)(iVar4 + 0x18))
            (((iVar15 / 2 - ((int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2)) - iVar18 / 2) + iVar2);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 0x88) + 0x88) = 0xd;
  FUN_007a630a(&local_854,s__s_BTN2_0086d534,*(undefined4 *)(param_1 + 0x90));
  pvVar10 = operator_new(0x1aa);
  pvStack_c = (void *)0x1;
  if (pvVar10 == (void *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    uVar21 = 0;
    uVar11 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar12 = FUN_0042b6c9(&local_854);
    piVar13 = (int *)FUN_0043acc0(uVar12,uVar11,uVar21);
  }
  iVar18 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x8c) = piVar13;
  iVar3 = *piVar13;
  pvStack_c = (void *)0xffffffff;
  iVar15 = FUN_00415be0();
  iVar18 = FUN_00415bd0(((iVar18 + unaff_EBX) - iVar15) + -0x10);
  (**(code **)(iVar3 + 0x18))
            (((iVar2 / 2 + ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) - iVar18 / 2) + unaff_EBP);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  ExceptionList = pvStack_1c;
  return;
}


