// FUN_006fd3e0 @ 6fd3e0 size=1276

undefined4 * __thiscall
FUN_006fd3e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_007db4aa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = (undefined4 *)0x0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007f84b4;
  param_1[2] = &PTR_LAB_007f84b0;
  local_4 = (undefined4 *)0x1;
  iVar9 = *(int *)(DAT_00bd1bac + 4);
  iVar10 = *(int *)(DAT_00bd1bac + 8);
  param_1[4] = param_2;
  *(char *)(param_1 + 6) = param_5;
  iVar9 = iVar9 + -0x400 >> 1;
  iVar10 = iVar10 + -0x300 >> 1;
  param_1[5] = param_3;
  *(int *)((int)param_1 + 0x2a) = param_4;
  if (param_5 == '\0') {
    pvVar1 = (void *)(iVar9 + 0x176);
    (**(code **)(**(int **)(param_4 + 8) + 0x18))(pvVar1,iVar10 + 0x131);
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x2a) + 0x18) + 0x18))
              (iVar9 + 0x208,iVar10 + 0x131);
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x2a) + 8) + 0x88) = 0x61;
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x2a) + 0x18) + 0x88) = 0xe;
  }
  else {
    pvVar1 = operator_new(0xaa);
    local_4._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086f6c0,0,0xffffffff);
    }
    *(undefined4 *)((int)param_1 + 0x2e) = uVar2;
    local_4 = (undefined4 *)CONCAT31(local_4._1_3_,1);
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x2e),uVar2);
    iVar7 = **(int **)((int)param_1 + 0x2e);
    iVar3 = FUN_00415bd0(iVar10 + 0x131);
    pvVar1 = (void *)((iVar9 - iVar3 / 2) + 0x1fe);
    (**(code **)(iVar7 + 0x18))();
  }
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  *(undefined4 *)((int)param_1 + 0x1a) = uVar2;
  uVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)((int)param_1 + 0x1e) = uVar2;
  puVar4 = operator_new(0x18);
  pvStack_c._0_1_ = 3;
  local_4 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = DAT_00bd1bac;
    *puVar4 = &PTR_LAB_007e474c;
    puVar5 = operator_new(0x1e);
    pvStack_c._0_1_ = 4;
    if (puVar5 == (undefined4 *)0x0) {
      puVar4[1] = 0;
    }
    else {
      FUN_005c0c70();
      pvStack_c._0_1_ = 5;
      FUN_00418f40();
      *puVar5 = &PTR_FUN_007e36fc;
      *(undefined ***)((int)puVar5 + 0x12) = &PTR_LAB_007e36e8;
      *(undefined ***)((int)puVar5 + 0x1a) = &PTR_LAB_007e36e4;
      puVar4[1] = puVar5;
    }
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  param_1[3] = puVar4;
  piVar6 = (int *)FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,0,0);
  *(int *)((int)piVar6 + 0xaa) = iVar9 + 0xf6;
  *(int *)((int)piVar6 + 0xae) = iVar10 + 0x9f;
  *(undefined1 *)(piVar6 + 0x1a) = 1;
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)((int)piVar6 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar6 + 0x60))();
    *(undefined1 *)((int)piVar6 + 0x86) = 1;
  }
  piVar6 = (int *)FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,1,0);
  *(int *)((int)piVar6 + 0xaa) = iVar9 + 0xf6;
  *(int *)((int)piVar6 + 0xae) = iVar10 + 199;
  *(undefined1 *)(piVar6 + 0x1a) = 1;
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)((int)piVar6 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar6 + 0x60))();
    *(undefined1 *)((int)piVar6 + 0x86) = 1;
  }
  piVar6 = (int *)FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,2,0);
  *(int *)((int)piVar6 + 0xaa) = iVar9 + 0xf6;
  *(int *)((int)piVar6 + 0xae) = iVar10 + 0xef;
  *(undefined1 *)(piVar6 + 0x1a) = 1;
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)((int)piVar6 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar6 + 0x60))();
    *(undefined1 *)((int)piVar6 + 0x86) = 1;
  }
  piVar6 = (int *)FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,3,0);
  *(int *)((int)piVar6 + 0xaa) = iVar9 + 0xf6;
  *(int *)((int)piVar6 + 0xae) = iVar10 + 0x117;
  *(undefined1 *)(piVar6 + 0x1a) = 1;
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)((int)piVar6 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar6 + 0x60))();
    *(undefined1 *)((int)piVar6 + 0x86) = 1;
  }
  piVar6 = operator_new(0x72);
  pvStack_c._0_1_ = 6;
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_00434930(0x142,0x28,0,0);
    *piVar6 = (int)&PTR_FUN_007f846c;
    *(undefined ***)((int)piVar6 + 0x12) = &PTR_LAB_007f8458;
    *(undefined ***)((int)piVar6 + 0x1a) = &PTR_LAB_007f8454;
    *(undefined ***)((int)piVar6 + 0x1e) = &PTR_LAB_007f8450;
  }
  *(int **)((int)param_1 + 0x22) = piVar6;
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  (**(code **)(*piVar6 + 0x34))(iVar9 + 0x17a,iVar10 + 0xa1);
  uVar2 = FUN_0042b6c9(s_FEVIC_STANDARD_DESC_0086ff48);
  FUN_004361a0(uVar2);
  FUN_0043fcc0(0);
  uVar2 = FUN_0042b6c9(s_FEVIC_STANDARD_DESC_0086ff48);
  iVar7 = FUN_004129c4(uVar2);
  if (0x142 < iVar7) {
    iVar7 = 0x142;
  }
  pvVar8 = operator_new(0x56);
  if (pvVar8 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar11 = &DAT_0086ff40;
    iVar3 = DAT_00bd1bac;
    uVar2 = FUN_004136a0(s_eurostilecond18bold_bmp_0085b444);
    uVar2 = FUN_00437e60(iVar7 + 0x18a,0x9d,0x40,4,uVar2,iVar3,puVar11);
  }
  *(undefined4 *)param_1[4] = uVar2;
  FUN_00438950(&DAT_0083baf4);
  *(undefined1 *)(*(int *)param_1[4] + 0x51) = 1;
  iVar3 = *(int *)param_1[4];
  *(undefined1 *)(iVar3 + 0x39) = 1;
  *(undefined1 *)(iVar3 + 0x3a) = 1;
  pvVar8 = operator_new(0x7e);
  if (pvVar8 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00414c80(s_gfx_interface_frontend_editbox_b_0086ff1c);
  }
  *(int **)((int)param_1 + 0x26) = piVar6;
  (**(code **)(*piVar6 + 0x18))(iVar9 + 0x184 + iVar7,iVar10 + 0x9b);
  (**(code **)(**(int **)((int)param_1 + 0x26) + 0x34))(2);
  ExceptionList = pvVar1;
  return param_1;
}


