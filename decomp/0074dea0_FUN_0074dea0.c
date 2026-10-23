// FUN_0074dea0 @ 74dea0 size=1061

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0074dea0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  HANDLE pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  FUN_006ee230(param_2);
  *(undefined1 *)((int)param_1 + 0x16) = param_2._0_1_;
  FUN_00674910(0);
  *(undefined1 *)((int)param_1 + 0x26) = param_2._0_1_;
  FUN_00674910(0);
  *(undefined1 *)((int)param_1 + 0x36) = param_2._0_1_;
  FUN_00674910(0);
  *(undefined1 *)((int)param_1 + 0x46) = param_2._0_1_;
  FUN_00674910(0);
  *(undefined1 *)((int)param_1 + 0x56) = param_2._0_1_;
  FUN_00674910(0);
  param_1[0x23] = &PTR_LAB_007fa258;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  *(undefined ***)((int)param_1 + 0xaa) = &PTR_LAB_007fa258;
  *(undefined1 *)((int)param_1 + 0xc6) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0xae));
  *(undefined1 *)(param_1 + 0x33) = param_2._0_1_;
  FUN_00674910(0);
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_0088ebf8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(&DAT_0088ebf8,~uVar4 - 1);
  FUN_00673c70(&DAT_0088ebf8,&param_2);
  FUN_00673c70(&DAT_0088ebf8,&param_2);
  FUN_00748760();
  FUN_00748950();
  param_1[0x4f] = 0;
  param_1[0x32] = &PTR_FUN_007fa22c;
  *(undefined1 *)(param_1 + 0x51) = param_2._0_1_;
  FUN_00674910(0);
  *(undefined1 *)(param_1 + 0x55) = param_2._0_1_;
  FUN_00674910(0);
  *param_1 = &PTR_FUN_007fa238;
  param_1[2] = &PTR_LAB_007fa234;
  FUN_00430090(&DAT_0088ebf8);
  _DAT_00d4c328 = FUN_00584270(0xff,0xff,0xff);
  _DAT_00d4c328 = _DAT_00d4c328 & 0xffff;
  uVar4 = 0xffffffff;
  pcVar7 = (char *)&DAT_00dc3600;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  param_2 = (char *)uVar4;
  cVar1 = FUN_00674e40(uVar4,1);
  if (cVar1 != '\0') {
    puVar6 = &DAT_00dc3600;
    puVar8 = *(undefined4 **)((int)param_1 + 0x1a);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_00674e20(uVar4);
  }
  iVar3 = DAT_00dc34f8;
  *(int *)((int)param_1 + 0x66) = DAT_00dc34f8;
  if (iVar3 == 0) {
    *(undefined4 *)((int)param_1 + 0x66) = 0xf67;
  }
  param_2 = (char *)FUN_0042b6c9(s_EN_NO_CHANNEL_008748e0);
  uVar4 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00674e40(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = param_2;
    pcVar9 = *(char **)((int)param_1 + 0x5a);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00674e20(uVar4);
  }
  param_2 = (char *)FUN_0042b6c9(s_EN_GAME_NAME_008748d0);
  uVar4 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00674e40(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = param_2;
    pcVar9 = *(char **)((int)param_1 + 0x2a);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00674e20(uVar4);
  }
  uVar4 = 0xffffffff;
  pcVar7 = s_SVEA3_SWEDEN_008748c0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00674e40(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = s_SVEA3_SWEDEN_008748c0;
    pcVar9 = *(char **)((int)param_1 + 0x3a);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00674e20(uVar4);
  }
  param_2 = (char *)FUN_0042b6c9(s_EN_NAME_0086ffd0);
  uVar4 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00674e40(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = param_2;
    pcVar9 = *(char **)((int)param_1 + 0x4a);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00674e20(uVar4);
  }
  *(undefined4 *)((int)param_1 + 0x182) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
  *(undefined1 *)(DAT_00893530 + 0x1e) = 0;
  if (DAT_00bd1500 != (undefined4 *)0x0) {
    FUN_0057be80();
    if (DAT_00bd1500 != (undefined4 *)0x0) {
      (**(code **)*DAT_00bd1500)(1);
    }
  }
  DAT_00bd1500 = (undefined4 *)0x0;
  FUN_005820d0();
  FUN_00582270();
  FUN_005821e0(1,0x10001,0);
  param_1[0x59] = 0;
  param_1[0x22] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)((int)param_1 + 0x186) = 0;
  *(undefined4 *)((int)param_1 + 0x18e) = 0;
  *(undefined4 *)((int)param_1 + 0x196) = 0;
  FUN_0074e6d0();
  FUN_0074e850();
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_0074e330,param_1,0
                        ,(LPDWORD)((int)param_1 + 0x192));
  *(HANDLE *)((int)param_1 + 0x18e) = pvVar2;
  uVar4 = _DAT_00d4c328;
  if (pvVar2 == (HANDLE)0x0) {
    iVar3 = FUN_0042b6c9(s_EN_NOT_CREATE_CONNECT_THREAD_008748a0);
    if (iVar3 != 0) {
      FUN_004367a0(iVar3,uVar4);
    }
  }
  param_1[0x1b] = 0;
  return param_1;
}


