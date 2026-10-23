// FUN_00515720 @ 515720 size=2106

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00515720(int param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  double dVar11;
  double dVar12;
  char acStack_200 [256];
  undefined1 auStack_100 [256];
  
  DAT_00adb0f0._0_1_ = 0;
  if ((*(int *)(param_1 + 4) == 0) &&
     (cVar1 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar1 != '\0')) {
    puVar2 = (undefined4 *)FUN_0042b6c9(s_HAVE_NO_MISSION_0084a7ac);
    return puVar2;
  }
  if ((*(int *)(param_1 + 4) == 1) &&
     (iVar3 = FUN_004e9370(*(undefined4 *)(param_1 + 8)), *(int *)(iVar3 + 0x3d8) == DAT_00d0ca90))
  {
    uVar4 = FUN_0042b6c9(s_MISSION_MOVE_0084a7bc);
  }
  else {
    uVar4 = FUN_00514070(*(undefined4 *)(param_1 + 4));
  }
  FUN_007a630a(&DAT_00adb0f0,uVar4);
  uVar7 = 0xffffffff;
  pcVar5 = &DAT_00839650;
  do {
    pcVar10 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_00adb0f0;
  do {
    pcVar9 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  pcVar5 = pcVar10 + -uVar7;
  pcVar10 = pcVar9 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_005153d0();
  FUN_0042b6c9(s_MISSION_TARGET_0084a920);
  FUN_007a630a();
  uVar7 = 0xffffffff;
  pcVar5 = acStack_200;
  do {
    pcVar10 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_00adb0f0;
  do {
    pcVar9 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  pcVar5 = pcVar10 + -uVar7;
  pcVar10 = pcVar9 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if ((*(int *)(param_1 + 4) == 0) &&
     (cVar1 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar1 == '\0')) {
    pcVar5 = (char *)FUN_0042b6c9();
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = (char *)&DAT_00adb0f0;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar5 = &DAT_00839650;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_0051c0c0();
    piVar6 = (int *)FUN_004e9370();
    (**(code **)(*piVar6 + 0xc))();
    FUN_0042b6c9(s_MISSION_TARGET_0084a920);
    FUN_007a630a();
    uVar7 = 0xffffffff;
    pcVar5 = acStack_200;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      ((*(char *)(param_1 + 0x11) != '\0' || (*(char *)(param_1 + 0x10) != '\0')))) ||
     (*(char *)(param_1 + 0x11) != '\0')) {
    pcVar5 = (char *)FUN_0042b6c9();
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  cVar1 = (**(code **)(*param_2 + 0x28))();
  if (cVar1 == '\0') {
    if (*(float *)(param_1 + 0xc) == _DAT_007e3380) {
      pcVar5 = (char *)FUN_0042b6c9();
    }
    else {
      if (*(float *)(param_1 + 0xc) == *(float *)(param_1 + 0x2e)) {
        dVar12 = (double)(*(float *)(param_1 + 0xc) * _DAT_007e4088);
        uVar4 = FUN_0042b6c9();
        FUN_007a630a(acStack_200,uVar4,dVar12);
      }
      else {
        dVar12 = (double)(*(float *)(param_1 + 0x2e) * _DAT_007e4088);
        dVar11 = (double)(*(float *)(param_1 + 0xc) * _DAT_007e4088);
        uVar4 = FUN_0042b6c9(s_MISSION_PERC_2_0084a8d0);
        FUN_007a630a(acStack_200,uVar4,dVar11,dVar12);
      }
      uVar7 = 0xffffffff;
      pcVar5 = acStack_200;
      do {
        pcVar10 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar3 = -1;
      pcVar5 = (char *)&DAT_00adb0f0;
      do {
        pcVar9 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar10 + -uVar7;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcVar5 = &DAT_00839650;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    if ((*(int *)(param_1 + 4) == 0x1b) || (*(int *)(param_1 + 4) == 0x1c)) {
      if (*(char *)(param_1 + 0x2b) == '\0') {
        pcVar5 = (char *)FUN_0042b6c9();
      }
      else if (*(int *)((int)param_2 + 0x212) == 0) {
        FUN_0042b6c9(s_MISSION_RETURN_0084a8b0);
        FUN_007a630a();
        pcVar5 = acStack_200;
      }
      else {
        piVar6 = (int *)FUN_004e9370();
        (**(code **)(*piVar6 + 0xc))();
        FUN_0042b6c9(s_MISSION_RETURN_0084a8b0);
        FUN_007a630a();
        pcVar5 = acStack_200;
      }
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar3 = -1;
      pcVar5 = (char *)&DAT_00adb0f0;
      do {
        pcVar9 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar10 + -uVar7;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    if (*(char *)(param_1 + 0x2a) != '\0') {
      pcVar5 = (char *)FUN_0042b6c9();
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar3 = -1;
      pcVar5 = (char *)&DAT_00adb0f0;
      do {
        pcVar9 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar10 + -uVar7;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    if (*(char *)(param_1 + 0x2c) != '\0') {
      pcVar5 = (char *)FUN_0042b6c9();
LAB_00515bcc:
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar3 = -1;
      pcVar5 = (char *)&DAT_00adb0f0;
      do {
        pcVar9 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar1 != '\0');
      pcVar5 = pcVar10 + -uVar7;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
  }
  else if (*(int *)(param_1 + 4) == 8) {
    FUN_005153d0((double)(*(float *)(param_1 + 0xc) * _DAT_007e4088));
    uVar4 = FUN_0042b6c9(s_MISSION_PERC_PD_0084a858);
    FUN_007a630a(acStack_200,uVar4);
    pcVar5 = acStack_200;
    goto LAB_00515bcc;
  }
  cVar1 = FUN_0042dd70();
  if (cVar1 == '\0') {
    FUN_0079168d(auStack_100,param_1 + 0x12);
    FUN_0042b6c9(s_MISSION_STARTAT_0084a838);
    FUN_007a630a();
    pcVar5 = acStack_200;
  }
  else {
    pcVar5 = (char *)FUN_0042b6c9();
  }
  uVar7 = 0xffffffff;
  do {
    pcVar10 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_00adb0f0;
  do {
    pcVar9 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  pcVar5 = pcVar10 + -uVar7;
  pcVar10 = pcVar9 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
  cVar1 = FUN_0042ddd0();
  if (cVar1 == '\0') {
    FUN_0079168d(auStack_100,param_1 + 0x18);
    FUN_0042b6c9(s_MISSION_ENDAT_0084a828);
    FUN_007a630a();
    uVar7 = 0xffffffff;
    pcVar5 = acStack_200;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  if (*(int *)(param_1 + 0x1e) == 1) {
    piVar6 = (int *)FUN_004e9370();
    (**(code **)(*piVar6 + 0xc))();
    FUN_0042b6c9(s_MISSION_SUBTASK_0084a818);
    FUN_007a630a();
    uVar7 = 0xffffffff;
    pcVar5 = acStack_200;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar5 = &DAT_00839650;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar4 = FUN_0051c0f0();
    FUN_0079168d(auStack_100,uVar4);
    FUN_0042b6c9(s_UIW_ETA_0084a810);
    FUN_007a630a();
    uVar7 = 0xffffffff;
    pcVar5 = acStack_200;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar3 = FUN_00523f70();
    if ((iVar3 == *(int *)(param_1 + 0x22)) || (iVar3 = FUN_00523f70(), iVar3 == 0))
    goto LAB_00515f48;
    uVar7 = 0xffffffff;
    pcVar5 = &DAT_00839650;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_0079168d(auStack_100,(int)param_2 + 0x222);
    FUN_00523f70();
    piVar6 = (int *)FUN_004e9370();
    (**(code **)(*piVar6 + 0xc))();
    FUN_007a630a();
    uVar7 = 0xffffffff;
    pcVar5 = acStack_200;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar3 = -1;
    pcVar5 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar9 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar1 != '\0');
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_0042b6c9(s_UIW_ETA_0084a810);
    FUN_007a630a();
    pcVar5 = acStack_200;
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x30))();
    if (cVar1 == '\0') goto LAB_00515f48;
    iVar3 = FUN_0051b230();
    if (((*(int *)(iVar3 + 0x3ac) < 4) || (5 < *(int *)(iVar3 + 0x3ac))) ||
       (cVar1 = (**(code **)(*(int *)((int)param_2 + 0x22e) + 8))(), cVar1 == '\0'))
    goto LAB_00515f48;
    pcVar5 = (char *)FUN_0042b6c9();
  }
  uVar7 = 0xffffffff;
  do {
    pcVar10 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_00adb0f0;
  do {
    pcVar9 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar9;
  } while (cVar1 != '\0');
  pcVar5 = pcVar10 + -uVar7;
  pcVar10 = pcVar9 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
  }
LAB_00515f48:
  return &DAT_00adb0f0;
}


