// FUN_006010a0 @ 6010a0 size=1123

undefined4 * FUN_006010a0(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cf8b4;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_bg_action_negotiat_0085dd78);
      *(undefined4 *)((int)puVar2 + 0x82) = 0;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee934;
      puVar2[2] = &PTR_LAB_007ee930;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 1:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x154);
    local_4 = 2;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_00601e30(1,param_2,s_gfx_interface_int_minister_assas_0085e494);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_int_smear_campaign_0085e4c4);
      *(undefined4 *)((int)puVar2 + 0x82) = 2;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee9ac;
      puVar2[2] = &PTR_LAB_007ee9a8;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 4;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_int_coup_bmp_0085e454);
      *(undefined4 *)((int)puVar2 + 0x82) = 3;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee844;
      puVar2[2] = &PTR_LAB_007ee840;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 5;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_int_sabotage_produ_0085e428);
      *(undefined4 *)((int)puVar2 + 0x82) = 4;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee7cc;
      puVar2[2] = &PTR_LAB_007ee7c8;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 6;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00600f20(5,param_2,s_gfx_interface_int_nuclear_sabota_0085e400,0);
      *puVar2 = &PTR_FUN_007ee754;
      puVar2[2] = &PTR_LAB_007ee750;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x92);
    local_4 = 7;
    if (pvVar1 != (void *)0x0) {
      puVar2 = (undefined4 *)FUN_00603510(6,param_2,s_gfx_interface_int_found_partisan_0085e3d8);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 8;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00600f20(7,param_2,s_gfx_interface_int_massmedia_bmp_0085e3b8,0);
      *puVar2 = &PTR_FUN_007ee6dc;
      puVar2[2] = &PTR_LAB_007ee6d8;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 9;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00600f20(8,param_2,s_gfx_interface_int_disrupt_tech_t_0085e390,0);
      *puVar2 = &PTR_FUN_007ee664;
      puVar2[2] = &PTR_LAB_007ee660;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 3;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_int_spy_defence_bm_0085e470);
      *(undefined4 *)((int)puVar2 + 0x82) = 9;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee8bc;
      puVar2[2] = &PTR_LAB_007ee8b8;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 10:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 10;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00414c80(s_gfx_interface_int_espionage_bmp_0085e370);
      *(undefined4 *)((int)puVar2 + 0x82) = 10;
      *(undefined4 *)((int)puVar2 + 0x7e) = param_2;
      *puVar2 = &PTR_FUN_007ee5ec;
      puVar2[2] = &PTR_LAB_007ee5e8;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  default:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x8e);
    local_4 = 0xb;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00600f20(param_1,param_2,s_gfx_interface_bg_action_negotiat_0085dd78,0);
      *puVar2 = &PTR_FUN_007ee934;
      puVar2[2] = &PTR_LAB_007ee930;
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


