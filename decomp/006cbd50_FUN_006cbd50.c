// FUN_006cbd50 @ 6cbd50 size=1749

undefined4 * __thiscall FUN_006cbd50(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int unaff_EBX;
  void *unaff_EBP;
  int unaff_ESI;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  void **ppvVar14;
  int iStack_48;
  int **ppiVar15;
  int *local_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  void *pvStack_20;
  void *apvStack_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8d93;
  pvStack_c = ExceptionList;
  iStack_48 = 0x6cbd7c;
  ExceptionList = &pvStack_c;
  local_28 = param_1;
  FUN_00425a80();
  local_4 = 0;
  FUN_00583720();
  local_4 = 1;
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_007f7308;
  param_1[2] = &PTR_LAB_007f7304;
  *(undefined1 *)(param_1 + 4) = 0;
  iStack_48 = 0x6cbdb1;
  local_30 = operator_new(0x72);
  local_4._0_1_ = 2;
  if (local_30 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iStack_48 = 0;
    piVar3 = (int *)FUN_00434930(0xe4,0xbc);
  }
  piVar1 = (int *)param_1[3];
  *(int **)((int)param_1 + 0x40e) = piVar3;
  iVar5 = *piVar3;
  ppiVar15 = &local_30;
  local_4 = CONCAT31(local_4._1_3_,1);
  iStack_48 = 0x6cbdf8;
  local_30 = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0x28))();
  iStack_48 = *(int *)(iVar4 + 4) + 0x48;
  ppvVar14 = apvStack_18;
  piVar3 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar4 = *piVar3 + 0x3e;
  (**(code **)(iVar5 + 0x34))();
  iVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined1 *)((int)param_1 + 0x416) = 0;
  (**(code **)(*(int *)param_1[3] + 0x28))(&stack0xffffffcc);
  uVar6 = FUN_00415be0();
  local_30 = (int *)FUN_00415bd0();
  uStack_2c = uVar6;
  pvStack_10 = operator_new(0x1aa);
  apvStack_18[0]._0_1_ = 3;
  if (pvStack_10 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    uVar13 = 0x50;
    iVar9 = iVar5;
    uVar6 = FUN_0042b6c9(&DAT_00839384);
    piVar3 = (int *)FUN_0043acc0(uVar6,iVar9,uVar13);
  }
  param_1[0x106] = piVar3;
  iVar9 = (int)unaff_EBP + 0xc4;
  apvStack_18[0] = (void *)CONCAT31(apvStack_18[0]._1_3_,1);
  (**(code **)(*piVar3 + 0x18))(iVar9,unaff_EBX + 0x193);
  apvStack_18[0] = operator_new(0x1aa);
  pvStack_20._0_1_ = 4;
  if (apvStack_18[0] == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    uVar13 = 0x50;
    iVar12 = iVar5;
    uVar6 = FUN_0042b6c9(s_CANCEL_0083bafc);
    piVar3 = (int *)FUN_0043acc0(uVar6,iVar12,uVar13);
  }
  param_1[0x107] = piVar3;
  pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,1);
  (**(code **)(*piVar3 + 0x18))(iVar5 + 0x58,unaff_ESI + 0x193);
  pvStack_20 = operator_new(0x1aa);
  local_28._0_1_ = 5;
  if (pvStack_20 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    uVar13 = 0xb0;
    uVar6 = FUN_0042b6c9(s_INGAME_MESSAGES_0086b7c4);
    piVar3 = (int *)FUN_0043acc0(uVar6,iVar5,uVar13);
  }
  param_1[0x108] = piVar3;
  local_28 = (undefined4 *)CONCAT31(local_28._1_3_,1);
  (**(code **)(*piVar3 + 0x18))(iStack_48 + 0x58,(int)ppiVar15 + 0x176);
  *(undefined4 *)((int)param_1 + 0x412) = 0;
  puVar8 = (undefined4 *)((int)param_1 + 0x12);
  *puVar8 = *(undefined4 *)(*DAT_00d12b40 + 0x36a);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)(*DAT_00d12b40 + 0x386);
  *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)(*DAT_00d12b40 + 0x372);
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)(*DAT_00d12b40 + 0x376);
  *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)(*DAT_00d12b40 + 0x37a);
  puVar7 = operator_new(0xa6);
  local_30._0_1_ = 6;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    local_28 = puVar7;
    uVar6 = FUN_0042b6c9(s_FEOPT_GAMESPEED_0086b7b4);
    FUN_006fb6d0(iVar9,uVar6,*puVar8,8,&PTR_s_FEOPT_GAMESPEED0_0086b6ac,0);
    *puVar7 = &PTR_FUN_007f72d0;
    *(undefined ***)((int)puVar7 + 0x12) = &PTR_LAB_007f7284;
    *(undefined ***)((int)puVar7 + 0x1a) = &PTR_LAB_007f7280;
    *(undefined4 **)((int)puVar7 + 0xa2) = puVar8;
    iVar5 = 0;
    piVar3 = puVar7 + 0x1e;
    do {
      iVar12 = iVar5 + 0xca;
      iVar5 = iVar5 + 0x11;
      iVar2 = *piVar3;
      *(int *)(iVar2 + 0xaa) = iVar4 + 0x80;
      *(int *)(iVar2 + 0xae) = iVar12 + (int)ppvVar14;
      piVar3 = piVar3 + 1;
    } while (iVar5 < 0x88);
  }
  local_30._0_1_ = 1;
  if (puVar7 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)((int)puVar7 + 0x12);
  }
  iVar5 = *(int *)((int)param_1 + 0x40e);
  iVar12 = *(int *)(iVar5 + 8);
  piVar3 = operator_new(0xe);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = iVar12;
    *piVar3 = (int)local_28;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
  *(int **)(iVar5 + 8) = piVar3;
  *(int *)(iVar5 + 0xc) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(iVar5 + 4) = piVar3;
  }
  else {
    *(int **)(iVar12 + 8) = piVar3;
  }
  puVar8 = operator_new(0xa6);
  local_30._0_1_ = 7;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_28 = puVar8;
    uVar6 = FUN_0042b6c9(s_FEOPT_COUNTERS_0086b7a4);
    FUN_006fb6d0(iVar9,uVar6,*(undefined4 *)((int)param_1 + 0x16),2,&PTR_s_FEOPT_OFF_0086fc64,2);
    *puVar8 = &PTR_FUN_007f72d0;
    *(undefined ***)((int)puVar8 + 0x12) = &PTR_LAB_007f7284;
    *(undefined ***)((int)puVar8 + 0x1a) = &PTR_LAB_007f7280;
    *(int *)((int)puVar8 + 0xa2) = (int)param_1 + 0x16;
    iVar5 = 0;
    piVar3 = puVar8 + 0x1e;
    do {
      iVar12 = iVar5 + 0xca;
      iVar5 = iVar5 + 0x11;
      iVar2 = *piVar3;
      *(int *)(iVar2 + 0xaa) = iVar4 + 0x80;
      *(int *)(iVar2 + 0xae) = iVar12 + (int)ppvVar14;
      piVar3 = piVar3 + 1;
    } while (iVar5 < 0x22);
  }
  local_30._0_1_ = 1;
  if (puVar8 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)((int)puVar8 + 0x12);
  }
  iVar5 = *(int *)((int)param_1 + 0x40e);
  iVar12 = *(int *)(iVar5 + 8);
  piVar3 = operator_new(0xe);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = iVar12;
    *piVar3 = (int)local_28;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
  *(int **)(iVar5 + 8) = piVar3;
  *(int *)(iVar5 + 0xc) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(iVar5 + 4) = piVar3;
  }
  else {
    *(int **)(iVar12 + 8) = piVar3;
  }
  puVar8 = operator_new(0xa6);
  local_30._0_1_ = 8;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_28 = puVar8;
    uVar6 = FUN_0042b6c9(s_FEOPT_AUTOSAVE_0086b794);
    FUN_006fb6d0(iVar9,uVar6,*(undefined4 *)((int)param_1 + 0x22),5,&PTR_s_FEOPT_AUTOSAVE1_0086fbe8,
                 3);
    *puVar8 = &PTR_FUN_007f72d0;
    *(undefined ***)((int)puVar8 + 0x12) = &PTR_LAB_007f7284;
    *(undefined ***)((int)puVar8 + 0x1a) = &PTR_LAB_007f7280;
    *(int *)((int)puVar8 + 0xa2) = (int)param_1 + 0x22;
    iVar5 = 0;
    piVar3 = puVar8 + 0x1e;
    do {
      iVar12 = iVar5 + 0xca;
      iVar5 = iVar5 + 0x11;
      iVar2 = *piVar3;
      *(int *)(iVar2 + 0xaa) = iVar4 + 0x80;
      *(int *)(iVar2 + 0xae) = iVar12 + (int)ppvVar14;
      piVar3 = piVar3 + 1;
    } while (iVar5 < 0x55);
  }
  local_30._0_1_ = 1;
  if (puVar8 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)((int)puVar8 + 0x12);
  }
  iVar5 = *(int *)((int)param_1 + 0x40e);
  iVar4 = *(int *)(iVar5 + 8);
  piVar3 = operator_new(0xe);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = iVar4;
    *piVar3 = (int)local_28;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar12 = *(int *)(iVar5 + 0xc);
  *(int **)(iVar5 + 8) = piVar3;
  *(int *)(iVar5 + 0xc) = iVar12 + 1;
  if (iVar12 == 0) {
    *(int **)(iVar5 + 4) = piVar3;
  }
  else {
    *(int **)(iVar4 + 8) = piVar3;
  }
  local_28 = operator_new(0x74);
  local_30._0_1_ = 9;
  if (local_28 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    piVar3 = &iStack_48;
    uVar11 = 0;
    uVar6 = (**(code **)(*(int *)param_1[3] + 0x28))(&stack0xffffffc0,piVar3,0);
    iVar5 = (int)param_1 + 0x1a;
    uVar10 = 100;
    uVar13 = FUN_0042b6c9(s_OPTION_SFXVOLUME_0086b780);
    iVar5 = FUN_006ccbb0(iVar9,uVar13,iVar5,uVar10,uVar6,piVar3,uVar11);
  }
  local_30._0_1_ = 1;
  if (iVar5 == 0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)(iVar5 + 0x12);
  }
  iVar5 = *(int *)((int)param_1 + 0x40e);
  iVar4 = *(int *)(iVar5 + 8);
  piVar3 = operator_new(0xe);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = iVar4;
    *piVar3 = (int)local_28;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar12 = *(int *)(iVar5 + 0xc);
  *(int **)(iVar5 + 8) = piVar3;
  *(int *)(iVar5 + 0xc) = iVar12 + 1;
  if (iVar12 == 0) {
    *(int **)(iVar5 + 4) = piVar3;
  }
  else {
    *(int **)(iVar4 + 8) = piVar3;
  }
  local_28 = operator_new(0x74);
  local_30._0_1_ = 10;
  if (local_28 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    piVar3 = &iStack_48;
    uVar11 = 0;
    uVar6 = (**(code **)(*(int *)param_1[3] + 0x28))(&stack0xffffffc0,piVar3,0);
    iVar5 = (int)param_1 + 0x1e;
    uVar10 = 100;
    uVar13 = FUN_0042b6c9(s_OPTION_MUSICVOLUME_0086b76c);
    iVar5 = FUN_006ccbb0(iVar9,uVar13,iVar5,uVar10,uVar6,piVar3,uVar11);
  }
  local_30 = (int *)CONCAT31(local_30._1_3_,1);
  if (iVar5 == 0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)(iVar5 + 0x12);
  }
  iVar5 = *(int *)((int)param_1 + 0x40e);
  iVar4 = *(int *)(iVar5 + 8);
  piVar3 = operator_new(0xe);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = iVar4;
    *piVar3 = (int)local_28;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar9 = *(int *)(iVar5 + 0xc);
  *(int **)(iVar5 + 8) = piVar3;
  *(int *)(iVar5 + 0xc) = iVar9 + 1;
  if (iVar9 == 0) {
    *(int **)(iVar5 + 4) = piVar3;
  }
  else {
    *(int **)(iVar4 + 8) = piVar3;
  }
  ExceptionList = unaff_EBP;
  return param_1;
}


