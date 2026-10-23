// FUN_005c14d0 @ 5c14d0 size=1466

undefined4 * __fastcall FUN_005c14d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc85d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414c80(s_gfx_interface_image_air_mission__00859b08);
  puVar1 = param_1 + 0x28;
  local_4 = 0;
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  param_1[0x20] = 0;
  iVar6 = 2;
  do {
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 1) = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 6);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *param_1 = &PTR_FUN_007ec720;
  param_1[2] = &PTR_LAB_007ec71c;
  puVar1 = operator_new(0x18);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = DAT_00bd1bac;
    *puVar1 = &PTR_LAB_007e474c;
    puVar2 = operator_new(0x1e);
    local_4._0_1_ = 2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar1[1] = 0;
    }
    else {
      FUN_005c0c70();
      local_4._0_1_ = 3;
      FUN_00418f40();
      *puVar2 = &PTR_FUN_007e36fc;
      *(undefined ***)((int)puVar2 + 0x12) = &PTR_LAB_007e36e8;
      *(undefined ***)((int)puVar2 + 0x1a) = &PTR_LAB_007e36e4;
      puVar1[1] = puVar2;
    }
  }
  local_4._0_1_ = 0;
  param_1[0x23] = puVar1;
  iVar6 = FUN_0043fe20(s_gfx_interface_btn_radio_bmp_0083bf4c,1,0);
  *(undefined1 *)(iVar6 + 0x68) = 1;
  iVar6 = FUN_0043fe20(s_gfx_interface_btn_radio_bmp_0083bf4c,2,0);
  *(undefined1 *)(iVar6 + 0x68) = 1;
  iVar6 = FUN_0043fe20(s_gfx_interface_btn_radio_bmp_0083bf4c,3,0);
  *(undefined1 *)(iVar6 + 0x68) = 1;
  FUN_0043fd20();
  puVar1 = operator_new(0x1aa);
  local_4._0_1_ = 4;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar7 = 0x40;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar4,uVar3,uVar7);
    *puVar1 = &PTR_FUN_007e452c;
    puVar1[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007e4524;
    puVar1[0x22] = 0xd;
  }
  local_4._0_1_ = 0;
  param_1[0x24] = puVar1;
  puVar1 = operator_new(0x1aa);
  local_4._0_1_ = 5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar7 = 0x40;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar4,uVar3,uVar7);
    *puVar1 = &PTR_FUN_007ec6b8;
    puVar1[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar1[0x22] = 0xe;
  }
  local_1c = param_1 + 0x33;
  param_1[0x25] = puVar1;
  local_18 = 2;
  do {
    iVar6 = 4;
    puVar1 = local_1c;
    do {
      local_4._0_1_ = 0;
      pvVar5 = operator_new(0xaa);
      local_4._0_1_ = 6;
      if (pvVar5 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00433570(s_gfx_interface_button_area_btn_pl_00859ae0,0,0xffffffff);
      }
      local_4._0_1_ = 0;
      puVar1[-8] = uVar3;
      pvVar5 = operator_new(0xaa);
      local_4._0_1_ = 7;
      if (pvVar5 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00433570(s_gfx_interface_button_area_btn_mi_00859ab8,0,0xffffffff);
      }
      *puVar1 = uVar3;
      puVar1 = puVar1 + 2;
      iVar6 = iVar6 + -1;
      local_4._0_1_ = 0;
    } while (iVar6 != 0);
    local_1c = local_1c + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  pvVar5 = operator_new(0xb8);
  local_4._0_1_ = 8;
  if (pvVar5 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004403f0(0,0x42c80000,0x42480000,0x3f800000,s_gfx_empty_bmp_0083ba78,
                         s_gfx_empty_bmp_0083ba78,s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  local_4._0_1_ = 0;
  param_1[0x26] = uVar3;
  pvVar5 = operator_new(0xaa);
  local_4._0_1_ = 9;
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0x3b] = iVar6;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar6 + 0xa2) = 0;
  pvVar5 = operator_new(0xaa);
  local_4._0_1_ = 10;
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0xf2) = iVar6;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar6 + 0xa2) = 0;
  pvVar5 = operator_new(0xaa);
  local_4._0_1_ = 0xb;
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0x3e] = iVar6;
  local_4._0_1_ = 0;
  *(undefined1 *)(iVar6 + 0xa2) = 0;
  puVar1 = operator_new(0x18);
  local_4._0_1_ = 0xc;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = DAT_00bd1bac;
    *puVar1 = &PTR_LAB_007e474c;
    puVar2 = operator_new(0x1e);
    if (puVar2 == (undefined4 *)0x0) {
      puVar1[1] = 0;
    }
    else {
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 4) = 0;
      *puVar2 = &PTR_LAB_007e36b4;
      local_4._0_1_ = 0xe;
      FUN_00418f40();
      *puVar2 = &PTR_FUN_007e36fc;
      *(undefined ***)((int)puVar2 + 0x12) = &PTR_LAB_007e36e8;
      *(undefined ***)((int)puVar2 + 0x1a) = &PTR_LAB_007e36e4;
      puVar1[1] = puVar2;
    }
  }
  local_4._0_1_ = 0;
  *(undefined4 **)((int)param_1 + 0xfe) = puVar1;
  iVar6 = FUN_0043fe20(s_gfx_interface_btn_radio_bmp_0083bf4c,1,0);
  *(undefined1 *)(iVar6 + 0x68) = 1;
  iVar6 = FUN_0043fe20(s_gfx_interface_btn_radio_bmp_0083bf4c,2,0);
  *(undefined1 *)(iVar6 + 0x68) = 1;
  iVar6 = FUN_0043fe20(s_gfx_interface_btn_radio_bmp_0083bf4c,3,0);
  *(undefined1 *)(iVar6 + 0x68) = 1;
  FUN_0043fd20();
  pvVar5 = operator_new(0xb8);
  local_4._0_1_ = 0xf;
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004403f0(0,0x42c80000,0x42480000,0x3f800000,s_gfx_empty_bmp_0083ba78,
                         s_gfx_empty_bmp_0083ba78,s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  *(int *)((int)param_1 + 0x10a) = iVar6;
  *(undefined1 *)(iVar6 + 0x82) = 1;
  local_4._0_1_ = 0;
  FUN_004406a0();
  pvVar5 = operator_new(0x1aa);
  local_4._0_1_ = 0x10;
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    uVar7 = 0x40;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_MISSION_RESET_BUTTON_TEXT_00859a28);
    iVar6 = FUN_0043acc0(uVar4,uVar3,uVar7);
  }
  *(int *)((int)param_1 + 0x112) = iVar6;
  local_4._0_1_ = 0;
  *(undefined4 *)(iVar6 + 0x88) = 0x10;
  pvVar5 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0x11a) = iVar6;
  *(undefined1 *)(iVar6 + 0xa2) = 0;
  ExceptionList = local_c;
  return param_1;
}


