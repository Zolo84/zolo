// FUN_006f00e0 @ 6f00e0 size=1229

undefined4 * __thiscall FUN_006f00e0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da7a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee230(param_2);
  local_4 = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  FUN_0040f510();
  param_1[0xe5] = 0;
  param_1[0x5e] = &PTR_LAB_007f8184;
  param_1[0xe6] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_007f8164;
  param_1[2] = &PTR_LAB_007f8160;
  if (param_3 == 0) {
    param_1[0xe9] = 0;
  }
  else {
    param_1[0xe9] = param_3;
  }
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  puVar6 = (undefined4 *)((int)param_1 + 0x3e);
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  iVar10 = 7;
  do {
    pvVar1 = operator_new(0xaa);
    local_4._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086f6c0,0,0xffffffff);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar6 = uVar2;
    FUN_00415d40();
    (**(code **)(*(int *)*puVar6 + 0x18))(0xffffff9c,0xffffff9c);
    puVar6 = puVar6 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  *(undefined4 *)((int)param_1 + 0x162) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  puVar6 = (undefined4 *)((int)param_1 + 0x62);
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_OPTIONS_0086f740,*(undefined4 *)((int)param_1 + 0x3e),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x4a),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x4e),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x52),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_START_0086f734,*(undefined4 *)((int)param_1 + 0x42),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_ACCEPT_0086f724,*(undefined4 *)((int)param_1 + 0x46),uVar2);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_CANCEL_0086f714,*(undefined4 *)((int)param_1 + 0x56),uVar2);
  iVar11 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  iVar10 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  pvVar1 = (void *)(iVar10 + 0x2c0);
  (**(code **)(**(int **)((int)param_1 + 0x3e) + 0x18))(iVar11 + 0x220);
  *(undefined1 *)(*(int *)((int)param_1 + 0x3e) + 0xa2) = 0;
  (**(code **)(**(int **)((int)param_1 + 0x4a) + 0x18))(iVar11 + 0x2c0,local_4);
  pvVar9 = pvStack_c;
  (**(code **)(**(int **)((int)param_1 + 0x42) + 0x18))(iVar11 + 0x360,pvStack_c);
  pvVar3 = operator_new(0x72);
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00434930(0x2a8,0xa0,0,0);
  }
  *(int **)((int)param_1 + 0x3a) = piVar4;
  (**(code **)(*piVar4 + 0x34))(iVar11 + 0x122,iVar10 + 0x1d9);
  pvVar3 = operator_new(0x56);
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar12 = 0;
    iVar5 = DAT_00bd1bac;
    uVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar2 = FUN_00437e60(iVar11 + 0x122,iVar10 + 0x288,0x21c,0x100,uVar2,iVar5,uVar12);
  }
  *(undefined4 *)((int)param_1 + 0x1a) = uVar2;
  FUN_004388d0();
  *(undefined2 *)(*(int *)((int)param_1 + 0x1a) + 0x54) = 0xffff;
  pvVar3 = operator_new(0x72);
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    piVar4 = (int *)FUN_00434930(0x82,*(int *)(iVar5 + 0x10) * 0x10 + 1,0,0);
  }
  param_1[0xe7] = piVar4;
  (**(code **)(*piVar4 + 0x34))(iVar11 + 0x28,iVar10 + 0x1f8);
  param_1[0xe8] = 0;
  *(undefined4 *)((int)param_1 + 0x166) = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)((int)param_1 + 0x16e) = 0;
  *(undefined1 *)((int)param_1 + 0x16f) = 0;
  *(undefined4 *)((int)param_1 + 0x16a) = 0xffffffff;
  puVar6 = operator_new(0xc);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_00581e60();
    uVar2 = *puVar7;
    uVar12 = puVar7[1];
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
    iVar10 = puVar6[1];
    *(undefined4 *)(iVar10 + 8) = DAT_0088f29c;
    *(undefined2 *)(iVar10 + 0xc) = DAT_0088f2a0;
    iVar10 = puVar6[1];
    *(uint *)(iVar10 + 2) = (uint)pvVar9 & 0xff000000;
    *(undefined2 *)(iVar10 + 6) = 0;
    *puVar6 = &PTR_FUN_007eae48;
    *(undefined4 *)(puVar6[1] + 0xe) = 0;
    *(undefined4 *)(puVar6[1] + 0x12) = 0;
    iVar10 = puVar6[1];
    *(undefined4 *)(iVar10 + 0x16) = uVar2;
    *(undefined4 *)(iVar10 + 0x1a) = uVar12;
  }
  FUN_00565c50(puVar6);
  pvVar9 = operator_new(0x1e);
  if (pvVar9 == (void *)0x0) {
    param_1[0x5d] = 0;
  }
  else {
    uVar2 = FUN_006fa5d0(*(undefined4 *)((int)param_1 + 0x52),*(undefined4 *)((int)param_1 + 0x46));
    param_1[0x5d] = uVar2;
  }
  ExceptionList = pvVar1;
  return param_1;
}


