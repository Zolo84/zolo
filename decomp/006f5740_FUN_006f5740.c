// FUN_006f5740 @ 6f5740 size=1240

undefined4 * __thiscall FUN_006f5740(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  int unaff_EBP;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int local_24;
  uint local_1c;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dac85;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee230(param_2);
  *param_1 = &PTR_FUN_007f827c;
  param_1[2] = &PTR_LAB_007f8278;
  piVar5 = (int *)((int)param_1 + 0x36);
  local_4 = 0;
  iVar10 = *(int *)(DAT_00bd1bac + 4);
  iVar1 = *(int *)(DAT_00bd1bac + 8);
  local_24 = 7;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  piVar9 = piVar5;
  do {
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086f6c0,0,0xffffffff);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *piVar9 = iVar3;
    FUN_00415d40();
    (**(code **)(*(int *)*piVar9 + 0x18))(0xffffff9c,0xffffff9c);
    piVar9 = piVar9 + 1;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  *(undefined4 *)((int)param_1 + 0x15a) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  puVar6 = (undefined4 *)((int)param_1 + 0x5a);
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_OPTIONS_0086f740,*piVar5,uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x42),uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x46),uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x4a),uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_START_0086f734,*(undefined4 *)((int)param_1 + 0x3a),uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_ACCEPT_0086f724,*(undefined4 *)((int)param_1 + 0x3e),uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_CANCEL_0086f714,*(undefined4 *)((int)param_1 + 0x4e),uVar4);
  iVar1 = (iVar1 + -0x300 >> 1) + 0x2c0;
  (**(code **)(*(int *)*piVar5 + 0x18))((iVar10 + -0x400 >> 1) + 0x220,iVar1);
  *(undefined1 *)(*piVar5 + 0xa2) = 0;
  (**(code **)(**(int **)((int)param_1 + 0x42) + 0x18))(unaff_EBP + 0x2c0,iVar1);
  iVar10 = unaff_EBP + 0x360;
  (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x18))(iVar10,iVar1);
  piVar5 = operator_new(0x72);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_00434930(200,0x15e,0,0);
    *piVar5 = (int)&PTR_FUN_007f81a4;
    *(undefined ***)((int)piVar5 + 0x12) = &PTR_LAB_007f8190;
    *(undefined ***)((int)piVar5 + 0x1a) = &PTR_LAB_007f818c;
    *(undefined ***)((int)piVar5 + 0x1e) = &PTR_LAB_007f8188;
  }
  *(int **)((int)param_1 + 0x26) = piVar5;
  local_1c = (uint)pvVar2 & 0xffffff00;
  (**(code **)(*piVar5 + 0x34))(unaff_EBP + 0x28,iStack_14 + 0x50);
  FUN_006ec760(s_scenarios_0086f2e8,&DAT_0086b688,1);
  *(undefined1 *)(*(int *)((int)param_1 + 0x26) + 0x5e) = 0;
  piVar5 = operator_new(0x72);
  if (piVar5 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar12 = piVar5;
    FUN_00434930(200,0xd6,0,0);
    *piVar5 = (int)&PTR_FUN_007f81a4;
    *(undefined ***)((int)piVar5 + 0x12) = &PTR_LAB_007f8190;
    *(undefined ***)((int)piVar5 + 0x1a) = &PTR_LAB_007f818c;
    *(undefined ***)((int)piVar5 + 0x1e) = &PTR_LAB_007f8188;
    piVar9 = piVar5;
    piVar5 = piVar12;
  }
  *(int **)((int)param_1 + 0x2a) = piVar9;
  (**(code **)(*piVar9 + 0x34))(unaff_EBP + 0x28,local_1c + 0x1f8);
  FUN_006ec760(s_scenarios_save_games_0086b670,&DAT_0086b688,0);
  *(undefined1 *)(*(int *)((int)param_1 + 0x2a) + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x15e) = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)((int)param_1 + 0x166) = 0;
  *(undefined1 *)((int)param_1 + 0x167) = 0;
  *(undefined4 *)((int)param_1 + 0x162) = 0xffffffff;
  puVar6 = operator_new(0xc);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar11 = puVar6;
    puVar7 = (undefined4 *)FUN_00581e60();
    piVar5 = (int *)*puVar7;
    uVar4 = puVar7[1];
    puVar8 = operator_new(0x1e);
    if (puVar8 == (undefined2 *)0x0) {
      puVar8 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar8[4] = 0;
      *(undefined4 *)(puVar8 + 5) = 0;
    }
    puVar6[1] = puVar8;
    *(undefined1 *)(puVar6 + 2) = 0;
    *(undefined1 *)((int)puVar6 + 9) = 1;
    *puVar6 = &PTR_FUN_007eae68;
    *(undefined1 *)((int)puVar6 + 10) = 0;
    *puVar8 = 0xd;
    iVar1 = puVar6[1];
    *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
    *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
    iVar1 = puVar6[1];
    *(uint *)(iVar1 + 2) = (uint)puVar11 & 0xff000000;
    *(undefined2 *)(iVar1 + 6) = 0;
    *puVar6 = &PTR_FUN_007eae48;
    *(undefined4 *)(puVar6[1] + 0xe) = 0;
    *(undefined4 *)(puVar6[1] + 0x12) = 0;
    iVar1 = puVar6[1];
    *(int **)(iVar1 + 0x16) = piVar5;
    *(undefined4 *)(iVar1 + 0x1a) = uVar4;
  }
  FUN_00565c50(puVar6);
  pvVar2 = operator_new(0x1e);
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_006fa5d0(*(undefined4 *)((int)param_1 + 0x4a),*(undefined4 *)((int)param_1 + 0x3e));
  }
  param_1[0x5b] = uVar4;
  pvVar2 = operator_new(0x72);
  if (pvVar2 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_00434930(0x2a8,0xa0,0,0);
  }
  param_1[0x5c] = piVar9;
  (**(code **)(*piVar9 + 0x34))(iVar10 + 0x122,0x1db);
  pvVar2 = operator_new(0xc2);
  param_1[0x5d] = pvVar2;
  ExceptionList = piVar5;
  return param_1;
}


