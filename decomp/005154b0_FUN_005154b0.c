// FUN_005154b0 @ 5154b0 size=621

undefined4 * __thiscall FUN_005154b0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (*(char *)(param_2 + 0x17b) == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      iVar8 = (**(code **)(*(int *)(param_2 + 0x11c) + 4))();
      if (iVar8 == 0) {
        cVar1 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
        if (cVar1 != '\0') {
          puVar5 = (undefined4 *)FUN_0042b6c9(s_HAVE_NO_MISSION_0084a7ac);
          return puVar5;
        }
        pcVar2 = (char *)FUN_0042b6c9(s_MISSION_MOVE_0084a7bc);
        uVar6 = 0xffffffff;
        do {
          pcVar10 = pcVar2;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar2 = pcVar10 + -uVar6;
        pcVar10 = (char *)&DAT_00adb0f0;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar2 = &DAT_0084a7dc;
        do {
          pcVar10 = pcVar2;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar2 = (char *)&DAT_00adb0f0;
        do {
          pcVar9 = pcVar2;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar9 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
        } while (cVar1 != '\0');
        pcVar2 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar3 = FUN_0051c0c0();
        goto LAB_005155ea;
      }
      cVar1 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
      if (cVar1 != '\0') {
        pcVar2 = (char *)FUN_0042b6c9(s_MISSION_DEFEND_0084a7cc);
        goto LAB_00515691;
      }
      pcVar2 = (char *)FUN_00514070(1);
LAB_00515666:
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar2;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar2 = pcVar10 + -uVar6;
      pcVar10 = (char *)&DAT_00adb0f0;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar10 = pcVar10 + 4;
      }
    }
    else {
      if (*(int *)(param_1 + 4) == 1) {
        iVar8 = FUN_004e9370(*(undefined4 *)(param_1 + 8));
        if (*(int *)(iVar8 + 0x3d8) != 0) {
          uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x248) + 6);
          FUN_004e9370(*(undefined4 *)(param_1 + 8));
          cVar1 = FUN_0044b280(uVar3);
          if (cVar1 != '\0') goto LAB_00515685;
        }
        pcVar2 = (char *)FUN_0042b6c9(s_MISSION_MOVE_0084a7bc);
        goto LAB_00515666;
      }
LAB_00515685:
      pcVar2 = (char *)FUN_00514070(*(undefined4 *)(param_1 + 4));
LAB_00515691:
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar2;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar2 = pcVar10 + -uVar6;
      pcVar10 = (char *)&DAT_00adb0f0;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar10 = pcVar10 + 4;
      }
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar2 = &DAT_0084a7dc;
    do {
      pcVar10 = pcVar2;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar2 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar2;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar2 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar2 = (char *)FUN_005153d0();
  }
  else {
    pcVar2 = (char *)FUN_0042b6c9(s_MISSION_RETREAT_0084a7e0);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar2;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar2 = pcVar10 + -uVar6;
    pcVar10 = (char *)&DAT_00adb0f0;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar2 = &DAT_0084a7dc;
    do {
      pcVar10 = pcVar2;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar2 = (char *)&DAT_00adb0f0;
    do {
      pcVar9 = pcVar2;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar2 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = FUN_00523f70();
LAB_005155ea:
    piVar4 = (int *)FUN_004e9370(uVar3);
    pcVar2 = (char *)(**(code **)(*piVar4 + 0xc))();
  }
  uVar6 = 0xffffffff;
  do {
    pcVar10 = pcVar2;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar8 = -1;
  pcVar2 = (char *)&DAT_00adb0f0;
  do {
    pcVar9 = pcVar2;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar6;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  return &DAT_00adb0f0;
}


