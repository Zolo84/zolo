// FUN_005deff0 @ 5deff0 size=1851

undefined4 * __thiscall FUN_005deff0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *unaff_EBX;
  undefined1 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_007cdf6f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0061e1d0(param_2);
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((int)param_1 + 0xfe) = 0;
  *param_1 = &PTR_FUN_007ed1d0;
  param_1[2] = &PTR_LAB_007ed1cc;
  local_4 = (undefined4 *)0x0;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed1c8;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe0,0x11a,0,0);
  }
  local_4._0_1_ = 0;
  param_1[0x3e] = uVar2;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0xe0,100,0,0);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x18e) = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_reorg_bmp_0085b720,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x12a) = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00433570(s_gfx_interface_button_unload_bmp_0085bc08,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0x126) = iVar3;
  local_4._0_1_ = 0;
  *(undefined4 *)(iVar3 + 0x88) = 0x75;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_return_bmp_0085bbe8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x12e) = uVar2;
  *(undefined4 *)((int)param_1 + 0x136) = 0;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_hq_symbol_bmp_0085bbcc);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x156) = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00414c80(s_gfx_interface_supply_symbol_bmp_0085bbac);
  }
  *(int **)((int)param_1 + 0x15a) = piVar4;
  local_4 = (undefined4 *)((uint)local_4._1_3_ << 8);
  (**(code **)(*piVar4 + 0x34))(2);
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_digin_bmp_0085bb94);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x15e) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_disorganized__00859e24);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x186) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_icon_locked_bmp_00859de4);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x152) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_plane_on_boat_bmp_0085bb74);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x166) = uVar2;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_soldiers_on_boat_b_0085bb50);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x162) = uVar2;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0xd;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_paratrooper_0085bb28,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x13a) = uVar2;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0xe;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_paratrooper_0085bb28,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x13e) = uVar2;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0xf;
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00433570(s_gfx_interface_button_convoy_bmp_0085b6bc,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0x142) = iVar3;
  puStack_8._0_1_ = 0;
  *(undefined4 *)(iVar3 + 0x88) = 0x6c;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x10;
  if (pvVar1 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00414c80(s_gfx_interface_oil_no_oil_bmp_0085b9c0);
  }
  *(int **)((int)param_1 + 0x16a) = piVar4;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  (**(code **)(*piVar4 + 0x34))(2);
  uVar2 = FUN_00413d60(s_oil_no_oil_palette_bmp_0085b9a8);
  FUN_00415f20(uVar2);
  *(undefined1 *)(*(int *)((int)param_1 + 0x156) + 0x68) = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0x15a) + 0x68) = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0x15e) + 0x68) = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0x186) + 0x68) = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0x152) + 0x68) = 1;
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 0x11;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00415020();
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x172) = uVar2;
  local_4 = operator_new(0x56);
  pvStack_c._0_1_ = 0x12;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_0088ebf8;
    uVar2 = DAT_00bd1bac;
    uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar2 = FUN_00437e60(0,0,0xa0,0x3f,uVar5,uVar2,puVar7);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x18a) = uVar2;
  FUN_00438950(&DAT_0083bf04);
  local_4 = operator_new(0xaa);
  pvStack_c._0_1_ = 0x13;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_prioritized_0085bb00,0,0xffffffff);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x112) = uVar2;
  local_4 = operator_new(0xaa);
  pvStack_c._0_1_ = 0x14;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_reinforce2__0085badc,0,0xffffffff);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x146) = uVar2;
  local_4 = operator_new(0xaa);
  pvStack_c._0_1_ = 0x15;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_upgrade_bmp_0085bab8,0,0xffffffff);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x14a) = uVar2;
  local_4 = operator_new(0xaa);
  pvStack_c._0_1_ = 0x16;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_button_offensive_b_0085b6dc,0,0xffffffff);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x116) = uVar2;
  puVar6 = operator_new(0xaa);
  pvStack_c._0_1_ = 0x17;
  local_4 = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_00433570(s_gfx_interface_atrition_bmp_0085ba9c,0,0xffffffff);
    pvStack_c._0_1_ = 0x18;
    *puVar6 = &PTR_FUN_007ed164;
    puVar6[2] = &PTR_LAB_007ed160;
    *(undefined ***)((int)puVar6 + 0x7e) = &PTR_LAB_007ed15c;
    FUN_00415b90(1);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 **)((int)param_1 + 0x16e) = puVar6;
  uVar2 = FUN_00413d60(s_hand_bmp_0085ba90);
  FUN_00415f20(uVar2);
  local_4 = operator_new(0xaa);
  pvStack_c._0_1_ = 0x19;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_plate_task_bmp_008599f0,0,0xffffffff);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x10e) = uVar2;
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 0x1a;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_unit_bmp_0085ba74);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x102) = uVar2;
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 0x1b;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_bg_unit_extra_bmp_0085ba54);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x106) = uVar2;
  *(undefined4 *)((int)param_1 + 0x10a) = 0;
  *(undefined4 *)((int)param_1 + 0x11a) = 0;
  *(undefined4 *)((int)param_1 + 0x11e) = 0;
  *(undefined4 *)((int)param_1 + 0x122) = 0;
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 0x1c;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_prioritized_bmp_00859da0);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x17a) = uVar2;
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 0x1d;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_reinforce_bmp_00859d84);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x182) = uVar2;
  local_4 = operator_new(0x7e);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x1e);
  if (local_4 == (void *)0x0) {
    *(undefined4 *)((int)param_1 + 0x17e) = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_upgrade_bmp_00859d68);
    *(undefined4 *)((int)param_1 + 0x17e) = uVar2;
  }
  ExceptionList = unaff_EBX;
  return param_1;
}


