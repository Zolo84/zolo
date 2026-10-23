// FUN_0047ea20 @ 47ea20 size=1035

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047ea20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  bool bVar12;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bd3de;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = (&DAT_0089cad8)[*(int *)(iVar1 + 0x24)];
  ExceptionList = &local_10;
  FUN_00588600();
  FUN_005885d0();
  FUN_00588600();
  if (*(char *)(iVar1 + 0x28) == '\0') {
    FUN_00451160();
  }
  local_1c = &DAT_0089cad8;
  do {
    iVar9 = *local_1c;
    if (((iVar9 != 0) && (iVar9 != param_1)) && (iVar9 != iVar2)) {
      FUN_0044d810();
      FUN_0044d810();
      FUN_00588600();
      FUN_005885d0();
      FUN_00588600();
    }
    local_1c = local_1c + 1;
  } while ((int)local_1c < 0x89d038);
  if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) == *(int *)(iVar1 + 0x24)) {
    *(undefined4 *)(*(int *)(param_1 + 0x12da) + 0x3b30) = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x12da) + *(int *)(iVar1 + 0x24) * 0x2c + 0x2e) = 0;
  iVar9 = FUN_00428ee0();
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar9 + -8;
  }
  iVar3 = *(int *)(iVar9 + 0x3a782);
  pvVar10 = operator_new(0xe);
  local_8 = 0;
  if (pvVar10 == (void *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_00473a90();
  }
  iVar4 = *(int *)(iVar9 + 0x3a786);
  local_8 = 0xffffffff;
  *(undefined4 *)(iVar9 + 0x3a782) = uVar11;
  *(int *)(iVar9 + 0x3a786) = iVar4 + 1;
  if (iVar4 == 0) {
    *(undefined4 *)(iVar9 + 0x3a77e) = uVar11;
  }
  else {
    *(undefined4 *)(iVar3 + 8) = uVar11;
  }
  FUN_00462380();
  if (DAT_00a98440 == 3) {
    FUN_004dcb20();
  }
  if (*(int *)(param_1 + 0x3350) != 0) {
    FUN_004734e0();
    local_8 = 1;
    piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x3350) + 0x22) + 4);
    while (piVar8 = local_2c, piVar7 = local_30, piVar5 = piVar7, piVar6 != (int *)0x0) {
      piVar5 = (int *)piVar6[2];
      iVar9 = *piVar6;
      local_2c = operator_new(0xe);
      if (local_2c == (int *)0x0) {
        local_2c = (int *)0x0;
      }
      else {
        local_2c[1] = (int)piVar8;
        *local_2c = iVar9;
        local_2c[2] = 0;
        *(undefined1 *)(local_2c + 3) = 0;
      }
      iVar9 = local_28 + 1;
      bVar12 = local_28 != 0;
      piVar6 = piVar5;
      local_30 = local_2c;
      local_28 = iVar9;
      if (bVar12) {
        piVar8[2] = (int)local_2c;
        local_30 = piVar7;
      }
    }
    while (piVar5 != (int *)0x0) {
      piVar6 = (int *)piVar5[2];
      iVar9 = *piVar5;
      piVar5 = piVar6;
      if ((iVar9 != *(int *)(param_1 + 6)) &&
         (*(char *)(*(int *)(iVar2 + 0x12da) + iVar9 * 0x2c + 0x2c) == '\0')) {
        pvVar10 = operator_new(0xc);
        local_8._0_1_ = 2;
        if (pvVar10 != (void *)0x0) {
          FUN_0045f730();
          FUN_00449290();
          FUN_00449290(iVar1 + 0xe);
          FUN_00465c30(iVar9);
          uVar11 = FUN_0045fec0();
          FUN_00464b70(0xbf,uVar11);
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00565c50();
      }
    }
    local_8 = 0xffffffff;
    while (piVar7 != (int *)0x0) {
      piVar7 = (int *)piVar7[2];
      FUN_00796cd8();
    }
  }
  FUN_00462580();
  ExceptionList = local_10;
  return 3;
}


