// FUN_006e46a0 @ 6e46a0 size=1113

undefined4 * __thiscall FUN_006e46a0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  void *pvVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da092;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00441b30(param_3,300,0x9b,8);
  *param_1 = &PTR_FUN_007f7ed8;
  param_1[2] = &PTR_LAB_007f7ed4;
  local_4 = 0;
  param_2 = param_2 * 0x1a;
  param_1[0x1f] = &DAT_00d36350 + param_2;
  (&DAT_00d3635d)[param_2] = (&DAT_00d3635b)[param_2];
  *(undefined1 *)(param_1[0x1f] + 0xc) = *(undefined1 *)(param_1[0x1f] + 10);
  *(undefined1 *)(param_1[0x1f] + 0x10) = *(undefined1 *)(param_1[0x1f] + 0xf);
  iVar10 = param_1[9];
  iVar1 = param_1[8];
  puVar2 = operator_new(0x18);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = DAT_00bd1bac;
    *puVar2 = &PTR_LAB_007e474c;
    puVar3 = operator_new(0x1e);
    if (puVar3 == (undefined4 *)0x0) {
      puVar2[1] = 0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
      *puVar3 = &PTR_LAB_007e36b4;
      local_4._0_1_ = 3;
      FUN_00418f40();
      *puVar3 = &PTR_FUN_007e36fc;
      *(undefined ***)((int)puVar3 + 0x12) = &PTR_LAB_007e36e8;
      *(undefined ***)((int)puVar3 + 0x1a) = &PTR_LAB_007e36e4;
      puVar2[1] = puVar3;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x16] = puVar2;
  FUN_0043ff60(param_1[4]);
  if (*(int *)(param_1[0x1f] + 4) == 4) {
    param_1[0x1b] = 0;
    iVar4 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,2,0);
    param_1[0x1c] = iVar4;
  }
  else {
    iVar4 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,1,0);
    param_1[0x1b] = iVar4;
    *(undefined4 *)(iVar4 + 0xaa) = 0x10;
    *(undefined4 *)(iVar4 + 0xae) = 0x38;
    *(undefined1 *)(param_1[0x1b] + 0x68) = 1;
    iVar4 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,2,0);
    param_1[0x1c] = iVar4;
  }
  *(undefined4 *)(iVar4 + 0xaa) = 0x10;
  *(undefined4 *)(iVar4 + 0xae) = 0x49;
  *(undefined1 *)(param_1[0x1c] + 0x68) = 1;
  iVar4 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,3,0);
  param_1[0x1d] = iVar4;
  *(undefined4 *)(iVar4 + 0xaa) = 0x10;
  *(undefined4 *)(iVar4 + 0xae) = 0x5a;
  *(undefined1 *)(param_1[0x1d] + 0x68) = 1;
  iVar4 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,4,0);
  param_1[0x1e] = iVar4;
  *(undefined4 *)(iVar4 + 0xaa) = 0x10;
  *(undefined4 *)(iVar4 + 0xae) = 0x6b;
  *(undefined1 *)(param_1[0x1e] + 0x68) = 1;
  uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uVar6 = FUN_0042b6c9(s_DEFAULT_0086d558);
  FUN_004129c4(uVar6);
  uVar6 = FUN_0042b6c9(s_CANCEL_0083bafc);
  FUN_004129c4(uVar6);
  pvVar7 = operator_new(0x1aa);
  local_4._0_1_ = 4;
  if (pvVar7 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar11 = 0x40;
    uVar6 = uVar5;
    uVar8 = FUN_0042b6c9(s_CANCEL_0083bafc);
    uVar6 = FUN_0043acc0(uVar8,uVar6,uVar11);
  }
  local_4._0_1_ = 0;
  param_1[0x18] = uVar6;
  pvVar7 = operator_new(0x1aa);
  local_4._0_1_ = 5;
  if (pvVar7 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar11 = 0x40;
    uVar6 = uVar5;
    uVar8 = FUN_0042b6c9(&DAT_00839384);
    uVar6 = FUN_0043acc0(uVar8,uVar6,uVar11);
  }
  local_4._0_1_ = 0;
  param_1[0x17] = uVar6;
  pvVar7 = operator_new(0x1aa);
  local_4._0_1_ = 6;
  if (pvVar7 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    uVar8 = 0x40;
    uVar6 = FUN_0042b6c9(s_DEFAULT_0086d558);
    piVar9 = (int *)FUN_0043acc0(uVar6,uVar5,uVar8);
  }
  param_1[0x19] = piVar9;
  local_4 = (uint)local_4._1_3_ << 8;
  pvVar7 = (void *)(iVar10 + 0x6e);
  pvVar12 = pvVar7;
  (**(code **)(*piVar9 + 0x18))(iVar1 + 0x42);
  (**(code **)(*(int *)param_1[0x18] + 0x18))(iVar1 + 0x8c,pvVar7);
  (**(code **)(*(int *)param_1[0x17] + 0x18))(iVar1 + 0xd4,pvVar7);
  *(undefined4 *)(param_1[0x17] + 0x88) = 0xd;
  *(undefined4 *)(param_1[0x18] + 0x88) = 0xe;
  FUN_00415d30(param_1[4]);
  FUN_00415d30(param_1[4]);
  FUN_00415d30(param_1[4]);
  FUN_006d4270(param_1);
  iVar10 = param_1[0x1f];
  if (*(char *)(iVar10 + 0xf) == '\0') {
    if (*(char *)(iVar10 + 0xb) == '\0') {
      uVar5 = 1;
    }
    else if (*(char *)(iVar10 + 10) == '\0') {
      uVar5 = 2;
    }
    else {
      uVar5 = 3;
    }
  }
  else {
    uVar5 = 4;
  }
  FUN_0043fcc0(uVar5);
  pvVar7 = operator_new(0x72);
  if (pvVar7 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00434930(0x11c,0x38,0,0);
  }
  param_1[0x1a] = uVar5;
  FUN_007a630a(&DAT_00d36218,s__s_SETUP_0086d54c,*(undefined4 *)(param_1[0x1f] + 0x12));
  *(undefined1 *)(param_1[0x1a] + 0x5c) = 1;
  FUN_00434f70(param_1[4]);
  uVar6 = 0xffff;
  uVar5 = FUN_0042b6c9(&DAT_00d36218);
  FUN_004361c0(uVar5,uVar6);
  iVar10 = (**(code **)(*(int *)param_1[0x1a] + 4))();
  if (iVar10 == 1) {
    (**(code **)(*(int *)param_1[0x1a] + 0x34))(8,0x22);
  }
  else {
    (**(code **)(*(int *)param_1[0x1a] + 0x34))(8,0x1b);
  }
  ExceptionList = pvVar12;
  return param_1;
}


