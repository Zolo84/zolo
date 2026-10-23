// FUN_0067ecb0 @ 67ecb0 size=1587

/* WARNING: Removing unreachable block (ram,0x0067f0b9) */
/* WARNING: Removing unreachable block (ram,0x0067f0cb) */
/* WARNING: Removing unreachable block (ram,0x0067efab) */
/* WARNING: Removing unreachable block (ram,0x0067efb0) */
/* WARNING: Removing unreachable block (ram,0x0067efd3) */
/* WARNING: Removing unreachable block (ram,0x0067f000) */
/* WARNING: Removing unreachable block (ram,0x0067f01a) */
/* WARNING: Removing unreachable block (ram,0x0067f027) */
/* WARNING: Removing unreachable block (ram,0x0067f02f) */
/* WARNING: Removing unreachable block (ram,0x0067f03e) */
/* WARNING: Removing unreachable block (ram,0x0067f06b) */
/* WARNING: Removing unreachable block (ram,0x0067f06e) */
/* WARNING: Removing unreachable block (ram,0x0067f08c) */
/* WARNING: Removing unreachable block (ram,0x0067f07f) */
/* WARNING: Removing unreachable block (ram,0x0067f08a) */
/* WARNING: Removing unreachable block (ram,0x0067efad) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0067ecb0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float10 fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *local_48;
  int local_34;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d4ae6;
  local_10 = ExceptionList;
  if (DAT_00dc18f0 == '\0') {
    ExceptionList = &local_10;
    cVar9 = FUN_0044beb0();
    if ((cVar9 == '\0') &&
       (iVar11 = (**(code **)(**(int **)(DAT_00d615c2 + 0x22) + 4))(), iVar11 < 1)) {
      local_34 = 0;
      local_8 = 2;
      FUN_004a3650();
      cVar9 = FUN_0044d840();
      if (cVar9 != '\0') {
        local_18 = &DAT_0089cad8;
        do {
          if (((*local_18 != 0) &&
              (iVar11 = *(int *)(*(int *)(*local_18 + 0x12da) + 0x3b30), iVar10 = FUN_006a9d50(),
              iVar11 == iVar10)) &&
             (fVar2 = *(float *)(*(int *)(param_1 + 10) + 0x39c8), iVar11 = FUN_00585e50(0x19),
             (float)iVar11 <= fVar2)) {
            FUN_004a0750();
            cVar9 = FUN_004e84b0();
            if (cVar9 == '\0') {
              fVar16 = (float10)FUN_005885d0();
              fVar3 = (float10)_DAT_007e40b8;
              fVar4 = (float10)_DAT_007e682c;
              iVar11 = FUN_006b58b0();
              fVar2 = (float)iVar11 * _DAT_007e34c0;
              iVar11 = FUN_006b5880();
              fVar5 = (float)iVar11 * _DAT_007e34c0;
              iVar11 = FUN_0044dc80();
              fVar6 = (float)iVar11 - _DAT_007e3848;
              iVar11 = FUN_0044dc80();
              fVar7 = (float)iVar11 - _DAT_007e3848;
              iVar11 = FUN_0044dc80();
              fVar8 = (float)iVar11 - _DAT_007e3848;
              iVar11 = _rand();
              if (iVar11 % 300 <
                  (int)ROUND((fVar7 + fVar7 +
                             fVar6 + fVar5 + fVar2 + (float)(fVar16 * fVar3 - fVar4)) - fVar8)) {
                pvVar12 = operator_new(0xc);
                local_8._0_1_ = 3;
                if (pvVar12 != (void *)0x0) {
                  uVar19 = 0;
                  uVar13 = FUN_00458280(0);
                  uVar14 = FUN_006a9d50(uVar13);
                  uVar18 = 2;
                  uVar17 = 0x19;
                  uVar15 = FUN_0045fec0(0x19,2,uVar14);
                  FUN_00464820(0x89,uVar15,uVar17,uVar18,uVar14,uVar13,uVar19);
                }
                local_8 = CONCAT31(local_8._1_3_,2);
                FUN_00565ca0();
              }
            }
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < 0x89d038);
        while (local_34 != 0) {
          local_34 = *(int *)(local_34 + 8);
          FUN_00796cd8();
        }
      }
    }
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_004734e0();
  local_8 = 0;
  FUN_004a3650();
  do {
    do {
      if (local_48 == (undefined4 *)0x0) goto LAB_0067edf5;
      puVar1 = (undefined4 *)local_48[2];
      uVar13 = *local_48;
      cVar9 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x28) + 0x24))();
      local_48 = puVar1;
    } while (((cVar9 == '\0') ||
             (cVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe8b2) + 0x24))(),
             cVar9 != '\0')) ||
            ((cVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe8c4) + 0x24))(),
             cVar9 != '\0' || (cVar9 = FUN_0049ed40(), cVar9 != '\0'))));
    local_14 = 0xf;
    cVar9 = FUN_0044beb0();
    if (cVar9 != '\0') {
      local_14 = 10;
    }
    cVar9 = FUN_004e84b0();
    iVar11 = 5;
    if (cVar9 == '\0') {
      iVar11 = local_14;
    }
    iVar10 = _rand();
  } while (iVar11 <= iVar10 % 100);
  FUN_00461270(uVar13,0);
LAB_0067edf5:
  local_18 = &DAT_0089cad8;
  do {
    if (((*local_18 != 0) &&
        (iVar11 = *(int *)(*(int *)(*local_18 + 0x12da) + 0x3b30), iVar10 = FUN_006a9d50(),
        iVar11 == iVar10)) &&
       ((fVar2 = *(float *)(*(int *)(param_1 + 10) + 0x39c8), iVar11 = FUN_00585e50(0x19),
        (float)iVar11 <= fVar2 &&
        (cVar9 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x3a) + 0x24))(),
        cVar9 != '\0')))) {
      iVar11 = 0xf;
      cVar9 = FUN_0044beb0();
      if (cVar9 != '\0') {
        iVar11 = 10;
      }
      FUN_004a0750();
      cVar9 = FUN_004e84b0();
      if (cVar9 != '\0') {
        iVar11 = 5;
      }
      iVar10 = _rand();
      if (iVar10 % 100 < iVar11) {
        pvVar12 = operator_new(0xc);
        local_8._0_1_ = 1;
        if (pvVar12 != (void *)0x0) {
          uVar19 = 0;
          uVar13 = FUN_00458280(0);
          uVar14 = FUN_006a9d50(uVar13);
          uVar18 = 2;
          uVar17 = 0x19;
          uVar15 = FUN_0045fec0(0x19,2,uVar14);
          FUN_00464820(0x89,uVar15,uVar17,uVar18,uVar14,uVar13,uVar19);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00565ca0();
        goto LAB_0067ef2a;
      }
    }
    local_18 = local_18 + 1;
    if (0x89d037 < (int)local_18) {
LAB_0067ef2a:
      local_8 = 0xffffffff;
      FUN_004309c0();
      ExceptionList = local_10;
      return;
    }
  } while( true );
}


