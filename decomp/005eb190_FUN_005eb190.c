// FUN_005eb190 @ 5eb190 size=2369

undefined4 * __thiscall FUN_005eb190(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ce939;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0061e1d0(param_2);
  *param_1 = &PTR_FUN_007ed54c;
  param_1[2] = &PTR_LAB_007ed548;
  local_4 = 0;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ed544;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00414c80(s_gfx_interface_points_bmp_0085d0e8);
  }
  param_1[0x30] = piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar2 + 0x34))(10);
  uVar3 = FUN_00413d60(s_points_bmp_0085d0dc);
  FUN_00415f20(uVar3);
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_ill_prov_overlay_b_0085d0b8);
  }
  puStack_8._0_1_ = 0;
  param_1[0x31] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00415020();
  }
  puStack_8._0_1_ = 0;
  param_1[0x32] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_airbase_bmp_0085d094);
  }
  puStack_8._0_1_ = 0;
  param_1[0x3d] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_navalbase_b_0085d070);
  }
  puStack_8._0_1_ = 0;
  param_1[0x3e] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_radar_bmp_0085d050);
  }
  puStack_8._0_1_ = 0;
  param_1[0x3f] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_rocket_bmp_0085d030);
  }
  puStack_8._0_1_ = 0;
  param_1[0x40] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_nuclear_bmp_0085d00c);
  }
  param_1[0x41] = uVar3;
  puStack_8._0_1_ = 0;
  *(undefined1 *)(param_1[0x3d] + 0x68) = 1;
  *(undefined1 *)(param_1[0x3e] + 0x68) = 1;
  *(undefined1 *)(param_1[0x3f] + 0x68) = 1;
  *(undefined1 *)(param_1[0x40] + 0x68) = 1;
  *(undefined1 *)(param_1[0x41] + 0x68) = 1;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_aa_bmp_0085cff0);
  }
  puStack_8._0_1_ = 0;
  param_1[0x33] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_lf_bmp_0085cfd4);
  }
  puStack_8._0_1_ = 0;
  param_1[0x34] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_cf_bmp_0085cfb8);
  }
  puStack_8._0_1_ = 0;
  param_1[0x36] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_ic_bmp_0085cf9c);
  }
  puStack_8._0_1_ = 0;
  param_1[0x35] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0xd;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_steel_bmp_0085cf7c);
  }
  puStack_8._0_1_ = 0;
  param_1[0x48] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0xe;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_oil_bmp_0085cf60);
  }
  puStack_8._0_1_ = 0;
  param_1[0x49] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0xf;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_rubber_bmp_0085cf40);
  }
  puStack_8._0_1_ = 0;
  param_1[0x4a] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x10;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_coal_bmp_0085cf24);
  }
  puStack_8._0_1_ = 0;
  param_1[0x4b] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x11;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_res_4_bmp_0085cf0c);
  }
  param_1[0x37] = uVar3;
  puStack_8._0_1_ = 0;
  *(undefined1 *)(param_1[0x33] + 0x68) = 1;
  *(undefined1 *)(param_1[0x34] + 0x68) = 1;
  *(undefined1 *)(param_1[0x36] + 0x68) = 1;
  *(undefined1 *)(param_1[0x35] + 0x68) = 1;
  *(undefined1 *)(param_1[0x48] + 0x68) = 1;
  *(undefined1 *)(param_1[0x49] + 0x68) = 1;
  *(undefined1 *)(param_1[0x4a] + 0x68) = 1;
  *(undefined1 *)(param_1[0x4b] + 0x68) = 1;
  *(undefined1 *)(param_1[0x37] + 0x68) = 1;
  pvVar1 = operator_new(0x72);
  puStack_8._0_1_ = 0x12;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0xe6,0x10c,0,0);
  }
  puStack_8._0_1_ = 0;
  param_1[0x2f] = uVar3;
  pvVar1 = operator_new(0x72);
  puStack_8._0_1_ = 0x13;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0xe6,0x50,0,0);
  }
  puStack_8._0_1_ = 0;
  param_1[0x47] = uVar3;
  pvVar1 = operator_new(0x72);
  puStack_8._0_1_ = 0x14;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0xe0,0x1f8,0,0);
  }
  puStack_8._0_1_ = 0;
  param_1[0x4e] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x15;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_partisans_b_0085cee8);
  }
  puStack_8._0_1_ = 0;
  param_1[0x52] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x16;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_w_infrastruct_0085cec0);
  }
  param_1[0x53] = uVar3;
  puStack_8._0_1_ = 0;
  *(undefined1 *)(param_1[0x52] + 0x68) = 1;
  *(undefined1 *)(param_1[0x53] + 0x68) = 1;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x17;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  param_1[0x38] = uVar3;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x18;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  param_1[0x39] = uVar3;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x19;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  param_1[0x3a] = uVar3;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x1a;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  param_1[0x3b] = uVar3;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x1b;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce68,0,0xffffffff);
  }
  param_1[0x3c] = uVar3;
  puStack_8._0_1_ = 0;
  *(undefined4 *)(param_1[0x38] + 0x88) = 0x69;
  *(undefined4 *)(param_1[0x39] + 0x88) = 99;
  *(undefined4 *)(param_1[0x3a] + 0x88) = 0x6c;
  *(undefined4 *)(param_1[0x3b] + 0x88) = 0x61;
  *(undefined4 *)(param_1[0x3c] + 0x88) = 0x6e;
  *(undefined1 *)(param_1[0x38] + 0x68) = 1;
  *(undefined1 *)(param_1[0x39] + 0x68) = 1;
  *(undefined1 *)(param_1[0x3a] + 0x68) = 1;
  *(undefined1 *)(param_1[0x3b] + 0x68) = 1;
  *(undefined1 *)(param_1[0x3c] + 0x68) = 1;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x1c;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  param_1[0x42] = uVar3;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x1d;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  param_1[0x43] = uVar3;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x1e;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  param_1[0x44] = uVar3;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x1f;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  puStack_8._0_1_ = 0;
  param_1[0x45] = uVar3;
  pvVar1 = operator_new(0xaa);
  puStack_8._0_1_ = 0x20;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_prov_upgrad_0085ce94,0,0xffffffff);
  }
  param_1[0x46] = uVar3;
  puStack_8._0_1_ = 0;
  *(undefined4 *)(param_1[0x42] + 0x88) = 0x66;
  *(undefined4 *)(param_1[0x43] + 0x88) = 0x70;
  *(undefined4 *)(param_1[0x44] + 0x88) = 0x72;
  *(undefined4 *)(param_1[0x45] + 0x88) = 0x6b;
  *(undefined4 *)(param_1[0x46] + 0x88) = 0x75;
  *(undefined1 *)(param_1[0x42] + 0x68) = 1;
  *(undefined1 *)(param_1[0x43] + 0x68) = 1;
  *(undefined1 *)(param_1[0x44] + 0x68) = 1;
  *(undefined1 *)(param_1[0x45] + 0x68) = 1;
  *(undefined1 *)(param_1[0x46] + 0x68) = 1;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x57] = 0;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x21;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_resource_depo_0085ce40);
  }
  puStack_8._0_1_ = 0;
  param_1[0x4c] = uVar3;
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 0x22;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_beach_bmp_0085ce20);
  }
  puStack_8._0_1_ = 0;
  param_1[0x4d] = uVar3;
  pvVar1 = operator_new(0x72);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x23);
  if (pvVar1 == (void *)0x0) {
    param_1[0x58] = 0;
  }
  else {
    uVar3 = FUN_00434930(0xe0,0x54,0,0);
    param_1[0x58] = uVar3;
  }
  ExceptionList = param_1;
  return param_1;
}


