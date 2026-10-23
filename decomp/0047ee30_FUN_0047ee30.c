// FUN_0047ee30 @ 47ee30 size=1478

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047ee30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  int *local_820;
  char local_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd41a;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = (&DAT_0089cad8)[*(int *)(iVar1 + 0x20)];
  ExceptionList = &local_c;
  iVar8 = FUN_00428ee0();
  if ((iVar8 != 0) && (iVar8 != 8)) {
    iVar12 = *(int *)(iVar8 + 0x3a77a);
    local_40c[0] = '\0';
    pvVar9 = operator_new(0xe);
    local_4 = 0;
    if (pvVar9 == (void *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_00473a90();
    }
    iVar3 = *(int *)(iVar8 + 0x3a77e);
    local_4 = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x3a77a) = uVar10;
    *(int *)(iVar8 + 0x3a77e) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar8 + 0x3a776) = uVar10;
    }
    else {
      *(undefined4 *)(iVar12 + 8) = uVar10;
    }
    if (*(char *)(iVar1 + 0x28) == '\0') {
      FUN_00585e50();
      FUN_0049ebd0();
      FUN_004a4500();
      FUN_00490d50();
      local_820 = (int *)0xc0a00000;
      cVar7 = FUN_004a0a80();
      if (cVar7 != '\0') {
        local_820 = (int *)0xc1480000;
      }
      cVar7 = FUN_0049ed40();
      if (cVar7 != '\0') {
        local_820 = (int *)_DAT_007e3380;
      }
      fVar5 = (float)local_820 + *(float *)(param_1 + 0x334c);
      if (fVar5 < _DAT_007e3380) {
        fVar5 = _DAT_007e3380;
      }
      *(float *)(param_1 + 0x334c) = fVar5;
    }
    cVar7 = FUN_0047f400();
    if (cVar7 == '\0') {
      FUN_00462580();
      *(undefined1 *)(*(int *)(param_1 + 0x12da) + *(int *)(iVar1 + 0x20) * 0x2c + 0x2e) = 0;
      FUN_00462380();
      if (DAT_00a98440 == 3) {
        FUN_004dcb20();
      }
      FUN_006ad630();
      FUN_0044bb10();
      FUN_0044bb10();
      if (*(int *)(param_1 + 0x3350) != 0) {
        piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x3350) + 0x22) + 4);
        while (piVar6 != (int *)0x0) {
          piVar4 = (int *)piVar6[2];
          iVar8 = *piVar6;
          piVar6 = piVar4;
          if (iVar8 != *(int *)(param_1 + 6)) {
            pvVar9 = operator_new(0xc);
            local_4 = 1;
            if (pvVar9 != (void *)0x0) {
              FUN_0045f730();
              FUN_00449290();
              FUN_00449290(iVar1 + 0xe);
              FUN_00465c30(iVar8);
              uVar10 = FUN_0045fec0();
              FUN_00464b70(0xbf,uVar10);
            }
            local_4 = 0xffffffff;
            FUN_00565c50();
          }
        }
      }
      FUN_0043ea10();
      FUN_0043ea10();
    }
    else {
      FUN_00584e20();
      FUN_0043ea10();
      pcVar11 = (char *)(**(code **)(*(int *)(param_1 + 0xe) + 0xc))();
      uVar13 = 0xffffffff;
      do {
        pcVar15 = pcVar11;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar15 = pcVar11 + 1;
        cVar7 = *pcVar11;
        pcVar11 = pcVar15;
      } while (cVar7 != '\0');
      uVar13 = ~uVar13;
      pcVar11 = pcVar15 + -uVar13;
      pcVar15 = local_40c;
      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar15 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
    local_820 = &DAT_0089cad8;
    do {
      iVar8 = *local_820;
      if ((((iVar8 != 0) && (iVar8 != iVar2)) && (iVar8 != param_1)) &&
         ((*(char *)(*(int *)(iVar8 + 0x12da) + *(int *)(param_1 + 6) * 0x2c + 0x2c) == '\0' &&
          (cVar7 = FUN_005861c0(), cVar7 != '\0')))) {
        iVar8 = FUN_004a0750();
        iVar8 = *(int *)(iVar8 + 0x284);
        iVar12 = FUN_004a0750();
        if ((iVar8 == *(int *)(iVar12 + 0x284)) && (DAT_00d56f3e != '\0')) {
          FUN_00761440();
        }
      }
      local_820 = local_820 + 1;
    } while ((int)local_820 < 0x89d038);
    if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) == *(int *)(iVar1 + 0x20)) {
      *(undefined4 *)(*(int *)(param_1 + 0x12da) + 0x3b30) = 0;
    }
    iVar8 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30);
    if ((iVar8 != 0) && (*(char *)(*(int *)(iVar2 + 0x12da) + iVar8 * 0x2c + 0x2c) == '\0')) {
      pvVar9 = operator_new(0xc);
      local_4 = 2;
      if (pvVar9 != (void *)0x0) {
        FUN_0045f730();
        FUN_00449290();
        FUN_00449290(iVar1 + 0xe);
        FUN_00490f60();
        uVar10 = FUN_004965b0();
        FUN_00465c30(uVar10);
        uVar10 = FUN_0045fec0();
        FUN_00464b70(0xbf,uVar10);
      }
      local_4 = 0xffffffff;
      FUN_00565c50();
    }
    cVar7 = FUN_00444290();
    if (cVar7 == '\0') {
      (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(iVar1 + 0x20)] + 0xe) + 0xc))();
      FUN_006eab80();
    }
    else {
      _rand();
      FUN_007a630a();
      FUN_0042b6c9();
      FUN_006eaa80();
    }
  }
  ExceptionList = local_c;
  return 3;
}


