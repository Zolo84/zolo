// FUN_00648fb0 @ 648fb0 size=6251

undefined4 * __fastcall FUN_00648fb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 local_11c;
  void *pvStack_40;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2b10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00445090();
  puVar2 = param_1 + 0x4f22;
  param_1[0x4f21] = &PTR_LAB_007e4130;
  *puVar2 = &PTR_LAB_007ef58c;
  *(undefined2 *)((int)param_1 + 0x13c92) = 0;
  param_1[0x4f25] = 0;
  *(undefined2 *)(param_1 + 0x4f40) = 0;
  *(undefined4 *)((int)param_1 + 0x13d02) = 0;
  *(undefined2 *)((int)param_1 + 0x13d2a) = 0;
  param_1[0x4f4b] = 0;
  *(undefined2 *)((int)param_1 + 0x13d3a) = 0;
  param_1[0x4f4f] = 0;
  param_1[0x4f52] = 0;
  param_1[0x4f53] = 0;
  param_1[0x4f54] = 0;
  *(undefined1 *)(param_1 + 0x4f55) = 0;
  param_1[0x4f51] = &PTR_LAB_007e36b4;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00418f40();
  param_1[0x4f51] = &PTR_FUN_007e36fc;
  *(undefined ***)((int)param_1 + 0x13d56) = &PTR_LAB_007e36e8;
  *(undefined ***)((int)param_1 + 0x13d5e) = &PTR_LAB_007e36e4;
  *(undefined4 *)((int)param_1 + 0x13d76) = 0;
  *(undefined4 *)((int)param_1 + 0x13d7a) = 0;
  *(undefined4 *)((int)param_1 + 0x13d7e) = 0;
  *(undefined1 *)((int)param_1 + 0x13d82) = 0;
  *(undefined ***)((int)param_1 + 0x13d72) = &PTR_LAB_007f09b0;
  *(undefined4 *)((int)param_1 + 0x21dce) = 0;
  *(undefined4 *)((int)param_1 + 0x21dd2) = 0;
  *(undefined1 *)(param_1 + 0x8792) = 0;
  *(undefined4 *)((int)param_1 + 0x21e7e) = 0;
  *(undefined4 *)((int)param_1 + 0x21e82) = 0;
  *(undefined4 *)((int)param_1 + 0x21e86) = 0;
  *(undefined1 *)((int)param_1 + 0x21e8a) = 0;
  *(undefined ***)((int)param_1 + 0x21e7a) = &PTR_FUN_007f0980;
  *(undefined2 *)(param_1 + 0x87a7) = 0;
  *(undefined4 *)((int)param_1 + 0x21e9e) = 0;
  *(undefined2 *)((int)param_1 + 0x21ea6) = 0;
  param_1[0x87aa] = 0;
  param_1[0x87ad] = 0;
  param_1[0x87ae] = 0;
  param_1[0x87af] = 0;
  *(undefined1 *)(param_1 + 0x87b0) = 0;
  param_1[0x87ac] = &PTR_LAB_007e6edc;
  local_4._0_1_ = 5;
  FUN_007a8800((int)param_1 + 0x21ec2,0x12,10,FUN_00499510,FUN_00499530);
  *(undefined4 *)((int)param_1 + 0x221a6) = 0;
  *(undefined4 *)((int)param_1 + 0x221aa) = 0;
  *(undefined4 *)((int)param_1 + 0x221ae) = 0;
  *(undefined1 *)((int)param_1 + 0x221b2) = 0;
  *(undefined ***)((int)param_1 + 0x221a2) = &PTR_LAB_007ef1f8;
  *(undefined1 *)((int)param_1 + 0x221c2) = 0;
  *param_1 = &PTR_LAB_007f04e0;
  local_4._0_1_ = 7;
  *(undefined ***)((int)param_1 + 10) = &PTR_FUN_007f04d8;
  puVar1 = (undefined4 *)((int)param_1 + 0xe);
  *puVar1 = &PTR_LAB_007f04c4;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007f04c0;
  param_1[0x4f21] = &PTR_FUN_007f04bc;
  *puVar2 = &PTR_LAB_007f04b8;
  param_1[0x4f26] = 0;
  pvVar3 = operator_new(0x94);
  local_4._0_1_ = 8;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00416810(s_gfx_interface_statusbar_bmp_00866658);
  }
  local_4._0_1_ = 7;
  *(undefined4 *)((int)param_1 + 0x13d06) = uVar4;
  pvVar3 = operator_new(0x12a);
  local_4._0_1_ = 9;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_006ce6b0(param_1);
  }
  param_1[0x4f63] = uVar4;
  param_1[0x4f64] = 0;
  param_1[0x4f65] = 0;
  DAT_00d0ca90 = param_1;
  *(undefined4 *)((int)param_1 + 0x13d0a) = 0;
  *(undefined1 *)(param_1 + 0x8795) = 0;
  local_4._0_1_ = 7;
  *(undefined1 *)((int)param_1 + 0x21de2) = 0;
  pvVar3 = operator_new(0x10c);
  local_4._0_1_ = 10;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_006431f0(s_config_buttons_txt_00866644);
  }
  local_4._0_1_ = 7;
  param_1[0x4f23] = uVar4;
  pvVar3 = operator_new(0x26);
  local_4._0_1_ = 0xb;
  if (pvVar3 == (void *)0x0) {
    local_11c = 0;
  }
  else {
    local_11c = FUN_00648a50(param_1);
  }
  local_4._0_1_ = 7;
  *(undefined4 *)(DAT_00d13360 + 0x60) = local_11c;
  pvVar3 = operator_new(0x94);
  local_4._0_1_ = 0xc;
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00416810(s_gfx_interface_statusbarselect_bm_00866620);
  }
  *(int **)((int)param_1 + 0x21e56) = piVar5;
  local_4 = CONCAT31(local_4._1_3_,7);
  (**(code **)(*piVar5 + 0x34))(9);
  iVar7 = *(int *)((int)param_1 + 0x21e56);
  *(undefined4 *)(iVar7 + 0x22) = 0;
  *(undefined4 *)(iVar7 + 0x26) = 0xf;
  *(undefined1 *)(iVar7 + 0x67) = 0;
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    *puVar6 = &PTR_FUN_007ecebc;
  }
  *(undefined4 **)((int)param_1 + 0x21e5a) = puVar6;
  puVar6 = operator_new(0x14);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    *puVar6 = &PTR_FUN_007ecebc;
  }
  param_1[0x4f4c] = puVar6;
  iVar7 = param_1[0x4f26];
  if (iVar7 == 1) {
    *(undefined1 *)(param_1 + 0x4f70) = 0;
    param_1[0x4f26] = param_1[0x4f26] + -1;
  }
  else if (iVar7 < 2) {
    *(undefined1 *)(param_1 + 0x4f70) = 0;
  }
  else {
    param_1[0x4f26] = iVar7 + -1;
  }
  *(undefined4 *)((int)param_1 + 0x21e72) = 1;
  *(undefined1 *)((int)param_1 + 0x13d0e) = 0;
  *(undefined1 *)(param_1 + 0x4f4d) = 0;
  pvVar3 = operator_new(0x94);
  puStack_8._0_1_ = 0xd;
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00416810(s_gfx_interface_select_new_bmp_00866600);
  }
  *(int **)((int)param_1 + 0x21f7e) = piVar5;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,7);
  (**(code **)(*piVar5 + 0x34))(0xb);
  (**(code **)(**(int **)((int)param_1 + 0x21f7e) + 0x38))(0);
  *(undefined1 *)(*(int *)((int)param_1 + 0x21f7e) + 0xd) = 1;
  uVar4 = FUN_00413d60(s_select_new_bmp_008665f0);
  FUN_00415f20(uVar4);
  pvVar3 = operator_new(0x94);
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00416810(s_gfx_interface_select_new_bmp_00866600);
  }
  *(int **)((int)param_1 + 0x21f82) = piVar5;
  (**(code **)(*piVar5 + 0x34))(0xb);
  (**(code **)(**(int **)((int)param_1 + 0x21f82) + 0x38))(0);
  uVar4 = FUN_00413d60(s_select_new_bmp_008665f0);
  FUN_00415f20(uVar4);
  *(undefined1 *)(*(int *)((int)param_1 + 0x21f82) + 0xd) = 1;
  pvVar3 = operator_new(0x94);
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00416810(s_gfx_interface_select_new_bmp_00866600);
  }
  *(int **)((int)param_1 + 0x21f86) = piVar5;
  (**(code **)(*piVar5 + 0x34))(0xb);
  (**(code **)(**(int **)((int)param_1 + 0x21f86) + 0x38))(0);
  uVar4 = FUN_00413d60(s_select_new_bmp_008665f0);
  FUN_00415f20(uVar4);
  *(undefined1 *)(*(int *)((int)param_1 + 0x21f86) + 0xd) = 1;
  pvVar3 = operator_new(0x94);
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00416810(s_gfx_interface_select_counter_bmp_008665cc);
  }
  *(int **)((int)param_1 + 0x21f8a) = piVar5;
  (**(code **)(*piVar5 + 0x34))(0xe);
  iVar7 = *(int *)((int)param_1 + 0x21f8a);
  *(undefined4 *)(iVar7 + 0x22) = 0;
  *(undefined4 *)(iVar7 + 0x26) = 6;
  *(undefined1 *)(iVar7 + 0x67) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x21f8a) + 0x82) = 0xffffffff;
  FUN_0040fd60(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1,0x867,0);
  FUN_0040fd60(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1,400,3);
  FUN_0040fd60(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1,0x89a,2);
  FUN_0040fd60(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1,9000,5);
  FUN_0040fd60(pvVar3,0x868,0);
  FUN_0040fd60(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1,0x960,4);
  FUN_0040fd60(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1,0x1f5,1);
  *(undefined4 *)((int)param_1 + 0x21dd6) = 0;
  *(undefined4 *)((int)param_1 + 0x21dda) = 0;
  *(undefined4 *)((int)param_1 + 0x21dde) = 0;
  *(undefined1 *)((int)param_1 + 0x21f8e) = 0;
  *(undefined1 *)((int)param_1 + 0x2208e) = 0;
  FUN_006d43b0(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x4f21));
  *(undefined1 *)((int)param_1 + 0x21e9a) = 0;
  *(undefined4 *)((int)param_1 + 0x21f76) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x13dc6) = 0;
  *(undefined1 *)((int)param_1 + 0x1adc6) = 0;
  uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)((int)param_1 + 0x21e5e) = uVar4;
  *(undefined4 *)((int)param_1 + 0x22196) = 0;
  FUN_004dcb20(*(undefined4 *)((int)param_1 + 6),1);
  *(undefined4 *)((int)param_1 + 0x21e62) = 0;
  pvVar3 = operator_new(0xbc);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0061e1d0(param_1);
  }
  param_1[0x8779] = uVar4;
  pvVar3 = operator_new(0xdc);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005dbf90(param_1);
  }
  param_1[0x8780] = uVar4;
  pvVar3 = operator_new(0xd4);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005d8510(param_1);
  }
  param_1[0x877f] = uVar4;
  pvVar3 = operator_new(0x192);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005deff0(param_1);
  }
  param_1[0x877e] = uVar4;
  pvVar3 = operator_new(0x11e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005d6160(param_1);
  }
  param_1[0x8781] = uVar4;
  pvVar3 = operator_new(0x266);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005e9230(param_1);
  }
  param_1[0x877b] = uVar4;
  pvVar3 = operator_new(0x266);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005e65d0(param_1);
  }
  param_1[0x877c] = uVar4;
  pvVar3 = operator_new(0x164);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005eb190(param_1);
  }
  param_1[0x877d] = uVar4;
  pvVar3 = operator_new(0xd4);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005f0f10(param_1);
  }
  param_1[0x877a] = uVar4;
  pvVar3 = operator_new(0xc2);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00638cb0(param_1);
  }
  param_1[0x878d] = uVar4;
  pvVar3 = operator_new(0x9ba);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0062c5f0(param_1);
  }
  param_1[0x8788] = uVar4;
  pvVar3 = operator_new(0x12e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0063ecc0(param_1);
  }
  param_1[0x8789] = uVar4;
  pvVar3 = operator_new(0xd2);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0061f140(param_1);
  }
  param_1[0x878c] = uVar4;
  pvVar3 = operator_new(0xc48);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005cc870(param_1);
  }
  param_1[0x878e] = uVar4;
  pvVar3 = operator_new(0xd8);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005f0510(param_1);
  }
  param_1[0x8782] = uVar4;
  pvVar3 = operator_new(0xd0);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0060a210(param_1);
  }
  param_1[0x8783] = uVar4;
  pvVar3 = operator_new(0xc0);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005cbc60(param_1);
  }
  param_1[0x8785] = uVar4;
  pvVar3 = operator_new(0xc0);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005c6660(param_1);
  }
  param_1[0x8787] = uVar4;
  pvVar3 = operator_new(0xc0);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005db1f0(param_1);
  }
  param_1[0x8786] = uVar4;
  pvVar3 = operator_new(0xd8);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005ea390(param_1);
  }
  param_1[0x8784] = uVar4;
  pvVar3 = operator_new(0xc0);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005d4d30(param_1);
  }
  param_1[0x878b] = uVar4;
  pvVar3 = operator_new(0x1dc);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_006177e0(param_1);
  }
  param_1[0x878f] = uVar4;
  pvVar3 = operator_new(0xce);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005d5700(param_1);
  }
  param_1[0x878a] = uVar4;
  pvVar3 = operator_new(0x2a0);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0060bda0(param_1);
  }
  param_1[0x8790] = uVar4;
  iVar7 = FUN_006436d0(0x1a);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x1b);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x1c);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x1d);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x1e);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x1f);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x20);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x1a);
  *(undefined1 *)(iVar7 + 0xa2) = 1;
  iVar7 = FUN_006436d0(0x1b);
  *(undefined1 *)(iVar7 + 0xa2) = 1;
  iVar7 = FUN_006436d0(0x1c);
  *(undefined1 *)(iVar7 + 0xa2) = 1;
  iVar7 = FUN_006436d0(0x1d);
  *(undefined1 *)(iVar7 + 0xa2) = 1;
  iVar7 = FUN_006436d0(0x1e);
  *(undefined1 *)(iVar7 + 0xa2) = 1;
  iVar7 = FUN_006436d0(0x1f);
  *(undefined1 *)(iVar7 + 0xa2) = 1;
  iVar7 = FUN_006436d0(0x20);
  *(undefined1 *)(iVar7 + 0xa2) = 1;
  iVar7 = FUN_006436d0(0x2e);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x2c);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x2b);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x2a);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x29);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x28);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x27);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x26);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x25);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x24);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x21);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x22);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x23);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x17);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x19);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x40);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x41);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(5);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(6);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x2d);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x38);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(2);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(3);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(4);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x31);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x32);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x33);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x34);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x35);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x36);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x37);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x39);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x39);
  *(undefined1 *)(iVar7 + 0x68) = 1;
  iVar7 = FUN_006436d0(0);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(1);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x30);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x2f);
  *(uint *)(iVar7 + 0x1aa) = -(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar2;
  iVar7 = FUN_006436d0(0x39);
  if (*(int *)(iVar7 + 0x88) < 1) {
    iVar7 = FUN_006436d0(0x39);
    *(undefined4 *)(iVar7 + 0x88) = 0x13;
  }
  *(undefined4 *)((int)param_1 + 0x13d6a) = 0;
  param_1[0x4f61] = 0;
  param_1[0x4f62] = 0;
  param_1[0x4f69] = 0;
  param_1[0x4f6a] = 0;
  param_1[0x87ab] = 0;
  *(undefined4 *)((int)param_1 + 0x21ea2) = 0;
  DAT_00bda0f8 = param_1;
  *(undefined4 **)((int)param_1 + 0x13dc2) = param_1;
  *(undefined1 *)(param_1 + 0x4f24) = 0;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00415020();
  }
  *(undefined4 *)((int)param_1 + 0x21dc6) = uVar4;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00415020();
  }
  param_1[0x4f67] = uVar4;
  param_1[0x4f68] = 0;
  if ((DAT_00bd1500 != 0) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) {
    pvVar3 = operator_new(0x1e);
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_006cfe60();
    }
    param_1[0x4f65] = uVar4;
  }
  pvVar3 = operator_new(0x94);
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00416810(s_gfx_interface_loaded_inf_bmp_008665ac);
  }
  param_1[0x4f6b] = iVar7;
  *(undefined4 *)(iVar7 + 0x82) = 0xffffffff;
  pvVar3 = operator_new(0x94);
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00416810(s_gfx_interface_loaded_air_bmp_0086658c);
  }
  param_1[0x4f6c] = iVar7;
  *(undefined4 *)(iVar7 + 0x82) = 0xffffffff;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_Blackstripe2_bmp_0086656c);
  }
  param_1[0x4f6e] = uVar4;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_Blackstripe_bmp_0086654c);
  }
  param_1[0x4f6d] = uVar4;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_minimap_overlay_bm_00866528);
  }
  param_1[0x4f6f] = uVar4;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00415020();
  }
  *(undefined4 *)((int)param_1 + 0x21e4a) = uVar4;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_res_nuke_bmp_0085ad04);
  }
  param_1[0x8791] = uVar4;
  iVar7 = 0;
  piVar5 = param_1 + 0x4f31;
  do {
    FUN_007a630a(&stack0xfffffed4,s_gfx_interface_res__d_bmp_0086650c,iVar7);
    pvVar3 = operator_new(0x7e);
    if (pvVar3 == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_00414c80(&stack0xfffffed4);
    }
    piVar5[-10] = iVar8;
    uVar4 = FUN_00413d60(s_resources_small_pallete_bmp_00860438);
    FUN_00415f20(uVar4);
    *(undefined1 *)(piVar5[-10] + 0x68) = 1;
    pvVar3 = operator_new(0x7e);
    if (pvVar3 == (void *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_00414c80(&stack0xfffffed4);
    }
    *piVar5 = iVar8;
    uVar4 = FUN_00413d60(s_resources_small_pallete_bmp_00860438);
    FUN_00415f20(uVar4);
    iVar8 = *piVar5;
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 1;
    *(undefined1 *)(iVar8 + 0x68) = 1;
  } while (iVar7 < 10);
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_resource_bmp_008664f0);
  }
  param_1[0x4f3b] = uVar4;
  uVar4 = FUN_00413d60(s_resource_palette_bmp_008664d8);
  FUN_00415f20(uVar4);
  (**(code **)(*(int *)param_1[0x4f3b] + 0x34))(8);
  *(undefined1 *)(param_1[0x4f3b] + 0x68) = 1;
  pvVar3 = operator_new(0x94);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00416810(s_gfx_interface_resource_bmp_008664f0);
  }
  param_1[0x4f3c] = uVar4;
  uVar4 = FUN_00413d60(s_resource_palette_bmp_008664d8);
  FUN_00415f20(uVar4);
  (**(code **)(*(int *)param_1[0x4f3c] + 0x34))(8);
  *(undefined1 *)(param_1[0x4f3c] + 0x68) = 1;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_button_area_spy_le_008664ac);
  }
  param_1[0x4f3e] = uVar4;
  uVar4 = FUN_00413d60(s_spy_levels_palette_bmp_00866494);
  FUN_00415f20(uVar4);
  (**(code **)(*(int *)param_1[0x4f3e] + 0x34))(0x65);
  *(undefined1 *)(param_1[0x4f3e] + 0x68) = 1;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_button_area_spy_le_00866464);
  }
  param_1[0x4f3d] = uVar4;
  uVar4 = FUN_00413d60(s_spy_levels_palette_bmp_00866494);
  FUN_00415f20(uVar4);
  (**(code **)(*(int *)param_1[0x4f3d] + 0x34))(0x65);
  *(undefined1 *)(param_1[0x4f3d] + 0x68) = 1;
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00414c80(s_gfx_interface_target_bmp_00866448);
  }
  param_1[0x4f3f] = piVar5;
  (**(code **)(*piVar5 + 0x34))(1);
  *(undefined1 *)(param_1[0x4f3f] + 0x68) = 1;
  if (DAT_00dc4b5f != '\0') {
    uVar4 = FUN_007a6615(s_seazones_txt_00866438,&DAT_0082ef98);
    iVar7 = 0;
    if (0 < DAT_00877690) {
      do {
        iVar10 = iVar7;
        iVar9 = FUN_004e9370(iVar7);
        iVar8 = 0;
        if (((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) &&
           (iVar13 = 0, 0 < *(int *)(iVar9 + 0x290))) {
          iVar11 = 0;
          iVar7 = iVar10;
          do {
            iVar10 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar9 + 0x298) + iVar11));
            if (((*(int *)(iVar10 + 0x254) == 8) || (*(int *)(iVar10 + 0x254) == 9)) && (iVar8 == 0)
               ) {
              iVar8 = *(int *)(*(int *)(iVar9 + 0x298) + iVar11);
            }
            iVar13 = iVar13 + 1;
            iVar11 = iVar11 + 0xc;
          } while (iVar13 < *(int *)(iVar9 + 0x290));
        }
        FUN_007a6628(uVar4,s__d___d_0086642c,iVar7,iVar8);
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_00877690);
    }
    FUN_007a6429(uVar4);
  }
  *(undefined1 *)((int)param_1 + 0x21e4e) = 1;
  param_1[0x8794] = 0;
  param_1[0x4f50] = 0;
  pvVar3 = operator_new(0x72);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar12 = 0;
    uVar4 = 5;
    iVar7 = FUN_005841b0(5,0);
    uVar4 = FUN_00434930(0x110,iVar7 + -0x28,uVar4,uVar12);
  }
  *(undefined4 *)((int)param_1 + 0x13d16) = uVar4;
  *(undefined4 *)((int)param_1 + 0x13d26) = 0;
  *(undefined1 *)((int)param_1 + 0x2219a) = 0;
  *(undefined1 *)((int)param_1 + 0x2219b) = 0;
  *(undefined1 *)(param_1 + 0x8867) = 0;
  switch(*(undefined4 *)(*DAT_00d12b40 + 0x37a)) {
  case 0:
    *(undefined4 *)((int)param_1 + 0x221be) = 0xffffffff;
    break;
  case 1:
    *(undefined4 *)((int)param_1 + 0x221be) = 1;
    break;
  case 2:
    *(undefined4 *)((int)param_1 + 0x221be) = 3;
    break;
  case 3:
    *(undefined4 *)((int)param_1 + 0x221be) = 5;
    break;
  case 4:
    *(undefined4 *)((int)param_1 + 0x221be) = 10;
  }
  FUN_006432e0(0x2d);
  *(undefined1 *)(param_1 + 0x8792) = 1;
  *(undefined4 *)((int)param_1 + 0x21e6a) = 0;
  ExceptionList = pvStack_40;
  return param_1;
}


