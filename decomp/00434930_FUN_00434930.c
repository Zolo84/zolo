// FUN_00434930 @ 434930 size=1194

undefined4 * __thiscall
FUN_00434930(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007ba7fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_LAB_007e4284;
  local_4 = 0;
  FUN_00425a80(&DAT_0082eeb0);
  local_4._0_1_ = 1;
  FUN_00583720();
  *(undefined4 *)((int)param_1 + 0x12) = &PTR_FUN_007e3858;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007e386c;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_LAB_007e4130;
  *(undefined4 *)((int)param_1 + 0x2a) = param_3;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 1;
  *(undefined4 *)((int)param_1 + 0x6e) = param_5;
  *param_1 = &PTR_LAB_007e4240;
  *(undefined4 *)((int)param_1 + 0x12) = &PTR_LAB_007e422c;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007e4228;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_LAB_007e4224;
  pvVar4 = operator_new(0x20);
  local_4._0_1_ = 3;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00434500(param_4);
  }
  *(undefined4 *)((int)param_1 + 0x52) = uVar5;
  local_4._0_1_ = 2;
  uVar3 = (undefined1)local_4;
  local_4._0_1_ = 2;
  switch(param_4) {
  case 1:
    local_4._0_1_ = uVar3;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 10;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_GFX_interface_menu_scrollbar_top_0083b9cc,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x42) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 0xb;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_GFX_interface_menu_scrollbar_bot_0083b9a4,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x46) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,0xc);
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_00433570(s_GFX_interface_menu_scrollbar_bar_0083b97c,0,0xffffffff);
      goto LAB_00434d2c;
    }
    break;
  case 2:
    local_4._0_1_ = uVar3;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 0xd;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_GFX_interface_frontend_scrollbar_0083b950,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x42) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 0xe;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_GFX_interface_frontend_scrollbar_0083b924,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x46) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,0xf);
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_00433570(s_GFX_interface_frontend_scrollbar_0083b8f8,0,0xffffffff);
      goto LAB_00434d2c;
    }
    break;
  case 3:
    local_4._0_1_ = uVar3;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 7;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_gfx_interface_eyr_scrollbar_dark_0083ba4c,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x42) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 8;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_gfx_interface_eyr_scrollbar_dark_0083ba20,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x46) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,9);
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_00433570(s_gfx_interface_eyr_scrollbar_dark_0083b9f4,0,0xffffffff);
      goto LAB_00434d2c;
    }
    break;
  case 4:
  case 5:
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 4;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_gfx_empty_bmp_0083ba78,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x42) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 5;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_gfx_empty_bmp_0083ba78,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x46) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,6);
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_00433570(s_gfx_empty_bmp_0083ba78,0,0xffffffff);
      goto LAB_00434d2c;
    }
    break;
  default:
    local_4._0_1_ = uVar3;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 0x10;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_gfx_interface_btn_pil_up_bmp_0083b8d8,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x42) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 0x11;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_gfx_interface_btn_pil_down_bmp_0083b8b8,0,0xffffffff);
    }
    local_4._0_1_ = 2;
    *(undefined4 *)((int)param_1 + 0x46) = uVar5;
    pvVar4 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,0x12);
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_00433570(s_gfx_interface_btn_slider_bmp_0083b898,0,0xffffffff);
      goto LAB_00434d2c;
    }
  }
  uVar5 = 0;
LAB_00434d2c:
  *(undefined4 *)((int)param_1 + 0x4a) = uVar5;
  uVar5 = DAT_00bd1bac;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)param_1 + 0x4e) = DAT_00bd1bac;
  FUN_00415d30(uVar5);
  FUN_00415d30(uVar5);
  FUN_00415d30(uVar5);
  for (piVar1 = (int *)param_1[1]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    *(undefined4 *)(*piVar1 + 0x16) = uVar5;
  }
  iVar2 = *(int *)((int)param_1 + 0x2e);
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  iVar6 = FUN_00415bd0();
  FUN_00435410(iVar6 + iVar2 + *(int *)((int)param_1 + 0x32));
  *(undefined4 *)((int)param_1 + 0x3e) = param_1[1];
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  if (param_4 == 5) {
    pcVar7 = s__eurostilecond14FixNum_bmp_0083b87b + 1;
  }
  else {
    pcVar7 = s_eurostilecond14_bmp_0082f010;
  }
  uVar5 = FUN_004136a0(pcVar7);
  *(undefined4 *)((int)param_1 + 0x56) = uVar5;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 1;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  ExceptionList = local_c;
  return param_1;
}


