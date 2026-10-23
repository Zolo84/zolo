// FUN_005f8450 @ 5f8450 size=2382

undefined4 * FUN_005f8450(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cf289;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_declare_war_bm_0085ddcc);
      *(undefined4 *)((int)puVar2 + 0x82) = 0;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee294;
      puVar2[2] = &PTR_LAB_007ee290;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 1:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_offer_alliance_0085dda4);
      *(undefined4 *)((int)puVar2 + 0x82) = 1;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee224;
      puVar2[2] = &PTR_LAB_007ee220;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_offer_alliance_0085dda4);
      *(undefined4 *)((int)puVar2 + 0x82) = 2;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee1b4;
      puVar2[2] = &PTR_LAB_007ee1b0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 3;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 3;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee144;
      puVar2[2] = &PTR_LAB_007ee140;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 4;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_leave_alliance_0085dd50);
      *(undefined4 *)((int)puVar2 + 0x82) = 4;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee0d4;
      puVar2[2] = &PTR_LAB_007ee0d0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 5;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_ban_from_allia_0085dd28);
      *(undefined4 *)((int)puVar2 + 0x82) = 5;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee064;
      puVar2[2] = &PTR_LAB_007ee060;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 6;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_influence_nati_0085dd00);
      *(undefined4 *)((int)puVar2 + 0x82) = 6;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edff4;
      puVar2[2] = &PTR_LAB_007edff0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 7;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 7;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edf84;
      puVar2[2] = &PTR_LAB_007edf80;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 8;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_military_acces_0085dcd8);
      *(undefined4 *)((int)puVar2 + 0x82) = 8;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edf14;
      puVar2[2] = &PTR_LAB_007edf10;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 9;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 9;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edea4;
      puVar2[2] = &PTR_LAB_007edea0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 10:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 10;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 10;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ede34;
      puVar2[2] = &PTR_LAB_007ede30;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0xb;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_military_contr_0085dcb0);
      *(undefined4 *)((int)puVar2 + 0x82) = 0xb;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007eddc4;
      puVar2[2] = &PTR_LAB_007eddc0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0xc;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 0xc;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edd54;
      puVar2[2] = &PTR_LAB_007edd50;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xd:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x8a);
    local_4 = 0xd;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_00600960(0xd,param_2,s_gfx_interface_dip_expeditionary__0085dc84);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xe:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0xe;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_dip_guarantee_inde_0085dc54);
      *(undefined4 *)((int)puVar2 + 0x82) = 0xe;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edce4;
      puVar2[2] = &PTR_LAB_007edce0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xf:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0xf;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 0xf;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edc74;
      puVar2[2] = &PTR_LAB_007edc70;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x10:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0x10;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 0x10;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edc04;
      puVar2[2] = &PTR_LAB_007edc00;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x11:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0x12;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_005f83d0(0x11,param_2,s_gfx_interface_bg_action_negotiat_0085dd78);
      *puVar2 = &PTR_FUN_007edb24;
      puVar2[2] = &PTR_LAB_007edb20;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x12:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x166);
    local_4 = 0x13;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_005fd9a0(0x12,param_2,s_gfx_interface_bg_action_big_nego_0085dc24);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x13:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0x14;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_005f83d0(0x13,param_2,s_gfx_interface_dip_offer_non_agre_0085dbf4);
      *puVar2 = &PTR_FUN_007edab4;
      puVar2[2] = &PTR_LAB_007edab0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x14:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0x17;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_005f83d0(0x14,param_2,s_gfx_interface_dip_cancel_nonagre_0085dbac);
      *puVar2 = &PTR_FUN_007eda44;
      puVar2[2] = &PTR_LAB_007eda40;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x15:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x192);
    local_4 = 0x18;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_00605cd0(0x15,param_2,s_gfx_interface_dip_offer_trade_bm_0085db88);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x16:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x8a);
    local_4 = 0x19;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_00605520(0x16,param_2,s_gfx_interface_break_trade_agreem_0085db60);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x18:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x9d14);
    local_4 = 0x16;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_005fe8b0(0x18,param_2,s_gfx_interface_bg_peace_bmp_0085dbd8);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x19:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x86);
    local_4 = 0x11;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 0x19;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007edb94;
      puVar2[2] = &PTR_LAB_007edb90;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x1a:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x8a);
    local_4 = 0x15;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_00606f90(0x1a,param_2,s_gfx_interface_bg_action_negotiat_0085dd78);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0x1b:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x8a);
    local_4 = 0x1a;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_00605a40(0x1b,param_2,s_gfx_interface_bg_action_negotiat_0085dd78);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


