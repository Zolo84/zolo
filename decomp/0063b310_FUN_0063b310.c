// FUN_0063b310 @ 63b310 size=715

undefined4 * __thiscall FUN_0063b310(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00415020();
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_007efb64;
  param_1[2] = &PTR_LAB_007efb60;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x7e) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0x82) = *(undefined2 *)(param_2 + 0x10);
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0063a800(*(undefined4 *)(param_2 + 0x18));
  }
  local_4._0_1_ = 0;
  param_1[0x22] = uVar2;
  pvVar1 = operator_new(0x72);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00434930(200,0xdf,0,0);
  }
  param_1[0x23] = iVar3;
  *(undefined2 *)(iVar3 + 0x5a) = 0xffff;
  local_4._0_1_ = 0;
  *(undefined1 *)(param_1[0x23] + 0x5d) = 0;
  uVar2 = FUN_0075a210();
  FUN_004361a0(uVar2);
  pvVar1 = operator_new(0x9c);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00519130(0x100,0xe,2);
  }
  param_1[0x24] = uVar2;
  local_1c = param_1 + 0x2c;
  iVar3 = 0;
  do {
    local_4._0_1_ = 0;
    pvVar1 = operator_new(0x9c);
    local_4._0_1_ = 4;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00519130(0x34,0xc,2);
    }
    local_4._0_1_ = 0;
    local_1c[-7] = uVar2;
    puVar4 = operator_new(0x84);
    local_4._0_1_ = 5;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00414c80(s_gfx_interface_tc_icons_bmp_008612e0);
      local_4._0_1_ = 6;
      *puVar4 = &PTR_FUN_007ef9d0;
      puVar4[2] = &PTR_LAB_007ef9cc;
      FUN_00415b90(0x6d);
      FUN_00415b50(iVar3);
      *(undefined1 *)((int)puVar4 + 0x82) = 0;
      pvVar1 = operator_new(0x7e);
      local_4._0_1_ = 7;
      if (pvVar1 == (void *)0x0) {
        *(undefined4 *)((int)puVar4 + 0x7e) = 0;
      }
      else {
        uVar2 = FUN_00414c80(s_gfx_interface_tc_icon_overlay_bm_008612bc);
        *(undefined4 *)((int)puVar4 + 0x7e) = uVar2;
      }
    }
    iVar3 = iVar3 + 1;
    local_4._0_1_ = 0;
    *local_1c = puVar4;
    local_1c = local_1c + 1;
  } while (iVar3 < 7);
  pcVar5 = s_gfx_interface__bmp_008615cc;
  switch(*(undefined4 *)(*(int *)(param_2 + 0x18) + 0x7e)) {
  case 0:
    pcVar5 = s_gfx_interface_bg_techdetail_infa_008615a0;
    break;
  case 1:
    pcVar5 = s_gfx_interface_bg_techdetail_tank_00861578;
    break;
  case 2:
    pcVar5 = s_gfx_interface_bg_techdetail_nava_00861550;
    break;
  case 3:
    pcVar5 = s_gfx_interface_bg_techdetail_air__0086152c;
    break;
  case 4:
    pcVar5 = s_gfx_interface_bg_techdetail_indu_00861500;
    break;
  case 5:
    pcVar5 = s_gfx_interface_bg_techdetail_land_008614d0;
    break;
  case 6:
    pcVar5 = s_gfx_interface_bg_techdetail_secr_008614a8;
    break;
  case 7:
    pcVar5 = s_gfx_interface_bg_techdetail_nava_00861478;
    break;
  case 8:
    pcVar5 = s_gfx_interface_bg_techdetail_air__00861448;
  }
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(pcVar5);
  }
  local_4._0_1_ = 0;
  param_1[0x21] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (pvVar1 == (void *)0x0) {
    param_1[0x33] = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_blueprints_bmp_0086140c);
    param_1[0x33] = uVar2;
  }
  ExceptionList = local_c;
  return param_1;
}


