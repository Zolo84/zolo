// FUN_006f2420 @ 6f2420 size=1664

undefined4 * __thiscall FUN_006f2420(undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  void *unaff_EDI;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  _SYSTEMTIME local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da98b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee230(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007f81ec;
  param_1[2] = &PTR_LAB_007f81e8;
  if (param_3 == 0) {
    param_1[0x82] = 0;
  }
  else {
    param_1[0x82] = param_3;
  }
  *(undefined4 *)((int)param_1 + 0x1ea) = 0;
  GetSystemTime(&local_20);
  DAT_00d432ca = (CONCAT11(local_20.wDayOfWeek._1_1_,(undefined1)local_20.wDayOfWeek) + 1) *
                 (local_20.wHour + 1) * (local_20.wMinute + 1) * (local_20.wSecond + 1) *
                 (local_20.wMilliseconds + 1) * (uint)local_20.wYear *
                 (CONCAT12((undefined1)local_20.wDayOfWeek,local_20.wMonth) & 0xffff) *
                 (uint)local_20.wDay;
  puVar5 = (undefined4 *)((int)param_1 + 0xbe);
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  iVar8 = 7;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(undefined4 *)((int)param_1 + 0xb6) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  do {
    pvVar1 = operator_new(0xaa);
    local_4._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086f6c0,0,0xffffffff);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *puVar5 = uVar2;
    FUN_00415d40();
    (**(code **)(*(int *)*puVar5 + 0x18))(0xffffff9c,0xffffff9c);
    puVar5 = puVar5 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *(undefined4 *)((int)param_1 + 0x1e2) = 0;
  *(undefined4 *)((int)param_1 + 0xda) = 0;
  *(undefined4 *)((int)param_1 + 0xde) = 0;
  puVar5 = (undefined4 *)((int)param_1 + 0xe2);
  for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_OPTIONS_0086f740,*(undefined4 *)((int)param_1 + 0xbe),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0xca),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0xce),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0xd2),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_START_0086f734,*(undefined4 *)((int)param_1 + 0xc2),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_ACCEPT_0086f724,*(undefined4 *)((int)param_1 + 0xc6),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_CANCEL_0086f714,*(undefined4 *)((int)param_1 + 0xd6),uVar2);
  iVar8 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  iVar9 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  (**(code **)(**(int **)((int)param_1 + 0xbe) + 0x18))(iVar8 + 0x220,iVar9 + 0x2c0);
  *(undefined1 *)(*(int *)((int)param_1 + 0xbe) + 0xa2) = 0;
  (**(code **)(**(int **)((int)param_1 + 0xca) + 0x18))(iVar8 + 0x2c0,local_4);
  (**(code **)(**(int **)((int)param_1 + 0xc2) + 0x18))(iVar8 + 0x360,pvStack_c);
  pvVar1 = operator_new(0x72);
  local_20.wSecond = (WORD)pvVar1;
  local_20.wMilliseconds = (WORD)((uint)pvVar1 >> 0x10);
  local_20.wDayOfWeek._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00434930(0x2a8,0xa0,0,0);
  }
  *(int **)((int)param_1 + 0xba) = piVar3;
  local_20.wDayOfWeek._0_1_ = 0;
  (**(code **)(*piVar3 + 0x34))(iVar8 + 0x122,iVar9 + 0x1d9);
  pvVar1 = operator_new(0x56);
  local_20.wDayOfWeek._0_1_ = SUB41(pvVar1,0);
  local_20.wDayOfWeek._1_1_ = (undefined1)((uint)pvVar1 >> 8);
  local_20.wDay = (WORD)((uint)pvVar1 >> 0x10);
  if (pvVar1 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar10 = 0;
    iVar4 = DAT_00bd1bac;
    uVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar4 = FUN_00437e60(iVar8 + 0x122,iVar9 + 0x288,0x21c,0x100,uVar2,iVar4,uVar10);
  }
  *(int *)((int)param_1 + 0x9a) = iVar4;
  *(undefined2 *)(iVar4 + 0x54) = 0xffff;
  pvVar1 = operator_new(0x72);
  local_20.wDayOfWeek._0_1_ = SUB41(pvVar1,0);
  local_20.wDayOfWeek._1_1_ = (undefined1)((uint)pvVar1 >> 8);
  local_20.wDay = (WORD)((uint)pvVar1 >> 0x10);
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00434930(200,300,0,0);
    piVar3 = (int *)CONCAT22(local_20.wDay,
                             CONCAT11(local_20.wDayOfWeek._1_1_,(undefined1)local_20.wDayOfWeek));
    *piVar3 = (int)&PTR_FUN_007f81a4;
    *(undefined ***)((int)piVar3 + 0x12) = &PTR_LAB_007f8190;
    *(undefined ***)((int)piVar3 + 0x1a) = &PTR_LAB_007f818c;
    *(undefined ***)((int)piVar3 + 0x1e) = &PTR_LAB_007f8188;
  }
  *(int **)((int)param_1 + 0xaa) = piVar3;
  (**(code **)(*piVar3 + 0x34))(iVar8 + 0x28,iVar9 + 0x50);
  FUN_006ec760(s_scenarios_0086f2e8,&DAT_0086b688,1);
  *(undefined1 *)(*(int *)((int)param_1 + 0xaa) + 0x5e) = 0;
  FUN_006ec760(s_scenarios_save_games_0086b670,&DAT_0086b688,0);
  *(undefined4 *)((int)param_1 + 0x1e6) = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)((int)param_1 + 0x1f6) = 0;
  *(undefined1 *)((int)param_1 + 0x1f7) = 0;
  *(undefined4 *)((int)param_1 + 0x1ee) = 0xffffffff;
  puVar5 = operator_new(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar11 = puVar5;
    puVar6 = (undefined4 *)FUN_00581e60();
    uVar2 = *puVar6;
    uVar10 = puVar6[1];
    puVar7 = operator_new(0x1e);
    if (puVar7 == (undefined2 *)0x0) {
      puVar7 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = 0;
    }
    puVar5[1] = puVar7;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 1;
    *puVar5 = &PTR_FUN_007eae68;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    *puVar7 = 0xd;
    iVar9 = puVar5[1];
    *(undefined4 *)(iVar9 + 8) = DAT_0088f29c;
    *(undefined2 *)(iVar9 + 0xc) = DAT_0088f2a0;
    iVar9 = puVar5[1];
    *(uint *)(iVar9 + 2) = (uint)puVar11 & 0xff000000;
    *(undefined2 *)(iVar9 + 6) = 0;
    *puVar5 = &PTR_FUN_007eae48;
    *(undefined4 *)(puVar5[1] + 0xe) = 0;
    *(undefined4 *)(puVar5[1] + 0x12) = 0;
    iVar9 = puVar5[1];
    *(undefined4 *)(iVar9 + 0x16) = uVar2;
    *(undefined4 *)(iVar9 + 0x1a) = uVar10;
  }
  FUN_00565c50(puVar5);
  pvVar1 = operator_new(0x1e);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006fa5d0(*(undefined4 *)((int)param_1 + 0xd2),*(undefined4 *)((int)param_1 + 0xc6));
  }
  param_1[0x7f] = uVar2;
  pvVar1 = operator_new(0xc2);
  param_1[0x80] = pvVar1;
  pvVar1 = operator_new(0x72);
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar9 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    piVar3 = (int *)FUN_00434930(0x82,*(int *)(iVar9 + 0x10) * 0x10 + 1,0,0);
  }
  param_1[0x81] = piVar3;
  (**(code **)(*piVar3 + 0x34))(iVar8 + 0x28,CONCAT22(local_20.wMonth,local_20.wYear) + 0x1f8);
  pvVar1 = operator_new(0xaa);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086f6c0,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x1f2) = uVar2;
  FUN_00415d40();
  (**(code **)(**(int **)((int)param_1 + 0x1f2) + 0x18))
            (iVar8 + 0x48,CONCAT22(local_20.wMonth,local_20.wYear) + 0x2d4);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BAN_0086f858,*(undefined4 *)((int)param_1 + 0x1f2),uVar2);
  puVar5 = (undefined4 *)((int)param_1 + 0x16);
  for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  ExceptionList = unaff_EDI;
  return param_1;
}


